/*
** Automatically generated from `polymorphism.m'
** by the Mercury compiler,
** version rotd-2020-07-17
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


// :- module check_hlds.polymorphism.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism__init
REQUIRED_INIT mercury__check_hlds__polymorphism__required_init
ENDINIT
*/

#include "check_hlds.polymorphism.mih"
#include "check_hlds.polymorphism.mh"


#include "analysis.mih"
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
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s {
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__RttiVarMaps0_20;
  MR_Word * check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__LambdaHeadVar__1_41;
  MR_Cont check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont;
  void * check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeInfo_70_70;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Type_23;
  MR_Integer check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Index_24;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVars_25;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVar_26;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Var_42;
  MR_Box check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv0_Var_42;
  MR_Box check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv1_TypeVar_26;
};

struct check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0_s {
  MR_Box * check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont;
  void * check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__conv1_LambdaHeadVar__1_41;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_cache_maps_0_0[5];

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_cache_maps_0_0[5];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_cache_maps_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_cache_maps_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_cache_maps_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_cache_maps_0[1];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_cache_maps_0[1];

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_0[1];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_1[1];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_1;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_1[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_const_or_var_arg_0[2];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_const_or_var_arg_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_const_or_var_arg_0[2];

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_0[1];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_1[1];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_1;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_1[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_int_or_var_0[2];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_int_or_var_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_int_or_var_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_poly_info_0_0[16];

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_poly_info_0_0[16];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_poly_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_poly_info_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_poly_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_poly_info_0[1];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_poly_info_0[1];

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_record_type_info_locns_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_tci_var_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_type_info_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_type_info_kind_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_type_info_kind_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_typeclass_info_map_entry_0_0[2];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_typeclass_info_map_entry_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_typeclass_info_map_entry_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_typeclass_info_map_entry_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_typeclass_info_map_entry_0[1];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_typeclass_info_map_entry_0[1];

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_var_maps_0_0[5];

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_var_maps_0_0[5];

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_var_maps_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_var_maps_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_var_maps_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_var_maps_0[1];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_var_maps_0[1];

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3890__1_4_p_0(
  MR_Word ExtraHeadVar_6,
  MR_Word LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word * LambdaHeadVar__3_45);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0(
  MR_Word IndexedClassTypes_19,
  MR_Word RttiVarMaps0_20,
  MR_Word * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2939__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2292__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68);

static MR_Word MR_CALL 
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1960__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_57_54_48_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1944__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word LambdaHeadVar__1_47);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__setup_headvars_2__948__1_2_p_0(
  MR_Word LambdaHeadVar__1_90,
  MR_Word * LambdaHeadVar__2_91);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__568__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__566__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16);

static void MR_CALL 
check_hlds__polymorphism____Compare____var_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____var_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____int_const_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_const_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____const_struct_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_struct_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____const_or_var_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_or_var_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____cache_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____cache_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism__unlock_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__lock_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__unsafe_set_level_1_p_0(
  MR_Integer X_1);

static void MR_CALL 
check_hlds__polymorphism__pre_initialise_mutable_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__initialise_mutable_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__unlock_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__lock_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__unsafe_set_selected_pred_1_p_0(
  MR_Word X_1);

static void MR_CALL 
check_hlds__polymorphism__pre_initialise_mutable_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5);

static void MR_CALL 
check_hlds__polymorphism__get_inst_of_const_struct_arg_3_p_0(
  MR_Word ConstStructDb_4,
  MR_Word ConstArg_5,
  MR_Word * Inst_6);

static MR_Word MR_CALL 
check_hlds__polymorphism__get_constrained_vars_1_f_0(
  MR_Word Constraint_3);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_body_5_p_0(
  MR_Word ClassProc_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_47,
  MR_Integer * STATE_VARIABLE_ProcNum_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50);

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_6,
  MR_Word * Result_7);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static MR_String MR_CALL 
check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5);

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21);

static MR_Box MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10);

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__polymorphism__fixup_quantification_6_p_0(
  MR_Word HeadVars_7,
  MR_Word ExistQVars_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_108,
  MR_Word * STATE_VARIABLE_Info_109);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_9_p_0(
  MR_Word XVar_10,
  MR_Word Y_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Impl_6,
  MR_Word Vars_7,
  MR_Word * Args_8);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(
  MR_Word ExistentialConstraints_7,
  MR_Word Context_8,
  MR_Word * ExtraTypeClassVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__polymorphism__empty_cache_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_8_p_0(
  MR_Word ArgVars_9,
  MR_Word LambdaVars_10,
  MR_Word ExistQVars_11,
  MR_Word STATE_VARIABLE_Goal_0_28,
  MR_Word * STATE_VARIABLE_Goal_29,
  MR_Word * NewOutsideVars_13,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word HeadVars_11,
  MR_Word UnconstrainedTVars_12,
  MR_Word TypeInfoHeadVars_13,
  MR_Word ExistTypeClassInfoHeadVars_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Constraints_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7);

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_proof_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4);

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_rtti_varmaps_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__polymorphism__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0(
  MR_Word Constraint_5,
  MR_Word ExtraHeadVar_6,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__polymorphism__assign_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__create_fresh_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6);

static void MR_CALL 
check_hlds__polymorphism__lambda_modes_and_det_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Context_8,
  MR_Word LambdaVars_9,
  MR_Word * MaybeResult_10);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_do_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * VarMCA_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_num_reuses_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7);

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_type_info_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7);

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_num_reuses_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Integer * X_4);

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_type_info_var_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0(
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word TypeArgs_13,
  MR_Word TypeCtorIsVarArity_14,
  MR_Word Context_15,
  MR_Word * Var_16,
  MR_Word * MCA_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeArgs_12,
  MR_Word TypeCtorIsVarArity_13,
  MR_Word Context_14,
  MR_Word * TypeInfoVarMCA_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__polymorphism__get_type_info_from_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word TypeInfoLocn_9,
  MR_Word Context_10,
  MR_Word * Var_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_extract_type_info_8_p_0(
  MR_Word TypeVar_9,
  MR_Word TypeClassInfoVar_10,
  MR_Integer Index_11,
  MR_Word Context_12,
  MR_Word * Goals_13,
  MR_Word * TypeInfoVar_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__polymorphism__get_type_info_locn_4_p_0(
  MR_Word TypeVar_5,
  MR_Word * TypeInfoLocn_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_102_114_111_109_95_99_111_110_115_95_105_100_95_95_91_49_93_95_48_10_p_0(
  MR_Word ConsId_12,
  MR_Word * TypeCtorInfoVar_13,
  MR_Word * TypeCtorInfoGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_31,
  MR_Word * STATE_VARIABLE_RttiVarMaps_32);

static MR_bool MR_CALL 
check_hlds__polymorphism__all_are_const_struct_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism__get_poly_const_5_p_0(
  MR_Integer IntConst_6,
  MR_Word * IntVar_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__polymorphism__do_init_type_info_var_13_p_0(
  MR_Word Type_14,
  MR_Word Cell_15,
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word MaybePreferredVar_18,
  MR_Word * TypeInfoVar_19,
  MR_Word * TypeInfoGoal_20,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_VarTypes_0_42,
  MR_Word * STATE_VARIABLE_VarTypes_43,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_44,
  MR_Word * STATE_VARIABLE_RttiVarMaps_45);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * SafeToContinue_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0(
  MR_Word ModuleInfo0_7,
  MR_Word PredInfo0_8,
  MR_Word STATE_VARIABLE_ClausesInfo_0_33,
  MR_Word * STATE_VARIABLE_ClausesInfo_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word * ExtraArgModes_11);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_HeadVars_0_47,
  MR_Word * STATE_VARIABLE_HeadVars_48,
  MR_Word * ExtraArgModes_12,
  MR_Word * UnconstrainedTVars_13,
  MR_Word * ExtraHeadTypeInfoVars_14,
  MR_Word * ExistHeadTypeClassInfoVars_15,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(
  MR_Word PredInfo_12,
  MR_Word InstanceMethodConstraints_13,
  MR_Word STATE_VARIABLE_HeadVars_0_36,
  MR_Word * STATE_VARIABLE_HeadVars_37,
  MR_Word * UnconstrainedTVars_15,
  MR_Word * ExtraHeadTypeInfoVars_16,
  MR_Word * ExistHeadTypeClassInfoVars_17,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_38,
  MR_Word * STATE_VARIABLE_ExtraArgModes_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_71,
  MR_Word * STATE_VARIABLE_ExtraArgModes_72,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__polymorphism__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__new_type_info_var_5_p_0(
  MR_Word Type_6,
  MR_Word Kind_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word ExistConstraints_5,
  MR_Word * ActualExistConstraints_6);

static void MR_CALL 
check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_29,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____cache_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____cache_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_or_var_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____const_or_var_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_struct_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____const_struct_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_const_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____int_const_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_or_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____int_or_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____poly_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____poly_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[39][3];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[2][10];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[4][8];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[12][5];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[3][7];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[9][6];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[4][4];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_9[1][13];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_10[1][1];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_12[1][11];


/* sealed */ struct check_hlds__polymorphism__vector_common_type_11_0_s {
  const MR_Word check_hlds__polymorphism__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct check_hlds__polymorphism__vector_common_type_11_0_s check_hlds__polymorphism_vector_common_11[4];



static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 42))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not be used as a lambda expression."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so a curried call to it"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no declared determinism,"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[22])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[39][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[3])),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[3]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[8])),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[0]))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[12]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_3[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[2])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[2])),
    ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[5])),
    ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[5])),
    ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__produce_existq_tvars_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[2])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[7])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[7])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[9])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[10])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[10])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[11])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[3])),
    ((MR_Box) (check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[12][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[24])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[23])))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1])),
    ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_10[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "TypeInfoIndex"))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_12[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct check_hlds__polymorphism__vector_common_type_11_0_s check_hlds__polymorphism_vector_common_11[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.polymorphism.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#line 574 "polymorphism.m"
MR_Word check_hlds__polymorphism__mutable_variable_selected_pred;
#ifdef MR_THREAD_SAFE
    MercuryLock check_hlds__polymorphism__mutable_variable_selected_pred_lock;
#endif

#line 575 "polymorphism.m"
MR_Integer check_hlds__polymorphism__mutable_variable_level;
#ifdef MR_THREAD_SAFE
    MercuryLock check_hlds__polymorphism__mutable_variable_level_lock;
#endif


#line 574 "polymorphism.m"
void 
check_hlds__polymorphism__user_init_pred_0(void)
#line 574 "polymorphism.m"
{
#line 574 "polymorphism.m"
	check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0();
}

#line 575 "polymorphism.m"
void 
check_hlds__polymorphism__user_init_pred_1(void)
#line 575 "polymorphism.m"
{
#line 575 "polymorphism.m"
	check_hlds__polymorphism__initialise_mutable_level_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_cache_maps_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_cache_maps_0_0[5] = {
  (MR_String) "cm_snapshot_num",
  (MR_String) "cm_type_info_var_map",
  (MR_String) "cm_typeclass_info_map",
  (MR_String) "cm_int_const_map",
  (MR_String) "cm_const_struct_var_map"
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_cache_maps_0_0 = {
  (MR_String) "cache_maps",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_cache_maps_0_0,
  check_hlds__polymorphism__check_hlds__polymorphism__field_names_cache_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_cache_maps_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_cache_maps_0_0
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_cache_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_cache_maps_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_cache_maps_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_cache_maps_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_cache_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_cache_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____cache_maps_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____cache_maps_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "cache_maps",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_cache_maps_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_cache_maps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_cache_maps_0
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_0 = {
  (MR_String) "cova_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_1 = {
  (MR_String) "cova_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_const_or_var_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_0
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_1[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_1
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_const_or_var_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_const_or_var_arg_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_const_or_var_arg_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_const_or_var_arg_0_1
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_const_or_var_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____const_or_var_arg_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____const_or_var_arg_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "const_or_var_arg",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_const_or_var_arg_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_const_or_var_arg_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_const_or_var_arg_0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_struct_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism____Unify____const_struct_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____const_struct_var_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "const_struct_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_int_const_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism____Unify____int_const_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____int_const_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "int_const_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_0 = {
  (MR_String) "iov_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_1 = {
  (MR_String) "iov_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_int_or_var_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_0
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_1[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_1
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_int_or_var_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_int_or_var_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_int_or_var_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_int_or_var_0_1
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_int_or_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_int_or_var_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____int_or_var_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____int_or_var_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "int_or_var",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_int_or_var_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_int_or_var_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_int_or_var_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_poly_info_0_0[16] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_poly_info_0_0[16] = {
  (MR_String) "poly_module_info",
  (MR_String) "poly_varset",
  (MR_String) "poly_vartypes",
  (MR_String) "poly_rtti_varmaps",
  (MR_String) "poly_typevarset",
  (MR_String) "poly_tvar_kind_map",
  (MR_String) "poly_proof_map",
  (MR_String) "poly_constraint_map",
  (MR_String) "poly_type_info_var_map",
  (MR_String) "poly_typeclass_info_map",
  (MR_String) "poly_int_const_map",
  (MR_String) "poly_const_struct_var_map",
  (MR_String) "poly_num_reuses",
  (MR_String) "poly_snapshot_num",
  (MR_String) "poly_const_struct_db",
  (MR_String) "poly_errors"
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_poly_info_0_0 = {
  (MR_String) "poly_info",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_poly_info_0_0,
  check_hlds__polymorphism__check_hlds__polymorphism__field_names_poly_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_poly_info_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_poly_info_0_0
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_poly_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_poly_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_poly_info_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_poly_info_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_poly_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____poly_info_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____poly_info_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "poly_info",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_poly_info_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_poly_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_poly_info_0
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0 = {
  (MR_String) "do_record_type_info_locns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1 = {
  (MR_String) "do_not_record_type_info_locns",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "record_type_info_locns",
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_record_type_info_locns_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0 = {
  (MR_String) "base_typeclass_info_kind",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1 = {
  (MR_String) "typeclass_info_kind",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_tci_var_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "tci_var_kind",
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_tci_var_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_0 = {
  (MR_String) "type_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_1 = {
  (MR_String) "type_ctor_info",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_type_info_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_type_info_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_1,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_type_info_kind_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_type_info_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_type_info_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism____Unify____type_info_kind_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____type_info_kind_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "type_info_kind",
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_type_info_kind_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_value_ordered_type_info_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_type_info_kind_0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_type_info_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism____Unify____type_info_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____type_info_var_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "type_info_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism____Unify____typeclass_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____typeclass_info_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "typeclass_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism__list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0),
    (MR_TypeInfo) (&check_hlds__polymorphism__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_typeclass_info_map_entry_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_typeclass_info_map_entry_0_0 = {
  (MR_String) "typeclass_info_map_entry",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_typeclass_info_map_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_typeclass_info_map_entry_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_typeclass_info_map_entry_0_0
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_typeclass_info_map_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_typeclass_info_map_entry_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_typeclass_info_map_entry_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_typeclass_info_map_entry_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_typeclass_info_map_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "typeclass_info_map_entry",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_typeclass_info_map_entry_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_typeclass_info_map_entry_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_typeclass_info_map_entry_0
};

static const MR_PseudoTypeInfo check_hlds__polymorphism__check_hlds__polymorphism__field_types_var_maps_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_cache_maps_0)
};

static const MR_ConstString check_hlds__polymorphism__check_hlds__polymorphism__field_names_var_maps_0_0[5] = {
  (MR_String) "vm_snapshot_num",
  (MR_String) "vm_varset",
  (MR_String) "vm_vartypes",
  (MR_String) "vm_rtti_varmaps",
  (MR_String) "vm_cache_maps"
};

static const MR_DuFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_var_maps_0_0 = {
  (MR_String) "var_maps",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism__check_hlds__polymorphism__field_types_var_maps_0_0,
  check_hlds__polymorphism__check_hlds__polymorphism__field_names_var_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_var_maps_0_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_var_maps_0_0
};

static const MR_DuPtagLayout check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_var_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism__check_hlds__polymorphism__du_stag_ordered_var_maps_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_var_maps_0[1] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__du_functor_desc_var_maps_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_var_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_var_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism____Unify____var_maps_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____var_maps_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "var_maps",
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_name_ordered_var_maps_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__du_ptag_ordered_var_maps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_var_maps_0
};

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3890__1_4_p_0(
  MR_Word ExtraHeadVar_6,
  MR_Word LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word * LambdaHeadVar__3_45)
{
  {
    MR_Word TheTypeVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 0))));
    MR_Word Location_35;
    MR_Integer Index_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 1))));

    {
      Location_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Location_35, 0) = ((MR_Box) (ExtraHeadVar_6));
      MR_hl_field(MR_mktag(1), Location_35, 1) = ((MR_Box) (Index_48));
    }
    hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(TheTypeVar_34, Location_35, LambdaHeadVar__2_44, LambdaHeadVar__3_45);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Var_42 = ((MR_Word) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv0_Var_42));
    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVar_26 = ((MR_Word) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv1_TypeVar_26));
    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word TypeInfoLocn_27;

      (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__RttiVarMaps0_20, (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVar_26, &TypeInfoLocn_27);
      if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded)
      {
        MR_Word Var_28;

        (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) TypeInfoLocn_27)) == (MR_Integer) 0);
        if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded)
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_27, (MR_Integer) 0))));
      }
      else
        (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded = MR_TRUE;
      if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__LambdaHeadVar__1_41) = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVar_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Index_24));
        }
        ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Var_42, (MR_Integer) 0))));
    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Index_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Var_42, (MR_Integer) 1))));
    parse_tree__prog_type__type_vars_2_p_0((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__Type_23, &(env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVars_25);
    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeInfo_70_70 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]);
    mercury__list__member_2_p_1((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeInfo_70_70, &(env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv1_TypeVar_26, (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__TypeVars_25, check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0(
  MR_Word IndexedClassTypes_19,
  MR_Word RttiVarMaps0_20,
  MR_Word * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0_s env;

    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__RttiVarMaps0_20 = RttiVarMaps0_20;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__LambdaHeadVar__1_41 = LambdaHeadVar__1_41;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont = cont;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__list__member_2_p_1((MR_Word) (&check_hlds__polymorphism_scalar_common_2[6]), &(env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_env_0__conv0_Var_42, IndexedClassTypes_19, check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0_2, &env);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2939__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(BaseConsId1_84, BaseConsId_76);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2292__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68)
{
  {
    MR_Word VarInfo_46;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(CalleeRttiVarMaps_31, LambdaHeadVar__1_67, &VarInfo_46);
    switch (MR_tag((MR_Word) VarInfo_46)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "missing rtti_var_info for initialisation pred");
          return;
        }
        break;
      case (MR_Integer) 1:
        *LambdaHeadVar__2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_46, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "unsupported: constraints on initialisation preds");
          return;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1960__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  {
    MR_Word LambdaHeadVar__2_56;

    LambdaHeadVar__2_56 = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_57_54_48_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_56;
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_57_54_48_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_56;

    LambdaHeadVar__2_56 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    return LambdaHeadVar__2_56;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1944__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word LambdaHeadVar__1_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ((MR_Box) (LambdaHeadVar__1_47)), ExistQVars_10);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__setup_headvars_2__948__1_2_p_0(
  MR_Word LambdaHeadVar__1_90,
  MR_Word * LambdaHeadVar__2_91)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_91 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__1_90));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__568__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded = (SafeToContinue_6 == HeadVar__2_20);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__566__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), ((MR_Box) (Specs_7)), ((MR_Box) (HeadVar__2_16)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____var_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[10]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              check_hlds__polymorphism____Compare____cache_maps_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____var_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeCtorInfo_16_16;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_16_16 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = check_hlds__polymorphism____Unify____cache_maps_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[12]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism____Compare____type_info_kind_0_0(
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

MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0(
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
check_hlds__polymorphism____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0(
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
check_hlds__polymorphism____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism____Compare____poly_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[10]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[11]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[10]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[11]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              succeeded = (ArgX13_40 < ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX13_40 > ArgY13_41);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                succeeded = (ArgX14_43 < ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX14_43 > ArgY14_44);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;

                                  hlds__const_struct____Compare____const_struct_db_0_0(&SubResult15_48, ArgX15_46, ArgY15_47);
                                  succeeded = (SubResult15_48 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
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
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism____Unify____poly_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_38_38;
      MR_Word TypeCtorInfo_39_39;
      MR_Word TypeInfo_41_41;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_45_45;
      MR_Word TypeInfo_46_46;
      MR_Word TypeInfo_47_47;
      MR_Word TypeInfo_48_48;
      MR_Word TypeInfo_50_50;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_38_38 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_39_39 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_39_39, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_41_41 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_42_42 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[10]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_43_43 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[8]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_44_44 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_45_45 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_46_46 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_47_47 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_48_48 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX15_31, ArgY15_32);
                                  if (succeeded)
                                  {
                                    TypeInfo_50_50 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
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
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism____Compare____int_or_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_16 < ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_16 > ArgY1_5);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_or_var_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____int_const_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_const_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____const_struct_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_struct_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____const_or_var_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        hlds__const_struct____Compare____const_struct_arg_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_or_var_arg_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_10_10 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____cache_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____cache_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__unlock_level_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__unlock_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism__mutable_variable_level_lock,
                    "check_hlds__polymorphism__mutable_variable_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__lock_level_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__lock_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism__mutable_variable_level_lock,
                    "check_hlds__polymorphism__mutable_variable_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__unsafe_set_level_1_p_0(
  MR_Integer X_1)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__unsafe_set_level_1_p_0

	MR_Integer X;

	X = X_1 ;
		{
check_hlds__polymorphism__mutable_variable_level = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__pre_initialise_mutable_level_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__pre_initialise_mutable_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism__mutable_variable_level_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__initialise_mutable_level_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism__mutable_variable_level_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism__mutable_variable_level_lock,
                    "check_hlds__polymorphism__mutable_variable_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_level_0_p_0

	MR_Integer X;

	X = (MR_Integer) 0 ;
		{
check_hlds__polymorphism__mutable_variable_level = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism__mutable_variable_level_lock,
                    "check_hlds__polymorphism__mutable_variable_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__unlock_selected_pred_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__unlock_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism__mutable_variable_selected_pred_lock,
                    "check_hlds__polymorphism__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__lock_selected_pred_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__lock_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism__mutable_variable_selected_pred_lock,
                    "check_hlds__polymorphism__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__unsafe_set_selected_pred_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__unsafe_set_selected_pred_1_p_0

	MR_Word X;

	X = X_1 ;
		{
check_hlds__polymorphism__mutable_variable_selected_pred = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__pre_initialise_mutable_selected_pred_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__pre_initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism__mutable_variable_selected_pred_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism__mutable_variable_selected_pred_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism__mutable_variable_selected_pred_lock,
                    "check_hlds__polymorphism__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
check_hlds__polymorphism__mutable_variable_selected_pred = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism__mutable_variable_selected_pred_lock,
                    "check_hlds__polymorphism__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5)
{
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MCA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    if ((MCA_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_3));
      }
    else
    {
      MR_Word ConstArg_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MCA_4, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstArg_6));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_inst_of_const_struct_arg_3_p_0(
  MR_Word ConstStructDb_4,
  MR_Word ConstArg_5,
  MR_Word * Inst_6)
{
  if (((MR_tag((MR_Word) ConstArg_5)) == (MR_Integer) 0))
  {
    MR_Integer StructNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_5, (MR_Integer) 0))));
    MR_Word Struct_10;

    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_4, StructNum_9, &Struct_10);
    *Inst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Struct_10, (MR_Integer) 3))));
  }
  else
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_5, (MR_Integer) 0))));
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Inst_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_16));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__get_constrained_vars_1_f_0(
  MR_Word Constraint_3)
{
  {
    MR_Word CVars_4;
    MR_Word CTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));

    parse_tree__prog_type__type_vars_list_2_p_0(CTypes_6, &CVars_4);
    return CVars_4;
  }
}

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_body_5_p_0(
  MR_Word ClassProc_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_47,
  MR_Integer * STATE_VARIABLE_ProcNum_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50)
{
  {
    MR_bool succeeded;
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 1))));
    MR_Word PredTable0_11;
    MR_Word PredInfo0_12;
    MR_Word ProcTable0_13;
    MR_Box conv0_PredInfo0_12;
    MR_Word ProcInfo0_14;
    MR_Box conv1_ProcInfo0_14;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &PredTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_11, ((MR_Box) (PredId_9)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_13);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_13, ((MR_Box) (ProcId_10)), &conv1_ProcInfo0_14);
    if (succeeded)
    {
      ProcInfo0_14 = ((MR_Word) (conv1_ProcInfo0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ClassContext_15;
      MR_Word InstanceConstraint_19;
      MR_Word RttiVarMaps_20;
      MR_Word TypeClassInfoVar_21;
      MR_Word HeadVars0_22;
      MR_Word Modes0_23;
      MR_Word MaybeDetism0_24;
      MR_Word Detism_25;
      MR_Word HeadVars_29;
      MR_Word Modes_30;
      MR_Word ClassName_31;
      MR_Word InstanceArgs_32;
      MR_Integer InstanceArity_33;
      MR_Word PFSymNameArity_34;
      MR_Word BodyGoalExpr_35;
      MR_Word NonLocals_36;
      MR_Word InstmapDelta_37;
      MR_Word Purity_38;
      MR_Word Context_39;
      MR_Word GoalInfo_40;
      MR_Word BodyGoal_41;
      MR_Word ProcInfo_42;
      MR_Word ProcTable_43;
      MR_Word PredInfo1_44;
      MR_Word PredInfo_45;
      MR_Word PredTable_46;
      MR_Word STATE_VARIABLE_ModuleInfo_54_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Head_16;
      MR_Word Var_51;
      MR_Word HeadVarsPrime_27;
      MR_Word ModesPrime_28;
      MR_Integer N_26;

      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_12, &ClassContext_15);
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_15, (MR_Integer) 0))));
      succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Head_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0))));
        InstanceConstraint_19 = Head_16;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.expand_class_method_body\'/5", (MR_String) "class method is not constrained");
          return;
        }
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_14, &RttiVarMaps_20);
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_20, InstanceConstraint_19, &TypeClassInfoVar_21);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars0_22);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_14, &Modes0_23);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_14, &MaybeDetism0_24);
      if ((MaybeDetism0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Detism_25 = (MR_Integer) 3;
        hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_9, STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_54_54);
      }
      else
      {
        Detism_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism0_24, (MR_Integer) 0))));
        STATE_VARIABLE_ModuleInfo_54_54 = STATE_VARIABLE_ModuleInfo_0_49;
      }
      succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars0_22, ((MR_Box) (TypeClassInfoVar_21)), &N_26);
      if (succeeded)
      {
        succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(HeadVars0_22, N_26, &HeadVarsPrime_27);
        if (succeeded)
          succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(Modes0_23, N_26, &ModesPrime_28);
      }
      if (succeeded)
      {
        HeadVars_29 = HeadVarsPrime_27;
        Modes_30 = ModesPrime_28;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.expand_class_method_body\'/5", (MR_String) "typeclass_info var not found");
          return;
        }
      ClassName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceConstraint_19, (MR_Integer) 0))));
      InstanceArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceConstraint_19, (MR_Integer) 1))));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InstanceArgs_32, &InstanceArity_33);
      hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo0_12, &PFSymNameArity_34);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ClassName_31));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (InstanceArity_33));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (TypeClassInfoVar_21));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (STATE_VARIABLE_ProcNum_0_47));
        MR_hl_field(MR_mktag(1), Var_57, 2) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 3) = ((MR_Box) (PFSymNameArity_34));
      }
      {
        BodyGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 1) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 2) = ((MR_Box) (HeadVars_29));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 3) = ((MR_Box) (Modes_30));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 5) = (MR_Box) ((MR_Unsigned) (Detism_25));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_22, &NonLocals_36);
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(STATE_VARIABLE_ModuleInfo_54_54, HeadVars0_22, Modes0_23, &InstmapDelta_37);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_12, &Purity_38);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_12, &Context_39);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_36, InstmapDelta_37, Detism_25, Purity_38, Context_39, &GoalInfo_40);
      {
        BodyGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BodyGoal_41, 0) = ((MR_Box) (BodyGoalExpr_35));
        MR_hl_field(MR_mktag(0), BodyGoal_41, 1) = ((MR_Box) (GoalInfo_40));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(BodyGoal_41, ProcInfo0_14, &ProcInfo_42);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ((MR_Box) (ProcInfo_42)), ProcTable0_13, &ProcTable_43);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_43, PredInfo0_12, &PredInfo1_44);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo1_44);
      if (succeeded)
        hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), PredInfo1_44, &PredInfo_45);
      else
        PredInfo_45 = PredInfo1_44;
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_9)), ((MR_Box) (PredInfo_45)), PredTable0_11, &PredTable_46);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_46, STATE_VARIABLE_ModuleInfo_54_54, STATE_VARIABLE_ModuleInfo_50);
    }
    else
      *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
    *STATE_VARIABLE_ProcNum_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ProcNum_0_47 + (MR_Unsigned) 1);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_6,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_4;
    MR_Word Xs_5;
    MR_Integer Var_9;

    if (succeeded)
    {
      X_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Xs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_9 = (MR_Integer) 1;
      succeeded = (N_6 > Var_9);
      if (succeeded)
      {
        MR_Word ResultTail_8;
        MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(Xs_5, Var_10, &ResultTail_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = X_4;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ResultTail_8));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        *Result_7 = Xs_5;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_ProcNum_48;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_50;

    check_hlds__polymorphism__expand_class_method_body_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcNum_48, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_50);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcNum_48));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_50));
  }
}

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word Interface_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_4, (MR_Integer) 7))));
    MR_Box conv3_Var_7;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_9;

    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[38]), Interface_6, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv2_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_4, (MR_Integer) 0))));
    MR_Word Var_8;

    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, Var_8);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarMaps_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    MR_Word TypeInfoVar0_14;
    MR_Word TypeClassInfoVar_15;
    MR_Integer Index_16;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(OldRttiVarMaps_8, TVar_10, &Var_24);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        TypeInfoVar0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps_13, TVar_10, &Var_25);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
            Index_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word NewGoals_17;
      MR_Word TypeInfoVar1_18;
      MR_Word AssignGoal_19;
      MR_Word Var_28;

      check_hlds__polymorphism__polymorphism_extract_type_info_8_p_0(TVar_10, TypeClassInfoVar_15, Index_16, Context_9, &NewGoals_17, &TypeInfoVar1_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (TypeInfoVar0_14)), ((MR_Box) (TypeInfoVar1_18)));
      if (succeeded)
        AssignGoal_19 = hlds__make_goal__true_goal_0_f_0();
      else
      {
        MR_Word Context_51;
        MR_Word Var_52;

        mercury__term__context_init_1_p_0(&Context_51);
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (TypeInfoVar1_18));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(TypeInfoVar0_14, Var_52, Context_51, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_19);
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (AssignGoal_19));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_20));
      }
      *STATE_VARIABLE_ExtraGoals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NewGoals_17, Var_28);
    }
    else
    {
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      *STATE_VARIABLE_ExtraGoals_21 = STATE_VARIABLE_ExtraGoals_0_20;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_68;

    check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2292__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_68);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 4))));
    MR_Word VarTypes0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 2))));
    MR_Word ActualArgTypes0_26;
    MR_Word PredTVarSet_27;
    MR_Word PredArgTypes_29;
    MR_Word CalleeHeadVars_30;
    MR_Word CalleeRttiVarMaps_31;
    MR_Integer NCallArgs0_32;
    MR_Integer NPredArgs_33;
    MR_Integer NExtraArgs_34;
    MR_Word OrigPredArgTypes_37;
    MR_Word CalleeExtraHeadVars_38;
    MR_Word TVarSet_39;
    MR_Word PredToParentRenaming_40;
    MR_Word OrigParentArgTypes_41;
    MR_Word ParentToActualTSubst_42;
    MR_Word GetTypeInfoTypes_43;
    MR_Word PredTypeInfoTypes_48;
    MR_Word ParentTypeInfoTypes_49;
    MR_Word ActualTypeInfoTypes_50;
    MR_Word Ctxt_51;
    MR_Word ExtraArgsConstArgs_52;
    MR_Word ExtraGoals_53;
    MR_Word ExtraArgs_54;
    MR_Word CallArgs_55;
    MR_Word NonLocals0_56;
    MR_Word NonLocals1_57;
    MR_Word NonLocals_58;
    MR_Word GoalInfo_59;
    MR_Word CallGoalExpr_60;
    MR_Word CallGoal_61;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word _PredExistQVars_28;
    MR_Word OrigPredArgTypes0_35;
    MR_Word CalleeExtraHeadVars0_36;
    MR_Word TypeInfo_80_80;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Integer Var_138;
    MR_Integer Var_139;
    MR_Word Var_140;
    MR_Word Var_141;

    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_25, CallArgs0_17, &ActualArgTypes0_26);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(CalleePredInfo_13, &PredTVarSet_27, &_PredExistQVars_28, &PredArgTypes_29);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_14, &CalleeHeadVars_30);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CalleeProcInfo_14, &CalleeRttiVarMaps_31);
    NCallArgs0_32 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes0_26);
    NPredArgs_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_29);
    NExtraArgs_34 = (MR_Integer) ((MR_Unsigned) NPredArgs_33 - (MR_Unsigned) NCallArgs0_32);
    succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NExtraArgs_34, PredArgTypes_29, &OrigPredArgTypes0_35);
    if (succeeded)
    {
      TypeInfo_80_80 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
      succeeded = mercury__list__take_3_p_0(TypeInfo_80_80, NExtraArgs_34, CalleeHeadVars_30, &CalleeExtraHeadVars0_36);
    }
    if (succeeded)
    {
      OrigPredArgTypes_37 = OrigPredArgTypes0_35;
      CalleeExtraHeadVars_38 = CalleeExtraHeadVars0_36;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "extra args not found");
        return;
      }
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_24, PredTVarSet_27, &TVarSet_39, &PredToParentRenaming_40);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, OrigPredArgTypes_37, &OrigParentArgTypes_41);
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(OrigParentArgTypes_41, ActualArgTypes0_26, &ParentToActualTSubst_42);
    Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 0))));
    Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 1))));
    Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 2))));
    Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 3))));
    Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 5))));
    Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 6))));
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 7))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 8))));
    Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 9))));
    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 10))));
    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 11))));
    Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 12))));
    Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 13))));
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 14))));
    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 15))));
    {
      STATE_VARIABLE_Info_66_66 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 1) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 2) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 3) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 4) = ((MR_Box) (TVarSet_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 5) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 6) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 7) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 8) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 9) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 10) = ((MR_Box) (Var_136));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 11) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 12) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 13) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 14) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, 15) = ((MR_Box) (Var_141));
    }
    {
      GetTypeInfoTypes_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 3) = ((MR_Box) (CalleeRttiVarMaps_31));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), GetTypeInfoTypes_43, CalleeExtraHeadVars_38, &PredTypeInfoTypes_48);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, PredTypeInfoTypes_48, &ParentTypeInfoTypes_49);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ParentToActualTSubst_42, ParentTypeInfoTypes_49, &ActualTypeInfoTypes_50);
    Ctxt_51 = mercury__term__context_init_0_f_0();
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualTypeInfoTypes_50, Ctxt_51, &ExtraArgsConstArgs_52, &ExtraGoals_53, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_63);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraArgsConstArgs_52, &ExtraArgs_54);
    CallArgs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraArgs_54, CallArgs0_17);
    NonLocals0_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
    NonLocals1_57 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraArgs_54);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_56, NonLocals1_57, &NonLocals_58);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_58, GoalInfo0_21, &GoalInfo_59);
    {
      CallGoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 0) = ((MR_Box) (PredId_15));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 2) = ((MR_Box) (CallArgs_55));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_18));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 4) = ((MR_Box) (MaybeCallUnifyContext_19));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 5) = ((MR_Box) (SymName_20));
    }
    {
      CallGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallGoal_61, 0) = ((MR_Box) (CallGoalExpr_60));
      MR_hl_field(MR_mktag(0), CallGoal_61, 1) = ((MR_Box) (GoalInfo_59));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (CallGoal_61));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_53, Var_75);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_74, GoalInfo_59, Goal_22);
  }
}

static MR_String MR_CALL 
check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5)
{
  {
    MR_String TVarName_6;
    MR_String TVarName0_7;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_4, TVar_5, &TVarName0_7);
    TVarName_6 = mercury__string__f_43_43_2_f_0((MR_String) "_", TVarName0_7);
    return TVarName_6;
  }
}

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21)
{
  {
    MR_bool succeeded;
    MR_Word MaybeArgName_19;
    MR_String TypeVarName_16;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_12, TVar_13, &TypeVarName_16);
    if (succeeded)
    {
      MR_String OldCVarName_17;
      MR_String NewCVarName_18;
      MR_String Var_24;
      MR_String Var_25;
      MR_String Var_27;

      OldCVarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_16);
      Var_27 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_N_0_20);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_27);
      Var_24 = mercury__string__f_43_43_2_f_0(InOut_9, Var_25);
      NewCVarName_18 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", Var_24);
      succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, OldCVarName_17);
      if (!(succeeded))
        succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, NewCVarName_18);
      if (succeeded)
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (OldCVarName_17));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Mode_10));
        }
        {
          MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgName_19, 0) = ((MR_Box) (Var_28));
        }
      }
      else
        MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MaybeArgNameBox_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_19));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    *STATE_VARIABLE_N_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_20 + (MR_Unsigned) 1);
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_TVarName_6;

    conv0_TVarName_6 = check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TVarName_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10)
{
  {
    MR_bool succeeded;
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 1))));
    MR_String Name_13;
    MR_Word TypeVars_14;
    MR_Word TypeVarNames_15;
    MR_String ConstraintVarName_16;
    MR_Word MaybeArgName_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    Name_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(SymName_11, (MR_String) "__");
    parse_tree__prog_type__type_vars_list_2_p_0(Types_12, &TypeVars_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[7]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeVarSet_8));
    }
    TypeVarNames_15 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, TypeVars_14);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (TypeVarNames_15));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "TypeClassInfo_for_"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    mercury__string__append_list_2_p_0(Var_20, &ConstraintVarName_16);
    succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_7, ConstraintVarName_16);
    if (succeeded)
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (ConstraintVarName_16));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Mode_6));
      }
      {
        MaybeArgName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArgName_17, 0) = ((MR_Box) (Var_23));
      }
    }
    else
      MaybeArgName_17 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MaybeArgNameBox_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_17));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(STATE_VARIABLE_ProcInfo_0_9);
    if (succeeded)
    {
      MR_Word ArgModes1_6;
      MR_Word ExtraArgModesList_7;
      MR_Word ArgModes_8;

      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_9, &ArgModes1_6);
      ExtraArgModesList_7 = hlds__hlds_args__poly_arg_vector_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_4);
      ArgModes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModesList_7, ArgModes1_6);
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_8, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
    }
    else
      *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_11);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      *STATE_VARIABLE_Clause_25 = STATE_VARIABLE_Clause_0_24;
    }
    else
    {
      MR_Word Goal0_19;
      MR_Word Goal1_20;
      MR_Word Goal2_21;
      MR_Word ExistQVars_22;
      MR_Word Goal_23;
      MR_Word STATE_VARIABLE_Info_28_28;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Integer Var_76;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;

      Goal0_19 = hlds__hlds_clauses__clause_body_1_f_0(STATE_VARIABLE_Clause_0_24);
      check_hlds__polymorphism__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_28_28);
      Var_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 12))));
      succeeded = ((MR_Integer) 0 == Var_76);
      if (succeeded)
        STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_28_28;
      else
      {
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 0))));
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 1))));
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 2))));
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 3))));
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 4))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 5))));
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 6))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 7))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 8))));
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 9))));
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 10))));
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 11))));
        MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 13))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 14))));
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (Var_75));
        }
      }
      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_19, &Goal1_20, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
      check_hlds__polymorphism__produce_existq_tvars_9_p_0(PredInfo0_11, OldHeadVars_12, UnconstrainedTVars_14, ExtraTypeInfoHeadVars_15, ExistTypeClassInfoHeadVars_16, Goal1_20, &Goal2_21, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_32_32);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_11, &ExistQVars_22);
      check_hlds__polymorphism__fixup_quantification_6_p_0(NewHeadVars_13, ExistQVars_22, Goal2_21, &Goal_23, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 2))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Clause_25 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__fixup_quantification_6_p_0(
  MR_Word HeadVars_7,
  MR_Word ExistQVars_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded = (ExistQVars_8 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word RttiVarMaps0_12;
    MR_Integer NumReuses_13;

    if (succeeded)
    {
      RttiVarMaps0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
      succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_12);
      if (succeeded)
      {
        NumReuses_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
        succeeded = (NumReuses_13 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      *Goal_10 = Goal0_9;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word VarSet0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
      MR_Word VarTypes0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
      MR_Word OutsideVars_16;
      MR_Word VarSet_18;
      MR_Word VarTypes_19;
      MR_Word RttiVarMaps_20;
      MR_Word Var_24;
      MR_Word RttiVarMaps0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
      MR_Word Var_128;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Integer Var_140;
      MR_Integer Var_141;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Integer Var_156;
      MR_Integer Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word _Warnings_17;

      OutsideVars_16 = hlds__hlds_args__proc_arg_vector_to_set_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars_7);
      Var_24 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_16);
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, Var_24, &_Warnings_17, Goal0_9, Goal_10, VarSet0_14, &VarSet_18, VarTypes0_15, &VarTypes_19, RttiVarMaps0_26, &RttiVarMaps_20);
      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
      Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
      Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
      Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
      Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
      Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
      Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
      Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
      Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
      Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
      Var_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13))));
      Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
      Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
      Var_144 = Var_128;
      Var_145 = VarSet_18;
      Var_148 = Var_132;
      Var_149 = Var_133;
      Var_150 = Var_134;
      Var_151 = Var_135;
      Var_152 = Var_136;
      Var_153 = Var_137;
      Var_154 = Var_138;
      Var_155 = Var_139;
      Var_156 = Var_140;
      Var_157 = Var_141;
      Var_158 = Var_142;
      Var_159 = Var_143;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_159));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_108,
  MR_Word * STATE_VARIABLE_Info_109)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_57;
          MR_Word STATE_VARIABLE_Info_158_158;
          MR_Word STATE_VARIABLE_Info_159_159;
          MR_Word InitialSnapshot_192;
          MR_Word GoalExpr_233;

          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_192, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_158_158);
          check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_56, &SubGoal_57, STATE_VARIABLE_Info_158_158, &STATE_VARIABLE_Info_159_159);
          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_192, STATE_VARIABLE_Info_159_159, STATE_VARIABLE_Info_109);
          GoalExpr_233 = (MR_Word) ((MR_Word) (SubGoal_57));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_233));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word XVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word Y_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word UnifyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

          check_hlds__polymorphism__polymorphism_process_unify_9_p_0(XVar_39, Y_40, Mode_41, Unification_42, UnifyContext_43, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word ArgVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word GoalInfo_21;
          MR_Word ExtraVars_22;
          MR_Word ExtraGoals_23;
          MR_Word ArgVars_24;
          MR_Word CallExpr_25;
          MR_Word Call_26;
          MR_Word GoalList_27;
          MR_Word Var_185;
          MR_Word Var_223;
          MR_Integer Var_224;
          MR_Word Var_226;
          MR_Word Var_227;
          MR_Word Var_228;

          check_hlds__polymorphism__polymorphism_process_call_8_p_0(PredId_15, ArgVars0_17, GoalInfo0_9, &GoalInfo_21, &ExtraVars_22, &ExtraGoals_23, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
          ArgVars_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraVars_22, ArgVars0_17);
          Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0))));
          Var_224 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1))));
          Var_226 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
          Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4))));
          Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5))));
          {
            CallExpr_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CallExpr_25, 0) = ((MR_Box) (Var_223));
            MR_hl_field(MR_mktag(2), CallExpr_25, 1) = ((MR_Box) (Var_224));
            MR_hl_field(MR_mktag(2), CallExpr_25, 2) = ((MR_Box) (ArgVars_24));
            MR_hl_field(MR_mktag(2), CallExpr_25, 3) = (MR_Box) ((MR_Unsigned) (Var_226));
            MR_hl_field(MR_mktag(2), CallExpr_25, 4) = ((MR_Box) (Var_227));
            MR_hl_field(MR_mktag(2), CallExpr_25, 5) = ((MR_Box) (Var_228));
          }
          {
            Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Call_26, 0) = ((MR_Box) (CallExpr_25));
            MR_hl_field(MR_mktag(0), Call_26, 1) = ((MR_Box) (GoalInfo_21));
          }
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Call_26));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_23, Var_185);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_Info_109 = STATE_VARIABLE_Info_0_108;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_108, (MR_Integer) 0))));
              MR_Word PredInfo_35;
              MR_Word PredModule_36;
              MR_String PredName_37;
              MR_Integer PredArity_38;
              MR_Word PredId_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_34, PredId_187, &PredInfo_35);
              PredModule_36 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_35);
              PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_35);
              PredArity_38 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_35);
              succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_36, PredName_37, PredArity_38);
              if (succeeded)
              {
                *Goal_6 = Goal0_5;
                *STATE_VARIABLE_Info_109 = STATE_VARIABLE_Info_0_108;
              }
              else
                check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(PredInfo_35, GoalExpr0_8, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_46;
              MR_Word GoalExpr_48;

              switch (ConjType_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word InitialSnapshot_47;
                    MR_Word STATE_VARIABLE_Info_179_179;

                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_47, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_179_179);
                    check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(Goals0_45, &Goals_46, InitialSnapshot_47, STATE_VARIABLE_Info_179_179, STATE_VARIABLE_Info_109);
                  }
                  break;
                case (MR_Integer) 0:
                  check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(Goals0_45, &Goals_46, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                  break;
              }
              {
                GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) (ConjType_44));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 2) = ((MR_Box) (Goals_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_48));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_Info_174_174;
              MR_Word STATE_VARIABLE_Info_175_175;
              MR_Word Goals0_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_189;
              MR_Word InitialSnapshot_190;
              MR_Word GoalExpr_231;

              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_190, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_174_174);
              check_hlds__polymorphism__polymorphism_process_disj_5_p_0(Goals0_188, &Goals_189, InitialSnapshot_190, STATE_VARIABLE_Info_174_174, &STATE_VARIABLE_Info_175_175);
              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_190, STATE_VARIABLE_Info_175_175, STATE_VARIABLE_Info_109);
              {
                GoalExpr_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_231, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_231, 1) = ((MR_Box) (Goals_189));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_231));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_61;
              MR_Word STATE_VARIABLE_Info_153_153;
              MR_Word STATE_VARIABLE_Info_154_154;
              MR_Word InitialSnapshot_193;
              MR_Word GoalExpr_235;

              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_193, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_153_153);
              check_hlds__polymorphism__polymorphism_process_cases_5_p_0(Cases0_60, &Cases_61, InitialSnapshot_193, STATE_VARIABLE_Info_153_153, &STATE_VARIABLE_Info_154_154);
              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_193, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_109);
              {
                GoalExpr_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 2) = (MR_Box) ((MR_Unsigned) (CanFail_59));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 3) = ((MR_Box) (Cases_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_235));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word GoalExpr_234;

              switch (MR_tag((MR_Word) Reason0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Info_140_140;
                    MR_Word STATE_VARIABLE_Info_141_141;
                    MR_Word InitialSnapshot_200;
                    MR_Word SubGoal_201;

                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_200, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_140_140);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_201, STATE_VARIABLE_Info_140_140, &STATE_VARIABLE_Info_141_141);
                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_200, STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_201));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubGoal_199;

                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_199, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_199));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Info_146_146;
                    MR_Word STATE_VARIABLE_Info_147_147;
                    MR_Word InitialSnapshot_197;
                    MR_Word SubGoal_198;

                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_197, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_146_146);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_198, STATE_VARIABLE_Info_146_146, &STATE_VARIABLE_Info_147_147);
                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_197, STATE_VARIABLE_Info_147_147, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_198));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      {
                        MR_Word SubGoal_199;

                        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_199, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                        {
                          GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_199));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 1))));
                        MR_Word Kind_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (Kind_64) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word SubGoal_194;

                              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_194, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                              {
                                GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_194));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(TermVar_63, GoalInfo0_9, SubGoal0_207, &GoalExpr_234, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word STATE_VARIABLE_Info_135_135;
                        MR_Word STATE_VARIABLE_Info_136_136;
                        MR_Word InitialSnapshot_202;
                        MR_Word SubGoal_203;

                        check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_202, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_135_135);
                        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_203, STATE_VARIABLE_Info_135_135, &STATE_VARIABLE_Info_136_136);
                        check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_202, STATE_VARIABLE_Info_136_136, STATE_VARIABLE_Info_109);
                        {
                          GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_203));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_234));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_53;
              MR_Word Then_54;
              MR_Word Else_55;
              MR_Word STATE_VARIABLE_Info_163_163;
              MR_Word STATE_VARIABLE_Info_164_164;
              MR_Word STATE_VARIABLE_Info_166_166;
              MR_Word STATE_VARIABLE_Info_167_167;
              MR_Word STATE_VARIABLE_Info_169_169;
              MR_Word STATE_VARIABLE_Info_170_170;
              MR_Word InitialSnapshot_191;
              MR_Word GoalExpr_232;

              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_191, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_163_163);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Cond0_50, &Cond_53, STATE_VARIABLE_Info_163_163, &STATE_VARIABLE_Info_164_164);
              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_191, STATE_VARIABLE_Info_164_164, &STATE_VARIABLE_Info_166_166);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Then0_51, &Then_54, STATE_VARIABLE_Info_166_166, &STATE_VARIABLE_Info_167_167);
              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_191, STATE_VARIABLE_Info_167_167, &STATE_VARIABLE_Info_169_169);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Else0_52, &Else_55, STATE_VARIABLE_Info_169_169, &STATE_VARIABLE_Info_170_170);
              check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_191, STATE_VARIABLE_Info_170_170, STATE_VARIABLE_Info_109);
              {
                GoalExpr_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 1) = ((MR_Box) (Vars_49));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 2) = ((MR_Box) (Cond_53));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 3) = ((MR_Box) (Then_54));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 4) = ((MR_Box) (Else_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_232));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word ShortHand_94;
              MR_Word GoalExpr_219;

              switch (MR_tag((MR_Word) ShortHand0_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_goal\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 1))));
                    MR_Word Inner_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 2))));
                    MR_Word MainGoal0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 5))));
                    MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 6))));
                    MR_Word MainGoal_92;
                    MR_Word OrElseGoals_93;
                    MR_Word STATE_VARIABLE_Info_129_129;
                    MR_Word STATE_VARIABLE_Info_130_130;
                    MR_Word STATE_VARIABLE_Info_131_131;
                    MR_Word InitialSnapshot_209;
                    MR_Word Vars_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 3))));

                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_209, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_129_129);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(MainGoal0_89, &MainGoal_92, STATE_VARIABLE_Info_129_129, &STATE_VARIABLE_Info_130_130);
                    check_hlds__polymorphism__polymorphism_process_disj_5_p_0(OrElseGoals0_90, &OrElseGoals_93, InitialSnapshot_209, STATE_VARIABLE_Info_130_130, &STATE_VARIABLE_Info_131_131);
                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_209, STATE_VARIABLE_Info_131_131, STATE_VARIABLE_Info_109);
                    {
                      ShortHand_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 0) = (MR_Box) ((MR_Unsigned) (GoalType_86));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 1) = ((MR_Box) (Outer_87));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 2) = ((MR_Box) (Inner_88));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 3) = ((MR_Box) (Vars_210));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 4) = ((MR_Box) (MainGoal_92));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 5) = ((MR_Box) (OrElseGoals_93));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 6) = ((MR_Box) (OrElseInners_91));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 0))));
                    MR_Word ResultVar_96 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Info_113_113;
                    MR_Word STATE_VARIABLE_Info_120_120;
                    MR_Word InitialSnapshot_211;
                    MR_Word SubGoal0_212 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 2))));
                    MR_Word SubGoal_213;
                    MR_Word SubGoalInfo_98;
                    MR_Word ConjunctA0_100;
                    MR_Word ConjunctB0_101;
                    MR_Word SubGoalExpr0_97;
                    MR_Word Conjuncts0_99;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;

                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_211, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_113_113);
                    SubGoalExpr0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_212, (MR_Integer) 0))));
                    SubGoalInfo_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_212, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 1))) & (MR_Integer) 1);
                      Conjuncts0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 2))));
                      succeeded = (Var_114 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Conjuncts0_99 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConjunctA0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_99, (MR_Integer) 0))));
                          Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_99, (MR_Integer) 1))));
                          succeeded = (Var_115 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConjunctB0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 0))));
                            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 1))));
                            succeeded = (Var_116 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word ConjunctA_102;
                      MR_Word ConjunctB_103;
                      MR_Word Conjuncts_104;
                      MR_Word SubGoalExpr_105;
                      MR_Word STATE_VARIABLE_Info_117_117;
                      MR_Word STATE_VARIABLE_Info_118_118;
                      MR_Word STATE_VARIABLE_Info_119_119;
                      MR_Word Var_121;

                      check_hlds__polymorphism__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_117_117);
                      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(ConjunctA0_100, &ConjunctA_102, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                      check_hlds__polymorphism__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_118_118, &STATE_VARIABLE_Info_119_119);
                      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(ConjunctB0_101, &ConjunctB_103, STATE_VARIABLE_Info_119_119, &STATE_VARIABLE_Info_120_120);
                      {
                        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ConjunctB_103));
                        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Conjuncts_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Conjuncts_104, 0) = ((MR_Box) (ConjunctA_102));
                        MR_hl_field(MR_mktag(1), Conjuncts_104, 1) = ((MR_Box) (Var_121));
                      }
                      {
                        SubGoalExpr_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 2) = ((MR_Box) (Conjuncts_104));
                      }
                      {
                        SubGoal_213 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SubGoal_213, 0) = ((MR_Box) (SubGoalExpr_105));
                        MR_hl_field(MR_mktag(0), SubGoal_213, 1) = ((MR_Box) (SubGoalInfo_98));
                      }
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_goal\'/4", (MR_String) "malformed try goal");
                        return;
                      }
                    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_211, STATE_VARIABLE_Info_120_120, STATE_VARIABLE_Info_109);
                    {
                      ShortHand_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 0) = ((MR_Box) (MaybeIO_95));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 1) = ((MR_Box) (ResultVar_96));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 2) = ((MR_Box) (SubGoal_213));
                    }
                  }
                  break;
              }
              {
                GoalExpr_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_219, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_219, 1) = ((MR_Box) (ShortHand_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_219));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_InvariantsStatus_5 = STATE_VARIABLE_InvariantsStatus_0_4;
      *STATE_VARIABLE_ConstructOrderMarkedGoals_3 = STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0))));
      MR_Word GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1))));
      MR_Word XVar_33;
      MR_Word Mode_34;
      MR_Word Unification_35;
      MR_Word UnifyContext_36;
      MR_Word ConsId_37;
      MR_Word YVars_38;
      MR_Word Goal_39;
      MR_Word Changed_40;
      MR_Word MarkedGoal_47;
      MR_Word STATE_VARIABLE_Info_56_56;
      MR_Word STATE_VARIABLE_InvariantsStatus_57_57;
      MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_67_67;
      MR_Word XVarPrime_25;
      MR_Word ModePrime_27;
      MR_Word UnificationPrime_28;
      MR_Word UnifyContextPrime_29;
      MR_Word ConsIdPrime_30;
      MR_Word YVarsPrime_32;
      MR_Word Y_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        XVarPrime_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 0))));
        Y_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 1))));
        ModePrime_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 2))));
        UnificationPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 3))));
        UnifyContextPrime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Y_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_26, (MR_Integer) 0))));
          YVarsPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_26, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        XVar_33 = XVarPrime_25;
        Mode_34 = ModePrime_27;
        Unification_35 = UnificationPrime_28;
        UnifyContext_36 = UnifyContextPrime_29;
        ConsId_37 = ConsIdPrime_30;
        YVars_38 = YVarsPrime_32;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_fgti_goals\'/7", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(XVar_33, ConsId_37, YVars_38, Mode_34, Unification_35, UnifyContext_36, GoalInfo0_24, &Goal_39, &Changed_40, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_56_56);
      switch (Changed_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 0) = ((MR_Box) (Goal0_17));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 1) = ((MR_Box) (XVar_33));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 2) = ((MR_Box) (YVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_57_57 = STATE_VARIABLE_InvariantsStatus_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 0) = ((MR_Box) (Goal_39));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 1) = ((MR_Box) (XVar_33));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 2) = ((MR_Box) (YVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_57_57 = (MR_Integer) 1;
          }
          break;
      }
      {
        STATE_VARIABLE_ConstructOrderMarkedGoals_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConstructOrderMarkedGoals_67_67, 0) = ((MR_Box) (MarkedGoal_47));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConstructOrderMarkedGoals_67_67, 1) = ((MR_Box) (STATE_VARIABLE_ConstructOrderMarkedGoals_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_18;
      next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = STATE_VARIABLE_ConstructOrderMarkedGoals_67_67;
      next_value_of_STATE_VARIABLE_InvariantsStatus_0_4 = STATE_VARIABLE_InvariantsStatus_57_57;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      STATE_VARIABLE_InvariantsStatus_0_4 = next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word STATE_VARIABLE_Info_24_24;

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_23_23);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_24_24);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__polymorphism__polymorphism_process_cases_5_p_0(Cases0_11, &Cases_13, InitialSnapshot_3, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_20_20;

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_19_19, &STATE_VARIABLE_Info_20_20);
    check_hlds__polymorphism__polymorphism_process_disj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_20_20;

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_19_19, &STATE_VARIABLE_Info_20_20);
    check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_15_15;

    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
    check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 0))));
    MR_Word VarTypes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 2))));
    MR_Word TypeOfX_24;
    MR_Integer Arity_25;
    MR_Word PredId_28;
    MR_Integer ProcId0_29;
    MR_Word Purity_30;
    MR_Word CalleeArgTypes_33;
    MR_Word ShroudedPredProcId_26;
    MR_Word Var_69;
    MR_Word _PredOrFunc_31;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_23, X0_12, &TypeOfX_24);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgVars0_14, &Arity_25);
    succeeded = ((((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      ShroudedPredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 1))));
      Var_69 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
      PredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
      ProcId0_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1))));
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_24, &Purity_30, &_PredOrFunc_31, &CalleeArgTypes_33);
    }
    if (succeeded)
    {
      MR_Integer ProcId_36;
      MR_Word GoalInfo1_38;
      MR_Word VarSet0_39;
      MR_Word Context_40;
      MR_Word MaybeRHS0_41;
      MR_Word VarSet_42;
      MR_Word VarTypes_43;
      MR_Word STATE_VARIABLE_Info_73_73;
      MR_Word Var_163;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Integer Var_175;
      MR_Integer Var_176;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Integer Var_99;

      Var_99 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      succeeded = (ProcId0_29 == Var_99);
      if (succeeded)
      {
        MR_Word PredInfo_34;
        MR_Word ProcIds_35;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_22, PredId_28, &PredInfo_34);
        ProcIds_35 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_34);
        if ((ProcIds_35 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_unify_functor\'/11", (MR_String) "no modes");
            return;
          }
        else
        {
          ProcId_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_35, (MR_Integer) 0))));
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 23, GoalInfo0_18, &GoalInfo1_38);
        }
      }
      else
      {
        ProcId_36 = ProcId0_29;
        GoalInfo1_38 = GoalInfo0_18;
      }
      VarSet0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 1))));
      Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
      check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(Purity_30, X0_12, PredId_28, ProcId_36, ArgVars0_14, CalleeArgTypes_33, UnifyContext_17, GoalInfo1_38, Context_40, ModuleInfo0_22, &MaybeRHS0_41, VarSet0_39, &VarSet_42, VarTypes0_23, &VarTypes_43);
      Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 0))));
      Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 3))));
      Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 4))));
      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 5))));
      Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 6))));
      Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 7))));
      Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 8))));
      Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 9))));
      Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 10))));
      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 11))));
      Var_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 12))));
      Var_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 13))));
      Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 14))));
      Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_67, (MR_Integer) 15))));
      {
        STATE_VARIABLE_Info_73_73 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 0) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 1) = ((MR_Box) (VarSet_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 2) = ((MR_Box) (VarTypes_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 3) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 4) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 5) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 6) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 7) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 8) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 9) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 10) = ((MR_Box) (Var_173));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 11) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 12) = ((MR_Box) (Var_175));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 13) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 14) = ((MR_Box) (Var_177));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, 15) = ((MR_Box) (Var_178));
      }
      if (((MR_tag((MR_Word) MaybeRHS0_41)) == (MR_Integer) 0))
      {
        MR_Word Specs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRHS0_41, (MR_Integer) 0))));
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_Info_75_75;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Integer Var_230;
        MR_Integer Var_231;
        MR_Word Var_232;

        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_45, Var_178);
        Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 0))));
        Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
        Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
        Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
        Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 4))));
        Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 5))));
        Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 6))));
        Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 7))));
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 8))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 9))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 10))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 11))));
        Var_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 12))));
        Var_231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 13))));
        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 14))));
        {
          STATE_VARIABLE_Info_75_75 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 0) = ((MR_Box) (Var_218));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 1) = ((MR_Box) (Var_219));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 2) = ((MR_Box) (Var_220));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 3) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 4) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 5) = ((MR_Box) (Var_223));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 6) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 7) = ((MR_Box) (Var_225));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 8) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 9) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 10) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 11) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 12) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 13) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 14) = ((MR_Box) (Var_232));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 15) = ((MR_Box) (Var_74));
        }
        check_hlds__polymorphism__polymorphism_process_unify_9_p_0(X0_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_2[13])), Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_38, Goal_19, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_68);
      }
      else
      {
        MR_Word RHS0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRHS0_41, (MR_Integer) 0))));

        check_hlds__polymorphism__polymorphism_process_unify_9_p_0(X0_12, RHS0_44, Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_38, Goal_19, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_68);
      }
      *Changed_20 = (MR_Integer) 1;
    }
    else
    {
      MR_Word ConsId_51;
      MR_Word IsExistConstr_52;
      MR_Word ConsDefn_53;
      MR_Word Functor0_48;
      MR_Word ConsTypeCtor_49;
      MR_Integer Var_100;
      MR_Word OrigFunctor_50;

      succeeded = ((((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Functor0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 1))));
        Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 2))));
        ConsTypeCtor_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 3))));
        succeeded = (Arity_25 == Var_100);
        if (succeeded)
        {
          succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Functor0_48, &OrigFunctor_50);
          if (succeeded)
          {
            {
              ConsId_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ConsId_51, 1) = ((MR_Box) (OrigFunctor_50));
              MR_hl_field(MR_mktag(3), ConsId_51, 2) = ((MR_Box) (Arity_25));
              MR_hl_field(MR_mktag(3), ConsId_51, 3) = ((MR_Box) (ConsTypeCtor_49));
            }
            IsExistConstr_52 = (MR_Integer) 1;
          }
          else
          {
            ConsId_51 = ConsId0_13;
            IsExistConstr_52 = (MR_Integer) 0;
          }
          succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo0_22, TypeOfX_24, ConsId_51, &ConsDefn_53);
        }
      }
      if (succeeded)
      {
        MR_Word ActualArgTypes_54;
        MR_Word ExtraVars_55;
        MR_Word ExtraGoals_56;
        MR_Word ArgVars_57;
        MR_Word NonLocals0_58;
        MR_Word NonLocals_59;
        MR_Word Unification_60;
        MR_Word GoalInfo_61;
        MR_Word UnifyExpr_63;
        MR_Word Unify_64;
        MR_Word GoalList_65;
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word GoalInfo1_89;
        MR_Word _Changed_62;

        hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_23, ArgVars0_14, &ActualArgTypes_54);
        check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(ConsDefn_53, IsExistConstr_52, ActualArgTypes_54, TypeOfX_24, GoalInfo0_18, &ExtraVars_55, &ExtraGoals_56, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_82_82);
        ArgVars_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraVars_55, ArgVars0_14);
        NonLocals0_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_55, NonLocals0_58, &NonLocals_59);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_59, GoalInfo0_18, &GoalInfo1_89);
        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_60, GoalInfo1_89, &GoalInfo_61, &_Changed_62, STATE_VARIABLE_Info_82_82, STATE_VARIABLE_Info_68);
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (ConsId_51));
          MR_hl_field(MR_mktag(1), Var_84, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_52));
          MR_hl_field(MR_mktag(1), Var_84, 2) = ((MR_Box) (ArgVars_57));
        }
        {
          UnifyExpr_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 1) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 2) = ((MR_Box) (Mode0_15));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 3) = ((MR_Box) (Unification_60));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 4) = ((MR_Box) (UnifyContext_17));
        }
        {
          Unify_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unify_64, 0) = ((MR_Box) (UnifyExpr_63));
          MR_hl_field(MR_mktag(0), Unify_64, 1) = ((MR_Box) (GoalInfo_61));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Unify_64));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        GoalList_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_56, Var_85);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_65, GoalInfo0_18, Goal_19);
        *Changed_20 = (MR_Integer) 1;
      }
      else
      {
        MR_Word GoalExpr_66;
        MR_Word RHS_90;
        MR_Word Unification_91;
        MR_Word GoalInfo_92;

        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_91, GoalInfo0_18, &GoalInfo_92, Changed_20, STATE_VARIABLE_Info_0_67, STATE_VARIABLE_Info_68);
        {
          RHS_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RHS_90, 0) = ((MR_Box) (ConsId0_13));
          MR_hl_field(MR_mktag(1), RHS_90, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), RHS_90, 2) = ((MR_Box) (ArgVars0_14));
        }
        {
          GoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 1) = ((MR_Box) (RHS_90));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 2) = ((MR_Box) (Mode0_15));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 3) = ((MR_Box) (Unification_91));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 4) = ((MR_Box) (UnifyContext_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_66));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_92));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_9_p_0(
  MR_Word XVar_10,
  MR_Word Y_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  switch (MR_tag((MR_Word) Y_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_46, (MR_Integer) 2))));
        MR_Word Type_20;
        MR_Word Unification_21;
        MR_Word GoalInfo_22;
        MR_Word Var_58;
        MR_Word _Changed_23;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, XVar_10, &Type_20);
        check_hlds__polymorphism__unification_typeinfos_8_p_0(Type_20, Unification0_13, &Unification_21, GoalInfo0_15, &GoalInfo_22, &_Changed_23, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (XVar_10));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Y_11));
          MR_hl_field(MR_mktag(1), Var_58, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(MR_mktag(1), Var_58, 3) = ((MR_Box) (Unification_21));
          MR_hl_field(MR_mktag(1), Var_58, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_22));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_11, (MR_Integer) 0))));
        MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_11, (MR_Integer) 2))));
        MR_Word _Changed_59;

        check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(XVar_10, ConsId_24, Args_26, Mode_12, Unification0_13, UnifyContext_14, GoalInfo0_15, Goal_16, &_Changed_59, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVars0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 2))));
        MR_Word LambdaVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 3))));
        MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 4))));
        MR_Word Det_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 5))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 6))));
        MR_Word InitialSnapshot_36;
        MR_Word LambdaGoal1_37;
        MR_Word LambdaGoal_39;
        MR_Word NonLocalTypeInfos_40;
        MR_Word NonLocalTypeInfosList_41;
        MR_Word ArgVars_42;
        MR_Word Y1_43;
        MR_Word NonLocals0_44;
        MR_Word NonLocals_45;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Info_51_51;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word Var_55;
        MR_Word GoalInfo_61;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 0)));

        check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialSnapshot_36, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_49_49);
        check_hlds__polymorphism__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(LambdaGoal0_35, &LambdaGoal1_37, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
        check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialSnapshot_36, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
        check_hlds__polymorphism__fixup_lambda_quantification_8_p_0(ArgVars0_31, LambdaVars_32, (MR_Word) ((MR_Unsigned) 0U), LambdaGoal1_37, &LambdaGoal_39, &NonLocalTypeInfos_40, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_47);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeInfos_40, &NonLocalTypeInfosList_41);
        ArgVars_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), NonLocalTypeInfosList_41, ArgVars0_31);
        {
          Y1_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Y1_43, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), Y1_43, 1) = NULL;
          MR_hl_field(MR_mktag(2), Y1_43, 2) = ((MR_Box) (ArgVars_42));
          MR_hl_field(MR_mktag(2), Y1_43, 3) = ((MR_Box) (LambdaVars_32));
          MR_hl_field(MR_mktag(2), Y1_43, 4) = ((MR_Box) (Modes_33));
          MR_hl_field(MR_mktag(2), Y1_43, 5) = (MR_Box) ((MR_Unsigned) (Det_34));
          MR_hl_field(MR_mktag(2), Y1_43, 6) = ((MR_Box) (LambdaGoal_39));
        }
        NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_44, NonLocalTypeInfos_40, &NonLocals_45);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_15, &GoalInfo_61);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (XVar_10));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Y1_43));
          MR_hl_field(MR_mktag(1), Var_55, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(MR_mktag(1), Var_55, 3) = ((MR_Box) (Unification0_13));
          MR_hl_field(MR_mktag(1), Var_55, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_61));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word SubGoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_9, (MR_Integer) 0))));
    MR_Word SubGoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_9, (MR_Integer) 1))));
    MR_Word SubGoals0_15;
    MR_Word ConstructOrderMarkedSubGoals_16;
    MR_Word InvariantsStatus_17;
    MR_Word SubGoals0Prime_14;
    MR_Word Var_23;

    succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoals0Prime_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 2))));
      succeeded = (Var_23 == (MR_Integer) 0);
    }
    if (succeeded)
      SubGoals0_15 = SubGoals0Prime_14;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_from_ground_term_initial\'/6", (MR_String) "from_ground_term_initial goal is not plain conj");
        return;
      }
    check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(SubGoals0_15, (MR_Word) ((MR_Unsigned) 0U), &ConstructOrderMarkedSubGoals_16, (MR_Integer) 0, &InvariantsStatus_17, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    switch (InvariantsStatus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word SubGoal_19;

          hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(GoalInfo0_8, SubGoalInfo0_13, ConstructOrderMarkedSubGoals_16, (MR_Integer) 1, &SubGoal_19);
          *GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_19, (MR_Integer) 0))));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Reason_18;

          {
            Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (TermVar_7));
            MR_hl_field(MR_mktag(3), Reason_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal0_9));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1(
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

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
    MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
    MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
    MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
    MR_Word ProcExtraArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5))));
    MR_Word MaybeTraceRuntimeCond_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 6))));
    MR_Word Impl_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 7))));
    MR_Word ArgVars0_19;
    MR_Word GoalInfo_20;
    MR_Word ExtraVars_21;
    MR_Word ExtraGoals_22;
    MR_Word ExtraArgs_23;
    MR_Word Args_24;
    MR_Word CallExpr_25;
    MR_Word Call_26;
    MR_Word GoalList_27;
    MR_Word Var_32;

    ArgVars0_19 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[37]), Args0_15);
    check_hlds__polymorphism__polymorphism_process_call_8_p_0(PredId_13, ArgVars0_19, GoalInfo0_9, &GoalInfo_20, &ExtraVars_21, &ExtraGoals_22, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(PredInfo_7, Impl_18, ExtraVars_21, &ExtraArgs_23);
    Args_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ExtraArgs_23, Args0_15);
    {
      CallExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), CallExpr_25, 1) = ((MR_Box) (Attributes_12));
      MR_hl_field(MR_mktag(3), CallExpr_25, 2) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(3), CallExpr_25, 3) = ((MR_Box) (ProcId_14));
      MR_hl_field(MR_mktag(3), CallExpr_25, 4) = ((MR_Box) (Args_24));
      MR_hl_field(MR_mktag(3), CallExpr_25, 5) = ((MR_Box) (ProcExtraArgs_16));
      MR_hl_field(MR_mktag(3), CallExpr_25, 6) = ((MR_Box) (MaybeTraceRuntimeCond_17));
      MR_hl_field(MR_mktag(3), CallExpr_25, 7) = ((MR_Box) (Impl_18));
    }
    {
      Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Call_26, 0) = ((MR_Box) (CallExpr_25));
      MR_hl_field(MR_mktag(0), Call_26, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Call_26));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_22, Var_32);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_10);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 2))));
    MR_Word TypeVarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 4))));
    MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 0))));
    MR_Word PredInfo_19;
    MR_Word PredTypeVarSet_20;
    MR_Word PredExistQVars_21;
    MR_Word PredArgTypes_22;
    MR_Word PredKindMap_23;
    MR_Word PredClassContext_24;
    MR_Word PredToParentTypeRenaming_25;
    MR_Word TypeVarSet_26;
    MR_Word ParentArgTypes_27;
    MR_Word ParentKindMap_28;
    MR_Word ParentTVars_29;
    MR_Word ParentExistQVars_30;
    MR_Word PredModule_31;
    MR_String PredName_32;
    MR_Integer PredArity_33;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, PredId_9, &PredInfo_19);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_19, &PredTypeVarSet_20, &PredExistQVars_21, &PredArgTypes_22);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_19, &PredKindMap_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_19, &PredClassContext_24);
    succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_20);
    if (succeeded)
    {
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), &PredToParentTypeRenaming_25);
      TypeVarSet_26 = TypeVarSet0_17;
      ParentArgTypes_27 = PredArgTypes_22;
      ParentKindMap_28 = PredKindMap_23;
      ParentTVars_29 = (MR_Word) ((MR_Unsigned) 0U);
      ParentExistQVars_30 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_17, PredTypeVarSet_20, &TypeVarSet_26, &PredToParentTypeRenaming_25);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentTypeRenaming_25, PredArgTypes_22, &ParentArgTypes_27);
      parse_tree__prog_type__type_vars_list_2_p_0(ParentArgTypes_27, &ParentTVars_29);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(PredToParentTypeRenaming_25, PredKindMap_23, &ParentKindMap_28);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(PredToParentTypeRenaming_25, PredExistQVars_21, &ParentExistQVars_30);
    }
    PredModule_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
    PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
    PredArity_33 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_19);
    {
      MR_Word Var_73;
      MR_Word Var_74;

      succeeded = (ParentTVars_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 0))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 1))));
        succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_31, PredName_32, PredArity_33);
    if (succeeded)
    {
      *GoalInfo_12 = GoalInfo0_11;
      *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraVars_13 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
    }
    else
    {
      MR_Word ParentClassContext_34;
      MR_Word ParentUnivConstraints_35;
      MR_Word ParentExistConstraints_36;
      MR_Word ParentUnivConstrainedTVars_37;
      MR_Word ParentExistConstrainedTVars_38;
      MR_Word ParentUnconstrainedTVars0_39;
      MR_Word ParentUnconstrainedTVars1_40;
      MR_Word ParentUnconstrainedTVars_41;
      MR_Word ParentUnconstrainedUnivTVars_42;
      MR_Word ParentUnconstrainedExistTVars_43;
      MR_Word ActualArgTypes_44;
      MR_Word ParentToActualTypeSubst_45;
      MR_Word ConstraintMap_46;
      MR_Word GoalId_47;
      MR_Integer NumUnivConstraints_48;
      MR_Word ActualUnivConstraints_49;
      MR_Word ActualExistQVarTypes_50;
      MR_Word Context_53;
      MR_Word ExtraUnivClassVarsMCAs_54;
      MR_Word ExtraUnivClassGoals_55;
      MR_Word ExtraUnivClassVars_56;
      MR_Integer NumExistConstraints_57;
      MR_Word ActualExistConstraints_58;
      MR_Word ExtraExistClassVars_59;
      MR_Word ExtraExistClassGoals_60;
      MR_Word ActualUnconstrainedUnivTypes_61;
      MR_Word ExtraUnivTypeInfoVarsMCAs_62;
      MR_Word ExtraUnivTypeInfoGoals_63;
      MR_Word ExtraUnivTypeInfoVars_64;
      MR_Word ActualUnconstrainedExistTypes_65;
      MR_Word ExtraExistTypeInfoVarsMCAs_66;
      MR_Word ExtraExistTypeInfoGoals_67;
      MR_Word ExtraExistTypeInfoVars_68;
      MR_Word NonLocals0_69;
      MR_Word NonLocals_70;
      MR_Word STATE_VARIABLE_Info_75_75;
      MR_Word STATE_VARIABLE_Info_79_79;
      MR_Word STATE_VARIABLE_Info_81_81;
      MR_Word STATE_VARIABLE_Info_82_82;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 0))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 2))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 3))));
      MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 5))));
      MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 6))));
      MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 7))));
      MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 8))));
      MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 9))));
      MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 10))));
      MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 11))));
      MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 12))));
      MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 13))));
      MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 14))));
      MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_71, (MR_Integer) 15))));
      MR_Word ActualExistQVars0_51;

      {
        STATE_VARIABLE_Info_75_75 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 0) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 1) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 2) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 3) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 4) = ((MR_Box) (TypeVarSet_26));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 5) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 6) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 7) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 8) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 9) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 10) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 11) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 12) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 13) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 14) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, 15) = ((MR_Box) (Var_170));
      }
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(PredToParentTypeRenaming_25, PredClassContext_24, &ParentClassContext_34);
      ParentUnivConstraints_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentClassContext_34, (MR_Integer) 0))));
      ParentExistConstraints_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentClassContext_34, (MR_Integer) 1))));
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentUnivConstraints_35, &ParentUnivConstrainedTVars_37);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentExistConstraints_36, &ParentExistConstrainedTVars_38);
      mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentTVars_29, &ParentUnconstrainedTVars0_39);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars0_39, ParentUnivConstrainedTVars_37, &ParentUnconstrainedTVars1_40);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars1_40, ParentExistConstrainedTVars_38, &ParentUnconstrainedTVars_41);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars_41, ParentExistQVars_30, &ParentUnconstrainedUnivTVars_42);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars_41, ParentUnconstrainedUnivTVars_42, &ParentUnconstrainedExistTVars_43);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_16, ArgVars0_10, &ActualArgTypes_44);
      parse_tree__prog_type__type_list_subsumes_det_3_p_0(ParentArgTypes_27, ActualArgTypes_44, &ParentToActualTypeSubst_45);
      ConstraintMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_75_75, (MR_Integer) 7))));
      GoalId_47 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_11);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentUnivConstraints_35, &NumUnivConstraints_48);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 0, GoalId_47, NumUnivConstraints_48, &ActualUnivConstraints_49);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentExistQVars_30, &ActualExistQVarTypes_50);
      succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ActualExistQVarTypes_50, &ActualExistQVars0_51);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_call\'/8", (MR_String) "existq_tvar bound");
          return;
        }
      Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(ActualUnivConstraints_49, Context_53, &ExtraUnivClassVarsMCAs_54, &ExtraUnivClassGoals_55, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_79_79);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraUnivClassVarsMCAs_54, &ExtraUnivClassVars_56);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistConstraints_36, &NumExistConstraints_57);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 1, GoalId_47, NumExistConstraints_57, &ActualExistConstraints_58);
      check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(ActualExistConstraints_58, Context_53, &ExtraExistClassVars_59, &ExtraExistClassGoals_60, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_81_81);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedUnivTVars_42, &ActualUnconstrainedUnivTypes_61);
      check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedUnivTypes_61, Context_53, &ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoGoals_63, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoVars_64);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedExistTVars_43, &ActualUnconstrainedExistTypes_65);
      check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedExistTypes_65, Context_53, &ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoGoals_67, STATE_VARIABLE_Info_82_82, STATE_VARIABLE_Info_72);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoVars_68);
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivTypeInfoGoals_63, ExtraExistTypeInfoGoals_67);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraExistClassGoals_60, Var_85);
      *ExtraGoals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivClassGoals_55, Var_84);
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraUnivClassVars_56, ExtraExistClassVars_59);
      Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraExistTypeInfoVars_68, Var_87);
      *ExtraVars_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraUnivTypeInfoVars_64, Var_86);
      NonLocals0_69 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_11);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ExtraVars_13, NonLocals0_69, &NonLocals_70);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_70, GoalInfo0_11, GoalInfo_12);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_DictionaryType_4;

    check_hlds__polymorphism__build_typeclass_info_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv12_DictionaryType_4);
    *wrapper_arg_2 = ((MR_Box) (conv12_DictionaryType_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_DictionaryType_4;

    check_hlds__polymorphism__build_typeclass_info_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_DictionaryType_4);
    *wrapper_arg_2 = ((MR_Box) (conv11_DictionaryType_4));
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_LambdaHeadVar__2_56;

    conv10_LambdaHeadVar__2_56 = check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1960__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_56));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_MaybeArgNameBox_14;
    MR_Integer conv7_STATE_VARIABLE_N_21;

    check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv8_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv7_STATE_VARIABLE_N_21);
    *wrapper_arg_2 = ((MR_Box) (conv8_MaybeArgNameBox_14));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_N_21));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeArgNameBox_14;
    MR_Integer conv4_STATE_VARIABLE_N_21;

    check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv5_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv4_STATE_VARIABLE_N_21);
    *wrapper_arg_2 = ((MR_Box) (conv5_MaybeArgNameBox_14));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_N_21));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1944__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeArgNameBox_10;

    check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_MaybeArgNameBox_10);
    *wrapper_arg_2 = ((MR_Box) (conv3_MaybeArgNameBox_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeArgNameBox_10;

    check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_MaybeArgNameBox_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_MaybeArgNameBox_10));
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_CVars_4;

    conv1_CVars_4 = check_hlds__polymorphism__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_CVars_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_CVars_4;

    conv0_CVars_4 = check_hlds__polymorphism__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_CVars_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Impl_6,
  MR_Word Vars_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded;
    MR_Word PredTypeVarSet_9;
    MR_Word ExistQVars_10;
    MR_Word PredArgTypes_11;
    MR_Word UnivCs_12;
    MR_Word ExistCs_13;
    MR_Word UnivVars0_14;
    MR_Word UnivConstrainedVars_15;
    MR_Word ExistVars0_16;
    MR_Word ExistConstrainedVars_17;
    MR_Word PredTypeVars0_18;
    MR_Word PredTypeVars1_19;
    MR_Word PredTypeVars2_20;
    MR_Word PredTypeVars_21;
    MR_Word In_22;
    MR_Word Out_23;
    MR_Word ExistTypeClassArgInfos_24;
    MR_Word UnivTypeClassArgInfos_25;
    MR_Word TypeClassArgInfos_26;
    MR_Word ExistUnconstrainedVars_28;
    MR_Word UnivUnconstrainedVars_29;
    MR_Word ExistTypeArgInfos_30;
    MR_Word UnivTypeArgInfos_32;
    MR_Word TypeInfoArgInfos_34;
    MR_Word ArgInfos_35;
    MR_Word TypeInfoTypes_36;
    MR_Word UnivTypes_38;
    MR_Word ExistTypes_39;
    MR_Word OrigArgTypes_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_59;
    MR_Box conv6_Var_31;
    MR_Box conv9_Var_33;

    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_5, &PredTypeVarSet_9, &ExistQVars_10, &PredArgTypes_11);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_5, &Var_41);
    UnivCs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
    ExistCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
    UnivVars0_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[32]), UnivCs_12);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnivVars0_14, &UnivConstrainedVars_15);
    ExistVars0_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[6]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[33]), ExistCs_13);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExistVars0_16, &ExistConstrainedVars_17);
    parse_tree__prog_type__type_vars_list_2_p_0(PredArgTypes_11, &PredTypeVars0_18);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars0_18, &PredTypeVars1_19);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars1_19, UnivConstrainedVars_15, &PredTypeVars2_20);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars2_20, ExistConstrainedVars_17, &PredTypeVars_21);
    parse_tree__prog_mode__in_mode_1_p_0(&In_22);
    parse_tree__prog_mode__out_mode_1_p_0(&Out_23);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_44, ExistCs_13, &ExistTypeClassArgInfos_24);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_45, UnivCs_12, &UnivTypeClassArgInfos_25);
    TypeClassArgInfos_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeClassArgInfos_25, ExistTypeClassArgInfos_24);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ExistQVars_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), Var_46, PredTypeVars_21, &ExistUnconstrainedVars_28, &UnivUnconstrainedVars_29);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) ((MR_String) "Out"));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_48, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_48, ExistUnconstrainedVars_28, &ExistTypeArgInfos_30, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_31);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) ((MR_String) "In"));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_51, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_51, UnivUnconstrainedVars_29, &UnivTypeArgInfos_32, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_33);
    TypeInfoArgInfos_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeArgInfos_32, ExistTypeArgInfos_30);
    ArgInfos_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), TypeInfoArgInfos_34, TypeClassArgInfos_26);
    TypeInfoTypes_36 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[34]), PredTypeVars_21);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[35]), UnivCs_12, &UnivTypes_38);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[36]), ExistCs_13, &ExistTypes_39);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnivTypes_38, ExistTypes_39);
    OrigArgTypes_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoTypes_36, Var_59);
    hlds__hlds_goal__make_foreign_args_4_p_0(Vars_7, ArgInfos_35, OrigArgTypes_40, Args_8);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_Word CtorTypeVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 0))));
    MR_Word CtorKindMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 1))));
    MR_Word CtorMaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 2))));
    MR_Word CtorArgTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 3))));
    MR_Word CtorRetType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 4))));
    MR_Word TypeVarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 4))));
    MR_Word TypeVarSet_24;
    MR_Word CtorToParentRenaming_25;
    MR_Integer NumExistentialConstraints_33;
    MR_Word ParentKindMap_36;
    MR_Word ParentToActualTypeSubst_37;
    MR_Word ActualExistentialTypes_38;
    MR_Word ParentArgTypes_39;
    MR_Word ParentRetType_40;
    MR_Word ConstraintMap_41;
    MR_Word GoalId_42;
    MR_Word Context_43;
    MR_Word ExtraTypeClassGoals_46;
    MR_Word ExtraTypeClassVars_47;
    MR_Word ExtraTypeInfoVarsMCAs_48;
    MR_Word ExtraTypeInfoGoals_49;
    MR_Word ExtraTypeInfoVars_50;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Info_60_60;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Integer Var_105;
    MR_Integer Var_106;
    MR_Word Var_107;
    MR_Word Var_108;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_23, CtorTypeVarSet_18, &TypeVarSet_24, &CtorToParentRenaming_25);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(CtorToParentRenaming_25, CtorKindMap_19, &ParentKindMap_36);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(CtorToParentRenaming_25, CtorArgTypes_21, &ParentArgTypes_39);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(CtorToParentRenaming_25, CtorRetType_22, &ParentRetType_40);
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 0))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 1))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 2))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 3))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 5))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 6))));
    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 7))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 8))));
    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 9))));
    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 10))));
    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 11))));
    Var_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 12))));
    Var_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 13))));
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 14))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_51, (MR_Integer) 15))));
    {
      STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (TypeVarSet_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 11) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 12) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 13) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 14) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 15) = ((MR_Box) (Var_108));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ParentRetType_40));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (ParentArgTypes_39));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ActualRetType_13));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (ActualArgTypes_12));
    }
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(Var_54, Var_55, &ParentToActualTypeSubst_37);
    if ((CtorMaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NumExistentialConstraints_33 = (MR_Integer) 0;
      ActualExistentialTypes_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word CtorExistConstraints_26 = (MR_Word) (MR_body((MR_Word) (CtorMaybeExistConstraints_20), (MR_Integer) 1));
      MR_Word CtorExistQVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorExistConstraints_26, (MR_Integer) 0))));
      MR_Word CtorExistentialConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorExistConstraints_26, (MR_Integer) 1))));
      MR_Word ParentExistQVars_31;
      MR_Word ParentExistentialConstraints_32;
      MR_Word ParentExistConstrainedTVars_34;
      MR_Word ParentUnconstrainedExistQVars_35;

      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(CtorToParentRenaming_25, CtorExistQVars_27, &ParentExistQVars_31);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(CtorToParentRenaming_25, CtorExistentialConstraints_28, &ParentExistentialConstraints_32);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistentialConstraints_32, &NumExistentialConstraints_33);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentExistentialConstraints_32, &ParentExistConstrainedTVars_34);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentExistQVars_31, ParentExistConstrainedTVars_34, &ParentUnconstrainedExistQVars_35);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_36, ParentToActualTypeSubst_37, ParentUnconstrainedExistQVars_35, &ActualExistentialTypes_38);
    }
    ConstraintMap_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 7))));
    GoalId_42 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_14);
    Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    switch (IsExistConstr_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ActualExistentialConstraints_44;
          MR_Word ExtraTypeClassVarsMCAs_45;

          hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 0, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_44);
          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(ActualExistentialConstraints_44, Context_43, &ExtraTypeClassVarsMCAs_45, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
          mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeClassVarsMCAs_45, &ExtraTypeClassVars_47);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ActualExistentialConstraints_62;

          hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 1, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_62);
          check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(ActualExistentialConstraints_62, Context_43, &ExtraTypeClassVars_47, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
        }
        break;
    }
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualExistentialTypes_38, Context_43, &ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoGoals_49, STATE_VARIABLE_Info_60_60, STATE_VARIABLE_Info_52);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoVars_50);
    *ExtraGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_49, ExtraTypeClassGoals_46);
    *ExtraVars_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraTypeInfoVars_50, ExtraTypeClassVars_47);
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ExtraGoals_21;
    MR_Word conv5_STATE_VARIABLE_Info_23;

    check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ExtraGoals_21, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ExtraGoals_21));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(
  MR_Word ExistentialConstraints_7,
  MR_Word Context_8,
  MR_Word * ExtraTypeClassVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word OldRttiVarMaps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
    MR_Word RttiVarMaps0_13;
    MR_Word RttiVarMaps_14;
    MR_Word TVars0_15;
    MR_Word TVars_16;
    MR_Word STATE_VARIABLE_Info_20_20;
    MR_Word STATE_VARIABLE_Info_22_22;
    MR_Word Var_23;
    MR_Box conv2_STATE_VARIABLE_Info_20_20;
    MR_Box conv4_RttiVarMaps_14;
    MR_Word Var_94;
    MR_Box conv8_ExtraGoals_10;
    MR_Box conv7_STATE_VARIABLE_Info_18;

    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_8[3]), ExistentialConstraints_7, ExtraTypeClassVars_9, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_20_20);
    STATE_VARIABLE_Info_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20_20));
    RttiVarMaps0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 3))));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[31]), *ExtraTypeClassVars_9, ((MR_Box) (RttiVarMaps0_13)), &conv4_RttiVarMaps_14);
    RttiVarMaps_14 = ((MR_Word) (conv4_RttiVarMaps_14));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 3))));
    succeeded = (((MR_Word) RttiVarMaps_14) == ((MR_Word) Var_94));
    if (succeeded)
      STATE_VARIABLE_Info_22_22 = STATE_VARIABLE_Info_20_20;
    else
    {
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 0))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 1))));
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 2))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 4))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 5))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 6))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 7))));
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 8))));
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 9))));
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 10))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 11))));
      MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 12))));
      MR_Integer Var_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 13))));
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 14))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) (RttiVarMaps_14));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 4) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 5) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 6) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 7) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 8) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 9) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 10) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 11) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 12) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 13) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 14) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 15) = ((MR_Box) (Var_126));
      }
    }
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistentialConstraints_7, &TVars0_15);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), TVars0_15, &TVars_16);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (OldRttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Context_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[9]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), Var_23, TVars_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_ExtraGoals_10, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv7_STATE_VARIABLE_Info_18);
    *ExtraGoals_10 = ((MR_Word) (conv8_ExtraGoals_10));
    *STATE_VARIABLE_Info_18 = ((MR_Word) (conv7_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
check_hlds__polymorphism__empty_cache_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    MR_bool succeeded;
    MR_Word Var_6;
    MR_Word STATE_VARIABLE_Info_7_7;
    MR_Word Var_8;
    MR_Word STATE_VARIABLE_Info_9_9;
    MR_Word Var_10;
    MR_Word STATE_VARIABLE_Info_11_11;
    MR_Word Var_12;
    MR_Word Var_25;
    MR_Word Var_63;
    MR_Word Var_101;
    MR_Word Var_139;

    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 8))));
    succeeded = (((MR_Word) Var_6) == ((MR_Word) Var_25));
    if (succeeded)
      STATE_VARIABLE_Info_7_7 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 9))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 10))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 11))));
      MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 12))));
      MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 13))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 14))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_7_7 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 1) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 2) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 3) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 4) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 5) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 6) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 7) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 8) = ((MR_Box) (Var_6));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 9) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 10) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 11) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 12) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 13) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 14) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, 15) = ((MR_Box) (Var_57));
      }
    }
    Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 9))));
    succeeded = (((MR_Word) Var_8) == ((MR_Word) Var_63));
    if (succeeded)
      STATE_VARIABLE_Info_9_9 = STATE_VARIABLE_Info_7_7;
    else
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 0))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 1))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 2))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 3))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 4))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 5))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 6))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 7))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 8))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 10))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 11))));
      MR_Integer Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 12))));
      MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 13))));
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 14))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_7_7, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_9_9 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 1) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 2) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 3) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 4) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 5) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 6) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 7) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 8) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 9) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 10) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 11) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 12) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 13) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 14) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, 15) = ((MR_Box) (Var_95));
      }
    }
    Var_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 10))));
    succeeded = (((MR_Word) Var_10) == ((MR_Word) Var_101));
    if (succeeded)
      STATE_VARIABLE_Info_11_11 = STATE_VARIABLE_Info_9_9;
    else
    {
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 0))));
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 1))));
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 2))));
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 3))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 4))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 5))));
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 6))));
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 7))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 8))));
      MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 9))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 11))));
      MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 12))));
      MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 13))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 14))));
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_9, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_11_11 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 0) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 1) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 2) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 3) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 4) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 5) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 6) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 7) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 8) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 9) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 10) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 11) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 12) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 13) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 14) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, 15) = ((MR_Box) (Var_133));
      }
    }
    Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]));
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 11))));
    succeeded = (((MR_Word) Var_12) == ((MR_Word) Var_139));
    if (succeeded)
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_11_11;
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 0))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 1))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 2))));
      MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 3))));
      MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 4))));
      MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 5))));
      MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 6))));
      MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 7))));
      MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 8))));
      MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 9))));
      MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 10))));
      MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 12))));
      MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 13))));
      MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 14))));
      MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_159));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_171));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_8_p_0(
  MR_Word ArgVars_9,
  MR_Word LambdaVars_10,
  MR_Word ExistQVars_11,
  MR_Word STATE_VARIABLE_Goal_0_28,
  MR_Word * STATE_VARIABLE_Goal_29,
  MR_Word * NewOutsideVars_13,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarMaps0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));

    succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_15);
    if (succeeded)
    {
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewOutsideVars_13);
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      *STATE_VARIABLE_Goal_29 = STATE_VARIABLE_Goal_0_28;
    }
    else
    {
      MR_Word VarSet0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
      MR_Word VarTypes0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
      MR_Word GoalInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_28, (MR_Integer) 1))));
      MR_Word NonLocals_20;
      MR_Word NonLocalsPlusArgs0_21;
      MR_Word NonLocalsPlusArgs_22;
      MR_Word OutsideVars_23;
      MR_Word VarSet_25;
      MR_Word VarTypes_26;
      MR_Word RttiVarMaps_27;
      MR_Word Var_100;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Integer Var_112;
      MR_Integer Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Integer Var_128;
      MR_Integer Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word _Warnings_24;

      NonLocals_20 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_19);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, NonLocals_20, &NonLocalsPlusArgs0_21);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_10, NonLocalsPlusArgs0_21, &NonLocalsPlusArgs_22);
      hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(RttiVarMaps0_15, VarTypes0_17, ExistQVars_11, NonLocalsPlusArgs_22, NewOutsideVars_13);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_20, *NewOutsideVars_13, &OutsideVars_23);
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, OutsideVars_23, &_Warnings_24, STATE_VARIABLE_Goal_0_28, STATE_VARIABLE_Goal_29, VarSet0_16, &VarSet_25, VarTypes0_17, &VarTypes_26, RttiVarMaps0_15, &RttiVarMaps_27);
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 4))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 5))));
      Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 6))));
      Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 7))));
      Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 8))));
      Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 9))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 10))));
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 11))));
      Var_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 12))));
      Var_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 13))));
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 14))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 15))));
      Var_116 = Var_100;
      Var_117 = VarSet_25;
      Var_120 = Var_104;
      Var_121 = Var_105;
      Var_122 = Var_106;
      Var_123 = Var_107;
      Var_124 = Var_108;
      Var_125 = Var_109;
      Var_126 = Var_110;
      Var_127 = Var_111;
      Var_128 = Var_112;
      Var_129 = Var_113;
      Var_130 = Var_114;
      Var_131 = Var_115;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_31 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_26));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_27));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_131));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeInfoLocn_6;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    check_hlds__polymorphism__get_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TypeInfoLocn_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeInfoLocn_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word TypeVars_14;

    parse_tree__prog_type__type_vars_2_p_0(Type_9, &TypeVars_14);
    if ((TypeVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Changed_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
      *STATE_VARIABLE_GoalInfo_21 = STATE_VARIABLE_GoalInfo_0_20;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word TypeInfoLocns_17;
      MR_Word TypeInfoVars0_42;
      MR_Word TypeInfoVars_43;
      MR_Word NonLocals0_44;
      MR_Word NonLocals_45;
      MR_Box conv2_STATE_VARIABLE_Info_23;

      mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[29]), TypeVars_14, &TypeInfoLocns_17, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv2_STATE_VARIABLE_Info_23);
      *STATE_VARIABLE_Info_23 = ((MR_Word) (conv2_STATE_VARIABLE_Info_23));
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[30]), TypeInfoLocns_17, &TypeInfoVars0_42);
      mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), TypeInfoVars0_42, &TypeInfoVars_43);
      NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_43, NonLocals0_44, &NonLocals_45);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, STATE_VARIABLE_GoalInfo_0_20, STATE_VARIABLE_GoalInfo_21);
      switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Modes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 1))));
                MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 2))) & (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Unification_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Modes_46));
                  MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeInfoVars_43));
                }
              }
              break;
          }
          break;
      }
      *Changed_12 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word HeadVars_11,
  MR_Word UnconstrainedTVars_12,
  MR_Word TypeInfoHeadVars_13,
  MR_Word ExistTypeClassInfoHeadVars_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_45, (MR_Integer) 2))));
    MR_Word ConstraintMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_45, (MR_Integer) 7))));
    MR_Word ArgTypes_20;
    MR_Word KindMap_21;
    MR_Word PredClassContext_22;
    MR_Word PredExistConstraints_23;
    MR_Word ActualExistConstraints_24;
    MR_Word GoalInfo_27;
    MR_Word Context_28;
    MR_Word ExistTypeClassVarsMCAs_29;
    MR_Word ExtraTypeClassGoals_30;
    MR_Word ExistTypeClassVars_31;
    MR_Word RttiVarMaps0_32;
    MR_Word RttiVarMaps_33;
    MR_Word ExtraTypeClassUnifyGoals_34;
    MR_Word PredToActualTypeSubst_35;
    MR_Word ActualTypes_39;
    MR_Word TypeInfoVarsMCAs_40;
    MR_Word ExtraTypeInfoGoals_41;
    MR_Word TypeInfoVars_42;
    MR_Word ExtraTypeInfoUnifyGoals_43;
    MR_Word GoalList_44;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Box conv1_RttiVarMaps_33;
    MR_Word Var_127;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_10, &ArgTypes_20);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_10, &KindMap_21);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &PredClassContext_22);
    PredExistConstraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_22, (MR_Integer) 1))));
    check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(ConstraintMap_19, PredExistConstraints_23, &ActualExistConstraints_24);
    GoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1))));
    Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_27);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(ActualExistConstraints_24, Context_28, &ExistTypeClassVarsMCAs_29, &ExtraTypeClassGoals_30, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_47_47);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExistTypeClassVarsMCAs_29, &ExistTypeClassVars_31);
    RttiVarMaps0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[28]), ExistTypeClassVars_31, ((MR_Box) (RttiVarMaps0_32)), &conv1_RttiVarMaps_33);
    RttiVarMaps_33 = ((MR_Word) (conv1_RttiVarMaps_33));
    Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
    succeeded = (((MR_Word) RttiVarMaps_33) == ((MR_Word) Var_127));
    if (succeeded)
      STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_47_47;
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 0))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 1))));
      MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 2))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 4))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 5))));
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 6))));
      MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 7))));
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 8))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 9))));
      MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 10))));
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 11))));
      MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 12))));
      MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 13))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 14))));
      MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (RttiVarMaps_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 11) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 12) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 13) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 14) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 15) = ((MR_Box) (Var_159));
      }
    }
    check_hlds__polymorphism__assign_var_list_3_p_0(ExistTypeClassInfoHeadVars_14, ExistTypeClassVars_31, &ExtraTypeClassUnifyGoals_34);
    succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(VarTypes0_18);
    if (succeeded)
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_35);
    else
    {
      MR_Word ArgTypeSubst_38;
      MR_Word HeadVarList_36;
      MR_Word ActualArgTypes_37;

      HeadVarList_36 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars_11);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_18, HeadVarList_36, &ActualArgTypes_37);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes_20, ActualArgTypes_37, &ArgTypeSubst_38);
      if (succeeded)
        PredToActualTypeSubst_35 = ArgTypeSubst_38;
      else
        mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_35);
    }
    parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(KindMap_21, PredToActualTypeSubst_35, UnconstrainedTVars_12, &ActualTypes_39);
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualTypes_39, Context_28, &TypeInfoVarsMCAs_40, &ExtraTypeInfoGoals_41, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_46);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), TypeInfoVarsMCAs_40, &TypeInfoVars_42);
    check_hlds__polymorphism__assign_var_list_3_p_0(TypeInfoHeadVars_13, TypeInfoVars_42, &ExtraTypeInfoUnifyGoals_43);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Goal0_15));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (ExtraTypeClassGoals_30));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ExtraTypeInfoUnifyGoals_43));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ExtraTypeInfoGoals_41));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ExtraTypeClassUnifyGoals_34));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_51, &GoalList_44);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_44, GoalInfo_27, Goal_16);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Constraints_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(Constraints_8, (MR_Word) ((MR_Unsigned) 0U), Context_10, TypeClassInfoVarsMCAs_11, ExtraGoals_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  if (((MR_tag((MR_Word) Proof_12)) == (MR_Integer) 0))
  {
    MR_Integer InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, InstanceNum_19, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
  else
  {
    MR_Word SubClassConstraint_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, SubClassConstraint_18, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word OldTypeClassInfoVar_17;
    MR_Word RttiVarMaps0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));

    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_16, Constraint_9, &OldTypeClassInfoVar_17);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OldTypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word Proof_20;
      MR_Word ProofMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
      MR_Box conv0_Proof_20;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_19, ((MR_Box) (Constraint_9)), &conv0_Proof_20);
      if (succeeded)
      {
        Proof_20 = ((MR_Word) (conv0_Proof_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        if (((MR_tag((MR_Word) Proof_20)) == (MR_Integer) 0))
        {
          MR_Integer InstanceNum_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, InstanceNum_83, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        }
        else
        {
          MR_Word SubClassConstraint_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, SubClassConstraint_82, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        }
      else
      {
        MR_Word RttiVarMaps_21;
        MR_Word STATE_VARIABLE_Info_27_27;
        MR_Word RttiVarMaps0_30;
        MR_Word TypeClassInfoVar_31;
        MR_Word Var_108;

        check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_9, &TypeClassInfoVar_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
        RttiVarMaps0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
        hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_31, RttiVarMaps0_30, &RttiVarMaps_21);
        Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
        succeeded = (((MR_Word) RttiVarMaps_21) == ((MR_Word) Var_108));
        if (succeeded)
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_27_27;
        else
        {
          MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 0))));
          MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 1))));
          MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 2))));
          MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 4))));
          MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 5))));
          MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 6))));
          MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 7))));
          MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 8))));
          MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 9))));
          MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 10))));
          MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 11))));
          MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 12))));
          MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 13))));
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 14))));
          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 15))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_23 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_21));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_129));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_133));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_140));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeClassInfoVarMCA_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructDb0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 14))));
    MR_Word InstanceId_23;
    MR_Integer InstanceIdConstNum_24;

    {
      InstanceId_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceId_23, 0) = ((MR_Box) (InstanceNum_12));
      MR_hl_field(MR_mktag(0), InstanceId_23, 1) = ((MR_Box) (Constraint_10));
      MR_hl_field(MR_mktag(0), InstanceId_23, 2) = ((MR_Box) (Seen_11));
    }
    succeeded = hlds__const_struct__search_for_constant_instance_3_p_0(ConstStructDb0_22, InstanceId_23, &InstanceIdConstNum_24);
    if (succeeded)
    {
      MR_Word TypeClassInfoVar_25;
      MR_Word Var_69;
      MR_Word Var_70;

      check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(Constraint_10, InstanceIdConstNum_24, &TypeClassInfoVar_25, Goals_16, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (InstanceIdConstNum_24));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_25));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
      }
    }
    else
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(InstanceId_23, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeClassInfoVarMCA_14;
    MR_Word TypeClassInfoVarsMCAs_15;
    MR_Word Context_18;
    MR_Word HeadGoals_19;
    MR_Word TailGoals_20;
    MR_Word STATE_VARIABLE_Info_24_24;

    mercury__term__context_init_1_p_0(&Context_18);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(Constraints_12, &TypeClassInfoVarsMCAs_15, &TailGoals_20, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_15));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_19, TailGoals_20);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word ProofMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
    MR_Word TVarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
    MR_Word SuperClasses0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1))));
    MR_Word ClassVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4))));
    MR_Word ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8))));
    MR_Word TVarSet1_21;
    MR_Word Renaming_22;
    MR_Word ClassVars_23;
    MR_Word TypeSubst_24;
    MR_Word SuperClasses1_25;
    MR_Word SuperClasses_26;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Integer Var_118;
    MR_Integer Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_126;
    MR_Word Var_164;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_17, ClassTVarSet_20, &TVarSet1_21, &Renaming_22);
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
    Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7))));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 8))));
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 9))));
    Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 10))));
    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 11))));
    Var_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 12))));
    Var_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 13))));
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 14))));
    Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 15))));
    {
      STATE_VARIABLE_Info_29_29 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 1) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 2) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 3) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 4) = ((MR_Box) (TVarSet1_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 5) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 6) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 7) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 8) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 9) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 10) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 11) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 12) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 13) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 14) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 15) = ((MR_Box) (Var_121));
    }
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_22, ClassVars0_19, &ClassVars_23);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_23, InstanceTypes_10, &TypeSubst_24);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_22, SuperClasses0_18, &SuperClasses1_25);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TypeSubst_24, SuperClasses1_25, &SuperClasses_26);
    Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    succeeded = (((MR_Word) SuperClassProofMap_11) == ((MR_Word) Var_126));
    if (succeeded)
      STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_29_29;
    else
    {
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
      MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
      MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));
      MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8))));
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10))));
      MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11))));
      MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12))));
      MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (SuperClassProofMap_11));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (Var_158));
      }
    }
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(SuperClasses_26, SuperClassTypeClassInfoVarsMCAs_13, SuperClassGoals_14, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
    Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
    succeeded = (((MR_Word) ProofMap_16) == ((MR_Word) Var_164));
    if (succeeded)
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
    else
    {
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
      MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
      MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
      MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
      MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
      MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
      MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
      MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
      MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
      MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
      MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
      MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
      MR_Integer Var_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 13))));
      MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
      MR_Word Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_181));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_183));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_184));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ProofMap_16));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_188));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_189));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_190));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_191));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_192));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_193));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_194));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_195));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_196));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2939__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ConstOrVarArg_5;

    check_hlds__polymorphism__make_const_or_var_arg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ConstOrVarArg_5);
    *wrapper_arg_2 = ((MR_Box) (conv3_ConstOrVarArg_5));
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
    MR_Word InstanceTable_15;
    MR_Word ClassTable_16;
    MR_Word TypeVarSet_17;
    MR_Word ProofMap0_18;
    MR_Integer InstanceNum_19;
    MR_Word Constraint_20;
    MR_Word Seen_21;
    MR_Word ClassName_22;
    MR_Word ConstrainedTypes_23;
    MR_Integer ClassArity_24;
    MR_Word ClassId_25;
    MR_Word InstanceList_26;
    MR_Word ProofInstanceDefn_27;
    MR_Word InstanceTypes_29;
    MR_Word InstanceConstraints_33;
    MR_Word InstanceTVarset_36;
    MR_Word InstanceProofMap_37;
    MR_Word KindMap_38;
    MR_Word InstanceTvars_39;
    MR_Word UnconstrainedTvars_40;
    MR_Word Renaming_42;
    MR_Word RenamedInstanceTypes_43;
    MR_Word InstanceSubst_44;
    MR_Word RenamedInstanceConstraints_45;
    MR_Word ActualInstanceConstraints0_46;
    MR_Word ActualInstanceConstraints_47;
    MR_Word RenamedInstanceProofMap_48;
    MR_Word ActualInstanceProofMap_49;
    MR_Word RenamedUnconstrainedTvars_50;
    MR_Word RenamedKindMap_51;
    MR_Word ActualUnconstrainedTypes_52;
    MR_Word ProofMap_53;
    MR_Word InitialVarMapsSnapshot_54;
    MR_Word ArgTypeInfoVarsMCAs_55;
    MR_Word TypeInfoGoals_56;
    MR_Word ArgTypeClassInfoVarsMCAs_57;
    MR_Word InstanceConstraintGoals_58;
    MR_Word ArgUnconstrainedTypeInfoVarsMCAs_59;
    MR_Word UnconstrainedTypeInfoGoals_60;
    MR_Word ClassDefn_61;
    MR_Word ArgSuperClassVarsMCAs_62;
    MR_Word SuperClassGoals_63;
    MR_Word PrevGoals_64;
    MR_Word ArgVarsMCAs_65;
    MR_Word ArgCOVAs_66;
    MR_Word ConstraintClassName_67;
    MR_Word ConstraintArgTypes_68;
    MR_Word TypeClassInfoMap0_69;
    MR_Word STATE_VARIABLE_Info_98_98;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_100_100;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Box conv0_InstanceList_26;
    MR_Box conv1_ProofInstanceDefn_27;
    MR_Word _NewTVarset_41;
    MR_Box conv2_ClassDefn_61;
    MR_Word OldTypeClassInfoVarMCA0_74;
    MR_Word TypeInfo_144_144;
    MR_Word TypeCtorInfo_145_145;
    MR_Word TypeInfo_146_146;
    MR_Word ClassNameMap0_70;
    MR_Word OldEntry0_71;
    MR_Word ArgsMap0_73;
    MR_Box conv4_ClassNameMap0_70;
    MR_Box conv5_OldEntry0_71;
    MR_Box conv6_OldTypeClassInfoVarMCA0_74;
    MR_Integer TypeClassInfoConstArgNum_92;
    MR_Word TypeClassInfoConstArg_91;
    MR_Word Var_120;

    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_15);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_16);
    TypeVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
    ProofMap0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
    InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 0))));
    Constraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 1))));
    Seen_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 2))));
    ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstrainedTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypes_23, &ClassArity_24);
    {
      ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassName_22));
      MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (ClassArity_24));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]), InstanceTable_15, ((MR_Box) (ClassId_25)), &conv0_InstanceList_26);
    InstanceList_26 = ((MR_Word) (conv0_InstanceList_26));
    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_26, InstanceNum_19, &conv1_ProofInstanceDefn_27);
    ProofInstanceDefn_27 = ((MR_Word) (conv1_ProofInstanceDefn_27));
    InstanceTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 1))));
    InstanceConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 5))));
    InstanceTVarset_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 8))));
    InstanceProofMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 9))));
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_38);
    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_29, &InstanceTvars_39);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTvars_39, InstanceConstraints_33, &UnconstrainedTvars_40);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet_17, InstanceTVarset_36, &_NewTVarset_41, &Renaming_42);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_42, InstanceTypes_29, &RenamedInstanceTypes_43);
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(RenamedInstanceTypes_43, ConstrainedTypes_23, &InstanceSubst_44);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_42, InstanceConstraints_33, &RenamedInstanceConstraints_45);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(InstanceSubst_44, RenamedInstanceConstraints_45, &ActualInstanceConstraints0_46);
    mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ActualInstanceConstraints0_46, Seen_21, &ActualInstanceConstraints_47);
    check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(Renaming_42, InstanceProofMap_37, &RenamedInstanceProofMap_48);
    check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(InstanceSubst_44, RenamedInstanceProofMap_48, &ActualInstanceProofMap_49);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_42, UnconstrainedTvars_40, &RenamedUnconstrainedTvars_50);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_42, KindMap_38, &RenamedKindMap_51);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap_51, InstanceSubst_44, RenamedUnconstrainedTvars_50, &ActualUnconstrainedTypes_52);
    mercury__map__overlay_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_18, ActualInstanceProofMap_49, &ProofMap_53);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_98_98);
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ConstrainedTypes_23, Context_10, &ArgTypeInfoVarsMCAs_55, &TypeInfoGoals_56, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_99_99);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(ActualInstanceConstraints_47, Seen_21, Context_10, &ArgTypeClassInfoVarsMCAs_57, &InstanceConstraintGoals_58, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedTypes_52, Context_10, &ArgUnconstrainedTypeInfoVarsMCAs_59, &UnconstrainedTypeInfoGoals_60, STATE_VARIABLE_Info_100_100, &STATE_VARIABLE_Info_101_101);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_16, ((MR_Box) (ClassId_25)), &conv2_ClassDefn_61);
    ClassDefn_61 = ((MR_Word) (conv2_ClassDefn_61));
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(ClassDefn_61, ConstrainedTypes_23, ProofMap_53, &ArgSuperClassVarsMCAs_62, &SuperClassGoals_63, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InstanceConstraintGoals_58, SuperClassGoals_63);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_56, Var_104);
    PrevGoals_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnconstrainedTypeInfoGoals_60, Var_103);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgSuperClassVarsMCAs_62, ArgTypeInfoVarsMCAs_55);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgTypeClassInfoVarsMCAs_57, Var_106);
    ArgVarsMCAs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgUnconstrainedTypeInfoVarsMCAs_59, Var_105);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[27]), ArgVarsMCAs_65, &ArgCOVAs_66);
    ConstraintClassName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstraintArgTypes_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    TypeClassInfoMap0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 9))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), TypeClassInfoMap0_69, ((MR_Box) (ConstraintClassName_67)), &conv4_ClassNameMap0_70);
    if (succeeded)
    {
      ClassNameMap0_70 = ((MR_Word) (conv4_ClassNameMap0_70));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_144_144 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]);
      TypeCtorInfo_145_145 = (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_144_144, TypeCtorInfo_145_145, ClassNameMap0_70, ((MR_Box) (ConstraintArgTypes_68)), &conv5_OldEntry0_71);
      if (succeeded)
      {
        OldEntry0_71 = ((MR_Word) (conv5_OldEntry0_71));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ArgsMap0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry0_71, (MR_Integer) 1))));
        TypeInfo_146_146 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]);
        succeeded = mercury__map__search_3_p_0(TypeInfo_146_146, (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgsMap0_73, ((MR_Box) (ArgCOVAs_66)), &conv6_OldTypeClassInfoVarMCA0_74);
        if (succeeded)
        {
          OldTypeClassInfoVarMCA0_74 = ((MR_Word) (conv6_OldTypeClassInfoVarMCA0_74));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_75;
      MR_Word STATE_VARIABLE_Info_109_109;
      MR_Integer Var_110;
      MR_Integer Var_293;

      *TypeClassInfoVarMCA_11 = OldTypeClassInfoVarMCA0_74;
      *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_109_109);
      NumReuses_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 12))));
      Var_110 = (MR_Integer) ((MR_Unsigned) NumReuses_75 + (MR_Unsigned) 2);
      Var_293 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 12))));
      succeeded = (Var_110 == Var_293);
      if (succeeded)
        STATE_VARIABLE_Info_111_111 = STATE_VARIABLE_Info_109_109;
      else
      {
        MR_Word Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 0))));
        MR_Word Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 1))));
        MR_Word Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 2))));
        MR_Word Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 3))));
        MR_Word Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 4))));
        MR_Word Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 5))));
        MR_Word Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 6))));
        MR_Word Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 7))));
        MR_Word Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 8))));
        MR_Word Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 9))));
        MR_Word Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 10))));
        MR_Word Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 11))));
        MR_Integer Var_290 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 13))));
        MR_Word Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 14))));
        MR_Word Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_111_111 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 0) = ((MR_Box) (Var_277));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 1) = ((MR_Box) (Var_278));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 2) = ((MR_Box) (Var_279));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 3) = ((MR_Box) (Var_280));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 4) = ((MR_Box) (Var_281));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 5) = ((MR_Box) (Var_282));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 6) = ((MR_Box) (Var_283));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 7) = ((MR_Box) (Var_284));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 8) = ((MR_Box) (Var_285));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 9) = ((MR_Box) (Var_286));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 10) = ((MR_Box) (Var_287));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 11) = ((MR_Box) (Var_288));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 12) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 13) = ((MR_Box) (Var_290));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 14) = ((MR_Box) (Var_291));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 15) = ((MR_Box) (Var_292));
        }
      }
    }
    else
    {
      MR_Word BaseConsId_76;
      MR_Word BaseVar_77;
      MR_Word BaseGoals_78;
      MR_Word TypeClassInfoVar_79;
      MR_Word TypeClassInfoMCA_80;
      MR_Word TypeClassInfoMap1_81;
      MR_Word TypeClassInfoMap_89;
      MR_Word STATE_VARIABLE_Info_113_113;
      MR_Word Var_114;
      MR_Word STATE_VARIABLE_Info_115_115;
      MR_Word ClassNameMap1_82;
      MR_Box conv7_ClassNameMap1_82;
      MR_Word Var_316;

      BaseConsId_76 = hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(InstanceTable_15, Constraint_20, InstanceNum_19, InstanceTypes_29);
      check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(Constraint_20, BaseConsId_76, &BaseVar_77, &BaseGoals_78, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_113_113);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_78, PrevGoals_64);
      check_hlds__polymorphism__construct_typeclass_info_11_p_0(Constraint_20, BaseVar_77, BaseConsId_76, ArgVarsMCAs_65, InitialVarMapsSnapshot_54, &TypeClassInfoVar_79, &TypeClassInfoMCA_80, Var_114, Goals_12, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_115_115);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_79));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeClassInfoMCA_80));
      }
      TypeClassInfoMap1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 9))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), TypeClassInfoMap1_81, ((MR_Box) (ConstraintClassName_67)), &conv7_ClassNameMap1_82);
      if (succeeded)
      {
        ClassNameMap1_82 = ((MR_Word) (conv7_ClassNameMap1_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldEntry1_83;
        MR_Box conv8_OldEntry1_83;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0), ClassNameMap1_82, ((MR_Box) (ConstraintArgTypes_68)), &conv8_OldEntry1_83);
        if (succeeded)
        {
          OldEntry1_83 = ((MR_Word) (conv8_OldEntry1_83));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BaseConsId1_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 0))));
          MR_Word ArgsMap1_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 1))));
          MR_Word ArgsMap_86;
          MR_Word Entry_87;
          MR_Word ClassNameMap_88;
          MR_Word Var_116;

          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[6]));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (BaseConsId1_84));
          }
          mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140check_hlds.polymorphism.do_make_typeclass_info_from_instance\'/7", (MR_String) "BaseConsId1 != BaseConsId");
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)), ArgsMap1_85, &ArgsMap_86);
          {
            Entry_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_87, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_87, 1) = ((MR_Box) (ArgsMap_86));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_87)), ClassNameMap1_82, &ClassNameMap_88);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_88)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
        else
        {
          MR_Word ArgsMap_122;
          MR_Word Entry_123;
          MR_Word ClassNameMap_124;

          ArgsMap_122 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
          {
            Entry_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_123, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_123, 1) = ((MR_Box) (ArgsMap_122));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_123)), ClassNameMap1_82, &ClassNameMap_124);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_124)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
      }
      else
      {
        MR_Word ArgsMap_125;
        MR_Word Entry_126;
        MR_Word ClassNameMap_127;

        ArgsMap_125 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
        {
          Entry_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_126, 0) = ((MR_Box) (BaseConsId_76));
          MR_hl_field(MR_mktag(0), Entry_126, 1) = ((MR_Box) (ArgsMap_125));
        }
        ClassNameMap_127 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_126)));
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_127)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
      }
      Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 9))));
      succeeded = (((MR_Word) TypeClassInfoMap_89) == ((MR_Word) Var_316));
      if (succeeded)
        STATE_VARIABLE_Info_111_111 = STATE_VARIABLE_Info_115_115;
      else
      {
        MR_Word Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 0))));
        MR_Word Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 1))));
        MR_Word Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 2))));
        MR_Word Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 3))));
        MR_Word Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 4))));
        MR_Word Var_338 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 5))));
        MR_Word Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 6))));
        MR_Word Var_340 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 7))));
        MR_Word Var_341 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 8))));
        MR_Word Var_343 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 10))));
        MR_Word Var_344 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 11))));
        MR_Integer Var_345 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 12))));
        MR_Integer Var_346 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 13))));
        MR_Word Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 14))));
        MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_111_111 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 0) = ((MR_Box) (Var_333));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 1) = ((MR_Box) (Var_334));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 2) = ((MR_Box) (Var_335));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 3) = ((MR_Box) (Var_336));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 4) = ((MR_Box) (Var_337));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 5) = ((MR_Box) (Var_338));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 6) = ((MR_Box) (Var_339));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 7) = ((MR_Box) (Var_340));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 8) = ((MR_Box) (Var_341));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 9) = ((MR_Box) (TypeClassInfoMap_89));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 10) = ((MR_Box) (Var_343));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 11) = ((MR_Box) (Var_344));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 12) = ((MR_Box) (Var_345));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 13) = ((MR_Box) (Var_346));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 14) = ((MR_Box) (Var_347));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, 15) = ((MR_Box) (Var_348));
        }
      }
    }
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *TypeClassInfoVarMCA_11, (MR_Integer) 1))));
    succeeded = (Var_120 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeClassInfoConstArg_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_120, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TypeClassInfoConstArg_91)) == (MR_Integer) 0);
      if (succeeded)
        TypeClassInfoConstArgNum_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_91, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ConstStructDb1_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 14))));
      MR_Word ConstStructDb_94;
      MR_Word Var_372;

      hlds__const_struct__insert_constant_instance_4_p_0(InstanceId_8, TypeClassInfoConstArgNum_92, ConstStructDb1_93, &ConstStructDb_94);
      Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 14))));
      succeeded = (((MR_Word) ConstStructDb_94) == ((MR_Word) Var_372));
      if (succeeded)
        *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_111_111;
      else
      {
        MR_Word Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 0))));
        MR_Word Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 1))));
        MR_Word Var_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 2))));
        MR_Word Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 3))));
        MR_Word Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 4))));
        MR_Word Var_394 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 5))));
        MR_Word Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 6))));
        MR_Word Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 7))));
        MR_Word Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 8))));
        MR_Word Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 9))));
        MR_Word Var_399 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 10))));
        MR_Word Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 11))));
        MR_Integer Var_401 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 12))));
        MR_Integer Var_402 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 13))));
        MR_Word Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_96 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_389));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_390));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_391));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_392));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_393));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_394));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_395));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_396));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_397));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_398));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_399));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_400));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_401));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_402));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ConstStructDb_94));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_404));
        }
      }
    }
    else
      *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_111_111;
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfoVar_15;
    MR_Word MaybeTCIConstArg_16;
    MR_Word SubClassName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 0))));
    MR_Word SubClassTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 1))));
    MR_Integer SubClassArity_25;
    MR_Word SubClassId_26;
    MR_Word SubClassVarMCA_27;
    MR_Word SubClassVarGoals_28;
    MR_Word SubClassVar_29;
    MR_Word SubClassMCA_30;
    MR_Word ModuleInfo_31;
    MR_Word ClassTable_32;
    MR_Word SubClassDefn_33;
    MR_Word SubTypeSubst_34;
    MR_Word SuperClasses_35;
    MR_Integer SuperClassIndex_37;
    MR_Word STATE_VARIABLE_Info_103_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Box conv0_SubClassDefn_33;
    MR_Integer SuperClassIndexPrime_36;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubClassTypes_24, &SubClassArity_25);
    {
      SubClassId_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubClassId_26, 0) = ((MR_Box) (SubClassName_23));
      MR_hl_field(MR_mktag(0), SubClassId_26, 1) = ((MR_Box) (SubClassArity_25));
    }
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(SubClassConstraint_12, Seen_11, Context_14, &SubClassVarMCA_27, &SubClassVarGoals_28, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_103_103);
    SubClassVar_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_27, (MR_Integer) 0))));
    SubClassMCA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_27, (MR_Integer) 1))));
    ModuleInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_31, &ClassTable_32);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_32, ((MR_Box) (SubClassId_26)), &conv0_SubClassDefn_33);
    SubClassDefn_33 = ((MR_Word) (conv0_SubClassDefn_33));
    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_33, (MR_Integer) 4))));
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_104, SubClassTypes_24, &SubTypeSubst_34);
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_33, (MR_Integer) 1))));
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(SubTypeSubst_34, Var_105, &SuperClasses_35);
    succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_35, ((MR_Box) (Constraint_10)), &SuperClassIndexPrime_36);
    if (succeeded)
      SuperClassIndex_37 = SuperClassIndexPrime_36;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "constraint not in constraint list");
        return;
      }
    if ((SubClassMCA_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IndexVar_64;
      MR_Word IndexGoals_65;
      MR_Word SuperClassGoal_66;
      MR_Word STATE_VARIABLE_Info_109_109;
      MR_Word Var_111;
      MR_Word Var_117;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word _TypeClassInfoVarType_63;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_10, (MR_Integer) 1, &TypeClassInfoVar_15, &_TypeClassInfoVarType_63, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_109_109);
      check_hlds__polymorphism__get_poly_const_5_p_0(SuperClassIndex_37, &IndexVar_64, &IndexGoals_65, STATE_VARIABLE_Info_109_109, STATE_VARIABLE_Info_68);
      Var_111 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (TypeClassInfoVar_15));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (IndexVar_64));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
      }
      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (SubClassVar_29));
        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_121));
      }
      Var_119 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      Var_120 = mercury__term__context_init_0_f_0();
      hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_31, Var_111, (MR_String) "superclass_from_typeclass_info", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_117, (MR_Word) ((MR_Unsigned) 0U), Var_119, Var_120, &SuperClassGoal_66);
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (SuperClassGoal_66));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_65, Var_125);
      *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubClassVarGoals_28, Var_124);
      MaybeTCIConstArg_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word SubClassConstArg_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassMCA_30, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SubClassConstArg_38)) == (MR_Integer) 0))
      {
        MR_Integer SubClassConstNum_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubClassConstArg_38, (MR_Integer) 0))));
        MR_Word ConstStructDb_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 14))));
        MR_Word SubClassConstStruct_43;
        MR_Word SubClassConsId_44;
        MR_Word SubClassArgs_45;
        MR_Word SelectedArg_60;
        MR_Integer SelectedConstNum_61;
        MR_Word TypeInfo_214_214;
        MR_Word TypeCtorInfo_215_215;
        MR_Word TypeCtorInfo_216_216;
        MR_Word BTCIArg_48;
        MR_Word OtherArgs_49;
        MR_Word BTCIConsId_50;
        MR_Integer SubInstanceNum_53;
        MR_Word InstanceTable_55;
        MR_Word SubInstanceDefns_56;
        MR_Word SubInstanceDefn_57;
        MR_Integer NumExtra_58;
        MR_Integer Index_59;
        MR_Word Var_221;
        MR_Box conv1_SubInstanceDefns_56;
        MR_Box conv2_SubInstanceDefn_57;
        MR_Box conv3_SelectedArg_60;

        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_42, SubClassConstNum_41, &SubClassConstStruct_43);
        SubClassConsId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_43, (MR_Integer) 0))));
        SubClassArgs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_43, (MR_Integer) 1))));
        succeeded = (SubClassConsId_44 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (SubClassArgs_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            BTCIArg_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_45, (MR_Integer) 0))));
            OtherArgs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_45, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) BTCIArg_48)) == (MR_Integer) 1);
            if (succeeded)
            {
              BTCIConsId_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BTCIArg_48, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) BTCIConsId_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_50, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BTCIConsId_50, (MR_Integer) 2))));
                SubInstanceNum_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_50, (MR_Integer) 3))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(SubClassId_26, Var_221);
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_31, &InstanceTable_55);
                  TypeInfo_214_214 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]);
                  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), TypeInfo_214_214, InstanceTable_55, ((MR_Box) (SubClassId_26)), &conv1_SubInstanceDefns_56);
                  SubInstanceDefns_56 = ((MR_Word) (conv1_SubInstanceDefns_56));
                  TypeCtorInfo_215_215 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_215_215, SubInstanceDefns_56, SubInstanceNum_53, &conv2_SubInstanceDefn_57);
                  if (succeeded)
                  {
                    SubInstanceDefn_57 = ((MR_Word) (conv2_SubInstanceDefn_57));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    hlds__hlds_class__num_extra_instance_args_2_p_0(SubInstanceDefn_57, &NumExtra_58);
                    Index_59 = (MR_Integer) ((MR_Unsigned) NumExtra_58 + (MR_Unsigned) SuperClassIndex_37);
                    TypeCtorInfo_216_216 = (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
                    mercury__list__det_index1_3_p_0(TypeCtorInfo_216_216, OtherArgs_49, Index_59, &conv3_SelectedArg_60);
                    SelectedArg_60 = ((MR_Word) (conv3_SelectedArg_60));
                    succeeded = ((MR_tag((MR_Word) SelectedArg_60)) == (MR_Integer) 0);
                    if (succeeded)
                      SelectedConstNum_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelectedArg_60, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(Constraint_10, SelectedConstNum_61, &TypeClassInfoVar_15, Goals_17, STATE_VARIABLE_Info_103_103, STATE_VARIABLE_Info_68);
          {
            MaybeTCIConstArg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTCIConstArg_16, 0) = ((MR_Box) (SelectedArg_60));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "unexpected typeclass info structure");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "typeclass infos need a cell");
          return;
        }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeTCIConstArg_16));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeClassInfoVarMCA_20;
      MR_Word TypeClassInfoVarsMCAs_21;
      MR_Word HeadExtraGoals_24;
      MR_Word TailExtraGoals_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word OldTypeClassInfoVar_42;
      MR_Word RttiVarMaps0_41;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Constraint_15));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (HeadVar__2_2));
      }
      check_hlds__polymorphism__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_7, &RttiVarMaps0_41);
      succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_41, Constraint_15, &OldTypeClassInfoVar_42);
      if (succeeded)
      {
        {
          TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (OldTypeClassInfoVar_42));
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Proof_45;
        MR_Word ProofMap_44;
        MR_Box conv0_Proof_45;

        check_hlds__polymorphism__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_7, &ProofMap_44);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_44, ((MR_Box) (Constraint_15)), &conv0_Proof_45);
        if (succeeded)
        {
          Proof_45 = ((MR_Word) (conv0_Proof_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(Constraint_15, Var_28, Proof_45, HeadVar__4_4, &TypeClassInfoVarMCA_20, &HeadExtraGoals_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
        else
        {
          MR_Word RttiVarMaps_46;
          MR_Word STATE_VARIABLE_Info_27_50;
          MR_Word RttiVarMaps0_53;
          MR_Word TypeClassInfoVar_54;

          check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_15, &TypeClassInfoVar_54, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_27_50);
          check_hlds__polymorphism__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_50, &RttiVarMaps0_53);
          hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_54, RttiVarMaps0_53, &RttiVarMaps_46);
          check_hlds__polymorphism__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_46, STATE_VARIABLE_Info_27_50, &STATE_VARIABLE_Info_29_29);
          {
            TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (TypeClassInfoVar_54));
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(Constraints_16, HeadVar__2_2, HeadVar__4_4, &TypeClassInfoVarsMCAs_21, &TailExtraGoals_25, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_21));
      }
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadExtraGoals_24, TailExtraGoals_25);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructVarMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 11))));
    MR_Word ConstArgType_13;
    MR_Word ConstArg_14;
    MR_Word PrivateBuiltin_75;
    MR_Word TypeclassInfoTypeName_76;
    MR_Word OldVar_15;
    MR_Box conv0_OldVar_15;

    PrivateBuiltin_75 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_76, 0) = ((MR_Box) (PrivateBuiltin_75));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_76, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      ConstArgType_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 0) = ((MR_Box) (TypeclassInfoTypeName_76));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ConstArg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstArg_14, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(MR_mktag(1), ConstArg_14, 1) = ((MR_Box) (ConstArgType_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ConstStructVarMap0_12, ((MR_Box) (ConstArg_14)), &conv0_OldVar_15);
    if (succeeded)
    {
      OldVar_15 = ((MR_Word) (conv0_OldVar_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 12))));
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) NumReuses_16 + (MR_Unsigned) 1);
      MR_Integer Var_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 12))));

      succeeded = (Var_30 == Var_134);
      if (succeeded)
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      else
      {
        MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1))));
        MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2))));
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3))));
        MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
        MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 5))));
        MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 6))));
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
        MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 8))));
        MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 9))));
        MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 10))));
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 11))));
        MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 13))));
        MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 14))));
        MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_29 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_133));
        }
      }
      *Var_9 = OldVar_15;
      *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word RHS_18;
      MR_Word Unification_19;
      MR_Word Unify_23;
      MR_Word NonLocals_24;
      MR_Word InstmapDelta_25;
      MR_Word GoalInfo_26;
      MR_Word Goal_27;
      MR_Word _VarType_17;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 0, Var_9, &_VarType_17, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      {
        RHS_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_18, 0) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(1), RHS_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_19, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_19, 1) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(0), Unification_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_19, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Unification_19, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_19, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_23, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), Unify_23, 1) = ((MR_Box) (RHS_18));
        MR_hl_field(MR_mktag(1), Unify_23, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), Unify_23, 3) = ((MR_Box) (Unification_19));
        MR_hl_field(MR_mktag(1), Unify_23, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
      }
      NonLocals_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_25 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_24, InstmapDelta_25, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_26);
      {
        Goal_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_27, 0) = ((MR_Box) (Unify_23));
        MR_hl_field(MR_mktag(0), Goal_27, 1) = ((MR_Box) (GoalInfo_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    check_hlds__polymorphism__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructDb0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 14))));
    MR_Word ConstStructEnabled_24;
    MR_Word VarConstArgs_25;

    hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_23, &ConstStructEnabled_24);
    succeeded = (ConstStructEnabled_24 == (MR_Integer) 1);
    if (succeeded)
      succeeded = check_hlds__polymorphism__all_are_const_struct_args_2_p_0(ArgVarsMCAs_15, &VarConstArgs_25);
    if (succeeded)
    {
      MR_Integer NumReuses_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 12))));
      MR_Word TypeClassInfoVarType_27;
      MR_Word BaseConstArgType_28;
      MR_Word BaseConstArg_29;
      MR_Word StructArgs_30;
      MR_Word VarInsts_31;
      MR_Integer NumArgs_32;
      MR_Word InstConsId_33;
      MR_Word StructInst_34;
      MR_Word ConstStruct_35;
      MR_Integer ConstNum_36;
      MR_Word ConstStructDb_37;
      MR_Word TypeClassInfoConstArg_38;
      MR_Word ConstConsId_39;
      MR_Word Unification_40;
      MR_Word TypeClassInfoRHS_44;
      MR_Word GoalExpr_45;
      MR_Word GoalInfo0_46;
      MR_Word NonLocals_47;
      MR_Word GoalInfo1_48;
      MR_Word TypeClassInfoVarInst_50;
      MR_Word InstMapDelta_51;
      MR_Word GoalInfo2_52;
      MR_Word GoalInfo_53;
      MR_Word Goal_54;
      MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) NumReuses_26 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Info_65_65;
      MR_Word STATE_VARIABLE_Info_68_68;
      MR_Word STATE_VARIABLE_Info_70_70;
      MR_Word Var_71;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_99;
      MR_Integer Var_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 12))));
      MR_Word Var_244;

      succeeded = (Var_64 == Var_239);
      if (succeeded)
        STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_0_62;
      else
      {
        MR_Word Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 0))));
        MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 1))));
        MR_Word Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 2))));
        MR_Word Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 3))));
        MR_Word Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 4))));
        MR_Word Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 5))));
        MR_Word Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 6))));
        MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 7))));
        MR_Word Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 8))));
        MR_Word Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 9))));
        MR_Word Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 10))));
        MR_Word Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 11))));
        MR_Integer Var_236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 13))));
        MR_Word Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 14))));
        MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_62, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_65_65 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 0) = ((MR_Box) (Var_223));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 1) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 2) = ((MR_Box) (Var_225));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 3) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 4) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 5) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 6) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 7) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 8) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 9) = ((MR_Box) (Var_232));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 10) = ((MR_Box) (Var_233));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 11) = ((MR_Box) (Var_234));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 12) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 13) = ((MR_Box) (Var_236));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 14) = ((MR_Box) (Var_237));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_65_65, 15) = ((MR_Box) (Var_238));
        }
      }
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialVarMapsSnapshot_16, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_68_68);
      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &TypeClassInfoVarType_27, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(&BaseConstArgType_28);
      {
        BaseConstArg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BaseConstArg_29, 0) = ((MR_Box) (BaseConsId_14));
        MR_hl_field(MR_mktag(1), BaseConstArg_29, 1) = ((MR_Box) (BaseConstArgType_28));
      }
      {
        StructArgs_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StructArgs_30, 0) = ((MR_Box) (BaseConstArg_29));
        MR_hl_field(MR_mktag(1), StructArgs_30, 1) = ((MR_Box) (VarConstArgs_25));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (check_hlds__polymorphism__construct_typeclass_info_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (ConstStructDb0_23));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_71, VarConstArgs_25, &VarInsts_31);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgVarsMCAs_15, &NumArgs_32);
      InstConsId_33 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_32);
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (InstConsId_33));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (VarInsts_31));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_34, 3) = ((MR_Box) (Var_75));
      }
      {
        ConstStruct_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 1) = ((MR_Box) (StructArgs_30));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 2) = ((MR_Box) (TypeClassInfoVarType_27));
        MR_hl_field(MR_mktag(0), ConstStruct_35, 3) = ((MR_Box) (StructInst_34));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_35, &ConstNum_36, ConstStructDb0_23, &ConstStructDb_37);
      Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 14))));
      succeeded = (((MR_Word) ConstStructDb_37) == ((MR_Word) Var_244));
      if (succeeded)
        *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_70_70;
      else
      {
        MR_Word Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 0))));
        MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 1))));
        MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 2))));
        MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 3))));
        MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 4))));
        MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 5))));
        MR_Word Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 6))));
        MR_Word Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 7))));
        MR_Word Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 8))));
        MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 9))));
        MR_Word Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 10))));
        MR_Word Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 11))));
        MR_Integer Var_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 12))));
        MR_Integer Var_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 13))));
        MR_Word Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_70_70, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_63 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_261));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_262));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_263));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_264));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_265));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_266));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_267));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_268));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_269));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_270));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_271));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_272));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_273));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_274));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ConstStructDb_37));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_276));
        }
      }
      {
        TypeClassInfoConstArg_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_38, 0) = ((MR_Box) (ConstNum_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *TypeClassInfoMCA_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoConstArg_38));
      }
      {
        ConstConsId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstConsId_39, 0) = ((MR_Box) ((MR_Unsigned) 22U));
        MR_hl_field(MR_mktag(3), ConstConsId_39, 1) = ((MR_Box) (ConstNum_36));
      }
      {
        Unification_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_40, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_40, 1) = ((MR_Box) (ConstConsId_39));
        MR_hl_field(MR_mktag(0), Unification_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_40, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_40, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 0) = ((MR_Box) (ConstConsId_39));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 1) = ((MR_Box) (TypeClassInfoRHS_44));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 3) = ((MR_Box) (Unification_40));
        MR_hl_field(MR_mktag(1), GoalExpr_45, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_46);
      NonLocals_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeClassInfoVar_17);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_47, GoalInfo0_46, &GoalInfo1_48);
      {
        TypeClassInfoVarInst_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_50, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_8[2])));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (TypeClassInfoVarInst_50));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_51 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_99);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_51, GoalInfo1_48, &GoalInfo2_52);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_52, &GoalInfo_53);
      {
        Goal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_54, 0) = ((MR_Box) (GoalExpr_45));
        MR_hl_field(MR_mktag(0), Goal_54, 1) = ((MR_Box) (GoalInfo_53));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AllGoals_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_54));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ArgVars_56;
      MR_Word AllArgVars_57;
      MR_Word ArgModes_59;
      MR_Word ArgInsts_60;
      MR_Word InstResults_61;
      MR_Word Var_119;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_132;
      MR_Word Var_135;
      MR_Integer NumArgs_137;
      MR_Word InstConsId_138;
      MR_Word Unification_139;
      MR_Word TypeClassInfoRHS_143;
      MR_Word GoalExpr_144;
      MR_Word GoalInfo0_145;
      MR_Word NonLocals_146;
      MR_Word GoalInfo1_147;
      MR_Word TypeClassInfoInst_148;
      MR_Word TypeClassInfoVarInst_149;
      MR_Word InstMapDelta_150;
      MR_Word GoalInfo2_151;
      MR_Word GoalInfo_152;
      MR_Word Goal_153;
      MR_Word _TypeClassInfoVarType_55;

      *TypeClassInfoMCA_18 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &_TypeClassInfoVarType_55, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ArgVarsMCAs_15, &ArgVars_56);
      {
        AllArgVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AllArgVars_57, 0) = ((MR_Box) (BaseVar_13));
        MR_hl_field(MR_mktag(1), AllArgVars_57, 1) = ((MR_Box) (ArgVars_56));
      }
      {
        TypeClassInfoRHS_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_143, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_143, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_143, 2) = ((MR_Box) (AllArgVars_57));
      }
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), AllArgVars_57, &NumArgs_137);
      mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgs_137, ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1])), &ArgModes_59);
      {
        Unification_139 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_139, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_139, 2) = ((MR_Box) (AllArgVars_57));
        MR_hl_field(MR_mktag(0), Unification_139, 3) = ((MR_Box) (ArgModes_59));
        MR_hl_field(MR_mktag(0), Unification_139, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Unification_139, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_139, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_144, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_144, 1) = ((MR_Box) (TypeClassInfoRHS_143));
        MR_hl_field(MR_mktag(1), GoalExpr_144, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_144, 3) = ((MR_Box) (Unification_139));
        MR_hl_field(MR_mktag(1), GoalExpr_144, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_145);
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (AllArgVars_57));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_119, &NonLocals_146);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_146, GoalInfo0_145, &GoalInfo1_147);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgs_137, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[24]))), &ArgInsts_60);
      InstConsId_138 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_137);
      Var_124 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      }
      {
        InstResults_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstResults_61, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(MR_mktag(1), InstResults_61, 1) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(1), InstResults_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (InstConsId_138));
        MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (ArgInsts_60));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoInst_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_148, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_148, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_148, 2) = ((MR_Box) (InstResults_61));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_148, 3) = ((MR_Box) (Var_129));
      }
      {
        TypeClassInfoVarInst_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_149, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_149, 1) = ((MR_Box) (TypeClassInfoInst_148));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (TypeClassInfoVarInst_149));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_150 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_132);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_150, GoalInfo1_147, &GoalInfo2_151);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_151, &GoalInfo_152);
      {
        Goal_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_153, 0) = ((MR_Box) (GoalExpr_144));
        MR_hl_field(MR_mktag(0), Goal_153, 1) = ((MR_Box) (GoalInfo_152));
      }
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Goal_153));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrevGoals_19, Var_135);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructVarMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 11))));
    MR_Word InstanceIdConstArg_13;
    MR_Word OldVar_14;
    MR_Box conv0_OldVar_14;

    {
      InstanceIdConstArg_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceIdConstArg_13, 0) = ((MR_Box) (InstanceIdConstNum_8));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ConstStructVarMap0_12, ((MR_Box) (InstanceIdConstArg_13)), &conv0_OldVar_14);
    if (succeeded)
    {
      OldVar_14 = ((MR_Word) (conv0_OldVar_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 12))));
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) NumReuses_15 + (MR_Unsigned) 1);
      MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 12))));

      succeeded = (Var_31 == Var_131);
      if (succeeded)
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      else
      {
        MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
        MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 1))));
        MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
        MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
        MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 5))));
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
        MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 7))));
        MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 8))));
        MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 9))));
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 10))));
        MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 11))));
        MR_Integer Var_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 13))));
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 14))));
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_29, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_30 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_130));
        }
      }
      *Var_9 = OldVar_14;
      *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ConstStructVarMap_17;
      MR_Word ConsId_18;
      MR_Word RHS_19;
      MR_Word Unification_20;
      MR_Word GoalExpr_24;
      MR_Word NonLocals_25;
      MR_Word InstmapDelta_26;
      MR_Word GoalInfo_27;
      MR_Word Goal_28;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word _VarType_16;
      MR_Word Var_136;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, Var_9, &_VarType_16, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (InstanceIdConstArg_13)), ((MR_Box) (*Var_9)), ConstStructVarMap0_12, &ConstStructVarMap_17);
      Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 11))));
      succeeded = (((MR_Word) ConstStructVarMap_17) == ((MR_Word) Var_136));
      if (succeeded)
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_35_35;
      else
      {
        MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
        MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
        MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
        MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
        MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 5))));
        MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 6))));
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 7))));
        MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 8))));
        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 9))));
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 10))));
        MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 12))));
        MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 13))));
        MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 14))));
        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_30 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ConstStructVarMap_17));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_168));
        }
      }
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 22U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (InstanceIdConstNum_8));
      }
      {
        RHS_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_19, 0) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(1), RHS_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_20, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_20, 1) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(0), Unification_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (RHS_19));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (Unification_20));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
      }
      NonLocals_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_25, InstmapDelta_26, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_27);
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_28, 0) = ((MR_Box) (GoalExpr_24));
        MR_hl_field(MR_mktag(0), Goal_28, 1) = ((MR_Box) (GoalInfo_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 14))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_proof_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_5, (MR_Integer) 6))));
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_rtti_varmaps_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_5, (MR_Integer) 3))));
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word OldTypeClassInfoVar_11;
    MR_Word RttiVarMaps0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));

    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_10, Constraint_7, &OldTypeClassInfoVar_11);
    if (succeeded)
    {
      *TypeClassInfoVar_8 = OldTypeClassInfoVar_11;
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_16_16;
      MR_Word _TypeClassInfoVarType_12;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, TypeClassInfoVar_8, &_TypeClassInfoVarType_12, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
      switch (RecordLocns_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_16_16;
          break;
        case (MR_Integer) 0:
          check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0(Constraint_7, *TypeClassInfoVar_8, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_14);
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word VarSet0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
    MR_Word VarTypes0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
    MR_Word RttiVarMaps0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
    MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
    MR_String ClassNameString_17;
    MR_Word VarSet1_18;
    MR_String Name_19;
    MR_Word VarSet_20;
    MR_Word VarTypes_21;
    MR_Word RttiVarMaps_22;
    MR_Word PrivateBuiltin_85;
    MR_Word TypeclassInfoTypeName_86;
    MR_Word Var_99;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Integer Var_111;
    MR_Integer Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Integer Var_127;
    MR_Integer Var_128;
    MR_Word Var_129;
    MR_Word Var_130;

    ClassNameString_17 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, VarSet0_12, &VarSet1_18);
    switch (VarKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "BaseTypeClassInfo_for_", ClassNameString_17);
        break;
      case (MR_Integer) 1:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_17);
        break;
    }
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9, Name_19, VarSet1_18, &VarSet_20);
    PrivateBuiltin_85 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_86, 0) = ((MR_Box) (PrivateBuiltin_85));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_86, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *VarType_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeclassInfoTypeName_86));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__vartypes__add_var_type_4_p_0(*Var_9, *VarType_10, VarTypes0_13, &VarTypes_21);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_14, &RttiVarMaps_22);
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7))));
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9))));
    Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10))));
    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11))));
    Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12))));
    Var_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13))));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14))));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15))));
    Var_115 = Var_99;
    Var_116 = VarSet_20;
    Var_119 = Var_103;
    Var_120 = Var_104;
    Var_121 = Var_105;
    Var_122 = Var_106;
    Var_123 = Var_107;
    Var_124 = Var_108;
    Var_125 = Var_109;
    Var_126 = Var_110;
    Var_127 = Var_111;
    Var_128 = Var_112;
    Var_129 = Var_113;
    Var_130 = Var_114;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_130));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_45;

    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3890__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_45);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_45));
  }
}

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0_s * env_ptr = (struct check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__conv1_LambdaHeadVar__1_41));
    ((env_ptr)->check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont)((env_ptr)->check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0_s env;

    (env).check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont = cont;
    (env).check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3871__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2_env_0__conv1_LambdaHeadVar__1_41, check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_1, &env);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0(
  MR_Word Constraint_5,
  MR_Word ExtraHeadVar_6,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 0))));
    MR_Word ClassName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_5, (MR_Integer) 0))));
    MR_Word ClassTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_5, (MR_Integer) 1))));
    MR_Integer ClassArity_11;
    MR_Word ClassId_12;
    MR_Word ClassTable_13;
    MR_Word ClassDefn_14;
    MR_Word SuperClasses_15;
    MR_Integer NumSuperClasses_16;
    MR_Integer First_17;
    MR_Integer Last_18;
    MR_Word IndexedClassTypes_19;
    MR_Word RttiVarMaps0_20;
    MR_Word NewTVarAndIndex_21;
    MR_Word NewClassTypeVars_29;
    MR_Word MakeEntry_30;
    MR_Word RttiVarMaps_36;
    MR_Word Var_40;
    MR_Box conv0_ClassDefn_14;
    MR_Box conv3_RttiVarMaps_36;
    MR_Word Var_113;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassTypes_10, &ClassArity_11);
    {
      ClassId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_12, 0) = ((MR_Box) (ClassName_9));
      MR_hl_field(MR_mktag(0), ClassId_12, 1) = ((MR_Box) (ClassArity_11));
    }
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_8, &ClassTable_13);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_13, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_14);
    ClassDefn_14 = ((MR_Word) (conv0_ClassDefn_14));
    SuperClasses_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_15, &NumSuperClasses_16);
    First_17 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_16 + (MR_Unsigned) 1);
    Last_18 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_16 + (MR_Unsigned) ClassArity_11);
    Var_40 = mercury__list__f_46_46_2_f_0(First_17, Last_18);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ClassTypes_10, Var_40, &IndexedClassTypes_19);
    RttiVarMaps0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 3))));
    {
      NewTVarAndIndex_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewTVarAndIndex_21, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), NewTVarAndIndex_21, 1) = ((MR_Box) (check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_2));
      MR_hl_field(MR_mktag(0), NewTVarAndIndex_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), NewTVarAndIndex_21, 3) = ((MR_Box) (IndexedClassTypes_19));
      MR_hl_field(MR_mktag(0), NewTVarAndIndex_21, 4) = ((MR_Box) (RttiVarMaps0_20));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&check_hlds__polymorphism_scalar_common_2[7]), NewTVarAndIndex_21, &NewClassTypeVars_29);
    {
      MakeEntry_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MakeEntry_30, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), MakeEntry_30, 1) = ((MR_Box) (check_hlds__polymorphism__record_constraint_type_info_locns_4_p_0_3));
      MR_hl_field(MR_mktag(0), MakeEntry_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MakeEntry_30, 3) = ((MR_Box) (ExtraHeadVar_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[7]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), MakeEntry_30, NewClassTypeVars_29, ((MR_Box) (RttiVarMaps0_20)), &conv3_RttiVarMaps_36);
    RttiVarMaps_36 = ((MR_Word) (conv3_RttiVarMaps_36));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 3))));
    succeeded = (((MR_Word) RttiVarMaps_36) == ((MR_Word) Var_113));
    if (succeeded)
      *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
    else
    {
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 0))));
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 1))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 2))));
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 4))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 5))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 6))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 7))));
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 8))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 9))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 10))));
      MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 11))));
      MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 12))));
      MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 13))));
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 14))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_38 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_36));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_137));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_145));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__assign_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.assign_var_list\'/3", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.assign_var_list\'/3", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Var2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Vars2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Goal_18;
        MR_Word Goals_19;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (Var_21)), ((MR_Box) (Var2_16)));
        if (succeeded)
          Goal_18 = hlds__make_goal__true_goal_0_f_0();
        else
        {
          MR_Word Context_25;
          MR_Word Var_26;

          mercury__term__context_init_1_p_0(&Context_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var2_16));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var_21, Var_26, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_18);
        }
        check_hlds__polymorphism__assign_var_list_3_p_0(Var_20, Vars2_17, &Goals_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_12;
    MR_Word PredModule_13;
    MR_String PredName_14;
    MR_Integer PredArity_15;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo_12);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
    PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_12);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_13, PredName_14, PredArity_15);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
    }
    else
    {
      MR_Word PredSafeToContinue_36;

      check_hlds__polymorphism__polymorphism_process_pred_6_p_0(PredId_8, &PredSafeToContinue_36, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
      switch (PredSafeToContinue_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_SafeToContinue_17 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_9;

    check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_9));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0(
  MR_Word ExistsCastPredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word ClassMap_6;
    MR_Word ModuleName_7;
    MR_Word ClassIds0_8;
    MR_Word Globals_9;
    MR_Word TypeSpec_10;
    MR_Word ClassIds_11;
    MR_Word ClassDefns_12;
    MR_Word STATE_VARIABLE_ModuleInfo_16_16;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_16_16;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_14;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[25]), ExistsCastPredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv1_STATE_VARIABLE_ModuleInfo_16_16);
    STATE_VARIABLE_ModuleInfo_16_16 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_16_16));
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_16_16, &ClassMap_6);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_16_16, &ModuleName_7);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassMap_6, &ClassIds0_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_16_16, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 391, &TypeSpec_10);
    switch (TypeSpec_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[4]));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleName_7));
          }
          mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Var_18, ClassIds0_8, &ClassIds_11);
        }
        break;
      case (MR_Integer) 1:
        ClassIds_11 = ClassIds0_8;
        break;
    }
    mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassIds_11, ClassMap_6, &ClassDefns_12);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[26]), ClassDefns_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_16_16)), &conv3_STATE_VARIABLE_ModuleInfo_14);
    *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_14));
  }
}

void MR_CALL 
check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(
  MR_Word Type_12,
  MR_Word TypeCtor_13,
  MR_Word * TypeCtorInfoVar_14,
  MR_Word * ConsId_15,
  MR_Word * TypeCtorInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_11_p_0(TypeCtor_13, TypeCtorInfoVar_14, ConsId_15, TypeCtorInfoGoal_16, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
}

void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_95_91_49_93_95_48_11_p_0(
  MR_Word TypeCtor_13,
  MR_Word * TypeCtorInfoVar_14,
  MR_Word * ConsId_15,
  MR_Word * TypeCtorInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  {
    MR_Word TypeInfoRHS_42;
    MR_Word Unification_43;
    MR_Word Unify_47;
    MR_Word NonLocals_48;
    MR_Word InstmapDelta_49;
    MR_Word GoalInfo_50;
    MR_Integer VarNum_84;
    MR_String VarNumStr_85;
    MR_String Name_87;
    MR_Word STATE_VARIABLE_VarSet_26_88;
    MR_Word Var_91;

    *ConsId_15 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_13);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorInfoVar_14, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_88);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, &VarNum_84);
    mercury__string__int_to_string_2_p_0(VarNum_84, &VarNumStr_85);
    *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
    Name_87 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_85);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, Name_87, STATE_VARIABLE_VarSet_26_88, STATE_VARIABLE_VarSet_21);
    Var_91 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*TypeCtorInfoVar_14, Var_91, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
    {
      TypeInfoRHS_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_42, 0) = ((MR_Box) (*ConsId_15));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_43, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
      MR_hl_field(MR_mktag(0), Unification_43, 1) = ((MR_Box) (*ConsId_15));
      MR_hl_field(MR_mktag(0), Unification_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_43, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_43, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_43, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_43, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_47, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
      MR_hl_field(MR_mktag(1), Unify_47, 1) = ((MR_Box) (TypeInfoRHS_42));
      MR_hl_field(MR_mktag(1), Unify_47, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
      MR_hl_field(MR_mktag(1), Unify_47, 3) = ((MR_Box) (Unification_43));
      MR_hl_field(MR_mktag(1), Unify_47, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
    }
    NonLocals_48 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14);
    InstmapDelta_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_14);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_48, InstmapDelta_49, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_50);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorInfoGoal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_50));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__fix_undetermined_mode_lambda_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word RHS0_7,
  MR_Word * MaybeRHS_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 2))));
    MR_Word LambdaVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 3))));
    MR_Word LambdaGoal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 6))));
    MR_Word LambdaGoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_17, (MR_Integer) 1))));
    MR_Word LambdaGoalList0_20;
    MR_Word PredId_30;
    MR_Word LambdaGoal_33;
    MR_Word Context_34;
    MR_Word PredInfo_35;
    MR_Word ProcInfo_36;
    MR_Word ArgModes_56;
    MR_Integer NumArgModes_57;
    MR_Integer NumLambdaVars_58;
    MR_Word LambdaModes_59;
    MR_Word MaybeDet_60;
    MR_Integer Var_69;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 0)));
    MR_Word LambdaGoalButLast0_21;
    MR_Word LastGoalInfo0_24;
    MR_Word PredId0_25;
    MR_Word Args0_27;
    MR_Word MaybeCallUnifyContext0_28;
    MR_Word QualifiedPName0_29;
    MR_Word LastGoal0_22;
    MR_Word LastGoalExpr0_23;
    MR_Word Var_42;
    MR_Box conv0_LastGoal0_22;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(LambdaGoal0_17, &LambdaGoalList0_20);
    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalList0_20, &LambdaGoalButLast0_21, &conv0_LastGoal0_22);
    if (succeeded)
    {
      LastGoal0_22 = ((MR_Word) (conv0_LastGoal0_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      LastGoalExpr0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastGoal0_22, (MR_Integer) 0))));
      LastGoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastGoal0_22, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) LastGoalExpr0_23)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 0))));
        Args0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 2))));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 3))) & (MR_Integer) 1);
        MaybeCallUnifyContext0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 4))));
        QualifiedPName0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 5))));
        succeeded = (Var_42 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word LastGoalExpr_31;
      MR_Word LastGoal_32;
      MR_Word Var_44;
      MR_Word Var_45;

      PredId_30 = PredId0_25;
      {
        LastGoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 0) = ((MR_Box) (PredId0_25));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 1) = ((MR_Box) (ProcId_6));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 2) = ((MR_Box) (Args0_27));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 4) = ((MR_Box) (MaybeCallUnifyContext0_28));
        MR_hl_field(MR_mktag(2), LastGoalExpr_31, 5) = ((MR_Box) (QualifiedPName0_29));
      }
      {
        LastGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LastGoal_32, 0) = ((MR_Box) (LastGoalExpr_31));
        MR_hl_field(MR_mktag(0), LastGoal_32, 1) = ((MR_Box) (LastGoalInfo0_24));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (LastGoal_32));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalButLast0_21, Var_45);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_44, LambdaGoalInfo_19, &LambdaGoal_33);
      Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(LastGoalInfo0_24);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.fix_undetermined_mode_lambda_goal\'/4", (MR_String) "unmatched lambda goal");
        return;
      }
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_30, ProcId_6, &PredInfo_35, &ProcInfo_36);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_36, &ArgModes_56);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_56, &NumArgModes_57);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), LambdaVars_14, &NumLambdaVars_58);
    Var_69 = (MR_Integer) ((MR_Unsigned) NumArgModes_57 - (MR_Unsigned) NumLambdaVars_58);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_69, ArgModes_56, &LambdaModes_59);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_36, &MaybeDet_60);
    if ((MaybeDet_60 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Specs_41;
      MR_Word PredOrFunc_62;
      MR_String PredOrFuncStr_63;
      MR_Word PredModuleName_64;
      MR_String PredName_65;
      MR_Word PredSymName_66;
      MR_Word Pieces_67;
      MR_Word Spec_68;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_35, &PredOrFunc_62);
      PredOrFuncStr_63 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_62);
      hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_35, &PredModuleName_64);
      hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_35, &PredName_65);
      {
        PredSymName_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_66, 0) = ((MR_Box) (PredModuleName_64));
        MR_hl_field(MR_mktag(1), PredSymName_66, 1) = ((MR_Box) (PredName_65));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PredOrFuncStr_63));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (PredSymName_66));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[19])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
      }
      {
        Pieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), Pieces_67, 1) = ((MR_Box) (Var_72));
      }
      {
        Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.polymorphism.lambda_modes_and_det\'/5"));
        MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(MR_mktag(1), Spec_68, 3) = ((MR_Box) (Context_34));
        MR_hl_field(MR_mktag(1), Spec_68, 4) = ((MR_Box) (Pieces_67));
      }
      {
        Specs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_41, 0) = ((MR_Box) (Spec_68));
        MR_hl_field(MR_mktag(1), Specs_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRHS_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_41));
      }
    }
    else
    {
      MR_Word LambdaDet_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_60, (MR_Integer) 0))));
      MR_Word RHS_40;

      {
        RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RHS_40, 0) = (MR_Box) (packed_word_0);
        MR_hl_field(MR_mktag(2), RHS_40, 1) = NULL;
        MR_hl_field(MR_mktag(2), RHS_40, 2) = ((MR_Box) (ArgVars0_13));
        MR_hl_field(MR_mktag(2), RHS_40, 3) = ((MR_Box) (LambdaVars_14));
        MR_hl_field(MR_mktag(2), RHS_40, 4) = ((MR_Box) (LambdaModes_59));
        MR_hl_field(MR_mktag(2), RHS_40, 5) = (MR_Box) ((MR_Unsigned) (LambdaDet_39));
        MR_hl_field(MR_mktag(2), RHS_40, 6) = ((MR_Box) (LambdaGoal_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeRHS_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHS_40));
      }
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(
  MR_Word Purity_17,
  MR_Word X0_19,
  MR_Word PredId_20,
  MR_Integer ProcId_21,
  MR_Word ArgVars0_22,
  MR_Word PredArgTypes_23,
  MR_Word UnifyContext_24,
  MR_Word GoalInfo0_25,
  MR_Word Context_26,
  MR_Word ModuleInfo0_27,
  MR_Word * MaybeRHS_28,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word STATE_VARIABLE_VarTypes_0_61,
  MR_Word * STATE_VARIABLE_VarTypes_62)
{
  {
    MR_Word LambdaVars_31;
    MR_Word Args_32;
    MR_Word PredInfo_33;
    MR_Word ProcInfo_34;
    MR_Word PredModule_35;
    MR_String PredName_36;
    MR_Word QualifiedPName_37;
    MR_Word ConsId_38;
    MR_Word RHS0_39;
    MR_Word CallUnifyContext_40;
    MR_Word LambdaGoalExpr_41;
    MR_Word NonLocals_42;
    MR_Word OutsideVars_43;
    MR_Word InsideVars_44;
    MR_Word LambdaNonLocals_45;
    MR_Word GoalId_46;
    MR_Word DummyInstMapDelta_47;
    MR_Word LambdaGoalInfo0_49;
    MR_Word LambdaGoalInfo_50;
    MR_Word LambdaGoal_51;
    MR_Word MaybeLambdaModesDet_52;
    MR_Integer Var_65;
    MR_Word Var_66;
    MR_Word Var_69;

    check_hlds__polymorphism__create_fresh_vars_6_p_0(PredArgTypes_23, &LambdaVars_31, STATE_VARIABLE_VarSet_0_59, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_VarTypes_0_61, STATE_VARIABLE_VarTypes_62);
    Args_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgVars0_22, LambdaVars_31);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_27, PredId_20, ProcId_21, &PredInfo_33, &ProcInfo_34);
    PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_33);
    PredName_36 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_33);
    {
      QualifiedPName_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedPName_37, 0) = ((MR_Box) (PredModule_35));
      MR_hl_field(MR_mktag(1), QualifiedPName_37, 1) = ((MR_Box) (PredName_36));
    }
    Var_65 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgVars0_22);
    Var_66 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_38, 1) = ((MR_Box) (QualifiedPName_37));
      MR_hl_field(MR_mktag(3), ConsId_38, 2) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(3), ConsId_38, 3) = ((MR_Box) (Var_66));
    }
    {
      RHS0_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS0_39, 0) = ((MR_Box) (ConsId_38));
      MR_hl_field(MR_mktag(1), RHS0_39, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS0_39, 2) = ((MR_Box) (ArgVars0_22));
    }
    {
      CallUnifyContext_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallUnifyContext_40, 0) = ((MR_Box) (X0_19));
      MR_hl_field(MR_mktag(0), CallUnifyContext_40, 1) = ((MR_Box) (RHS0_39));
      MR_hl_field(MR_mktag(0), CallUnifyContext_40, 2) = ((MR_Box) (UnifyContext_24));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (CallUnifyContext_40));
    }
    {
      LambdaGoalExpr_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 0) = ((MR_Box) (PredId_20));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 1) = ((MR_Box) (ProcId_21));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 2) = ((MR_Box) (Args_32));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 4) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(2), LambdaGoalExpr_41, 5) = ((MR_Box) (QualifiedPName_37));
    }
    NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_25);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_31, NonLocals_42, &OutsideVars_43);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_32, &InsideVars_44);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_43, InsideVars_44, &LambdaNonLocals_45);
    GoalId_46 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_25);
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_47);
    hlds__hlds_goal__goal_info_init_6_p_0(LambdaNonLocals_45, DummyInstMapDelta_47, (MR_Integer) 6, Purity_17, Context_26, &LambdaGoalInfo0_49);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_46, LambdaGoalInfo0_49, &LambdaGoalInfo_50);
    {
      LambdaGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaGoal_51, 0) = ((MR_Box) (LambdaGoalExpr_41));
      MR_hl_field(MR_mktag(0), LambdaGoal_51, 1) = ((MR_Box) (LambdaGoalInfo_50));
    }
    check_hlds__polymorphism__lambda_modes_and_det_5_p_0(PredInfo_33, ProcInfo_34, Context_26, LambdaVars_31, &MaybeLambdaModesDet_52);
    if (((MR_tag((MR_Word) MaybeLambdaModesDet_52)) == (MR_Integer) 0))
    {
      MR_Word Specs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLambdaModesDet_52, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRHS_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_58));
      }
    }
    else
    {
      MR_Word LambdaModes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaModesDet_52, (MR_Integer) 0))));
      MR_Word LambdaDet_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaModesDet_52, (MR_Integer) 1))));
      MR_Word PredOrFunc_55;
      MR_Word RHS_57;

      PredOrFunc_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_33);
      {
        RHS_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RHS_57, 0) = (MR_Box) (((((MR_Unsigned) (Purity_17) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (PredOrFunc_55)))));
        MR_hl_field(MR_mktag(2), RHS_57, 1) = NULL;
        MR_hl_field(MR_mktag(2), RHS_57, 2) = ((MR_Box) (ArgVars0_22));
        MR_hl_field(MR_mktag(2), RHS_57, 3) = ((MR_Box) (LambdaVars_31));
        MR_hl_field(MR_mktag(2), RHS_57, 4) = ((MR_Box) (LambdaModes_53));
        MR_hl_field(MR_mktag(2), RHS_57, 5) = (MR_Box) ((MR_Unsigned) (LambdaDet_54));
        MR_hl_field(MR_mktag(2), RHS_57, 6) = ((MR_Box) (LambdaGoal_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeRHS_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHS_57));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__create_fresh_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Vars_16;
    MR_Word STATE_VARIABLE_VarSet_23_23;
    MR_Word STATE_VARIABLE_VarTypes_24_24;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_15, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_23_23);
    hlds__vartypes__add_var_type_4_p_0(Var_15, Type_13, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_24_24);
    check_hlds__polymorphism__create_fresh_vars_6_p_0(Types_14, &Vars_16, STATE_VARIABLE_VarSet_23_23, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_24_24, STATE_VARIABLE_VarTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_16));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__lambda_modes_and_det_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Context_8,
  MR_Word LambdaVars_9,
  MR_Word * MaybeResult_10)
{
  {
    MR_Word ArgModes_11;
    MR_Integer NumArgModes_12;
    MR_Integer NumLambdaVars_13;
    MR_Word LambdaModes_14;
    MR_Word MaybeDet_15;
    MR_Integer Var_24;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &ArgModes_11);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_11, &NumArgModes_12);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), LambdaVars_9, &NumLambdaVars_13);
    Var_24 = (MR_Integer) ((MR_Unsigned) NumArgModes_12 - (MR_Unsigned) NumLambdaVars_13);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_24, ArgModes_11, &LambdaModes_14);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_7, &MaybeDet_15);
    if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredOrFunc_17;
      MR_String PredOrFuncStr_18;
      MR_Word PredModuleName_19;
      MR_String PredName_20;
      MR_Word PredSymName_21;
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_46;

      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_6, &PredOrFunc_17);
      PredOrFuncStr_18 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_17);
      hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_6, &PredModuleName_19);
      hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &PredName_20);
      {
        PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_21, 0) = ((MR_Box) (PredModuleName_19));
        MR_hl_field(MR_mktag(1), PredSymName_21, 1) = ((MR_Box) (PredName_20));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (PredOrFuncStr_18));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (PredSymName_21));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[19])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_27));
      }
      {
        Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.polymorphism.lambda_modes_and_det\'/5"));
        MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeResult_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      }
    }
    else
    {
      MR_Word Det_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_15, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResult_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaModes_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Det_16));
      }
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__build_type_info_type_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeInfoType_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_3, &Var_5, &Var_6);
    if (succeeded)
      *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    else
    {
      MR_Word Args_8;
      MR_Word _Ctor_7;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &_Ctor_7, &Args_8);
      if (succeeded)
        if ((Args_8 == (MR_Word) ((MR_Unsigned) 0U)))
          *TypeInfoType_4 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
        else
          *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      else
        *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism__type_is_type_info_or_ctor_type_1_p_0(
  MR_Word TypeInfoType_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_11;
    MR_Word TypeCtor_3;
    MR_Word ModuleName_4;
    MR_String TypeName_5;
    MR_Word Var_7;
    MR_Integer Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeInfoType_2, &TypeCtor_3, &Var_9);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_9)));
      if (succeeded)
      {
        Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
        succeeded = (Var_8 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
          if (succeeded)
          {
            ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
            TypeName_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1))));
            Var_10 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_10);
            if (succeeded)
            {
              if ((strcmp(TypeName_5, (MR_String) "type_info") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(TypeName_5, (MR_String) "type_ctor_info") == 0))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism__type_is_typeclass_info_1_p_0(
  MR_Word TypeClassInfoType_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_3;
    MR_Word ModuleName_4;
    MR_Word Var_5;
    MR_String Var_6;
    MR_Integer Var_7;
    MR_Word Var_8;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(TypeClassInfoType_2, &TypeCtor_3);
    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
      Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
        Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
        succeeded = (strcmp(Var_6, (MR_String) "typeclass_info") == 0);
        if (succeeded)
        {
          succeeded = (Var_7 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_8 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_8);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism__build_typeclass_info_type_2_p_0(
  MR_Word _Constraint_3,
  MR_Word * DictionaryType_4)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(DictionaryType_4);
}

void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word * DictionaryType_4)
{
  {
    MR_Word PrivateBuiltin_5;
    MR_Word TypeclassInfoTypeName_6;

    PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_6, 0) = ((MR_Box) (PrivateBuiltin_5));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_6, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *DictionaryType_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeclassInfoTypeName_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__poly_info_extract_7_p_0(
  MR_Word Info_8,
  MR_Word * Specs_9,
  MR_Word STATE_VARIABLE_PredInfo_0_27,
  MR_Word * STATE_VARIABLE_PredInfo_28,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
  {
    MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    MR_Word VarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
    MR_Word RttiVarMaps_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
    MR_Word TypeVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
    MR_Word TypeVarKinds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))));
    MR_Word ConstStructDb_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 14))));
    MR_Word STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ProcInfo_34_34;
    MR_Word STATE_VARIABLE_ProcInfo_35_35;
    MR_Word STATE_VARIABLE_PredInfo_37_37;

    *Specs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 15))));
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_26, STATE_VARIABLE_ModuleInfo_32_32, STATE_VARIABLE_ModuleInfo_31);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_13, STATE_VARIABLE_ProcInfo_0_29, &STATE_VARIABLE_ProcInfo_34_34);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_14, STATE_VARIABLE_ProcInfo_34_34, &STATE_VARIABLE_ProcInfo_35_35);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_ProcInfo_35_35, STATE_VARIABLE_ProcInfo_30);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_16, STATE_VARIABLE_PredInfo_0_27, &STATE_VARIABLE_PredInfo_37_37);
    hlds__hlds_pred__pred_info_set_tvar_kind_map_3_p_0(TypeVarKinds_17, STATE_VARIABLE_PredInfo_37_37, STATE_VARIABLE_PredInfo_28);
  }
}

void MR_CALL 
check_hlds__polymorphism__create_poly_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * PolyInfo_8)
{
  {
    MR_Word TypeVarSet_9;
    MR_Word TypeVarKinds_10;
    MR_Word ProofMap_11;
    MR_Word ConstraintMap_12;
    MR_Word VarSet_13;
    MR_Word VarTypes_14;
    MR_Word RttiVarMaps_15;
    MR_Word TypeInfoVarMap_16;
    MR_Word TypeClassInfoMap_17;
    MR_Word IntConstMap_18;
    MR_Word ConstStructVarMap_19;
    MR_Word ConstStructDb_22;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TypeVarSet_9);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_6, &TypeVarKinds_10);
    hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_6, &ProofMap_11);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_6, &ConstraintMap_12);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_7, &VarSet_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_14);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_7, &RttiVarMaps_15);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), &TypeInfoVarMap_16);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), &TypeClassInfoMap_17);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), &IntConstMap_18);
    mercury__map__init_1_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), &ConstStructVarMap_19);
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *PolyInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeVarSet_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TypeVarKinds_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ProofMap_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ConstraintMap_12));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeInfoVarMap_16));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TypeClassInfoMap_17));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntConstMap_18));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ConstStructVarMap_19));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ConstStructDb_22));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * ExtraVar_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word ExtraVarMCA_12;

    check_hlds__polymorphism__polymorphism_do_make_type_info_var_6_p_0(Type_7, Context_8, &ExtraVarMCA_12, ExtraGoals_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
    *ExtraVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraVarMCA_12, (MR_Integer) 0))));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_do_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * VarMCA_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_12;
    MR_Word TypeArgs_13;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_7, &TypeCtor_12, &TypeArgs_13);
    if (succeeded)
    {
      MR_Word TypeInfoVarMap0_57;
      MR_Word OldTypeInfoVarMCA_59;
      MR_Word TypeInfo_38_75;
      MR_Word TypeInfo_39_76;
      MR_Word TypeCtorVarMap0_58;
      MR_Box conv0_TypeCtorVarMap0_58;
      MR_Box conv1_OldTypeInfoVarMCA_59;

      check_hlds__polymorphism__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_34, &TypeInfoVarMap0_57);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeInfoVarMap0_57, ((MR_Box) (TypeCtor_12)), &conv0_TypeCtorVarMap0_58);
      if (succeeded)
      {
        TypeCtorVarMap0_58 = ((MR_Word) (conv0_TypeCtorVarMap0_58));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeInfo_38_75 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]);
        TypeInfo_39_76 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]);
        succeeded = mercury__map__search_3_p_0(TypeInfo_38_75, TypeInfo_39_76, TypeCtorVarMap0_58, ((MR_Box) (TypeArgs_13)), &conv1_OldTypeInfoVarMCA_59);
        if (succeeded)
        {
          OldTypeInfoVarMCA_59 = ((MR_Word) (conv1_OldTypeInfoVarMCA_59));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Integer NumReuses_60;
        MR_Integer Var_67;

        check_hlds__polymorphism__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_34, &NumReuses_60);
        Var_67 = (MR_Integer) ((MR_Unsigned) NumReuses_60 + (MR_Unsigned) 1);
        check_hlds__polymorphism__poly_info_set_num_reuses_3_p_0(Var_67, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        *VarMCA_9 = OldTypeInfoVarMCA_59;
        *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word TypeInfoVar_61;
        MR_Word TypeInfoConstArg_62;
        MR_Word TypeInfoVarMap1_63;
        MR_Word TypeInfoVarMap_66;
        MR_Word STATE_VARIABLE_Info_33_70;
        MR_Word TypeCtorVarMap1_64;
        MR_Box conv2_TypeCtorVarMap1_64;

        check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0(Type_7, TypeCtor_12, TypeArgs_13, (MR_Integer) 1, Context_8, &TypeInfoVar_61, &TypeInfoConstArg_62, ExtraGoals_10, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_33_70);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *VarMCA_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_61));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_62));
        }
        check_hlds__polymorphism__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_70, &TypeInfoVarMap1_63);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeInfoVarMap1_63, ((MR_Box) (TypeCtor_12)), &conv2_TypeCtorVarMap1_64);
        if (succeeded)
        {
          TypeCtorVarMap1_64 = ((MR_Word) (conv2_TypeCtorVarMap1_64));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeCtorVarMap_65;

          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (TypeArgs_13)), ((MR_Box) (*VarMCA_9)), TypeCtorVarMap1_64, &TypeCtorVarMap_65);
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (TypeCtorVarMap_65)), TypeInfoVarMap1_63, &TypeInfoVarMap_66);
        }
        else
        {
          MR_Word TypeCtorVarMap_72;

          TypeCtorVarMap_72 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (TypeArgs_13)), ((MR_Box) (*VarMCA_9)));
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (TypeCtorVarMap_72)), TypeInfoVarMap1_63, &TypeInfoVarMap_66);
        }
        check_hlds__polymorphism__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_66, STATE_VARIABLE_Info_33_70, STATE_VARIABLE_Info_35);
      }
    }
    else
      switch (MR_tag((MR_Word) Type_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0))));
            MR_Word TypeInfoLocn_32;
            MR_Word Var_33;
            MR_Word STATE_VARIABLE_Info_38_38;

            check_hlds__polymorphism__get_type_info_locn_4_p_0(TypeVar_30, &TypeInfoLocn_32, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_38_38);
            check_hlds__polymorphism__get_type_info_from_locn_7_p_0(TypeVar_30, TypeInfoLocn_32, Context_8, &Var_33, ExtraGoals_10, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_35);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *VarMCA_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TypeCtor_43;
            MR_Word TypeArgs_44;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_43, &TypeArgs_44);
            check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(Type_7, TypeCtor_43, TypeArgs_44, (MR_Integer) 0, Context_8, VarMCA_9, ExtraGoals_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCtor_43;
            MR_Word TypeArgs_44;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_43, &TypeArgs_44);
            check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(Type_7, TypeCtor_43, TypeArgs_44, (MR_Integer) 0, Context_8, VarMCA_9, ExtraGoals_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_num_reuses_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  {
    MR_bool succeeded;
    MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));

    succeeded = (X_4 == Var_40);
    if (succeeded)
      *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 14))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_39));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_set_type_info_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 14))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_num_reuses_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Integer * X_4)
{
  *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_5, (MR_Integer) 12))));
}

static void MR_CALL 
check_hlds__polymorphism__poly_info_get_type_info_var_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PI_0_5, (MR_Integer) 8))));
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_make_type_info_vars_6_p_0(
  MR_Word Types_7,
  MR_Word Context_8,
  MR_Word * ExtraVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word ExtraVarsMCAs_12;

    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(Types_7, Context_8, &ExtraVarsMCAs_12, ExtraGoals_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraVarsMCAs_12, ExtraVars_9);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Inst_6;

    check_hlds__polymorphism__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Inst_6));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0(
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word TypeArgs_13,
  MR_Word TypeCtorIsVarArity_14,
  MR_Word Context_15,
  MR_Word * Var_16,
  MR_Word * MCA_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84)
{
  {
    MR_bool succeeded;
    MR_Word InitialVarMapsSnapshot_20;
    MR_Word ArgTypeInfoVarsMCAs_21;
    MR_Word ArgTypeInfoGoals_22;
    MR_Word VarSet0_23;
    MR_Word VarTypes0_24;
    MR_Word RttiVarMaps0_25;
    MR_Word TypeCtorConsId_26;
    MR_Word TypeCtorConsIdConstArg_27;
    MR_Word ConstStructVarMap0_28;
    MR_Word TypeCtorVar_31;
    MR_Word TypeCtorGoals_32;
    MR_Word VarSet1_33;
    MR_Word VarTypes1_34;
    MR_Word RttiVarMaps1_35;
    MR_Word PassArity_38;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Word STATE_VARIABLE_Info_87_87;
    MR_Word Var_88;
    MR_Word STATE_VARIABLE_Info_90_90;
    MR_Word STATE_VARIABLE_Info_94_94;
    MR_Word Var_371;
    MR_Word Var_375;
    MR_Word Var_376;
    MR_Word Var_377;
    MR_Word Var_378;
    MR_Word Var_379;
    MR_Word Var_380;
    MR_Word Var_381;
    MR_Word Var_382;
    MR_Integer Var_383;
    MR_Integer Var_384;
    MR_Word Var_385;
    MR_Word Var_386;
    MR_Word Var_387;
    MR_Word Var_388;
    MR_Word Var_391;
    MR_Word Var_392;
    MR_Word Var_393;
    MR_Word Var_394;
    MR_Word Var_395;
    MR_Word Var_396;
    MR_Word Var_397;
    MR_Word Var_398;
    MR_Integer Var_399;
    MR_Integer Var_400;
    MR_Word Var_401;
    MR_Word Var_402;
    MR_Word OldTypeCtorVar_29;
    MR_Box conv0_OldTypeCtorVar_29;

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_0_83, &STATE_VARIABLE_Info_86_86);
    check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_13, Context_15, &ArgTypeInfoVarsMCAs_21, &ArgTypeInfoGoals_22, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_87_87);
    VarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 1))));
    VarTypes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 2))));
    RttiVarMaps0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 3))));
    TypeCtorConsId_26 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_12);
    Var_88 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConsIdConstArg_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_27, 0) = ((MR_Box) (TypeCtorConsId_26));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_27, 1) = ((MR_Box) (Var_88));
    }
    ConstStructVarMap0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 11))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ConstStructVarMap0_28, ((MR_Box) (TypeCtorConsIdConstArg_27)), &conv0_OldTypeCtorVar_29);
    if (succeeded)
    {
      OldTypeCtorVar_29 = ((MR_Word) (conv0_OldTypeCtorVar_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 12))));
      MR_Integer Var_89 = (MR_Integer) ((MR_Unsigned) NumReuses_30 + (MR_Unsigned) 1);
      MR_Integer Var_323 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 12))));

      succeeded = (Var_89 == Var_323);
      if (succeeded)
        STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_87_87;
      else
      {
        MR_Word Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 0))));
        MR_Word Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 1))));
        MR_Word Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 2))));
        MR_Word Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 3))));
        MR_Word Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        MR_Word Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 5))));
        MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 6))));
        MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 7))));
        MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 8))));
        MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 9))));
        MR_Word Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 10))));
        MR_Word Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 11))));
        MR_Integer Var_320 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 13))));
        MR_Word Var_321 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 14))));
        MR_Word Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_307));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_308));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (Var_309));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_310));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_311));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_312));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_313));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_314));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 8) = ((MR_Box) (Var_315));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 9) = ((MR_Box) (Var_316));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 10) = ((MR_Box) (Var_317));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 11) = ((MR_Box) (Var_318));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 12) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 13) = ((MR_Box) (Var_320));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 14) = ((MR_Box) (Var_321));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 15) = ((MR_Box) (Var_322));
        }
      }
      TypeCtorVar_31 = OldTypeCtorVar_29;
      TypeCtorGoals_32 = (MR_Word) ((MR_Unsigned) 0U);
      VarSet1_33 = VarSet0_23;
      VarTypes1_34 = VarTypes0_24;
      RttiVarMaps1_35 = RttiVarMaps0_25;
    }
    else
    {
      MR_Word TypeCtorGoal_36;
      MR_Word ConstStructVarMap1_37;
      MR_Word Var_328;

      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_102_114_111_109_95_99_111_110_115_95_105_100_95_95_91_49_93_95_48_10_p_0(TypeCtorConsId_26, &TypeCtorVar_31, &TypeCtorGoal_36, VarSet0_23, &VarSet1_33, VarTypes0_24, &VarTypes1_34, RttiVarMaps0_25, &RttiVarMaps1_35);
      {
        TypeCtorGoals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_32, 0) = ((MR_Box) (TypeCtorGoal_36));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (TypeCtorConsIdConstArg_27)), ((MR_Box) (TypeCtorVar_31)), ConstStructVarMap0_28, &ConstStructVarMap1_37);
      Var_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 11))));
      succeeded = (((MR_Word) ConstStructVarMap1_37) == ((MR_Word) Var_328));
      if (succeeded)
        STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_87_87;
      else
      {
        MR_Word Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 0))));
        MR_Word Var_346 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 1))));
        MR_Word Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 2))));
        MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 3))));
        MR_Word Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 4))));
        MR_Word Var_350 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 5))));
        MR_Word Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 6))));
        MR_Word Var_352 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 7))));
        MR_Word Var_353 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 8))));
        MR_Word Var_354 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 9))));
        MR_Word Var_355 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 10))));
        MR_Integer Var_357 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 12))));
        MR_Integer Var_358 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 13))));
        MR_Word Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 14))));
        MR_Word Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_87_87, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_90_90 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 0) = ((MR_Box) (Var_345));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 1) = ((MR_Box) (Var_346));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 2) = ((MR_Box) (Var_347));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 3) = ((MR_Box) (Var_348));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 4) = ((MR_Box) (Var_349));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 5) = ((MR_Box) (Var_350));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 6) = ((MR_Box) (Var_351));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 7) = ((MR_Box) (Var_352));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 8) = ((MR_Box) (Var_353));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 9) = ((MR_Box) (Var_354));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 10) = ((MR_Box) (Var_355));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 11) = ((MR_Box) (ConstStructVarMap1_37));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 12) = ((MR_Box) (Var_357));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 13) = ((MR_Box) (Var_358));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 14) = ((MR_Box) (Var_359));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, 15) = ((MR_Box) (Var_360));
        }
      }
    }
    Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 0))));
    Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 4))));
    Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
    Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 6))));
    Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 7))));
    Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 8))));
    Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 9))));
    Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 10))));
    Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 11))));
    Var_383 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 12))));
    Var_384 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 13))));
    Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 14))));
    Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_90_90, (MR_Integer) 15))));
    Var_387 = Var_371;
    Var_388 = VarSet1_33;
    Var_391 = Var_375;
    Var_392 = Var_376;
    Var_393 = Var_377;
    Var_394 = Var_378;
    Var_395 = Var_379;
    Var_396 = Var_380;
    Var_397 = Var_381;
    Var_398 = Var_382;
    Var_399 = Var_383;
    Var_400 = Var_384;
    Var_401 = Var_385;
    Var_402 = Var_386;
    {
      STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (Var_387));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_388));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (VarTypes1_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (RttiVarMaps1_35));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_391));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 5) = ((MR_Box) (Var_392));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 6) = ((MR_Box) (Var_393));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 7) = ((MR_Box) (Var_394));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 8) = ((MR_Box) (Var_395));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 9) = ((MR_Box) (Var_396));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 10) = ((MR_Box) (Var_397));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 11) = ((MR_Box) (Var_398));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 12) = ((MR_Box) (Var_399));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 13) = ((MR_Box) (Var_400));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 14) = ((MR_Box) (Var_401));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, 15) = ((MR_Box) (Var_402));
    }
    switch (TypeCtorIsVarArity_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PassArity_38 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_40;
          MR_Word Target_41;

          hlds__hlds_module__module_info_get_globals_2_p_0(Var_387, &Globals_40);
          libs__globals__get_target_2_p_0(Globals_40, &Target_41);
          PassArity_38 = ((&check_hlds__polymorphism_vector_common_11[0 + Target_41]))->check_hlds__polymorphism__vector_common_type_11_0__vct_11_f_0;
        }
        break;
    }
    succeeded = (PassArity_38 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (ArgTypeInfoVarsMCAs_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word TypeInfoType_42;
      MR_Word TypeCtorConstArg_43;
      MR_Word VarTypes_44;
      MR_Word Var_95;
      MR_Word Var_444;
      MR_Word Var_447;
      MR_Word Var_448;
      MR_Word Var_449;
      MR_Word Var_450;
      MR_Word Var_451;
      MR_Word Var_452;
      MR_Word Var_453;
      MR_Word Var_454;
      MR_Word Var_455;
      MR_Integer Var_456;
      MR_Integer Var_457;
      MR_Word Var_458;
      MR_Word Var_459;

      TypeInfoType_42 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      *Var_16 = TypeCtorVar_31;
      Var_95 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      {
        TypeCtorConstArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_43, 0) = ((MR_Box) (TypeCtorConsId_26));
        MR_hl_field(MR_mktag(1), TypeCtorConstArg_43, 1) = ((MR_Box) (Var_95));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MCA_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_43));
      }
      *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_32);
      hlds__vartypes__update_var_type_4_p_0(TypeCtorVar_31, TypeInfoType_42, VarTypes1_34, &VarTypes_44);
      Var_444 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 0))));
      Var_447 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
      Var_448 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
      Var_449 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
      Var_450 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
      Var_451 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
      Var_452 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 8))));
      Var_453 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 9))));
      Var_454 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 10))));
      Var_455 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 11))));
      Var_456 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 12))));
      Var_457 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 13))));
      Var_458 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 14))));
      Var_459 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 15))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_84 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_444));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet1_33));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_44));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_447));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_448));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_449));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_450));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_451));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_452));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_453));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_454));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_455));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_456));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_457));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_458));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_459));
      }
    }
    else
    {
      MR_Word Cell_45;
      MR_Word ConsId_46;
      MR_Word ConstStructDb0_47;
      MR_Word Enabled_48;
      MR_Word ArgTypeInfoConstArgs_49;

      {
        Cell_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Cell_45, 0) = ((MR_Box) (TypeCtor_12));
      }
      ConsId_46 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_45);
      ConstStructDb0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 14))));
      hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_47, &Enabled_48);
      succeeded = (Enabled_48 == (MR_Integer) 1);
      if (succeeded)
        succeeded = check_hlds__polymorphism__all_are_const_struct_args_2_p_0(ArgTypeInfoVarsMCAs_21, &ArgTypeInfoConstArgs_49);
      if (succeeded)
      {
        MR_Word TypeCtorInst_50;
        MR_Word ArgTypeInfoInsts_51;
        MR_Word StructConstArgs_55;
        MR_Word StructArgInsts_56;
        MR_Word StructType_57;
        MR_Integer NumArgs_58;
        MR_Word InstConsId_59;
        MR_Word StructInst_60;
        MR_Word ConstStruct_61;
        MR_Integer ConstNum_62;
        MR_Word ConstStructDb_63;
        MR_Word Unification_64;
        MR_Word TypeInfoRHS_68;
        MR_Word Unify_69;
        MR_Word NonLocals_70;
        MR_Word VarInst_71;
        MR_Word InstMapDelta_72;
        MR_Word GoalInfo_73;
        MR_Word TypeInfoGoal_74;
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_104;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_121;
        MR_Word STATE_VARIABLE_Info_122_122;
        MR_Word STATE_VARIABLE_Info_124_124;
        MR_Word Var_127;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word TypeCtorConstArg_169;
        MR_Word Var_498;

        Var_97 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        {
          TypeCtorConstArg_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeCtorConstArg_169, 0) = ((MR_Box) (TypeCtorConsId_26));
          MR_hl_field(MR_mktag(1), TypeCtorConstArg_169, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (TypeCtorConsId_26));
          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInst_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeCtorInst_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), TypeCtorInst_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), TypeCtorInst_50, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), TypeCtorInst_50, 3) = ((MR_Box) (Var_100));
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[4]));
          MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (ConstStructDb0_47));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_104, ArgTypeInfoConstArgs_49, &ArgTypeInfoInsts_51);
        switch (PassArity_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                StructConstArgs_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StructConstArgs_55, 0) = ((MR_Box) (TypeCtorConstArg_169));
                MR_hl_field(MR_mktag(1), StructConstArgs_55, 1) = ((MR_Box) (ArgTypeInfoConstArgs_49));
              }
              {
                StructArgInsts_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StructArgInsts_56, 0) = ((MR_Box) (TypeCtorInst_50));
                MR_hl_field(MR_mktag(1), StructArgInsts_56, 1) = ((MR_Box) (ArgTypeInfoInsts_51));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ActualArity_52;
              MR_Word ArityConstArg_53;
              MR_Word ArityInst_54;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_114;
              MR_Word Var_115;

              mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgTypeInfoVarsMCAs_21, &ActualArity_52);
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (ActualArity_52));
              }
              Var_106 = parse_tree__builtin_lib_types__int_type_0_f_0();
              {
                ArityConstArg_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArityConstArg_53, 0) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(1), ArityConstArg_53, 1) = ((MR_Box) (Var_106));
              }
              {
                Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArityInst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArityInst_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), ArityInst_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ArityInst_54, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), ArityInst_54, 3) = ((MR_Box) (Var_109));
              }
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ArityConstArg_53));
                MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (ArgTypeInfoConstArgs_49));
              }
              {
                StructConstArgs_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StructConstArgs_55, 0) = ((MR_Box) (TypeCtorConstArg_169));
                MR_hl_field(MR_mktag(1), StructConstArgs_55, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ArityInst_54));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (ArgTypeInfoInsts_51));
              }
              {
                StructArgInsts_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StructArgInsts_56, 0) = ((MR_Box) (TypeCtorInst_50));
                MR_hl_field(MR_mktag(1), StructArgInsts_56, 1) = ((MR_Box) (Var_115));
              }
            }
            break;
        }
        StructType_57 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        mercury__list__length_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), StructConstArgs_55, &NumArgs_58);
        InstConsId_59 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_45, NumArgs_58);
        {
          Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (InstConsId_59));
          MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (StructArgInsts_56));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          StructInst_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), StructInst_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), StructInst_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), StructInst_60, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), StructInst_60, 3) = ((MR_Box) (Var_118));
        }
        {
          ConstStruct_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConstStruct_61, 0) = ((MR_Box) (ConsId_46));
          MR_hl_field(MR_mktag(0), ConstStruct_61, 1) = ((MR_Box) (StructConstArgs_55));
          MR_hl_field(MR_mktag(0), ConstStruct_61, 2) = ((MR_Box) (StructType_57));
          MR_hl_field(MR_mktag(0), ConstStruct_61, 3) = ((MR_Box) (StructInst_60));
        }
        hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_61, &ConstNum_62, ConstStructDb0_47, &ConstStructDb_63);
        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (ConstNum_62));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MCA_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_121));
        }
        Var_498 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 14))));
        succeeded = (((MR_Word) ConstStructDb_63) == ((MR_Word) Var_498));
        if (succeeded)
          STATE_VARIABLE_Info_122_122 = STATE_VARIABLE_Info_94_94;
        else
        {
          MR_Word Var_515 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 0))));
          MR_Word Var_516 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
          MR_Word Var_517 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
          MR_Word Var_518 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
          MR_Word Var_519 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
          MR_Word Var_520 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 5))));
          MR_Word Var_521 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 6))));
          MR_Word Var_522 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 7))));
          MR_Word Var_523 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 8))));
          MR_Word Var_524 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 9))));
          MR_Word Var_525 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 10))));
          MR_Word Var_526 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 11))));
          MR_Integer Var_527 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 12))));
          MR_Integer Var_528 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 13))));
          MR_Word Var_530 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_94_94, (MR_Integer) 15))));

          {
            STATE_VARIABLE_Info_122_122 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 0) = ((MR_Box) (Var_515));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 1) = ((MR_Box) (Var_516));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 2) = ((MR_Box) (Var_517));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 3) = ((MR_Box) (Var_518));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 4) = ((MR_Box) (Var_519));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 5) = ((MR_Box) (Var_520));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 6) = ((MR_Box) (Var_521));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 7) = ((MR_Box) (Var_522));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 8) = ((MR_Box) (Var_523));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 9) = ((MR_Box) (Var_524));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 10) = ((MR_Box) (Var_525));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 11) = ((MR_Box) (Var_526));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 12) = ((MR_Box) (Var_527));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 13) = ((MR_Box) (Var_528));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 14) = ((MR_Box) (ConstStructDb_63));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 15) = ((MR_Box) (Var_530));
          }
        }
        check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_122_122, &STATE_VARIABLE_Info_124_124);
        check_hlds__polymorphism__new_type_info_var_5_p_0(Type_11, (MR_Integer) 0, Var_16, STATE_VARIABLE_Info_124_124, STATE_VARIABLE_Info_84);
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (ConstNum_62));
        }
        {
          Unification_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_64, 0) = ((MR_Box) (*Var_16));
          MR_hl_field(MR_mktag(0), Unification_64, 1) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), Unification_64, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Unification_64, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Unification_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Unification_64, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Unification_64, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeInfoRHS_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeInfoRHS_68, 0) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(1), TypeInfoRHS_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), TypeInfoRHS_68, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Unify_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Unify_69, 0) = ((MR_Box) (*Var_16));
          MR_hl_field(MR_mktag(1), Unify_69, 1) = ((MR_Box) (TypeInfoRHS_68));
          MR_hl_field(MR_mktag(1), Unify_69, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
          MR_hl_field(MR_mktag(1), Unify_69, 3) = ((MR_Box) (Unification_64));
          MR_hl_field(MR_mktag(1), Unify_69, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
        }
        NonLocals_70 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_16);
        {
          Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (InstConsId_59));
          MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          VarInst_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), VarInst_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), VarInst_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), VarInst_71, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), VarInst_71, 3) = ((MR_Box) (Var_145));
        }
        {
          Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (*Var_16));
          MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (VarInst_71));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        InstMapDelta_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_149);
        hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_70, InstMapDelta_72, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_73);
        {
          TypeInfoGoal_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfoGoal_74, 0) = ((MR_Box) (Unify_69));
          MR_hl_field(MR_mktag(0), TypeInfoGoal_74, 1) = ((MR_Box) (GoalInfo_73));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ExtraGoals_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfoGoal_74));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word ArgTypeInfoVars_75;
        MR_Word VarSet_81;
        MR_Word RttiVarMaps_82;
        MR_Word STATE_VARIABLE_Info_160_160;
        MR_Word VarTypes_175;
        MR_Word Var_595;
        MR_Word Var_599;
        MR_Word Var_600;
        MR_Word Var_601;
        MR_Word Var_602;
        MR_Word Var_603;
        MR_Word Var_604;
        MR_Word Var_605;
        MR_Word Var_606;
        MR_Integer Var_607;
        MR_Integer Var_608;
        MR_Word Var_609;
        MR_Word Var_610;
        MR_Word Var_611;
        MR_Word Var_612;
        MR_Word Var_615;
        MR_Word Var_616;
        MR_Word Var_617;
        MR_Word Var_618;
        MR_Word Var_619;
        MR_Word Var_620;
        MR_Word Var_621;
        MR_Word Var_622;
        MR_Integer Var_623;
        MR_Integer Var_624;
        MR_Word Var_625;
        MR_Word Var_626;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ArgTypeInfoVarsMCAs_21, &ArgTypeInfoVars_75);
        switch (PassArity_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_155;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word TypeInfoGoal_172;

              {
                Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (TypeCtorVar_31));
                MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (ArgTypeInfoVars_75));
              }
              check_hlds__polymorphism__init_type_info_var_11_p_0(Type_11, Var_155, (MR_Word) ((MR_Unsigned) 0U), Var_16, &TypeInfoGoal_172, VarSet1_33, &VarSet_81, VarTypes1_34, &VarTypes_175, RttiVarMaps1_35, &RttiVarMaps_82);
              {
                Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (TypeInfoGoal_172));
                MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_158);
              *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_32, Var_157);
              STATE_VARIABLE_Info_160_160 = STATE_VARIABLE_Info_94_94;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArityVar_76;
              MR_Word ArityGoals_77;
              MR_Word VarSet2_78;
              MR_Word VarTypes2_79;
              MR_Word RttiVarMaps2_80;
              MR_Word Var_161;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Integer ActualArity_170;
              MR_Word TypeInfoGoal_171;

              mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgTypeInfoVars_75, &ActualArity_170);
              check_hlds__polymorphism__get_poly_const_5_p_0(ActualArity_170, &ArityVar_76, &ArityGoals_77, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_160_160);
              VarSet2_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 1))));
              VarTypes2_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 2))));
              RttiVarMaps2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 3))));
              {
                Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (ArityVar_76));
                MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (ArgTypeInfoVars_75));
              }
              {
                Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (TypeCtorVar_31));
                MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_163));
              }
              check_hlds__polymorphism__init_type_info_var_11_p_0(Type_11, Var_161, (MR_Word) ((MR_Unsigned) 0U), Var_16, &TypeInfoGoal_171, VarSet2_78, &VarSet_81, VarTypes2_79, &VarTypes_175, RttiVarMaps2_80, &RttiVarMaps_82);
              {
                Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (TypeInfoGoal_171));
                MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_166);
              Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArityGoals_77, Var_165);
              *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_32, Var_164);
            }
            break;
        }
        Var_595 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 0))));
        Var_599 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 4))));
        Var_600 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 5))));
        Var_601 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 6))));
        Var_602 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 7))));
        Var_603 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 8))));
        Var_604 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 9))));
        Var_605 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 10))));
        Var_606 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 11))));
        Var_607 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 12))));
        Var_608 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 13))));
        Var_609 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 14))));
        Var_610 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 15))));
        Var_611 = Var_595;
        Var_612 = VarSet_81;
        Var_615 = Var_599;
        Var_616 = Var_600;
        Var_617 = Var_601;
        Var_618 = Var_602;
        Var_619 = Var_603;
        Var_620 = Var_604;
        Var_621 = Var_605;
        Var_622 = Var_606;
        Var_623 = Var_607;
        Var_624 = Var_608;
        Var_625 = Var_609;
        Var_626 = Var_610;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_84 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_611));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_612));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_175));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_82));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_615));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_616));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_617));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_618));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_619));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_620));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_621));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_622));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_623));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_624));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_625));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_626));
        }
        *MCA_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeArgs_12,
  MR_Word TypeCtorIsVarArity_13,
  MR_Word Context_14,
  MR_Word * TypeInfoVarMCA_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoVarMap0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 8))));
    MR_Word OldTypeInfoVarMCA_20;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word TypeCtorVarMap0_19;
    MR_Box conv0_TypeCtorVarMap0_19;
    MR_Box conv1_OldTypeInfoVarMCA_20;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeInfoVarMap0_18, ((MR_Box) (TypeCtor_11)), &conv0_TypeCtorVarMap0_19);
    if (succeeded)
    {
      TypeCtorVarMap0_19 = ((MR_Word) (conv0_TypeCtorVarMap0_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_38_38 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]);
      TypeInfo_39_39 = (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_38_38, TypeInfo_39_39, TypeCtorVarMap0_19, ((MR_Box) (TypeArgs_12)), &conv1_OldTypeInfoVarMCA_20);
      if (succeeded)
      {
        OldTypeInfoVarMCA_20 = ((MR_Word) (conv1_OldTypeInfoVarMCA_20));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 12))));
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) NumReuses_21 + (MR_Unsigned) 1);
      MR_Integer Var_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 12))));

      succeeded = (Var_30 == Var_122);
      if (succeeded)
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      else
      {
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
        MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1))));
        MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2))));
        MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
        MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 5))));
        MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 6))));
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
        MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 8))));
        MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 9))));
        MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 10))));
        MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 11))));
        MR_Integer Var_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 13))));
        MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 14))));
        MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_29 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_121));
        }
      }
      *TypeInfoVarMCA_15 = OldTypeInfoVarMCA_20;
      *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfoVar_22;
      MR_Word TypeInfoConstArg_23;
      MR_Word TypeInfoVarMap1_24;
      MR_Word TypeInfoVarMap_27;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word TypeCtorVarMap1_25;
      MR_Box conv2_TypeCtorVarMap1_25;
      MR_Word Var_145;

      check_hlds__polymorphism__polymorphism_construct_type_info_10_p_0(Type_10, TypeCtor_11, TypeArgs_12, TypeCtorIsVarArity_13, Context_14, &TypeInfoVar_22, &TypeInfoConstArg_23, ExtraGoals_16, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_33_33);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeInfoVarMCA_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_23));
      }
      TypeInfoVarMap1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 8))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeInfoVarMap1_24, ((MR_Box) (TypeCtor_11)), &conv2_TypeCtorVarMap1_25);
      if (succeeded)
      {
        TypeCtorVarMap1_25 = ((MR_Word) (conv2_TypeCtorVarMap1_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorVarMap_26;

        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (TypeArgs_12)), ((MR_Box) (*TypeInfoVarMCA_15)), TypeCtorVarMap1_25, &TypeCtorVarMap_26);
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorVarMap_26)), TypeInfoVarMap1_24, &TypeInfoVarMap_27);
      }
      else
      {
        MR_Word TypeCtorVarMap_35;

        TypeCtorVarMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (TypeArgs_12)), ((MR_Box) (*TypeInfoVarMCA_15)));
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorVarMap_35)), TypeInfoVarMap1_24, &TypeInfoVarMap_27);
      }
      Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 8))));
      succeeded = (((MR_Word) TypeInfoVarMap_27) == ((MR_Word) Var_145));
      if (succeeded)
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_33_33;
      else
      {
        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 0))));
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 1))));
        MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 2))));
        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 3))));
        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 4))));
        MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 5))));
        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 6))));
        MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 7))));
        MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 9))));
        MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 10))));
        MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 11))));
        MR_Integer Var_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 12))));
        MR_Integer Var_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 13))));
        MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 14))));
        MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_29 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_164));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeInfoVarMap_27));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_172));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_175));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_177));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadVarMCA_17;
      MR_Word HeadGoals_18;
      MR_Word TailVarsMCAs_19;
      MR_Word TailGoals_20;
      MR_Word STATE_VARIABLE_Info_23_23;
      MR_Word TypeCtor_33;
      MR_Word TypeArgs_34;

      succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_11, &TypeCtor_33, &TypeArgs_34);
      if (succeeded)
        check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_33, TypeArgs_34, (MR_Integer) 1, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
      else
        switch (MR_tag((MR_Word) Type_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_11, (MR_Integer) 0))));
              MR_Word TypeInfoLocn_53;
              MR_Word Var_54;
              MR_Word STATE_VARIABLE_Info_38_57;

              check_hlds__polymorphism__get_type_info_locn_4_p_0(TypeVar_51, &TypeInfoLocn_53, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_38_57);
              check_hlds__polymorphism__get_type_info_from_locn_7_p_0(TypeVar_51, TypeInfoLocn_53, Context_2, &Var_54, &HeadGoals_18, STATE_VARIABLE_Info_38_57, &STATE_VARIABLE_Info_23_23);
              {
                HeadVarMCA_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadVarMCA_17, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(0), HeadVarMCA_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_62;
              MR_Word TypeArgs_63;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_62, &TypeArgs_63);
              check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_62, TypeArgs_63, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtor_62;
              MR_Word TypeArgs_63;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_62, &TypeArgs_63);
              check_hlds__polymorphism__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_62, TypeArgs_63, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
            }
            break;
        }
      check_hlds__polymorphism__polymorphism_do_make_type_info_vars_6_p_0(Types_12, Context_2, &TailVarsMCAs_19, &TailGoals_20, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarMCA_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsMCAs_19));
      }
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_18, TailGoals_20);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_type_info_from_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word TypeInfoLocn_9,
  MR_Word Context_10,
  MR_Word * Var_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  if (((MR_tag((MR_Word) TypeInfoLocn_9)) == (MR_Integer) 0))
  {
    *Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_9, (MR_Integer) 0))));
    *ExtraGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_9, (MR_Integer) 0))));
    MR_Integer Index_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_9, (MR_Integer) 1))));

    check_hlds__polymorphism__polymorphism_extract_type_info_8_p_0(TypeVar_8, TypeClassInfoVar_15, Index_16, Context_10, ExtraGoals_12, Var_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_extract_type_info_8_p_0(
  MR_Word TypeVar_9,
  MR_Word TypeClassInfoVar_10,
  MR_Integer Index_11,
  MR_Word Context_12,
  MR_Word * Goals_13,
  MR_Word * TypeInfoVar_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_Word IndexVar_16;
    MR_Word IndexGoals_17;
    MR_Word VarSet0_18;
    MR_Word VarTypes0_19;
    MR_Word RttiVarMaps0_20;
    MR_Word ModuleInfo_21;
    MR_Word TVarKindMap_22;
    MR_Word Kind_23;
    MR_Word IndexIntOrVar_24;
    MR_Word ExtractGoals_25;
    MR_Word VarSet_26;
    MR_Word VarTypes_27;
    MR_Word RttiVarMaps_28;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_133;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Integer Var_145;
    MR_Integer Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Integer Var_161;
    MR_Integer Var_162;
    MR_Word Var_163;
    MR_Word Var_164;

    check_hlds__polymorphism__get_poly_const_5_p_0(Index_11, &IndexVar_16, &IndexGoals_17, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
    VarSet0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
    VarTypes0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
    RttiVarMaps0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    TVarKindMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_22, TypeVar_9, &Kind_23);
    {
      IndexIntOrVar_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IndexIntOrVar_24, 0) = ((MR_Box) (IndexVar_16));
    }
    check_hlds__polymorphism__gen_extract_type_info_14_p_0(ModuleInfo_21, TypeVar_9, Kind_23, TypeClassInfoVar_10, IndexIntOrVar_24, Context_12, &ExtractGoals_25, TypeInfoVar_14, VarSet0_18, &VarSet_26, VarTypes0_19, &VarTypes_27, RttiVarMaps0_20, &RttiVarMaps_28);
    *Goals_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_17, ExtractGoals_25);
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
    Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
    Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
    Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
    Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
    Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
    Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 13))));
    Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
    Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));
    Var_149 = Var_133;
    Var_150 = VarSet_26;
    Var_153 = Var_137;
    Var_154 = Var_138;
    Var_155 = Var_139;
    Var_156 = Var_140;
    Var_157 = Var_141;
    Var_158 = Var_142;
    Var_159 = Var_143;
    Var_160 = Var_144;
    Var_161 = Var_145;
    Var_162 = Var_146;
    Var_163 = Var_147;
    Var_164 = Var_148;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_154));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_156));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_157));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_158));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_159));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_160));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_161));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_162));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_163));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_164));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__gen_extract_type_info_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word TypeVar_16,
  MR_Word Kind_17,
  MR_Word TypeClassInfoVar_18,
  MR_Word IndexIntOrVar_19,
  MR_Word Context_20,
  MR_Word * Goals_21,
  MR_Word * TypeInfoVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_VarTypes_0_34,
  MR_Word * STATE_VARIABLE_VarTypes_35,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_36,
  MR_Word * STATE_VARIABLE_RttiVarMaps_37)
{
  {
    MR_Word IndexVar_28;
    MR_Word IndexGoals_29;
    MR_Word Type_30;
    MR_Word CallGoal_31;
    MR_Word STATE_VARIABLE_VarSet_39_39;
    MR_Word STATE_VARIABLE_VarTypes_40_40;
    MR_Word Var_47;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Integer VarNum_74;
    MR_String VarNumStr_75;
    MR_String Name_77;
    MR_Word STATE_VARIABLE_VarSet_26_78;
    MR_Word Var_81;

    if (((MR_tag((MR_Word) IndexIntOrVar_19)) == (MR_Integer) 0))
    {
      MR_Integer Index_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IndexIntOrVar_19, (MR_Integer) 0))));
      MR_Word IndexGoal_27;

      hlds__make_goal__make_int_const_construction_alloc_8_p_0(Index_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_10[0])), &IndexGoal_27, &IndexVar_28, STATE_VARIABLE_VarSet_0_32, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_VarTypes_0_34, &STATE_VARIABLE_VarTypes_40_40);
      {
        IndexGoals_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IndexGoals_29, 0) = ((MR_Box) (IndexGoal_27));
        MR_hl_field(MR_mktag(1), IndexGoals_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      IndexVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndexIntOrVar_19, (MR_Integer) 0))));
      IndexGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_VarSet_39_39 = STATE_VARIABLE_VarSet_0_32;
      STATE_VARIABLE_VarTypes_40_40 = STATE_VARIABLE_VarTypes_0_34;
    }
    {
      Type_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_30, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(MR_mktag(0), Type_30, 1) = ((MR_Box) (Kind_17));
    }
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_22, STATE_VARIABLE_VarSet_39_39, &STATE_VARIABLE_VarSet_26_78);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, &VarNum_74);
    mercury__string__int_to_string_2_p_0(VarNum_74, &VarNumStr_75);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_22, Type_30, STATE_VARIABLE_RttiVarMaps_0_36, STATE_VARIABLE_RttiVarMaps_37);
    Name_77 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_75);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, Name_77, STATE_VARIABLE_VarSet_26_78, STATE_VARIABLE_VarSet_33);
    Var_81 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*TypeInfoVar_22, Var_81, STATE_VARIABLE_VarTypes_40_40, STATE_VARIABLE_VarTypes_35);
    Var_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (*TypeInfoVar_22));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IndexVar_28));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TypeClassInfoVar_18));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    Var_55 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeInfoVar_22);
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_15, Var_47, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_53, (MR_Word) ((MR_Unsigned) 0U), Var_55, Context_20, &CallGoal_31);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CallGoal_31));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_29, Var_59);
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_type_info_locn_4_p_0(
  MR_Word TypeVar_5,
  MR_Word * TypeInfoLocn_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoLocnPrime_9;
    MR_Word RttiVarMaps0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));

    succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps0_8, TypeVar_5, &TypeInfoLocnPrime_9);
    if (succeeded)
    {
      *TypeInfoLocn_6 = TypeInfoLocnPrime_9;
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    }
    else
    {
      MR_Word TVarKindMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
      MR_Word Kind_11;
      MR_Word Type_12;
      MR_Word Var_13;
      MR_Word RttiVarMaps1_14;
      MR_Word RttiVarMaps_15;
      MR_Word STATE_VARIABLE_Info_19_19;
      MR_Word Var_79;

      parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_10, TypeVar_5, &Kind_11);
      {
        Type_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Type_12, 0) = ((MR_Box) (TypeVar_5));
        MR_hl_field(MR_mktag(0), Type_12, 1) = ((MR_Box) (Kind_11));
      }
      check_hlds__polymorphism__new_type_info_var_5_p_0(Type_12, (MR_Integer) 0, &Var_13, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *TypeInfoLocn_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      }
      RttiVarMaps1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 3))));
      hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TypeVar_5, *TypeInfoLocn_6, RttiVarMaps1_14, &RttiVarMaps_15);
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 3))));
      succeeded = (((MR_Word) RttiVarMaps_15) == ((MR_Word) Var_79));
      if (succeeded)
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_19_19;
      else
      {
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 0))));
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 1))));
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 2))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 4))));
        MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 5))));
        MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 6))));
        MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 7))));
        MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 8))));
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 9))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 10))));
        MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 11))));
        MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 12))));
        MR_Integer Var_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 13))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 14))));
        MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_15));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_111));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMaps_6, (MR_Integer) 1))));
    MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMaps_6, (MR_Integer) 2))));
    MR_Word RttiVarMaps_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMaps_6, (MR_Integer) 3))));
    MR_Word CacheMaps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMaps_6, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11))));
    MR_Integer Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12))));
    MR_Integer Var_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15))));
    MR_Word Var_115 = Var_99;
    MR_Word Var_116 = VarSet_9;
    MR_Word Var_119 = Var_103;
    MR_Word Var_120 = Var_104;
    MR_Word Var_121 = Var_105;
    MR_Word Var_122 = Var_106;
    MR_Word Var_123 = Var_107;
    MR_Word Var_124 = Var_108;
    MR_Word Var_125 = Var_109;
    MR_Word Var_126 = Var_110;
    MR_Integer Var_127 = Var_111;
    MR_Integer Var_128 = Var_112;
    MR_Word Var_129 = Var_113;
    MR_Word Var_130 = Var_114;

    {
      STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (VarTypes_10));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (RttiVarMaps_11));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 11) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 12) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 13) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 14) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 15) = ((MR_Box) (Var_130));
    }
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(CacheMaps_12, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_18);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoVarMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CacheMaps_6, (MR_Integer) 1))));
    MR_Word TypeClassInfoMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CacheMaps_6, (MR_Integer) 2))));
    MR_Word IntConstMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CacheMaps_6, (MR_Integer) 3))));
    MR_Word ConstStructVarMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CacheMaps_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11))));

    succeeded = (((MR_Word) TypeInfoVarMap_9) == ((MR_Word) Var_21));
    if (succeeded)
    {
      succeeded = (((MR_Word) TypeClassInfoMap_10) == ((MR_Word) Var_82));
      if (succeeded)
      {
        succeeded = (((MR_Word) IntConstMap_11) == ((MR_Word) Var_83));
        if (succeeded)
          succeeded = (((MR_Word) ConstStructVarMap_12) == ((MR_Word) Var_84));
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    else
    {
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
      MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
      MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));
      MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15))));
      MR_Word Var_150 = Var_134;
      MR_Word Var_151 = Var_135;
      MR_Word Var_152 = Var_136;
      MR_Word Var_153 = Var_137;
      MR_Word Var_154 = Var_138;
      MR_Word Var_155 = Var_139;
      MR_Word Var_156 = Var_140;
      MR_Word Var_157 = Var_141;
      MR_Word Var_158 = TypeInfoVarMap_9;
      MR_Integer Var_162 = Var_146;
      MR_Integer Var_163 = Var_147;
      MR_Word Var_164 = Var_148;
      MR_Word Var_165 = Var_149;
      MR_Word Var_166 = Var_150;
      MR_Word Var_167 = Var_151;
      MR_Word Var_168 = Var_152;
      MR_Word Var_169 = Var_153;
      MR_Word Var_170 = Var_154;
      MR_Word Var_171 = Var_155;
      MR_Word Var_172 = Var_156;
      MR_Word Var_173 = Var_157;
      MR_Word Var_174 = Var_158;
      MR_Word Var_175 = TypeClassInfoMap_10;
      MR_Integer Var_178 = Var_162;
      MR_Integer Var_179 = Var_163;
      MR_Word Var_180 = Var_164;
      MR_Word Var_181 = Var_165;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_173));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_175));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntConstMap_11));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ConstStructVarMap_12));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_178));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_179));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_180));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_181));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Integer SnapshotNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13))));
    MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
    MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
    MR_Word RttiVarMaps_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
    MR_Word CacheMaps_17;

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&CacheMaps_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *VarMaps_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SnapshotNum_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CacheMaps_17));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word TypeInfoVarMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
    MR_Word TypeClassInfoMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
    MR_Word IntConstMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
    MR_Word ConstStructVarMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11))));
    MR_Integer SnapshotNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13))));
    MR_Integer Var_22;
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
    MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
    MR_Integer Var_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14))));
    MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *CacheMaps_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SnapshotNum_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoVarMap_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeClassInfoMap_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntConstMap_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ConstStructVarMap_11));
    }
    Var_22 = (MR_Integer) ((MR_Unsigned) SnapshotNum_12 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeInfoVarMap_8));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TypeClassInfoMap_9));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntConstMap_10));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ConstStructVarMap_11));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_124));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_105_116_95_99_111_110_115_116_95_116_121_112_101_95_99_116_111_114_95_105_110_102_111_95_118_97_114_95_102_114_111_109_95_99_111_110_115_95_105_100_95_95_91_49_93_95_48_10_p_0(
  MR_Word ConsId_12,
  MR_Word * TypeCtorInfoVar_13,
  MR_Word * TypeCtorInfoGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_31,
  MR_Word * STATE_VARIABLE_RttiVarMaps_32)
{
  {
    MR_Word TypeInfoRHS_18;
    MR_Word Unification_19;
    MR_Word Unify_23;
    MR_Word NonLocals_24;
    MR_Word InstmapDelta_25;
    MR_Word GoalInfo_26;
    MR_Integer VarNum_66;
    MR_String VarNumStr_67;
    MR_String Name_69;
    MR_Word STATE_VARIABLE_VarSet_26_70;
    MR_Word Var_73;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorInfoVar_13, STATE_VARIABLE_VarSet_0_27, &STATE_VARIABLE_VarSet_26_70);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_13, &VarNum_66);
    mercury__string__int_to_string_2_p_0(VarNum_66, &VarNumStr_67);
    *STATE_VARIABLE_RttiVarMaps_32 = STATE_VARIABLE_RttiVarMaps_0_31;
    Name_69 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_67);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_13, Name_69, STATE_VARIABLE_VarSet_26_70, STATE_VARIABLE_VarSet_28);
    Var_73 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*TypeCtorInfoVar_13, Var_73, STATE_VARIABLE_VarTypes_0_29, STATE_VARIABLE_VarTypes_30);
    {
      TypeInfoRHS_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_18, 0) = ((MR_Box) (ConsId_12));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_19, 0) = ((MR_Box) (*TypeCtorInfoVar_13));
      MR_hl_field(MR_mktag(0), Unification_19, 1) = ((MR_Box) (ConsId_12));
      MR_hl_field(MR_mktag(0), Unification_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_19, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_19, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_19, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_23, 0) = ((MR_Box) (*TypeCtorInfoVar_13));
      MR_hl_field(MR_mktag(1), Unify_23, 1) = ((MR_Box) (TypeInfoRHS_18));
      MR_hl_field(MR_mktag(1), Unify_23, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
      MR_hl_field(MR_mktag(1), Unify_23, 3) = ((MR_Box) (Unification_19));
      MR_hl_field(MR_mktag(1), Unify_23, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
    }
    NonLocals_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_13);
    InstmapDelta_25 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_13);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_24, InstmapDelta_25, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorInfoGoal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_26));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__all_are_const_struct_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word VarMCA_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarsMCAs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConstArg_5;
      MR_Word ConstArgs_6;
      MR_Word MCA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMCA_3, (MR_Integer) 1))));

      succeeded = (MCA_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConstArg_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MCA_8, (MR_Integer) 0))));
        succeeded = check_hlds__polymorphism__all_are_const_struct_args_2_p_0(VarsMCAs_4, &ConstArgs_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConstArg_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConstArgs_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_poly_const_5_p_0(
  MR_Integer IntConst_6,
  MR_Word * IntVar_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
    MR_Word IntConstMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
    MR_Word IntVarPrime_13;
    MR_Box conv0_IntVarPrime_13;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), IntConstMap0_12, IntConst_6, &conv0_IntVarPrime_13);
    if (succeeded)
    {
      IntVarPrime_13 = ((MR_Word) (conv0_IntVarPrime_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));
      MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) NumReuses_14 + (MR_Unsigned) 1);
      MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));

      succeeded = (Var_21 == Var_143);
      if (succeeded)
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      else
      {
        MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
        MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
        MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
        MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
        MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
        MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
        MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
        MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
        MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
        MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11))));
        MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13))));
        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14))));
        MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_133));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_138));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_142));
        }
      }
      *IntVar_7 = IntVarPrime_13;
      *Goals_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Goal_15;
      MR_Word VarSet_16;
      MR_Word VarTypes_17;
      MR_Word IntConstMap_18;
      MR_Word Var_24;
      MR_String Var_25;
      MR_String Var_27;
      MR_Word STATE_VARIABLE_Info_28_28;
      MR_Word Var_189;
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Integer Var_201;
      MR_Integer Var_202;
      MR_Word Var_203;
      MR_Word Var_204;
      MR_Word Var_148;

      Var_27 = mercury__string__int_to_string_1_f_0(IntConst_6);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "PolyConst", Var_27);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      }
      hlds__make_goal__make_int_const_construction_alloc_8_p_0(IntConst_6, Var_24, &Goal_15, IntVar_7, VarSet0_10, &VarSet_16, VarTypes0_11, &VarTypes_17);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), IntConst_6, ((MR_Box) (*IntVar_7)), IntConstMap0_12, &IntConstMap_18);
      Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10))));
      succeeded = (((MR_Word) IntConstMap_18) == ((MR_Word) Var_148));
      if (succeeded)
        STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_0_19;
      else
      {
        MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
        MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
        MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
        MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
        MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
        MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
        MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
        MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
        MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11))));
        MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12))));
        MR_Integer Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13))));
        MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14))));
        MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15))));

        {
          STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 5) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 6) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 7) = ((MR_Box) (Var_172));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 8) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 9) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 10) = ((MR_Box) (IntConstMap_18));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 11) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 12) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 13) = ((MR_Box) (Var_178));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 14) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 15) = ((MR_Box) (Var_180));
        }
      }
      Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 0))));
      Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 3))));
      Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 4))));
      Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 5))));
      Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 6))));
      Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 7))));
      Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 8))));
      Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 9))));
      Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 10))));
      Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 11))));
      Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 12))));
      Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 13))));
      Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 14))));
      Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, (MR_Integer) 15))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_189));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_17));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_192));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_193));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_194));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_195));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_196));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_197));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_198));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_199));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_200));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_201));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_204));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__init_type_info_var_11_p_0(
  MR_Word Type_12,
  MR_Word ArgVars_13,
  MR_Word MaybePreferredVar_14,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_27,
  MR_Word * STATE_VARIABLE_RttiVarMaps_28)
{
  {
    MR_Word TypeCtor_20;
    MR_Word Cell_21;
    MR_Word ConsId_22;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_12, &TypeCtor_20);
    {
      Cell_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Cell_21, 0) = ((MR_Box) (TypeCtor_20));
    }
    ConsId_22 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_21);
    check_hlds__polymorphism__do_init_type_info_var_13_p_0(Type_12, Cell_21, ConsId_22, ArgVars_13, MaybePreferredVar_14, TypeInfoVar_15, TypeInfoGoal_16, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_VarTypes_0_25, STATE_VARIABLE_VarTypes_26, STATE_VARIABLE_RttiVarMaps_0_27, STATE_VARIABLE_RttiVarMaps_28);
  }
}

static void MR_CALL 
check_hlds__polymorphism__do_init_type_info_var_13_p_0(
  MR_Word Type_14,
  MR_Word Cell_15,
  MR_Word ConsId_16,
  MR_Word ArgVars_17,
  MR_Word MaybePreferredVar_18,
  MR_Word * TypeInfoVar_19,
  MR_Word * TypeInfoGoal_20,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_VarTypes_0_42,
  MR_Word * STATE_VARIABLE_VarTypes_43,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_44,
  MR_Word * STATE_VARIABLE_RttiVarMaps_45)
{
  {
    MR_Word TypeInfoRHS_24;
    MR_Integer NumArgVars_27;
    MR_Word ArgModes_28;
    MR_Word Unification_29;
    MR_Word Unify_32;
    MR_Word NonLocals_33;
    MR_Word ArgInsts_34;
    MR_Word InstConsId_35;
    MR_Word InstResults_36;
    MR_Word TypeInfoVarInst_37;
    MR_Word InstMapDelta_38;
    MR_Word GoalInfo_39;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;

    {
      TypeInfoRHS_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_24, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_24, 2) = ((MR_Box) (ArgVars_17));
    }
    if ((MaybePreferredVar_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer VarNum_98;
      MR_String VarNumStr_99;
      MR_String Name_101;
      MR_Word STATE_VARIABLE_VarSet_26_102;
      MR_Word Var_105;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_19, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_26_102);
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_19, &VarNum_98);
      mercury__string__int_to_string_2_p_0(VarNum_98, &VarNumStr_99);
      hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_19, Type_14, STATE_VARIABLE_RttiVarMaps_0_44, STATE_VARIABLE_RttiVarMaps_45);
      Name_101 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_99);
      mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_19, Name_101, STATE_VARIABLE_VarSet_26_102, STATE_VARIABLE_VarSet_41);
      Var_105 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      hlds__vartypes__add_var_type_4_p_0(*TypeInfoVar_19, Var_105, STATE_VARIABLE_VarTypes_0_42, STATE_VARIABLE_VarTypes_43);
    }
    else
    {
      *TypeInfoVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePreferredVar_18, (MR_Integer) 0))));
      *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
      *STATE_VARIABLE_VarTypes_43 = STATE_VARIABLE_VarTypes_0_42;
      *STATE_VARIABLE_RttiVarMaps_45 = STATE_VARIABLE_RttiVarMaps_0_44;
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgVars_17, &NumArgVars_27);
    mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_27, ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1])), &ArgModes_28);
    {
      Unification_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_29, 0) = ((MR_Box) (*TypeInfoVar_19));
      MR_hl_field(MR_mktag(0), Unification_29, 1) = ((MR_Box) (ConsId_16));
      MR_hl_field(MR_mktag(0), Unification_29, 2) = ((MR_Box) (ArgVars_17));
      MR_hl_field(MR_mktag(0), Unification_29, 3) = ((MR_Box) (ArgModes_28));
      MR_hl_field(MR_mktag(0), Unification_29, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_29, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Unification_29, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_32, 0) = ((MR_Box) (*TypeInfoVar_19));
      MR_hl_field(MR_mktag(1), Unify_32, 1) = ((MR_Box) (TypeInfoRHS_24));
      MR_hl_field(MR_mktag(1), Unify_32, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
      MR_hl_field(MR_mktag(1), Unify_32, 3) = ((MR_Box) (Unification_29));
      MR_hl_field(MR_mktag(1), Unify_32, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[20]));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (*TypeInfoVar_19));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (ArgVars_17));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_33);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_27, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[24]))), &ArgInsts_34);
    InstConsId_35 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_15, NumArgVars_27);
    Var_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
    }
    {
      InstResults_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstResults_36, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(1), InstResults_36, 1) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), InstResults_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), InstResults_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), InstResults_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (InstConsId_35));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ArgInsts_34));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfoVarInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeInfoVarInst_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), TypeInfoVarInst_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), TypeInfoVarInst_37, 2) = ((MR_Box) (InstResults_36));
      MR_hl_field(MR_mktag(3), TypeInfoVarInst_37, 3) = ((MR_Box) (Var_73));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (*TypeInfoVar_19));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (TypeInfoVarInst_37));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_38 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_76);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_33, InstMapDelta_38, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoGoal_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_39));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(
  MR_Word Type_7,
  MR_Word RttiVarMaps_8,
  MR_Word STATE_VARIABLE_Unification_0_13,
  MR_Word * STATE_VARIABLE_Unification_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_15,
  MR_Word * STATE_VARIABLE_GoalInfo_16)
{
  {
    MR_Word TypeVars_11;
    MR_Word TypeInfoLocns_12;
    MR_Word Var_17;
    MR_Word TypeInfoVars0_31;
    MR_Word TypeInfoVars_32;
    MR_Word NonLocals0_33;
    MR_Word NonLocals_34;

    parse_tree__prog_type__type_vars_2_p_0(Type_7, &TypeVars_11);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (RttiVarMaps_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_17, TypeVars_11, &TypeInfoLocns_12);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[23]), TypeInfoLocns_12, &TypeInfoVars0_31);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), TypeInfoVars0_31, &TypeInfoVars_32);
    NonLocals0_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_15);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_32, NonLocals0_33, &NonLocals_34);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_34, STATE_VARIABLE_GoalInfo_0_15, STATE_VARIABLE_GoalInfo_16);
    switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 1))));
              MR_Word CanFail_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 2))) & (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Unification_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Modes_35));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeInfoVars_32));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__568__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__566__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word SafeToContinue_6;
    MR_Word Specs_7;
    MR_Word ExistsPredIds_8;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word Var_13;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word STATE_VARIABLE_ModuleInfo_23_23;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_10;

    check_hlds__polymorphism__polymorphism_process_pred_6_p_0(PredId_4, &SafeToContinue_6, (MR_Word) ((MR_Unsigned) 0U), &Specs_7, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_12_12);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (SafeToContinue_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(PredId_4, (MR_Word) ((MR_Unsigned) 0U), &ExistsPredIds_8, STATE_VARIABLE_ModuleInfo_12_12, &STATE_VARIABLE_ModuleInfo_22_22);
    check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_4, STATE_VARIABLE_ModuleInfo_22_22, &STATE_VARIABLE_ModuleInfo_23_23);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[22]), ExistsPredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_23_23)), &conv1_STATE_VARIABLE_ModuleInfo_10);
    *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProcInfo_10;

    check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * SafeToContinue_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29)
{
  {
    MR_Word PredInfo0_11;
    MR_Word ClausesInfo0_12;
    MR_Word ClausesInfo_13;
    MR_Word PolyInfo_14;
    MR_Word ExtraArgModes_15;
    MR_Word ConstStructDb_16;
    MR_Word TypeVarSet_17;
    MR_Word PredInfo1_18;
    MR_Word PredInfo2_19;
    MR_Word PredSpecs_20;
    MR_Word ProcMap0_23;
    MR_Word ProcMap_24;
    MR_Word PredInfo_25;
    MR_Word STATE_VARIABLE_ModuleInfo_32_32;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word Var_35;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_28, PredId_7, &PredInfo0_11);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_12);
    check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0(STATE_VARIABLE_ModuleInfo_0_28, PredInfo0_11, ClausesInfo0_12, &ClausesInfo_13, &PolyInfo_14, &ExtraArgModes_15);
    STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_14, (MR_Integer) 0))));
    ConstStructDb_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_14, (MR_Integer) 14))));
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_16, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_33_33);
    TypeVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_14, (MR_Integer) 4))));
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_17, PredInfo0_11, &PredInfo1_18);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_13, PredInfo1_18, &PredInfo2_19);
    PredSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PolyInfo_14, (MR_Integer) 15))));
    if ((PredSpecs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SafeToContinue_8 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      *SafeToContinue_8 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_20, STATE_VARIABLE_Specs_0_26);
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_19, &ProcMap0_23);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ExtraArgModes_15));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_35, ProcMap0_23, &ProcMap_24);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_24, PredInfo2_19, &PredInfo_25);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_25, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_29);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Clause_25;
    MR_Word conv0_STATE_VARIABLE_Info_27;

    check_hlds__polymorphism__polymorphism_process_clause_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Clause_25, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_27);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Clause_25));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0(
  MR_Word ModuleInfo0_7,
  MR_Word PredInfo0_8,
  MR_Word STATE_VARIABLE_ClausesInfo_0_33,
  MR_Word * STATE_VARIABLE_ClausesInfo_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word * ExtraArgModes_11)
{
  {
    MR_Word ExplicitVarTypes_13;
    MR_Word HeadVars0_16;
    MR_Word ClausesRep0_17;
    MR_Word ItemNumbers_18;
    MR_Word HeadVars_22;
    MR_Word UnconstrainedTVars_23;
    MR_Word ExtraTypeInfoHeadVars_24;
    MR_Word ExistTypeClassInfoHeadVars_25;
    MR_Word Clauses0_26;
    MR_Word Clauses_27;
    MR_Word VarSet_28;
    MR_Word VarTypes_29;
    MR_Word RttiVarMaps_30;
    MR_Word ClausesRep_31;
    MR_Word TVarNameMap_32;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word Var_38;
    MR_Word VarSet_51;
    MR_Word VarTypes_52;
    MR_Word TypeVarSet_53;
    MR_Word TypeVarKinds_54;
    MR_Word ProofMap_55;
    MR_Word ConstraintMap_56;
    MR_Word RttiVarMaps_57;
    MR_Word TypeInfoVarMap_58;
    MR_Word TypeClassInfoMap_59;
    MR_Word IntConstMap_60;
    MR_Word ConstStructVarMap_61;
    MR_Word ConstStructDb_64;
    MR_Unsigned packed_word_0;
    MR_Box conv2_STATE_VARIABLE_Info_35;

    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_0_33, &VarSet_51);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_0_33, &VarTypes_52);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_8, &TypeVarSet_53);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo0_8, &TypeVarKinds_54);
    hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo0_8, &ProofMap_55);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo0_8, &ConstraintMap_56);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_57);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), &TypeInfoVarMap_58);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), &TypeClassInfoMap_59);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), &IntConstMap_60);
    mercury__map__init_1_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), &ConstStructVarMap_61);
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo0_7, &ConstStructDb_64);
    {
      STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (ModuleInfo0_7));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 1) = ((MR_Box) (VarSet_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (VarTypes_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (RttiVarMaps_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (TypeVarSet_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (TypeVarKinds_54));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (ProofMap_55));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 7) = ((MR_Box) (ConstraintMap_56));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 8) = ((MR_Box) (TypeInfoVarMap_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 9) = ((MR_Box) (TypeClassInfoMap_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 10) = ((MR_Box) (IntConstMap_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 11) = ((MR_Box) (ConstStructVarMap_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 12) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 13) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 14) = ((MR_Box) (ConstStructDb_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ExplicitVarTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_33, (MR_Integer) 1))));
    HeadVars0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_33, (MR_Integer) 4))));
    ClausesRep0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_33, (MR_Integer) 5))));
    ItemNumbers_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_33, (MR_Integer) 6))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_33, (MR_Integer) 8)));
    check_hlds__polymorphism__setup_headvars_9_p_0(PredInfo0_8, HeadVars0_16, &HeadVars_22, ExtraArgModes_11, &UnconstrainedTVars_23, &ExtraTypeInfoHeadVars_24, &ExistTypeClassInfoHeadVars_25, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_37_37);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_17, &Clauses0_26);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_clause_info_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (PredInfo0_8));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (HeadVars0_16));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (HeadVars_22));
      MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (UnconstrainedTVars_23));
      MR_hl_field(MR_mktag(0), Var_38, 7) = ((MR_Box) (ExtraTypeInfoHeadVars_24));
      MR_hl_field(MR_mktag(0), Var_38, 8) = ((MR_Box) (ExistTypeClassInfoHeadVars_25));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), Var_38, Clauses0_26, &Clauses_27, ((MR_Box) (STATE_VARIABLE_Info_37_37)), &conv2_STATE_VARIABLE_Info_35);
    *STATE_VARIABLE_Info_35 = ((MR_Word) (conv2_STATE_VARIABLE_Info_35));
    VarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_35, (MR_Integer) 1))));
    VarTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_35, (MR_Integer) 2))));
    RttiVarMaps_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_35, (MR_Integer) 3))));
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_27, &ClausesRep_31);
    hlds__vartypes__init_vartypes_1_p_0(&TVarNameMap_32);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ClausesInfo_34 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExplicitVarTypes_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TVarNameMap_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_18));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_30));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (packed_word_0);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_HeadVars_0_47,
  MR_Word * STATE_VARIABLE_HeadVars_48,
  MR_Word * ExtraArgModes_12,
  MR_Word * UnconstrainedTVars_13,
  MR_Word * ExtraHeadTypeInfoVars_14,
  MR_Word * ExistHeadTypeClassInfoVars_15,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_Word Origin_17;
    MR_Word ExtraArgModes0_18;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_17);
    ExtraArgModes0_18 = hlds__hlds_args__poly_arg_vector_init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0));
    switch (MR_tag((MR_Word) Origin_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstanceMethodConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_17, (MR_Integer) 1))));

          check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(PredInfo_10, InstanceMethodConstraints_20, STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(
  MR_Word PredInfo_12,
  MR_Word InstanceMethodConstraints_13,
  MR_Word STATE_VARIABLE_HeadVars_0_36,
  MR_Word * STATE_VARIABLE_HeadVars_37,
  MR_Word * UnconstrainedTVars_15,
  MR_Word * ExtraHeadTypeInfoVars_16,
  MR_Word * ExistHeadTypeClassInfoVars_17,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_38,
  MR_Word * STATE_VARIABLE_ExtraArgModes_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Word InstanceTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 1))));
    MR_Word InstanceConstraints_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 2))));
    MR_Word ClassContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 3))));
    MR_Word InstanceTVars_24;
    MR_Word UnconstrainedInstanceTVars_25;
    MR_Word ArgTypeVarSet_26;
    MR_Word UnconstrainedInstanceTypeInfoVars_29;
    MR_Word InstanceHeadTypeClassInfoVars_30;
    MR_Word RttiVarMaps0_31;
    MR_Word RttiVarMaps_32;
    MR_Word InMode_33;
    MR_Word UnconstrainedInstanceTypeInfoModes_34;
    MR_Word InstanceHeadTypeClassInfoModes_35;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_HeadVars_45_45;
    MR_Word STATE_VARIABLE_HeadVars_46_46;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Word STATE_VARIABLE_ExtraArgModes_51_51;
    MR_Word STATE_VARIABLE_ExtraArgModes_52_52;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv2_STATE_VARIABLE_Info_44_44;
    MR_Box conv4_RttiVarMaps_32;
    MR_Word Var_99;

    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_21, &InstanceTVars_24);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTVars_24, InstanceConstraints_22, &UnconstrainedInstanceTVars_25);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_12, &ArgTypeVarSet_26, &Var_27, &Var_28);
    check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedInstanceTVars_25, ArgTypeVarSet_26, &UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_42_42);
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_8[0]), InstanceConstraints_22, &InstanceHeadTypeClassInfoVars_30, ((MR_Box) (STATE_VARIABLE_Info_42_42)), &conv2_STATE_VARIABLE_Info_44_44);
    STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv2_STATE_VARIABLE_Info_44_44));
    hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_HeadVars_0_36, &STATE_VARIABLE_HeadVars_45_45);
    hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), InstanceHeadTypeClassInfoVars_30, STATE_VARIABLE_HeadVars_45_45, &STATE_VARIABLE_HeadVars_46_46);
    RttiVarMaps0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[21]), InstanceHeadTypeClassInfoVars_30, ((MR_Box) (RttiVarMaps0_31)), &conv4_RttiVarMaps_32);
    RttiVarMaps_32 = ((MR_Word) (conv4_RttiVarMaps_32));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
    succeeded = (((MR_Word) RttiVarMaps_32) == ((MR_Word) Var_99));
    if (succeeded)
      STATE_VARIABLE_Info_48_48 = STATE_VARIABLE_Info_44_44;
    else
    {
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 0))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
      MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 4))));
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 7))));
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 8))));
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 9))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 10))));
      MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 11))));
      MR_Integer Var_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 12))));
      MR_Integer Var_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 13))));
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 14))));
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 15))));

      {
        STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (RttiVarMaps_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 6) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 7) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 8) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 9) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 10) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 11) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 12) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 13) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 14) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 15) = ((MR_Box) (Var_131));
      }
    }
    parse_tree__prog_mode__in_mode_1_p_0(&InMode_33);
    Var_49 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_29);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_49, ((MR_Box) (InMode_33)), &UnconstrainedInstanceTypeInfoModes_34);
    Var_50 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), InstanceHeadTypeClassInfoVars_30);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_50, ((MR_Box) (InMode_33)), &InstanceHeadTypeClassInfoModes_35);
    hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnconstrainedInstanceTypeInfoModes_34, STATE_VARIABLE_ExtraArgModes_0_38, &STATE_VARIABLE_ExtraArgModes_51_51);
    hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InstanceHeadTypeClassInfoModes_35, STATE_VARIABLE_ExtraArgModes_51_51, &STATE_VARIABLE_ExtraArgModes_52_52);
    check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_12, ClassContext_23, InstanceTVars_24, UnconstrainedInstanceTVars_25, UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_HeadVars_46_46, STATE_VARIABLE_HeadVars_37, UnconstrainedTVars_15, ExtraHeadTypeInfoVars_16, ExistHeadTypeClassInfoVars_17, STATE_VARIABLE_ExtraArgModes_52_52, STATE_VARIABLE_ExtraArgModes_39, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_41);
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_91;

    check_hlds__polymorphism__IntroducedFrom__pred__setup_headvars_2__948__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_91);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_91));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_71,
  MR_Word * STATE_VARIABLE_ExtraArgModes_72,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypeVarSet_27;
    MR_Word ExistQVars_28;
    MR_Word ArgTypes_29;
    MR_Word UnivConstraints_30;
    MR_Word ExistConstraints_31;
    MR_Word UnivConstrainedTVars_32;
    MR_Word ExistConstrainedTVars_33;
    MR_Word ConstraintMap_34;
    MR_Word ActualExistConstraints_35;
    MR_Word RecordExistQLocns_37;
    MR_Word UnivHeadTypeClassInfoVars_38;
    MR_Word HeadTypeVars_39;
    MR_Word UnconstrainedTVars0_40;
    MR_Word UnconstrainedTVars1_41;
    MR_Word UnconstrainedTVars2_42;
    MR_Word UnconstrainedTVars_43;
    MR_Word UnconstrainedUnivTVars_44;
    MR_Word UnconstrainedExistTVars_45;
    MR_Word ExistHeadTypeInfoVars_46;
    MR_Word UnivHeadTypeInfoVars_49;
    MR_Word ExtraHeadTypeInfoVars_50;
    MR_Word HeadVars1_51;
    MR_Word HeadVars2_52;
    MR_Word HeadVars3_53;
    MR_Word In_54;
    MR_Word Out_55;
    MR_Integer NumUnconstrainedUnivTVars_56;
    MR_Integer NumUnconstrainedExistTVars_57;
    MR_Integer NumUnivClassInfoVars_58;
    MR_Integer NumExistClassInfoVars_59;
    MR_Word UnivTypeInfoModes_60;
    MR_Word ExistTypeInfoModes_61;
    MR_Word UnivTypeClassInfoModes_62;
    MR_Word ExistTypeClassInfoModes_63;
    MR_Word UnivTypeLocns_68;
    MR_Word ExistTypeLocns_69;
    MR_Word UnconstrainedInstanceTypeLocns_70;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word STATE_VARIABLE_Info_79_79;
    MR_Word STATE_VARIABLE_Info_80_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_ExtraArgModes_85_85;
    MR_Word STATE_VARIABLE_ExtraArgModes_86_86;
    MR_Word STATE_VARIABLE_ExtraArgModes_87_87;
    MR_Word STATE_VARIABLE_RttiVarMaps_89_89;
    MR_Word STATE_VARIABLE_RttiVarMaps_93_93;
    MR_Word STATE_VARIABLE_RttiVarMaps_95_95;
    MR_Word STATE_VARIABLE_RttiVarMaps_97_97;
    MR_Word STATE_VARIABLE_RttiVarMaps_99_99;
    MR_Word PredMarkers_36;
    MR_Box conv2_STATE_VARIABLE_RttiVarMaps_93_93;
    MR_Box conv4_STATE_VARIABLE_RttiVarMaps_95_95;
    MR_Box conv6_STATE_VARIABLE_RttiVarMaps_97_97;
    MR_Box conv8_STATE_VARIABLE_RttiVarMaps_99_99;
    MR_Word Var_163;

    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_15, &ArgTypeVarSet_27, &ExistQVars_28, &ArgTypes_29);
    UnivConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 0))));
    ExistConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 1))));
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(UnivConstraints_30, &UnivConstrainedTVars_32);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistConstraints_31, &ExistConstrainedTVars_33);
    ConstraintMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_73, (MR_Integer) 7))));
    check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(ConstraintMap_34, ExistConstraints_31, &ActualExistConstraints_35);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &PredMarkers_36);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_36, (MR_Integer) 10);
    if (succeeded)
      RecordExistQLocns_37 = (MR_Integer) 0;
    else
      RecordExistQLocns_37 = (MR_Integer) 1;
    check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(RecordExistQLocns_37, ActualExistConstraints_35, ExistHeadTypeClassInfoVars_24, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_76_76);
    check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, UnivConstraints_30, &UnivHeadTypeClassInfoVars_38, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_78_78);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_29, &HeadTypeVars_39);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), HeadTypeVars_39, UnivConstrainedTVars_32, &UnconstrainedTVars0_40);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars0_40, ExistConstrainedTVars_33, &UnconstrainedTVars1_41);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars1_41, InstanceTVars_17, &UnconstrainedTVars2_42);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars2_42, &UnconstrainedTVars_43);
    if ((ExistQVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      UnconstrainedUnivTVars_44 = UnconstrainedTVars_43;
      UnconstrainedExistTVars_45 = (MR_Word) ((MR_Unsigned) 0U);
      ExistHeadTypeInfoVars_46 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_79_79 = STATE_VARIABLE_Info_78_78;
    }
    else
    {
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars_43, ExistQVars_28, &UnconstrainedUnivTVars_44);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars_43, UnconstrainedUnivTVars_44, &UnconstrainedExistTVars_45);
      check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedExistTVars_45, ArgTypeVarSet_27, &ExistHeadTypeInfoVars_46, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_79_79);
    }
    check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedUnivTVars_44, ArgTypeVarSet_27, &UnivHeadTypeInfoVars_49, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_80_80);
    ExtraHeadTypeInfoVars_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeInfoVars_49, ExistHeadTypeInfoVars_46);
    *AllExtraHeadTypeInfoVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_19, ExtraHeadTypeInfoVars_50);
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (UnconstrainedExistTVars_45));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (UnconstrainedUnivTVars_44));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (UnconstrainedInstanceTVars_18));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), Var_81, AllUnconstrainedTVars_22);
    hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeInfoVars_49, HeadVars0_20, &HeadVars1_51);
    hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExistHeadTypeInfoVars_46, HeadVars1_51, &HeadVars2_52);
    hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeClassInfoVars_38, HeadVars2_52, &HeadVars3_53);
    hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), *ExistHeadTypeClassInfoVars_24, HeadVars3_53, HeadVars_21);
    parse_tree__prog_mode__in_mode_1_p_0(&In_54);
    parse_tree__prog_mode__out_mode_1_p_0(&Out_55);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedUnivTVars_44, &NumUnconstrainedUnivTVars_56);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedExistTVars_45, &NumUnconstrainedExistTVars_57);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeClassInfoVars_38, &NumUnivClassInfoVars_58);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), *ExistHeadTypeClassInfoVars_24, &NumExistClassInfoVars_59);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedUnivTVars_56, ((MR_Box) (In_54)), &UnivTypeInfoModes_60);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedExistTVars_57, ((MR_Box) (Out_55)), &ExistTypeInfoModes_61);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnivClassInfoVars_58, ((MR_Box) (In_54)), &UnivTypeClassInfoModes_62);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExistClassInfoVars_59, ((MR_Box) (Out_55)), &ExistTypeClassInfoModes_63);
    hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeInfoModes_60, STATE_VARIABLE_ExtraArgModes_0_71, &STATE_VARIABLE_ExtraArgModes_85_85);
    hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeInfoModes_61, STATE_VARIABLE_ExtraArgModes_85_85, &STATE_VARIABLE_ExtraArgModes_86_86);
    hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeClassInfoModes_62, STATE_VARIABLE_ExtraArgModes_86_86, &STATE_VARIABLE_ExtraArgModes_87_87);
    hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeClassInfoModes_63, STATE_VARIABLE_ExtraArgModes_87_87, STATE_VARIABLE_ExtraArgModes_72);
    STATE_VARIABLE_RttiVarMaps_89_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[16]), UnivHeadTypeInfoVars_49, &UnivTypeLocns_68);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[17]), UnconstrainedUnivTVars_44, UnivTypeLocns_68, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_89_89)), &conv2_STATE_VARIABLE_RttiVarMaps_93_93);
    STATE_VARIABLE_RttiVarMaps_93_93 = ((MR_Word) (conv2_STATE_VARIABLE_RttiVarMaps_93_93));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[16]), ExistHeadTypeInfoVars_46, &ExistTypeLocns_69);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[18]), UnconstrainedExistTVars_45, ExistTypeLocns_69, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_93_93)), &conv4_STATE_VARIABLE_RttiVarMaps_95_95);
    STATE_VARIABLE_RttiVarMaps_95_95 = ((MR_Word) (conv4_STATE_VARIABLE_RttiVarMaps_95_95));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[16]), UnconstrainedInstanceTypeInfoVars_19, &UnconstrainedInstanceTypeLocns_70);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[19]), UnconstrainedInstanceTVars_18, UnconstrainedInstanceTypeLocns_70, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_95_95)), &conv6_STATE_VARIABLE_RttiVarMaps_97_97);
    STATE_VARIABLE_RttiVarMaps_97_97 = ((MR_Word) (conv6_STATE_VARIABLE_RttiVarMaps_97_97));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[20]), UnivHeadTypeClassInfoVars_38, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_97_97)), &conv8_STATE_VARIABLE_RttiVarMaps_99_99);
    STATE_VARIABLE_RttiVarMaps_99_99 = ((MR_Word) (conv8_STATE_VARIABLE_RttiVarMaps_99_99));
    Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
    succeeded = (((MR_Word) STATE_VARIABLE_RttiVarMaps_99_99) == ((MR_Word) Var_163));
    if (succeeded)
      *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_80_80;
    else
    {
      MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 0))));
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
      MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
      MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 4))));
      MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 5))));
      MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 6))));
      MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 7))));
      MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 8))));
      MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 9))));
      MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 10))));
      MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 11))));
      MR_Integer Var_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 12))));
      MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 13))));
      MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 14))));
      MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 15))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_74 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_180));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_181));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_RttiVarMaps_99_99));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_184));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_187));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_188));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_189));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_190));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_191));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_192));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_193));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_194));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_195));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_12;
    MR_Box conv2_STATE_VARIABLE_Info_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (RecordLocns_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0), Var_12, Constraints_7, ExtraHeadVars_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word TypeVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TVarKindMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
      MR_Word Kind_16;
      MR_Word Type_17;
      MR_Word Var_18;
      MR_Word TypeInfoVars1_23;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_String TypeVarName_19;

      parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_15, TypeVar_10, &Kind_16);
      {
        Type_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Type_17, 0) = ((MR_Box) (TypeVar_10));
        MR_hl_field(MR_mktag(0), Type_17, 1) = ((MR_Box) (Kind_16));
      }
      check_hlds__polymorphism__new_type_info_var_5_p_0(Type_17, (MR_Integer) 0, &Var_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_2, TypeVar_10, &TypeVarName_19);
      if (succeeded)
      {
        MR_Word VarSet0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 1))));
        MR_String VarName_21;
        MR_Word VarSet_22;
        MR_Word Var_74;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Integer Var_86;
        MR_Integer Var_87;
        MR_Word Var_88;
        MR_Word Var_89;

        VarName_21 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_19);
        mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, VarName_21, VarSet0_20, &VarSet_22);
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 0))));
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 2))));
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3))));
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 4))));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 5))));
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 6))));
        Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 7))));
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 8))));
        Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 9))));
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 10))));
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 11))));
        Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 12))));
        Var_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 13))));
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 14))));
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 15))));
        {
          STATE_VARIABLE_Info_29_29 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 0) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 1) = ((MR_Box) (VarSet_22));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 2) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 3) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 4) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 5) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 6) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 7) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 8) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 9) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 10) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 11) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 12) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 13) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 14) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 15) = ((MR_Box) (Var_89));
        }
      }
      else
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_27_27;
      check_hlds__polymorphism__make_head_vars_5_p_0(TypeVars_11, TypeVarSet_2, &TypeInfoVars1_23, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeInfoVars1_23));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__new_type_info_var_5_p_0(
  MR_Word Type_6,
  MR_Word Kind_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
    MR_Word RttiVarMaps0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
    MR_Word VarSet_13;
    MR_Word VarTypes_14;
    MR_Word RttiVarMaps_15;
    MR_Word Var_82;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Integer Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Integer Var_110;
    MR_Integer Var_111;
    MR_Word Var_112;
    MR_Word Var_113;

    check_hlds__polymorphism__new_type_info_var_raw_9_p_0(Type_6, Kind_7, Var_8, VarSet0_10, &VarSet_13, VarTypes0_11, &VarTypes_14, RttiVarMaps0_12, &RttiVarMaps_15);
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11))));
    Var_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12))));
    Var_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15))));
    Var_98 = Var_82;
    Var_99 = VarSet_13;
    Var_102 = Var_86;
    Var_103 = Var_87;
    Var_104 = Var_88;
    Var_105 = Var_89;
    Var_106 = Var_90;
    Var_107 = Var_91;
    Var_108 = Var_92;
    Var_109 = Var_93;
    Var_110 = Var_94;
    Var_111 = Var_95;
    Var_112 = Var_96;
    Var_113 = Var_97;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_113));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism__new_type_info_var_raw_9_p_0(
  MR_Word Type_10,
  MR_Word Kind_11,
  MR_Word * Var_12,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_24,
  MR_Word * STATE_VARIABLE_RttiVarMaps_25)
{
  {
    MR_Integer VarNum_16;
    MR_String VarNumStr_17;
    MR_String Prefix_18;
    MR_String Name_19;
    MR_Word STATE_VARIABLE_VarSet_26_26;
    MR_Word Var_29;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_26);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, &VarNum_16);
    mercury__string__int_to_string_2_p_0(VarNum_16, &VarNumStr_17);
    switch (Kind_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Prefix_18 = (MR_String) "TypeCtorInfo_";
          *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
        }
        break;
      case (MR_Integer) 0:
        {
          Prefix_18 = (MR_String) "TypeInfo_";
          hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*Var_12, Type_10, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
        }
        break;
    }
    Name_19 = mercury__string__f_43_43_2_f_0(Prefix_18, VarNumStr_17);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_12, Name_19, STATE_VARIABLE_VarSet_26_26, STATE_VARIABLE_VarSet_21);
    Var_29 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Var_29, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word ExistConstraints_5,
  MR_Word * ActualExistConstraints_6)
{
  {
    MR_bool succeeded;
    MR_Integer NumExistConstraints_7;
    MR_Word ActualExistConstraintsPrime_8;
    MR_Word Var_10;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistConstraints_5, &NumExistConstraints_7);
    Var_10 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
    succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(ConstraintMap_4, (MR_Integer) 0, Var_10, NumExistConstraints_7, &ActualExistConstraintsPrime_8);
    if (succeeded)
      *ActualExistConstraints_6 = ActualExistConstraintsPrime_8;
    else
      *ActualExistConstraints_6 = ExistConstraints_5;
  }
}

static void MR_CALL 
check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_29,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_10;
    MR_Word PredInfo0_11;
    MR_Word ClausesInfo0_12;
    MR_Word VarTypes0_13;
    MR_Word HeadVars_14;
    MR_Word TypeVarSet_15;
    MR_Word ExistQVars_16;
    MR_Word ArgTypes0_17;
    MR_Word ExtraHeadVarList_18;
    MR_Word OldHeadVarList_19;
    MR_Word ExtraArgTypes_20;
    MR_Word ArgTypes_21;
    MR_Word PredInfo1_22;
    MR_Word PredInfo_27;
    MR_Word PredTable_28;
    MR_Box conv0_PredInfo0_11;
    MR_Word Subn_26;
    MR_Word OldHeadVarTypes_25;
    MR_Word TypeInfo_42_42;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_11);
    PredInfo0_11 = ((MR_Word) (conv0_PredInfo0_11));
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_12);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo0_12, &VarTypes0_13);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_12, &HeadVars_14);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_11, &TypeVarSet_15, &ExistQVars_16, &ArgTypes0_17);
    hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars_14, &ExtraHeadVarList_18, &OldHeadVarList_19);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_13, ExtraHeadVarList_18, &ExtraArgTypes_20);
    ArgTypes_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraArgTypes_20, ArgTypes0_17);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_15, ExistQVars_16, ArgTypes_21, PredInfo0_11, &PredInfo1_22);
    succeeded = (ExistQVars_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_13, OldHeadVarList_19, &OldHeadVarTypes_25);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes0_17, OldHeadVarTypes_25, &Subn_26);
      if (succeeded)
      {
        TypeInfo_42_42 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]);
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_42_42, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subn_26);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_set_existq_tvar_binding_3_p_0(Subn_26, PredInfo1_22, &PredInfo_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ExistsCastPredIds_30 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExistsCastPredIds_0_29));
      }
    }
    else
    {
      PredInfo_27 = PredInfo1_22;
      *STATE_VARIABLE_ExistsCastPredIds_30 = STATE_VARIABLE_ExistsCastPredIds_0_29;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_27)), PredTable0_10, &PredTable_28);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ExistsCastPredIds_30;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_32;

    check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ExistsCastPredIds_30, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_32);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ExistsCastPredIds_30));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_32));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_SafeToContinue_17;
    MR_Word conv1_STATE_VARIABLE_Specs_19;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_21;

    check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SafeToContinue_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ModuleInfo_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SafeToContinue_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_19));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_21));
  }
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word * ExistsCastPredIds_7,
  MR_Word * SafeToContinue_8,
  MR_Word * Specs_9)
{
  {
    MR_Word Preds0_10;
    MR_Word PredIds0_11;
    MR_Word Preds1_12;
    MR_Word PredIds1_13;
    MR_Word STATE_VARIABLE_ModuleInfo_19_19;
    MR_Box conv5_SafeToContinue_8;
    MR_Box conv4_Specs_9;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_19_19;
    MR_Box conv9_ExistsCastPredIds_7;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_15;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &Preds0_10);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_10, &PredIds0_11);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[14]), PredIds0_11, ((MR_Box) ((MR_Integer) 0)), &conv5_SafeToContinue_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_19_19);
    *SafeToContinue_8 = ((MR_Word) (conv5_SafeToContinue_8));
    *Specs_9 = ((MR_Word) (conv4_Specs_9));
    STATE_VARIABLE_ModuleInfo_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_19_19));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_19_19, &Preds1_12);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds1_12, &PredIds1_13);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[15]), PredIds1_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ExistsCastPredIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_19_19)), &conv8_STATE_VARIABLE_ModuleInfo_15);
    *ExistsCastPredIds_7 = ((MR_Word) (conv9_ExistsCastPredIds_7));
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_15));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____cache_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____cache_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____cache_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____cache_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_or_var_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____const_or_var_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____const_or_var_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____const_or_var_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____const_struct_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____const_struct_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____const_struct_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____const_struct_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_const_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____int_const_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____int_const_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____int_const_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____int_or_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____int_or_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____int_or_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____int_or_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____poly_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____poly_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____poly_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____poly_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____record_type_info_locns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____record_type_info_locns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____tci_var_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____tci_var_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____type_info_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____type_info_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____type_info_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____type_info_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____type_info_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____type_info_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____typeclass_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____typeclass_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____typeclass_info_map_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____typeclass_info_map_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____var_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____var_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__polymorphism__init(void)
{
}

void mercury__check_hlds__polymorphism__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_cache_maps_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_or_var_arg_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_const_struct_var_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_int_const_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_int_or_var_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_poly_info_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_tci_var_kind_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_type_info_kind_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_type_info_var_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_typeclass_info_map_entry_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_var_maps_0);
}

void mercury__check_hlds__polymorphism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__check_hlds__polymorphism__required_init(void)
{
	check_hlds__polymorphism__user_init_pred_0();
	check_hlds__polymorphism__user_init_pred_1();
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism.
