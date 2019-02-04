/*
** Automatically generated from `erlang_rtti.m'
** by the Mercury compiler,
** version rotd-2019-01-14
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


// :- module backend_libs.erlang_rtti.
// :- implementation.

/*
INIT mercury__backend_libs__erlang_rtti__init
ENDINIT
*/

#include "backend_libs.erlang_rtti.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1];

static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[8];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[8];

static const MR_DuArgLocn backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_du_functor_0_0[8];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0;

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1];

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1];

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1];

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5;

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6;

static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7];

static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7];

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7];

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5;

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3];

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6];

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6];

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0;

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1];

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1];

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1];

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1;

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2;

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5;

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1];

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1];

static const MR_DuArgLocn backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_type_ctor_details_0_6[1];

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6;

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7;

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3];

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4];

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8];

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8];

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__erlang_rtti_scalar_common_1[4][2];




static /* final */ const MR_Box backend_libs__erlang_rtti_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 = {
  (MR_String) "erlang_atom_raw",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_atom_raw",
  {     &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 },
  {     &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0),
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[8] = {
  (MR_String) "edu_name",
  (MR_String) "edu_orig_arity",
  (MR_String) "edu_ordinal",
  (MR_String) "edu_lex",
  (MR_String) "edu_rep",
  (MR_String) "edu_arg_infos",
  (MR_String) "edu_exist_info",
  (MR_String) "edu_subtype_info"
};

static const MR_DuArgLocn backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_du_functor_0_0[8] = {
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
  }
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0 = {
  (MR_String) "erlang_du_functor",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_du_functor_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_du_functor",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0 = {
  (MR_String) "erlang_impl_ctor_type_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1 = {
  (MR_String) "erlang_impl_ctor_type_ctor_info",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2 = {
  (MR_String) "erlang_impl_ctor_typeclass_info",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3 = {
  (MR_String) "erlang_impl_ctor_base_typeclass_info",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4 = {
  (MR_String) "erlang_impl_ctor_hp",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5 = {
  (MR_String) "erlang_impl_ctor_subgoal",
  INT32_C(5)
};

static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6 = {
  (MR_String) "erlang_impl_ctor_ticket",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6
};

static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2
};

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_impl_ctor",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0 },
  (MR_Integer) 7,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0 = {
  (MR_String) "erlang_rtti_data_type_ctor_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1 = {
  (MR_String) "erlang_rtti_data_type_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2 = {
  (MR_String) "erlang_rtti_data_pseudo_type_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_base_typeclass_info_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3 = {
  (MR_String) "erlang_rtti_data_base_typeclass_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_decl_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4 = {
  (MR_String) "erlang_rtti_data_type_class_decl",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_instance_0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5 = {
  (MR_String) "erlang_rtti_data_type_class_instance",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5
};

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_rtti_data",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0),
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7] = {
  (MR_String) "etcr_version",
  (MR_String) "etcr_module_name",
  (MR_String) "etcr_type_name",
  (MR_String) "etcr_arity",
  (MR_String) "etcr_unify",
  (MR_String) "etcr_compare",
  (MR_String) "etcr_rep_details"
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0 = {
  (MR_String) "erlang_type_ctor_data",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_data",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1] = {
  (MR_String) "edu_functors"
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0 = {
  (MR_String) "erlang_du",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1] = {
  (MR_String) "edummy_name"
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1 = {
  (MR_String) "erlang_dummy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2 = {
  (MR_String) "erlang_list",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3 = {
  (MR_String) "erlang_array",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1] = {
  (MR_String) "eeqv_type"
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4 = {
  (MR_String) "erlang_eqv",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_builtin_ctor_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1] = {
  (MR_String) "ebuiltin_ctor"
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5 = {
  (MR_String) "erlang_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0)
};

static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1] = {
  (MR_String) "eimpl_ctor"
};

static const MR_DuArgLocn backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_type_ctor_details_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6 = {
  (MR_String) "erlang_impl_artifact",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(6),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_locns_erlang_type_ctor_details_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7 = {
  (MR_String) "erlang_foreign",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6
};

static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2
};

static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_details",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0
};

void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_115 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_116 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_115 == CastY_116);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_133 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(HeadVar__1_1, Var_133, ArgY1_5);
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  backend_libs__rtti____Compare____rtti_type_info_0_0(HeadVar__1_1, Var_134, ArgY1_22);
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(HeadVar__1_1, Var_130, ArgY1_39);
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
                MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_String Var_127 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_String ArgY3_71 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word SubResult1_66;

                          backend_libs__rtti____Compare____tc_name_0_0(&SubResult1_66, Var_129, ArgY1_65);
                          succeeded = (SubResult1_66 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_66;
                          else
                          {
                            MR_Word SubResult2_69;

                            mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_69, Var_128, ArgY2_68);
                            succeeded = (SubResult2_69 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_69;
                            else
                            {
                              MR_Word SubResult3_72;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_72, Var_127, ArgY3_71);
                              succeeded = (SubResult3_72 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_72;
                              else
                                backend_libs__rtti____Compare____base_typeclass_info_0_0(HeadVar__1_1, Var_126, ArgY4_74);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          backend_libs__rtti____Compare____tc_decl_0_0(HeadVar__1_1, Var_131, ArgY1_97);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          backend_libs__rtti____Compare____tc_instance_0_0(HeadVar__1_1, Var_132, ArgY1_114);
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

void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      uint8_t ArgX1_4 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      uint8_t ArgY1_5 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      uint16_t ArgX4_13 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      uint16_t ArgY4_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
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

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_84 == CastY_85);
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
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
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_92)), ((MR_Box) (ArgY1_5)));
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_93, ArgY1_20);
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
                MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
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
                          MR_Word ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          backend_libs__rtti____Compare____rtti_maybe_pseudo_type_info_0_0(HeadVar__1_1, Var_94, ArgY1_47);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
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
                          MR_Word ArgY1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          backend_libs__rtti____Compare____builtin_ctor_0_0(HeadVar__1_1, Var_91, ArgY1_62);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
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
                          MR_Word ArgY1_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Integer Var_96 = (MR_Integer) (Var_95);
                          MR_Integer Var_97 = (MR_Integer) (ArgY1_77);

                          succeeded = (Var_96 < Var_97);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_96 > Var_97);
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
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(ArgX1_7, ArgY1_8);
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
                MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_12;
                MR_String ArgX3_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_String ArgY3_14;
                MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = backend_libs__rtti____Unify____tc_name_0_0(ArgX1_9, ArgY1_10);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_11, ArgY2_12);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX3_13, ArgY3_14) == 0);
                      if (succeeded)
                        succeeded = backend_libs__rtti____Unify____base_typeclass_info_0_0(ArgX4_15, ArgY4_16);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = backend_libs__rtti____Unify____tc_decl_0_0(ArgX1_17, ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = backend_libs__rtti____Unify____tc_instance_0_0(ArgX1_19, ArgY1_20);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_21_21;
      uint8_t ArgX1_3 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      uint8_t ArgY1_4 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      uint16_t ArgX4_9 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      uint16_t ArgY4_10 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                  succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(ArgX7_15, ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
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
            case (MR_Integer) 2:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_22_22;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_22_22 = (MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = backend_libs__rtti____Unify____rtti_maybe_pseudo_type_info_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = backend_libs__rtti____Unify____builtin_ctor_0_0(ArgX1_13, ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  succeeded = (ArgX1_15 == ArgY1_16);
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
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(
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
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      uint16_t ArgX2_7 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      uint16_t ArgY2_8 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      uint32_t ArgX3_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      uint32_t ArgY3_11 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      uint32_t ArgX4_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      uint32_t ArgY4_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
              MR_String Var_37 = (MR_String) (ArgX5_16);
              MR_String Var_38 = (MR_String) (ArgY5_17);

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_18, Var_37, Var_38);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Integer Var_39 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_40 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_39 < Var_40);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_39 > Var_40);
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
  }
}

MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      uint16_t ArgX2_5 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      uint16_t ArgY2_6 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      uint32_t ArgX3_7 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      uint32_t ArgY3_8 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      uint32_t ArgX4_9 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      uint32_t ArgY4_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Integer CastX_25;
      MR_Integer CastY_26;

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
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
              CastX_25 = (MR_Integer) (ArgX5_11);
              CastY_26 = (MR_Integer) (ArgY5_12);
              succeeded = (CastX_25 == CastY_26);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_String ArgX1_23 = (MR_String) (ArgX5_11);
                MR_String ArgY1_24 = (MR_String) (ArgY5_12);

                succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
              }
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_22_22 = (MR_Word) (&backend_libs__erlang_rtti_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                    succeeded = (ArgX8_17 == ArgY8_18);
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
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__backend_libs__erlang_rtti__init(void)
{
}

void mercury__backend_libs__erlang_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0);
}

void mercury__backend_libs__erlang_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__erlang_rtti__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.erlang_rtti.
