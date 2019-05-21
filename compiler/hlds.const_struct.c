/*
** Automatically generated from `const_struct.m'
** by the Mercury compiler,
** version rotd-2017-09-14
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.const_struct.
// :- implementation.

/*
INIT mercury__hlds__const_struct__init
ENDINIT
*/

#include "hlds.const_struct.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "require.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1];

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7];

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7];

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7];

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0;

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1];

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1];

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1];

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1];

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word NumMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
  MR_Word OtherMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
  MR_Word ConsMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer Num_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
  MR_Word Db_3,
  MR_Integer * X_4);

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3];




static /* final */ const MR_Box hlds__const_struct_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__const_struct_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0[5] = {
  (MR_String) "cps_name",
  (MR_String) "cps_args",
  (MR_String) "cps_cons_id",
  (MR_String) "cps_term_type",
  (MR_String) "cps_term_inst"
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0 = {
  (MR_String) "cons_proxy_struct",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____cons_proxy_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____cons_proxy_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "cons_proxy_struct",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_cons_proxy_struct_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_cons_proxy_struct_0
};

static const MR_FA_TypeInfo_Struct1 hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0 = {
  (MR_String) "ciid",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_id_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_id_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_id",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_instance_id_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_instance_id_0
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__const_struct____Unify____const_instance_map_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_instance_map_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_instance_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__list__ti_list_1hlds__const_struct__type_ctor_info_const_struct_arg_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0[4] = {
  (MR_String) "cs_cons_id",
  (MR_String) "cs_args",
  (MR_String) "cs_term_type",
  (MR_String) "cs_term_inst"
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0 = {
  (MR_String) "const_struct",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_0
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0 = {
  (MR_String) "csa_const_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1 = {
  (MR_String) "csa_constant",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0[2] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_0,
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_arg_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_arg_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_arg",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_arg_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_arg_0
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_cons_proxy_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__const_struct__type_ctor_info_const_struct_0,
  (MR_PseudoTypeInfo) &hlds__const_struct__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_instance_id_0builtin__type_ctor_info_int_0
};

static const MR_ConstString hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0[7] = {
  (MR_String) "csdb_poly_enabled",
  (MR_String) "csdb_ground_term_enabled",
  (MR_String) "csdb_next_num",
  (MR_String) "csdb_cons_proxy_map",
  (MR_String) "csdb_other_struct_map",
  (MR_String) "csdb_num_map",
  (MR_String) "csdb_instance_map"
};

static const MR_DuArgLocn hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0 = {
  (MR_String) "const_struct_db",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

static const MR_Integer hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__const_struct____Unify____const_struct_db_0_0_10001)),
  ((MR_Box) (hlds__const_struct____Compare____const_struct_db_0_0_10001)),
  (MR_String) "hlds.const_struct",
  (MR_String) "const_struct_db",
  {     hlds__const_struct__hlds__const_struct__du_name_ordered_const_struct_db_0 },
  {     hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__const_struct__hlds__const_struct__functor_number_map_const_struct_db_0
};

void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_18;
      MR_Integer Var_33 = (MR_Integer) ArgX1_4;
      MR_Integer Var_34 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_18, Var_33, Var_34);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;
        MR_Integer Var_35 = (MR_Integer) ArgX2_6;
        MR_Integer Var_36 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, Var_35, Var_36);
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

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[1], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[2], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[3], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
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
hlds__const_struct____Unify____const_struct_db_0_0(
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
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) &hlds__const_struct_scalar_common_2[1];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) &hlds__const_struct_scalar_common_2[2];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) &hlds__const_struct_scalar_common_2[3];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_22_22 = (MR_Word) &hlds__const_struct_scalar_common_2[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
hlds__const_struct____Compare____const_struct_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_22, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_16;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_16, Var_24, ArgY1_13);
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
          parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_23, ArgY2_15);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word Var_12;

      parse_tree__prog_data____Compare____cons_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          parse_tree__prog_data____Compare____mer_type_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        parse_tree__prog_data____Compare____prog_constraint_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0(
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
    {
      MR_Word TypeInfo_12_12;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &hlds__const_struct_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
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
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          parse_tree__prog_data____Compare____cons_id_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            parse_tree__prog_data____Compare____mer_type_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
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
      MR_Word TypeInfo_15_15;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_structs_2_p_0(
  MR_Word Db_3,
  MR_Word * Structs_4)
{
  {
    MR_Word NumMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));

    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, NumMap_5, Structs_4);
  }
}

void MR_CALL 
hlds__const_struct__delete_const_struct_3_p_0(
  MR_Integer ConstNum_4,
  MR_Word STATE_VARIABLE_Db_0_23,
  MR_Word * STATE_VARIABLE_Db_24)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeCtorInfo_31_31 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
    MR_Word NumMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
    MR_Word ConstStruct_7;
    MR_Word NumMap_8;
    MR_Word ConsId_9;
    MR_Word Args_10;
    MR_Word Type_11;
    MR_Word Inst_12;
    MR_Word STATE_VARIABLE_Db_25_25;
    MR_Word Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
    MR_Box conv0_ConstStruct_7;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Integer Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_51;
    MR_Word SymName_13;
    MR_Integer Var_14;
    MR_Word Var_15;

    mercury__map__det_remove_4_p_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, ((MR_Box) (ConstNum_4)), &conv0_ConstStruct_7, NumMap0_6, &NumMap_8);
    ConstStruct_7 = ((MR_Word) conv0_ConstStruct_7);
    Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
    Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
    {
      STATE_VARIABLE_Db_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 0) = ((MR_Box) ((Var_46 | ((Var_47 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 1) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 3) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 4) = ((MR_Box) (NumMap_8));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, 5) = ((MR_Box) (Var_52));
    }
    ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 0)));
    Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 1)));
    Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 2)));
    Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_7, (MR_Integer) 3)));
    succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));
      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 3)));
      {
        MR_String Name_16;
        MR_Word ConsProxyStruct_17;
        MR_Word ConsMap0_18;
        MR_Word ConsMap_20;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Integer Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Integer _ConstNum_19;
        MR_Box conv1__ConstNum_19;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Integer Var_68;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_69;

        Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
        {
          ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 0) = ((MR_Box) (Name_16));
          MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 1) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 2) = ((MR_Box) (ConsId_9));
          MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 3) = ((MR_Box) (Type_11));
          MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 4) = ((MR_Box) (Inst_12));
        }
        Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
        Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
        ConsMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
        mercury__map__det_remove_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, TypeCtorInfo_30_30, ((MR_Box) (ConsProxyStruct_17)), &conv1__ConstNum_19, ConsMap0_18, &ConsMap_20);
        _ConstNum_19 = ((MR_Integer) conv1__ConstNum_19);
        Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
        Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Db_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_66 | ((Var_67 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsMap_20));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
        }
      }
    }
    else
    {
      MR_Word OtherMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
      MR_Word OtherMap_22;
      MR_Word Var_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Integer Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
      MR_Integer _ConstNum_28;
      MR_Box conv2__ConstNum_28;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Integer Var_88;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_90;

      mercury__map__det_remove_4_p_0(TypeCtorInfo_31_31, TypeCtorInfo_30_30, ((MR_Box) (ConstStruct_7)), &conv2__ConstNum_28, OtherMap0_21, &OtherMap_22);
      _ConstNum_28 = ((MR_Integer) conv2__ConstNum_28);
      Var_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
      Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Db_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_86 | ((Var_87 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OtherMap_22));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_92));
      }
    }
  }
}

void MR_CALL 
hlds__const_struct__insert_constant_instance_4_p_0(
  MR_Word InstanceId_5,
  MR_Integer ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_10,
  MR_Word * STATE_VARIABLE_Db_11)
{
  {
    MR_Word InstanceMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
    MR_Word InstanceMap_9;
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    mercury__map__det_insert_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (InstanceId_5)), ((MR_Box) (ConstNum_6)), InstanceMap0_8, &InstanceMap_9);
    Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_28 | ((Var_29 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InstanceMap_9));
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct__search_for_constant_instance_3_p_0(
  MR_Word Db_4,
  MR_Word InstanceId_5,
  MR_Integer * ConstNum_6)
{
  {
    MR_bool succeeded;
    MR_Word InstanceMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 5)));
    MR_Word Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 4)));
    MR_Box conv0_ConstNum_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, InstanceMap_7, ((MR_Box) (InstanceId_5)), &conv0_ConstNum_6);
    if (succeeded)
    {
      *ConstNum_6 = ((MR_Integer) conv0_ConstNum_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__const_struct__lookup_const_struct_num_3_p_0(
  MR_Word Db_4,
  MR_Integer ConstNum_5,
  MR_Word * ConstStruct_6)
{
  {
    MR_Word NumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 4)));
    MR_Word Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_4, (MR_Integer) 5)));
    MR_Box conv0_ConstStruct_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, NumMap_7, ConstNum_5, &conv0_ConstStruct_6);
    *ConstStruct_6 = ((MR_Word) conv0_ConstStruct_6);
  }
}

void MR_CALL 
hlds__const_struct__lookup_insert_const_struct_4_p_0(
  MR_Word ConstStruct_5,
  MR_Integer * ConstNum_6,
  MR_Word STATE_VARIABLE_Db_0_26,
  MR_Word * STATE_VARIABLE_Db_27)
{
  {
    MR_bool succeeded;
    MR_Word Enabled_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));

    switch (Enabled_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.const_struct", (MR_String) "predicate \140hlds.const_struct.lookup_insert_const_struct\'/4", (MR_String) "not enabled");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 0)));
          MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 1)));
          MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 2)));
          MR_Word Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_5, (MR_Integer) 3)));
          MR_Word SymName_13;
          MR_Integer Var_14;
          MR_Word Var_15;

          succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1)));
            Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2)));
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 3)));
            {
              MR_String Name_16;
              MR_Word ConsProxyStruct_17;
              MR_Integer NextConstNum_18;
              MR_Word ConsMap0_19;
              MR_Word MaybeOldConstNum_20;
              MR_Word ConsMap_21;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;

              Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
              {
                ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 0) = ((MR_Box) (Name_16));
                MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 1) = ((MR_Box) (Args_10));
                MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 2) = ((MR_Box) (ConsId_9));
                MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 3) = ((MR_Box) (Type_11));
                MR_hl_field(MR_mktag(0), ConsProxyStruct_17, 4) = ((MR_Box) (Inst_12));
              }
              Var_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
              Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              NextConstNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
              ConsMap0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
              Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
              Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
              mercury__map__search_insert_5_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ConsProxyStruct_17)), ((MR_Box) (NextConstNum_18)), &MaybeOldConstNum_20, ConsMap0_19, &ConsMap_21);
              if ((MaybeOldConstNum_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word NumMap0_22;
                MR_Word NumMap_23;
                MR_Integer Var_28;
                MR_Word STATE_VARIABLE_Db_29_29;
                MR_Word STATE_VARIABLE_Db_31_31;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Integer Var_82;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Word Var_97;
                MR_Integer Var_93;

                *ConstNum_6 = NextConstNum_18;
                Var_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
                Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
                Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
                Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
                NumMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
                Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, *ConstNum_6, ((MR_Box) (ConstStruct_5)), NumMap0_22, &NumMap_23);
                Var_28 = (NextConstNum_18 + (MR_Integer) 1);
                Var_91 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
                Var_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
                Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
                Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
                Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
                Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
                {
                  STATE_VARIABLE_Db_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 0) = ((MR_Box) ((Var_91 | ((Var_92 << (MR_Integer) 1)))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 1) = ((MR_Box) (Var_28));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 2) = ((MR_Box) (Var_94));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 3) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 4) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_29_29, 5) = ((MR_Box) (Var_97));
                }
                hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(ConsMap_21, STATE_VARIABLE_Db_29_29, &STATE_VARIABLE_Db_31_31);
                hlds__const_struct__const_struct_db_set_num_map_3_p_0(NumMap_23, STATE_VARIABLE_Db_31_31, STATE_VARIABLE_Db_27);
              }
              else
              {
                *ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeOldConstNum_20, (MR_Integer) 0)));
                *STATE_VARIABLE_Db_27 = STATE_VARIABLE_Db_0_26;
              }
            }
          }
          else
          {
            MR_Word TypeCtorInfo_52_52;
            MR_Word OtherMap0_24;
            MR_Word OtherMap_25;
            MR_Integer NextConstNum_45;
            MR_Word MaybeOldConstNum_46;

            hlds__const_struct__const_struct_db_get_next_num_2_p_0(STATE_VARIABLE_Db_0_26, &NextConstNum_45);
            hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(STATE_VARIABLE_Db_0_26, &OtherMap0_24);
            TypeCtorInfo_52_52 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
            mercury__map__search_insert_5_p_0(TypeCtorInfo_52_52, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ConstStruct_5)), ((MR_Box) (NextConstNum_45)), &MaybeOldConstNum_46, OtherMap0_24, &OtherMap_25);
            if ((MaybeOldConstNum_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer Var_33;
              MR_Word STATE_VARIABLE_Db_34_34;
              MR_Word STATE_VARIABLE_Db_36_36;
              MR_Word NumMap0_41;
              MR_Word NumMap_42;

              *ConstNum_6 = NextConstNum_45;
              hlds__const_struct__const_struct_db_get_num_map_2_p_0(STATE_VARIABLE_Db_0_26, &NumMap0_41);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_52_52, *ConstNum_6, ((MR_Box) (ConstStruct_5)), NumMap0_41, &NumMap_42);
              Var_33 = (NextConstNum_45 + (MR_Integer) 1);
              hlds__const_struct__const_struct_db_set_next_num_3_p_0(Var_33, STATE_VARIABLE_Db_0_26, &STATE_VARIABLE_Db_34_34);
              hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(OtherMap_25, STATE_VARIABLE_Db_34_34, &STATE_VARIABLE_Db_36_36);
              hlds__const_struct__const_struct_db_set_num_map_3_p_0(NumMap_42, STATE_VARIABLE_Db_36_36, STATE_VARIABLE_Db_27);
            }
            else
            {
              *ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeOldConstNum_46, (MR_Integer) 0)));
              *STATE_VARIABLE_Db_27 = STATE_VARIABLE_Db_0_26;
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word NumMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  {
    MR_Word Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((Var_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NumMap_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
  MR_Word OtherMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  {
    MR_Word Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((Var_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OtherMap_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
  MR_Word ConsMap_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  {
    MR_Word Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((Var_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsMap_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer Num_4,
  MR_Word STATE_VARIABLE_Db_0_6,
  MR_Word * STATE_VARIABLE_Db_7)
{
  {
    MR_Word Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_9 | ((Var_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Num_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    MR_Word Var_10;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    MR_Word Var_9;
    MR_Word Var_10;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
  MR_Word Db_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    *X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Integer Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(
  MR_Word Db_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5;
    MR_Integer Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    *X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    Var_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 1)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 2)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 3)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 4)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_init_2_p_0(
  MR_Word Globals_3,
  MR_Word * Db_4)
{
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeCtorInfo_19_19;
    MR_Word Target_5;
    MR_Word PolyEnabled_8;
    MR_Word GroundTermEnabled_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelData_6;

          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 265, &HighLevelData_6);
          switch (HighLevelData_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Tags_7;

                libs__globals__get_tags_method_2_p_0(Globals_3, &Tags_7);
                switch (Tags_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 0:
                    {
                      PolyEnabled_8 = (MR_Integer) 0;
                      GroundTermEnabled_9 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word TraceLevel_25;
                      MR_Word TraceSuppress_26;
                      MR_Word Bodies_27;

                      libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 353, &PolyEnabled_8);
                      libs__globals__get_trace_level_2_p_0(Globals_3, &TraceLevel_25);
                      libs__globals__get_trace_suppress_2_p_0(Globals_3, &TraceSuppress_26);
                      Bodies_27 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(TraceLevel_25, TraceSuppress_26);
                      switch (Bodies_27) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          GroundTermEnabled_9 = PolyEnabled_8;
                          break;
                        case (MR_Integer) 1:
                          GroundTermEnabled_9 = (MR_Integer) 0;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                PolyEnabled_8 = (MR_Integer) 0;
                GroundTermEnabled_9 = (MR_Integer) 0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          PolyEnabled_8 = (MR_Integer) 0;
          GroundTermEnabled_9 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TraceLevel_33;
          MR_Word TraceSuppress_34;
          MR_Word Bodies_35;

          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 353, &PolyEnabled_8);
          libs__globals__get_trace_level_2_p_0(Globals_3, &TraceLevel_33);
          libs__globals__get_trace_suppress_2_p_0(Globals_3, &TraceSuppress_34);
          Bodies_35 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(TraceLevel_33, TraceSuppress_34);
          GroundTermEnabled_9 = (MR_Integer) 0;
        }
        break;
    }
    TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_13 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, TypeCtorInfo_18_18);
    TypeCtorInfo_19_19 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
    Var_14 = mercury__map__init_0_f_0(TypeCtorInfo_19_19, TypeCtorInfo_18_18);
    Var_15 = mercury__map__init_0_f_0(TypeCtorInfo_18_18, TypeCtorInfo_19_19);
    Var_16 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, TypeCtorInfo_18_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Db_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((PolyEnabled_8 | ((GroundTermEnabled_9 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
    }
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____cons_proxy_struct_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____cons_proxy_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____const_instance_id_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____const_instance_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____const_instance_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____const_instance_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____const_struct_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____const_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____const_struct_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__const_struct____Unify____const_struct_db_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__const_struct____Compare____const_struct_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__const_struct__init(void)
{
}

void mercury__hlds__const_struct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_map_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
	MR_register_type_ctor_info(&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0);
}

void mercury__hlds__const_struct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__const_struct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.const_struct.
