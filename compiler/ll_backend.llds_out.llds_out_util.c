/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2019-02-15
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


// :- module ll_backend.llds_out.llds_out_util.
// :- implementation.

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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[2];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_10[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_10;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_11[1];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_11;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[9];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[12];

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[12];

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[24];

static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[24];

static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[24];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[1];

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[1];

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0 = {
  (MR_String) "decl_float_label",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1 = {
  (MR_String) "decl_int64_label",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2 = {
  (MR_String) "decl_uint64_label",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3 = {
  (MR_String) "decl_common_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4 = {
  (MR_String) "decl_code_addr",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5 = {
  (MR_String) "decl_rtti_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6 = {
  (MR_String) "decl_layout_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7 = {
  (MR_String) "decl_tabling_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8 = {
  (MR_String) "decl_foreign_proc_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_global_var_ref_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9 = {
  (MR_String) "decl_c_global_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_10 = {
  (MR_String) "decl_type_info_like_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_11 = {
  (MR_String) "decl_typeclass_constraint_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_decl_id_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[9] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_10,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_11
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(9),
    MR_SECTAG_REMOTE_FULL_WORD,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[12] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_10,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_11,
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2
};

static const MR_Integer ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[12] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_id",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0 },
  (MR_Integer) 12,
  UINT16_C(4),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "decl_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0),
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[24] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_ConstString ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[24] = {
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
  (MR_String) "lout_unboxed_int64s",
  (MR_String) "lout_static_ground_int64s",
  (MR_String) "lout_use_macro_for_redo_fail",
  (MR_String) "lout_trace_level",
  (MR_String) "lout_globals"
};

static const MR_DuArgLocn ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[24] = {
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
    (MR_Integer) 17,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
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
  INT16_C(24),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0,
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[1] = {
  &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_util",
  (MR_String) "llds_out_info",
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0 },
  {     ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_75 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_76 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_75 == CastY_76);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX23_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 7);
      MR_Word ArgY23_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 7);
      MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_101 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_102 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_101 < Var_102);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_101 > Var_102);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_103 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_104 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_103 < Var_104);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_103 > Var_104);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;
                        MR_Integer Var_105 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_106 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_105 < Var_106);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_105 > Var_106);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult10_33 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;
                          MR_Integer Var_107 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_108 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_107 < Var_108);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_107 > Var_108);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult11_36 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_109 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_110 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_109 < Var_110);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_109 > Var_110);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_111 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_112 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_111 < Var_112);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_111 > Var_112);
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
                                MR_Integer Var_113 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_114 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_113 < Var_114);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_113 > Var_114);
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
                                  MR_Integer Var_115 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_116 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_115 < Var_116);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_115 > Var_116);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;
                                    MR_Integer Var_117 = (MR_Integer) (ArgX16_49);
                                    MR_Integer Var_118 = (MR_Integer) (ArgY16_50);

                                    succeeded = (Var_117 < Var_118);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_117 > Var_118);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult16_51 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;
                                      MR_Integer Var_119 = (MR_Integer) (ArgX17_52);
                                      MR_Integer Var_120 = (MR_Integer) (ArgY17_53);

                                      succeeded = (Var_119 < Var_120);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_119 > Var_120);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult17_54 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;
                                        MR_Integer Var_121 = (MR_Integer) (ArgX18_55);
                                        MR_Integer Var_122 = (MR_Integer) (ArgY18_56);

                                        succeeded = (Var_121 < Var_122);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_121 > Var_122);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult18_57 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;
                                          MR_Integer Var_123 = (MR_Integer) (ArgX19_58);
                                          MR_Integer Var_124 = (MR_Integer) (ArgY19_59);

                                          succeeded = (Var_123 < Var_124);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_123 > Var_124);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult19_60 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            MR_Word SubResult20_63;
                                            MR_Integer Var_125 = (MR_Integer) (ArgX20_61);
                                            MR_Integer Var_126 = (MR_Integer) (ArgY20_62);

                                            succeeded = (Var_125 < Var_126);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_125 > Var_126);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult20_63 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult20_63;
                                            else
                                            {
                                              MR_Word SubResult21_66;
                                              MR_Integer Var_127 = (MR_Integer) (ArgX21_64);
                                              MR_Integer Var_128 = (MR_Integer) (ArgY21_65);

                                              succeeded = (Var_127 < Var_128);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_127 > Var_128);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult21_66 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult21_66;
                                              else
                                              {
                                                MR_Word SubResult22_69;
                                                MR_Integer Var_129 = (MR_Integer) (ArgX22_67);
                                                MR_Integer Var_130 = (MR_Integer) (ArgY22_68);

                                                succeeded = (Var_129 < Var_130);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_129 > Var_130);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult22_69 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult22_69;
                                                else
                                                {
                                                  MR_Word SubResult23_72;

                                                  libs__trace_params____Compare____trace_level_0_0(&SubResult23_72, ArgX23_70, ArgY23_71);
                                                  succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult23_72;
                                                  else
                                                    libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX24_73, ArgY24_74);
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
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_54_54;
      MR_Word TypeInfo_55_55;
      MR_Word TypeInfo_56_56;
      MR_Word TypeInfo_57_57;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX23_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 7);
      MR_Word ArgY23_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 7);
      MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            TypeInfo_54_54 = (MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_55_55 = (MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_56_56 = (MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_57_57 = (MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_39 == ArgY19_40);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX20_41 == ArgY20_42);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX21_43 == ArgY21_44);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX22_45 == ArgY22_46);
                                                if (succeeded)
                                                {
                                                  succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX23_47, ArgY23_48);
                                                  if (succeeded)
                                                    succeeded = libs__globals____Unify____globals_0_0(ArgX24_49, ArgY24_50);
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
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_317 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_318 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_317 == CastY_318);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_335 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_335, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            int64_t Var_337 = MR_unbox_int64((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  int64_t ArgY1_32 = MR_unbox_int64((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  succeeded = (Var_337 < ArgY1_32);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_337 > ArgY1_32);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            uint64_t Var_344 = MR_unbox_uint64((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  uint64_t ArgY1_59 = MR_unbox_uint64((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  succeeded = (Var_344 < ArgY1_59);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_344 > ArgY1_59);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_347 = (MR_Integer) (Var_334);
                          MR_Integer Var_348 = (MR_Integer) (ArgY1_86);

                          succeeded = (Var_347 < Var_348);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_347 > Var_348);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, Var_333, ArgY1_113);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          backend_libs__rtti____Compare____rtti_id_0_0(HeadVar__1_1, Var_339, ArgY1_140);
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_338 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          ll_backend__layout____Compare____layout_name_0_0(HeadVar__1_1, Var_338, ArgY1_167);
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_340 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_341 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ArgY1_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_202;

                          mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult1_202, Var_341, ArgY1_201);
                          succeeded = (SubResult1_202 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_202;
                          else
                            backend_libs__rtti____Compare____proc_tabling_struct_id_0_0(HeadVar__1_1, Var_340, ArgY2_204);
                        }
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String Var_336 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String ArgY1_235 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_336, ArgY1_235);
                        }
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word ArgY1_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_String Var_345 = (MR_String) (Var_332);
                          MR_String Var_346 = (MR_String) (ArgY1_262);

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_345, Var_346);
                        }
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer Var_342 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Integer ArgY1_289 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_342 < ArgY1_289);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_342 > ArgY1_289);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer Var_343 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Integer ArgY1_316 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_343 < ArgY1_316);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_343 > ArgY1_316);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            int64_t ArgX1_5 = MR_unbox_int64((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            int64_t ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = MR_unbox_int64((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            uint64_t ArgX1_7 = MR_unbox_uint64((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            uint64_t ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = MR_unbox_uint64((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;
                MR_Integer Var_40;
                MR_Integer Var_41;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  Var_40 = (MR_Integer) (ArgX1_9);
                  Var_41 = (MR_Integer) (ArgY1_10);
                  succeeded = (Var_40 == Var_41);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = backend_libs__rtti____Unify____rtti_id_0_0(ArgX1_13, ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = ll_backend__layout____Unify____layout_name_0_0(ArgX1_15, ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX1_17, ArgY1_18);
                  if (succeeded)
                    succeeded = backend_libs__rtti____Unify____proc_tabling_struct_id_0_0(ArgX2_19, ArgY2_20);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_24;
                MR_String Var_38;
                MR_String Var_39;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  Var_38 = (MR_String) (ArgX1_23);
                  Var_39 = (MR_String) (ArgY1_24);
                  succeeded = (strcmp(Var_38, Var_39) == 0);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer ArgX1_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_25 == ArgY1_26);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_27 == ArgY1_28);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_indent_5_p_0(
  MR_String FirstIndent_6,
  MR_String LaterIndent_7,
  MR_Integer N0_8)
{
  {
    MR_bool succeeded = (N0_8 > (MR_Integer) 0);

    if (succeeded)
      mercury__io__write_string_3_p_0(LaterIndent_7);
    else
      mercury__io__write_string_3_p_0(FirstIndent_6);
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(
  MR_Word DeclId_3,
  MR_Word DeclSet_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0), DeclSet_4, ((MR_Box) (DeclId_3)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(
  MR_Word DeclId_4,
  MR_Word DeclSet0_5,
  MR_Word * DeclSet_6)
{
  {
    mercury__set_tree234__insert_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0), ((MR_Box) (DeclId_4)), DeclSet0_5, DeclSet_6);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(
  MR_Word * DeclSet_2)
{
  {
    *DeclSet_2 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0));
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(
  MR_Word OutputLineNumbers_4)
{
  switch (OutputLineNumbers_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        backend_libs__c_util__always_reset_line_num_cur_stream_3_p_0((MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(
  MR_Word OutputLineNumbers_5,
  MR_Word Context_6)
{
  switch (OutputLineNumbers_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String File_8;
        MR_Integer Line_9;

        mercury__term__context_file_2_p_0(Context_6, &File_8);
        mercury__term__context_line_2_p_0(Context_6, &Line_9);
        backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(File_8, Line_9);
      }
      break;
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(
  MR_Word ModuleName_9,
  MR_String SourceFileName_10,
  MR_Word Globals_11,
  MR_Word InternalLabelToLayoutMap_12,
  MR_Word EntryLabelToLayoutMap_13,
  MR_Word TableIoEntryMap_14,
  MR_Word AllocSiteMap_15)
{
  {
    MR_Word Info_16;
    MR_String MangledModuleName_17;
    MR_Word AutoComments_18;
    MR_Word ForeignLineNumbers_19;
    MR_Word EmitCLoops_20;
    MR_Word GenerateBytecode_21;
    MR_Word LocalThreadEngineBase_22;
    MR_Word ProfileCalls_23;
    MR_Word ProfileTime_24;
    MR_Word ProfileMemory_25;
    MR_Word ProfileDeep_26;
    MR_Word UnboxedFloat_27;
    MR_Word DetStackDwordAligment_28;
    MR_Word StaticGroundFloats_29;
    MR_Word UnboxedInt64s_30;
    MR_Word StaticGroundInt64s_31;
    MR_Word UseMacroForRedoFail_32;
    MR_Word TraceLevel_33;

    MangledModuleName_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 155, &AutoComments_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 153, &ForeignLineNumbers_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 506, &EmitCLoops_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 151, &GenerateBytecode_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 509, &LocalThreadEngineBase_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 213, &ProfileCalls_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 214, &ProfileTime_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 215, &ProfileMemory_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 216, &ProfileDeep_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 262, &UnboxedFloat_27);
    libs__globals__double_width_floats_on_det_stack_2_p_0(Globals_11, &DetStackDwordAligment_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 473, &StaticGroundFloats_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 263, &UnboxedInt64s_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 474, &StaticGroundInt64s_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 505, &UseMacroForRedoFail_32);
    libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_33);
    {
      Info_16 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_16, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Info_16, 1) = ((MR_Box) (MangledModuleName_17));
      MR_hl_field(MR_mktag(0), Info_16, 2) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), Info_16, 3) = ((MR_Box) (InternalLabelToLayoutMap_12));
      MR_hl_field(MR_mktag(0), Info_16, 4) = ((MR_Box) (EntryLabelToLayoutMap_13));
      MR_hl_field(MR_mktag(0), Info_16, 5) = ((MR_Box) (TableIoEntryMap_14));
      MR_hl_field(MR_mktag(0), Info_16, 6) = ((MR_Box) (AllocSiteMap_15));
      MR_hl_field(MR_mktag(0), Info_16, 7) = (MR_Box) (((((MR_Unsigned) (AutoComments_18) << 17)) | (((((MR_Unsigned) (ForeignLineNumbers_19) << 16)) | (((((MR_Unsigned) (EmitCLoops_20) << 15)) | (((((MR_Unsigned) (GenerateBytecode_21) << 14)) | (((((MR_Unsigned) (LocalThreadEngineBase_22) << 13)) | (((((MR_Unsigned) (ProfileCalls_23) << 12)) | (((((MR_Unsigned) (ProfileTime_24) << 11)) | (((((MR_Unsigned) (ProfileMemory_25) << 10)) | (((((MR_Unsigned) (ProfileDeep_26) << 9)) | (((((MR_Unsigned) (UnboxedFloat_27) << 8)) | (((((MR_Unsigned) (DetStackDwordAligment_28) << 7)) | (((((MR_Unsigned) (StaticGroundFloats_29) << 6)) | (((((MR_Unsigned) (UnboxedInt64s_30) << 5)) | (((((MR_Unsigned) (StaticGroundInt64s_31) << 4)) | (((((MR_Unsigned) (UseMacroForRedoFail_32) << 3)) | (MR_Unsigned) (TraceLevel_33)))))))))))))))))))))))))))))));
      MR_hl_field(MR_mktag(0), Info_16, 8) = ((MR_Box) (Globals_11));
    }
    return Info_16;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_util____Compare____decl_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_util____Unify____decl_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_util____Compare____decl_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds_out__llds_out_util____Unify____llds_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__llds_out__llds_out_util____Compare____llds_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.llds_out.llds_out_util.
