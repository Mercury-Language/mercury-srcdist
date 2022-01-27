/*
** Automatically generated from `const_struct.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module hlds.const_struct. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
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

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2);

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3);

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word hlds__const_struct__NumMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
  MR_Word hlds__const_struct__OtherMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
  MR_Word hlds__const_struct__ConsMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer hlds__const_struct__Num_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2);

static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Integer * hlds__const_struct__HeadVar__2_2);


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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_cons_proxy_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_cons_proxy_struct_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_cons_proxy_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_cons_proxy_struct_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_cons_proxy_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_instance_id_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_instance_id_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_instance_id_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_instance_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_arg_0_1 = {
  (MR_String) "csa_constant",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_arg_0_1,
  NULL,
  NULL,
  NULL
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
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_arg_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__const_struct__hlds__const_struct__field_types_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_names_const_struct_db_0_0,
  hlds__const_struct__hlds__const_struct__field_locns_const_struct_db_0_0,
  NULL
};

static const MR_DuFunctorDescPtr hlds__const_struct__hlds__const_struct__du_stag_ordered_const_struct_db_0_0[1] = {
  &hlds__const_struct__hlds__const_struct__du_functor_desc_const_struct_db_0_0
};

static const MR_DuPtagLayout hlds__const_struct__hlds__const_struct__du_ptag_ordered_const_struct_db_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____cons_proxy_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____cons_proxy_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_id_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____const_instance_id_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_instance_map_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____const_instance_map_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____const_struct_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____const_struct_arg_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_db_0_0_10001(
  MR_Box hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2)
{
  {
    MR_bool hlds__const_struct__succeeded;

    {
      hlds__const_struct__succeeded = hlds__const_struct____Unify____const_struct_db_0_0(((MR_Word) hlds__const_struct__wrapper_arg_1), ((MR_Word) hlds__const_struct__wrapper_arg_2));
    }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0_10001(
  MR_Box * hlds__const_struct__wrapper_arg_1,
  MR_Box hlds__const_struct__wrapper_arg_2,
  MR_Box hlds__const_struct__wrapper_arg_3)
{
  {
    MR_Word hlds__const_struct__conv0_HeadVar__1_1;

    {
      hlds__const_struct____Compare____const_struct_db_0_0(&hlds__const_struct__conv0_HeadVar__1_1, ((MR_Word) hlds__const_struct__wrapper_arg_2), ((MR_Word) hlds__const_struct__wrapper_arg_3));
    }
    *hlds__const_struct__wrapper_arg_1 = ((MR_Box) (hlds__const_struct__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_db_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_24 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
    MR_Integer hlds__const_struct__CastY_25 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_24 == hlds__const_struct__CastY_25);
    if (hlds__const_struct__succeeded)
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__const_struct__V_18_18;
        MR_Integer hlds__const_struct__V_33_33 = (MR_Integer) hlds__const_struct__V_4_4;
        MR_Integer hlds__const_struct__V_34_34 = (MR_Integer) hlds__const_struct__V_11_11;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_18_18, hlds__const_struct__V_33_33, hlds__const_struct__V_34_34);
        }
        hlds__const_struct__succeeded = (hlds__const_struct__V_18_18 == (MR_Integer) 0);
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
        if (hlds__const_struct__succeeded)
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_18_18;
        else
          {
            MR_Word hlds__const_struct__V_19_19;
            MR_Integer hlds__const_struct__V_35_35 = (MR_Integer) hlds__const_struct__V_5_5;
            MR_Integer hlds__const_struct__V_36_36 = (MR_Integer) hlds__const_struct__V_12_12;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_19_19, hlds__const_struct__V_35_35, hlds__const_struct__V_36_36);
            }
            hlds__const_struct__succeeded = (hlds__const_struct__V_19_19 == (MR_Integer) 0);
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
            if (hlds__const_struct__succeeded)
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_19_19;
            else
              {
                MR_Word hlds__const_struct__V_20_20;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_20_20, hlds__const_struct__V_6_6, hlds__const_struct__V_13_13);
                }
                hlds__const_struct__succeeded = (hlds__const_struct__V_20_20 == (MR_Integer) 0);
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                if (hlds__const_struct__succeeded)
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_20_20;
                else
                  {
                    MR_Word hlds__const_struct__V_21_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[1], &hlds__const_struct__V_21_21, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                    }
                    hlds__const_struct__succeeded = (hlds__const_struct__V_21_21 == (MR_Integer) 0);
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                    if (hlds__const_struct__succeeded)
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_21_21;
                    else
                      {
                        MR_Word hlds__const_struct__V_22_22;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[2], &hlds__const_struct__V_22_22, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                        }
                        hlds__const_struct__succeeded = (hlds__const_struct__V_22_22 == (MR_Integer) 0);
                        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                        if (hlds__const_struct__succeeded)
                          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_22_22;
                        else
                          {
                            MR_Word hlds__const_struct__V_23_23;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[3], &hlds__const_struct__V_23_23, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                            }
                            hlds__const_struct__succeeded = (hlds__const_struct__V_23_23 == (MR_Integer) 0);
                            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                            if (hlds__const_struct__succeeded)
                              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_23_23;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__V_10_10)), ((MR_Box) (hlds__const_struct__V_17_17)));
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
hlds__const_struct____Unify____const_struct_db_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_17 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
    MR_Integer hlds__const_struct__CastY_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_17 == hlds__const_struct__CastY_18);
    if (hlds__const_struct__succeeded)
      hlds__const_struct__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__const_struct__TypeInfo_19_19;
        MR_Word hlds__const_struct__TypeInfo_20_20;
        MR_Word hlds__const_struct__TypeInfo_21_21;
        MR_Word hlds__const_struct__TypeInfo_22_22;
        MR_Word hlds__const_struct__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__const_struct__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__const_struct__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__const_struct__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 5)));

        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_10_10);
        if (hlds__const_struct__succeeded)
          {
            hlds__const_struct__succeeded = (hlds__const_struct__V_4_4 == hlds__const_struct__V_11_11);
            if (hlds__const_struct__succeeded)
              {
                hlds__const_struct__succeeded = (hlds__const_struct__V_5_5 == hlds__const_struct__V_12_12);
                if (hlds__const_struct__succeeded)
                  {
                    hlds__const_struct__TypeInfo_19_19 = (MR_Word) &hlds__const_struct_scalar_common_2[1];
                    {
                      hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_19_19, ((MR_Box) (hlds__const_struct__V_6_6)), ((MR_Box) (hlds__const_struct__V_13_13)));
                    }
                    if (hlds__const_struct__succeeded)
                      {
                        hlds__const_struct__TypeInfo_20_20 = (MR_Word) &hlds__const_struct_scalar_common_2[2];
                        {
                          hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_20_20, ((MR_Box) (hlds__const_struct__V_7_7)), ((MR_Box) (hlds__const_struct__V_14_14)));
                        }
                        if (hlds__const_struct__succeeded)
                          {
                            hlds__const_struct__TypeInfo_21_21 = (MR_Word) &hlds__const_struct_scalar_common_2[3];
                            {
                              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_21_21, ((MR_Box) (hlds__const_struct__V_8_8)), ((MR_Box) (hlds__const_struct__V_15_15)));
                            }
                            if (hlds__const_struct__succeeded)
                              {
                                hlds__const_struct__TypeInfo_22_22 = (MR_Word) &hlds__const_struct_scalar_common_2[0];
                                {
                                  hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_22_22, ((MR_Box) (hlds__const_struct__V_9_9)), ((MR_Box) (hlds__const_struct__V_16_16)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__const_struct__succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_arg_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_17 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
    MR_Integer hlds__const_struct__CastY_18 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_17 == hlds__const_struct__CastY_18);
    if (hlds__const_struct__succeeded)
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer hlds__const_struct__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_22_22, hlds__const_struct__V_5_5);
            }
          }
        else
          *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word hlds__const_struct__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__const_struct__V_16_16;

            {
              parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_16_16, hlds__const_struct__V_24_24, hlds__const_struct__V_14_14);
            }
            hlds__const_struct__succeeded = (hlds__const_struct__V_16_16 == (MR_Integer) 0);
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
            if (hlds__const_struct__succeeded)
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_16_16;
            else
              {
                parse_tree__prog_data____Compare____mer_type_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_23_23, hlds__const_struct__V_15_15);
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_arg_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_9 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
    MR_Integer hlds__const_struct__CastY_10 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_9 == hlds__const_struct__CastY_10);
    if (hlds__const_struct__succeeded)
      hlds__const_struct__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__const_struct__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer hlds__const_struct__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__const_struct__V_4_4;

        hlds__const_struct__succeeded = ((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__const_struct__succeeded)
          {
            hlds__const_struct__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
            hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_4_4);
          }
      }
    else
      {
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_7_7;
        MR_Word hlds__const_struct__V_8_8;

        hlds__const_struct__succeeded = ((MR_tag((MR_Word) hlds__const_struct__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__const_struct__succeeded)
          {
            hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
            hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
            {
              hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_7_7);
            }
            if (hlds__const_struct__succeeded)
              {
                hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_8_8);
              }
          }
      }
    return hlds__const_struct__succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_struct_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_15 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
    MR_Integer hlds__const_struct__CastY_16 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_15 == hlds__const_struct__CastY_16);
    if (hlds__const_struct__succeeded)
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_12_12;

        {
          parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_12_12, hlds__const_struct__V_4_4, hlds__const_struct__V_8_8);
        }
        hlds__const_struct__succeeded = (hlds__const_struct__V_12_12 == (MR_Integer) 0);
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
        if (hlds__const_struct__succeeded)
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_12_12;
        else
          {
            MR_Word hlds__const_struct__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &hlds__const_struct__V_13_13, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_9_9)));
            }
            hlds__const_struct__succeeded = (hlds__const_struct__V_13_13 == (MR_Integer) 0);
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
            if (hlds__const_struct__succeeded)
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_13_13;
            else
              {
                MR_Word hlds__const_struct__V_14_14;

                {
                  parse_tree__prog_data____Compare____mer_type_0_0(&hlds__const_struct__V_14_14, hlds__const_struct__V_6_6, hlds__const_struct__V_10_10);
                }
                hlds__const_struct__succeeded = (hlds__const_struct__V_14_14 == (MR_Integer) 0);
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                if (hlds__const_struct__succeeded)
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_14_14;
                else
                  {
                    parse_tree__prog_data____Compare____mer_inst_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_7_7, hlds__const_struct__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_struct_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_11 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
    MR_Integer hlds__const_struct__CastY_12 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_11 == hlds__const_struct__CastY_12);
    if (hlds__const_struct__succeeded)
      hlds__const_struct__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__const_struct__TypeInfo_14_14;
        MR_Word hlds__const_struct__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));

        {
          hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_3_3, hlds__const_struct__V_7_7);
        }
        if (hlds__const_struct__succeeded)
          {
            hlds__const_struct__TypeInfo_14_14 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
            {
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_14_14, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_8_8)));
            }
            if (hlds__const_struct__succeeded)
              {
                {
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_9_9);
                }
                if (hlds__const_struct__succeeded)
                  {
                    hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_10_10);
                  }
              }
          }
      }
    return hlds__const_struct__succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_map_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__Cast_HeadVar1_4 = hlds__const_struct__HeadVar__2_2;
    MR_Word hlds__const_struct__Cast_HeadVar2_5 = hlds__const_struct__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__Cast_HeadVar1_4)), ((MR_Box) (hlds__const_struct__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_map_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__Cast_HeadVar1_3 = hlds__const_struct__HeadVar__1_1;
    MR_Word hlds__const_struct__Cast_HeadVar2_4 = hlds__const_struct__HeadVar__2_2;

    {
      hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__const_struct_scalar_common_2[0], ((MR_Box) (hlds__const_struct__Cast_HeadVar1_3)), ((MR_Box) (hlds__const_struct__Cast_HeadVar2_4)));
    }
    return hlds__const_struct__succeeded;
  }
}

void MR_CALL 
hlds__const_struct____Compare____const_instance_id_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_12 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
    MR_Integer hlds__const_struct__CastY_13 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_12 == hlds__const_struct__CastY_13);
    if (hlds__const_struct__succeeded)
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer hlds__const_struct__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer hlds__const_struct__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__const_struct__V_10_10, hlds__const_struct__V_4_4, hlds__const_struct__V_7_7);
        }
        hlds__const_struct__succeeded = (hlds__const_struct__V_10_10 == (MR_Integer) 0);
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
        if (hlds__const_struct__succeeded)
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_10_10;
        else
          {
            MR_Word hlds__const_struct__V_11_11;

            {
              parse_tree__prog_data____Compare____prog_constraint_0_0(&hlds__const_struct__V_11_11, hlds__const_struct__V_5_5, hlds__const_struct__V_8_8);
            }
            hlds__const_struct__succeeded = (hlds__const_struct__V_11_11 == (MR_Integer) 0);
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
            if (hlds__const_struct__succeeded)
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[1], hlds__const_struct__HeadVar__1_1, ((MR_Box) (hlds__const_struct__V_6_6)), ((MR_Box) (hlds__const_struct__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__const_struct____Unify____const_instance_id_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_9 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
    MR_Integer hlds__const_struct__CastY_10 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_9 == hlds__const_struct__CastY_10);
    if (hlds__const_struct__succeeded)
      hlds__const_struct__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__const_struct__TypeInfo_12_12;
        MR_Integer hlds__const_struct__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));

        hlds__const_struct__succeeded = (hlds__const_struct__V_3_3 == hlds__const_struct__V_6_6);
        if (hlds__const_struct__succeeded)
          {
            {
              hlds__const_struct__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__const_struct__V_4_4, hlds__const_struct__V_7_7);
            }
            if (hlds__const_struct__succeeded)
              {
                hlds__const_struct__TypeInfo_12_12 = (MR_Word) &hlds__const_struct_scalar_common_1[1];
                {
                  hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_12_12, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_8_8)));
                }
              }
          }
      }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct____Compare____cons_proxy_struct_0_0(
  MR_Word * hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2,
  MR_Word hlds__const_struct__HeadVar__3_3)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_18 = (MR_Integer) hlds__const_struct__HeadVar__2_2;
    MR_Integer hlds__const_struct__CastY_19 = (MR_Integer) hlds__const_struct__HeadVar__3_3;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_18 == hlds__const_struct__CastY_19);
    if (hlds__const_struct__succeeded)
      *hlds__const_struct__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String hlds__const_struct__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));
        MR_String hlds__const_struct__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_14_14;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__const_struct__V_14_14, hlds__const_struct__V_4_4, hlds__const_struct__V_9_9);
        }
        hlds__const_struct__succeeded = (hlds__const_struct__V_14_14 == (MR_Integer) 0);
        hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
        if (hlds__const_struct__succeeded)
          *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_14_14;
        else
          {
            MR_Word hlds__const_struct__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__const_struct_scalar_common_1[0], &hlds__const_struct__V_15_15, ((MR_Box) (hlds__const_struct__V_5_5)), ((MR_Box) (hlds__const_struct__V_10_10)));
            }
            hlds__const_struct__succeeded = (hlds__const_struct__V_15_15 == (MR_Integer) 0);
            hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
            if (hlds__const_struct__succeeded)
              *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_15_15;
            else
              {
                MR_Word hlds__const_struct__V_16_16;

                {
                  parse_tree__prog_data____Compare____cons_id_0_0(&hlds__const_struct__V_16_16, hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                }
                hlds__const_struct__succeeded = (hlds__const_struct__V_16_16 == (MR_Integer) 0);
                hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                if (hlds__const_struct__succeeded)
                  *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_16_16;
                else
                  {
                    MR_Word hlds__const_struct__V_17_17;

                    {
                      parse_tree__prog_data____Compare____mer_type_0_0(&hlds__const_struct__V_17_17, hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                    }
                    hlds__const_struct__succeeded = (hlds__const_struct__V_17_17 == (MR_Integer) 0);
                    hlds__const_struct__succeeded = !(hlds__const_struct__succeeded);
                    if (hlds__const_struct__succeeded)
                      *hlds__const_struct__HeadVar__1_1 = hlds__const_struct__V_17_17;
                    else
                      {
                        parse_tree__prog_data____Compare____mer_inst_0_0(hlds__const_struct__HeadVar__1_1, hlds__const_struct__V_8_8, hlds__const_struct__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__const_struct____Unify____cons_proxy_struct_0_0(
  MR_Word hlds__const_struct__HeadVar__1_1,
  MR_Word hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Integer hlds__const_struct__CastX_13 = (MR_Integer) hlds__const_struct__HeadVar__1_1;
    MR_Integer hlds__const_struct__CastY_14 = (MR_Integer) hlds__const_struct__HeadVar__2_2;

    hlds__const_struct__succeeded = (hlds__const_struct__CastX_13 == hlds__const_struct__CastY_14);
    if (hlds__const_struct__succeeded)
      hlds__const_struct__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__const_struct__TypeInfo_15_15;
        MR_String hlds__const_struct__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__1_1, (MR_Integer) 4)));
        MR_String hlds__const_struct__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__HeadVar__2_2, (MR_Integer) 4)));

        hlds__const_struct__succeeded = (strcmp(hlds__const_struct__V_3_3, hlds__const_struct__V_8_8) == 0);
        if (hlds__const_struct__succeeded)
          {
            hlds__const_struct__TypeInfo_15_15 = (MR_Word) &hlds__const_struct_scalar_common_1[0];
            {
              hlds__const_struct__succeeded = mercury__builtin__unify_2_p_0(hlds__const_struct__TypeInfo_15_15, ((MR_Box) (hlds__const_struct__V_4_4)), ((MR_Box) (hlds__const_struct__V_9_9)));
            }
            if (hlds__const_struct__succeeded)
              {
                {
                  hlds__const_struct__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__const_struct__V_5_5, hlds__const_struct__V_10_10);
                }
                if (hlds__const_struct__succeeded)
                  {
                    {
                      hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__const_struct__V_6_6, hlds__const_struct__V_11_11);
                    }
                    if (hlds__const_struct__succeeded)
                      {
                        hlds__const_struct__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__const_struct__V_7_7, hlds__const_struct__V_12_12);
                      }
                  }
              }
          }
      }
    return hlds__const_struct__succeeded;
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_num_map_3_p_0(
  MR_Word hlds__const_struct__NumMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__NumMap_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(
  MR_Word hlds__const_struct__OtherMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(
  MR_Word hlds__const_struct__ConsMap_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_set_next_num_3_p_0(
  MR_Integer hlds__const_struct__Num_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_6,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_7)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 5)));
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__STATE_VARIABLE_Db_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_9_9 | ((hlds__const_struct__V_10_10 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__Num_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_15_15));
    }
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_num_map_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_9_9;

    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_8_8;
    MR_Word hlds__const_struct__V_9_9;

    *hlds__const_struct__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
  }
}

static void MR_CALL 
hlds__const_struct__const_struct_db_get_next_num_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Integer * hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_6_6;
    MR_Word hlds__const_struct__V_7_7;
    MR_Word hlds__const_struct__V_8_8;
    MR_Word hlds__const_struct__V_9_9;

    *hlds__const_struct__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_structs_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__Structs_4)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__NumMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_5, hlds__const_struct__Structs_4);
    }
  }
}

void MR_CALL 
hlds__const_struct__delete_const_struct_3_p_0(
  MR_Integer hlds__const_struct__ConstNum_4,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_23,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_24)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word hlds__const_struct__TypeCtorInfo_31_31 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
    MR_Word hlds__const_struct__NumMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
    MR_Word hlds__const_struct__ConstStruct_7;
    MR_Word hlds__const_struct__NumMap_8;
    MR_Word hlds__const_struct__ConsId_9;
    MR_Word hlds__const_struct__Args_10;
    MR_Word hlds__const_struct__Type_11;
    MR_Word hlds__const_struct__Inst_12;
    MR_Word hlds__const_struct__STATE_VARIABLE_Db_25_25;
    MR_Word hlds__const_struct__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
    MR_Box hlds__const_struct__conv0_ConstStruct_7;
    MR_Word hlds__const_struct__V_45_45;
    MR_Word hlds__const_struct__V_46_46;
    MR_Integer hlds__const_struct__V_47_47;
    MR_Word hlds__const_struct__V_48_48;
    MR_Word hlds__const_struct__V_49_49;
    MR_Word hlds__const_struct__V_51_51;
    MR_Word hlds__const_struct__V_50_50;
    MR_Word hlds__const_struct__SymName_13;
    MR_Integer hlds__const_struct__V_14_14;
    MR_Word hlds__const_struct__V_15_15;

    {
      mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_30_30, hlds__const_struct__TypeCtorInfo_31_31, ((MR_Box) (hlds__const_struct__ConstNum_4)), &hlds__const_struct__conv0_ConstStruct_7, hlds__const_struct__NumMap0_6, &hlds__const_struct__NumMap_8);
    }
    hlds__const_struct__ConstStruct_7 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_7);
    hlds__const_struct__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) & (MR_Integer) 1);
    hlds__const_struct__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__const_struct__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 1)));
    hlds__const_struct__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 2)));
    hlds__const_struct__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 3)));
    hlds__const_struct__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 4)));
    hlds__const_struct__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_23, (MR_Integer) 5)));
    {
      hlds__const_struct__STATE_VARIABLE_Db_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 0) = ((MR_Box) ((hlds__const_struct__V_45_45 | ((hlds__const_struct__V_46_46 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 1) = ((MR_Box) (hlds__const_struct__V_47_47));
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 2) = ((MR_Box) (hlds__const_struct__V_48_48));
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 3) = ((MR_Box) (hlds__const_struct__V_49_49));
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 4) = ((MR_Box) (hlds__const_struct__NumMap_8));
      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, 5) = ((MR_Box) (hlds__const_struct__V_51_51));
    }
    hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 0)));
    hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 1)));
    hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 2)));
    hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_7, (MR_Integer) 3)));
    hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__const_struct__succeeded)
      {
        hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
        hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
        hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
        {
          MR_String hlds__const_struct__Name_16;
          MR_Word hlds__const_struct__ConsProxyStruct_17;
          MR_Word hlds__const_struct__ConsMap0_18;
          MR_Word hlds__const_struct__ConsMap_20;
          MR_Word hlds__const_struct__V_53_53;
          MR_Word hlds__const_struct__V_54_54;
          MR_Integer hlds__const_struct__V_55_55;
          MR_Word hlds__const_struct__V_56_56;
          MR_Word hlds__const_struct__V_57_57;
          MR_Word hlds__const_struct__V_58_58;
          MR_Integer hlds__const_struct___ConstNum_19;
          MR_Box hlds__const_struct__conv1__ConstNum_19;
          MR_Word hlds__const_struct__V_64_64;
          MR_Word hlds__const_struct__V_65_65;
          MR_Integer hlds__const_struct__V_66_66;
          MR_Word hlds__const_struct__V_68_68;
          MR_Word hlds__const_struct__V_69_69;
          MR_Word hlds__const_struct__V_70_70;
          MR_Word hlds__const_struct__V_67_67;

          {
            hlds__const_struct__Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
          }
          {
            hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
            MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
          }
          hlds__const_struct__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
          hlds__const_struct__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          hlds__const_struct__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
          hlds__const_struct__ConsMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
          hlds__const_struct__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
          hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
          hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
          {
            mercury__map__det_remove_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), &hlds__const_struct__conv1__ConstNum_19, hlds__const_struct__ConsMap0_18, &hlds__const_struct__ConsMap_20);
          }
          hlds__const_struct___ConstNum_19 = ((MR_Integer) hlds__const_struct__conv1__ConstNum_19);
          hlds__const_struct__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
          hlds__const_struct__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          hlds__const_struct__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
          hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
          hlds__const_struct__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
          hlds__const_struct__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
          hlds__const_struct__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_64_64 | ((hlds__const_struct__V_65_65 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_66_66));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__ConsMap_20));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_68_68));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_69_69));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_70_70));
          }
        }
      }
    else
      {
        MR_Word hlds__const_struct__OtherMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
        MR_Word hlds__const_struct__OtherMap_22;
        MR_Word hlds__const_struct__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word hlds__const_struct__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer hlds__const_struct__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
        MR_Word hlds__const_struct__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
        MR_Word hlds__const_struct__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
        MR_Word hlds__const_struct__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
        MR_Integer hlds__const_struct___ConstNum_28;
        MR_Box hlds__const_struct__conv2__ConstNum_28;
        MR_Word hlds__const_struct__V_83_83;
        MR_Word hlds__const_struct__V_84_84;
        MR_Integer hlds__const_struct__V_85_85;
        MR_Word hlds__const_struct__V_86_86;
        MR_Word hlds__const_struct__V_88_88;
        MR_Word hlds__const_struct__V_89_89;
        MR_Word hlds__const_struct__V_87_87;

        {
          mercury__map__det_remove_4_p_0(hlds__const_struct__TypeCtorInfo_31_31, hlds__const_struct__TypeCtorInfo_30_30, ((MR_Box) (hlds__const_struct__ConstStruct_7)), &hlds__const_struct__conv2__ConstNum_28, hlds__const_struct__OtherMap0_21, &hlds__const_struct__OtherMap_22);
        }
        hlds__const_struct___ConstNum_28 = ((MR_Integer) hlds__const_struct__conv2__ConstNum_28);
        hlds__const_struct__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) & (MR_Integer) 1);
        hlds__const_struct__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        hlds__const_struct__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 1)));
        hlds__const_struct__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 2)));
        hlds__const_struct__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 3)));
        hlds__const_struct__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 4)));
        hlds__const_struct__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_25_25, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *hlds__const_struct__STATE_VARIABLE_Db_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_83_83 | ((hlds__const_struct__V_84_84 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_85_85));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_86_86));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__OtherMap_22));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_88_88));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_89_89));
        }
      }
  }
}

void MR_CALL 
hlds__const_struct__insert_constant_instance_4_p_0(
  MR_Word hlds__const_struct__InstanceId_5,
  MR_Integer hlds__const_struct__ConstNum_6,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_10,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_11)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__InstanceMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
    MR_Word hlds__const_struct__InstanceMap_9;
    MR_Word hlds__const_struct__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_27_27;
    MR_Word hlds__const_struct__V_28_28;
    MR_Integer hlds__const_struct__V_29_29;
    MR_Word hlds__const_struct__V_30_30;
    MR_Word hlds__const_struct__V_31_31;
    MR_Word hlds__const_struct__V_32_32;
    MR_Word hlds__const_struct__V_33_33;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__InstanceId_5)), ((MR_Box) (hlds__const_struct__ConstNum_6)), hlds__const_struct__InstanceMap0_8, &hlds__const_struct__InstanceMap_9);
    }
    hlds__const_struct__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    hlds__const_struct__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__const_struct__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 1)));
    hlds__const_struct__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 2)));
    hlds__const_struct__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 3)));
    hlds__const_struct__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 4)));
    hlds__const_struct__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_10, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__STATE_VARIABLE_Db_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__V_27_27 | ((hlds__const_struct__V_28_28 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__const_struct__V_29_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_30_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_31_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_32_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__InstanceMap_9));
    }
  }
}

MR_bool MR_CALL 
hlds__const_struct__search_for_constant_instance_3_p_0(
  MR_Word hlds__const_struct__Db_4,
  MR_Word hlds__const_struct__InstanceId_5,
  MR_Integer * hlds__const_struct__ConstNum_6)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__InstanceMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
    MR_Box hlds__const_struct__conv0_ConstNum_6;

    {
      hlds__const_struct__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__const_struct__InstanceMap_7, ((MR_Box) (hlds__const_struct__InstanceId_5)), &hlds__const_struct__conv0_ConstNum_6);
    }
    if (hlds__const_struct__succeeded)
      {
        *hlds__const_struct__ConstNum_6 = ((MR_Integer) hlds__const_struct__conv0_ConstNum_6);
        hlds__const_struct__succeeded = MR_TRUE;
      }
    return hlds__const_struct__succeeded;
  }
}

void MR_CALL 
hlds__const_struct__lookup_const_struct_num_3_p_0(
  MR_Word hlds__const_struct__Db_4,
  MR_Integer hlds__const_struct__ConstNum_5,
  MR_Word * hlds__const_struct__ConstStruct_6)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__NumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_4, (MR_Integer) 5)));
    MR_Box hlds__const_struct__conv0_ConstStruct_6;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, hlds__const_struct__NumMap_7, hlds__const_struct__ConstNum_5, &hlds__const_struct__conv0_ConstStruct_6);
    }
    *hlds__const_struct__ConstStruct_6 = ((MR_Word) hlds__const_struct__conv0_ConstStruct_6);
  }
}

void MR_CALL 
hlds__const_struct__lookup_insert_const_struct_4_p_0(
  MR_Word hlds__const_struct__ConstStruct_5,
  MR_Integer * hlds__const_struct__ConstNum_6,
  MR_Word hlds__const_struct__STATE_VARIABLE_Db_0_26,
  MR_Word * hlds__const_struct__STATE_VARIABLE_Db_27)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__Enabled_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word hlds__const_struct__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
    MR_Word hlds__const_struct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
    MR_Word hlds__const_struct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
    MR_Word hlds__const_struct__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
    MR_Word hlds__const_struct__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));

    switch (hlds__const_struct__Enabled_8) {
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
          MR_Word hlds__const_struct__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 0)));
          MR_Word hlds__const_struct__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 1)));
          MR_Word hlds__const_struct__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 2)));
          MR_Word hlds__const_struct__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__ConstStruct_5, (MR_Integer) 3)));
          MR_Word hlds__const_struct__SymName_13;
          MR_Integer hlds__const_struct__V_14_14;
          MR_Word hlds__const_struct__V_15_15;

          hlds__const_struct__succeeded = ((((MR_tag((MR_Word) hlds__const_struct__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__const_struct__succeeded)
            {
              hlds__const_struct__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 1)));
              hlds__const_struct__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 2)));
              hlds__const_struct__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__const_struct__ConsId_9, (MR_Integer) 3)));
              {
                MR_String hlds__const_struct__Name_16;
                MR_Word hlds__const_struct__ConsProxyStruct_17;
                MR_Integer hlds__const_struct__NextConstNum_18;
                MR_Word hlds__const_struct__ConsMap0_19;
                MR_Word hlds__const_struct__MaybeOldConstNum_20;
                MR_Word hlds__const_struct__ConsMap_21;
                MR_Word hlds__const_struct__V_62_62;
                MR_Word hlds__const_struct__V_63_63;
                MR_Word hlds__const_struct__V_65_65;
                MR_Word hlds__const_struct__V_66_66;
                MR_Word hlds__const_struct__V_67_67;

                {
                  hlds__const_struct__Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__const_struct__SymName_13);
                }
                {
                  hlds__const_struct__ConsProxyStruct_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 0) = ((MR_Box) (hlds__const_struct__Name_16));
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 1) = ((MR_Box) (hlds__const_struct__Args_10));
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 2) = ((MR_Box) (hlds__const_struct__ConsId_9));
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 3) = ((MR_Box) (hlds__const_struct__Type_11));
                  MR_hl_field(MR_mktag(0), hlds__const_struct__ConsProxyStruct_17, 4) = ((MR_Box) (hlds__const_struct__Inst_12));
                }
                hlds__const_struct__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
                hlds__const_struct__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                hlds__const_struct__NextConstNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
                hlds__const_struct__ConsMap0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
                hlds__const_struct__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
                hlds__const_struct__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
                hlds__const_struct__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
                {
                  mercury__map__search_insert_5_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConsProxyStruct_17)), ((MR_Box) (hlds__const_struct__NextConstNum_18)), &hlds__const_struct__MaybeOldConstNum_20, hlds__const_struct__ConsMap0_19, &hlds__const_struct__ConsMap_21);
                }
                if ((hlds__const_struct__MaybeOldConstNum_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word hlds__const_struct__NumMap0_22;
                    MR_Word hlds__const_struct__NumMap_23;
                    MR_Integer hlds__const_struct__V_28_28;
                    MR_Word hlds__const_struct__STATE_VARIABLE_Db_29_29;
                    MR_Word hlds__const_struct__STATE_VARIABLE_Db_31_31;
                    MR_Word hlds__const_struct__V_76_76;
                    MR_Word hlds__const_struct__V_77_77;
                    MR_Integer hlds__const_struct__V_78_78;
                    MR_Word hlds__const_struct__V_79_79;
                    MR_Word hlds__const_struct__V_80_80;
                    MR_Word hlds__const_struct__V_81_81;
                    MR_Word hlds__const_struct__V_87_87;
                    MR_Word hlds__const_struct__V_88_88;
                    MR_Word hlds__const_struct__V_90_90;
                    MR_Word hlds__const_struct__V_91_91;
                    MR_Word hlds__const_struct__V_92_92;
                    MR_Word hlds__const_struct__V_93_93;
                    MR_Integer hlds__const_struct__V_89_89;

                    *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_18;
                    hlds__const_struct__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
                    hlds__const_struct__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    hlds__const_struct__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
                    hlds__const_struct__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
                    hlds__const_struct__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
                    hlds__const_struct__NumMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
                    hlds__const_struct__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
                    {
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_22, &hlds__const_struct__NumMap_23);
                    }
                    hlds__const_struct__V_28_28 = (hlds__const_struct__NextConstNum_18 + (MR_Integer) 1);
                    hlds__const_struct__V_87_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) & (MR_Integer) 1);
                    hlds__const_struct__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    hlds__const_struct__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 1)));
                    hlds__const_struct__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 2)));
                    hlds__const_struct__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 3)));
                    hlds__const_struct__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 4)));
                    hlds__const_struct__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_0_26, (MR_Integer) 5)));
                    {
                      hlds__const_struct__STATE_VARIABLE_Db_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 0) = ((MR_Box) ((hlds__const_struct__V_87_87 | ((hlds__const_struct__V_88_88 << (MR_Integer) 1)))));
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 1) = ((MR_Box) (hlds__const_struct__V_28_28));
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 2) = ((MR_Box) (hlds__const_struct__V_90_90));
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 3) = ((MR_Box) (hlds__const_struct__V_91_91));
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 4) = ((MR_Box) (hlds__const_struct__V_92_92));
                      MR_hl_field(MR_mktag(0), hlds__const_struct__STATE_VARIABLE_Db_29_29, 5) = ((MR_Box) (hlds__const_struct__V_93_93));
                    }
                    {
                      hlds__const_struct__const_struct_db_set_cons_proxy_map_3_p_0(hlds__const_struct__ConsMap_21, hlds__const_struct__STATE_VARIABLE_Db_29_29, &hlds__const_struct__STATE_VARIABLE_Db_31_31);
                    }
                    {
                      hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_23, hlds__const_struct__STATE_VARIABLE_Db_31_31, hlds__const_struct__STATE_VARIABLE_Db_27);
                    }
                  }
                else
                  {
                    *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_20, (MR_Integer) 0)));
                    *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
                  }
              }
            }
          else
            {
              MR_Word hlds__const_struct__TypeCtorInfo_52_52;
              MR_Word hlds__const_struct__OtherMap0_24;
              MR_Word hlds__const_struct__OtherMap_25;
              MR_Integer hlds__const_struct__NextConstNum_45;
              MR_Word hlds__const_struct__MaybeOldConstNum_46;

              {
                hlds__const_struct__const_struct_db_get_next_num_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NextConstNum_45);
              }
              {
                hlds__const_struct__const_struct_db_get_other_struct_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__OtherMap0_24);
              }
              hlds__const_struct__TypeCtorInfo_52_52 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
              {
                mercury__map__search_insert_5_p_0(hlds__const_struct__TypeCtorInfo_52_52, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__const_struct__ConstStruct_5)), ((MR_Box) (hlds__const_struct__NextConstNum_45)), &hlds__const_struct__MaybeOldConstNum_46, hlds__const_struct__OtherMap0_24, &hlds__const_struct__OtherMap_25);
              }
              if ((hlds__const_struct__MaybeOldConstNum_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Integer hlds__const_struct__V_33_33;
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_34_34;
                  MR_Word hlds__const_struct__STATE_VARIABLE_Db_36_36;
                  MR_Word hlds__const_struct__NumMap0_41;
                  MR_Word hlds__const_struct__NumMap_42;

                  *hlds__const_struct__ConstNum_6 = hlds__const_struct__NextConstNum_45;
                  {
                    hlds__const_struct__const_struct_db_get_num_map_2_p_0(hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__NumMap0_41);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__const_struct__TypeCtorInfo_52_52, *hlds__const_struct__ConstNum_6, ((MR_Box) (hlds__const_struct__ConstStruct_5)), hlds__const_struct__NumMap0_41, &hlds__const_struct__NumMap_42);
                  }
                  hlds__const_struct__V_33_33 = (hlds__const_struct__NextConstNum_45 + (MR_Integer) 1);
                  {
                    hlds__const_struct__const_struct_db_set_next_num_3_p_0(hlds__const_struct__V_33_33, hlds__const_struct__STATE_VARIABLE_Db_0_26, &hlds__const_struct__STATE_VARIABLE_Db_34_34);
                  }
                  {
                    hlds__const_struct__const_struct_db_set_other_struct_map_3_p_0(hlds__const_struct__OtherMap_25, hlds__const_struct__STATE_VARIABLE_Db_34_34, &hlds__const_struct__STATE_VARIABLE_Db_36_36);
                  }
                  {
                    hlds__const_struct__const_struct_db_set_num_map_3_p_0(hlds__const_struct__NumMap_42, hlds__const_struct__STATE_VARIABLE_Db_36_36, hlds__const_struct__STATE_VARIABLE_Db_27);
                  }
                }
              else
                {
                  *hlds__const_struct__ConstNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__const_struct__MaybeOldConstNum_46, (MR_Integer) 0)));
                  *hlds__const_struct__STATE_VARIABLE_Db_27 = hlds__const_struct__STATE_VARIABLE_Db_0_26;
                }
            }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Integer hlds__const_struct__V_5_5;
    MR_Word hlds__const_struct__V_6_6;
    MR_Word hlds__const_struct__V_7_7;
    MR_Word hlds__const_struct__V_8_8;
    MR_Word hlds__const_struct__V_9_9;

    *hlds__const_struct__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(
  MR_Word hlds__const_struct__Db_3,
  MR_Word * hlds__const_struct__HeadVar__2_2)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__V_4_4;
    MR_Integer hlds__const_struct__V_5_5;
    MR_Word hlds__const_struct__V_6_6;
    MR_Word hlds__const_struct__V_7_7;
    MR_Word hlds__const_struct__V_8_8;
    MR_Word hlds__const_struct__V_9_9;

    *hlds__const_struct__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    hlds__const_struct__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__const_struct__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 1)));
    hlds__const_struct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 2)));
    hlds__const_struct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 3)));
    hlds__const_struct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 4)));
    hlds__const_struct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__const_struct__Db_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
hlds__const_struct__const_struct_db_init_2_p_0(
  MR_Word hlds__const_struct__Globals_3,
  MR_Word * hlds__const_struct__Db_4)
{
  {
    MR_bool hlds__const_struct__succeeded;
    MR_Word hlds__const_struct__TypeCtorInfo_18_18;
    MR_Word hlds__const_struct__TypeCtorInfo_19_19;
    MR_Word hlds__const_struct__Target_5;
    MR_Word hlds__const_struct__PolyEnabled_8;
    MR_Word hlds__const_struct__GroundTermEnabled_9;
    MR_Word hlds__const_struct__V_13_13;
    MR_Word hlds__const_struct__V_14_14;
    MR_Word hlds__const_struct__V_15_15;
    MR_Word hlds__const_struct__V_16_16;

    {
      libs__globals__get_target_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Target_5);
    }
    switch (hlds__const_struct__Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__const_struct__HighLevelData_6;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 255, &hlds__const_struct__HighLevelData_6);
          }
          switch (hlds__const_struct__HighLevelData_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__const_struct__Tags_7;

                {
                  libs__globals__get_tags_method_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__Tags_7);
                }
                switch (hlds__const_struct__Tags_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 0:
                    {
                      hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
                      hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__const_struct__TraceLevel_25;
                      MR_Word hlds__const_struct__TraceSuppress_26;
                      MR_Word hlds__const_struct__Bodies_27;

                      {
                        libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 341, &hlds__const_struct__PolyEnabled_8);
                      }
                      {
                        libs__globals__get_trace_level_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceLevel_25);
                      }
                      {
                        libs__globals__get_trace_suppress_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceSuppress_26);
                      }
                      {
                        hlds__const_struct__Bodies_27 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(hlds__const_struct__TraceLevel_25, hlds__const_struct__TraceSuppress_26);
                      }
                      switch (hlds__const_struct__Bodies_27) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          hlds__const_struct__GroundTermEnabled_9 = hlds__const_struct__PolyEnabled_8;
                          break;
                        case (MR_Integer) 1:
                          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
                hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          hlds__const_struct__PolyEnabled_8 = (MR_Integer) 0;
          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__const_struct__TraceLevel_33;
          MR_Word hlds__const_struct__TraceSuppress_34;
          MR_Word hlds__const_struct__Bodies_35;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__const_struct__Globals_3, (MR_Integer) 341, &hlds__const_struct__PolyEnabled_8);
          }
          {
            libs__globals__get_trace_level_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceLevel_33);
          }
          {
            libs__globals__get_trace_suppress_2_p_0(hlds__const_struct__Globals_3, &hlds__const_struct__TraceSuppress_34);
          }
          {
            hlds__const_struct__Bodies_35 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(hlds__const_struct__TraceLevel_33, hlds__const_struct__TraceSuppress_34);
          }
          hlds__const_struct__GroundTermEnabled_9 = (MR_Integer) 0;
        }
        break;
    }
    hlds__const_struct__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      hlds__const_struct__V_13_13 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_cons_proxy_struct_0, hlds__const_struct__TypeCtorInfo_18_18);
    }
    hlds__const_struct__TypeCtorInfo_19_19 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0;
    {
      hlds__const_struct__V_14_14 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_19_19, hlds__const_struct__TypeCtorInfo_18_18);
    }
    {
      hlds__const_struct__V_15_15 = mercury__map__init_0_f_0(hlds__const_struct__TypeCtorInfo_18_18, hlds__const_struct__TypeCtorInfo_19_19);
    }
    {
      hlds__const_struct__V_16_16 = mercury__map__init_0_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_instance_id_0, hlds__const_struct__TypeCtorInfo_18_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__const_struct__Db_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__const_struct__PolyEnabled_8 | ((hlds__const_struct__GroundTermEnabled_9 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__const_struct__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__const_struct__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__const_struct__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__const_struct__V_16_16));
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.const_struct. */
