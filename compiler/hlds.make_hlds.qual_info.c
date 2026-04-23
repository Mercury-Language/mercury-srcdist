/*
** Automatically generated from `qual_info.m'
** by the Mercury compiler,
** version rotd-2026-04-23
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


// :- module hlds.make_hlds.qual_info.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__qual_info__init
ENDINIT
*/

#include "hlds.make_hlds.qual_info.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[9];

static const MR_ConstString hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0[9];

static const MR_DuArgLocn hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_locns_qual_info_0_0[9];

static const MR_DuFunctorDesc hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[1];

static const MR_Integer hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[3][3];




static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: explicit type qualification"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__qual_info_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not match prior qualification."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__qual_info_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[0]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0[9] = {
  (MR_String) "qual_type_eqv_map",
  (MR_String) "qual_tvarset",
  (MR_String) "qual_tvar_renaming",
  (MR_String) "qual_tvar_name_map",
  (MR_String) "qual_explicit_vartypes",
  (MR_String) "qual_mq_info",
  (MR_String) "qual_maybe_opt_imported",
  (MR_String) "qual_found_syntax_error",
  (MR_String) "qual_found_trace_goal"
};

static const MR_DuArgLocn hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_locns_qual_info_0_0[9] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 = {
  (MR_String) "qual_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_locns_qual_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1] = { &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[1] = { &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 };

static const MR_Integer hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.qual_info",
  (MR_String) "qual_info",
  { hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0 },
  { hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0,

};

void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              parse_tree__module_qual__mq_info____Compare____mq_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_41 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_42 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_41 < Var_42);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_41 > Var_42);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_43 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_44 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_43 < Var_44);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_43 > Var_44);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_45 > Var_46);
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
hlds__make_hlds__qual_info____Unify____qual_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeCtorInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_25_25 = (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeCtorInfo_27_27 = (MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = parse_tree__module_qual__mq_info____Unify____mq_info_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                    succeeded = (ArgX9_19 == ArgY9_20);
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
hlds__make_hlds__qual_info__construct_and_record_pred_or_func_call_8_p_0(
  MR_Word PredId_9,
  MR_Word PredOrFunc_10,
  MR_Word SymName_11,
  MR_Word ArgVars_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19)
{
  MR_Word PredFormArity_16;
  MR_Word UserArity_17;

  hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_9, PredOrFunc_10, SymName_11, ArgVars_12, GoalInfo_13, Goal_14);
  PredFormArity_16 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), ArgVars_12);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_10, &UserArity_17, PredFormArity_16);
  hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(PredOrFunc_10, SymName_11, UserArity_17, STATE_VARIABLE_QualInfo_0_18, STATE_VARIABLE_QualInfo_19);
}

void MR_CALL 
hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(
  MR_Word PredId_7,
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12)
{
  switch (PredOrFunc_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgVars_14;
        MR_Word RetArgVar_15;
        MR_Integer Arity_16;
        MR_Word TypeCtor_17;
        MR_Word ConsId_18;
        MR_Word Context_19;
        MR_Word RHS_20;
        MR_Word Var_25;
        MR_Word Var_29;
        MR_Word GoalExpr_30;
        MR_Box conv0_RetArgVar_15;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), ArgVars_10, &FuncArgVars_14, &conv0_RetArgVar_15);
        RetArgVar_15 = ((MR_Word) (conv0_RetArgVar_15));
        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), FuncArgVars_14, &Arity_16);
        TypeCtor_17 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (SymName_9));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (Arity_16));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) (TypeCtor_17));
        }
        ConsId_18 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_25)));
        Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        {
          RHS_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RHS_20, 0) = ((MR_Box) (ConsId_18));
          MR_hl_field(1, RHS_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, RHS_20, 2) = ((MR_Box) (FuncArgVars_14));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(RetArgVar_15, RHS_20, Context_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_29);
        GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, Var_29, 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_30));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word GoalExpr_13;
        MR_Integer Var_22;

        Var_22 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          GoalExpr_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, GoalExpr_13, 0) = ((MR_Box) (PredId_7));
          MR_hl_field(2, GoalExpr_13, 1) = ((MR_Box) (Var_22));
          MR_hl_field(2, GoalExpr_13, 2) = ((MR_Box) (ArgVars_10));
          MR_hl_field(2, GoalExpr_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, GoalExpr_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, GoalExpr_13, 5) = ((MR_Box) (SymName_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
        }
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word SymName_7,
  MR_Word UserArity_8,
  MR_Word STATE_VARIABLE_QualInfo_0_13,
  MR_Word * STATE_VARIABLE_QualInfo_14)
{
  MR_Integer UserArityInt_10 = (MR_Integer) (UserArity_8);
  MR_Word Id_11;
  MR_Word UsedItemType_12;
  MR_Word MQInfo0_16;
  MR_Word MaybeRecompInfo0_17;

  {
    Id_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_11, 0) = ((MR_Box) (SymName_7));
    MR_hl_field(0, Id_11, 1) = ((MR_Box) (UserArityInt_10));
  }
  switch (PredOrFunc_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      UsedItemType_12 = (MR_Integer) 7;
      break;
    case (MR_Integer) 0:
      UsedItemType_12 = (MR_Integer) 6;
      break;
  }
  MQInfo0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 5))));
  parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(MQInfo0_16, &MaybeRecompInfo0_17);
  if ((MaybeRecompInfo0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_QualInfo_14 = STATE_VARIABLE_QualInfo_0_13;
  else
  {
    MR_Word RecompInfo0_18 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_17, 0))));
    MR_Word RecompInfo_19;
    MR_Word MQInfo_20;
    MR_Word Var_21;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_0;

    recompilation__record_uses__record_used_item_5_p_0(UsedItemType_12, Id_11, Id_11, RecompInfo0_18, &RecompInfo_19);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (RecompInfo_19));
    }
    parse_tree__module_qual__mq_info__mq_info_set_recompilation_info_3_p_0(Var_21, MQInfo0_16, &MQInfo_20);
    Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 2))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 3))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 4))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_13, 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_QualInfo_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_20));
      MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(
  MR_Word Var_9,
  MR_Word RHS_10,
  MR_Word Context_11,
  MR_Word MainContext_12,
  MR_Word SubContext_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_QualInfo_0_16,
  MR_Word * STATE_VARIABLE_QualInfo_17)
{
  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(Var_9, RHS_10, Context_11, MainContext_12, SubContext_13, (MR_Integer) 0, Goal_14, STATE_VARIABLE_QualInfo_0_16, STATE_VARIABLE_QualInfo_17);
}

void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(
  MR_Word Var_10,
  MR_Word RHS_11,
  MR_Word Context_12,
  MR_Word MainContext_13,
  MR_Word SubContext_14,
  MR_Word Purity_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_QualInfo_0_29,
  MR_Word * STATE_VARIABLE_QualInfo_30)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_26 = ((MR_Word) ((MR_hl_field(1, RHS_11, 0))));
        MR_Word DuCtor_31;

        succeeded = ((MR_tag((MR_Word) ConsId_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          DuCtor_31 = (MR_Word) (MR_body((MR_Word) (ConsId_26), (MR_Integer) 1));
          {
            MR_Word SymName_32 = ((MR_Word) ((MR_hl_field(0, DuCtor_31, 0))));
            MR_Integer Arity_33 = ((MR_Integer) ((MR_hl_field(0, DuCtor_31, 1))));
            MR_Word Id_35;
            MR_Word MQInfo0_38;
            MR_Word MaybeRecompInfo0_39;

            {
              Id_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Id_35, 0) = ((MR_Box) (SymName_32));
              MR_hl_field(0, Id_35, 1) = ((MR_Box) (Arity_33));
            }
            MQInfo0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 5))));
            parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(MQInfo0_38, &MaybeRecompInfo0_39);
            if ((MaybeRecompInfo0_39 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
            else
            {
              MR_Word RecompInfo0_40 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_39, 0))));
              MR_Word RecompInfo_41;
              MR_Word MQInfo_42;
              MR_Word Var_43;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Unsigned packed_word_0;

              recompilation__record_uses__record_used_item_5_p_0((MR_Integer) 5, Id_35, Id_35, RecompInfo0_40, &RecompInfo_41);
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (RecompInfo_41));
              }
              parse_tree__module_qual__mq_info__mq_info_set_recompilation_info_3_p_0(Var_43, MQInfo0_38, &MQInfo_42);
              Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 0))));
              Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 1))));
              Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 2))));
              Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 3))));
              Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 4))));
              packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_29, 6)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_QualInfo_30 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_56));
                MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_42));
                MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
              }
            }
          }
        }
        else
          *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_QualInfo_30 = STATE_VARIABLE_QualInfo_0_29;
      break;
  }
  hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var_10, RHS_11, Context_12, MainContext_13, SubContext_14, Purity_15, Goal_16);
}

void MR_CALL 
hlds__make_hlds__qual_info__process_type_qualification_8_p_0(
  MR_Word Var_9,
  MR_Word Type0_10,
  MR_Word VarSet_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_QualInfo_0_37,
  MR_Word * STATE_VARIABLE_QualInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word TypeEqvMap_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 0))));
  MR_Word TVarSet0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 1))));
  MR_Word TVarRenaming0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 2))));
  MR_Word TVarNameMap0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 3))));
  MR_Word VarTypes0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 4))));
  MR_Word MQInfo0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 5))));
  MR_Word MaybeOptImported_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word Type1_24;
  MR_Word MQInfo_25;
  MR_Word TVars_26;
  MR_Word TVarSet1_27;
  MR_Word TVarNameMap_28;
  MR_Word TVarRenaming_29;
  MR_Word Type2_30;
  MR_Word Type_32;
  MR_Word TVarSet_34;
  MR_Word VarTypes_36;
  MR_Word STATE_VARIABLE_Specs_1_42;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_37, 6)));
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Type0_43;

  switch (MaybeOptImported_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__module_qual__qualify_items__qualify_type_qualification_8_p_0((MR_Integer) 0, Context_12, Type0_10, &Type1_24, MQInfo0_20, &MQInfo_25, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_1_42);
      break;
    case (MR_Integer) 1:
      {
        Type1_24 = Type0_10;
        MQInfo_25 = MQInfo0_20;
        STATE_VARIABLE_Specs_1_42 = STATE_VARIABLE_Specs_0_39;
      }
      break;
  }
  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type1_24, &TVars_26);
  parse_tree__prog_util__get_new_tvars_8_p_0(TVars_26, VarSet_11, TVarSet0_16, &TVarSet1_27, TVarNameMap0_18, &TVarNameMap_28, TVarRenaming0_17, &TVarRenaming_29);
  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(TVarRenaming_29, Type1_24, &Type2_30);
  parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_15, Type2_30, &Type_32, &Var_33, TVarSet1_27, &TVarSet_34, (MR_Word) ((MR_Unsigned) 0U), &Var_35);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_19, Var_9, &Type0_43);
  if (succeeded)
  {
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_32, Type0_43);
    if (succeeded)
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_1_42;
    else
    {
      MR_Word Pieces_44;
      MR_Word Spec_45;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__qual_info_scalar_common_1[6])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &hlds__make_hlds__qual_info_scalar_common_1[7])));
      Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__qual_info_scalar_common_1[4])), Var_50);
      {
        Spec_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.qual_info.update_var_types\'/7"));
        MR_hl_field(0, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_45, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_45, 4) = ((MR_Box) (Pieces_44));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_40 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_45));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_42));
      }
    }
    VarTypes_36 = VarTypes0_19;
  }
  else
  {
    parse_tree__vartypes__add_var_type_4_p_0(Var_9, Type_32, VarTypes0_19, &VarTypes_36);
    *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_1_42;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_QualInfo_38 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeEqvMap_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (TVarRenaming_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarNameMap_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarTypes_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_25));
    MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(
  MR_Word QualInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word MQInfo_6 = ((MR_Word) ((MR_hl_field(0, QualInfo_4, 5))));
  MR_Word RecompInfo_7;

  parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(MQInfo_6, &RecompInfo_7);
  hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(RecompInfo_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

void MR_CALL 
hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(
  MR_Word Pred_4,
  MR_Word STATE_VARIABLE_QualInfo_0_11,
  MR_Word * STATE_VARIABLE_QualInfo_12)
{
  MR_Word MQInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 5))));
  MR_Word MaybeRecompInfo0_7;

  parse_tree__module_qual__mq_info__mq_info_get_recompilation_info_2_p_0(MQInfo0_6, &MaybeRecompInfo0_7);
  if ((MaybeRecompInfo0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_QualInfo_12 = STATE_VARIABLE_QualInfo_0_11;
  else
  {
    MR_Word RecompInfo0_8 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_7, 0))));
    MR_Word RecompInfo_9;
    MR_Word MQInfo_10;
    MR_Word Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
    MR_Box conv1_RecompInfo_9;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Unsigned packed_word_0;

    func_0(((MR_Box) (Pred_4)), ((MR_Box) (RecompInfo0_8)), &conv1_RecompInfo_9);
    RecompInfo_9 = ((MR_Word) (conv1_RecompInfo_9));
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (RecompInfo_9));
    }
    parse_tree__module_qual__mq_info__mq_info_set_recompilation_info_3_p_0(Var_13, MQInfo0_6, &MQInfo_10);
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 3))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 4))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_11, 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_QualInfo_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_10));
      MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) >> 1)) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (Var_14) << 2)) | (((((MR_Unsigned) (Var_15) << 1)) | (MR_Unsigned) (X_4)))));
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (Var_14) << 2)) | (((((MR_Unsigned) (X_4) << 1)) | (MR_Unsigned) (Var_16)))));
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_explicit_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, 6))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, 6))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Info_3, 6))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 5))));
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_explicit_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
}

void MR_CALL 
hlds__make_hlds__qual_info__update_qual_info_6_p_0(
  MR_Word TVarNameMap_7,
  MR_Word TVarSet_8,
  MR_Word VarTypes_9,
  MR_Word MaybeOptImported_10,
  MR_Word STATE_VARIABLE_QualInfo_0_22,
  MR_Word * STATE_VARIABLE_QualInfo_23)
{
  MR_Word TypeEqvMap_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_22, 0))));
  MR_Word MQInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_QualInfo_0_22, 5))));
  MR_Word Renaming_21;

  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Renaming_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_QualInfo_23 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeEqvMap_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Renaming_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarNameMap_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarTypes_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_17));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) (MaybeOptImported_10) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__init_qual_info_3_p_0(
  MR_Word MQInfo_4,
  MR_Word TypeEqvMap_5,
  MR_Word * QualInfo_6)
{
  MR_Word TVarSet_7;
  MR_Word Renaming_8;
  MR_Word Index_9;
  MR_Word VarTypes_10;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_7);
  mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Renaming_8);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Index_9);
  parse_tree__vartypes__init_vartypes_1_p_0(&VarTypes_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *QualInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeEqvMap_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Renaming_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Index_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarTypes_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (MQInfo_4));
    MR_hl_field(0, base, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__qual_info____Compare____qual_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__qual_info__init(void)
{
}

void mercury__hlds__make_hlds__qual_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0);
}

void mercury__hlds__make_hlds__qual_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__qual_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.qual_info.
