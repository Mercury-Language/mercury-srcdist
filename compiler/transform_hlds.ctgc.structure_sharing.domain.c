/*
** Automatically generated from `structure_sharing.domain.m'
** by the Mercury compiler,
** version rotd-2019-10-27
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


// :- module transform_hlds.ctgc.structure_sharing.domain.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_sharing__domain__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_sharing.domain.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "digraph.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.selector.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"



struct transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0_s {
  MR_Box * transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont;
  void * transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__conv2_Pair_6;
};

struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__SetB_5;
  MR_Word * transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__Pair_6;
  MR_Cont transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont;
  void * transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemA_7;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemB_8;
  MR_Box transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv0_ElemA_7;
  MR_Box transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv1_ElemB_8;
};

struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0_s {
  MR_Box * transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont;
  void * transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__conv4_Pair_6;
};

struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0_s {
  MR_Box * transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont;
  void * transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__conv2_Pair_6;
};

struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__ModuleInfo_5;
  MR_bool transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_39_39;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeCtorInfo_40_40;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel1_14;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var2_15;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel2_16;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type1_17;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type2_18;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelSharingMap_22;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelectorList_23;
  jmp_buf transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Extension_25;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSet_27;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_30;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_31;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel_34;
  MR_Box transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv1_Sel_34;
  jmp_buf transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_1;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_44_44;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_45_45;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSel_29;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_32;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_42;
  MR_Word transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_43;
  MR_Box transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv3_Datastructure_33;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_data_set_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_data_set_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_data_set_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_data_set_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_data_set_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_data_set_0[1];

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_value_ordered_projection_type_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_name_ordered_projection_type_0[2];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_projection_type_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_selector_sharing_set_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_selector_sharing_set_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_selector_sharing_set_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_selector_sharing_set_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_selector_sharing_set_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_selector_sharing_set_0[1];

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_0[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_2[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_2;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_2[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_0[3];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_0[3];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_0[3];

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_and_status_0_0[2];

static const MR_DuArgLocn transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_locns_sharing_as_and_status_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_and_status_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_and_status_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_and_status_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_and_status_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_and_status_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_set_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_set_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_set_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_set_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_set_0[1];

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_set_0[1];

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var1_15,
  MR_Word Sel1_16,
  MR_Word Var2_17,
  MR_Word Sel2_18,
  MR_Word Type1_19,
  MR_Word Type2_20,
  MR_Word SelSharingMap_24,
  MR_Word LambdaHeadVar__1_39,
  MR_Word * LambdaHeadVar__2_40);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1607__1_9_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var1_15,
  MR_Word Var2_17,
  MR_Word Sel2_18,
  MR_Word Type2_20,
  MR_Word Extension_28,
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_8,
  MR_Word LambdaHeadVar__1_33,
  MR_Word LambdaHeadVar__2_34,
  MR_Word * LambdaHeadVar__3_35);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewMap1_21,
  MR_Word OldMap1_22,
  MR_Word VarTypes_23,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__optimize_for_deconstruct__620__1_2_p_0(
  MR_Word PreBirthSet_6,
  MR_Word LambdaHeadVar__1_12);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__create_internal_sharing__592__1_9_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Integer Pos1_16,
  MR_Word Var1_17,
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__number_args__553__1_4_p_0(
  MR_Word LambdaHeadVar__1_10,
  MR_Word * LambdaHeadVar__2_11,
  MR_Integer LambdaHeadVar__3_12,
  MR_Integer * LambdaHeadVar__4_13);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__bottom_sharing_is_safe_approximation_by_args__995__1_2_p_0(
  MR_Word ModuleInfo_4,
  MR_Word LambdaHeadVar__1_16);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_least_upper_bound__748__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingSet1_13,
  MR_Word SharingSet2_15,
  MR_Word * LambdaHeadVar__1_22);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_11,
  MR_Word OldSharingSet_12,
  MR_Word * LambdaHeadVar__1_23);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_widen_and_add_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data0_8,
  MR_Word STATE_VARIABLE_Datastructs_0_11,
  MR_Word * STATE_VARIABLE_Datastructs_12);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_add_datastruct_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data_8,
  MR_Word STATE_VARIABLE_Datastructs_0_10,
  MR_Word * STATE_VARIABLE_Datastructs_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0(
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Pair_6,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_project_test_3_p_0(
  MR_Word ProjectionType_4,
  MR_Word Vars_5,
  MR_Word Data_6);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ProgVar_12,
  MR_Word Selector_13,
  MR_Word DataSet0_14,
  MR_Word STATE_VARIABLE_DataMap_0_25,
  MR_Word * STATE_VARIABLE_DataMap_26,
  MR_Integer STATE_VARIABLE_DataMapSize_0_27,
  MR_Integer * STATE_VARIABLE_DataMapSize_28);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word VarType_10,
  MR_Word BaseSelector_11,
  MR_Word Selector_12,
  MR_Word Dataset0_13);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word Type_11,
  MR_Word NewSelDataSet_12,
  MR_Word OldMap_13,
  MR_Word NewSel_14,
  MR_Word OldSel_15);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word Type_11,
  MR_Word NewMap_12,
  MR_Word OldMap_13,
  MR_Word OldSelectors_14,
  MR_Word NewSel_15);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sum_data_set_sizes_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word DataSet_6,
  MR_Integer Size0_7,
  MR_Integer * Size_8);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_100_97_116_97_95_115_101_116_95_115_105_122_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word DataSet_6,
  MR_Integer Size0_7,
  MR_Integer * Size_8);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_add_2_4_p_0(
  MR_Word Sel_5,
  MR_Word DataSet0_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0(
  MR_Word Dict_7,
  MR_Word Subst_8,
  MR_Word Selector0_9,
  MR_Word DataSet0_10,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0(
  MR_Word ProjectionType_7,
  MR_Word Vars_8,
  MR_Word Selector_9,
  MR_Word DataSet0_10,
  MR_Word STATE_VARIABLE_SS_0_17,
  MR_Word * STATE_VARIABLE_SS_18);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word ProgVar_10,
  MR_Word STATE_VARIABLE_SelectorSharingSet_0_17,
  MR_Word * STATE_VARIABLE_SelectorSharingSet_18,
  MR_Integer STATE_VARIABLE_SharingSetSize_0_19,
  MR_Integer * STATE_VARIABLE_SharingSetSize_20);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_4_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Datastruct_8,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word DataSet_8,
  MR_Word STATE_VARIABLE_SS_0_12,
  MR_Word * STATE_VARIABLE_SS_13);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(
  MR_Word ProgVar_5,
  MR_Word SelectorSS_6,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_4_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Datastruct_8,
  MR_Word STATE_VARIABLE_Pairs_0_11,
  MR_Word * STATE_VARIABLE_Pairs_12);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Dataset_8,
  MR_Word STATE_VARIABLE_Pairs_0_12,
  MR_Word * STATE_VARIABLE_Pairs_13);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(
  MR_Word ProgVar_5,
  MR_Word SelSharingSet_6,
  MR_Word STATE_VARIABLE_Pairs_0_10,
  MR_Word * STATE_VARIABLE_Pairs_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingPairs_8,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__remove_entry_3_p_0(
  MR_Word SharingPair_4,
  MR_Word STATE_VARIABLE_SharingSet_0_8,
  MR_Word * STATE_VARIABLE_SharingSet_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_8,
  MR_Word OldSharingSet_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0(
  MR_Word Dict_7,
  MR_Word TypeSubst_8,
  MR_Word Var0_9,
  MR_Word SelectorSet0_10,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0(
  MR_Word ProjectionType_7,
  MR_Word Vars_8,
  MR_Word Var_9,
  MR_Word SelSet0_10,
  MR_Word STATE_VARIABLE_SS_0_17,
  MR_Word * STATE_VARIABLE_SS_18);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0(
  MR_Word SharingSet0_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Datastruct_8,
  MR_Word SharingSet_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Set1_8,
  MR_Word Set2_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_3_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_SharingTable_0_16,
  MR_Word * STATE_VARIABLE_SharingTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_SharingTable_0_10,
  MR_Word * STATE_VARIABLE_SharingTable_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_var_arg_sharing_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Sharing_0_17,
  MR_Word * STATE_VARIABLE_Sharing_18);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__is_introduced_typeinfo_arg_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word Var_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__apply_widening_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_of_list_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Unification_8,
  MR_Word GoalInfo_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingPair0_8,
  MR_Word STATE_VARIABLE_SharingSet_0_17,
  MR_Word * STATE_VARIABLE_SharingSet_18);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__remove_swapped_dup_pairs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Acc_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_8(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word SharingSet_7,
  MR_Word SharingPair_8);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_no_controls_3_p_0(
  MR_Word SharingPair_4,
  MR_Word STATE_VARIABLE_SS_0_8,
  MR_Word * STATE_VARIABLE_SS_9);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_directed_entry_4_p_0(
  MR_Word FromData_5,
  MR_Word ToData_6,
  MR_Word SharingSet0_7,
  MR_Word * SharingSet_8);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_new_entry_4_p_0(
  MR_Word Selector_5,
  MR_Word Datastruct_6,
  MR_Word SelSharingSet0_7,
  MR_Word * SelSharingSet_8);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__wrap_1_f_0(
  MR_Word SharingSet_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_init_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_NumberedArgs_0_10,
  MR_Word * STATE_VARIABLE_NumberedArgs_11);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word NumberedArgs_12,
  MR_Word STATE_VARIABLE_Sharing_0_23,
  MR_Word * STATE_VARIABLE_Sharing_24);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0(
  MR_Word Args_3,
  MR_Word * NumberedArgs_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_and_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_and_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[23][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[5][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[12][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_5[2][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[8][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_7[3][12];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[4][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_9[1][13];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[3][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[3][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_12[3][11];




static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_projection_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_projection_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[12][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "existential subtype"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "external predicate"))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_7[3][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_projection_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_sharing__domain_scalar_common_12[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__pair__ti_pair_2parse_tree__prog_data_pragma__type_ctor_info_datastruct_0parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_data_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_data_set_0_0 = {
  (MR_String) "datastructures",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_data_set_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_data_set_0_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_data_set_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_data_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_data_set_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_data_set_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_data_set_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_data_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "data_set",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_data_set_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_data_set_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_data_set_0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_0 = {
  (MR_String) "inproject",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_1 = {
  (MR_String) "outproject",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_value_ordered_projection_type_0[2] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_0,
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_name_ordered_projection_type_0[2] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_0,
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_functor_desc_projection_type_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_projection_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_projection_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "projection_type",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_name_ordered_projection_type_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__enum_value_ordered_projection_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_projection_type_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_selector_sharing_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_selector_sharing_set_0_0 = {
  (MR_String) "selector_sharing_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_selector_sharing_set_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_selector_sharing_set_0_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_selector_sharing_set_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_selector_sharing_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_selector_sharing_set_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_selector_sharing_set_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_selector_sharing_set_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_selector_sharing_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "selector_sharing_set",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_selector_sharing_set_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_selector_sharing_set_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_selector_sharing_set_0
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_0[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_0 = {
  (MR_String) "sharing_as_real_as",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_1 = {
  (MR_String) "sharing_as_bottom",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_2[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_2 = {
  (MR_String) "sharing_as_top",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_1[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_2[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_2
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_0[3] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_1,
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_0,
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_0_2
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "sharing_as",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_0
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_and_status_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0)
};

static const MR_DuArgLocn transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_locns_sharing_as_and_status_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_and_status_0_0 = {
  (MR_String) "sharing_as_and_status",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_as_and_status_0_0,
  NULL,
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_locns_sharing_as_and_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_and_status_0_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_and_status_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_and_status_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_as_and_status_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_and_status_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_as_and_status_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_and_status_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_and_status_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_and_status_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "sharing_as_and_status",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_as_and_status_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_as_and_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_as_and_status_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "sharing_as_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_set_0_0 = {
  (MR_String) "sharing_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__field_types_sharing_set_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_set_0_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_set_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_stag_ordered_sharing_set_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_set_0[1] = {
  &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_functor_desc_sharing_set_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_sharing.domain",
  (MR_String) "sharing_set",
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_name_ordered_sharing_set_0 },
  {     transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__du_ptag_ordered_sharing_set_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__functor_number_map_sharing_set_0
};

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_45;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1607__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_45);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_45));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var1_15,
  MR_Word Sel1_16,
  MR_Word Var2_17,
  MR_Word Sel2_18,
  MR_Word Type1_19,
  MR_Word Type2_20,
  MR_Word SelSharingMap_24,
  MR_Word LambdaHeadVar__1_39,
  MR_Word * LambdaHeadVar__2_40)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_58_58;
    MR_Word TypeCtorInfo_59_59;
    MR_Word TypeCtorInfo_60_60;
    MR_Word TypeInfo_61_61;
    MR_Word Extension_28;
    MR_Word Dataset_29;
    MR_Word Datastructs_31;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Box conv0_Dataset_29;

    succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_6, (MR_Integer) 1, LambdaHeadVar__1_39, Sel1_16, Type1_19, &Extension_28);
    if (succeeded)
    {
      TypeInfo_58_58 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
      TypeCtorInfo_59_59 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_58_58, TypeCtorInfo_59_59, SelSharingMap_24, ((MR_Box) (LambdaHeadVar__1_39)), &conv0_Dataset_29);
      if (succeeded)
      {
        Dataset_29 = ((MR_Word) (conv0_Dataset_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Datastructs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dataset_29, (MR_Integer) 1))));
        TypeCtorInfo_60_60 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleInfo_6));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var1_15));
          MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Var2_17));
          MR_hl_field(MR_mktag(0), Var_42, 6) = ((MR_Box) (Sel2_18));
          MR_hl_field(MR_mktag(0), Var_42, 7) = ((MR_Box) (Type2_20));
          MR_hl_field(MR_mktag(0), Var_42, 8) = ((MR_Box) (Extension_28));
          MR_hl_field(MR_mktag(0), Var_42, 9) = ((MR_Box) (LambdaHeadVar__1_39));
        }
        Var_43 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_60_60, Datastructs_31);
        TypeInfo_61_61 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]);
        mercury__list__filter_map_3_p_0(TypeCtorInfo_60_60, TypeInfo_61_61, Var_42, Var_43, LambdaHeadVar__2_40);
        succeeded = (*LambdaHeadVar__2_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1607__1_9_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var1_15,
  MR_Word Var2_17,
  MR_Word Sel2_18,
  MR_Word Type2_20,
  MR_Word Extension_28,
  MR_Word LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__1_44,
  MR_Word * LambdaHeadVar__2_45)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_67_67;
    MR_Word DSel_34;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 0))));
    MR_Word Var_65;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), ((MR_Box) (Var2_17)), ((MR_Box) (Var_64)));
    if (succeeded)
    {
      DSel_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 1))));
      Var_46 = (MR_Integer) 1;
      succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_6, Var_46, DSel_34, Sel2_18, Type2_20, &Var_65);
      if (succeeded)
      {
        TypeInfo_67_67 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (Extension_28)), ((MR_Box) (Var_65)));
        if (succeeded)
        {
          Var_47 = transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(Var1_15, LambdaHeadVar__1_39);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *LambdaHeadVar__2_45 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_44));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__conv2_Pair_6));
    ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0_s env;

    (env).transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3_env_0__conv2_Pair_6, transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_2, &env);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_Datastructures_14;

    conv1_Datastructures_14 = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_Datastructures_14));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_8,
  MR_Word LambdaHeadVar__1_33,
  MR_Word LambdaHeadVar__2_34,
  MR_Word * LambdaHeadVar__3_35)
{
  {
    MR_bool succeeded;
    MR_Word ExtendedX_27;
    MR_Word ExtendedY_28;
    MR_Word SetPairs_29;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 0))));
    MR_Word Y_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1))));
    MR_Word Datastructures_53;
    MR_Word SharingMap_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSharingSet_8, (MR_Integer) 1))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_39, (MR_Integer) 0))));
    MR_Word Selector_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_39, (MR_Integer) 1))));
    MR_Word Var_86;
    MR_Word SelectorSet_58;
    MR_Box conv0_SelectorSet_58;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap_55, ((MR_Box) (Var_56)), &conv0_SelectorSet_58);
    if (succeeded)
    {
      SelectorSet_58 = ((MR_Word) (conv0_SelectorSet_58));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word VarTypes_59;
      MR_Word VarType_60;
      MR_Word SelectorMap_72;
      MR_Word DoExtend_73;
      MR_Word Datastructures0_74;
      MR_Word Var_75;

      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_59);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_59, Var_56, &VarType_60);
      SelectorMap_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet_58, (MR_Integer) 1))));
      {
        DoExtend_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoExtend_73, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), DoExtend_73, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_1));
        MR_hl_field(MR_mktag(0), DoExtend_73, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), DoExtend_73, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), DoExtend_73, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), DoExtend_73, 5) = ((MR_Box) (VarType_60));
        MR_hl_field(MR_mktag(0), DoExtend_73, 6) = ((MR_Box) (Selector_57));
      }
      Datastructures0_74 = mercury__map__map_values_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), DoExtend_73, SelectorMap_72);
      Var_75 = mercury__map__values_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), Datastructures0_74);
      Datastructures_53 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_75);
    }
    else
      Datastructures_53 = (MR_Word) ((MR_Unsigned) 0U);
    {
      ExtendedX_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ExtendedX_27, 0) = ((MR_Box) (X_39));
      MR_hl_field(MR_mktag(1), ExtendedX_27, 1) = ((MR_Box) (Datastructures_53));
    }
    ExtendedY_28 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0(ModuleInfo_6, ProcInfo_7, Y_40, NewSharingSet_8);
    Var_36 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ExtendedX_27);
    Var_37 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ExtendedY_28);
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (Var_37));
    }
    mercury__solutions__solutions_set_2_p_1((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), Var_86, &SetPairs_29);
    Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), SetPairs_29);
    transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0(ModuleInfo_6, ProcInfo_7, Var_38, LambdaHeadVar__2_34, LambdaHeadVar__3_35);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_SharingSet_18;

    transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_SharingSet_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_SharingSet_18));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_SharingPairs_16;

    conv2_SharingPairs_16 = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_SharingPairs_16));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewMap1_21,
  MR_Word OldMap1_22,
  MR_Word VarTypes_23,
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34)
{
  {
    MR_Word Type_26;
    MR_Word NewSelSet_27;
    MR_Word OldSelSet_28;
    MR_Word SharingPairs_29;
    MR_Word NewMap_53;
    MR_Word OldMap_55;
    MR_Word NewSelectors_56;
    MR_Word OldSelectors_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_72;
    MR_Box conv0_NewSelSet_27;
    MR_Box conv1_OldSelSet_28;
    MR_Box conv4_LambdaHeadVar__3_34;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, LambdaHeadVar__1_32, &Type_26);
    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), NewMap1_21, ((MR_Box) (LambdaHeadVar__1_32)), &conv0_NewSelSet_27);
    NewSelSet_27 = ((MR_Word) (conv0_NewSelSet_27));
    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), OldMap1_22, ((MR_Box) (LambdaHeadVar__1_32)), &conv1_OldSelSet_28);
    OldSelSet_28 = ((MR_Word) (conv1_OldSelSet_28));
    NewMap_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSelSet_27, (MR_Integer) 1))));
    OldMap_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSelSet_28, (MR_Integer) 1))));
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), NewMap_53, &NewSelectors_56);
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), OldMap_55, &OldSelectors_57);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_12[2]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (Type_26));
      MR_hl_field(MR_mktag(0), Var_59, 6) = ((MR_Box) (NewMap_53));
      MR_hl_field(MR_mktag(0), Var_59, 7) = ((MR_Box) (OldMap_55));
      MR_hl_field(MR_mktag(0), Var_59, 8) = ((MR_Box) (OldSelectors_57));
    }
    Var_58 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), Var_59, NewSelectors_56);
    SharingPairs_29 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), Var_58);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (ProcInfo_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_72, SharingPairs_29, ((MR_Box) (LambdaHeadVar__2_33)), &conv4_LambdaHeadVar__3_34);
    *LambdaHeadVar__3_34 = ((MR_Word) (conv4_LambdaHeadVar__3_34));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__optimize_for_deconstruct__620__1_2_p_0(
  MR_Word PreBirthSet_6,
  MR_Word LambdaHeadVar__1_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Box conv0_Var_9;

    conv0_Var_9 = mercury__pair__snd_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), LambdaHeadVar__1_12);
    Var_9 = ((MR_Word) (conv0_Var_9));
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreBirthSet_6, Var_9);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__create_internal_sharing__592__1_9_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Integer Pos1_16,
  MR_Word Var1_17,
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27)
{
  {
    MR_bool succeeded;
    MR_Integer Pos2_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 0))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), ((MR_Box) (Var1_17)), ((MR_Box) (Var_39)));
    if (succeeded)
    {
      MR_Word Data1_21;
      MR_Word Data2_22;
      MR_Word Var_30;

      Data1_21 = transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_f_0(Var_10, ConsId_11, Pos1_16);
      Data2_22 = transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_f_0(Var_10, ConsId_11, Pos2_20);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Data1_21));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Data2_22));
      }
      transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(ModuleInfo_8, ProcInfo_9, Var_30, LambdaHeadVar__2_26, LambdaHeadVar__3_27);
    }
    else
      *LambdaHeadVar__3_27 = LambdaHeadVar__2_26;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__number_args__553__1_4_p_0(
  MR_Word LambdaHeadVar__1_10,
  MR_Word * LambdaHeadVar__2_11,
  MR_Integer LambdaHeadVar__3_12,
  MR_Integer * LambdaHeadVar__4_13)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__3_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_10));
    }
    *LambdaHeadVar__4_13 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__3_12 + (MR_Unsigned) 1);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__bottom_sharing_is_safe_approximation_by_args__995__1_2_p_0(
  MR_Word ModuleInfo_4,
  MR_Word LambdaHeadVar__1_16)
{
  {
    MR_bool succeeded;
    MR_Word Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_16, (MR_Integer) 0))));
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_16, (MR_Integer) 1))));
    MR_Word RightInst_13;
    MR_Word TopFunctorMode_14;
    MR_Word _LeftInst_12;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_10, &_LeftInst_12, &RightInst_13);
    succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_4, RightInst_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_4, RightInst_13);
      succeeded = !(succeeded);
      if (succeeded)
      {
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_4, Mode_10, Type_11, &TopFunctorMode_14);
        succeeded = (TopFunctorMode_14 == (MR_Integer) 1);
        if (succeeded)
          succeeded = transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(ModuleInfo_4, Type_11);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_least_upper_bound__748__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingSet1_13,
  MR_Word SharingSet2_15,
  MR_Word * LambdaHeadVar__1_22)
{
  *LambdaHeadVar__1_22 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0(ModuleInfo_6, ProcInfo_7, SharingSet1_13, SharingSet2_15);
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_Union_10;

    conv2_Union_10 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_Union_10));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_34;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_2__1262__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_34);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_34));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_11,
  MR_Word OldSharingSet_12,
  MR_Word * LambdaHeadVar__1_23)
{
  {
    MR_Word OldNewSharingSet_37;
    MR_Word NewOldNewSharingSet_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word NewMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSharingSet_11, (MR_Integer) 1))));
    MR_Word OldMap_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSharingSet_12, (MR_Integer) 1))));
    MR_Word NewVars_52;
    MR_Word OldVars_53;
    MR_Word NewVarsSet_54;
    MR_Word OldVarsSet_55;
    MR_Word CommonVarsSet_56;
    MR_Word CommonVars_57;
    MR_Word NewMap1_58;
    MR_Word OldMap1_59;
    MR_Word VarTypes_60;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_84;
    MR_Word Var_91;
    MR_Box conv1_OldNewSharingSet_37;
    MR_Box conv3_LambdaHeadVar__1_23;

    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), NewMap_49, &NewVars_52);
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), OldMap_51, &OldVars_53);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), NewVars_52, &NewVarsSet_54);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), OldVars_53, &OldVarsSet_55);
    mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), NewVarsSet_54, OldVarsSet_55, &CommonVarsSet_56);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), CommonVarsSet_56, &CommonVars_57);
    mercury__map__select_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), NewMap_49, CommonVarsSet_56, &NewMap1_58);
    mercury__map__select_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), OldMap_51, CommonVarsSet_56, &OldMap1_59);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_60);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (NewMap1_58));
      MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (OldMap1_59));
      MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (VarTypes_60));
    }
    Var_84 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_84));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_67, CommonVars_57, ((MR_Box) (Var_68)), &conv1_OldNewSharingSet_37);
    OldNewSharingSet_37 = ((MR_Word) (conv1_OldNewSharingSet_37));
    NewOldNewSharingSet_38 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0(ModuleInfo_6, ProcInfo_7, NewSharingSet_11, OldSharingSet_12);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (OldNewSharingSet_37));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (OldSharingSet_12));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (NewSharingSet_11));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (ProcInfo_7));
    }
    conv3_LambdaHeadVar__1_23 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_91, Var_39, ((MR_Box) (NewOldNewSharingSet_38)));
    *LambdaHeadVar__1_23 = ((MR_Word) (conv3_LambdaHeadVar__1_23));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0(
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
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_and_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_13 < Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_13 > Var_14);
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
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_and_status_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

      succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));
                  MR_Integer CastX_27 = (MR_Integer) (Var_20);
                  MR_Integer CastY_28 = (MR_Integer) (ArgY1_5);

                  succeeded = (CastX_27 == CastY_28);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                  {
                    MR_Integer ArgX1_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
                    MR_Integer ArgY1_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0))));
                    MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
                    MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1))));
                    MR_Word SubResult1_24;

                    succeeded = (ArgX1_22 < ArgY1_23);
                    if (succeeded)
                    {
                      SubResult1_24 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_22 > ArgY1_23);
                      if (succeeded)
                      {
                        SubResult1_24 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_24 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult1_24;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                  }
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
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_15)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(
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
            MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_4;
            MR_Integer CastX_16;
            MR_Integer CastY_17;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              CastX_16 = (MR_Integer) (ArgX1_3);
              CastY_17 = (MR_Integer) (ArgY1_4);
              succeeded = (CastX_16 == CastY_17);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word TypeInfo_9_18;
                MR_Integer ArgX1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
                MR_Integer ArgY1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
                MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
                MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));

                succeeded = (ArgX1_12 == ArgY1_13);
                if (succeeded)
                {
                  TypeInfo_9_18 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_18, ((MR_Box) (ArgX2_14)), ((MR_Box) (ArgY2_15)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0(
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
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0(
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

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0(
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
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_widen_and_add_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data0_8,
  MR_Word STATE_VARIABLE_Datastructs_0_11,
  MR_Word * STATE_VARIABLE_Datastructs_12)
{
  {
    MR_Word Data_10;

    transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_p_0(ModuleInfo_6, ProcInfo_7, Data0_8, &Data_10);
    transform_hlds__ctgc__structure_sharing__domain__data_set_add_datastruct_5_p_0(ModuleInfo_6, ProcInfo_7, Data_10, STATE_VARIABLE_Datastructs_0_11, STATE_VARIABLE_Datastructs_12);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_add_datastruct_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data_8,
  MR_Word STATE_VARIABLE_Datastructs_0_10,
  MR_Word * STATE_VARIABLE_Datastructs_11)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Data_8)), STATE_VARIABLE_Datastructs_0_10);
    if (succeeded)
      *STATE_VARIABLE_Datastructs_11 = STATE_VARIABLE_Datastructs_0_10;
    else
    {
      MR_Word Var_12;

      Var_12 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), STATE_VARIABLE_Datastructs_0_10);
      succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(ModuleInfo_6, ProcInfo_7, Data_8, Var_12);
      if (succeeded)
        *STATE_VARIABLE_Datastructs_11 = STATE_VARIABLE_Datastructs_0_10;
      else
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Data_8)), STATE_VARIABLE_Datastructs_0_10, STATE_VARIABLE_Datastructs_11);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemA_7 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv0_ElemA_7));
    transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemB_8 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv1_ElemB_8));
    transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__Pair_6) = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemA_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__ElemB_8));
    }
    ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s *) (env_ptr_arg);

    mercury__set__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), &(env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv1_ElemB_8, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__SetB_5, transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_4, env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0(
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Pair_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0_s env;

    (env).transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__SetB_5 = SetB_5;
    (env).transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__Pair_6 = Pair_6;
    (env).transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__set__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), &(env).transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_env_0__conv0_ElemA_7, SetA_4, transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0_2, &env);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__data_set_project_test_3_p_0(
  MR_Word ProjectionType_4,
  MR_Word Vars_5,
  MR_Word Data_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_6, (MR_Integer) 0))));

    switch (ProjectionType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), ((MR_Box) (Var_7)), Vars_5);
        break;
      case (MR_Integer) 1:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), ((MR_Box) (Var_7)), Vars_5);
          succeeded = !(succeeded);
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Datastructs_11;

    transform_hlds__ctgc__structure_sharing__domain__data_set_add_datastruct_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Datastructs_11);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Datastructs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Datastructs_12;

    transform_hlds__ctgc__structure_sharing__domain__data_set_widen_and_add_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Datastructs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Datastructs_12));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ProgVar_12,
  MR_Word Selector_13,
  MR_Word DataSet0_14,
  MR_Word STATE_VARIABLE_DataMap_0_25,
  MR_Word * STATE_VARIABLE_DataMap_26,
  MR_Integer STATE_VARIABLE_DataMapSize_0_27,
  MR_Integer * STATE_VARIABLE_DataMapSize_28)
{
  {
    MR_bool succeeded;
    MR_Word DataSet1_17;
    MR_Word NewDataStruct_18;
    MR_Word NewSelector_19;
    MR_Word DataSet2_20;
    MR_Word Var_29;
    MR_Word Datastructs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_14, (MR_Integer) 1))));
    MR_Word Datastructs_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Integer Var_54;
    MR_Integer Size0_63;
    MR_Word Datastructs0_64;
    MR_Box conv1_Datastructs_50;
    MR_Word ExistingDataSet_21;
    MR_Box conv2_ExistingDataSet_21;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[11]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (ProcInfo_11));
    }
    Var_52 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0));
    mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[4]), Var_51, Datastructs0_49, ((MR_Box) (Var_52)), &conv1_Datastructs_50);
    Datastructs_50 = ((MR_Word) (conv1_Datastructs_50));
    Var_54 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Datastructs_50);
    {
      DataSet1_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DataSet1_17, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), DataSet1_17, 1) = ((MR_Box) (Datastructs_50));
    }
    Var_29 = transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(ProgVar_12, Selector_13);
    transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_p_0(ModuleInfo_10, ProcInfo_11, Var_29, &NewDataStruct_18);
    NewSelector_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewDataStruct_18, (MR_Integer) 1))));
    Size0_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet1_17, (MR_Integer) 0))));
    Datastructs0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet1_17, (MR_Integer) 1))));
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Datastructs0_64, ((MR_Box) (NewDataStruct_18)));
    if (succeeded)
    {
      MR_Word Datastructs_65;
      MR_Integer Size_66;

      mercury__set__delete_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (NewDataStruct_18)), Datastructs0_64, &Datastructs_65);
      Size_66 = (MR_Integer) ((MR_Unsigned) Size0_63 - (MR_Unsigned) 1);
      {
        DataSet2_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DataSet2_20, 0) = ((MR_Box) (Size_66));
        MR_hl_field(MR_mktag(0), DataSet2_20, 1) = ((MR_Box) (Datastructs_65));
      }
    }
    else
      DataSet2_20 = DataSet1_17;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), STATE_VARIABLE_DataMap_0_25, ((MR_Box) (NewSelector_19)), &conv2_ExistingDataSet_21);
    if (succeeded)
    {
      ExistingDataSet_21 = ((MR_Word) (conv2_ExistingDataSet_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer ExistingDataSetSize_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExistingDataSet_21, (MR_Integer) 0))));
      MR_Word DataSetFinal_23;
      MR_Integer DataSetFinalSize_24;
      MR_Integer Var_32;
      MR_Word Datastructs1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet2_20, (MR_Integer) 1))));
      MR_Word Datastructs2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistingDataSet_21, (MR_Integer) 1))));
      MR_Word Datastructs_81;
      MR_Word Var_82;
      MR_Box conv4_Datastructs_81;

      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[11]));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ModuleInfo_10));
        MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (ProcInfo_11));
      }
      mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[4]), Var_82, Datastructs1_78, ((MR_Box) (Datastructs2_80)), &conv4_Datastructs_81);
      Datastructs_81 = ((MR_Word) (conv4_Datastructs_81));
      DataSetFinalSize_24 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Datastructs_81);
      {
        DataSetFinal_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DataSetFinal_23, 0) = ((MR_Box) (DataSetFinalSize_24));
        MR_hl_field(MR_mktag(0), DataSetFinal_23, 1) = ((MR_Box) (Datastructs_81));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (NewSelector_19)), ((MR_Box) (DataSetFinal_23)), STATE_VARIABLE_DataMap_0_25, STATE_VARIABLE_DataMap_26);
      Var_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_DataMapSize_0_27 - (MR_Unsigned) ExistingDataSetSize_22);
      *STATE_VARIABLE_DataMapSize_28 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) DataSetFinalSize_24);
    }
    else
    {
      MR_Integer Var_35;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (NewSelector_19)), ((MR_Box) (DataSet2_20)), STATE_VARIABLE_DataMap_0_25, STATE_VARIABLE_DataMap_26);
      Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet2_20, (MR_Integer) 0))));
      *STATE_VARIABLE_DataMapSize_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_DataMapSize_0_27 + (MR_Unsigned) Var_35);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    conv0_HeadVar__5_5 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word VarType_10,
  MR_Word BaseSelector_11,
  MR_Word Selector_12,
  MR_Word Dataset0_13)
{
  {
    MR_bool succeeded;
    MR_Word Datastructures_14;
    MR_Word Extension_15;

    succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_8, (MR_Integer) 0, BaseSelector_11, Selector_12, VarType_10, &Extension_15);
    if (succeeded)
    {
      MR_Word Data_18;
      MR_Word Set0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dataset0_13, (MR_Integer) 1))));
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[10]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (ProcInfo_9));
        MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (Extension_15));
      }
      Data_18 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_29, Set0_27);
      Datastructures_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Data_18);
    }
    else
      Datastructures_14 = (MR_Word) ((MR_Unsigned) 0U);
    return Datastructures_14;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__conv4_Pair_6));
    ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0_s env;

    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_6_env_0__conv4_Pair_6, transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_5, &env);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_5;

    conv3_HeadVar__5_5 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__conv2_Pair_6));
    ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0_s env;

    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__ctgc__structure_sharing__domain__cross_product_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_8_f_0_3_env_0__conv2_Pair_6, transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_2, &env);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    conv1_HeadVar__5_5 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word Type_11,
  MR_Word NewSelDataSet_12,
  MR_Word OldMap_13,
  MR_Word NewSel_14,
  MR_Word OldSel_15)
{
  {
    MR_bool succeeded;
    MR_Word SharingPairs_16;
    MR_Word OldSelDataSet_17;
    MR_Box conv0_OldSelDataSet_17;
    MR_Word Extension_28;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), OldMap_13, ((MR_Box) (OldSel_15)), &conv0_OldSelDataSet_17);
    OldSelDataSet_17 = ((MR_Word) (conv0_OldSelDataSet_17));
    succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_9, (MR_Integer) 1, NewSel_14, OldSel_15, Type_11, &Extension_28);
    if (succeeded)
    {
      MR_Word Set0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSelDataSet_17, (MR_Integer) 1))));
      MR_Word Var_42;
      MR_Word DataSet1_50;
      MR_Word DataSet2_52;
      MR_Word SetOfPairs_53;
      MR_Word Var_58;

      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[10]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_1));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (ProcInfo_10));
        MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Extension_28));
      }
      DataSet1_50 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_42, Set0_40);
      DataSet2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSelDataSet_12, (MR_Integer) 1))));
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_3));
        MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (DataSet1_50));
        MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (DataSet2_52));
      }
      mercury__solutions__solutions_set_2_p_1((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), Var_58, &SetOfPairs_53);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), SetOfPairs_53, &SharingPairs_16);
    }
    else
    {
      MR_Word Extension_33;

      succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_9, (MR_Integer) 1, OldSel_15, NewSel_14, Type_11, &Extension_33);
      if (succeeded)
      {
        MR_Word Set0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSelDataSet_12, (MR_Integer) 1))));
        MR_Word Var_69;
        MR_Word DataSet1_77;
        MR_Word DataSet2_79;
        MR_Word SetOfPairs_80;
        MR_Word Var_85;

        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[10]));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_4));
          MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleInfo_9));
          MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (ProcInfo_10));
          MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (Extension_33));
        }
        DataSet1_77 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_69, Set0_67);
        DataSet2_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSelDataSet_17, (MR_Integer) 1))));
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[2]));
          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0_6));
          MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (DataSet1_77));
          MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (DataSet2_79));
        }
        mercury__solutions__solutions_set_2_p_1((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), Var_85, &SetOfPairs_80);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), SetOfPairs_80, &SharingPairs_16);
      }
      else
        SharingPairs_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    return SharingPairs_16;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_SharingPairs_16;

    conv1_SharingPairs_16 = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_3_7_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_SharingPairs_16));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0(
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word Type_11,
  MR_Word NewMap_12,
  MR_Word OldMap_13,
  MR_Word OldSelectors_14,
  MR_Word NewSel_15)
{
  {
    MR_Word SharingPairs_16;
    MR_Word NewSelDataSet_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv0_NewSelDataSet_17;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), NewMap_12, ((MR_Box) (NewSel_15)), &conv0_NewSelDataSet_17);
    NewSelDataSet_17 = ((MR_Word) (conv0_NewSelDataSet_17));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_altclos_2_7_f_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ProcInfo_10));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (Type_11));
      MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (NewSelDataSet_17));
      MR_hl_field(MR_mktag(0), Var_19, 7) = ((MR_Box) (OldMap_13));
      MR_hl_field(MR_mktag(0), Var_19, 8) = ((MR_Box) (NewSel_15));
    }
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), Var_19, OldSelectors_14);
    SharingPairs_16 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), Var_18);
    return SharingPairs_16;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sum_data_set_sizes_4_p_0(
  MR_Word HeadVar__1_5,
  MR_Word DataSet_6,
  MR_Integer Size0_7,
  MR_Integer * Size_8)
{
  transform_hlds__ctgc__structure_sharing__domain__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_100_97_116_97_95_115_101_116_95_115_105_122_101_115_95_95_91_49_93_95_48_4_p_0(DataSet_6, Size0_7, Size_8);
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_100_97_116_97_95_115_101_116_95_115_105_122_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word DataSet_6,
  MR_Integer Size0_7,
  MR_Integer * Size_8)
{
  {
    MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet_6, (MR_Integer) 0))));

    *Size_8 = (MR_Integer) ((MR_Unsigned) Size0_7 + (MR_Unsigned) Var_9);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_add_2_4_p_0(
  MR_Word Sel_5,
  MR_Word DataSet0_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  {
    MR_bool succeeded;
    MR_Word DataSet1_8;
    MR_Box conv0_DataSet1_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), STATE_VARIABLE_Map_0_10, ((MR_Box) (Sel_5)), &conv0_DataSet1_8);
    if (succeeded)
    {
      DataSet1_8 = ((MR_Word) (conv0_DataSet1_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DataSet_9;
      MR_Word DataA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_6, (MR_Integer) 1))));
      MR_Word DataB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet1_8, (MR_Integer) 1))));
      MR_Word Data_27;
      MR_Integer Var_28;

      Data_27 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DataA_24, DataB_26);
      Var_28 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Data_27);
      {
        DataSet_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DataSet_9, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), DataSet_9, 1) = ((MR_Box) (Data_27));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (Sel_5)), ((MR_Box) (DataSet_9)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (Sel_5)), ((MR_Box) (DataSet0_6)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0(
  MR_Word Dict_7,
  MR_Word Subst_8,
  MR_Word Selector0_9,
  MR_Word DataSet0_10,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17)
{
  {
    MR_bool succeeded;
    MR_Word Selector_12;
    MR_Word DataSet_13;
    MR_Word Datastructs0_32;
    MR_Word Datastructs_33;
    MR_Word Var_34;
    MR_Integer Var_36;
    MR_Word DataSetOld_14;
    MR_Box conv1_DataSetOld_14;

    parse_tree__prog_ctgc__rename_selector_3_p_0(Subst_8, Selector0_9, &Selector_12);
    Datastructs0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_10, (MR_Integer) 1))));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Dict_7));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (Subst_8));
    }
    Datastructs_33 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_34, Datastructs0_32);
    Var_36 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Datastructs_33);
    {
      DataSet_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DataSet_13, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), DataSet_13, 1) = ((MR_Box) (Datastructs_33));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), STATE_VARIABLE_Map_0_16, ((MR_Box) (Selector_12)), &conv1_DataSetOld_14);
    if (succeeded)
    {
      DataSetOld_14 = ((MR_Word) (conv1_DataSetOld_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word CombinedDataSet_15;
      MR_Word DataA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet_13, (MR_Integer) 1))));
      MR_Word DataB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSetOld_14, (MR_Integer) 1))));
      MR_Word Data_47;
      MR_Integer Var_48;

      Data_47 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DataA_44, DataB_46);
      Var_48 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Data_47);
      {
        CombinedDataSet_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CombinedDataSet_15, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), CombinedDataSet_15, 1) = ((MR_Box) (Data_47));
      }
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (Selector_12)), ((MR_Box) (CombinedDataSet_15)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (Selector_12)), ((MR_Box) (DataSet_13)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__data_set_project_test_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0(
  MR_Word ProjectionType_7,
  MR_Word Vars_8,
  MR_Word Selector_9,
  MR_Word DataSet0_10,
  MR_Word STATE_VARIABLE_SS_0_17,
  MR_Word * STATE_VARIABLE_SS_18)
{
  {
    MR_bool succeeded;
    MR_Word DataSet_12;
    MR_Word Var_28;
    MR_Word Datastructs0_36;
    MR_Word Datastructs_37;
    MR_Integer Var_39;
    MR_Integer Var_42;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ProjectionType_7));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (Vars_8));
    }
    Datastructs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_10, (MR_Integer) 1))));
    Datastructs_37 = mercury__set__filter_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_28, Datastructs0_36);
    Var_39 = mercury__set__count_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Datastructs_37);
    {
      DataSet_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DataSet_12, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), DataSet_12, 1) = ((MR_Box) (Datastructs_37));
    }
    Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet_12, (MR_Integer) 0))));
    succeeded = (Var_42 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_SS_18 = STATE_VARIABLE_SS_0_17;
    else
    {
      MR_Integer Size0_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SS_0_17, (MR_Integer) 0))));
      MR_Word Map0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SS_0_17, (MR_Integer) 1))));
      MR_Word Map_15;
      MR_Integer Size_16;
      MR_Integer Var_19;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (Selector_9)), ((MR_Box) (DataSet_12)), Map0_14, &Map_15);
      Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet_12, (MR_Integer) 0))));
      Size_16 = (MR_Integer) ((MR_Unsigned) Size0_13 + (MR_Unsigned) Var_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SS_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DataMap_26;
    MR_Integer conv0_STATE_VARIABLE_DataMapSize_28;

    transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_2_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_DataMap_26, ((MR_Integer) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DataMapSize_28);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_DataMap_26));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DataMapSize_28));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word ProgVar_10,
  MR_Word STATE_VARIABLE_SelectorSharingSet_0_17,
  MR_Word * STATE_VARIABLE_SelectorSharingSet_18,
  MR_Integer STATE_VARIABLE_SharingSetSize_0_19,
  MR_Integer * STATE_VARIABLE_SharingSetSize_20)
{
  {
    MR_Word DataMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SelectorSharingSet_0_17, (MR_Integer) 1))));
    MR_Word DataMap_15;
    MR_Integer DataMapSize_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv3_DataMap_15;
    MR_Box conv2_DataMapSize_16;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ProcInfo_9));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ProgVar_10));
    }
    Var_22 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_21, DataMap0_14, ((MR_Box) (Var_22)), &conv3_DataMap_15, ((MR_Box) ((MR_Integer) 0)), &conv2_DataMapSize_16);
    DataMap_15 = ((MR_Word) (conv3_DataMap_15));
    DataMapSize_16 = ((MR_Integer) (conv2_DataMapSize_16));
    *STATE_VARIABLE_SharingSetSize_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SharingSetSize_0_19 + (MR_Unsigned) DataMapSize_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SelectorSharingSet_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DataMapSize_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (DataMap_15));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_4_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Datastruct_8,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_32;
    MR_Word TypeCtorInfo_22_33;
    MR_Word TypeCtorInfo_23_34;
    MR_Word Var_12;
    MR_Word Map_19;
    MR_Word Var_20;
    MR_Word Selector_21;
    MR_Word SelSharingSet_22;
    MR_Word SelectorMap_24;
    MR_Word Dataset_25;
    MR_Word Datastructures_27;
    MR_Box conv0_SelSharingSet_22;
    MR_Box conv1_Dataset_25;

    Var_12 = transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(ProgVar_6, Selector_7);
    Map_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SS_0_10, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
    Selector_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map_19, ((MR_Box) (Var_20)), &conv0_SelSharingSet_22);
    if (succeeded)
    {
      SelSharingSet_22 = ((MR_Word) (conv0_SelSharingSet_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      SelectorMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet_22, (MR_Integer) 1))));
      TypeInfo_21_32 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
      TypeCtorInfo_22_33 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_21_32, TypeCtorInfo_22_33, SelectorMap_24, ((MR_Box) (Selector_21)), &conv1_Dataset_25);
      if (succeeded)
      {
        Dataset_25 = ((MR_Word) (conv1_Dataset_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Datastructures_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dataset_25, (MR_Integer) 1))));
        TypeCtorInfo_23_34 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_23_34, ((MR_Box) (Datastruct_8)), Datastructures_27);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_SS_11 = STATE_VARIABLE_SS_0_10;
    else
    {
      MR_Word Var_13;

      Var_13 = transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(ProgVar_6, Selector_7);
      transform_hlds__ctgc__structure_sharing__domain__new_directed_entry_4_p_0(Datastruct_8, Var_13, STATE_VARIABLE_SS_0_10, STATE_VARIABLE_SS_11);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_4_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SS_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SS_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word DataSet_8,
  MR_Word STATE_VARIABLE_SS_0_12,
  MR_Word * STATE_VARIABLE_SS_13)
{
  {
    MR_Word DS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet_8, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_SS_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ProgVar_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Selector_7));
    }
    mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_14, DS_11, ((MR_Box) (STATE_VARIABLE_SS_0_12)), &conv1_STATE_VARIABLE_SS_13);
    *STATE_VARIABLE_SS_13 = ((MR_Word) (conv1_STATE_VARIABLE_SS_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_13;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_13);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(
  MR_Word ProgVar_5,
  MR_Word SelectorSS_6,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11)
{
  {
    MR_Word SelMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSS_6, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_SS_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ProgVar_5));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_12, SelMap_9, ((MR_Box) (STATE_VARIABLE_SS_0_10)), &conv1_STATE_VARIABLE_SS_11);
    *STATE_VARIABLE_SS_11 = ((MR_Word) (conv1_STATE_VARIABLE_SS_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_4_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Datastruct_8,
  MR_Word STATE_VARIABLE_Pairs_0_11,
  MR_Word * STATE_VARIABLE_Pairs_12)
{
  {
    MR_Word SharingPair_10;
    MR_Word Var_13;

    Var_13 = transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(ProgVar_6, Selector_7);
    {
      SharingPair_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SharingPair_10, 0) = ((MR_Box) (Datastruct_8));
      MR_hl_field(MR_mktag(0), SharingPair_10, 1) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Pairs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SharingPair_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Pairs_0_11));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Pairs_12;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_4_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Pairs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Pairs_12));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0(
  MR_Word ProgVar_6,
  MR_Word Selector_7,
  MR_Word Dataset_8,
  MR_Word STATE_VARIABLE_Pairs_0_12,
  MR_Word * STATE_VARIABLE_Pairs_13)
{
  {
    MR_Word Datastructs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dataset_8, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_Pairs_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ProgVar_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Selector_7));
    }
    mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), Var_14, Datastructs_11, ((MR_Box) (STATE_VARIABLE_Pairs_0_12)), &conv1_STATE_VARIABLE_Pairs_13);
    *STATE_VARIABLE_Pairs_13 = ((MR_Word) (conv1_STATE_VARIABLE_Pairs_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Pairs_13;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Pairs_13);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Pairs_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(
  MR_Word ProgVar_5,
  MR_Word SelSharingSet_6,
  MR_Word STATE_VARIABLE_Pairs_0_10,
  MR_Word * STATE_VARIABLE_Pairs_11)
{
  {
    MR_Word SelectorMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet_6, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_Pairs_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ProgVar_5));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), Var_12, SelectorMap_9, ((MR_Box) (STATE_VARIABLE_Pairs_0_10)), &conv1_STATE_VARIABLE_Pairs_11);
    *STATE_VARIABLE_Pairs_11 = ((MR_Word) (conv1_STATE_VARIABLE_Pairs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SharingSet_18;

    transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SharingSet_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SharingSet_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingPairs_8,
  MR_Word STATE_VARIABLE_SS_0_10,
  MR_Word * STATE_VARIABLE_SS_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_SS_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__new_entries_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ProcInfo_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_12, SharingPairs_8, ((MR_Box) (STATE_VARIABLE_SS_0_10)), &conv1_STATE_VARIABLE_SS_11);
    *STATE_VARIABLE_SS_11 = ((MR_Word) (conv1_STATE_VARIABLE_SS_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__remove_entry_3_p_0(
  MR_Word SharingPair_4,
  MR_Word STATE_VARIABLE_SharingSet_0_8,
  MR_Word * STATE_VARIABLE_SharingSet_9)
{
  {
    MR_bool succeeded;
    MR_Word Data1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_4, (MR_Integer) 0))));
    MR_Word Data2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_SharingSet_10_10;
    MR_Word FromVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_6, (MR_Integer) 0))));
    MR_Word FromSel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_6, (MR_Integer) 1))));
    MR_Integer Size0_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_0_8, (MR_Integer) 0))));
    MR_Word SharingMap0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_0_8, (MR_Integer) 1))));
    MR_Word SelSharingSet0_20;
    MR_Integer SelSize0_21;
    MR_Word SelSharingMap0_22;
    MR_Word DataSet0_23;
    MR_Integer DataSize0_24;
    MR_Word Data0_25;
    MR_Box conv0_SelSharingSet0_20;
    MR_Box conv1_DataSet0_23;
    MR_Word Data_26;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap0_19, ((MR_Box) (FromVar_16)), &conv0_SelSharingSet0_20);
    SelSharingSet0_20 = ((MR_Word) (conv0_SelSharingSet0_20));
    SelSize0_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSharingSet0_20, (MR_Integer) 0))));
    SelSharingMap0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet0_20, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), SelSharingMap0_22, ((MR_Box) (FromSel_17)), &conv1_DataSet0_23);
    DataSet0_23 = ((MR_Word) (conv1_DataSet0_23));
    DataSize0_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet0_23, (MR_Integer) 0))));
    Data0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_23, (MR_Integer) 1))));
    succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Data2_7)), Data0_25, &Data_26);
    if (succeeded)
    {
      MR_Integer DataSize_27 = (MR_Integer) ((MR_Unsigned) DataSize0_24 - (MR_Unsigned) 1);
      MR_Integer SelSize_28 = (MR_Integer) ((MR_Unsigned) SelSize0_21 - (MR_Unsigned) 1);
      MR_Integer Size_29 = (MR_Integer) ((MR_Unsigned) Size0_18 - (MR_Unsigned) 1);

      succeeded = (Size_29 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_37;

        Var_37 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
        {
          STATE_VARIABLE_SharingSet_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 0) = ((MR_Box) (Size_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 1) = ((MR_Box) (Var_37));
        }
      }
      else
      {
        succeeded = (SelSize_28 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word SharingMap_30;

          mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_16)), SharingMap0_19, &SharingMap_30);
          {
            STATE_VARIABLE_SharingSet_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 0) = ((MR_Box) (Size_29));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 1) = ((MR_Box) (SharingMap_30));
          }
        }
        else
        {
          succeeded = (DataSize_27 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word SelSharingMap_31;
            MR_Word SelSharingSet_32;
            MR_Word SharingMap_40;

            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (FromSel_17)), SelSharingMap0_22, &SelSharingMap_31);
            {
              SelSharingSet_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SelSharingSet_32, 0) = ((MR_Box) (SelSize_28));
              MR_hl_field(MR_mktag(0), SelSharingSet_32, 1) = ((MR_Box) (SelSharingMap_31));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_16)), ((MR_Box) (SelSharingSet_32)), SharingMap0_19, &SharingMap_40);
            {
              STATE_VARIABLE_SharingSet_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 0) = ((MR_Box) (Size_29));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 1) = ((MR_Box) (SharingMap_40));
            }
          }
          else
          {
            MR_Word DataSet_33;
            MR_Word SharingMap_41;
            MR_Word SelSharingMap_42;
            MR_Word SelSharingSet_43;

            {
              DataSet_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DataSet_33, 0) = ((MR_Box) (DataSize_27));
              MR_hl_field(MR_mktag(0), DataSet_33, 1) = ((MR_Box) (Data_26));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (FromSel_17)), ((MR_Box) (DataSet_33)), SelSharingMap0_22, &SelSharingMap_42);
            {
              SelSharingSet_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SelSharingSet_43, 0) = ((MR_Box) (SelSize_28));
              MR_hl_field(MR_mktag(0), SelSharingSet_43, 1) = ((MR_Box) (SelSharingMap_42));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_16)), ((MR_Box) (SelSharingSet_43)), SharingMap0_19, &SharingMap_41);
            {
              STATE_VARIABLE_SharingSet_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 0) = ((MR_Box) (Size_29));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, 1) = ((MR_Box) (SharingMap_41));
            }
          }
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.domain.remove_directed_entry\'/4", (MR_String) "removing non-existant sharing pair");
        return;
      }
    succeeded = transform_hlds__ctgc__datastruct__datastruct_equal_2_p_0(Data1_6, Data2_7);
    if (succeeded)
      *STATE_VARIABLE_SharingSet_9 = STATE_VARIABLE_SharingSet_10_10;
    else
    {
      MR_Word FromVar_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_7, (MR_Integer) 0))));
      MR_Word FromSel_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_7, (MR_Integer) 1))));
      MR_Integer Size0_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, (MR_Integer) 0))));
      MR_Word SharingMap0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_10_10, (MR_Integer) 1))));
      MR_Word SelSharingSet0_60;
      MR_Integer SelSize0_61;
      MR_Word SelSharingMap0_62;
      MR_Word DataSet0_63;
      MR_Integer DataSize0_64;
      MR_Word Data0_65;
      MR_Box conv2_SelSharingSet0_60;
      MR_Box conv3_DataSet0_63;
      MR_Word Data_66;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap0_59, ((MR_Box) (FromVar_56)), &conv2_SelSharingSet0_60);
      SelSharingSet0_60 = ((MR_Word) (conv2_SelSharingSet0_60));
      SelSize0_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSharingSet0_60, (MR_Integer) 0))));
      SelSharingMap0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet0_60, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), SelSharingMap0_62, ((MR_Box) (FromSel_57)), &conv3_DataSet0_63);
      DataSet0_63 = ((MR_Word) (conv3_DataSet0_63));
      DataSize0_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet0_63, (MR_Integer) 0))));
      Data0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_63, (MR_Integer) 1))));
      succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Data1_6)), Data0_65, &Data_66);
      if (succeeded)
      {
        MR_Integer DataSize_67 = (MR_Integer) ((MR_Unsigned) DataSize0_64 - (MR_Unsigned) 1);
        MR_Integer SelSize_68 = (MR_Integer) ((MR_Unsigned) SelSize0_61 - (MR_Unsigned) 1);
        MR_Integer Size_69 = (MR_Integer) ((MR_Unsigned) Size0_58 - (MR_Unsigned) 1);

        succeeded = (Size_69 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_77;

          Var_77 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_SharingSet_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_69));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_77));
          }
        }
        else
        {
          succeeded = (SelSize_68 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word SharingMap_70;

            mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_56)), SharingMap0_59, &SharingMap_70);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_SharingSet_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_69));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SharingMap_70));
            }
          }
          else
          {
            succeeded = (DataSize_67 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word SelSharingMap_71;
              MR_Word SelSharingSet_72;
              MR_Word SharingMap_80;

              mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (FromSel_57)), SelSharingMap0_62, &SelSharingMap_71);
              {
                SelSharingSet_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SelSharingSet_72, 0) = ((MR_Box) (SelSize_68));
                MR_hl_field(MR_mktag(0), SelSharingSet_72, 1) = ((MR_Box) (SelSharingMap_71));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_56)), ((MR_Box) (SelSharingSet_72)), SharingMap0_59, &SharingMap_80);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_SharingSet_9 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_69));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SharingMap_80));
              }
            }
            else
            {
              MR_Word DataSet_73;
              MR_Word SharingMap_81;
              MR_Word SelSharingMap_82;
              MR_Word SelSharingSet_83;

              {
                DataSet_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataSet_73, 0) = ((MR_Box) (DataSize_67));
                MR_hl_field(MR_mktag(0), DataSet_73, 1) = ((MR_Box) (Data_66));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), ((MR_Box) (FromSel_57)), ((MR_Box) (DataSet_73)), SelSharingMap0_62, &SelSharingMap_82);
              {
                SelSharingSet_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SelSharingSet_83, 0) = ((MR_Box) (SelSize_68));
                MR_hl_field(MR_mktag(0), SelSharingSet_83, 1) = ((MR_Box) (SelSharingMap_82));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (FromVar_56)), ((MR_Box) (SelSharingSet_83)), SharingMap0_59, &SharingMap_81);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_SharingSet_9 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_69));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SharingMap_81));
              }
            }
          }
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.domain.remove_directed_entry\'/4", (MR_String) "removing non-existant sharing pair");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_35;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_altclos_3_directed__1309__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_35);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_35));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_18;

    transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_18));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharingSet_8,
  MR_Word OldSharingSet_9)
{
  {
    MR_Word ResultSharingSet_10;
    MR_Word NewMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewSharingSet_8, (MR_Integer) 1))));
    MR_Word OldMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSharingSet_9, (MR_Integer) 1))));
    MR_Word NewVars_15;
    MR_Word OldVars_16;
    MR_Word NewVarsSet_17;
    MR_Word OldVarsSet_18;
    MR_Word CommonVarsSet_19;
    MR_Word CommonVars_20;
    MR_Word OldSharingSetProjected_21;
    MR_Word OldSharingPairs_22;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Map0_54;
    MR_Word Map_55;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_75;
    MR_Word Var_79;
    MR_Box conv1_OldSharingSetProjected_21;
    MR_Box conv3_ResultSharingSet_10;

    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), NewMap_12, &NewVars_15);
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), OldMap_14, &OldVars_16);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), NewVars_15, &NewVarsSet_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), OldVars_16, &OldVarsSet_18);
    mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), NewVarsSet_17, OldVarsSet_18, &CommonVarsSet_19);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), CommonVarsSet_19, &CommonVars_20);
    Map0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldSharingSet_9, (MR_Integer) 1))));
    Var_60 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), CommonVars_20);
    mercury__map__select_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map0_54, Var_60, &Map_55);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (CommonVars_20));
    }
    Var_75 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_75));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_61, Map_55, ((MR_Box) (Var_62)), &conv1_OldSharingSetProjected_21);
    OldSharingSetProjected_21 = ((MR_Word) (conv1_OldSharingSetProjected_21));
    OldSharingPairs_22 = transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0(OldSharingSetProjected_21);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_altclos_3_directed_4_f_0_2));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (NewSharingSet_8));
    }
    Var_79 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_79));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_31, OldSharingPairs_22, ((MR_Box) (Var_32)), &conv3_ResultSharingSet_10);
    ResultSharingSet_10 = ((MR_Word) (conv3_ResultSharingSet_10));
    return ResultSharingSet_10;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv6_Size_8;

    transform_hlds__ctgc__structure_sharing__domain__sum_data_set_sizes_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv6_Size_8);
    *wrapper_arg_4 = ((MR_Box) (conv6_Size_8));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Map_11;

    transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_add_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Map_11);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Map_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_17;

    transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_rename_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Map_17);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Map_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0(
  MR_Word Dict_7,
  MR_Word TypeSubst_8,
  MR_Word Var0_9,
  MR_Word SelectorSet0_10,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17)
{
  {
    MR_bool succeeded;
    MR_Word SelectorSet1_12;
    MR_Word Var_13;
    MR_Integer Size_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelectorSet0_10, (MR_Integer) 0))));
    MR_Word Map0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet0_10, (MR_Integer) 1))));
    MR_Word Map_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv1_Map_30;
    MR_Box conv2_Var_13;
    MR_Word SelectorSet2_14;
    MR_Box conv3_SelectorSet2_14;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Dict_7));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeSubst_8));
    }
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0));
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[5]), Var_31, Map0_29, ((MR_Box) (Var_32)), &conv1_Map_30);
    Map_30 = ((MR_Word) (conv1_Map_30));
    {
      SelectorSet1_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SelectorSet1_12, 0) = ((MR_Box) (Size_28));
      MR_hl_field(MR_mktag(0), SelectorSet1_12, 1) = ((MR_Box) (Map_30));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), Dict_7, ((MR_Box) (Var0_9)), &conv2_Var_13);
    Var_13 = ((MR_Word) (conv2_Var_13));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), STATE_VARIABLE_Map_0_16, ((MR_Box) (Var_13)), &conv3_SelectorSet2_14);
    if (succeeded)
    {
      SelectorSet2_14 = ((MR_Word) (conv3_SelectorSet2_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SelectorSet_15;
      MR_Word MapA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet1_12, (MR_Integer) 1))));
      MR_Word MapB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet2_14, (MR_Integer) 1))));
      MR_Word Map_47;
      MR_Integer Size_48;
      MR_Box conv5_Map_47;
      MR_Box conv7_Size_48;

      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[5]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[21]), MapA_44, ((MR_Box) (MapB_46)), &conv5_Map_47);
      Map_47 = ((MR_Word) (conv5_Map_47));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[22]), Map_47, ((MR_Box) ((MR_Integer) 0)), &conv7_Size_48);
      Size_48 = ((MR_Integer) (conv7_Size_48));
      {
        SelectorSet_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SelectorSet_15, 0) = ((MR_Box) (Size_48));
        MR_hl_field(MR_mktag(0), SelectorSet_15, 1) = ((MR_Box) (Map_47));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (Var_13)), ((MR_Box) (SelectorSet_15)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (Var_13)), ((MR_Box) (SelectorSet1_12)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_18;

    transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_project_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0(
  MR_Word ProjectionType_7,
  MR_Word Vars_8,
  MR_Word Var_9,
  MR_Word SelSet0_10,
  MR_Word STATE_VARIABLE_SS_0_17,
  MR_Word * STATE_VARIABLE_SS_18)
{
  {
    MR_bool succeeded;
    MR_Word SelSet_12;
    MR_Word Map0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSet0_10, (MR_Integer) 1))));
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_39;
    MR_Box conv1_SelSet_12;
    MR_Integer Var_43;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ProjectionType_7));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (Vars_8));
    }
    Var_39 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0));
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_39));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Var_29, Map0_28, ((MR_Box) (Var_30)), &conv1_SelSet_12);
    SelSet_12 = ((MR_Word) (conv1_SelSet_12));
    Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSet_12, (MR_Integer) 0))));
    succeeded = (Var_43 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_SS_18 = STATE_VARIABLE_SS_0_17;
    else
    {
      MR_Integer Size0_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SS_0_17, (MR_Integer) 0))));
      MR_Word M0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SS_0_17, (MR_Integer) 1))));
      MR_Word M_15;
      MR_Integer Size_16;
      MR_Integer Var_19;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (Var_9)), ((MR_Box) (SelSet_12)), M0_14, &M_15);
      Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSet_12, (MR_Integer) 0))));
      Size_16 = (MR_Integer) ((MR_Unsigned) Size0_13 + (MR_Unsigned) Var_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SS_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (M_15));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Pairs_11;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Pairs_11);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Pairs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_11));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_1_f_0(
  MR_Word SharingSet0_3)
{
  {
    MR_Word SharingPairs_4;
    MR_Word SharingSet_5;
    MR_Word SharingMap_7;
    MR_Word Map0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_3, (MR_Integer) 1))));
    MR_Word Var_22;
    MR_Word Var_31;
    MR_Box conv1_SharingSet_5;
    MR_Box conv3_SharingPairs_4;

    Var_31 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Var_31));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[19]), Map0_20, ((MR_Box) (Var_22)), &conv1_SharingSet_5);
    SharingSet_5 = ((MR_Word) (conv1_SharingSet_5));
    SharingMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_5, (MR_Integer) 1))));
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[20]), SharingMap_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_SharingPairs_4);
    SharingPairs_4 = ((MR_Word) (conv3_SharingPairs_4));
    return SharingPairs_4;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_Datastructures_14;

    conv1_Datastructures_14 = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_Datastructures_14));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Datastruct_8,
  MR_Word SharingSet_9)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;
    MR_Word Datastructures_10;
    MR_Word SharingMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_9, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Datastruct_8, (MR_Integer) 0))));
    MR_Word Selector_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Datastruct_8, (MR_Integer) 1))));
    MR_Word SelectorSet_15;
    MR_Box conv0_SelectorSet_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap_12, ((MR_Box) (Var_13)), &conv0_SelectorSet_15);
    if (succeeded)
    {
      SelectorSet_15 = ((MR_Word) (conv0_SelectorSet_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word VarTypes_16;
      MR_Word VarType_17;
      MR_Word SelectorMap_29;
      MR_Word DoExtend_30;
      MR_Word Datastructures0_31;
      MR_Word Var_32;

      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_16);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_16, Var_13, &VarType_17);
      SelectorMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet_15, (MR_Integer) 1))));
      {
        DoExtend_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoExtend_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[1]));
        MR_hl_field(MR_mktag(0), DoExtend_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_extend_datastruct_4_f_0_1));
        MR_hl_field(MR_mktag(0), DoExtend_30, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), DoExtend_30, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), DoExtend_30, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), DoExtend_30, 5) = ((MR_Box) (VarType_17));
        MR_hl_field(MR_mktag(0), DoExtend_30, 6) = ((MR_Box) (Selector_14));
      }
      Datastructures0_31 = mercury__map__map_values_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), DoExtend_30, SelectorMap_29);
      Var_32 = mercury__map__values_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), Datastructures0_31);
      Datastructures_10 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_32);
    }
    else
      Datastructures_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__5_5, 0) = ((MR_Box) (Datastruct_8));
      MR_hl_field(MR_mktag(1), HeadVar__5_5, 1) = ((MR_Box) (Datastructures_10));
    }
    return HeadVar__5_5;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_SharingSet_18;

    transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_SharingSet_18);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_SharingSet_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Pairs_11;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Pairs_11);
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Pairs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_SS_11);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_SS_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Pairs_11;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Pairs_11);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Pairs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_11));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Set1_8,
  MR_Word Set2_9)
{
  {
    MR_bool succeeded;
    MR_Word Union_10;
    MR_Integer Size1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Set1_8, (MR_Integer) 0))));
    MR_Integer Size2_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Set2_9, (MR_Integer) 0))));
    MR_Word Pairs_15;
    MR_Word Set_16;
    MR_Word Var_85;
    MR_Box conv9_Union_10;

    succeeded = (Size1_11 < Size2_13);
    if (succeeded)
    {
      MR_Word SharingSet_19;
      MR_Word SharingMap_21;
      MR_Word Map0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Set1_8, (MR_Integer) 1))));
      MR_Word Var_36;
      MR_Word Var_45;
      MR_Box conv1_SharingSet_19;
      MR_Box conv3_Pairs_15;

      Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_45));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[15]), Map0_34, ((MR_Box) (Var_36)), &conv1_SharingSet_19);
      SharingSet_19 = ((MR_Word) (conv1_SharingSet_19));
      SharingMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_19, (MR_Integer) 1))));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[16]), SharingMap_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Pairs_15);
      Pairs_15 = ((MR_Word) (conv3_Pairs_15));
      Set_16 = Set2_9;
    }
    else
    {
      MR_Word SharingSet_50;
      MR_Word SharingMap_52;
      MR_Word Map0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Set2_9, (MR_Integer) 1))));
      MR_Word Var_67;
      MR_Word Var_76;
      MR_Box conv5_SharingSet_50;
      MR_Box conv7_Pairs_15;

      Var_76 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_76));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[17]), Map0_65, ((MR_Box) (Var_67)), &conv5_SharingSet_50);
      SharingSet_50 = ((MR_Word) (conv5_SharingSet_50));
      SharingMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_50, (MR_Integer) 1))));
      mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[18]), SharingMap_52, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_Pairs_15);
      Pairs_15 = ((MR_Word) (conv7_Pairs_15));
      Set_16 = Set1_8;
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_set_least_upper_bound_4_f_0_5));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (ProcInfo_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_85, Pairs_15, ((MR_Box) (Set_16)), &conv9_Union_10);
    Union_10 = ((MR_Word) (conv9_Union_10));
    return Union_10;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_3_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_SharingTable_0_16,
  MR_Word * STATE_VARIABLE_SharingTable_17)
{
  {
    MR_Word ProcInfo_10;
    MR_Word MaybePublicSharing_11;

    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_6, PredId_7, ProcId_8, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_10, &MaybePublicSharing_11);
    if ((MaybePublicSharing_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SharingTable_17 = STATE_VARIABLE_SharingTable_0_16;
    else
    {
      MR_Word PublicSharing_12;
      MR_Word Status_13;
      MR_Word PPId_14;
      MR_Word PrivateSharing_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePublicSharing_11, (MR_Integer) 0))));
      MR_Word Var_19;

      PublicSharing_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      Status_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))) & (MR_Integer) 3);
      {
        PPId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PPId_14, 0) = ((MR_Box) (PredId_7));
        MR_hl_field(MR_mktag(0), PPId_14, 1) = ((MR_Box) (ProcId_8));
      }
      PrivateSharing_15 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(PublicSharing_12);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (PrivateSharing_15));
        MR_hl_field(MR_mktag(0), Var_19, 1) = (MR_Box) ((MR_Unsigned) (Status_13));
      }
      *STATE_VARIABLE_SharingTable_17 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), ((MR_Box) (PPId_14)), STATE_VARIABLE_SharingTable_0_16, ((MR_Box) (Var_19)));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SharingTable_17;

    transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SharingTable_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SharingTable_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_SharingTable_0_10,
  MR_Word * STATE_VARIABLE_SharingTable_11)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcIds_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_SharingTable_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[1]), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_SharingTable_0_10)), &conv1_STATE_VARIABLE_SharingTable_11);
    *STATE_VARIABLE_SharingTable_11 = ((MR_Word) (conv1_STATE_VARIABLE_SharingTable_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_var_arg_sharing_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Sharing_0_17,
  MR_Word * STATE_VARIABLE_Sharing_18)
{
  {
    MR_bool succeeded;
    MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    succeeded = transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(ModuleInfo_8, ProcInfo_9, Arg_13);
    if (succeeded)
    {
      MR_Word Data1_15;
      MR_Word Data2_16;
      MR_Word Var_19;

      Data1_15 = transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_f_0(Var_10, ConsId_11, N_12);
      Data2_16 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(Arg_13);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Data1_15));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Data2_16));
      }
      transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(ModuleInfo_8, ProcInfo_9, Var_19, STATE_VARIABLE_Sharing_0_17, STATE_VARIABLE_Sharing_18);
    }
    else
      *STATE_VARIABLE_Sharing_18 = STATE_VARIABLE_Sharing_0_17;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__is_introduced_typeinfo_arg_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_5;
    MR_Word Type_6;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_3, &VarTypes_5);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_4, &Type_6);
    succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SharingTable_11;

    transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SharingTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SharingTable_11));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    MR_Word SharingTable_4;
    MR_Word PredIds_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Box conv1_SharingTable_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &PredIds_5);
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__load_structure_sharing_table_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (ModuleInfo_3));
    }
    Var_7 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[1]), Var_6, PredIds_5, ((MR_Box) (Var_7)), &conv1_SharingTable_4);
    SharingTable_4 = ((MR_Word) (conv1_SharingTable_4));
    return SharingTable_4;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__bottom_sharing_is_safe_approximation_by_args__995__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Modes_5,
  MR_Word Types_6)
{
  {
    MR_bool succeeded;
    MR_Word ModeTypePairs_7;
    MR_Word Test_8;
    MR_Word TrueModeTypePairs_15;

    ModeTypePairs_7 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Modes_5, Types_6);
    {
      Test_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Test_8, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Test_8, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0_1));
      MR_hl_field(MR_mktag(0), Test_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Test_8, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[0]), Test_8, ModeTypePairs_7, &TrueModeTypePairs_15);
    succeeded = (TrueModeTypePairs_15 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word SharingTable_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word ActualVars_16,
  MR_Word STATE_VARIABLE_Sharing_0_27,
  MR_Word * STATE_VARIABLE_Sharing_28)
{
  {
    MR_Word PPId_18;
    MR_Word FormalSharing_19;
    MR_Word VarTypes_22;
    MR_Word ActualTypes_23;
    MR_Word CallerTypeVarSet_24;
    MR_Word CallerExternalTypeParams_25;
    MR_Word ActualSharing_26;
    MR_Word VarRenaming_38;
    MR_Word TypeSubst_39;
    MR_Word _Status_20;
    MR_Word _IsPredicted_21;

    {
      PPId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_18, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), PPId_18, 1) = ((MR_Box) (ProcId_15));
    }
    transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_or_predict_6_p_0(ModuleInfo_10, SharingTable_13, PPId_18, &FormalSharing_19, &_Status_20, &_IsPredicted_21);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_22);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_22, ActualVars_16, &ActualTypes_23);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_11, &CallerTypeVarSet_24);
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(PredInfo_11, &CallerExternalTypeParams_25);
    VarRenaming_38 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(ModuleInfo_10, PPId_18, ActualVars_16);
    TypeSubst_39 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(ModuleInfo_10, PPId_18, ActualTypes_23, CallerTypeVarSet_24, CallerExternalTypeParams_25);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(VarRenaming_38, TypeSubst_39, FormalSharing_19, &ActualSharing_26);
    *STATE_VARIABLE_Sharing_28 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_10, ProcInfo_12, ActualSharing_26, STATE_VARIABLE_Sharing_0_27);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_or_predict_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word SharingTable_8,
  MR_Word PPId_9,
  MR_Word * SharingAs_10,
  MR_Word * Status_11,
  MR_Word * IsPredicted_12)
{
  {
    MR_bool succeeded;
    MR_Word SharingAs0_13;
    MR_Word Status0_14;
    MR_Word Var_20;
    MR_Box conv0_Var_20;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), SharingTable_8, ((MR_Box) (PPId_9)), &conv0_Var_20);
    if (succeeded)
    {
      Var_20 = ((MR_Word) (conv0_Var_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      SharingAs0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
      Status0_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))) & (MR_Integer) 3);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *SharingAs_10 = SharingAs0_13;
      *Status_11 = Status0_14;
      *IsPredicted_12 = (MR_Integer) 0;
    }
    else
    {
      MR_Word PredInfo_31;
      MR_Word ProcInfo_32;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_9, &PredInfo_31, &ProcInfo_32);
      {
        MR_Word Determinism_33;

        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_32, &Determinism_33);
        switch (Determinism_33) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (!(succeeded))
      {
        succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0(ModuleInfo_7, PredInfo_31, ProcInfo_32);
        if (!(succeeded))
        {
          MR_Word Origin_34;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_31, &Origin_34);
          succeeded = ((MR_tag((MR_Word) Origin_34)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        *SharingAs_10 = (MR_Word) ((MR_Unsigned) 0U);
        *Status_11 = (MR_Integer) 2;
        *IsPredicted_12 = (MR_Integer) 1;
      }
      else
      {
        MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_9, (MR_Integer) 0))));
        MR_Word PredInfo_17;
        MR_Word PredStatus_18;
        MR_Word Var_21;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_15, &PredInfo_17);
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_17, &PredStatus_18);
        Var_21 = (MR_Word) (PredStatus_18);
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Var_38;

          Var_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_sharing__domain_scalar_common_5[1]))));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *SharingAs_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_38));
          }
          *Status_11 = (MR_Integer) 2;
          *IsPredicted_12 = (MR_Integer) 0;
        }
        else
        {
          MR_Word ShroudedPredProcId_42;
          MR_Word Reason_43;
          MR_Word Var_45;

          ShroudedPredProcId_42 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(PPId_9);
          {
            Reason_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Reason_43, 0) = ((MR_Box) (ShroudedPredProcId_42));
          }
          Var_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Reason_43)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *SharingAs_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_45));
          }
          *Status_11 = (MR_Integer) 2;
          *IsPredicted_12 = (MR_Integer) 0;
        }
      }
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_set_4_p_0(
  MR_Word PPId_5,
  MR_Word SharingAs_Status_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  *STATE_VARIABLE_Table_9 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), ((MR_Box) (PPId_5)), STATE_VARIABLE_Table_0_8, ((MR_Box) (SharingAs_Status_6)));
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_search_3_p_0(
  MR_Word PPId_4,
  MR_Word Table_5,
  MR_Word * SharingAs_Status_6)
{
  {
    MR_bool succeeded;
    MR_Box conv0_SharingAs_Status_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0), Table_5, ((MR_Box) (PPId_4)), &conv0_SharingAs_Status_6);
    if (succeeded)
    {
      *SharingAs_Status_6 = ((MR_Word) (conv0_SharingAs_Status_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_table_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0));
    return HeadVar__1_1;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Pairs_11;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Pairs_11);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Pairs_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_11));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(
  MR_Word SharingAs_3)
{
  {
    MR_Word SharingDomain_4;

    switch (MR_tag((MR_Word) SharingAs_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SharingDomain_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet_5 = (MR_Word) (MR_body((MR_Word) (SharingAs_3), (MR_Integer) 1));
          MR_Word Var_7;
          MR_Word SharingSet_10;
          MR_Word SharingMap_12;
          MR_Word Map0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_5, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Word Var_36;
          MR_Box conv1_SharingSet_10;
          MR_Box conv3_Var_7;

          Var_36 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Var_36));
          }
          mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[13]), Map0_25, ((MR_Box) (Var_27)), &conv1_SharingSet_10);
          SharingSet_10 = ((MR_Word) (conv1_SharingSet_10));
          SharingMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_10, (MR_Integer) 1))));
          mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[14]), SharingMap_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Var_7);
          Var_7 = ((MR_Word) (conv3_Var_7));
          {
            SharingDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SharingDomain_4, 0) = ((MR_Box) (Var_7));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Msgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SharingAs_3, (MR_Integer) 0))));

          {
            SharingDomain_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SharingDomain_4, 0) = ((MR_Box) (Msgs_6));
          }
        }
        break;
    }
    return SharingDomain_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__apply_widening_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SelectorSharingSet_18;
    MR_Integer conv0_STATE_VARIABLE_SharingSetSize_20;

    transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_apply_widening_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SelectorSharingSet_18, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SharingSetSize_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SelectorSharingSet_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SharingSetSize_20));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__apply_widening_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Integer WideningLimit_9,
  MR_Word * WideningDone_10,
  MR_Word STATE_VARIABLE_Sharing_0_15,
  MR_Word * STATE_VARIABLE_Sharing_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_Sharing_0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *WideningDone_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Sharing_16 = STATE_VARIABLE_Sharing_0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet0_13 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_Sharing_0_15), (MR_Integer) 1));

          succeeded = (WideningLimit_9 == (MR_Integer) 0);
          if (succeeded)
          {
            *WideningDone_10 = (MR_Integer) 0;
            *STATE_VARIABLE_Sharing_16 = STATE_VARIABLE_Sharing_0_15;
          }
          else
          {
            MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet0_13, (MR_Integer) 0))));

            succeeded = (WideningLimit_9 > Var_17);
            if (succeeded)
            {
              *WideningDone_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Sharing_16 = STATE_VARIABLE_Sharing_0_15;
            }
            else
            {
              MR_Word SharingSet_14;
              MR_Word SharingMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_13, (MR_Integer) 1))));
              MR_Word SharingMap_28;
              MR_Integer NewSize_29;
              MR_Word Var_30;
              MR_Box conv2_NewSize_29;

              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[2]));
                MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__apply_widening_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (ProcInfo_8));
              }
              mercury__map__map_foldl_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_30, SharingMap0_27, &SharingMap_28, ((MR_Box) ((MR_Integer) 0)), &conv2_NewSize_29);
              NewSize_29 = ((MR_Integer) (conv2_NewSize_29));
              {
                SharingSet_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SharingSet_14, 0) = ((MR_Box) (NewSize_29));
                MR_hl_field(MR_mktag(0), SharingSet_14, 1) = ((MR_Box) (SharingMap_28));
              }
              *STATE_VARIABLE_Sharing_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_14)));
              *WideningDone_10 = (MR_Integer) 1;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *WideningDone_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Sharing_16 = STATE_VARIABLE_Sharing_0_15;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    conv1_HeadVar__5_5 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Datastructures_10;

    conv0_Datastructures_10 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Datastructures_10));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingAs_8,
  MR_Word Datastructs_9)
{
  {
    MR_Word ExtendedDatastructs_10;
    MR_Word DataLists_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Box conv2_ExtendedDatastructs_10;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (SharingAs_8));
    }
    DataLists_11 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), Var_12, Datastructs_9);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (ProcInfo_7));
    }
    conv2_ExtendedDatastructs_10 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), Var_13, DataLists_11, ((MR_Box) ((MR_Unsigned) 0U)));
    ExtendedDatastructs_10 = ((MR_Word) (conv2_ExtendedDatastructs_10));
    return ExtendedDatastructs_10;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_Datastructures_14;

    conv1_Datastructures_14 = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_extend_datastruct_2_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_Datastructures_14));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingAs_8,
  MR_Word Datastruct_9)
{
  {
    MR_bool succeeded;
    MR_Word Datastructures_10;

    switch (MR_tag((MR_Word) SharingAs_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Datastructures_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Datastructures_10, 0) = ((MR_Box) (Datastruct_9));
          MR_hl_field(MR_mktag(1), Datastructures_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet_11 = (MR_Word) (MR_body((MR_Word) (SharingAs_8), (MR_Integer) 1));
          MR_Word Datastructures_20;
          MR_Word SharingMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_11, (MR_Integer) 1))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Datastruct_9, (MR_Integer) 0))));
          MR_Word Selector_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Datastruct_9, (MR_Integer) 1))));
          MR_Word SelectorSet_25;
          MR_Box conv0_SelectorSet_25;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap_22, ((MR_Box) (Var_23)), &conv0_SelectorSet_25);
          if (succeeded)
          {
            SelectorSet_25 = ((MR_Word) (conv0_SelectorSet_25));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word VarTypes_26;
            MR_Word VarType_27;
            MR_Word SelectorMap_39;
            MR_Word DoExtend_40;
            MR_Word Datastructures0_41;
            MR_Word Var_42;

            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_26);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_26, Var_23, &VarType_27);
            SelectorMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectorSet_25, (MR_Integer) 1))));
            {
              DoExtend_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DoExtend_40, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[1]));
              MR_hl_field(MR_mktag(0), DoExtend_40, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0_1));
              MR_hl_field(MR_mktag(0), DoExtend_40, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), DoExtend_40, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(MR_mktag(0), DoExtend_40, 4) = ((MR_Box) (ProcInfo_7));
              MR_hl_field(MR_mktag(0), DoExtend_40, 5) = ((MR_Box) (VarType_27));
              MR_hl_field(MR_mktag(0), DoExtend_40, 6) = ((MR_Box) (Selector_24));
            }
            Datastructures0_41 = mercury__map__map_values_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), DoExtend_40, SelectorMap_39);
            Var_42 = mercury__map__values_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[1]), Datastructures0_41);
            Datastructures_20 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_42);
          }
          else
            Datastructures_20 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Datastructures_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Datastructures_10, 0) = ((MR_Box) (Datastruct_9));
            MR_hl_field(MR_mktag(1), Datastructures_10, 1) = ((MR_Box) (Datastructures_20));
          }
        }
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_sharing.domain.extend_datastruct\'/4", (MR_String) "top sharing set");
        break;
    }
    return Datastructures_10;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_of_list_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_Sharing_10;

    conv0_Sharing_10 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_Sharing_10));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_of_list_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word SharingList_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;
    MR_Box conv1_HeadVar__4_4;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_of_list_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (ProcInfo_6));
    }
    conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0), Var_8, SharingList_7, ((MR_Box) ((MR_Unsigned) 0U)));
    HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    return HeadVar__4_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__1_22;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_least_upper_bound__748__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv0_LambdaHeadVar__1_22);
    *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_22));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Sharing1_8,
  MR_Word Sharing2_9)
{
  {
    MR_bool succeeded;
    MR_Word Sharing_10;

    switch (MR_tag((MR_Word) Sharing1_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Sharing_10 = Sharing2_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet1_13 = (MR_Word) (MR_body((MR_Word) (Sharing1_8), (MR_Integer) 1));

          switch (MR_tag((MR_Word) Sharing2_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Sharing_10 = Sharing1_8;
              break;
            case (MR_Integer) 1:
              {
                MR_Word SharingSet2_15 = (MR_Word) (MR_body((MR_Word) (Sharing2_9), (MR_Integer) 1));
                MR_Word MaybeExcp_16;
                MR_Word Var_21;

                {
                  Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0_1));
                  MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_6));
                  MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ProcInfo_7));
                  MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (SharingSet1_13));
                  MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) (SharingSet2_15));
                }
                mercury__exception__try_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_21, &MaybeExcp_16);
                if (((MR_tag((MR_Word) MaybeExcp_16)) == (MR_Integer) 2))
                {
                  MR_Word Excp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeExcp_16, (MR_Integer) 0))));
                  MR_Box conv1_Var_31;

                  succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0), Excp_19, &conv1_Var_31);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                  {
                    MR_Word Var_33;

                    Var_33 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_sharing__domain_scalar_common_5[0]))));
                    {
                      Sharing_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Sharing_10, 0) = ((MR_Box) (Var_33));
                    }
                  }
                  else
                    mercury__exception__rethrow_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), MaybeExcp_16);
                }
                else
                {
                  MR_Word SharingSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExcp_16, (MR_Integer) 0))));

                  Sharing_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_18)));
                }
              }
              break;
            case (MR_Integer) 2:
              Sharing_10 = Sharing2_9;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Msg1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Sharing1_8, (MR_Integer) 0))));
          MR_Word Msg2_12;

          succeeded = ((MR_tag((MR_Word) Sharing2_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            Msg2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Sharing2_9, (MR_Integer) 0))));
            {
              MR_Word Var_25;

              Var_25 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), Msg1_11, Msg2_12);
              {
                Sharing_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Sharing_10, 0) = ((MR_Box) (Var_25));
              }
            }
          }
          else
            Sharing_10 = Sharing1_8;
        }
        break;
    }
    return Sharing_10;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_and_status_is_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word SharingAs_Status1_7,
  MR_Word SharingAs_Status2_8)
{
  {
    MR_bool succeeded;
    MR_Word Sharing1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingAs_Status1_7, (MR_Integer) 0))));
    MR_Word Sharing2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingAs_Status2_8, (MR_Integer) 0))));

    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_5, ProcInfo_6, Sharing1_9, Sharing2_11);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Pairs_11;

    transform_hlds__ctgc__structure_sharing__domain__to_sharing_pair_list_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Pairs_11);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Pairs_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_11;

    transform_hlds__ctgc__structure_sharing__domain__without_doubles_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_11));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Sharing1_7,
  MR_Word Sharing2_8)
{
  {
    MR_bool succeeded;

    if ((Sharing1_7 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) Sharing1_7)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_12_19;
      MR_Word TypeInfo_14_31;
      MR_Word TypeCtorInfo_15_32;
      MR_Word TypeInfo_16_33;
      MR_Word TypeInfo_13_44;
      MR_Word TypeCtorInfo_14_45;
      MR_Word TypeCtorInfo_15_46;
      MR_Word TypeInfo_4_49;
      MR_Word TypeCtorInfo_5_50;
      MR_Word SharingSet1_10 = (MR_Word) (MR_body((MR_Word) (Sharing1_7), (MR_Integer) 1));
      MR_Word SharingSet2_11;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word SharingSet_22;
      MR_Word SharingMap_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Map0_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Integer Var_47;
      MR_Word Var_48;
      MR_Box conv1_SharingSet_22;
      MR_Box conv3_Var_17;

      succeeded = ((MR_tag((MR_Word) Sharing2_8)) == (MR_Integer) 1);
      if (succeeded)
      {
        SharingSet2_11 = (MR_Word) (MR_body((MR_Word) (Sharing2_8), (MR_Integer) 1));
        Map0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet1_10, (MR_Integer) 1))));
        Var_38 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[11]);
        Var_47 = (MR_Integer) 0;
        TypeInfo_4_49 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]);
        TypeCtorInfo_5_50 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0);
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
          MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ProcInfo_6));
          MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (SharingSet2_11));
        }
        Var_48 = mercury__map__init_0_f_0(TypeInfo_4_49, TypeCtorInfo_5_50);
        TypeInfo_13_44 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]);
        TypeCtorInfo_14_45 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0);
        TypeCtorInfo_15_46 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_48));
        }
        mercury__map__foldl_4_p_0(TypeInfo_13_44, TypeCtorInfo_14_45, TypeCtorInfo_15_46, Var_38, Map0_37, ((MR_Box) (Var_39)), &conv1_SharingSet_22);
        SharingSet_22 = ((MR_Word) (conv1_SharingSet_22));
        SharingMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_22, (MR_Integer) 1))));
        Var_25 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[12]);
        Var_26 = (MR_Word) ((MR_Unsigned) 0U);
        TypeInfo_14_31 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]);
        TypeCtorInfo_15_32 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0);
        TypeInfo_16_33 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]);
        mercury__map__foldl_4_p_0(TypeInfo_14_31, TypeCtorInfo_15_32, TypeInfo_16_33, Var_25, SharingMap_24, ((MR_Box) (Var_26)), &conv3_Var_17);
        Var_17 = ((MR_Word) (conv3_Var_17));
        TypeInfo_12_19 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]);
        succeeded = mercury__list__all_true_2_p_0(TypeInfo_12_19, Var_16, Var_17);
      }
    }
    else
      succeeded = MR_FALSE;
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) Sharing2_8)) == (MR_Integer) 2);
      if (succeeded)
      {
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word ForeignPPId_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word GoalContext_16,
  MR_Word OldSharing_17,
  MR_Word * NewSharing_18)
{
  {
    MR_bool succeeded;
    MR_Word ForeignSharing_19;
    MR_Word ActualVars_20;
    MR_Word VarTypes_21;
    MR_Word ActualTypes_22;
    MR_Word CallerTypeVarSet_23;
    MR_Word CallerExternalTypeParams_24;
    MR_Word ActualSharing_25;
    MR_Word VarRenaming_71;
    MR_Word TypeSubst_72;
    MR_Word SharingAs0_36;
    MR_Word UserSharing_45;
    MR_Word SharingDomain_46;

    UserSharing_45 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attributes_14);
    succeeded = (UserSharing_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SharingDomain_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing_45, (MR_Integer) 0))));
      if ((SharingDomain_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        SharingAs0_36 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) SharingDomain_46)) == (MR_Integer) 1))
      {
        SharingAs0_36 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(SharingDomain_46);
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      ForeignSharing_19 = SharingAs0_36;
    else
    {
      MR_Word PredInfo_54;
      MR_Word ProcInfo_55;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_10, ForeignPPId_13, &PredInfo_54, &ProcInfo_55);
      {
        MR_Word Determinism_56;

        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_55, &Determinism_56);
        switch (Determinism_56) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (!(succeeded))
      {
        succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0(ModuleInfo_10, PredInfo_54, ProcInfo_55);
        if (!(succeeded))
        {
          MR_Word Origin_57;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_54, &Origin_57);
          succeeded = ((MR_tag((MR_Word) Origin_57)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
        ForeignSharing_19 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String ContextString_37;
        MR_String Msg_38;
        MR_String Var_40;
        MR_Word Var_42;
        MR_Word Var_61;

        parse_tree__prog_out__context_to_string_2_p_0(GoalContext_16, &ContextString_37);
        Var_40 = mercury__string__f_43_43_2_f_0(ContextString_37, (MR_String) ")");
        Msg_38 = mercury__string__f_43_43_2_f_0((MR_String) "foreign proc with unknown sharing (", Var_40);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (Msg_38));
        }
        Var_61 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Var_42)));
        {
          ForeignSharing_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ForeignSharing_19, 0) = ((MR_Box) (Var_61));
        }
      }
    }
    ActualVars_20 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[10]), Args_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_21);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_21, ActualVars_20, &ActualTypes_22);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_11, &CallerTypeVarSet_23);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_11, &CallerExternalTypeParams_24);
    VarRenaming_71 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(ModuleInfo_10, ForeignPPId_13, ActualVars_20);
    TypeSubst_72 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(ModuleInfo_10, ForeignPPId_13, ActualTypes_22, CallerTypeVarSet_23, CallerExternalTypeParams_24);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(VarRenaming_71, TypeSubst_72, ForeignSharing_19, &ActualSharing_25);
    *NewSharing_18 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_10, ProcInfo_12, ActualSharing_25, OldSharing_17);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__bottom_sharing_is_safe_approximation_by_args__995__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6)
{
  {
    MR_bool succeeded;

    {
      MR_Word Origin_7;

      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_7);
      succeeded = ((MR_tag((MR_Word) Origin_7)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (!(succeeded))
    {
      MR_Word HeadVars_10;
      MR_Word Modes_11;
      MR_Word VarTypes_12;
      MR_Word Types_13;
      MR_Word ModeTypePairs_17;
      MR_Word Test_18;
      MR_Word TrueModeTypePairs_25;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_6, &HeadVars_10);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_6, &Modes_11);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_12);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_12, HeadVars_10, &Types_13);
      ModeTypePairs_17 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Modes_11, Types_13);
      {
        Test_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Test_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[2]));
        MR_hl_field(MR_mktag(0), Test_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_3_p_0_1));
        MR_hl_field(MR_mktag(0), Test_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Test_18, 3) = ((MR_Box) (ModuleInfo_4));
      }
      mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[0]), Test_18, ModeTypePairs_17, &TrueModeTypePairs_25);
      succeeded = (TrueModeTypePairs_25 == (MR_Word) ((MR_Unsigned) 0U));
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_9;

    transform_hlds__ctgc__structure_sharing__domain__new_entry_no_controls_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SS_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SS_9));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(
  MR_Word SharingDomain_3)
{
  {
    MR_bool succeeded;
    MR_Word SharingAs_4;

    switch (MR_tag((MR_Word) SharingDomain_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SharingAs_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word StructureSharing_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SharingDomain_3, (MR_Integer) 0))));
          MR_Word SharingSet_6;
          MR_Word Var_11;
          MR_Word Var_18;
          MR_Box conv1_SharingSet_6;
          MR_Integer Var_24;

          Var_18 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_18));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[9]), StructureSharing_5, ((MR_Box) (Var_11)), &conv1_SharingSet_6);
          SharingSet_6 = ((MR_Word) (conv1_SharingSet_6));
          Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_6, (MR_Integer) 0))));
          succeeded = (Var_24 == (MR_Integer) 0);
          if (succeeded)
            SharingAs_4 = (MR_Word) ((MR_Unsigned) 0U);
          else
            SharingAs_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_6)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Reasons_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SharingDomain_3, (MR_Integer) 0))));

          {
            SharingAs_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SharingAs_4, 0) = ((MR_Box) (Reasons_7));
          }
        }
        break;
    }
    return SharingAs_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_18;

    transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_18));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word Unification_9,
  MR_Word GoalInfo_10,
  MR_Word OldSharing_11)
{
  {
    MR_bool succeeded;
    MR_Word NewSharing_12;
    MR_Word UnifSharing_13;
    MR_Word ResultSharing_14;

    UnifSharing_13 = transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0(ModuleInfo_7, ProcInfo_8, Unification_9, GoalInfo_10);
    ResultSharing_14 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_7, ProcInfo_8, UnifSharing_13, OldSharing_11);
    succeeded = ((MR_tag((MR_Word) Unification_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word HeadVars_26;
      MR_Word HeadVarsSet_27;
      MR_Word Deaths0_28;
      MR_Word Deaths_29;
      MR_Word DeathsList_30;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_26);
      HeadVarsSet_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_26);
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_10, &Deaths0_28);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Deaths0_28, HeadVarsSet_27, &Deaths_29);
      DeathsList_30 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Deaths_29);
      switch (MR_tag((MR_Word) ResultSharing_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NewSharing_12 = ResultSharing_14;
          break;
        case (MR_Integer) 1:
          {
            MR_Word SharingSet0_38 = (MR_Word) (MR_body((MR_Word) (ResultSharing_14), (MR_Integer) 1));
            MR_Word SharingSet_39;
            MR_Word Map0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_38, (MR_Integer) 1))));
            MR_Word Map_48;
            MR_Word AllVars_49;
            MR_Word Remainder_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_68;
            MR_Box conv1_SharingSet_39;
            MR_Integer Var_76;

            mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map0_47, &AllVars_49);
            Var_51 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), AllVars_49);
            Var_52 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), DeathsList_30);
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), Var_51, Var_52, &Remainder_50);
            mercury__map__select_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map0_47, Remainder_50, &Map_48);
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0_1));
              MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (DeathsList_30));
            }
            Var_68 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_68));
            }
            mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_54, Map_48, ((MR_Box) (Var_55)), &conv1_SharingSet_39);
            SharingSet_39 = ((MR_Word) (conv1_SharingSet_39));
            Var_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_39, (MR_Integer) 0))));
            succeeded = (Var_76 == (MR_Integer) 0);
            if (succeeded)
              NewSharing_12 = (MR_Word) ((MR_Unsigned) 0U);
            else
              NewSharing_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_39)));
          }
          break;
        case (MR_Integer) 2:
          NewSharing_12 = ResultSharing_14;
          break;
      }
    }
    else
      NewSharing_12 = ResultSharing_14;
    return NewSharing_12;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Sharing_18;

    transform_hlds__ctgc__structure_sharing__domain__add_var_arg_sharing_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Sharing_18);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Sharing_18));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__is_introduced_typeinfo_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Sharing_18;

    transform_hlds__ctgc__structure_sharing__domain__add_var_arg_sharing_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Sharing_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Sharing_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_11;
    MR_Integer conv0_LambdaHeadVar__4_13;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__number_args__553__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_11, ((MR_Integer) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_13);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_11));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__is_introduced_typeinfo_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Unification_8,
  MR_Word GoalInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word Sharing_10;

    switch (MR_tag((MR_Word) Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 1))));
          MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 2))));

          succeeded = transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(ModuleInfo_6, ProcInfo_7, Var_11);
          if (succeeded)
          {
            MR_Word Args_18;
            MR_Word NumberedArgs_19;
            MR_Word Var_42;
            MR_Word STATE_VARIABLE_SharingSet_43_43;
            MR_Word Var_44;
            MR_Word STATE_VARIABLE_SharingSet_45_45;
            MR_Word STATE_VARIABLE_SharingSet_46_46;
            MR_Box conv2_Var_82;
            MR_Box conv4_STATE_VARIABLE_SharingSet_45_45;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_1));
              MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ProcInfo_7));
            }
            mercury__list__drop_while_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), Var_42, Args0_13, &Args_18);
            mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[8]), Args_18, &NumberedArgs_19, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_82);
            STATE_VARIABLE_SharingSet_43_43 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_init_0_f_0();
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_3));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ProcInfo_7));
              MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (Var_11));
              MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (ConsId_12));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_44, NumberedArgs_19, ((MR_Box) (STATE_VARIABLE_SharingSet_43_43)), &conv4_STATE_VARIABLE_SharingSet_45_45);
            STATE_VARIABLE_SharingSet_45_45 = ((MR_Word) (conv4_STATE_VARIABLE_SharingSet_45_45));
            transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0(ModuleInfo_6, ProcInfo_7, Var_11, ConsId_12, NumberedArgs_19, STATE_VARIABLE_SharingSet_45_45, &STATE_VARIABLE_SharingSet_46_46);
            Sharing_10 = transform_hlds__ctgc__structure_sharing__domain__wrap_1_f_0(STATE_VARIABLE_SharingSet_46_46);
          }
          else
            Sharing_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReducedNumberedArgs_24;
          MR_Word Var_38;
          MR_Word STATE_VARIABLE_SharingSet_39_39;
          MR_Word Var_40;
          MR_Word STATE_VARIABLE_SharingSet_41_41;
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 1))));
          MR_Word Args0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 2))));
          MR_Word Args_50;
          MR_Word NumberedArgs_51;
          MR_Box conv6_STATE_VARIABLE_SharingSet_41_41;

          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_4));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ProcInfo_7));
          }
          mercury__list__drop_while_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), Var_38, Args0_49, &Args_50);
          transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0(Args_50, &NumberedArgs_51);
          transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0(GoalInfo_9, NumberedArgs_51, &ReducedNumberedArgs_24);
          STATE_VARIABLE_SharingSet_39_39 = transform_hlds__ctgc__structure_sharing__domain__sharing_set_init_0_f_0();
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_from_unification_4_f_0_5));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (ProcInfo_7));
            MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), Var_40, 6) = ((MR_Box) (ConsId_48));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_40, ReducedNumberedArgs_24, ((MR_Box) (STATE_VARIABLE_SharingSet_39_39)), &conv6_STATE_VARIABLE_SharingSet_41_41);
          STATE_VARIABLE_SharingSet_41_41 = ((MR_Word) (conv6_STATE_VARIABLE_SharingSet_41_41));
          Sharing_10 = transform_hlds__ctgc__structure_sharing__domain__wrap_1_f_0(STATE_VARIABLE_SharingSet_41_41);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 0))));
          MR_Word Y_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 1))));

          succeeded = transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(ModuleInfo_6, ProcInfo_7, X_25);
          if (succeeded)
          {
            MR_Word SharingSet_20;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_67;
            MR_Integer Var_75;

            Var_36 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(X_25);
            Var_37 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(Y_26);
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_37));
            }
            Var_67 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
            {
              Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_67));
            }
            transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(ModuleInfo_6, ProcInfo_7, Var_34, Var_35, &SharingSet_20);
            Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_20, (MR_Integer) 0))));
            succeeded = (Var_75 == (MR_Integer) 0);
            if (succeeded)
              Sharing_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
              Sharing_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_20)));
          }
          else
            Sharing_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Sharing_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_sharing.domain.sharing_from_unification\'/4", (MR_String) "complicated_unify");
            break;
        }
        break;
    }
    return Sharing_10;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_SharingSet_9;

    transform_hlds__ctgc__structure_sharing__domain__remove_entry_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SharingSet_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SharingSet_9));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_40;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_set_subsumed_subset__1595__1_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_40);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_40));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word SharingPair0_8,
  MR_Word STATE_VARIABLE_SharingSet_0_17,
  MR_Word * STATE_VARIABLE_SharingSet_18)
{
  {
    MR_bool succeeded;
    MR_Word DataX0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair0_8, (MR_Integer) 0))));
    MR_Word DataY0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair0_8, (MR_Integer) 1))));
    MR_Word DataX_12;
    MR_Word DataY_13;
    MR_Word SharingPair_14;

    DataX_12 = transform_hlds__ctgc__datastruct__normalize_datastruct_3_f_0(ModuleInfo_6, ProcInfo_7, DataX0_10);
    DataY_13 = transform_hlds__ctgc__datastruct__normalize_datastruct_3_f_0(ModuleInfo_6, ProcInfo_7, DataY0_11);
    {
      SharingPair_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SharingPair_14, 0) = ((MR_Box) (DataX_12));
      MR_hl_field(MR_mktag(0), SharingPair_14, 1) = ((MR_Box) (DataY_13));
    }
    succeeded = parse_tree__prog_data_pragma____Unify____datastruct_0_0(DataX_12, DataY_13);
    if (!(succeeded))
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0(ModuleInfo_6, ProcInfo_7, STATE_VARIABLE_SharingSet_0_17, SharingPair_14);
    if (succeeded)
      *STATE_VARIABLE_SharingSet_18 = STATE_VARIABLE_SharingSet_0_17;
    else
    {
      MR_Word SubsumedPairsNoDups_16;
      MR_Word STATE_VARIABLE_SharingSet_20_20;
      MR_Word SharingMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SharingSet_0_17, (MR_Integer) 1))));
      MR_Word Data1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_14, (MR_Integer) 0))));
      MR_Word Data2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_14, (MR_Integer) 1))));
      MR_Word Var1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_30, (MR_Integer) 0))));
      MR_Word Sel1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_30, (MR_Integer) 1))));
      MR_Word Var2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_31, (MR_Integer) 0))));
      MR_Word Sel2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_31, (MR_Integer) 1))));
      MR_Word Type1_36;
      MR_Word Type2_37;
      MR_Word VarTypes_38;
      MR_Word SelSharingSet_39;
      MR_Box conv0_SelSharingSet_39;
      MR_Box conv3_STATE_VARIABLE_SharingSet_20_20;

      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_38);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_38, Var1_32, &Type1_36);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_38, Var2_34, &Type2_37);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap_29, ((MR_Box) (Var1_32)), &conv0_SelSharingSet_39);
      if (succeeded)
      {
        SelSharingSet_39 = ((MR_Word) (conv0_SelSharingSet_39));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word SubsumedPairs_15;
        MR_Word SelSharingMap_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet_39, (MR_Integer) 1))));
        MR_Word SelectorList_42;
        MR_Word ListSubsumedPairs_54;
        MR_Word Var_55;

        mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), SelSharingMap_41, &SelectorList_42);
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__new_entry_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ModuleInfo_6));
          MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Var1_32));
          MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (Sel1_33));
          MR_hl_field(MR_mktag(0), Var_55, 6) = ((MR_Box) (Var2_34));
          MR_hl_field(MR_mktag(0), Var_55, 7) = ((MR_Box) (Sel2_35));
          MR_hl_field(MR_mktag(0), Var_55, 8) = ((MR_Box) (Type1_36));
          MR_hl_field(MR_mktag(0), Var_55, 9) = ((MR_Box) (Type2_37));
          MR_hl_field(MR_mktag(0), Var_55, 10) = ((MR_Box) (SelSharingMap_41));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[2]), Var_55, SelectorList_42, &ListSubsumedPairs_54);
        mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), ListSubsumedPairs_54, &SubsumedPairs_15);
        transform_hlds__ctgc__structure_sharing__domain__remove_swapped_dup_pairs_3_p_0(SubsumedPairs_15, (MR_Word) ((MR_Unsigned) 0U), &SubsumedPairsNoDups_16);
      }
      else
        SubsumedPairsNoDups_16 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[7]), SubsumedPairsNoDups_16, ((MR_Box) (STATE_VARIABLE_SharingSet_0_17)), &conv3_STATE_VARIABLE_SharingSet_20_20);
      STATE_VARIABLE_SharingSet_20_20 = ((MR_Word) (conv3_STATE_VARIABLE_SharingSet_20_20));
      transform_hlds__ctgc__structure_sharing__domain__new_entry_no_controls_3_p_0(SharingPair_14, STATE_VARIABLE_SharingSet_20_20, STATE_VARIABLE_SharingSet_18);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__remove_swapped_dup_pairs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Acc_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Acc_3 = HeadVar__2_2;
    else
    {
      MR_Word H_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word A_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H_5, (MR_Integer) 0))));
      MR_Word B_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H_5, (MR_Integer) 1))));
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (B_10));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (A_9));
      }
      succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[4]), ((MR_Box) (Var_11)), HeadVar__2_2);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = T_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word Var_12;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (H_5));
          MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (HeadVar__2_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = T_6;
        next_value_of_HeadVar__2_2 = Var_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel_34 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv1_Sel_34));
    transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv3_Datastructure_33));
    transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_35;
      MR_Word Var_36;

      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33, (MR_Integer) 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_44_44 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]);
      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_44_44, ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var2_15)), ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_42)));
      if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
      {
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33, (MR_Integer) 0))));
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Datastructure_33, (MR_Integer) 1))));
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_32 = (MR_Integer) 1;
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__ModuleInfo_5, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_32, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel2_16, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSel_29, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type2_18, &(env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_43);
        if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_45_45 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
          (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_45_45, ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Extension_25)), ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_43)));
          if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
            transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_4(env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_1) == 0)
      {
        mercury__set__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), &(env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv3_Datastructure_33, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSet_27, transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_6, env_ptr);
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Box conv2_Var_31;
      MR_Integer Var_26;

      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_30 = (MR_Integer) 1;
      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__ModuleInfo_5, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_30, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel1_14, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel_34, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type1_17, &(env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Extension_25);
      if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_39_39, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeCtorInfo_40_40, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelSharingMap_22, ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel_34)), &conv2_Var_31);
        if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_31 = ((MR_Word) (conv2_Var_31));
          (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
        {
          Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_31, (MR_Integer) 0))));
          (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__DatastructureSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var_31, (MR_Integer) 1))));
          transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_7(env_ptr);
          if ((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
            transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_1(env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_39_39, &(env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__conv1_Sel_34, (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelectorList_23, transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word SharingSet_7,
  MR_Word SharingPair_8)
{
  {
    struct transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0_s env;

    (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__ModuleInfo_5 = ModuleInfo_5;
    {
      MR_Word SharingMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet_7, (MR_Integer) 1))));
      MR_Word Data1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_8, (MR_Integer) 0))));
      MR_Word Data2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_8, (MR_Integer) 1))));
      MR_Word Var1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_11, (MR_Integer) 0))));
      MR_Word VarTypes_19;
      MR_Word SelSharingSet_20;
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_7, (MR_Integer) 0))));
      MR_Box conv0_SelSharingSet_20;
      MR_Integer Var_21;

      (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_11, (MR_Integer) 1))));
      (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_12, (MR_Integer) 0))));
      (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Sel2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_12, (MR_Integer) 1))));
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_19);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var1_13, &(env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type1_17);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Var2_15, &(env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__Type2_18);
      (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), SharingMap_10, ((MR_Box) (Var1_13)), &conv0_SelSharingSet_20);
      if ((env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
      {
        SelSharingSet_20 = ((MR_Word) (conv0_SelSharingSet_20));
        (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded)
      {
        Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSharingSet_20, (MR_Integer) 0))));
        (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelSharingMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet_20, (MR_Integer) 1))));
        (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_39_39 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
        (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeCtorInfo_40_40 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
        mercury__map__keys_2_p_0((env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeInfo_39_39, (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__TypeCtorInfo_40_40, (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelSharingMap_22, &(env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__SelectorList_23);
        transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_8(&env);
      }
      return (env).transform_hlds__ctgc__structure_sharing__domain__sharing_set_subsumes_sharing_pair_4_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_entry_no_controls_3_p_0(
  MR_Word SharingPair_4,
  MR_Word STATE_VARIABLE_SS_0_8,
  MR_Word * STATE_VARIABLE_SS_9)
{
  {
    MR_bool succeeded;
    MR_Word Data1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_4, (MR_Integer) 0))));
    MR_Word Data2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingPair_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_SS_10_10;

    transform_hlds__ctgc__structure_sharing__domain__new_directed_entry_4_p_0(Data1_6, Data2_7, STATE_VARIABLE_SS_0_8, &STATE_VARIABLE_SS_10_10);
    succeeded = transform_hlds__ctgc__datastruct__datastruct_equal_2_p_0(Data1_6, Data2_7);
    if (succeeded)
      *STATE_VARIABLE_SS_9 = STATE_VARIABLE_SS_10_10;
    else
      transform_hlds__ctgc__structure_sharing__domain__new_directed_entry_4_p_0(Data2_7, Data1_6, STATE_VARIABLE_SS_10_10, STATE_VARIABLE_SS_9);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__new_directed_entry_4_p_0(
  MR_Word FromData_5,
  MR_Word ToData_6,
  MR_Word SharingSet0_7,
  MR_Word * SharingSet_8)
{
  {
    MR_bool succeeded;
    MR_Integer Size0_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet0_7, (MR_Integer) 0))));
    MR_Word Map0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_7, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromData_5, (MR_Integer) 0))));
    MR_Word Selector_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromData_5, (MR_Integer) 1))));
    MR_Word Map_15;
    MR_Integer Size_16;
    MR_Word Selectors0_13;
    MR_Box conv0_Selectors0_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map0_10, ((MR_Box) (Var_11)), &conv0_Selectors0_13);
    if (succeeded)
    {
      Selectors0_13 = ((MR_Word) (conv0_Selectors0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Selectors_14;
      MR_Integer Size0_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Selectors0_13, (MR_Integer) 0))));
      MR_Word Map0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Selectors0_13, (MR_Integer) 1))));
      MR_Integer Size_39;
      MR_Word Map_40;
      MR_Word DataSet0_37;
      MR_Box conv1_DataSet0_37;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), Map0_36, ((MR_Box) (Selector_12)), &conv1_DataSet0_37);
      if (succeeded)
      {
        DataSet0_37 = ((MR_Word) (conv1_DataSet0_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeInfo_21_47;
        MR_Word TypeCtorInfo_22_48;
        MR_Word TypeCtorInfo_13_60;
        MR_Word DataSet_38;
        MR_Integer Var_41;
        MR_Integer Size0_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet0_37, (MR_Integer) 0))));
        MR_Word Datastructs0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_37, (MR_Integer) 1))));
        MR_Word Datastructs_56;
        MR_Integer Size_57;
        MR_Integer Var_58;

        succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (ToData_6)), Datastructs0_55);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_13_60 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
          mercury__set__insert_3_p_0(TypeCtorInfo_13_60, ((MR_Box) (ToData_6)), Datastructs0_55, &Datastructs_56);
          Var_58 = (MR_Integer) 1;
          Size_57 = (MR_Integer) ((MR_Unsigned) Size0_54 + (MR_Unsigned) Var_58);
          Var_41 = (MR_Integer) 1;
          Size_39 = (MR_Integer) ((MR_Unsigned) Size0_35 + (MR_Unsigned) Var_41);
          TypeInfo_21_47 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
          TypeCtorInfo_22_48 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
          {
            DataSet_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DataSet_38, 0) = ((MR_Box) (Size_57));
            MR_hl_field(MR_mktag(0), DataSet_38, 1) = ((MR_Box) (Datastructs_56));
          }
          mercury__map__det_update_4_p_0(TypeInfo_21_47, TypeCtorInfo_22_48, ((MR_Box) (Selector_12)), ((MR_Box) (DataSet_38)), Map0_36, &Map_40);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word TypeInfo_23_49;
        MR_Word TypeCtorInfo_24_50;
        MR_Word TypeCtorInfo_13_73;
        MR_Integer Var_43;
        MR_Word DataSet_44;
        MR_Word Datastructs0_68;
        MR_Word Datastructs_69;
        MR_Integer Size_70;
        MR_Integer Var_71;

        Datastructs0_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0));
        succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (ToData_6)), Datastructs0_68);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_13_73 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
          mercury__set__insert_3_p_0(TypeCtorInfo_13_73, ((MR_Box) (ToData_6)), Datastructs0_68, &Datastructs_69);
          Var_71 = (MR_Integer) 1;
          Size_70 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) Var_71);
          Var_43 = (MR_Integer) 1;
          Size_39 = (MR_Integer) ((MR_Unsigned) Size0_35 + (MR_Unsigned) Var_43);
          TypeInfo_23_49 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
          TypeCtorInfo_24_50 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
          {
            DataSet_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DataSet_44, 0) = ((MR_Box) (Size_70));
            MR_hl_field(MR_mktag(0), DataSet_44, 1) = ((MR_Box) (Datastructs_69));
          }
          mercury__map__det_insert_4_p_0(TypeInfo_23_49, TypeCtorInfo_24_50, ((MR_Box) (Selector_12)), ((MR_Box) (DataSet_44)), Map0_36, &Map_40);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        {
          Selectors_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Selectors_14, 0) = ((MR_Box) (Size_39));
          MR_hl_field(MR_mktag(0), Selectors_14, 1) = ((MR_Box) (Map_40));
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (Var_11)), ((MR_Box) (Selectors_14)), Map0_10, &Map_15);
        Size_16 = (MR_Integer) ((MR_Unsigned) Size0_9 + (MR_Unsigned) 1);
      }
      else
      {
        Map_15 = Map0_10;
        Size_16 = Size0_9;
      }
    }
    else
    {
      MR_Word Selectors_22;
      MR_Word Var_18;
      MR_Word Var_75;

      Var_75 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0));
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_75));
      }
      succeeded = transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_new_entry_4_p_0(Selector_12, ToData_6, Var_18, &Selectors_22);
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), ((MR_Box) (Var_11)), ((MR_Box) (Selectors_22)), Map0_10, &Map_15);
        Size_16 = (MR_Integer) ((MR_Unsigned) Size0_9 + (MR_Unsigned) 1);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_sharing.domain.new_directed_entry\'/4", (MR_String) "impossible option");
          return;
        }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *SharingSet_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_15));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__selector_sharing_set_new_entry_4_p_0(
  MR_Word Selector_5,
  MR_Word Datastruct_6,
  MR_Word SelSharingSet0_7,
  MR_Word * SelSharingSet_8)
{
  {
    MR_bool succeeded;
    MR_Integer Size0_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelSharingSet0_7, (MR_Integer) 0))));
    MR_Word Map0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelSharingSet0_7, (MR_Integer) 1))));
    MR_Integer Size_13;
    MR_Word Map_14;
    MR_Word DataSet0_11;
    MR_Box conv0_DataSet0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0), Map0_10, ((MR_Box) (Selector_5)), &conv0_DataSet0_11);
    if (succeeded)
    {
      DataSet0_11 = ((MR_Word) (conv0_DataSet0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeCtorInfo_22_22;
      MR_Word TypeCtorInfo_13_34;
      MR_Word DataSet_12;
      MR_Integer Var_15;
      MR_Integer Size0_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DataSet0_11, (MR_Integer) 0))));
      MR_Word Datastructs0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataSet0_11, (MR_Integer) 1))));
      MR_Word Datastructs_30;
      MR_Integer Size_31;
      MR_Integer Var_32;

      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Datastruct_6)), Datastructs0_29);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_13_34 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
        mercury__set__insert_3_p_0(TypeCtorInfo_13_34, ((MR_Box) (Datastruct_6)), Datastructs0_29, &Datastructs_30);
        Var_32 = (MR_Integer) 1;
        Size_31 = (MR_Integer) ((MR_Unsigned) Size0_28 + (MR_Unsigned) Var_32);
        Var_15 = (MR_Integer) 1;
        Size_13 = (MR_Integer) ((MR_Unsigned) Size0_9 + (MR_Unsigned) Var_15);
        TypeInfo_21_21 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
        TypeCtorInfo_22_22 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
        {
          DataSet_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DataSet_12, 0) = ((MR_Box) (Size_31));
          MR_hl_field(MR_mktag(0), DataSet_12, 1) = ((MR_Box) (Datastructs_30));
        }
        mercury__map__det_update_4_p_0(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) (Selector_5)), ((MR_Box) (DataSet_12)), Map0_10, &Map_14);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeCtorInfo_13_47;
      MR_Integer Var_17;
      MR_Word DataSet_18;
      MR_Word Datastructs0_42;
      MR_Word Datastructs_43;
      MR_Integer Size_44;
      MR_Integer Var_45;

      Datastructs0_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0));
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Datastruct_6)), Datastructs0_42);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_13_47 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
        mercury__set__insert_3_p_0(TypeCtorInfo_13_47, ((MR_Box) (Datastruct_6)), Datastructs0_42, &Datastructs_43);
        Var_45 = (MR_Integer) 1;
        Size_44 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) Var_45);
        Var_17 = (MR_Integer) 1;
        Size_13 = (MR_Integer) ((MR_Unsigned) Size0_9 + (MR_Unsigned) Var_17);
        TypeInfo_23_23 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[3]);
        TypeCtorInfo_24_24 = (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
        {
          DataSet_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DataSet_18, 0) = ((MR_Box) (Size_44));
          MR_hl_field(MR_mktag(0), DataSet_18, 1) = ((MR_Box) (Datastructs_43));
        }
        mercury__map__det_insert_4_p_0(TypeInfo_23_23, TypeCtorInfo_24_24, ((MR_Box) (Selector_5)), ((MR_Box) (DataSet_18)), Map0_10, &Map_14);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *SelSharingSet_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Size_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_14));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__wrap_1_f_0(
  MR_Word SharingSet_3)
{
  {
    MR_bool succeeded;
    MR_Word SharingAs_4;
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_3, (MR_Integer) 0))));

    succeeded = (Var_8 == (MR_Integer) 0);
    if (succeeded)
      SharingAs_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      SharingAs_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_3)));
    return SharingAs_4;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_set_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_3;

    Var_3 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__optimize_for_deconstruct__620__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_NumberedArgs_0_10,
  MR_Word * STATE_VARIABLE_NumberedArgs_11)
{
  {
    MR_bool succeeded;
    MR_Word PreBirthSet_6;
    MR_Word IsPreBirthArg_7;

    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo_4, &PreBirthSet_6);
    {
      IsPreBirthArg_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsPreBirthArg_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), IsPreBirthArg_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__optimize_for_deconstruct_3_p_0_1));
      MR_hl_field(MR_mktag(0), IsPreBirthArg_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), IsPreBirthArg_7, 3) = ((MR_Box) (PreBirthSet_6));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), IsPreBirthArg_7, STATE_VARIABLE_NumberedArgs_0_10, STATE_VARIABLE_NumberedArgs_11);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_27;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__create_internal_sharing__592__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_27);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_27));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word NumberedArgs_12,
  MR_Word STATE_VARIABLE_Sharing_0_23,
  MR_Word * STATE_VARIABLE_Sharing_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((NumberedArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Sharing_24 = STATE_VARIABLE_Sharing_0_23;
    else
    {
      MR_Word First_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NumberedArgs_12, (MR_Integer) 0))));
      MR_Word Remainder_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NumberedArgs_12, (MR_Integer) 1))));
      MR_Integer Pos1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), First_14, (MR_Integer) 0))));
      MR_Word Var1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_14, (MR_Integer) 1))));
      MR_Word AddPair_18;
      MR_Word STATE_VARIABLE_Sharing_32_32;
      MR_Box conv1_STATE_VARIABLE_Sharing_32_32;
      MR_Word next_value_of_NumberedArgs_12;
      MR_Word next_value_of_STATE_VARIABLE_Sharing_0_23;

      {
        AddPair_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AddPair_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), AddPair_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__create_internal_sharing_7_p_0_1));
        MR_hl_field(MR_mktag(0), AddPair_18, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), AddPair_18, 3) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), AddPair_18, 4) = ((MR_Box) (ProcInfo_9));
        MR_hl_field(MR_mktag(0), AddPair_18, 5) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), AddPair_18, 6) = ((MR_Box) (ConsId_11));
        MR_hl_field(MR_mktag(0), AddPair_18, 7) = ((MR_Box) (Pos1_16));
        MR_hl_field(MR_mktag(0), AddPair_18, 8) = ((MR_Box) (Var1_17));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), AddPair_18, Remainder_15, ((MR_Box) (STATE_VARIABLE_Sharing_0_23)), &conv1_STATE_VARIABLE_Sharing_32_32);
      STATE_VARIABLE_Sharing_32_32 = ((MR_Word) (conv1_STATE_VARIABLE_Sharing_32_32));
      // direct tailcall eliminated
      ;
      next_value_of_NumberedArgs_12 = Remainder_15;
      next_value_of_STATE_VARIABLE_Sharing_0_23 = STATE_VARIABLE_Sharing_32_32;
      NumberedArgs_12 = next_value_of_NumberedArgs_12;
      STATE_VARIABLE_Sharing_0_23 = next_value_of_STATE_VARIABLE_Sharing_0_23;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_11;
    MR_Integer conv0_LambdaHeadVar__4_13;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__number_args__553__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_11, ((MR_Integer) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_13);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_11));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__number_args_2_p_0(
  MR_Word Args_3,
  MR_Word * NumberedArgs_4)
{
  {
    MR_Box conv2_Var_9;

    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[6]), Args_3, NumberedArgs_4, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_9);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__1_23;

    transform_hlds__ctgc__structure_sharing__domain__IntroducedFrom__pred__sharing_as_comb__431__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv0_LambdaHeadVar__1_23);
    *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_23));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewSharing_8,
  MR_Word OldSharing_9)
{
  {
    MR_bool succeeded;
    MR_Word ResultSharing_10;

    switch (MR_tag((MR_Word) NewSharing_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ResultSharing_10 = OldSharing_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NewSharingSet_11 = (MR_Word) (MR_body((MR_Word) (NewSharing_8), (MR_Integer) 1));

          switch (MR_tag((MR_Word) OldSharing_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ResultSharing_10 = NewSharing_8;
              break;
            case (MR_Integer) 1:
              {
                MR_Word OldSharingSet_12 = (MR_Word) (MR_body((MR_Word) (OldSharing_9), (MR_Integer) 1));
                MR_Word MaybeExcp_13;
                MR_Word Var_22;

                {
                  Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0_1));
                  MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_6));
                  MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (ProcInfo_7));
                  MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (NewSharingSet_11));
                  MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (OldSharingSet_12));
                }
                mercury__exception__try_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_22, &MaybeExcp_13);
                if (((MR_tag((MR_Word) MaybeExcp_13)) == (MR_Integer) 2))
                {
                  MR_Word Excp_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeExcp_13, (MR_Integer) 0))));
                  MR_Box conv1_Var_31;

                  succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&transform_hlds__ctgc__selector__transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0), Excp_16, &conv1_Var_31);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                  {
                    MR_Word Var_33;

                    Var_33 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_sharing__domain_scalar_common_5[0]))));
                    {
                      ResultSharing_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ResultSharing_10, 0) = ((MR_Box) (Var_33));
                    }
                  }
                  else
                    mercury__exception__rethrow_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), MaybeExcp_13);
                }
                else
                {
                  MR_Word SharingSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExcp_13, (MR_Integer) 0))));
                  MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_15, (MR_Integer) 0))));

                  succeeded = (Var_40 == (MR_Integer) 0);
                  if (succeeded)
                    ResultSharing_10 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                    ResultSharing_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_15)));
                }
              }
              break;
            case (MR_Integer) 2:
              ResultSharing_10 = OldSharing_9;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MsgNew_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NewSharing_8, (MR_Integer) 0))));
          MR_Word MsgOld_20;

          succeeded = ((MR_tag((MR_Word) OldSharing_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            MsgOld_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldSharing_9, (MR_Integer) 0))));
            {
              MR_Word Var_21;

              Var_21 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), MsgNew_19, MsgOld_20);
              {
                ResultSharing_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ResultSharing_10, 0) = ((MR_Box) (Var_21));
              }
            }
          }
          else
            ResultSharing_10 = NewSharing_8;
        }
        break;
    }
    return ResultSharing_10;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_using_module_info_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PPId_10,
  MR_Word ActualVars_11,
  MR_Word ActualTypes_12,
  MR_Word CallerTypeVarSet_13,
  MR_Word CallerExternalTypeParams_14,
  MR_Word FormalSharing_15,
  MR_Word * ActualSharing_16)
{
  {
    MR_Word VarRenaming_17;
    MR_Word TypeSubst_18;

    VarRenaming_17 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(ModuleInfo_9, PPId_10, ActualVars_11);
    TypeSubst_18 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(ModuleInfo_9, PPId_10, ActualTypes_12, CallerTypeVarSet_13, CallerExternalTypeParams_14);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(VarRenaming_17, TypeSubst_18, FormalSharing_15, ActualSharing_16);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_17;

    transform_hlds__ctgc__structure_sharing__domain__do_sharing_set_rename_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Map_17);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Map_17));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(
  MR_Word MapVar_5,
  MR_Word TypeSubst_6,
  MR_Word STATE_VARIABLE_SharingAs_0_11,
  MR_Word * STATE_VARIABLE_SharingAs_12)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_SharingAs_0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_SharingAs_12 = STATE_VARIABLE_SharingAs_0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SharingSet0_8 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_SharingAs_0_11), (MR_Integer) 1));
        MR_Word SharingSet_9;
        MR_Integer Size_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet0_8, (MR_Integer) 0))));
        MR_Word Map0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_8, (MR_Integer) 1))));
        MR_Word Map_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Box conv1_Map_20;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (MapVar_5));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (TypeSubst_6));
        }
        Var_22 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
        mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_2[3]), Var_21, Map0_19, ((MR_Box) (Var_22)), &conv1_Map_20);
        Map_20 = ((MR_Word) (conv1_Map_20));
        {
          SharingSet_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SharingSet_9, 0) = ((MR_Box) (Size_18));
          MR_hl_field(MR_mktag(0), SharingSet_9, 1) = ((MR_Box) (Map_20));
        }
        *STATE_VARIABLE_SharingAs_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_9)));
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_SharingAs_12 = STATE_VARIABLE_SharingAs_0_11;
      break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_set_3_p_0(
  MR_Word SetVars_4,
  MR_Word STATE_VARIABLE_SharingAs_0_6,
  MR_Word * STATE_VARIABLE_SharingAs_7)
{
  {
    MR_Word Var_8;

    Var_8 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), SetVars_4);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(Var_8, STATE_VARIABLE_SharingAs_0_6, STATE_VARIABLE_SharingAs_7);
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_f_0(
  MR_Word ListVars_4,
  MR_Word SharingAs_5)
{
  {
    MR_Word NewSharingAs_6;

    transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(ListVars_4, SharingAs_5, &NewSharingAs_6);
    return NewSharingAs_6;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SS_18;

    transform_hlds__ctgc__structure_sharing__domain__project_and_update_sharing_set_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SS_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SS_18));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(
  MR_Word ListVars_4,
  MR_Word STATE_VARIABLE_SharingAs_0_6,
  MR_Word * STATE_VARIABLE_SharingAs_7)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_SharingAs_0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_SharingAs_7 = STATE_VARIABLE_SharingAs_0_6;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet0_15 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_SharingAs_0_6), (MR_Integer) 1));
          MR_Word SharingSet_16;
          MR_Word Map0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingSet0_15, (MR_Integer) 1))));
          MR_Word Map_25;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_45;
          MR_Box conv1_SharingSet_16;
          MR_Integer Var_53;

          Var_30 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), ListVars_4);
          mercury__map__select_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), Map0_24, Var_30, &Map_25);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ListVars_4));
          }
          Var_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0));
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_45));
          }
          mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_sharing__domain_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0), (MR_Word) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0), Var_31, Map_25, ((MR_Box) (Var_32)), &conv1_SharingSet_16);
          SharingSet_16 = ((MR_Word) (conv1_SharingSet_16));
          Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_16, (MR_Integer) 0))));
          succeeded = (Var_53 == (MR_Integer) 0);
          if (succeeded)
            *STATE_VARIABLE_SharingAs_7 = (MR_Word) ((MR_Unsigned) 0U);
          else
            *STATE_VARIABLE_SharingAs_7 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SharingSet_16)));
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_SharingAs_7 = STATE_VARIABLE_SharingAs_0_6;
        break;
    }
  }
}

MR_String MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_short_description_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "b";
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingSet_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_4, (MR_Integer) 0))));

          HeadVar__2_2 = mercury__string__from_int_1_f_0(Var_5);
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "t";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_size_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word SharingSet_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

      *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SharingSet_3, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);

    if (succeeded)
    {
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(
  MR_Word Msg_4,
  MR_Word SharingAs_5)
{
  {
    MR_Word TopSharing_6;

    switch (MR_tag((MR_Word) SharingAs_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_12;

          Var_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Msg_4)));
          {
            TopSharing_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), TopSharing_6, 0) = ((MR_Box) (Var_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;

          Var_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Msg_4)));
          {
            TopSharing_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), TopSharing_6, 0) = ((MR_Box) (Var_12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Msgs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SharingAs_5, (MR_Integer) 0))));
          MR_Word Msgs_9;

          Msgs_9 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), Msgs0_8, ((MR_Box) (Msg_4)));
          {
            TopSharing_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), TopSharing_6, 0) = ((MR_Box) (Msgs_9));
          }
        }
        break;
    }
    return TopSharing_6;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_1_f_0(
  MR_Word Msg_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0), ((MR_Box) (Msg_3)));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_no_feedback_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;

    Var_2 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_top_feedback_0));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    }
    return HeadVar__1_1;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____data_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____data_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____projection_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____projection_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____selector_sharing_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____selector_sharing_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_and_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_and_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_and_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_and_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__ctgc__structure_sharing__domain__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_sharing__domain__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_data_set_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_projection_type_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_selector_sharing_set_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_set_0);
}

void mercury__transform_hlds__ctgc__structure_sharing__domain__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_sharing__domain__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_sharing.domain.
