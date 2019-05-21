/*
** Automatically generated from `ml_gen_info.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module ml_backend.ml_gen_info. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_gen_info__init
ENDINIT
*/

#include "ml_backend.ml_gen_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
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
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0;

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[12];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[12];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[12];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[5];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1];

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_label_func_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_label_func_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[4][3];




static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 = {
  (MR_String) "cond_seq",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "cond_seq",
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 = {
  (MR_String) "conv_seq",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "conv_seq",
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____label_num_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____label_num_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "label_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_const_struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8] = {
  (MR_String) "mgi_const_var_map",
  (MR_String) "mgi_func_counter",
  (MR_String) "mgi_conv_var_counter",
  (MR_String) "mgi_used_succeeded_var",
  (MR_String) "mgi_closure_wrapper_defns",
  (MR_String) "mgi_global_data",
  (MR_String) "mgi_rare_info",
  (MR_String) "mgi_sub_info"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 = {
  (MR_String) "ml_gen_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[12] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[12] = {
  (MR_String) "mgri_module_info",
  (MR_String) "mgri_pred_id",
  (MR_String) "mgri_proc_id",
  (MR_String) "mgri_varset",
  (MR_String) "mgri_var_types",
  (MR_String) "mgri_high_level_data",
  (MR_String) "mgri_target",
  (MR_String) "mgri_gc",
  (MR_String) "mgri_const_struct_map",
  (MR_String) "mgri_var_lvals",
  (MR_String) "mgri_env_var_names",
  (MR_String) "mgri_disabled_warnings"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[12] = {
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
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 3,
    (MR_Integer) 3
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
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0 = {
  (MR_String) "ml_gen_rare_info",
  (MR_Integer) 12,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_rare_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[5] = {
  (MR_String) "mgsi_byref_output_vars",
  (MR_String) "mgsi_label_counter",
  (MR_String) "mgsi_aux_var_counter",
  (MR_String) "mgsi_cond_var_counter",
  (MR_String) "mgsi_success_cont_stack"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 = {
  (MR_String) "ml_gen_sub_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_sub_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 = {
  (MR_String) "ml_ground_term",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_label_func_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_label_func_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_label_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_lval_0
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 = {
  (MR_String) "success_cont",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____success_cont_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____success_cont_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "success_cont",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0
};

void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_15 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_16 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_15 == ml_backend__ml_gen_info__CastY_16);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__Var_12;

      {
        ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__Var_12, ml_backend__ml_gen_info__ArgX1_4, ml_backend__ml_gen_info__ArgY1_5);
      }
      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_12 == (MR_Integer) 0);
      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
      if (ml_backend__ml_gen_info__succeeded)
        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_12;
      else
      {
        MR_Word ml_backend__ml_gen_info__Var_13;

        {
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__Var_13, ml_backend__ml_gen_info__ArgX2_6, ml_backend__ml_gen_info__ArgY2_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_13 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_13;
        else
        {
          MR_Word ml_backend__ml_gen_info__Var_14;

          {
            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7], &ml_backend__ml_gen_info__Var_14, ((MR_Box) (ml_backend__ml_gen_info__ArgX3_8)), ((MR_Box) (ml_backend__ml_gen_info__ArgY3_9)));
          }
          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_14 == (MR_Integer) 0);
          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
          if (ml_backend__ml_gen_info__succeeded)
            *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_14;
          else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[8], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_10)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_11)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_11 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_12 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_11 == ml_backend__ml_gen_info__CastY_12);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_gen_info__TypeInfo_15_15;
      MR_Word ml_backend__ml_gen_info__TypeInfo_16_16;
      MR_Word ml_backend__ml_gen_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));

      {
        ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__ArgX1_3, ml_backend__ml_gen_info__ArgY1_4);
      }
      if (ml_backend__ml_gen_info__succeeded)
      {
        {
          ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__ArgX2_5, ml_backend__ml_gen_info__ArgY2_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
        {
          ml_backend__ml_gen_info__TypeInfo_15_15 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7];
          {
            ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_15_15, ((MR_Box) (ml_backend__ml_gen_info__ArgX3_7)), ((MR_Box) (ml_backend__ml_gen_info__ArgY3_8)));
          }
          if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__TypeInfo_16_16 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[8];
            {
              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_16_16, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_9)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_10)));
            }
          }
        }
      }
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_label_func_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Integer ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Integer ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__Cast_HeadVar1_4, ml_backend__ml_gen_info__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_label_func_0_0(
  MR_Integer ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Integer ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar1_3 = ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar2_4 = ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Cast_HeadVar1_3 == ml_backend__ml_gen_info__Cast_HeadVar2_4);
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_3 = ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_4 = ml_backend__ml_gen_info__HeadVar__2_2;

    {
      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_12 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_13 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_12 == ml_backend__ml_gen_info__CastY_13);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_10;

      {
        ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__Var_10, ml_backend__ml_gen_info__ArgX1_4, ml_backend__ml_gen_info__ArgY1_5);
      }
      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_10 == (MR_Integer) 0);
      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
      if (ml_backend__ml_gen_info__succeeded)
        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_10;
      else
      {
        MR_Word ml_backend__ml_gen_info__Var_11;

        {
          parse_tree__prog_data____Compare____mer_type_0_0(&ml_backend__ml_gen_info__Var_11, ml_backend__ml_gen_info__ArgX2_6, ml_backend__ml_gen_info__ArgY2_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_11 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_11;
        else
          {
            ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__ArgX3_8, ml_backend__ml_gen_info__ArgY3_9);
          }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_9 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_10 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_9 == ml_backend__ml_gen_info__CastY_10);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));

      {
        ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__ArgX1_3, ml_backend__ml_gen_info__ArgY1_4);
      }
      if (ml_backend__ml_gen_info__succeeded)
      {
        {
          ml_backend__ml_gen_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_gen_info__ArgX2_5, ml_backend__ml_gen_info__ArgY2_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_gen_info__ArgX3_7, ml_backend__ml_gen_info__ArgY3_8);
          }
      }
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_13 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_14 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_13 == ml_backend__ml_gen_info__CastY_14);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_gen_info__TypeInfo_19_19;
      MR_Word ml_backend__ml_gen_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));

      {
        ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], ((MR_Box) (ml_backend__ml_gen_info__ArgX1_3)), ((MR_Box) (ml_backend__ml_gen_info__ArgY1_4)));
      }
      if (ml_backend__ml_gen_info__succeeded)
      {
        {
          ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX2_5, ml_backend__ml_gen_info__ArgY2_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
        {
          {
            ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX3_7, ml_backend__ml_gen_info__ArgY3_8);
          }
          if (ml_backend__ml_gen_info__succeeded)
          {
            {
              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX4_9, ml_backend__ml_gen_info__ArgY4_10);
            }
            if (ml_backend__ml_gen_info__succeeded)
            {
              ml_backend__ml_gen_info__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6];
              {
                ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_19_19, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_11)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_12)));
              }
            }
          }
        }
      }
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_39 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_40 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_39 == ml_backend__ml_gen_info__CastY_40);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_gen_info__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ml_backend__ml_gen_info__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgX6_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ml_backend__ml_gen_info__ArgY6_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ml_backend__ml_gen_info__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ml_backend__ml_gen_info__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ml_backend__ml_gen_info__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ml_backend__ml_gen_info__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ml_backend__ml_gen_info__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ml_backend__ml_gen_info__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ml_backend__ml_gen_info__ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ml_backend__ml_gen_info__ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ml_backend__ml_gen_info__Var_28;

      {
        hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_gen_info__Var_28, ml_backend__ml_gen_info__ArgX1_4, ml_backend__ml_gen_info__ArgY1_5);
      }
      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_28 == (MR_Integer) 0);
      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
      if (ml_backend__ml_gen_info__succeeded)
        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_28;
      else
      {
        MR_Word ml_backend__ml_gen_info__Var_29;

        {
          hlds__hlds_pred____Compare____pred_id_0_0(&ml_backend__ml_gen_info__Var_29, ml_backend__ml_gen_info__ArgX2_6, ml_backend__ml_gen_info__ArgY2_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_29 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_29;
        else
        {
          MR_Word ml_backend__ml_gen_info__Var_30;

          {
            mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_30, ml_backend__ml_gen_info__ArgX3_8, ml_backend__ml_gen_info__ArgY3_9);
          }
          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_30 == (MR_Integer) 0);
          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
          if (ml_backend__ml_gen_info__succeeded)
            *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_30;
          else
          {
            MR_Word ml_backend__ml_gen_info__Var_31;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3], &ml_backend__ml_gen_info__Var_31, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_10)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_11)));
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_31 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_31;
            else
            {
              MR_Word ml_backend__ml_gen_info__Var_32;

              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3], &ml_backend__ml_gen_info__Var_32, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_12)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_13)));
              }
              ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_32 == (MR_Integer) 0);
              ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
              if (ml_backend__ml_gen_info__succeeded)
                *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_32;
              else
              {
                MR_Word ml_backend__ml_gen_info__Var_33;
                MR_Integer ml_backend__ml_gen_info__Var_53 = (MR_Integer) ml_backend__ml_gen_info__ArgX6_14;
                MR_Integer ml_backend__ml_gen_info__Var_54 = (MR_Integer) ml_backend__ml_gen_info__ArgY6_15;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_33, ml_backend__ml_gen_info__Var_53, ml_backend__ml_gen_info__Var_54);
                }
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_33 == (MR_Integer) 0);
                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                if (ml_backend__ml_gen_info__succeeded)
                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_33;
                else
                {
                  MR_Word ml_backend__ml_gen_info__Var_34;
                  MR_Integer ml_backend__ml_gen_info__Var_55 = (MR_Integer) ml_backend__ml_gen_info__ArgX7_16;
                  MR_Integer ml_backend__ml_gen_info__Var_56 = (MR_Integer) ml_backend__ml_gen_info__ArgY7_17;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_34, ml_backend__ml_gen_info__Var_55, ml_backend__ml_gen_info__Var_56);
                  }
                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_34 == (MR_Integer) 0);
                  ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                  if (ml_backend__ml_gen_info__succeeded)
                    *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_34;
                  else
                  {
                    MR_Word ml_backend__ml_gen_info__Var_35;
                    MR_Integer ml_backend__ml_gen_info__Var_57 = (MR_Integer) ml_backend__ml_gen_info__ArgX8_18;
                    MR_Integer ml_backend__ml_gen_info__Var_58 = (MR_Integer) ml_backend__ml_gen_info__ArgY8_19;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_35, ml_backend__ml_gen_info__Var_57, ml_backend__ml_gen_info__Var_58);
                    }
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_35 == (MR_Integer) 0);
                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    if (ml_backend__ml_gen_info__succeeded)
                      *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_35;
                    else
                    {
                      MR_Word ml_backend__ml_gen_info__Var_36;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], &ml_backend__ml_gen_info__Var_36, ((MR_Box) (ml_backend__ml_gen_info__ArgX9_20)), ((MR_Box) (ml_backend__ml_gen_info__ArgY9_21)));
                      }
                      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_36 == (MR_Integer) 0);
                      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                      if (ml_backend__ml_gen_info__succeeded)
                        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_36;
                      else
                      {
                        MR_Word ml_backend__ml_gen_info__Var_37;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1], &ml_backend__ml_gen_info__Var_37, ((MR_Box) (ml_backend__ml_gen_info__ArgX10_22)), ((MR_Box) (ml_backend__ml_gen_info__ArgY10_23)));
                        }
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_37 == (MR_Integer) 0);
                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                        if (ml_backend__ml_gen_info__succeeded)
                          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_37;
                        else
                        {
                          MR_Word ml_backend__ml_gen_info__Var_38;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4], &ml_backend__ml_gen_info__Var_38, ((MR_Box) (ml_backend__ml_gen_info__ArgX11_24)), ((MR_Box) (ml_backend__ml_gen_info__ArgY11_25)));
                          }
                          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_38 == (MR_Integer) 0);
                          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                          if (ml_backend__ml_gen_info__succeeded)
                            *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_38;
                          else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__ArgX12_26)), ((MR_Box) (ml_backend__ml_gen_info__ArgY12_27)));
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

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_27 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_28 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_27 == ml_backend__ml_gen_info__CastY_28);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_gen_info__TypeInfo_31_31;
      MR_Word ml_backend__ml_gen_info__TypeInfo_32_32;
      MR_Word ml_backend__ml_gen_info__TypeInfo_33_33;
      MR_Word ml_backend__ml_gen_info__TypeInfo_34_34;
      MR_Word ml_backend__ml_gen_info__TypeInfo_35_35;
      MR_Word ml_backend__ml_gen_info__TypeInfo_36_36;
      MR_Word ml_backend__ml_gen_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_gen_info__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ml_backend__ml_gen_info__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgX6_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ml_backend__ml_gen_info__ArgY6_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ml_backend__ml_gen_info__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ml_backend__ml_gen_info__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ml_backend__ml_gen_info__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ml_backend__ml_gen_info__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ml_backend__ml_gen_info__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ml_backend__ml_gen_info__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ml_backend__ml_gen_info__ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ml_backend__ml_gen_info__ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 9)));

      {
        ml_backend__ml_gen_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_gen_info__ArgX1_3, ml_backend__ml_gen_info__ArgY1_4);
      }
      if (ml_backend__ml_gen_info__succeeded)
      {
        {
          ml_backend__ml_gen_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ml_backend__ml_gen_info__ArgX2_5, ml_backend__ml_gen_info__ArgY2_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
        {
          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX3_7 == ml_backend__ml_gen_info__ArgY3_8);
          if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__TypeInfo_31_31 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
            {
              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_31_31, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_9)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_10)));
            }
            if (ml_backend__ml_gen_info__succeeded)
            {
              ml_backend__ml_gen_info__TypeInfo_32_32 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3];
              {
                ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_32_32, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_11)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_12)));
              }
              if (ml_backend__ml_gen_info__succeeded)
              {
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX6_13 == ml_backend__ml_gen_info__ArgY6_14);
                if (ml_backend__ml_gen_info__succeeded)
                {
                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX7_15 == ml_backend__ml_gen_info__ArgY7_16);
                  if (ml_backend__ml_gen_info__succeeded)
                  {
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX8_17 == ml_backend__ml_gen_info__ArgY8_18);
                    if (ml_backend__ml_gen_info__succeeded)
                    {
                      ml_backend__ml_gen_info__TypeInfo_33_33 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2];
                      {
                        ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_33_33, ((MR_Box) (ml_backend__ml_gen_info__ArgX9_19)), ((MR_Box) (ml_backend__ml_gen_info__ArgY9_20)));
                      }
                      if (ml_backend__ml_gen_info__succeeded)
                      {
                        ml_backend__ml_gen_info__TypeInfo_34_34 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1];
                        {
                          ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_34_34, ((MR_Box) (ml_backend__ml_gen_info__ArgX10_21)), ((MR_Box) (ml_backend__ml_gen_info__ArgY10_22)));
                        }
                        if (ml_backend__ml_gen_info__succeeded)
                        {
                          ml_backend__ml_gen_info__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                          {
                            ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_gen_info__ArgX11_23)), ((MR_Box) (ml_backend__ml_gen_info__ArgY11_24)));
                          }
                          if (ml_backend__ml_gen_info__succeeded)
                          {
                            ml_backend__ml_gen_info__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                            {
                              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_gen_info__ArgX12_25)), ((MR_Box) (ml_backend__ml_gen_info__ArgY12_26)));
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
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_27 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_28 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_27 == ml_backend__ml_gen_info__CastY_28);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__Var_20;

      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], &ml_backend__ml_gen_info__Var_20, ((MR_Box) (ml_backend__ml_gen_info__ArgX1_4)), ((MR_Box) (ml_backend__ml_gen_info__ArgY1_5)));
      }
      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_20 == (MR_Integer) 0);
      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
      if (ml_backend__ml_gen_info__succeeded)
        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_20;
      else
      {
        MR_Word ml_backend__ml_gen_info__Var_21;

        {
          mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__Var_21, ml_backend__ml_gen_info__ArgX2_6, ml_backend__ml_gen_info__ArgY2_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_21 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_21;
        else
        {
          MR_Word ml_backend__ml_gen_info__Var_22;

          {
            mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__Var_22, ml_backend__ml_gen_info__ArgX3_8, ml_backend__ml_gen_info__ArgY3_9);
          }
          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_22 == (MR_Integer) 0);
          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
          if (ml_backend__ml_gen_info__succeeded)
            *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_22;
          else
          {
            MR_Word ml_backend__ml_gen_info__Var_23;
            MR_Integer ml_backend__ml_gen_info__Var_37 = (MR_Integer) ml_backend__ml_gen_info__ArgX4_10;
            MR_Integer ml_backend__ml_gen_info__Var_38 = (MR_Integer) ml_backend__ml_gen_info__ArgY4_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_23, ml_backend__ml_gen_info__Var_37, ml_backend__ml_gen_info__Var_38);
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_23 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_23;
            else
            {
              MR_Word ml_backend__ml_gen_info__Var_24;

              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2], &ml_backend__ml_gen_info__Var_24, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_12)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_13)));
              }
              ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_24 == (MR_Integer) 0);
              ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
              if (ml_backend__ml_gen_info__succeeded)
                *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_24;
              else
              {
                MR_Word ml_backend__ml_gen_info__Var_25;

                {
                  ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_gen_info__Var_25, ml_backend__ml_gen_info__ArgX6_14, ml_backend__ml_gen_info__ArgY6_15);
                }
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_25 == (MR_Integer) 0);
                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                if (ml_backend__ml_gen_info__succeeded)
                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_25;
                else
                {
                  MR_Word ml_backend__ml_gen_info__Var_26;
                  MR_Integer ml_backend__ml_gen_info__CastX_74 = (MR_Integer) ml_backend__ml_gen_info__ArgX7_16;
                  MR_Integer ml_backend__ml_gen_info__CastY_75 = (MR_Integer) ml_backend__ml_gen_info__ArgY7_17;

                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_74 == ml_backend__ml_gen_info__CastY_75);
                  if (ml_backend__ml_gen_info__succeeded)
                  {
                    ml_backend__ml_gen_info__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    if (ml_backend__ml_gen_info__succeeded)
                    {
                      ml_backend__ml_gen_info__Var_26 = (MR_Integer) 0;
                      ml_backend__ml_gen_info__succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word ml_backend__ml_gen_info__ArgX1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_gen_info__ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_gen_info__ArgX2_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_gen_info__ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 1)));
                    MR_Integer ml_backend__ml_gen_info__ArgX3_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 2)));
                    MR_Integer ml_backend__ml_gen_info__ArgY3_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_gen_info__ArgX4_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_gen_info__ArgY4_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_gen_info__ArgX5_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_gen_info__ArgY5_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_gen_info__ArgX6_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 5)))) & (MR_Integer) 1);
                    MR_Word ml_backend__ml_gen_info__ArgY6_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 5)))) & (MR_Integer) 1);
                    MR_Word ml_backend__ml_gen_info__ArgX7_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ml_backend__ml_gen_info__ArgY7_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ml_backend__ml_gen_info__ArgX8_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ml_backend__ml_gen_info__ArgY8_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ml_backend__ml_gen_info__ArgX9_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 6)));
                    MR_Word ml_backend__ml_gen_info__ArgY9_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 6)));
                    MR_Word ml_backend__ml_gen_info__ArgX10_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 7)));
                    MR_Word ml_backend__ml_gen_info__ArgY10_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 7)));
                    MR_Word ml_backend__ml_gen_info__ArgX11_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 8)));
                    MR_Word ml_backend__ml_gen_info__ArgY11_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 8)));
                    MR_Word ml_backend__ml_gen_info__ArgX12_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_16, (MR_Integer) 9)));
                    MR_Word ml_backend__ml_gen_info__ArgY12_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_17, (MR_Integer) 9)));
                    MR_Word ml_backend__ml_gen_info__Var_63;

                    {
                      hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_gen_info__Var_63, ml_backend__ml_gen_info__ArgX1_39, ml_backend__ml_gen_info__ArgY1_40);
                    }
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_63 == (MR_Integer) 0);
                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    if (ml_backend__ml_gen_info__succeeded)
                    {
                      ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_63;
                      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    }
                    else
                    {
                      MR_Word ml_backend__ml_gen_info__Var_64;

                      {
                        hlds__hlds_pred____Compare____pred_id_0_0(&ml_backend__ml_gen_info__Var_64, ml_backend__ml_gen_info__ArgX2_41, ml_backend__ml_gen_info__ArgY2_42);
                      }
                      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_64 == (MR_Integer) 0);
                      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                      if (ml_backend__ml_gen_info__succeeded)
                      {
                        ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_64;
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                      }
                      else
                      {
                        MR_Word ml_backend__ml_gen_info__Var_65;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_65, ml_backend__ml_gen_info__ArgX3_43, ml_backend__ml_gen_info__ArgY3_44);
                        }
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_65 == (MR_Integer) 0);
                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                        if (ml_backend__ml_gen_info__succeeded)
                        {
                          ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_65;
                          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                        }
                        else
                        {
                          MR_Word ml_backend__ml_gen_info__Var_66;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3], &ml_backend__ml_gen_info__Var_66, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_45)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_46)));
                          }
                          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_66 == (MR_Integer) 0);
                          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                          if (ml_backend__ml_gen_info__succeeded)
                          {
                            ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_66;
                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                          }
                          else
                          {
                            MR_Word ml_backend__ml_gen_info__Var_67;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3], &ml_backend__ml_gen_info__Var_67, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_47)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_48)));
                            }
                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_67 == (MR_Integer) 0);
                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                            if (ml_backend__ml_gen_info__succeeded)
                            {
                              ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_67;
                              ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                              ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                            }
                            else
                            {
                              MR_Word ml_backend__ml_gen_info__Var_68;
                              MR_Integer ml_backend__ml_gen_info__Var_88 = (MR_Integer) ml_backend__ml_gen_info__ArgX6_49;
                              MR_Integer ml_backend__ml_gen_info__Var_89 = (MR_Integer) ml_backend__ml_gen_info__ArgY6_50;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_68, ml_backend__ml_gen_info__Var_88, ml_backend__ml_gen_info__Var_89);
                              }
                              ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_68 == (MR_Integer) 0);
                              ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                              if (ml_backend__ml_gen_info__succeeded)
                              {
                                ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_68;
                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                              }
                              else
                              {
                                MR_Word ml_backend__ml_gen_info__Var_69;
                                MR_Integer ml_backend__ml_gen_info__Var_90 = (MR_Integer) ml_backend__ml_gen_info__ArgX7_51;
                                MR_Integer ml_backend__ml_gen_info__Var_91 = (MR_Integer) ml_backend__ml_gen_info__ArgY7_52;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_69, ml_backend__ml_gen_info__Var_90, ml_backend__ml_gen_info__Var_91);
                                }
                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_69 == (MR_Integer) 0);
                                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                if (ml_backend__ml_gen_info__succeeded)
                                {
                                  ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_69;
                                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                  ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                }
                                else
                                {
                                  MR_Word ml_backend__ml_gen_info__Var_70;
                                  MR_Integer ml_backend__ml_gen_info__Var_92 = (MR_Integer) ml_backend__ml_gen_info__ArgX8_53;
                                  MR_Integer ml_backend__ml_gen_info__Var_93 = (MR_Integer) ml_backend__ml_gen_info__ArgY8_54;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__Var_70, ml_backend__ml_gen_info__Var_92, ml_backend__ml_gen_info__Var_93);
                                  }
                                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_70 == (MR_Integer) 0);
                                  ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                  if (ml_backend__ml_gen_info__succeeded)
                                  {
                                    ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_70;
                                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                  }
                                  else
                                  {
                                    MR_Word ml_backend__ml_gen_info__Var_71;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], &ml_backend__ml_gen_info__Var_71, ((MR_Box) (ml_backend__ml_gen_info__ArgX9_55)), ((MR_Box) (ml_backend__ml_gen_info__ArgY9_56)));
                                    }
                                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_71 == (MR_Integer) 0);
                                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                    if (ml_backend__ml_gen_info__succeeded)
                                    {
                                      ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_71;
                                      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                    }
                                    else
                                    {
                                      MR_Word ml_backend__ml_gen_info__Var_72;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1], &ml_backend__ml_gen_info__Var_72, ((MR_Box) (ml_backend__ml_gen_info__ArgX10_57)), ((MR_Box) (ml_backend__ml_gen_info__ArgY10_58)));
                                      }
                                      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_72 == (MR_Integer) 0);
                                      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                      if (ml_backend__ml_gen_info__succeeded)
                                      {
                                        ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_72;
                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                      }
                                      else
                                      {
                                        MR_Word ml_backend__ml_gen_info__Var_73;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4], &ml_backend__ml_gen_info__Var_73, ((MR_Box) (ml_backend__ml_gen_info__ArgX11_59)), ((MR_Box) (ml_backend__ml_gen_info__ArgY11_60)));
                                        }
                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_73 == (MR_Integer) 0);
                                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                        if (ml_backend__ml_gen_info__succeeded)
                                        {
                                          ml_backend__ml_gen_info__Var_26 = ml_backend__ml_gen_info__Var_73;
                                          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                        }
                                        else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5], &ml_backend__ml_gen_info__Var_26, ((MR_Box) (ml_backend__ml_gen_info__ArgX12_61)), ((MR_Box) (ml_backend__ml_gen_info__ArgY12_62)));
                                          }
                                          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_26 == (MR_Integer) 0);
                                          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
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
                  if (ml_backend__ml_gen_info__succeeded)
                    *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_26;
                  else
                    {
                      ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__ArgX8_18, ml_backend__ml_gen_info__ArgY8_19);
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

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_18 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_19 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_18 == ml_backend__ml_gen_info__CastY_19);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ml_backend__ml_gen_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_14;

      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], &ml_backend__ml_gen_info__Var_14, ((MR_Box) (ml_backend__ml_gen_info__ArgX1_4)), ((MR_Box) (ml_backend__ml_gen_info__ArgY1_5)));
      }
      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_14 == (MR_Integer) 0);
      ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
      if (ml_backend__ml_gen_info__succeeded)
        *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_14;
      else
      {
        MR_Word ml_backend__ml_gen_info__Var_15;

        {
          mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__Var_15, ml_backend__ml_gen_info__ArgX2_6, ml_backend__ml_gen_info__ArgY2_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_15 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_15;
        else
        {
          MR_Word ml_backend__ml_gen_info__Var_16;

          {
            mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__Var_16, ml_backend__ml_gen_info__ArgX3_8, ml_backend__ml_gen_info__ArgY3_9);
          }
          ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_16 == (MR_Integer) 0);
          ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
          if (ml_backend__ml_gen_info__succeeded)
            *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_16;
          else
          {
            MR_Word ml_backend__ml_gen_info__Var_17;

            {
              mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__Var_17, ml_backend__ml_gen_info__ArgX4_10, ml_backend__ml_gen_info__ArgY4_11);
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Var_17 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__Var_17;
            else
            {
              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_12)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_13)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_19 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_20 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_19 == ml_backend__ml_gen_info__CastY_20);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Word ml_backend__ml_gen_info__TypeInfo_24_24;
      MR_Word ml_backend__ml_gen_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer ml_backend__ml_gen_info__CastX_50;
      MR_Integer ml_backend__ml_gen_info__CastY_51;
      MR_Integer ml_backend__ml_gen_info__CastX_70;
      MR_Integer ml_backend__ml_gen_info__CastY_71;

      {
        ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ((MR_Box) (ml_backend__ml_gen_info__ArgX1_3)), ((MR_Box) (ml_backend__ml_gen_info__ArgY1_4)));
      }
      if (ml_backend__ml_gen_info__succeeded)
      {
        {
          ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX2_5, ml_backend__ml_gen_info__ArgY2_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
        {
          {
            ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX3_7, ml_backend__ml_gen_info__ArgY3_8);
          }
          if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX4_9 == ml_backend__ml_gen_info__ArgY4_10);
            if (ml_backend__ml_gen_info__succeeded)
            {
              ml_backend__ml_gen_info__TypeInfo_24_24 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2];
              {
                ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_24_24, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_11)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_12)));
              }
              if (ml_backend__ml_gen_info__succeeded)
              {
                {
                  ml_backend__ml_gen_info__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(ml_backend__ml_gen_info__ArgX6_13, ml_backend__ml_gen_info__ArgY6_14);
                }
                if (ml_backend__ml_gen_info__succeeded)
                {
                  ml_backend__ml_gen_info__CastX_50 = (MR_Integer) ml_backend__ml_gen_info__ArgX7_15;
                  ml_backend__ml_gen_info__CastY_51 = (MR_Integer) ml_backend__ml_gen_info__ArgY7_16;
                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_50 == ml_backend__ml_gen_info__CastY_51);
                  if (ml_backend__ml_gen_info__succeeded)
                    ml_backend__ml_gen_info__succeeded = MR_TRUE;
                  else
                  {
                    MR_Word ml_backend__ml_gen_info__TypeInfo_31_54;
                    MR_Word ml_backend__ml_gen_info__TypeInfo_32_55;
                    MR_Word ml_backend__ml_gen_info__TypeInfo_33_56;
                    MR_Word ml_backend__ml_gen_info__TypeInfo_34_57;
                    MR_Word ml_backend__ml_gen_info__TypeInfo_35_58;
                    MR_Word ml_backend__ml_gen_info__TypeInfo_36_59;
                    MR_Word ml_backend__ml_gen_info__ArgX1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_gen_info__ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_gen_info__ArgX2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_gen_info__ArgY2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 1)));
                    MR_Integer ml_backend__ml_gen_info__ArgX3_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 2)));
                    MR_Integer ml_backend__ml_gen_info__ArgY3_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_gen_info__ArgX4_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_gen_info__ArgY4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_gen_info__ArgX5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_gen_info__ArgY5_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_gen_info__ArgX6_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 5)))) & (MR_Integer) 1);
                    MR_Word ml_backend__ml_gen_info__ArgY6_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 5)))) & (MR_Integer) 1);
                    MR_Word ml_backend__ml_gen_info__ArgX7_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ml_backend__ml_gen_info__ArgY7_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ml_backend__ml_gen_info__ArgX8_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ml_backend__ml_gen_info__ArgY8_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ml_backend__ml_gen_info__ArgX9_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 6)));
                    MR_Word ml_backend__ml_gen_info__ArgY9_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 6)));
                    MR_Word ml_backend__ml_gen_info__ArgX10_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 7)));
                    MR_Word ml_backend__ml_gen_info__ArgY10_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 7)));
                    MR_Word ml_backend__ml_gen_info__ArgX11_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 8)));
                    MR_Word ml_backend__ml_gen_info__ArgY11_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 8)));
                    MR_Word ml_backend__ml_gen_info__ArgX12_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX7_15, (MR_Integer) 9)));
                    MR_Word ml_backend__ml_gen_info__ArgY12_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY7_16, (MR_Integer) 9)));

                    {
                      ml_backend__ml_gen_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_gen_info__ArgX1_26, ml_backend__ml_gen_info__ArgY1_27);
                    }
                    if (ml_backend__ml_gen_info__succeeded)
                    {
                      {
                        ml_backend__ml_gen_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ml_backend__ml_gen_info__ArgX2_28, ml_backend__ml_gen_info__ArgY2_29);
                      }
                      if (ml_backend__ml_gen_info__succeeded)
                      {
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX3_30 == ml_backend__ml_gen_info__ArgY3_31);
                        if (ml_backend__ml_gen_info__succeeded)
                        {
                          ml_backend__ml_gen_info__TypeInfo_31_54 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
                          {
                            ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_31_54, ((MR_Box) (ml_backend__ml_gen_info__ArgX4_32)), ((MR_Box) (ml_backend__ml_gen_info__ArgY4_33)));
                          }
                          if (ml_backend__ml_gen_info__succeeded)
                          {
                            ml_backend__ml_gen_info__TypeInfo_32_55 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3];
                            {
                              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_32_55, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_34)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_35)));
                            }
                            if (ml_backend__ml_gen_info__succeeded)
                            {
                              ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX6_36 == ml_backend__ml_gen_info__ArgY6_37);
                              if (ml_backend__ml_gen_info__succeeded)
                              {
                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX7_38 == ml_backend__ml_gen_info__ArgY7_39);
                                if (ml_backend__ml_gen_info__succeeded)
                                {
                                  ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX8_40 == ml_backend__ml_gen_info__ArgY8_41);
                                  if (ml_backend__ml_gen_info__succeeded)
                                  {
                                    ml_backend__ml_gen_info__TypeInfo_33_56 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2];
                                    {
                                      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_33_56, ((MR_Box) (ml_backend__ml_gen_info__ArgX9_42)), ((MR_Box) (ml_backend__ml_gen_info__ArgY9_43)));
                                    }
                                    if (ml_backend__ml_gen_info__succeeded)
                                    {
                                      ml_backend__ml_gen_info__TypeInfo_34_57 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1];
                                      {
                                        ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_34_57, ((MR_Box) (ml_backend__ml_gen_info__ArgX10_44)), ((MR_Box) (ml_backend__ml_gen_info__ArgY10_45)));
                                      }
                                      if (ml_backend__ml_gen_info__succeeded)
                                      {
                                        ml_backend__ml_gen_info__TypeInfo_35_58 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                                        {
                                          ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_35_58, ((MR_Box) (ml_backend__ml_gen_info__ArgX11_46)), ((MR_Box) (ml_backend__ml_gen_info__ArgY11_47)));
                                        }
                                        if (ml_backend__ml_gen_info__succeeded)
                                        {
                                          ml_backend__ml_gen_info__TypeInfo_36_59 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                                          {
                                            ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_36_59, ((MR_Box) (ml_backend__ml_gen_info__ArgX12_48)), ((MR_Box) (ml_backend__ml_gen_info__ArgY12_49)));
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
                  if (ml_backend__ml_gen_info__succeeded)
                  {
                    ml_backend__ml_gen_info__CastX_70 = (MR_Integer) ml_backend__ml_gen_info__ArgX8_17;
                    ml_backend__ml_gen_info__CastY_71 = (MR_Integer) ml_backend__ml_gen_info__ArgY8_18;
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_70 == ml_backend__ml_gen_info__CastY_71);
                    if (ml_backend__ml_gen_info__succeeded)
                      ml_backend__ml_gen_info__succeeded = MR_TRUE;
                    else
                    {
                      MR_Word ml_backend__ml_gen_info__TypeInfo_19_76;
                      MR_Word ml_backend__ml_gen_info__ArgX1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX8_17, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_gen_info__ArgY1_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY8_18, (MR_Integer) 0)));
                      MR_Word ml_backend__ml_gen_info__ArgX2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX8_17, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_gen_info__ArgY2_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY8_18, (MR_Integer) 1)));
                      MR_Word ml_backend__ml_gen_info__ArgX3_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX8_17, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_gen_info__ArgY3_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY8_18, (MR_Integer) 2)));
                      MR_Word ml_backend__ml_gen_info__ArgX4_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX8_17, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_gen_info__ArgY4_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY8_18, (MR_Integer) 3)));
                      MR_Word ml_backend__ml_gen_info__ArgX5_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgX8_17, (MR_Integer) 4)));
                      MR_Word ml_backend__ml_gen_info__ArgY5_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__ArgY8_18, (MR_Integer) 4)));

                      {
                        ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], ((MR_Box) (ml_backend__ml_gen_info__ArgX1_60)), ((MR_Box) (ml_backend__ml_gen_info__ArgY1_61)));
                      }
                      if (ml_backend__ml_gen_info__succeeded)
                      {
                        {
                          ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX2_62, ml_backend__ml_gen_info__ArgY2_63);
                        }
                        if (ml_backend__ml_gen_info__succeeded)
                        {
                          {
                            ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX3_64, ml_backend__ml_gen_info__ArgY3_65);
                          }
                          if (ml_backend__ml_gen_info__succeeded)
                          {
                            {
                              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__ArgX4_66, ml_backend__ml_gen_info__ArgY4_67);
                            }
                            if (ml_backend__ml_gen_info__succeeded)
                            {
                              ml_backend__ml_gen_info__TypeInfo_19_76 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6];
                              {
                                ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_19_76, ((MR_Box) (ml_backend__ml_gen_info__ArgX5_68)), ((MR_Box) (ml_backend__ml_gen_info__ArgY5_69)));
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
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_3 = ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_4 = ml_backend__ml_gen_info__HeadVar__2_2;

    {
      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Integer ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Integer ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__Cast_HeadVar1_4, ml_backend__ml_gen_info__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0(
  MR_Integer ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Integer ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar1_3 = ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__Cast_HeadVar2_4 = ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__Cast_HeadVar1_3 == ml_backend__ml_gen_info__Cast_HeadVar2_4);
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_6 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_7 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_6 == ml_backend__ml_gen_info__CastY_7);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ml_backend__ml_gen_info__ArgX1_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
      MR_Integer ml_backend__ml_gen_info__ArgY1_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

      {
        mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__ArgX1_4, ml_backend__ml_gen_info__ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_6 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_5 == ml_backend__ml_gen_info__CastY_6);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Integer ml_backend__ml_gen_info__ArgX1_3 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
      MR_Integer ml_backend__ml_gen_info__ArgY1_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX1_3 == ml_backend__ml_gen_info__ArgY1_4);
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_6 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_7 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_6 == ml_backend__ml_gen_info__CastY_7);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ml_backend__ml_gen_info__ArgX1_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
      MR_Integer ml_backend__ml_gen_info__ArgY1_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

      {
        mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__ArgX1_4, ml_backend__ml_gen_info__ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_6 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_5 == ml_backend__ml_gen_info__CastY_6);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
    {
      MR_Integer ml_backend__ml_gen_info__ArgX1_3 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
      MR_Integer ml_backend__ml_gen_info__ArgY1_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

      ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__ArgX1_3 == ml_backend__ml_gen_info__ArgY1_4);
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__SubInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 4)));

    ml_backend__ml_gen_info__succeeded = (((MR_Word) ml_backend__ml_gen_info__X_4) == ((MR_Word) ml_backend__ml_gen_info__Var_10));
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8;
    else
    {
      MR_Word ml_backend__ml_gen_info__SubInfo_7;
      MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__Var_28;
      MR_Word ml_backend__ml_gen_info__Var_29;
      MR_Word ml_backend__ml_gen_info__Var_30;
      MR_Word ml_backend__ml_gen_info__Var_31;
      MR_Word ml_backend__ml_gen_info__Var_32;
      MR_Word ml_backend__ml_gen_info__Var_33;
      MR_Word ml_backend__ml_gen_info__Var_34;
      MR_Word ml_backend__ml_gen_info__Var_35;

      {
        ml_backend__ml_gen_info__SubInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_24));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_25));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      }
      ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
      ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
      ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
      ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
      ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
      ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
      ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
      ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_30));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_31));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_7));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__RareInfo_7;
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));

    {
      ml_backend__ml_gen_info__RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_23 | ((((ml_backend__ml_gen_info__Var_24 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_25 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__RareInfo_7;
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));

    {
      ml_backend__ml_gen_info__RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_23 | ((((ml_backend__ml_gen_info__Var_24 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_25 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__RareInfo_7;
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));

    {
      ml_backend__ml_gen_info__RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_23 | ((((ml_backend__ml_gen_info__Var_24 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_25 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__RareInfo_7;
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));

    {
      ml_backend__ml_gen_info__RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_23 | ((((ml_backend__ml_gen_info__Var_24 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_25 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    ml_backend__ml_gen_info__succeeded = (((MR_Word) ml_backend__ml_gen_info__X_4) == ((MR_Word) ml_backend__ml_gen_info__Var_8));
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_24));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__X_4 == ml_backend__ml_gen_info__Var_24);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_22));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_23));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_13;
    MR_Word ml_backend__ml_gen_info__Var_14;
    MR_Word ml_backend__ml_gen_info__Var_15;
    MR_Word ml_backend__ml_gen_info__Var_16;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Word ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Integer * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_15;
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Word ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    MR_Integer ml_backend__ml_gen_info__Var_14;
    MR_Word ml_backend__ml_gen_info__Var_15;
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Word ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_13;
    MR_Integer ml_backend__ml_gen_info__Var_14;
    MR_Word ml_backend__ml_gen_info__Var_15;
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Word ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_10;
    MR_Word ml_backend__ml_gen_info__Var_11;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_9;
    MR_Word ml_backend__ml_gen_info__Var_10;
    MR_Word ml_backend__ml_gen_info__Var_11;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_8;
    MR_Word ml_backend__ml_gen_info__Var_9;
    MR_Word ml_backend__ml_gen_info__Var_10;
    MR_Word ml_backend__ml_gen_info__Var_11;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__X_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Var_5;
    MR_Word ml_backend__ml_gen_info__Var_6;
    MR_Word ml_backend__ml_gen_info__Var_7;
    MR_Word ml_backend__ml_gen_info__Var_8;
    MR_Word ml_backend__ml_gen_info__Var_9;
    MR_Word ml_backend__ml_gen_info__Var_10;
    MR_Word ml_backend__ml_gen_info__Var_11;

    *ml_backend__ml_gen_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

MR_Word MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(
  MR_Word ml_backend__ml_gen_info__ModuleInfo_9,
  MR_Word ml_backend__ml_gen_info__Target_10,
  MR_Word ml_backend__ml_gen_info__ConstStructMap_11,
  MR_Word ml_backend__ml_gen_info__PredId_12,
  MR_Integer ml_backend__ml_gen_info__ProcId_13,
  MR_Word ml_backend__ml_gen_info__ProcInfo_14,
  MR_Word ml_backend__ml_gen_info__GlobalData_15)
{
  {
    MR_Word ml_backend__ml_gen_info__Info_16;
    MR_Word ml_backend__ml_gen_info__TypeInfo_45_45;
    MR_Word ml_backend__ml_gen_info__Globals_17;
    MR_Word ml_backend__ml_gen_info__HighLevelData_18;
    MR_Word ml_backend__ml_gen_info__GC_19;
    MR_Word ml_backend__ml_gen_info__HeadVars_20;
    MR_Word ml_backend__ml_gen_info__VarSet_21;
    MR_Word ml_backend__ml_gen_info__VarTypes_22;
    MR_Word ml_backend__ml_gen_info__HeadModes_23;
    MR_Word ml_backend__ml_gen_info__ByRefOutputVars_24;
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter_25;
    MR_Word ml_backend__ml_gen_info__LabelCounter_26;
    MR_Word ml_backend__ml_gen_info__AuxVarCounter_27;
    MR_Word ml_backend__ml_gen_info__CondVarCounter_28;
    MR_Word ml_backend__ml_gen_info__ConvVarCounter_29;
    MR_Word ml_backend__ml_gen_info__ConstVarMap_30;
    MR_Word ml_backend__ml_gen_info__SuccContStack_31;
    MR_Word ml_backend__ml_gen_info__VarLvals_32;
    MR_Word ml_backend__ml_gen_info__EnvVarNames_34;
    MR_Word ml_backend__ml_gen_info__DisabledWarnings_35;
    MR_Word ml_backend__ml_gen_info__RareInfo_37;
    MR_Word ml_backend__ml_gen_info__SubInfo_38;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_9, &ml_backend__ml_gen_info__Globals_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_17, (MR_Integer) 265, &ml_backend__ml_gen_info__HighLevelData_18);
    }
    {
      libs__globals__get_gc_method_2_p_0(ml_backend__ml_gen_info__Globals_17, &ml_backend__ml_gen_info__GC_19);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_gen_info__ProcInfo_14, &ml_backend__ml_gen_info__HeadVars_20);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_gen_info__ProcInfo_14, &ml_backend__ml_gen_info__VarSet_21);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_gen_info__ProcInfo_14, &ml_backend__ml_gen_info__VarTypes_22);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_gen_info__ProcInfo_14, &ml_backend__ml_gen_info__HeadModes_23);
    }
    {
      ml_backend__ml_gen_info__ByRefOutputVars_24 = check_hlds__mode_util__select_output_vars_4_f_0(ml_backend__ml_gen_info__ModuleInfo_9, ml_backend__ml_gen_info__HeadVars_20, ml_backend__ml_gen_info__HeadModes_23, ml_backend__ml_gen_info__VarTypes_22);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 1, &ml_backend__ml_gen_info__FuncLabelCounter_25);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 0, &ml_backend__ml_gen_info__LabelCounter_26);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 0, &ml_backend__ml_gen_info__AuxVarCounter_27);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 0, &ml_backend__ml_gen_info__CondVarCounter_28);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 0, &ml_backend__ml_gen_info__ConvVarCounter_29);
    }
    ml_backend__ml_gen_info__TypeInfo_45_45 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(ml_backend__ml_gen_info__TypeInfo_45_45, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, &ml_backend__ml_gen_info__ConstVarMap_30);
    }
    {
      mercury__stack__init_1_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &ml_backend__ml_gen_info__SuccContStack_31);
    }
    {
      mercury__map__init_1_p_0(ml_backend__ml_gen_info__TypeInfo_45_45, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, &ml_backend__ml_gen_info__VarLvals_32);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &ml_backend__ml_gen_info__EnvVarNames_34);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, &ml_backend__ml_gen_info__DisabledWarnings_35);
    }
    {
      ml_backend__ml_gen_info__RareInfo_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 0) = ((MR_Box) (ml_backend__ml_gen_info__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 1) = ((MR_Box) (ml_backend__ml_gen_info__PredId_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 2) = ((MR_Box) (ml_backend__ml_gen_info__ProcId_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 3) = ((MR_Box) (ml_backend__ml_gen_info__VarSet_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 4) = ((MR_Box) (ml_backend__ml_gen_info__VarTypes_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 5) = ((MR_Box) ((ml_backend__ml_gen_info__HighLevelData_18 | ((((ml_backend__ml_gen_info__Target_10 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__GC_19 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 6) = ((MR_Box) (ml_backend__ml_gen_info__ConstStructMap_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 7) = ((MR_Box) (ml_backend__ml_gen_info__VarLvals_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 8) = ((MR_Box) (ml_backend__ml_gen_info__EnvVarNames_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_37, 9) = ((MR_Box) (ml_backend__ml_gen_info__DisabledWarnings_35));
    }
    {
      ml_backend__ml_gen_info__SubInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_38, 0) = ((MR_Box) (ml_backend__ml_gen_info__ByRefOutputVars_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_38, 1) = ((MR_Box) (ml_backend__ml_gen_info__LabelCounter_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_38, 2) = ((MR_Box) (ml_backend__ml_gen_info__AuxVarCounter_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_38, 3) = ((MR_Box) (ml_backend__ml_gen_info__CondVarCounter_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_38, 4) = ((MR_Box) (ml_backend__ml_gen_info__SuccContStack_31));
    }
    {
      ml_backend__ml_gen_info__Info_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 0) = ((MR_Box) (ml_backend__ml_gen_info__ConstVarMap_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 1) = ((MR_Box) (ml_backend__ml_gen_info__FuncLabelCounter_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 2) = ((MR_Box) (ml_backend__ml_gen_info__ConvVarCounter_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 5) = ((MR_Box) (ml_backend__ml_gen_info__GlobalData_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_37));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_16, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_38));
    }
    return ml_backend__ml_gen_info__Info_16;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(
  MR_String ml_backend__ml_gen_info__Name_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__EnvVarNames0_6;
    MR_Word ml_backend__ml_gen_info__EnvVarNames_7;
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__RareInfo0_37;
    MR_Word ml_backend__ml_gen_info__RareInfo_38;
    MR_Word ml_backend__ml_gen_info__Var_40;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_42;
    MR_Word ml_backend__ml_gen_info__Var_43;
    MR_Word ml_backend__ml_gen_info__Var_44;
    MR_Word ml_backend__ml_gen_info__Var_45;
    MR_Word ml_backend__ml_gen_info__Var_46;
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_47;
    MR_Word ml_backend__ml_gen_info__Var_48;
    MR_Integer ml_backend__ml_gen_info__Var_49;
    MR_Word ml_backend__ml_gen_info__Var_50;
    MR_Word ml_backend__ml_gen_info__Var_51;
    MR_Word ml_backend__ml_gen_info__Var_52;
    MR_Word ml_backend__ml_gen_info__Var_53;
    MR_Word ml_backend__ml_gen_info__Var_54;
    MR_Word ml_backend__ml_gen_info__Var_55;
    MR_Word ml_backend__ml_gen_info__Var_56;
    MR_Word ml_backend__ml_gen_info__Var_58;
    MR_Word ml_backend__ml_gen_info__Var_57;

    ml_backend__ml_gen_info__EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 9)));
    {
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ml_backend__ml_gen_info__Name_4)), ml_backend__ml_gen_info__EnvVarNames0_6, &ml_backend__ml_gen_info__EnvVarNames_7);
    }
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__RareInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_37, (MR_Integer) 9)));
    {
      ml_backend__ml_gen_info__RareInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_47));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_48));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_49));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_50));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_52 | ((((ml_backend__ml_gen_info__Var_53 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_54 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 8) = ((MR_Box) (ml_backend__ml_gen_info__EnvVarNames_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_38, 9) = ((MR_Box) (ml_backend__ml_gen_info__Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_46));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(
  MR_Word ml_backend__ml_gen_info__ClosureWrapperDefn_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__ClosureWrapperDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__ClosureWrapperDefns_7;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

    {
      ml_backend__ml_gen_info__ClosureWrapperDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_gen_info__ClosureWrapperDefns_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefn_4));
      MR_hl_field(MR_mktag(1), ml_backend__ml_gen_info__ClosureWrapperDefns_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefns0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefns_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(
  MR_Word ml_backend__ml_gen_info__Var_5,
  MR_Word ml_backend__ml_gen_info__Lval_6,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_11)
{
  {
    MR_Word ml_backend__ml_gen_info__VarLvals0_8;
    MR_Word ml_backend__ml_gen_info__VarLvals_9;
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_35;

    ml_backend__ml_gen_info__VarLvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 9)));
    {
      mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), ((MR_Box) (ml_backend__ml_gen_info__Lval_6)), ml_backend__ml_gen_info__VarLvals0_8, &ml_backend__ml_gen_info__VarLvals_9);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(ml_backend__ml_gen_info__VarLvals_9, ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, ml_backend__ml_gen_info__STATE_VARIABLE_Info_11);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));

    ml_backend__ml_gen_info__succeeded = (((MR_Word) ml_backend__ml_gen_info__X_4) == ((MR_Word) ml_backend__ml_gen_info__Var_10));
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8;
    else
    {
      MR_Word ml_backend__ml_gen_info__RareInfo_7;
      MR_Word ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 0)));
      MR_Word ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_gen_info__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ml_backend__ml_gen_info__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ml_backend__ml_gen_info__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 8)));
      MR_Word ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 9)));
      MR_Word ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo0_6, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__Var_42;
      MR_Word ml_backend__ml_gen_info__Var_43;
      MR_Word ml_backend__ml_gen_info__Var_44;
      MR_Word ml_backend__ml_gen_info__Var_45;
      MR_Word ml_backend__ml_gen_info__Var_46;
      MR_Word ml_backend__ml_gen_info__Var_47;
      MR_Word ml_backend__ml_gen_info__Var_49;
      MR_Word ml_backend__ml_gen_info__Var_48;

      {
        ml_backend__ml_gen_info__RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_30));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_31));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 5) = ((MR_Box) ((ml_backend__ml_gen_info__Var_35 | ((((ml_backend__ml_gen_info__Var_36 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__Var_37 << (MR_Integer) 3)))))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
        MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__RareInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      }
      ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
      ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
      ml_backend__ml_gen_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
      ml_backend__ml_gen_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
      ml_backend__ml_gen_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
      ml_backend__ml_gen_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
      ml_backend__ml_gen_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
      ml_backend__ml_gen_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_44));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_45));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_46));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_47));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__RareInfo_7));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_49));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__SuccCont_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Stack_5;
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_9, (MR_Integer) 3)));
    MR_Box ml_backend__ml_gen_info__conv0_SuccCont_4;

    ml_backend__ml_gen_info__Stack_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_9, (MR_Integer) 4)));
    {
      mercury__stack__det_top_2_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, ml_backend__ml_gen_info__Stack_5, &ml_backend__ml_gen_info__conv0_SuccCont_4);
    }
    *ml_backend__ml_gen_info__SuccCont_4 = ((MR_Word) ml_backend__ml_gen_info__conv0_SuccCont_4);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_8)
{
  {
    MR_Word ml_backend__ml_gen_info__Stack0_4;
    MR_Word ml_backend__ml_gen_info__Stack_6;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_29;
    MR_Word ml_backend__ml_gen_info__SubInfo_30;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_33;
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_35;
    MR_Word ml_backend__ml_gen_info__Var_36;
    MR_Word ml_backend__ml_gen_info__Var_37;
    MR_Word ml_backend__ml_gen_info__Var_38;
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info___SuccCont_5;
    MR_Box ml_backend__ml_gen_info__conv0__SuccCont_5;
    MR_Word ml_backend__ml_gen_info__Var_39;
    MR_Word ml_backend__ml_gen_info__Var_40;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_42;
    MR_Word ml_backend__ml_gen_info__Var_43;

    ml_backend__ml_gen_info__Stack0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 4)));
    {
      mercury__stack__det_pop_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &ml_backend__ml_gen_info__conv0__SuccCont_5, ml_backend__ml_gen_info__Stack0_4, &ml_backend__ml_gen_info__Stack_6);
    }
    ml_backend__ml_gen_info___SuccCont_5 = ((MR_Word) ml_backend__ml_gen_info__conv0__SuccCont_5);
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 4)));
    {
      ml_backend__ml_gen_info__SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 4) = ((MR_Box) (ml_backend__ml_gen_info__Stack_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(
  MR_Word ml_backend__ml_gen_info__SuccCont_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__Stack0_6;
    MR_Word ml_backend__ml_gen_info__Stack_7;
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_30;
    MR_Word ml_backend__ml_gen_info__SubInfo_31;
    MR_Word ml_backend__ml_gen_info__Var_33;
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_35;
    MR_Word ml_backend__ml_gen_info__Var_36;
    MR_Word ml_backend__ml_gen_info__Var_37;
    MR_Word ml_backend__ml_gen_info__Var_38;
    MR_Word ml_backend__ml_gen_info__Var_39;
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_40;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_42;
    MR_Word ml_backend__ml_gen_info__Var_43;
    MR_Word ml_backend__ml_gen_info__Var_44;

    ml_backend__ml_gen_info__Stack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_14, (MR_Integer) 4)));
    {
      mercury__stack__push_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, ((MR_Box) (ml_backend__ml_gen_info__SuccCont_4)), ml_backend__ml_gen_info__Stack0_6, &ml_backend__ml_gen_info__Stack_7);
    }
    ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_30, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_30, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_30, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_30, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_30, (MR_Integer) 4)));
    {
      ml_backend__ml_gen_info__SubInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_31, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_31, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_31, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_31, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_31, 4) = ((MR_Box) (ml_backend__ml_gen_info__Stack_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_31));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(
  MR_Word ml_backend__ml_gen_info__Info_4,
  MR_Word ml_backend__ml_gen_info__Var_5,
  MR_Word * ml_backend__ml_gen_info__GroundTerm_6)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 7)));
    MR_Box ml_backend__ml_gen_info__conv0_GroundTerm_6;

    {
      ml_backend__ml_gen_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_gen_info__ConstVarMap_7, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), &ml_backend__ml_gen_info__conv0_GroundTerm_6);
    }
    if (ml_backend__ml_gen_info__succeeded)
    {
      *ml_backend__ml_gen_info__GroundTerm_6 = ((MR_Word) ml_backend__ml_gen_info__conv0_GroundTerm_6);
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(
  MR_Word ml_backend__ml_gen_info__Info_4,
  MR_Word ml_backend__ml_gen_info__Var_5,
  MR_Word * ml_backend__ml_gen_info__GroundTerm_6)
{
  {
    MR_Word ml_backend__ml_gen_info__ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 7)));
    MR_Box ml_backend__ml_gen_info__conv0_GroundTerm_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_gen_info__ConstVarMap_7, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), &ml_backend__ml_gen_info__conv0_GroundTerm_6);
    }
    *ml_backend__ml_gen_info__GroundTerm_6 = ((MR_Word) ml_backend__ml_gen_info__conv0_GroundTerm_6);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(
  MR_Word ml_backend__ml_gen_info__Var_5,
  MR_Word ml_backend__ml_gen_info__GroundTerm_6,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_11)
{
  {
    MR_Word ml_backend__ml_gen_info__ConstVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__ConstVarMap_9;
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));

    {
      mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), ((MR_Box) (ml_backend__ml_gen_info__GroundTerm_6)), ml_backend__ml_gen_info__ConstVarMap0_8, &ml_backend__ml_gen_info__ConstVarMap_9);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_gen_info__ConstVarMap_9, ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, ml_backend__ml_gen_info__STATE_VARIABLE_Info_11);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(
  MR_Word ml_backend__ml_gen_info__X_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    ml_backend__ml_gen_info__succeeded = (((MR_Word) ml_backend__ml_gen_info__X_4) == ((MR_Word) ml_backend__ml_gen_info__Var_8));
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__X_4));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_24));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Integer ml_backend__ml_gen_info__ConvNum_4;
    MR_Word ml_backend__ml_gen_info__ConvCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__ConvCounter_7;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_26;
    MR_Word ml_backend__ml_gen_info__Var_28;
    MR_Word ml_backend__ml_gen_info__Var_29;
    MR_Word ml_backend__ml_gen_info__Var_30;
    MR_Word ml_backend__ml_gen_info__Var_31;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_27;

    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__ConvNum_4, ml_backend__ml_gen_info__ConvCounter0_6, &ml_backend__ml_gen_info__ConvCounter_7);
    }
    *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Word) ml_backend__ml_gen_info__ConvNum_4;
    ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__ConvCounter_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Integer ml_backend__ml_gen_info__CondNum_4;
    MR_Word ml_backend__ml_gen_info__CondCounter0_6;
    MR_Word ml_backend__ml_gen_info__CondCounter_7;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_29;
    MR_Word ml_backend__ml_gen_info__SubInfo_30;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_33;
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_35;
    MR_Word ml_backend__ml_gen_info__Var_36;
    MR_Word ml_backend__ml_gen_info__Var_37;
    MR_Word ml_backend__ml_gen_info__Var_38;
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_39;
    MR_Word ml_backend__ml_gen_info__Var_40;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_43;
    MR_Word ml_backend__ml_gen_info__Var_42;

    ml_backend__ml_gen_info__CondCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__CondNum_4, ml_backend__ml_gen_info__CondCounter0_6, &ml_backend__ml_gen_info__CondCounter_7);
    }
    *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Word) ml_backend__ml_gen_info__CondNum_4;
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 4)));
    {
      ml_backend__ml_gen_info__SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 3) = ((MR_Box) (ml_backend__ml_gen_info__CondCounter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0(
  MR_Word ml_backend__ml_gen_info__AuxVar_5,
  MR_Word * ml_backend__ml_gen_info__VarName_6,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_12)
{
  {
    MR_Word ml_backend__ml_gen_info__AuxVarCounter0_8;
    MR_Integer ml_backend__ml_gen_info__AuxVarNum_9;
    MR_Word ml_backend__ml_gen_info__AuxVarCounter_10;
    MR_Word ml_backend__ml_gen_info__Var_14;
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_33;
    MR_Word ml_backend__ml_gen_info__SubInfo_34;
    MR_Word ml_backend__ml_gen_info__Var_36;
    MR_Word ml_backend__ml_gen_info__Var_37;
    MR_Word ml_backend__ml_gen_info__Var_38;
    MR_Word ml_backend__ml_gen_info__Var_39;
    MR_Word ml_backend__ml_gen_info__Var_40;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_42;
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_27;
    MR_Word ml_backend__ml_gen_info__Var_28;
    MR_Word ml_backend__ml_gen_info__Var_43;
    MR_Word ml_backend__ml_gen_info__Var_44;
    MR_Word ml_backend__ml_gen_info__Var_46;
    MR_Word ml_backend__ml_gen_info__Var_47;
    MR_Word ml_backend__ml_gen_info__Var_45;

    ml_backend__ml_gen_info__AuxVarCounter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_17, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__AuxVarNum_9, ml_backend__ml_gen_info__AuxVarCounter0_8, &ml_backend__ml_gen_info__AuxVarCounter_10);
    }
    ml_backend__ml_gen_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_33, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_33, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_33, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_33, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_33, (MR_Integer) 4)));
    {
      ml_backend__ml_gen_info__SubInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_34, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_34, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_44));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_34, 2) = ((MR_Box) (ml_backend__ml_gen_info__AuxVarCounter_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_34, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_46));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_34, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_34));
    }
    {
      ml_backend__ml_gen_info__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_gen_info__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_gen_info__Var_14, 1) = ((MR_Box) (ml_backend__ml_gen_info__AuxVar_5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_gen_info__Var_14, 2) = ((MR_Box) (ml_backend__ml_gen_info__AuxVarNum_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_gen_info__VarName_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_14));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__FuncLabel_5;
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter_7;
    MR_Integer ml_backend__ml_gen_info__Var_10;
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_6;
    MR_Word ml_backend__ml_gen_info__Var_27;
    MR_Word ml_backend__ml_gen_info__Var_29;
    MR_Word ml_backend__ml_gen_info__Var_30;
    MR_Word ml_backend__ml_gen_info__Var_31;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_33;
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_28;

    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__FuncLabel_5, ml_backend__ml_gen_info__FuncLabelCounter0_4, &ml_backend__ml_gen_info__Var_6);
    }
    ml_backend__ml_gen_info__Var_10 = (ml_backend__ml_gen_info__FuncLabel_5 + (MR_Integer) 10000);
    {
      ml_backend__ml_gen_info__FuncLabelCounter_7 = mercury__counter__init_1_f_0(ml_backend__ml_gen_info__Var_10);
    }
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__FuncLabelCounter_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_p_0(
  MR_Integer * ml_backend__ml_gen_info__Label_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Counter_7;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_27;
    MR_Word ml_backend__ml_gen_info__Var_28;
    MR_Word ml_backend__ml_gen_info__Var_29;
    MR_Word ml_backend__ml_gen_info__Var_30;
    MR_Word ml_backend__ml_gen_info__Var_31;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_26;

    {
      mercury__counter__allocate_3_p_0(ml_backend__ml_gen_info__Label_4, ml_backend__ml_gen_info__Counter0_6, &ml_backend__ml_gen_info__Counter_7);
    }
    ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Counter_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(
  MR_Integer * ml_backend__ml_gen_info__Label_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_Word ml_backend__ml_gen_info__Counter0_6;
    MR_Word ml_backend__ml_gen_info__Counter_7;
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_29;
    MR_Word ml_backend__ml_gen_info__SubInfo_30;
    MR_Word ml_backend__ml_gen_info__Var_32;
    MR_Word ml_backend__ml_gen_info__Var_33;
    MR_Word ml_backend__ml_gen_info__Var_34;
    MR_Word ml_backend__ml_gen_info__Var_35;
    MR_Word ml_backend__ml_gen_info__Var_36;
    MR_Word ml_backend__ml_gen_info__Var_37;
    MR_Word ml_backend__ml_gen_info__Var_38;
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_39;
    MR_Word ml_backend__ml_gen_info__Var_41;
    MR_Word ml_backend__ml_gen_info__Var_42;
    MR_Word ml_backend__ml_gen_info__Var_43;
    MR_Word ml_backend__ml_gen_info__Var_40;

    ml_backend__ml_gen_info__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_13, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(ml_backend__ml_gen_info__Label_4, ml_backend__ml_gen_info__Counter0_6, &ml_backend__ml_gen_info__Counter_7);
    }
    ml_backend__ml_gen_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_29, (MR_Integer) 4)));
    {
      ml_backend__ml_gen_info__SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 1) = ((MR_Box) (ml_backend__ml_gen_info__Counter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_30, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__PutCommitInNestedFunc_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Globals_5;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_9;
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Integer ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_26;
    MR_Word ml_backend__ml_gen_info__Var_27;
    MR_Word ml_backend__ml_gen_info__Var_28;
    MR_Word ml_backend__ml_gen_info__Var_29;
    MR_Word ml_backend__ml_gen_info__Var_30;

    ml_backend__ml_gen_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 9)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_9, &ml_backend__ml_gen_info__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_5, (MR_Integer) 269, ml_backend__ml_gen_info__PutCommitInNestedFunc_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__UseNestedFuncs_4)
{
  {
    MR_Word ml_backend__ml_gen_info__Globals_5;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_9;
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Integer ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_26;
    MR_Word ml_backend__ml_gen_info__Var_27;
    MR_Word ml_backend__ml_gen_info__Var_28;
    MR_Word ml_backend__ml_gen_info__Var_29;
    MR_Word ml_backend__ml_gen_info__Var_30;

    ml_backend__ml_gen_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_12, (MR_Integer) 9)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_9, &ml_backend__ml_gen_info__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_5, (MR_Integer) 266, ml_backend__ml_gen_info__UseNestedFuncs_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__ModuleName_4)
{
  {
    MR_Word ml_backend__ml_gen_info__ModuleInfo_5;
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Integer ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_26;

    ml_backend__ml_gen_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 9)));
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_gen_info__ModuleInfo_5, ml_backend__ml_gen_info__ModuleName_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__Globals_4)
{
  {
    MR_Word ml_backend__ml_gen_info__ModuleInfo_5;
    MR_Word ml_backend__ml_gen_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__Var_16;
    MR_Integer ml_backend__ml_gen_info__Var_17;
    MR_Word ml_backend__ml_gen_info__Var_18;
    MR_Word ml_backend__ml_gen_info__Var_19;
    MR_Word ml_backend__ml_gen_info__Var_20;
    MR_Word ml_backend__ml_gen_info__Var_21;
    MR_Word ml_backend__ml_gen_info__Var_22;
    MR_Word ml_backend__ml_gen_info__Var_23;
    MR_Word ml_backend__ml_gen_info__Var_24;
    MR_Word ml_backend__ml_gen_info__Var_25;
    MR_Word ml_backend__ml_gen_info__Var_26;

    ml_backend__ml_gen_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 8)));
    ml_backend__ml_gen_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Var_8, (MR_Integer) 9)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_5, ml_backend__ml_gen_info__Globals_4);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____cond_seq_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____cond_seq_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____conv_seq_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____conv_seq_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____label_num_0_0(((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____label_num_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_gen_info_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_label_func_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____ml_label_func_0_0(((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_label_func_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____ml_label_func_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Integer) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0_10001(
  MR_Box ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;

    {
      ml_backend__ml_gen_info__succeeded = ml_backend__ml_gen_info____Unify____success_cont_0_0(((MR_Word) ml_backend__ml_gen_info__wrapper_arg_1), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2));
    }
    return ml_backend__ml_gen_info__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0_10001(
  MR_Box * ml_backend__ml_gen_info__wrapper_arg_1,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_2,
  MR_Box ml_backend__ml_gen_info__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_gen_info__conv0_HeadVar__1_1;

    {
      ml_backend__ml_gen_info____Compare____success_cont_0_0(&ml_backend__ml_gen_info__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_2), ((MR_Word) ml_backend__ml_gen_info__wrapper_arg_3));
    }
    *ml_backend__ml_gen_info__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_gen_info__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_gen_info__init(void)
{
}

void mercury__ml_backend__ml_gen_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_label_func_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0);
}

void mercury__ml_backend__ml_gen_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_gen_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_gen_info. */
