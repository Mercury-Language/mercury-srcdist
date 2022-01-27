/*
** Automatically generated from `ml_gen_info.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[15];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[15];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_sub_info_0_0[15];

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

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
  MR_Word * ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2,
  MR_Word ml_backend__ml_gen_info__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2);


static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[4][3];




static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
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
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8] = {
  (MR_String) "mgi_module_info",
  (MR_String) "mgi_varset",
  (MR_String) "mgi_var_types",
  (MR_String) "mgi_byref_output_vars",
  (MR_String) "mgi_value_output_vars",
  (MR_String) "mgi_var_lvals",
  (MR_String) "mgi_global_data",
  (MR_String) "mgi_sub_info"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 = {
  (MR_String) "ml_gen_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[15] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_compilation_target_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[15] = {
  (MR_String) "mgsi_high_level_data",
  (MR_String) "mgsi_target",
  (MR_String) "mgsi_gc",
  (MR_String) "mgsi_pred_id",
  (MR_String) "mgsi_proc_id",
  (MR_String) "mgsi_func_counter",
  (MR_String) "mgsi_label_counter",
  (MR_String) "mgsi_aux_var_counter",
  (MR_String) "mgsi_cond_var_counter",
  (MR_String) "mgsi_conv_var_counter",
  (MR_String) "mgsi_const_var_map",
  (MR_String) "mgsi_const_struct_map",
  (MR_String) "mgsi_closure_wrapper_defns",
  (MR_String) "mgsi_success_cont_stack",
  (MR_String) "mgsi_env_var_names"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_sub_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 3
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
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 = {
  (MR_String) "ml_gen_sub_info",
  (MR_Integer) 15,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_sub_info_0_0,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_12_12;

        {
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__V_12_12, ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_8_8);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_12_12 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_12_12;
        else
          {
            MR_Word ml_backend__ml_gen_info__V_13_13;

            {
              ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__V_13_13, ml_backend__ml_gen_info__V_5_5, ml_backend__ml_gen_info__V_9_9);
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_13_13 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_13_13;
            else
              {
                MR_Word ml_backend__ml_gen_info__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6], &ml_backend__ml_gen_info__V_14_14, ((MR_Box) (ml_backend__ml_gen_info__V_6_6)), ((MR_Box) (ml_backend__ml_gen_info__V_10_10)));
                }
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_14_14 == (MR_Integer) 0);
                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                if (ml_backend__ml_gen_info__succeeded)
                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__V_7_7)), ((MR_Box) (ml_backend__ml_gen_info__V_11_11)));
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
        MR_Word ml_backend__ml_gen_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__V_3_3, ml_backend__ml_gen_info__V_7_7);
        }
        if (ml_backend__ml_gen_info__succeeded)
          {
            {
              ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_8_8);
            }
            if (ml_backend__ml_gen_info__succeeded)
              {
                ml_backend__ml_gen_info__TypeInfo_15_15 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6];
                {
                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_15_15, ((MR_Box) (ml_backend__ml_gen_info__V_5_5)), ((MR_Box) (ml_backend__ml_gen_info__V_9_9)));
                }
                if (ml_backend__ml_gen_info__succeeded)
                  {
                    ml_backend__ml_gen_info__TypeInfo_16_16 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7];
                    {
                      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_16_16, ((MR_Box) (ml_backend__ml_gen_info__V_6_6)), ((MR_Box) (ml_backend__ml_gen_info__V_10_10)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_5)));
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
      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3], ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_4)));
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
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_10_10;

        {
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_gen_info__V_10_10, ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_7_7);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_10_10 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_10_10;
        else
          {
            MR_Word ml_backend__ml_gen_info__V_11_11;

            {
              parse_tree__prog_data____Compare____mer_type_0_0(&ml_backend__ml_gen_info__V_11_11, ml_backend__ml_gen_info__V_5_5, ml_backend__ml_gen_info__V_8_8);
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_11_11 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_11_11;
            else
              {
                ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__V_6_6, ml_backend__ml_gen_info__V_9_9);
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
        MR_Word ml_backend__ml_gen_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));

        {
          ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_gen_info__V_3_3, ml_backend__ml_gen_info__V_6_6);
        }
        if (ml_backend__ml_gen_info__succeeded)
          {
            {
              ml_backend__ml_gen_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_7_7);
            }
            if (ml_backend__ml_gen_info__succeeded)
              {
                ml_backend__ml_gen_info__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_gen_info__V_5_5, ml_backend__ml_gen_info__V_8_8);
              }
          }
      }
    return ml_backend__ml_gen_info__succeeded;
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
    MR_Integer ml_backend__ml_gen_info__CastX_48 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Integer ml_backend__ml_gen_info__CastY_49 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_48 == ml_backend__ml_gen_info__CastY_49);
    if (ml_backend__ml_gen_info__succeeded)
      *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_gen_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ml_backend__ml_gen_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ml_backend__ml_gen_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_gen_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ml_backend__ml_gen_info__V_34_34;
        MR_Integer ml_backend__ml_gen_info__V_65_65 = (MR_Integer) ml_backend__ml_gen_info__V_4_4;
        MR_Integer ml_backend__ml_gen_info__V_66_66 = (MR_Integer) ml_backend__ml_gen_info__V_19_19;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__V_34_34, ml_backend__ml_gen_info__V_65_65, ml_backend__ml_gen_info__V_66_66);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_34_34 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_34_34;
        else
          {
            MR_Word ml_backend__ml_gen_info__V_35_35;
            MR_Integer ml_backend__ml_gen_info__V_67_67 = (MR_Integer) ml_backend__ml_gen_info__V_5_5;
            MR_Integer ml_backend__ml_gen_info__V_68_68 = (MR_Integer) ml_backend__ml_gen_info__V_20_20;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__V_35_35, ml_backend__ml_gen_info__V_67_67, ml_backend__ml_gen_info__V_68_68);
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_35_35 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_35_35;
            else
              {
                MR_Word ml_backend__ml_gen_info__V_36_36;
                MR_Integer ml_backend__ml_gen_info__V_69_69 = (MR_Integer) ml_backend__ml_gen_info__V_6_6;
                MR_Integer ml_backend__ml_gen_info__V_70_70 = (MR_Integer) ml_backend__ml_gen_info__V_21_21;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__V_36_36, ml_backend__ml_gen_info__V_69_69, ml_backend__ml_gen_info__V_70_70);
                }
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_36_36 == (MR_Integer) 0);
                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                if (ml_backend__ml_gen_info__succeeded)
                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_36_36;
                else
                  {
                    MR_Word ml_backend__ml_gen_info__V_37_37;

                    {
                      hlds__hlds_pred____Compare____pred_id_0_0(&ml_backend__ml_gen_info__V_37_37, ml_backend__ml_gen_info__V_7_7, ml_backend__ml_gen_info__V_22_22);
                    }
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_37_37 == (MR_Integer) 0);
                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    if (ml_backend__ml_gen_info__succeeded)
                      *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_37_37;
                    else
                      {
                        MR_Word ml_backend__ml_gen_info__V_38_38;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_gen_info__V_38_38, ml_backend__ml_gen_info__V_8_8, ml_backend__ml_gen_info__V_23_23);
                        }
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_38_38 == (MR_Integer) 0);
                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                        if (ml_backend__ml_gen_info__succeeded)
                          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_38_38;
                        else
                          {
                            MR_Word ml_backend__ml_gen_info__V_39_39;

                            {
                              mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__V_39_39, ml_backend__ml_gen_info__V_9_9, ml_backend__ml_gen_info__V_24_24);
                            }
                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_39_39 == (MR_Integer) 0);
                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                            if (ml_backend__ml_gen_info__succeeded)
                              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_39_39;
                            else
                              {
                                MR_Word ml_backend__ml_gen_info__V_40_40;

                                {
                                  mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__V_40_40, ml_backend__ml_gen_info__V_10_10, ml_backend__ml_gen_info__V_25_25);
                                }
                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_40_40 == (MR_Integer) 0);
                                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                if (ml_backend__ml_gen_info__succeeded)
                                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_40_40;
                                else
                                  {
                                    MR_Word ml_backend__ml_gen_info__V_41_41;

                                    {
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__V_41_41, ml_backend__ml_gen_info__V_11_11, ml_backend__ml_gen_info__V_26_26);
                                    }
                                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_41_41 == (MR_Integer) 0);
                                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                    if (ml_backend__ml_gen_info__succeeded)
                                      *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_41_41;
                                    else
                                      {
                                        MR_Word ml_backend__ml_gen_info__V_42_42;

                                        {
                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__V_42_42, ml_backend__ml_gen_info__V_12_12, ml_backend__ml_gen_info__V_27_27);
                                        }
                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_42_42 == (MR_Integer) 0);
                                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                        if (ml_backend__ml_gen_info__succeeded)
                                          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_42_42;
                                        else
                                          {
                                            MR_Word ml_backend__ml_gen_info__V_43_43;

                                            {
                                              mercury__counter____Compare____counter_0_0(&ml_backend__ml_gen_info__V_43_43, ml_backend__ml_gen_info__V_13_13, ml_backend__ml_gen_info__V_28_28);
                                            }
                                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_43_43 == (MR_Integer) 0);
                                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                            if (ml_backend__ml_gen_info__succeeded)
                                              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_43_43;
                                            else
                                              {
                                                MR_Word ml_backend__ml_gen_info__V_44_44;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3], &ml_backend__ml_gen_info__V_44_44, ((MR_Box) (ml_backend__ml_gen_info__V_14_14)), ((MR_Box) (ml_backend__ml_gen_info__V_29_29)));
                                                }
                                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_44_44 == (MR_Integer) 0);
                                                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                                if (ml_backend__ml_gen_info__succeeded)
                                                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_44_44;
                                                else
                                                  {
                                                    MR_Word ml_backend__ml_gen_info__V_45_45;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], &ml_backend__ml_gen_info__V_45_45, ((MR_Box) (ml_backend__ml_gen_info__V_15_15)), ((MR_Box) (ml_backend__ml_gen_info__V_30_30)));
                                                    }
                                                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_45_45 == (MR_Integer) 0);
                                                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                                    if (ml_backend__ml_gen_info__succeeded)
                                                      *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_45_45;
                                                    else
                                                      {
                                                        MR_Word ml_backend__ml_gen_info__V_46_46;

                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3], &ml_backend__ml_gen_info__V_46_46, ((MR_Box) (ml_backend__ml_gen_info__V_16_16)), ((MR_Box) (ml_backend__ml_gen_info__V_31_31)));
                                                        }
                                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_46_46 == (MR_Integer) 0);
                                                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                                        if (ml_backend__ml_gen_info__succeeded)
                                                          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_46_46;
                                                        else
                                                          {
                                                            MR_Word ml_backend__ml_gen_info__V_47_47;

                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4], &ml_backend__ml_gen_info__V_47_47, ((MR_Box) (ml_backend__ml_gen_info__V_17_17)), ((MR_Box) (ml_backend__ml_gen_info__V_32_32)));
                                                            }
                                                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_47_47 == (MR_Integer) 0);
                                                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                                            if (ml_backend__ml_gen_info__succeeded)
                                                              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_47_47;
                                                            else
                                                              {
                                                                {
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__V_18_18)), ((MR_Box) (ml_backend__ml_gen_info__V_33_33)));
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
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
  MR_Word ml_backend__ml_gen_info__HeadVar__1_1,
  MR_Word ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CastX_33 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
    MR_Integer ml_backend__ml_gen_info__CastY_34 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_33 == ml_backend__ml_gen_info__CastY_34);
    if (ml_backend__ml_gen_info__succeeded)
      ml_backend__ml_gen_info__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_gen_info__TypeInfo_41_41;
        MR_Word ml_backend__ml_gen_info__TypeInfo_42_42;
        MR_Word ml_backend__ml_gen_info__TypeInfo_43_43;
        MR_Word ml_backend__ml_gen_info__TypeInfo_44_44;
        MR_Word ml_backend__ml_gen_info__TypeInfo_45_45;
        MR_Word ml_backend__ml_gen_info__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_gen_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ml_backend__ml_gen_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word ml_backend__ml_gen_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word ml_backend__ml_gen_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_gen_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 12)));

        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_3_3 == ml_backend__ml_gen_info__V_18_18);
        if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_4_4 == ml_backend__ml_gen_info__V_19_19);
            if (ml_backend__ml_gen_info__succeeded)
              {
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_5_5 == ml_backend__ml_gen_info__V_20_20);
                if (ml_backend__ml_gen_info__succeeded)
                  {
                    {
                      ml_backend__ml_gen_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ml_backend__ml_gen_info__V_6_6, ml_backend__ml_gen_info__V_21_21);
                    }
                    if (ml_backend__ml_gen_info__succeeded)
                      {
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_7_7 == ml_backend__ml_gen_info__V_22_22);
                        if (ml_backend__ml_gen_info__succeeded)
                          {
                            {
                              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_8_8, ml_backend__ml_gen_info__V_23_23);
                            }
                            if (ml_backend__ml_gen_info__succeeded)
                              {
                                {
                                  ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_9_9, ml_backend__ml_gen_info__V_24_24);
                                }
                                if (ml_backend__ml_gen_info__succeeded)
                                  {
                                    {
                                      ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_10_10, ml_backend__ml_gen_info__V_25_25);
                                    }
                                    if (ml_backend__ml_gen_info__succeeded)
                                      {
                                        {
                                          ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_11_11, ml_backend__ml_gen_info__V_26_26);
                                        }
                                        if (ml_backend__ml_gen_info__succeeded)
                                          {
                                            {
                                              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_12_12, ml_backend__ml_gen_info__V_27_27);
                                            }
                                            if (ml_backend__ml_gen_info__succeeded)
                                              {
                                                ml_backend__ml_gen_info__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3];
                                                {
                                                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_gen_info__V_13_13)), ((MR_Box) (ml_backend__ml_gen_info__V_28_28)));
                                                }
                                                if (ml_backend__ml_gen_info__succeeded)
                                                  {
                                                    ml_backend__ml_gen_info__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0];
                                                    {
                                                      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_gen_info__V_14_14)), ((MR_Box) (ml_backend__ml_gen_info__V_29_29)));
                                                    }
                                                    if (ml_backend__ml_gen_info__succeeded)
                                                      {
                                                        ml_backend__ml_gen_info__TypeInfo_43_43 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
                                                        {
                                                          ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_43_43, ((MR_Box) (ml_backend__ml_gen_info__V_15_15)), ((MR_Box) (ml_backend__ml_gen_info__V_30_30)));
                                                        }
                                                        if (ml_backend__ml_gen_info__succeeded)
                                                          {
                                                            ml_backend__ml_gen_info__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                                                            {
                                                              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_gen_info__V_16_16)), ((MR_Box) (ml_backend__ml_gen_info__V_31_31)));
                                                            }
                                                            if (ml_backend__ml_gen_info__succeeded)
                                                              {
                                                                ml_backend__ml_gen_info__TypeInfo_45_45 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                                                                {
                                                                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_45_45, ((MR_Box) (ml_backend__ml_gen_info__V_17_17)), ((MR_Box) (ml_backend__ml_gen_info__V_32_32)));
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
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_20_20;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_gen_info__V_20_20, ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_12_12);
        }
        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_20_20 == (MR_Integer) 0);
        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
        if (ml_backend__ml_gen_info__succeeded)
          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_20_20;
        else
          {
            MR_Word ml_backend__ml_gen_info__V_21_21;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], &ml_backend__ml_gen_info__V_21_21, ((MR_Box) (ml_backend__ml_gen_info__V_5_5)), ((MR_Box) (ml_backend__ml_gen_info__V_13_13)));
            }
            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_21_21 == (MR_Integer) 0);
            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
            if (ml_backend__ml_gen_info__succeeded)
              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_21_21;
            else
              {
                MR_Word ml_backend__ml_gen_info__V_22_22;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1], &ml_backend__ml_gen_info__V_22_22, ((MR_Box) (ml_backend__ml_gen_info__V_6_6)), ((MR_Box) (ml_backend__ml_gen_info__V_14_14)));
                }
                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_22_22 == (MR_Integer) 0);
                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                if (ml_backend__ml_gen_info__succeeded)
                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_22_22;
                else
                  {
                    MR_Word ml_backend__ml_gen_info__V_23_23;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2], &ml_backend__ml_gen_info__V_23_23, ((MR_Box) (ml_backend__ml_gen_info__V_7_7)), ((MR_Box) (ml_backend__ml_gen_info__V_15_15)));
                    }
                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_23_23 == (MR_Integer) 0);
                    ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                    if (ml_backend__ml_gen_info__succeeded)
                      *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_23_23;
                    else
                      {
                        MR_Word ml_backend__ml_gen_info__V_24_24;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2], &ml_backend__ml_gen_info__V_24_24, ((MR_Box) (ml_backend__ml_gen_info__V_8_8)), ((MR_Box) (ml_backend__ml_gen_info__V_16_16)));
                        }
                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_24_24 == (MR_Integer) 0);
                        ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                        if (ml_backend__ml_gen_info__succeeded)
                          *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_24_24;
                        else
                          {
                            MR_Word ml_backend__ml_gen_info__V_25_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], &ml_backend__ml_gen_info__V_25_25, ((MR_Box) (ml_backend__ml_gen_info__V_9_9)), ((MR_Box) (ml_backend__ml_gen_info__V_17_17)));
                            }
                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_25_25 == (MR_Integer) 0);
                            ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                            if (ml_backend__ml_gen_info__succeeded)
                              *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_25_25;
                            else
                              {
                                MR_Word ml_backend__ml_gen_info__V_26_26;

                                {
                                  ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_gen_info__V_26_26, ml_backend__ml_gen_info__V_10_10, ml_backend__ml_gen_info__V_18_18);
                                }
                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_26_26 == (MR_Integer) 0);
                                ml_backend__ml_gen_info__succeeded = !(ml_backend__ml_gen_info__succeeded);
                                if (ml_backend__ml_gen_info__succeeded)
                                  *ml_backend__ml_gen_info__HeadVar__1_1 = ml_backend__ml_gen_info__V_26_26;
                                else
                                  {
                                    ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__V_11_11, ml_backend__ml_gen_info__V_19_19);
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
        MR_Word ml_backend__ml_gen_info__TypeInfo_22_22;
        MR_Word ml_backend__ml_gen_info__TypeInfo_23_23;
        MR_Word ml_backend__ml_gen_info__TypeInfo_24_24;
        MR_Word ml_backend__ml_gen_info__TypeInfo_25_25;
        MR_Word ml_backend__ml_gen_info__TypeInfo_26_26;
        MR_Word ml_backend__ml_gen_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer ml_backend__ml_gen_info__CastX_58;
        MR_Integer ml_backend__ml_gen_info__CastY_59;

        {
          ml_backend__ml_gen_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_gen_info__V_3_3, ml_backend__ml_gen_info__V_11_11);
        }
        if (ml_backend__ml_gen_info__succeeded)
          {
            ml_backend__ml_gen_info__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1];
            {
              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_gen_info__V_4_4)), ((MR_Box) (ml_backend__ml_gen_info__V_12_12)));
            }
            if (ml_backend__ml_gen_info__succeeded)
              {
                ml_backend__ml_gen_info__TypeInfo_23_23 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1];
                {
                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_23_23, ((MR_Box) (ml_backend__ml_gen_info__V_5_5)), ((MR_Box) (ml_backend__ml_gen_info__V_13_13)));
                }
                if (ml_backend__ml_gen_info__succeeded)
                  {
                    ml_backend__ml_gen_info__TypeInfo_24_24 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2];
                    {
                      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_24_24, ((MR_Box) (ml_backend__ml_gen_info__V_6_6)), ((MR_Box) (ml_backend__ml_gen_info__V_14_14)));
                    }
                    if (ml_backend__ml_gen_info__succeeded)
                      {
                        ml_backend__ml_gen_info__TypeInfo_25_25 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2];
                        {
                          ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_25_25, ((MR_Box) (ml_backend__ml_gen_info__V_7_7)), ((MR_Box) (ml_backend__ml_gen_info__V_15_15)));
                        }
                        if (ml_backend__ml_gen_info__succeeded)
                          {
                            ml_backend__ml_gen_info__TypeInfo_26_26 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2];
                            {
                              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_26_26, ((MR_Box) (ml_backend__ml_gen_info__V_8_8)), ((MR_Box) (ml_backend__ml_gen_info__V_16_16)));
                            }
                            if (ml_backend__ml_gen_info__succeeded)
                              {
                                {
                                  ml_backend__ml_gen_info__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(ml_backend__ml_gen_info__V_9_9, ml_backend__ml_gen_info__V_17_17);
                                }
                                if (ml_backend__ml_gen_info__succeeded)
                                  {
                                    ml_backend__ml_gen_info__CastX_58 = (MR_Integer) ml_backend__ml_gen_info__V_10_10;
                                    ml_backend__ml_gen_info__CastY_59 = (MR_Integer) ml_backend__ml_gen_info__V_18_18;
                                    ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__CastX_58 == ml_backend__ml_gen_info__CastY_59);
                                    if (ml_backend__ml_gen_info__succeeded)
                                      ml_backend__ml_gen_info__succeeded = MR_TRUE;
                                    else
                                      {
                                        MR_Word ml_backend__ml_gen_info__TypeInfo_41_66;
                                        MR_Word ml_backend__ml_gen_info__TypeInfo_42_67;
                                        MR_Word ml_backend__ml_gen_info__TypeInfo_43_68;
                                        MR_Word ml_backend__ml_gen_info__TypeInfo_44_69;
                                        MR_Word ml_backend__ml_gen_info__TypeInfo_45_70;
                                        MR_Word ml_backend__ml_gen_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 0)))) & (MR_Integer) 1);
                                        MR_Word ml_backend__ml_gen_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                                        MR_Word ml_backend__ml_gen_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                                        MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 1)));
                                        MR_Integer ml_backend__ml_gen_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 2)));
                                        MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 3)));
                                        MR_Word ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 4)));
                                        MR_Word ml_backend__ml_gen_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 5)));
                                        MR_Word ml_backend__ml_gen_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 6)));
                                        MR_Word ml_backend__ml_gen_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 7)));
                                        MR_Word ml_backend__ml_gen_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 8)));
                                        MR_Word ml_backend__ml_gen_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 9)));
                                        MR_Word ml_backend__ml_gen_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 10)));
                                        MR_Word ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 11)));
                                        MR_Word ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_10_10, (MR_Integer) 12)));
                                        MR_Word ml_backend__ml_gen_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 0)))) & (MR_Integer) 1);
                                        MR_Word ml_backend__ml_gen_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                                        MR_Word ml_backend__ml_gen_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                                        MR_Word ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 1)));
                                        MR_Integer ml_backend__ml_gen_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 2)));
                                        MR_Word ml_backend__ml_gen_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 3)));
                                        MR_Word ml_backend__ml_gen_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 4)));
                                        MR_Word ml_backend__ml_gen_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 5)));
                                        MR_Word ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 6)));
                                        MR_Word ml_backend__ml_gen_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 7)));
                                        MR_Word ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 8)));
                                        MR_Word ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 9)));
                                        MR_Word ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 10)));
                                        MR_Word ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 11)));
                                        MR_Word ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_18_18, (MR_Integer) 12)));

                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_28_28 == ml_backend__ml_gen_info__V_43_43);
                                        if (ml_backend__ml_gen_info__succeeded)
                                          {
                                            ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_29_29 == ml_backend__ml_gen_info__V_44_44);
                                            if (ml_backend__ml_gen_info__succeeded)
                                              {
                                                ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_30_30 == ml_backend__ml_gen_info__V_45_45);
                                                if (ml_backend__ml_gen_info__succeeded)
                                                  {
                                                    {
                                                      ml_backend__ml_gen_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ml_backend__ml_gen_info__V_31_31, ml_backend__ml_gen_info__V_46_46);
                                                    }
                                                    if (ml_backend__ml_gen_info__succeeded)
                                                      {
                                                        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_32_32 == ml_backend__ml_gen_info__V_47_47);
                                                        if (ml_backend__ml_gen_info__succeeded)
                                                          {
                                                            {
                                                              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_33_33, ml_backend__ml_gen_info__V_48_48);
                                                            }
                                                            if (ml_backend__ml_gen_info__succeeded)
                                                              {
                                                                {
                                                                  ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_34_34, ml_backend__ml_gen_info__V_49_49);
                                                                }
                                                                if (ml_backend__ml_gen_info__succeeded)
                                                                  {
                                                                    {
                                                                      ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_35_35, ml_backend__ml_gen_info__V_50_50);
                                                                    }
                                                                    if (ml_backend__ml_gen_info__succeeded)
                                                                      {
                                                                        {
                                                                          ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_36_36, ml_backend__ml_gen_info__V_51_51);
                                                                        }
                                                                        if (ml_backend__ml_gen_info__succeeded)
                                                                          {
                                                                            {
                                                                              ml_backend__ml_gen_info__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_gen_info__V_37_37, ml_backend__ml_gen_info__V_52_52);
                                                                            }
                                                                            if (ml_backend__ml_gen_info__succeeded)
                                                                              {
                                                                                ml_backend__ml_gen_info__TypeInfo_41_66 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[3];
                                                                                {
                                                                                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_41_66, ((MR_Box) (ml_backend__ml_gen_info__V_38_38)), ((MR_Box) (ml_backend__ml_gen_info__V_53_53)));
                                                                                }
                                                                                if (ml_backend__ml_gen_info__succeeded)
                                                                                  {
                                                                                    ml_backend__ml_gen_info__TypeInfo_42_67 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0];
                                                                                    {
                                                                                      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_42_67, ((MR_Box) (ml_backend__ml_gen_info__V_39_39)), ((MR_Box) (ml_backend__ml_gen_info__V_54_54)));
                                                                                    }
                                                                                    if (ml_backend__ml_gen_info__succeeded)
                                                                                      {
                                                                                        ml_backend__ml_gen_info__TypeInfo_43_68 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
                                                                                        {
                                                                                          ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_43_68, ((MR_Box) (ml_backend__ml_gen_info__V_40_40)), ((MR_Box) (ml_backend__ml_gen_info__V_55_55)));
                                                                                        }
                                                                                        if (ml_backend__ml_gen_info__succeeded)
                                                                                          {
                                                                                            ml_backend__ml_gen_info__TypeInfo_44_69 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                                                                                            {
                                                                                              ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_44_69, ((MR_Box) (ml_backend__ml_gen_info__V_41_41)), ((MR_Box) (ml_backend__ml_gen_info__V_56_56)));
                                                                                            }
                                                                                            if (ml_backend__ml_gen_info__succeeded)
                                                                                              {
                                                                                                ml_backend__ml_gen_info__TypeInfo_45_70 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                                                                                                {
                                                                                                  ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_gen_info__TypeInfo_45_70, ((MR_Box) (ml_backend__ml_gen_info__V_42_42)), ((MR_Box) (ml_backend__ml_gen_info__V_57_57)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar1_4 = ml_backend__ml_gen_info__HeadVar__2_2;
    MR_Word ml_backend__ml_gen_info__Cast_HeadVar2_5 = ml_backend__ml_gen_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ml_backend__ml_gen_info__HeadVar__1_1, ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_5)));
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
      ml_backend__ml_gen_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_gen_info__Cast_HeadVar2_4)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
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
        MR_Integer ml_backend__ml_gen_info__V_4_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
        MR_Integer ml_backend__ml_gen_info__V_5_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_5_5);
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
        MR_Integer ml_backend__ml_gen_info__V_3_3 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
        MR_Integer ml_backend__ml_gen_info__V_4_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_3_3 == ml_backend__ml_gen_info__V_4_4);
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
        MR_Integer ml_backend__ml_gen_info__V_4_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;
        MR_Integer ml_backend__ml_gen_info__V_5_5 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_gen_info__HeadVar__1_1, ml_backend__ml_gen_info__V_4_4, ml_backend__ml_gen_info__V_5_5);
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
        MR_Integer ml_backend__ml_gen_info__V_3_3 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__1_1;
        MR_Integer ml_backend__ml_gen_info__V_4_4 = (MR_Integer) ml_backend__ml_gen_info__HeadVar__2_2;

        ml_backend__ml_gen_info__succeeded = (ml_backend__ml_gen_info__V_3_3 == ml_backend__ml_gen_info__V_4_4);
      }
    return ml_backend__ml_gen_info__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(
  MR_String ml_backend__ml_gen_info__Name_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__EnvVarNames0_6;
    MR_Word ml_backend__ml_gen_info__EnvVarNames_7;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_39;
    MR_Word ml_backend__ml_gen_info__SubInfo_40;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 11)));
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Word ml_backend__ml_gen_info__V_52_52;
    MR_Integer ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_63_63;

    ml_backend__ml_gen_info__EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 12)));
    {
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ml_backend__ml_gen_info__Name_4)), ml_backend__ml_gen_info__EnvVarNames0_6, &ml_backend__ml_gen_info__EnvVarNames_7);
    }
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_49_49 | ((((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_51_51 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 12) = ((MR_Box) (ml_backend__ml_gen_info__EnvVarNames_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_48_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_40));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(
  MR_Word ml_backend__ml_gen_info__ClosureWrapperDefn_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ClosureWrapperDefns0_6;
    MR_Word ml_backend__ml_gen_info__ClosureWrapperDefns_7;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Integer ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;
    MR_Word ml_backend__ml_gen_info__V_26_26;
    MR_Word ml_backend__ml_gen_info__V_27_27;
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo_39;

    ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__ClosureWrapperDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__ClosureWrapperDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_gen_info__ClosureWrapperDefns_7, 0) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefn_4));
      MR_hl_field(MR_mktag(1), ml_backend__ml_gen_info__ClosureWrapperDefns_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefns0_6));
    }
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_20_20 | ((((ml_backend__ml_gen_info__V_21_21 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_22_22 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_23_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_24_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_25_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_26_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_27_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_28_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_29_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_30_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_31_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__ClosureWrapperDefns_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_32_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_33_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_17_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_18_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_19_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(
  MR_Word ml_backend__ml_gen_info__ConstVarMap_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__SubInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo_7;
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 11)));
    MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 12)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_6, (MR_Integer) 8)));

    {
      ml_backend__ml_gen_info__SubInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_18_18 | ((((ml_backend__ml_gen_info__V_19_19 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_20_20 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_21_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_22_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_23_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_24_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_25_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_26_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_27_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 8) = ((MR_Box) (ml_backend__ml_gen_info__ConstVarMap_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_29_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_30_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_31_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_7, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_32_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_17_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(
  MR_Word ml_backend__ml_gen_info__VarLvals_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__VarLvals_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__VarLvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__VarLvals_9;
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_34_34;
    MR_Word ml_backend__ml_gen_info__V_35_35;
    MR_Word ml_backend__ml_gen_info__V_33_33;

    {
      mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), ((MR_Box) (ml_backend__ml_gen_info__Lval_6)), ml_backend__ml_gen_info__VarLvals0_8, &ml_backend__ml_gen_info__VarLvals_9);
    }
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_28_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_29_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_30_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_31_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_32_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__VarLvals_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_34_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_35_35));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__SuccCont_4)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Stack_5;
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Box ml_backend__ml_gen_info__conv0_SuccCont_4;

    ml_backend__ml_gen_info__Stack_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_8_8, (MR_Integer) 12)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Stack0_4;
    MR_Word ml_backend__ml_gen_info__Stack_6;
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_38;
    MR_Word ml_backend__ml_gen_info__SubInfo_39;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info___SuccCont_5;
    MR_Box ml_backend__ml_gen_info__conv0__SuccCont_5;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Integer ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_61_61;

    ml_backend__ml_gen_info__Stack0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 12)));
    {
      mercury__stack__det_pop_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &ml_backend__ml_gen_info__conv0__SuccCont_5, ml_backend__ml_gen_info__Stack0_4, &ml_backend__ml_gen_info__Stack_6);
    }
    ml_backend__ml_gen_info___SuccCont_5 = ((MR_Word) ml_backend__ml_gen_info__conv0__SuccCont_5);
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_48_48 | ((((ml_backend__ml_gen_info__V_49_49 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__Stack_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Stack0_6;
    MR_Word ml_backend__ml_gen_info__Stack_7;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_39;
    MR_Word ml_backend__ml_gen_info__SubInfo_40;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 8)));
    MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 9)));
    MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 10)));
    MR_Word ml_backend__ml_gen_info__V_34_34;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Word ml_backend__ml_gen_info__V_52_52;
    MR_Integer ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_63_63;
    MR_Word ml_backend__ml_gen_info__V_62_62;

    ml_backend__ml_gen_info__Stack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_13_13, (MR_Integer) 12)));
    {
      mercury__stack__push_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, ((MR_Box) (ml_backend__ml_gen_info__SuccCont_4)), ml_backend__ml_gen_info__Stack0_6, &ml_backend__ml_gen_info__Stack_7);
    }
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_39, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_49_49 | ((((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_51_51 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 11) = ((MR_Box) (ml_backend__ml_gen_info__Stack_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_40, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_63_63));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_48_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_40));
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
    MR_Word ml_backend__ml_gen_info__ConstVarMap_7;
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Box ml_backend__ml_gen_info__conv0_GroundTerm_6;

    ml_backend__ml_gen_info__ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 12)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ConstVarMap_7;
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_4, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Box ml_backend__ml_gen_info__conv0_GroundTerm_6;

    ml_backend__ml_gen_info__ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_11_11, (MR_Integer) 12)));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ConstVarMap0_8;
    MR_Word ml_backend__ml_gen_info__ConstVarMap_9;
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_42;
    MR_Word ml_backend__ml_gen_info__SubInfo_43;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_34_34;
    MR_Word ml_backend__ml_gen_info__V_35_35;
    MR_Word ml_backend__ml_gen_info__V_36_36;
    MR_Word ml_backend__ml_gen_info__V_37_37;
    MR_Word ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Integer ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_63_63;
    MR_Word ml_backend__ml_gen_info__V_64_64;
    MR_Word ml_backend__ml_gen_info__V_65_65;
    MR_Word ml_backend__ml_gen_info__V_66_66;
    MR_Word ml_backend__ml_gen_info__V_62_62;

    ml_backend__ml_gen_info__ConstVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_16_16, (MR_Integer) 12)));
    {
      mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_gen_info__Var_5)), ((MR_Box) (ml_backend__ml_gen_info__GroundTerm_6)), ml_backend__ml_gen_info__ConstVarMap0_8, &ml_backend__ml_gen_info__ConstVarMap_9);
    }
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_42, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_52_52 | ((((ml_backend__ml_gen_info__V_53_53 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_54_54 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 8) = ((MR_Box) (ml_backend__ml_gen_info__ConstVarMap_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_63_63));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_64_64));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_65_65));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_43, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_66_66));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_48_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_49_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_50_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_43));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__ConvNum_4;
    MR_Word ml_backend__ml_gen_info__ConvCounter0_6;
    MR_Word ml_backend__ml_gen_info__ConvCounter_7;
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_38;
    MR_Word ml_backend__ml_gen_info__SubInfo_39;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Integer ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_57_57;

    ml_backend__ml_gen_info__ConvCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__ConvNum_4, ml_backend__ml_gen_info__ConvCounter0_6, &ml_backend__ml_gen_info__ConvCounter_7);
    }
    *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Word) ml_backend__ml_gen_info__ConvNum_4;
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_48_48 | ((((ml_backend__ml_gen_info__V_49_49 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__ConvCounter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Integer ml_backend__ml_gen_info__CondNum_4;
    MR_Word ml_backend__ml_gen_info__CondCounter0_6;
    MR_Word ml_backend__ml_gen_info__CondCounter_7;
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_38;
    MR_Word ml_backend__ml_gen_info__SubInfo_39;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Integer ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_56_56;

    ml_backend__ml_gen_info__CondCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__CondNum_4, ml_backend__ml_gen_info__CondCounter0_6, &ml_backend__ml_gen_info__CondCounter_7);
    }
    *ml_backend__ml_gen_info__HeadVar__1_1 = (MR_Word) ml_backend__ml_gen_info__CondNum_4;
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_48_48 | ((((ml_backend__ml_gen_info__V_49_49 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__CondCounter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0(
  MR_String ml_backend__ml_gen_info__Prefix_5,
  MR_Word * ml_backend__ml_gen_info__VarName_6,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_13)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__AuxVarCounter0_8;
    MR_Integer ml_backend__ml_gen_info__AuxVarNum_9;
    MR_Word ml_backend__ml_gen_info__AuxVarCounter_10;
    MR_String ml_backend__ml_gen_info__Name_11;
    MR_String ml_backend__ml_gen_info__V_15_15;
    MR_String ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_46;
    MR_Word ml_backend__ml_gen_info__SubInfo_47;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Word ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_35_35;
    MR_Word ml_backend__ml_gen_info__V_36_36;
    MR_Word ml_backend__ml_gen_info__V_37_37;
    MR_Word ml_backend__ml_gen_info__V_38_38;
    MR_Word ml_backend__ml_gen_info__V_39_39;
    MR_Word ml_backend__ml_gen_info__V_40_40;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Integer ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_64_64;
    MR_Word ml_backend__ml_gen_info__V_65_65;
    MR_Word ml_backend__ml_gen_info__V_66_66;
    MR_Word ml_backend__ml_gen_info__V_67_67;
    MR_Word ml_backend__ml_gen_info__V_68_68;
    MR_Word ml_backend__ml_gen_info__V_69_69;
    MR_Word ml_backend__ml_gen_info__V_70_70;
    MR_Word ml_backend__ml_gen_info__V_63_63;

    ml_backend__ml_gen_info__AuxVarCounter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_20_20, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__AuxVarNum_9, ml_backend__ml_gen_info__AuxVarCounter0_8, &ml_backend__ml_gen_info__AuxVarCounter_10);
    }
    ml_backend__ml_gen_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_46, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_56_56 | ((((ml_backend__ml_gen_info__V_57_57 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_58_58 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 5) = ((MR_Box) (ml_backend__ml_gen_info__AuxVarCounter_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_64_64));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_65_65));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_66_66));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_67_67));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_68_68));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_69_69));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_47, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_70_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_49_49));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_50_50));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_47));
    }
    {
      ml_backend__ml_gen_info__V_17_17 = mercury__string__int_to_string_1_f_0(ml_backend__ml_gen_info__AuxVarNum_9);
    }
    {
      ml_backend__ml_gen_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_gen_info__V_17_17);
    }
    {
      ml_backend__ml_gen_info__Name_11 = mercury__string__f_43_43_2_f_0(ml_backend__ml_gen_info__Prefix_5, ml_backend__ml_gen_info__V_15_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__VarName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__Name_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter0_4;
    MR_Integer ml_backend__ml_gen_info__FuncLabel_5;
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter_7;
    MR_Integer ml_backend__ml_gen_info__V_10_10;
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_40;
    MR_Word ml_backend__ml_gen_info__SubInfo_41;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_27_27;
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__V_34_34;
    MR_Word ml_backend__ml_gen_info__V_35_35;
    MR_Word ml_backend__ml_gen_info__V_6_6;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Word ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Integer ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_63_63;
    MR_Word ml_backend__ml_gen_info__V_64_64;
    MR_Word ml_backend__ml_gen_info__V_55_55;

    ml_backend__ml_gen_info__FuncLabelCounter0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_14_14, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_gen_info__FuncLabel_5, ml_backend__ml_gen_info__FuncLabelCounter0_4, &ml_backend__ml_gen_info__V_6_6);
    }
    ml_backend__ml_gen_info__V_10_10 = (ml_backend__ml_gen_info__FuncLabel_5 + (MR_Integer) 10000);
    {
      ml_backend__ml_gen_info__FuncLabelCounter_7 = mercury__counter__init_1_f_0(ml_backend__ml_gen_info__V_10_10);
    }
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_40, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_50_50 | ((((ml_backend__ml_gen_info__V_51_51 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_52_52 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 3) = ((MR_Box) (ml_backend__ml_gen_info__FuncLabelCounter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_63_63));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_41, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_64_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_41));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Counter0_6;
    MR_Word ml_backend__ml_gen_info__Counter_7;
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_38;
    MR_Word ml_backend__ml_gen_info__SubInfo_39;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_25_25;
    MR_Word ml_backend__ml_gen_info__V_26_26;
    MR_Word ml_backend__ml_gen_info__V_27_27;
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Integer ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_54_54;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_53_53;

    ml_backend__ml_gen_info__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(ml_backend__ml_gen_info__Label_4, ml_backend__ml_gen_info__Counter0_6, &ml_backend__ml_gen_info__Counter_7);
    }
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_48_48 | ((((ml_backend__ml_gen_info__V_49_49 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__Counter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Counter0_6;
    MR_Word ml_backend__ml_gen_info__Counter_7;
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__SubInfo0_38;
    MR_Word ml_backend__ml_gen_info__SubInfo_39;
    MR_Word ml_backend__ml_gen_info__V_41_41;
    MR_Word ml_backend__ml_gen_info__V_42_42;
    MR_Word ml_backend__ml_gen_info__V_43_43;
    MR_Word ml_backend__ml_gen_info__V_44_44;
    MR_Word ml_backend__ml_gen_info__V_45_45;
    MR_Word ml_backend__ml_gen_info__V_46_46;
    MR_Word ml_backend__ml_gen_info__V_47_47;
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_gen_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_26_26;
    MR_Word ml_backend__ml_gen_info__V_27_27;
    MR_Word ml_backend__ml_gen_info__V_28_28;
    MR_Word ml_backend__ml_gen_info__V_29_29;
    MR_Word ml_backend__ml_gen_info__V_30_30;
    MR_Word ml_backend__ml_gen_info__V_31_31;
    MR_Word ml_backend__ml_gen_info__V_32_32;
    MR_Word ml_backend__ml_gen_info__V_33_33;
    MR_Word ml_backend__ml_gen_info__V_48_48;
    MR_Word ml_backend__ml_gen_info__V_49_49;
    MR_Word ml_backend__ml_gen_info__V_50_50;
    MR_Word ml_backend__ml_gen_info__V_51_51;
    MR_Integer ml_backend__ml_gen_info__V_52_52;
    MR_Word ml_backend__ml_gen_info__V_53_53;
    MR_Word ml_backend__ml_gen_info__V_55_55;
    MR_Word ml_backend__ml_gen_info__V_56_56;
    MR_Word ml_backend__ml_gen_info__V_57_57;
    MR_Word ml_backend__ml_gen_info__V_58_58;
    MR_Word ml_backend__ml_gen_info__V_59_59;
    MR_Word ml_backend__ml_gen_info__V_60_60;
    MR_Word ml_backend__ml_gen_info__V_61_61;
    MR_Word ml_backend__ml_gen_info__V_62_62;
    MR_Word ml_backend__ml_gen_info__V_54_54;

    ml_backend__ml_gen_info__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_12_12, (MR_Integer) 12)));
    {
      mercury__counter__allocate_3_p_0(ml_backend__ml_gen_info__Label_4, ml_backend__ml_gen_info__Counter0_6, &ml_backend__ml_gen_info__Counter_7);
    }
    ml_backend__ml_gen_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    ml_backend__ml_gen_info__SubInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo0_38, (MR_Integer) 12)));
    {
      ml_backend__ml_gen_info__SubInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 0) = ((MR_Box) ((ml_backend__ml_gen_info__V_48_48 | ((((ml_backend__ml_gen_info__V_49_49 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__V_50_50 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_51_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 4) = ((MR_Box) (ml_backend__ml_gen_info__Counter_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_55_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 8) = ((MR_Box) (ml_backend__ml_gen_info__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 9) = ((MR_Box) (ml_backend__ml_gen_info__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 10) = ((MR_Box) (ml_backend__ml_gen_info__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 11) = ((MR_Box) (ml_backend__ml_gen_info__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_39, 12) = ((MR_Box) (ml_backend__ml_gen_info__V_62_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_41_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_42_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_43_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_47_47));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_39));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__PutCommitInNestedFunc_4)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Globals_5;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_9, &ml_backend__ml_gen_info__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_5, (MR_Integer) 259, ml_backend__ml_gen_info__PutCommitInNestedFunc_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__UseNestedFuncs_4)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Globals_5;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_9, &ml_backend__ml_gen_info__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_5, (MR_Integer) 256, ml_backend__ml_gen_info__UseNestedFuncs_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__ModuleName_4)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));

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
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_5, ml_backend__ml_gen_info__Globals_4);
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(
  MR_Word ml_backend__ml_gen_info__GlobalData_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__GlobalData_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_value_output_vars_3_p_0(
  MR_Word ml_backend__ml_gen_info__OutputVars_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__OutputVars_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(
  MR_Word ml_backend__ml_gen_info__OutputVars_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__OutputVars_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(
  MR_Word ml_backend__ml_gen_info__VarTypes_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__VarTypes_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(
  MR_Word ml_backend__ml_gen_info__VarSet_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__VarSet_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(
  MR_Word ml_backend__ml_gen_info__ModuleInfo_4,
  MR_Word ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_gen_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_gen_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_gen_info__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_gen_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_gen_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_gen_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_gen_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_gen_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_gen_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_gen_info__V_16_16));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_8_8;
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_7_7;
    MR_Word ml_backend__ml_gen_info__V_8_8;
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_6_6;
    MR_Word ml_backend__ml_gen_info__V_7_7;
    MR_Word ml_backend__ml_gen_info__V_8_8;
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_5_5;
    MR_Word ml_backend__ml_gen_info__V_6_6;
    MR_Word ml_backend__ml_gen_info__V_7_7;
    MR_Word ml_backend__ml_gen_info__V_8_8;
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Integer * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word ml_backend__ml_gen_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_16_16;
    MR_Word ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_18_18;
    MR_Word ml_backend__ml_gen_info__V_19_19;
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Integer ml_backend__ml_gen_info__V_15_15;
    MR_Word ml_backend__ml_gen_info__V_16_16;
    MR_Word ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_18_18;
    MR_Word ml_backend__ml_gen_info__V_19_19;
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word ml_backend__ml_gen_info__V_14_14;
    MR_Integer ml_backend__ml_gen_info__V_15_15;
    MR_Word ml_backend__ml_gen_info__V_16_16;
    MR_Word ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_18_18;
    MR_Word ml_backend__ml_gen_info__V_19_19;
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word ml_backend__ml_gen_info__V_13_13;
    MR_Word ml_backend__ml_gen_info__V_14_14;
    MR_Integer ml_backend__ml_gen_info__V_15_15;
    MR_Word ml_backend__ml_gen_info__V_16_16;
    MR_Word ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_18_18;
    MR_Word ml_backend__ml_gen_info__V_19_19;
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_gen_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_gen_info__V_12_12;
    MR_Word ml_backend__ml_gen_info__V_13_13;
    MR_Word ml_backend__ml_gen_info__V_14_14;
    MR_Integer ml_backend__ml_gen_info__V_15_15;
    MR_Word ml_backend__ml_gen_info__V_16_16;
    MR_Word ml_backend__ml_gen_info__V_17_17;
    MR_Word ml_backend__ml_gen_info__V_18_18;
    MR_Word ml_backend__ml_gen_info__V_19_19;
    MR_Word ml_backend__ml_gen_info__V_20_20;
    MR_Word ml_backend__ml_gen_info__V_21_21;
    MR_Word ml_backend__ml_gen_info__V_22_22;
    MR_Word ml_backend__ml_gen_info__V_23_23;
    MR_Word ml_backend__ml_gen_info__V_24_24;
    MR_Word ml_backend__ml_gen_info__V_25_25;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    ml_backend__ml_gen_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    ml_backend__ml_gen_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 7)));
    ml_backend__ml_gen_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 8)));
    ml_backend__ml_gen_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 9)));
    ml_backend__ml_gen_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 10)));
    ml_backend__ml_gen_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 11)));
    ml_backend__ml_gen_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__V_4_4, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(
  MR_Word ml_backend__ml_gen_info__Info_3,
  MR_Word * ml_backend__ml_gen_info__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__V_4_4;
    MR_Word ml_backend__ml_gen_info__V_5_5;
    MR_Word ml_backend__ml_gen_info__V_6_6;
    MR_Word ml_backend__ml_gen_info__V_7_7;
    MR_Word ml_backend__ml_gen_info__V_8_8;
    MR_Word ml_backend__ml_gen_info__V_9_9;
    MR_Word ml_backend__ml_gen_info__V_10_10;

    *ml_backend__ml_gen_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 0)));
    ml_backend__ml_gen_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 1)));
    ml_backend__ml_gen_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 2)));
    ml_backend__ml_gen_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 3)));
    ml_backend__ml_gen_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 4)));
    ml_backend__ml_gen_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 5)));
    ml_backend__ml_gen_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 6)));
    ml_backend__ml_gen_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_3, (MR_Integer) 7)));
  }
}

MR_Word MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(
  MR_Word ml_backend__ml_gen_info__ModuleInfo_8,
  MR_Word ml_backend__ml_gen_info__ConstStructMap_9,
  MR_Word ml_backend__ml_gen_info__PredId_10,
  MR_Integer ml_backend__ml_gen_info__ProcId_11,
  MR_Word ml_backend__ml_gen_info__ProcInfo_12,
  MR_Word ml_backend__ml_gen_info__GlobalData_13)
{
  {
    MR_bool ml_backend__ml_gen_info__succeeded;
    MR_Word ml_backend__ml_gen_info__Info_14;
    MR_Word ml_backend__ml_gen_info__TypeInfo_42_42;
    MR_Word ml_backend__ml_gen_info__Globals_15;
    MR_Word ml_backend__ml_gen_info__HighLevelData_16;
    MR_Word ml_backend__ml_gen_info__CompilationTarget_17;
    MR_Word ml_backend__ml_gen_info__GC_18;
    MR_Word ml_backend__ml_gen_info__HeadVars_19;
    MR_Word ml_backend__ml_gen_info__VarSet_20;
    MR_Word ml_backend__ml_gen_info__VarTypes_21;
    MR_Word ml_backend__ml_gen_info__HeadModes_22;
    MR_Word ml_backend__ml_gen_info__ByRefOutputVars_23;
    MR_Word ml_backend__ml_gen_info__FuncLabelCounter_25;
    MR_Word ml_backend__ml_gen_info__LabelCounter_26;
    MR_Word ml_backend__ml_gen_info__AuxVarCounter_27;
    MR_Word ml_backend__ml_gen_info__CondVarCounter_28;
    MR_Word ml_backend__ml_gen_info__ConvVarCounter_29;
    MR_Word ml_backend__ml_gen_info__ConstVarMap_30;
    MR_Word ml_backend__ml_gen_info__SuccContStack_31;
    MR_Word ml_backend__ml_gen_info__VarLvals_32;
    MR_Word ml_backend__ml_gen_info__EnvVarNames_34;
    MR_Word ml_backend__ml_gen_info__SubInfo_35;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_gen_info__ModuleInfo_8, &ml_backend__ml_gen_info__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_gen_info__Globals_15, (MR_Integer) 255, &ml_backend__ml_gen_info__HighLevelData_16);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_gen_info__Globals_15, &ml_backend__ml_gen_info__CompilationTarget_17);
    }
    {
      libs__globals__get_gc_method_2_p_0(ml_backend__ml_gen_info__Globals_15, &ml_backend__ml_gen_info__GC_18);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_gen_info__ProcInfo_12, &ml_backend__ml_gen_info__HeadVars_19);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_gen_info__ProcInfo_12, &ml_backend__ml_gen_info__VarSet_20);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_gen_info__ProcInfo_12, &ml_backend__ml_gen_info__VarTypes_21);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_gen_info__ProcInfo_12, &ml_backend__ml_gen_info__HeadModes_22);
    }
    {
      ml_backend__ml_gen_info__ByRefOutputVars_23 = check_hlds__mode_util__select_output_vars_4_f_0(ml_backend__ml_gen_info__ModuleInfo_8, ml_backend__ml_gen_info__HeadVars_19, ml_backend__ml_gen_info__HeadModes_22, ml_backend__ml_gen_info__VarTypes_21);
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
    ml_backend__ml_gen_info__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(ml_backend__ml_gen_info__TypeInfo_42_42, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, &ml_backend__ml_gen_info__ConstVarMap_30);
    }
    {
      mercury__stack__init_1_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &ml_backend__ml_gen_info__SuccContStack_31);
    }
    {
      mercury__map__init_1_p_0(ml_backend__ml_gen_info__TypeInfo_42_42, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, &ml_backend__ml_gen_info__VarLvals_32);
    }
    {
      ml_backend__ml_gen_info__EnvVarNames_34 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ml_backend__ml_gen_info__SubInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 0) = ((MR_Box) ((ml_backend__ml_gen_info__HighLevelData_16 | ((((ml_backend__ml_gen_info__CompilationTarget_17 << (MR_Integer) 1)) | ((ml_backend__ml_gen_info__GC_18 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 1) = ((MR_Box) (ml_backend__ml_gen_info__PredId_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 2) = ((MR_Box) (ml_backend__ml_gen_info__ProcId_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 3) = ((MR_Box) (ml_backend__ml_gen_info__FuncLabelCounter_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 4) = ((MR_Box) (ml_backend__ml_gen_info__LabelCounter_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 5) = ((MR_Box) (ml_backend__ml_gen_info__AuxVarCounter_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 6) = ((MR_Box) (ml_backend__ml_gen_info__CondVarCounter_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 7) = ((MR_Box) (ml_backend__ml_gen_info__ConvVarCounter_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 8) = ((MR_Box) (ml_backend__ml_gen_info__ConstVarMap_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 9) = ((MR_Box) (ml_backend__ml_gen_info__ConstStructMap_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 11) = ((MR_Box) (ml_backend__ml_gen_info__SuccContStack_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__SubInfo_35, 12) = ((MR_Box) (ml_backend__ml_gen_info__EnvVarNames_34));
    }
    {
      ml_backend__ml_gen_info__Info_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 0) = ((MR_Box) (ml_backend__ml_gen_info__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 1) = ((MR_Box) (ml_backend__ml_gen_info__VarSet_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 2) = ((MR_Box) (ml_backend__ml_gen_info__VarTypes_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 3) = ((MR_Box) (ml_backend__ml_gen_info__ByRefOutputVars_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 5) = ((MR_Box) (ml_backend__ml_gen_info__VarLvals_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 6) = ((MR_Box) (ml_backend__ml_gen_info__GlobalData_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_gen_info__Info_14, 7) = ((MR_Box) (ml_backend__ml_gen_info__SubInfo_35));
    }
    return ml_backend__ml_gen_info__Info_14;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_gen_info. */
