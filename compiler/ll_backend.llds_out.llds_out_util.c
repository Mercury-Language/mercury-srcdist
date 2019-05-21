/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module ll_backend.llds_out.llds_out_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_util__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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




static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10];

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10];

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[22];

static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[22];

static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[22];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1];

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1];

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_2[4][3];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0 = {
  (MR_String) "decl_float_label",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1 = {
  (MR_String) "decl_common_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2 = {
  (MR_String) "decl_code_addr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3 = {
  (MR_String) "decl_rtti_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4 = {
  (MR_String) "decl_layout_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5 = {
  (MR_String) "decl_tabling_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6 = {
  (MR_String) "decl_foreign_proc_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7 = {
  (MR_String) "decl_c_global_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8 = {
  (MR_String) "decl_type_info_like_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9 = {
  (MR_String) "decl_typeclass_constraint_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[7] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2
  },
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[10] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[10] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_id",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[22] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0
};

static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[22] = {
  (MR_String) "lout_module_name",
  (MR_String) "lout_mangled_module_name",
  (MR_String) "lout_source_file_name",
  (MR_String) "lout_internal_label_to_layout",
  (MR_String) "lout_entry_label_to_layout",
  (MR_String) "lout_table_io_entry_map",
  (MR_String) "lout_alloc_site_map",
  (MR_String) "lout_auto_comments",
  (MR_String) "lout_foreign_line_numbers",
  (MR_String) "lout_emit_c_loops",
  (MR_String) "lout_generate_bytecode",
  (MR_String) "lout_local_thread_engine_base",
  (MR_String) "lout_profile_calls",
  (MR_String) "lout_profile_time",
  (MR_String) "lout_profile_memory",
  (MR_String) "lout_profile_deep",
  (MR_String) "lout_unboxed_float",
  (MR_String) "lout_det_stack_dword_alignment",
  (MR_String) "lout_static_ground_floats",
  (MR_String) "lout_use_macro_for_redo_fail",
  (MR_String) "lout_trace_level",
  (MR_String) "lout_globals"
};

static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[22] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 13,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0 = {
  (MR_String) "llds_out_info",
  (MR_Integer) 22,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "llds_out_info",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2));
    }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
  MR_Box * ll_backend__llds_out__llds_out_util__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_2,
  MR_Box ll_backend__llds_out__llds_out_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(&ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_util__wrapper_arg_3));
    }
    *ll_backend__llds_out__llds_out_util__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_util__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_69 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_70 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_69 == ll_backend__llds_out__llds_out_util__CastY_70);
    if (ll_backend__llds_out__llds_out_util__succeeded)
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__llds_out__llds_out_util__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_util__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_util__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_util__ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_String ll_backend__llds_out__llds_out_util__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX8_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY8_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY10_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY11_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY12_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY13_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY14_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY15_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX16_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY16_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY17_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY18_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX19_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY19_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX20_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY20_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX21_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY21_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX22_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY22_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__llds_out__llds_out_util__Var_48;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__llds_out__llds_out_util__Var_48, ll_backend__llds_out__llds_out_util__ArgX1_4, ll_backend__llds_out__llds_out_util__ArgY1_5);
        }
        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_48 == (MR_Integer) 0);
        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
        if (ll_backend__llds_out__llds_out_util__succeeded)
          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_48;
        else
          {
            MR_Word ll_backend__llds_out__llds_out_util__Var_49;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__Var_49, ll_backend__llds_out__llds_out_util__ArgX2_6, ll_backend__llds_out__llds_out_util__ArgY2_7);
            }
            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_49 == (MR_Integer) 0);
            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
            if (ll_backend__llds_out__llds_out_util__succeeded)
              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_49;
            else
              {
                MR_Word ll_backend__llds_out__llds_out_util__Var_50;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_util__Var_50, ll_backend__llds_out__llds_out_util__ArgX3_8, ll_backend__llds_out__llds_out_util__ArgY3_9);
                }
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_50 == (MR_Integer) 0);
                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_50;
                else
                  {
                    MR_Word ll_backend__llds_out__llds_out_util__Var_51;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0], &ll_backend__llds_out__llds_out_util__Var_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX4_10)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY4_11)));
                    }
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_51 == (MR_Integer) 0);
                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                    if (ll_backend__llds_out__llds_out_util__succeeded)
                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_51;
                    else
                      {
                        MR_Word ll_backend__llds_out__llds_out_util__Var_52;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1], &ll_backend__llds_out__llds_out_util__Var_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX5_12)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY5_13)));
                        }
                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_52 == (MR_Integer) 0);
                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                        if (ll_backend__llds_out__llds_out_util__succeeded)
                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_52;
                        else
                          {
                            MR_Word ll_backend__llds_out__llds_out_util__Var_53;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2], &ll_backend__llds_out__llds_out_util__Var_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX6_14)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY6_15)));
                            }
                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_53 == (MR_Integer) 0);
                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                            if (ll_backend__llds_out__llds_out_util__succeeded)
                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_53;
                            else
                              {
                                MR_Word ll_backend__llds_out__llds_out_util__Var_54;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3], &ll_backend__llds_out__llds_out_util__Var_54, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX7_16)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY7_17)));
                                }
                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_54 == (MR_Integer) 0);
                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_54;
                                else
                                  {
                                    MR_Word ll_backend__llds_out__llds_out_util__Var_55;
                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_93 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX8_18;
                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_94 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_55, ll_backend__llds_out__llds_out_util__Var_93, ll_backend__llds_out__llds_out_util__Var_94);
                                    }
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_55 == (MR_Integer) 0);
                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_55;
                                    else
                                      {
                                        MR_Word ll_backend__llds_out__llds_out_util__Var_56;
                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_95 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX9_20;
                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_96 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY9_21;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_56, ll_backend__llds_out__llds_out_util__Var_95, ll_backend__llds_out__llds_out_util__Var_96);
                                        }
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_56 == (MR_Integer) 0);
                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_56;
                                        else
                                          {
                                            MR_Word ll_backend__llds_out__llds_out_util__Var_57;
                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_97 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX10_22;
                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_98 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY10_23;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_57, ll_backend__llds_out__llds_out_util__Var_97, ll_backend__llds_out__llds_out_util__Var_98);
                                            }
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_57 == (MR_Integer) 0);
                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_57;
                                            else
                                              {
                                                MR_Word ll_backend__llds_out__llds_out_util__Var_58;
                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_99 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX11_24;
                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_100 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY11_25;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_58, ll_backend__llds_out__llds_out_util__Var_99, ll_backend__llds_out__llds_out_util__Var_100);
                                                }
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_58 == (MR_Integer) 0);
                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_58;
                                                else
                                                  {
                                                    MR_Word ll_backend__llds_out__llds_out_util__Var_59;
                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_101 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX12_26;
                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_102 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY12_27;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_59, ll_backend__llds_out__llds_out_util__Var_101, ll_backend__llds_out__llds_out_util__Var_102);
                                                    }
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_59 == (MR_Integer) 0);
                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_59;
                                                    else
                                                      {
                                                        MR_Word ll_backend__llds_out__llds_out_util__Var_60;
                                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_103 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX13_28;
                                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_104 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY13_29;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_60, ll_backend__llds_out__llds_out_util__Var_103, ll_backend__llds_out__llds_out_util__Var_104);
                                                        }
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_60 == (MR_Integer) 0);
                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_60;
                                                        else
                                                          {
                                                            MR_Word ll_backend__llds_out__llds_out_util__Var_61;
                                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_105 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX14_30;
                                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_106 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY14_31;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_61, ll_backend__llds_out__llds_out_util__Var_105, ll_backend__llds_out__llds_out_util__Var_106);
                                                            }
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_61 == (MR_Integer) 0);
                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_61;
                                                            else
                                                              {
                                                                MR_Word ll_backend__llds_out__llds_out_util__Var_62;
                                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_107 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX15_32;
                                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_108 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY15_33;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_62, ll_backend__llds_out__llds_out_util__Var_107, ll_backend__llds_out__llds_out_util__Var_108);
                                                                }
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_62 == (MR_Integer) 0);
                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_62;
                                                                else
                                                                  {
                                                                    MR_Word ll_backend__llds_out__llds_out_util__Var_63;
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_109 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX16_34;
                                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_110 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY16_35;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_63, ll_backend__llds_out__llds_out_util__Var_109, ll_backend__llds_out__llds_out_util__Var_110);
                                                                    }
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_63 == (MR_Integer) 0);
                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_63;
                                                                    else
                                                                      {
                                                                        MR_Word ll_backend__llds_out__llds_out_util__Var_64;
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_111 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX17_36;
                                                                        MR_Integer ll_backend__llds_out__llds_out_util__Var_112 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY17_37;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_64, ll_backend__llds_out__llds_out_util__Var_111, ll_backend__llds_out__llds_out_util__Var_112);
                                                                        }
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_64 == (MR_Integer) 0);
                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_64;
                                                                        else
                                                                          {
                                                                            MR_Word ll_backend__llds_out__llds_out_util__Var_65;
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_113 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX18_38;
                                                                            MR_Integer ll_backend__llds_out__llds_out_util__Var_114 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY18_39;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_65, ll_backend__llds_out__llds_out_util__Var_113, ll_backend__llds_out__llds_out_util__Var_114);
                                                                            }
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_65 == (MR_Integer) 0);
                                                                            ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                              *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_65;
                                                                            else
                                                                              {
                                                                                MR_Word ll_backend__llds_out__llds_out_util__Var_66;
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_115 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX19_40;
                                                                                MR_Integer ll_backend__llds_out__llds_out_util__Var_116 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY19_41;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_66, ll_backend__llds_out__llds_out_util__Var_115, ll_backend__llds_out__llds_out_util__Var_116);
                                                                                }
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_66 == (MR_Integer) 0);
                                                                                ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                  *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_66;
                                                                                else
                                                                                  {
                                                                                    MR_Word ll_backend__llds_out__llds_out_util__Var_67;
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_117 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX20_42;
                                                                                    MR_Integer ll_backend__llds_out__llds_out_util__Var_118 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY20_43;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__llds_out__llds_out_util__Var_67, ll_backend__llds_out__llds_out_util__Var_117, ll_backend__llds_out__llds_out_util__Var_118);
                                                                                    }
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_67 == (MR_Integer) 0);
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_67;
                                                                                    else
                                                                                      {
                                                                                        MR_Word ll_backend__llds_out__llds_out_util__Var_68;

                                                                                        {
                                                                                          libs__trace_params____Compare____trace_level_0_0(&ll_backend__llds_out__llds_out_util__Var_68, ll_backend__llds_out__llds_out_util__ArgX21_44, ll_backend__llds_out__llds_out_util__ArgY21_45);
                                                                                        }
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_68 == (MR_Integer) 0);
                                                                                        ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                          *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_68;
                                                                                        else
                                                                                          {
                                                                                            libs__globals____Compare____globals_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__ArgX22_46, ll_backend__llds_out__llds_out_util__ArgY22_47);
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

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_47 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_48 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_47 == ll_backend__llds_out__llds_out_util__CastY_48);
    if (ll_backend__llds_out__llds_out_util__succeeded)
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_50_50;
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_51_51;
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_52_52;
        MR_Word ll_backend__llds_out__llds_out_util__TypeInfo_53_53;
        MR_Word ll_backend__llds_out__llds_out_util__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_String ll_backend__llds_out__llds_out_util__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_util__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__llds_out__llds_out_util__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_String ll_backend__llds_out__llds_out_util__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgX8_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY8_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX10_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX11_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX12_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX13_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX14_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX15_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX16_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY16_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX17_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX18_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX19_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY19_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX20_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY20_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX21_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_util__ArgY21_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__llds_out__llds_out_util__ArgX22_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__llds_out__llds_out_util__ArgY22_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 8)));

        {
          ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__llds_out__llds_out_util__ArgX1_3, ll_backend__llds_out__llds_out_util__ArgY1_4);
        }
        if (ll_backend__llds_out__llds_out_util__succeeded)
          {
            ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__ArgX2_5, ll_backend__llds_out__llds_out_util__ArgY2_6) == 0);
            if (ll_backend__llds_out__llds_out_util__succeeded)
              {
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__ArgX3_7, ll_backend__llds_out__llds_out_util__ArgY3_8) == 0);
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__TypeInfo_50_50 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[0];
                    {
                      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_50_50, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX4_9)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY4_10)));
                    }
                    if (ll_backend__llds_out__llds_out_util__succeeded)
                      {
                        ll_backend__llds_out__llds_out_util__TypeInfo_51_51 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[1];
                        {
                          ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_51_51, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX5_11)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY5_12)));
                        }
                        if (ll_backend__llds_out__llds_out_util__succeeded)
                          {
                            ll_backend__llds_out__llds_out_util__TypeInfo_52_52 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[2];
                            {
                              ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_52_52, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX6_13)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY6_14)));
                            }
                            if (ll_backend__llds_out__llds_out_util__succeeded)
                              {
                                ll_backend__llds_out__llds_out_util__TypeInfo_53_53 = (MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_2[3];
                                {
                                  ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_util__TypeInfo_53_53, ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgX7_15)), ((MR_Box) (ll_backend__llds_out__llds_out_util__ArgY7_16)));
                                }
                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX8_17 == ll_backend__llds_out__llds_out_util__ArgY8_18);
                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                      {
                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX9_19 == ll_backend__llds_out__llds_out_util__ArgY9_20);
                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                          {
                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX10_21 == ll_backend__llds_out__llds_out_util__ArgY10_22);
                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                              {
                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX11_23 == ll_backend__llds_out__llds_out_util__ArgY11_24);
                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                  {
                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX12_25 == ll_backend__llds_out__llds_out_util__ArgY12_26);
                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                      {
                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX13_27 == ll_backend__llds_out__llds_out_util__ArgY13_28);
                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                          {
                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX14_29 == ll_backend__llds_out__llds_out_util__ArgY14_30);
                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                                              {
                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX15_31 == ll_backend__llds_out__llds_out_util__ArgY15_32);
                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                  {
                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX16_33 == ll_backend__llds_out__llds_out_util__ArgY16_34);
                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                      {
                                                                        ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX17_35 == ll_backend__llds_out__llds_out_util__ArgY17_36);
                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                          {
                                                                            ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX18_37 == ll_backend__llds_out__llds_out_util__ArgY18_38);
                                                                            if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                              {
                                                                                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX19_39 == ll_backend__llds_out__llds_out_util__ArgY19_40);
                                                                                if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                  {
                                                                                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX20_41 == ll_backend__llds_out__llds_out_util__ArgY20_42);
                                                                                    if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                      {
                                                                                        {
                                                                                          ll_backend__llds_out__llds_out_util__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__llds_out__llds_out_util__ArgX21_43, ll_backend__llds_out__llds_out_util__ArgY21_44);
                                                                                        }
                                                                                        if (ll_backend__llds_out__llds_out_util__succeeded)
                                                                                          {
                                                                                            ll_backend__llds_out__llds_out_util__succeeded = libs__globals____Unify____globals_0_0(ll_backend__llds_out__llds_out_util__ArgX22_45, ll_backend__llds_out__llds_out_util__ArgY22_46);
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
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5 = ll_backend__llds_out__llds_out_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ll_backend__llds_out__llds_out_util__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3 = ll_backend__llds_out__llds_out_util__HeadVar__1_1;
    MR_Word ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4 = ll_backend__llds_out__llds_out_util__HeadVar__2_2;

    {
      ll_backend__llds_out__llds_out_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util_scalar_common_1[0], ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__llds_out__llds_out_util__Cast_HeadVar2_4)));
    }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(
  MR_Word * ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_225 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_226 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__3_3;

    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_225 == ll_backend__llds_out__llds_out_util__CastY_226);
    if (ll_backend__llds_out__llds_out_util__succeeded)
      *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ll_backend__llds_out__llds_out_util__Var_241 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ll_backend__llds_out__llds_out_util__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_241, ll_backend__llds_out__llds_out_util__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__llds_out__llds_out_util__Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__llds_out__llds_out_util__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ll_backend__llds_out__llds_out_util__Var_251 = (MR_Integer) ll_backend__llds_out__llds_out_util__Var_240;
                  MR_Integer ll_backend__llds_out__llds_out_util__Var_252 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY1_28;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_251, ll_backend__llds_out__llds_out_util__Var_252);
                  }
                }
                break;
              case (MR_Integer) 2:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__llds_out__llds_out_util__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__llds_out__llds_out_util__ArgY1_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    ll_backend__llds____Compare____code_addr_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_239, ll_backend__llds_out__llds_out_util__ArgY1_51);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__llds_out__llds_out_util__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__llds_out__llds_out_util__ArgY1_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            backend_libs__rtti____Compare____rtti_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_244, ll_backend__llds_out__llds_out_util__ArgY1_74);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__llds_out__llds_out_util__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__llds_out__llds_out_util__ArgY1_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            ll_backend__layout____Compare____layout_name_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_243, ll_backend__llds_out__llds_out_util__ArgY1_97);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__llds_out__llds_out_util__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word ll_backend__llds_out__llds_out_util__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ll_backend__llds_out__llds_out_util__ArgY1_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ll_backend__llds_out__llds_out_util__ArgY2_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ll_backend__llds_out__llds_out_util__Var_128;

                          {
                            mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__llds_out__llds_out_util__Var_128, ll_backend__llds_out__llds_out_util__Var_246, ll_backend__llds_out__llds_out_util__ArgY1_125);
                          }
                          ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_128 == (MR_Integer) 0);
                          ll_backend__llds_out__llds_out_util__succeeded = !(ll_backend__llds_out__llds_out_util__succeeded);
                          if (ll_backend__llds_out__llds_out_util__succeeded)
                            *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = ll_backend__llds_out__llds_out_util__Var_128;
                          else
                            {
                              backend_libs__rtti____Compare____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_245, ll_backend__llds_out__llds_out_util__ArgY2_127);
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ll_backend__llds_out__llds_out_util__Var_242 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String ll_backend__llds_out__llds_out_util__ArgY1_155 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_242, ll_backend__llds_out__llds_out_util__ArgY1_155);
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ll_backend__llds_out__llds_out_util__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ll_backend__llds_out__llds_out_util__ArgY1_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_String ll_backend__llds_out__llds_out_util__Var_249 = (MR_String) ll_backend__llds_out__llds_out_util__Var_238;
                          MR_String ll_backend__llds_out__llds_out_util__Var_250 = (MR_String) ll_backend__llds_out__llds_out_util__ArgY1_178;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_249, ll_backend__llds_out__llds_out_util__Var_250);
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer ll_backend__llds_out__llds_out_util__Var_247 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Integer ll_backend__llds_out__llds_out_util__ArgY1_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_247, ll_backend__llds_out__llds_out_util__ArgY1_201);
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer ll_backend__llds_out__llds_out_util__Var_248 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *ll_backend__llds_out__llds_out_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Integer ll_backend__llds_out__llds_out_util__ArgY1_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_util__HeadVar__1_1, ll_backend__llds_out__llds_out_util__Var_248, ll_backend__llds_out__llds_out_util__ArgY1_224);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_util__CastX_25 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__1_1;
    MR_Integer ll_backend__llds_out__llds_out_util__CastY_26 = (MR_Integer) ll_backend__llds_out__llds_out_util__HeadVar__2_2;

    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__CastX_25 == ll_backend__llds_out__llds_out_util__CastY_26);
    if (ll_backend__llds_out__llds_out_util__succeeded)
      ll_backend__llds_out__llds_out_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ll_backend__llds_out__llds_out_util__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_util__ArgY1_4;

            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__llds_out__llds_out_util__succeeded)
              {
                ll_backend__llds_out__llds_out_util__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__ArgX1_3, ll_backend__llds_out__llds_out_util__ArgY1_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__llds_out__llds_out_util__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_util__ArgY1_6;
            MR_Integer ll_backend__llds_out__llds_out_util__Var_36;
            MR_Integer ll_backend__llds_out__llds_out_util__Var_37;

            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__llds_out__llds_out_util__succeeded)
              {
                ll_backend__llds_out__llds_out_util__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__llds_out__llds_out_util__Var_36 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgX1_5;
                ll_backend__llds_out__llds_out_util__Var_37 = (MR_Integer) ll_backend__llds_out__llds_out_util__ArgY1_6;
                ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__Var_36 == ll_backend__llds_out__llds_out_util__Var_37);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__llds_out__llds_out_util__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_util__ArgY1_8;

            ll_backend__llds_out__llds_out_util__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__llds_out__llds_out_util__succeeded)
              {
                ll_backend__llds_out__llds_out_util__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  ll_backend__llds_out__llds_out_util__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__llds_out__llds_out_util__ArgX1_7, ll_backend__llds_out__llds_out_util__ArgY1_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__llds_out__llds_out_util__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_util__ArgY1_10;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____rtti_id_0_0(ll_backend__llds_out__llds_out_util__ArgX1_9, ll_backend__llds_out__llds_out_util__ArgY1_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__llds_out__llds_out_util__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_util__ArgY1_12;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      ll_backend__llds_out__llds_out_util__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__llds_out__llds_out_util__ArgX1_11, ll_backend__llds_out__llds_out_util__ArgY1_12);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__llds_out__llds_out_util__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_util__ArgY1_14;
                MR_Word ll_backend__llds_out__llds_out_util__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ll_backend__llds_out__llds_out_util__ArgY2_16;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_util__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      ll_backend__llds_out__llds_out_util__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__llds_out__llds_out_util__ArgX1_13, ll_backend__llds_out__llds_out_util__ArgY1_14);
                    }
                    if (ll_backend__llds_out__llds_out_util__succeeded)
                      {
                        ll_backend__llds_out__llds_out_util__succeeded = backend_libs__rtti____Unify____proc_tabling_struct_id_0_0(ll_backend__llds_out__llds_out_util__ArgX2_15, ll_backend__llds_out__llds_out_util__ArgY2_16);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ll_backend__llds_out__llds_out_util__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_String ll_backend__llds_out__llds_out_util__ArgY1_18;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__ArgX1_17, ll_backend__llds_out__llds_out_util__ArgY1_18) == 0);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ll_backend__llds_out__llds_out_util__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_util__ArgY1_20;
                MR_String ll_backend__llds_out__llds_out_util__Var_34;
                MR_String ll_backend__llds_out__llds_out_util__Var_35;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_util__Var_34 = (MR_String) ll_backend__llds_out__llds_out_util__ArgX1_19;
                    ll_backend__llds_out__llds_out_util__Var_35 = (MR_String) ll_backend__llds_out__llds_out_util__ArgY1_20;
                    ll_backend__llds_out__llds_out_util__succeeded = (strcmp(ll_backend__llds_out__llds_out_util__Var_34, ll_backend__llds_out__llds_out_util__Var_35) == 0);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer ll_backend__llds_out__llds_out_util__ArgX1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ll_backend__llds_out__llds_out_util__ArgY1_22;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX1_21 == ll_backend__llds_out__llds_out_util__ArgY1_22);
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer ll_backend__llds_out__llds_out_util__ArgX1_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer ll_backend__llds_out__llds_out_util__ArgY1_24;

                ll_backend__llds_out__llds_out_util__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (ll_backend__llds_out__llds_out_util__succeeded)
                  {
                    ll_backend__llds_out__llds_out_util__ArgY1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_util__HeadVar__2_2, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__ArgX1_23 == ll_backend__llds_out__llds_out_util__ArgY1_24);
                  }
              }
              break;
          }
          break;
      }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_indent_5_p_0(
  MR_String ll_backend__llds_out__llds_out_util__FirstIndent_6,
  MR_String ll_backend__llds_out__llds_out_util__LaterIndent_7,
  MR_Integer ll_backend__llds_out__llds_out_util__N0_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded = (ll_backend__llds_out__llds_out_util__N0_8 > (MR_Integer) 0);

    if (ll_backend__llds_out__llds_out_util__succeeded)
      {
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__LaterIndent_7);
      }
    else
      {
        mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_util__FirstIndent_6);
      }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_3,
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      ll_backend__llds_out__llds_out_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ll_backend__llds_out__llds_out_util__DeclSet_4, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_3)));
    }
    return ll_backend__llds_out__llds_out_util__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_util__DeclId_4,
  MR_Word ll_backend__llds_out__llds_out_util__DeclSet0_5,
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0, ((MR_Box) (ll_backend__llds_out__llds_out_util__DeclId_4)), ll_backend__llds_out__llds_out_util__DeclSet0_5, ll_backend__llds_out__llds_out_util__DeclSet_6);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(
  MR_Word * ll_backend__llds_out__llds_out_util__DeclSet_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    {
      *ll_backend__llds_out__llds_out_util__DeclSet_2 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_util__OutputLineNumbers_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    switch (ll_backend__llds_out__llds_out_util__OutputLineNumbers_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            backend_libs__c_util__always_reset_line_num_cur_stream_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_util__OutputLineNumbers_5,
  MR_Word ll_backend__llds_out__llds_out_util__Context_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;

    switch (ll_backend__llds_out__llds_out_util__OutputLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__llds_out__llds_out_util__File_8;
          MR_Integer ll_backend__llds_out__llds_out_util__Line_9;

          {
            mercury__term__context_file_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__File_8);
          }
          {
            mercury__term__context_line_2_p_0(ll_backend__llds_out__llds_out_util__Context_6, &ll_backend__llds_out__llds_out_util__Line_9);
          }
          {
            backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(ll_backend__llds_out__llds_out_util__File_8, ll_backend__llds_out__llds_out_util__Line_9);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(
  MR_Word ll_backend__llds_out__llds_out_util__ModuleName_9,
  MR_String ll_backend__llds_out__llds_out_util__SourceFileName_10,
  MR_Word ll_backend__llds_out__llds_out_util__Globals_11,
  MR_Word ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12,
  MR_Word ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13,
  MR_Word ll_backend__llds_out__llds_out_util__TableIoEntryMap_14,
  MR_Word ll_backend__llds_out__llds_out_util__AllocSiteMap_15)
{
  {
    MR_bool ll_backend__llds_out__llds_out_util__succeeded;
    MR_Word ll_backend__llds_out__llds_out_util__Info_16;
    MR_String ll_backend__llds_out__llds_out_util__MangledModuleName_17;
    MR_Word ll_backend__llds_out__llds_out_util__AutoComments_18;
    MR_Word ll_backend__llds_out__llds_out_util__ForeignLineNumbers_19;
    MR_Word ll_backend__llds_out__llds_out_util__EmitCLoops_20;
    MR_Word ll_backend__llds_out__llds_out_util__GenerateBytecode_21;
    MR_Word ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22;
    MR_Word ll_backend__llds_out__llds_out_util__ProfileCalls_23;
    MR_Word ll_backend__llds_out__llds_out_util__ProfileTime_24;
    MR_Word ll_backend__llds_out__llds_out_util__ProfileMemory_25;
    MR_Word ll_backend__llds_out__llds_out_util__ProfileDeep_26;
    MR_Word ll_backend__llds_out__llds_out_util__UnboxedFloat_27;
    MR_Word ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28;
    MR_Word ll_backend__llds_out__llds_out_util__StaticGroundFloats_29;
    MR_Word ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30;
    MR_Word ll_backend__llds_out__llds_out_util__TraceLevel_31;

    {
      ll_backend__llds_out__llds_out_util__MangledModuleName_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__llds_out__llds_out_util__ModuleName_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 151, &ll_backend__llds_out__llds_out_util__AutoComments_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 149, &ll_backend__llds_out__llds_out_util__ForeignLineNumbers_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 488, &ll_backend__llds_out__llds_out_util__EmitCLoops_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 147, &ll_backend__llds_out__llds_out_util__GenerateBytecode_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 491, &ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 202, &ll_backend__llds_out__llds_out_util__ProfileCalls_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 203, &ll_backend__llds_out__llds_out_util__ProfileTime_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 204, &ll_backend__llds_out__llds_out_util__ProfileMemory_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 205, &ll_backend__llds_out__llds_out_util__ProfileDeep_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 253, &ll_backend__llds_out__llds_out_util__UnboxedFloat_27);
    }
    {
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 457, &ll_backend__llds_out__llds_out_util__StaticGroundFloats_29);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__llds_out__llds_out_util__Globals_11, (MR_Integer) 487, &ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__llds_out__llds_out_util__Globals_11, &ll_backend__llds_out__llds_out_util__TraceLevel_31);
    }
    {
      ll_backend__llds_out__llds_out_util__Info_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_util__ModuleName_9));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_util__MangledModuleName_17));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_util__SourceFileName_10));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_util__InternalLabelToLayoutMap_12));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_util__EntryLabelToLayoutMap_13));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_util__TableIoEntryMap_14));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 6) = ((MR_Box) (ll_backend__llds_out__llds_out_util__AllocSiteMap_15));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 7) = ((MR_Box) ((ll_backend__llds_out__llds_out_util__AutoComments_18 | ((((ll_backend__llds_out__llds_out_util__ForeignLineNumbers_19 << (MR_Integer) 1)) | ((((ll_backend__llds_out__llds_out_util__EmitCLoops_20 << (MR_Integer) 2)) | ((((ll_backend__llds_out__llds_out_util__GenerateBytecode_21 << (MR_Integer) 3)) | ((((ll_backend__llds_out__llds_out_util__LocalThreadEngineBase_22 << (MR_Integer) 4)) | ((((ll_backend__llds_out__llds_out_util__ProfileCalls_23 << (MR_Integer) 5)) | ((((ll_backend__llds_out__llds_out_util__ProfileTime_24 << (MR_Integer) 6)) | ((((ll_backend__llds_out__llds_out_util__ProfileMemory_25 << (MR_Integer) 7)) | ((((ll_backend__llds_out__llds_out_util__ProfileDeep_26 << (MR_Integer) 8)) | ((((ll_backend__llds_out__llds_out_util__UnboxedFloat_27 << (MR_Integer) 9)) | ((((ll_backend__llds_out__llds_out_util__DetStackDwordAligment_28 << (MR_Integer) 10)) | ((((ll_backend__llds_out__llds_out_util__StaticGroundFloats_29 << (MR_Integer) 11)) | ((((ll_backend__llds_out__llds_out_util__UseMacroForRedoFail_30 << (MR_Integer) 12)) | ((ll_backend__llds_out__llds_out_util__TraceLevel_31 << (MR_Integer) 13)))))))))))))))))))))))))))));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_util__Info_16, 8) = ((MR_Box) (ll_backend__llds_out__llds_out_util__Globals_11));
    }
    return ll_backend__llds_out__llds_out_util__Info_16;
  }
}

void mercury__ll_backend__llds_out__llds_out_util__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0);
}

void mercury__ll_backend__llds_out__llds_out_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.llds_out.llds_out_util. */
