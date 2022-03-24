/*
** Automatically generated from `qual_info.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-24
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"




static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match prior qualification."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__qual_info_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: explicit type qualification"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__qual_info_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[0])),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[0]))
  },
  /* row 2 */
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



static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0[9] = {
  (MR_String) "qual_type_eqv_map",
  (MR_String) "qual_tvarset",
  (MR_String) "qual_tvar_renaming",
  (MR_String) "qual_tvar_name_map",
  (MR_String) "qual_vartypes",
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

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1] = {
  &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[1] = {
  &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

static const MR_Integer hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.qual_info",
  (MR_String) "qual_info",
  {     hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0 },
  {     hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0 },
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
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
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
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                parse_tree__module_qual____Compare____mq_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
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
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
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
}

MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0(
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
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeCtorInfo_27_27;
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
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

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
              TypeCtorInfo_27_27 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = parse_tree__module_qual____Unify____mq_info_0_0(ArgX6_13, ArgY6_14);
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
}

void MR_CALL 
hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(
  MR_Word PredId_9,
  MR_Word PredOrFunc_10,
  MR_Word SymName_11,
  MR_Word Args_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19)
{
  {
    MR_Integer Arity_16;
    MR_Integer OrigArity_17;

    hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(PredId_9, PredOrFunc_10, SymName_11, Args_12, GoalInfo_13, Goal_14);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), Args_12, &Arity_16);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_10, &OrigArity_17, Arity_16);
    hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(PredOrFunc_10, SymName_11, OrigArity_17, STATE_VARIABLE_QualInfo_0_18, STATE_VARIABLE_QualInfo_19);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(
  MR_Word PredId_7,
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word Args_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12)
{
  switch (PredOrFunc_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_14;
        MR_Word RetArg_15;
        MR_Integer Arity_16;
        MR_Word TypeCtor_17;
        MR_Word ConsId_18;
        MR_Word Context_19;
        MR_Word RHS_20;
        MR_Word Var_25;
        MR_Word GoalExpr_29;
        MR_Box conv0_RetArg_15;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), Args_10, &FuncArgs_14, &conv0_RetArg_15);
        RetArg_15 = ((MR_Word) (conv0_RetArg_15));
        mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[1]), FuncArgs_14, &Arity_16);
        TypeCtor_17 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (SymName_9));
          MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) (Arity_16));
          MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_17));
        }
        Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        {
          RHS_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RHS_20, 0) = ((MR_Box) (ConsId_18));
          MR_hl_field(MR_mktag(1), RHS_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), RHS_20, 2) = ((MR_Box) (FuncArgs_14));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(RetArg_15, RHS_20, Context_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_25);
        GoalExpr_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_29));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word GoalExpr_13;
        MR_Integer Var_26;

        Var_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 0) = ((MR_Box) (PredId_7));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 1) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 2) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), GoalExpr_13, 5) = ((MR_Box) (SymName_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
        }
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(
  MR_Word PredOrFunc_6,
  MR_Word SymName_7,
  MR_Integer Arity_8,
  MR_Word STATE_VARIABLE_QualInfo_0_12,
  MR_Word * STATE_VARIABLE_QualInfo_13)
{
  {
    MR_Word Id_10;
    MR_Word UsedItemType_11;
    MR_Word MQInfo0_23;
    MR_Word MaybeRecompInfo0_24;

    {
      Id_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_10, 0) = ((MR_Box) (SymName_7));
      MR_hl_field(MR_mktag(0), Id_10, 1) = ((MR_Box) (Arity_8));
    }
    switch (PredOrFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        UsedItemType_11 = (MR_Integer) 7;
        break;
      case (MR_Integer) 0:
        UsedItemType_11 = (MR_Integer) 6;
        break;
    }
    MQInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 5))));
    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_23, &MaybeRecompInfo0_24);
    if ((MaybeRecompInfo0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_QualInfo_13 = STATE_VARIABLE_QualInfo_0_12;
    else
    {
      MR_Word RecompInfo0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo0_24, (MR_Integer) 0))));
      MR_Word RecompInfo_26;
      MR_Word MQInfo_27;
      MR_Word Var_28;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Unsigned packed_word_1;

      recompilation__record_used_item_5_p_0(UsedItemType_11, Id_10, Id_10, RecompInfo0_25, &RecompInfo_26);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (RecompInfo_26));
      }
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(Var_28, MQInfo0_23, &MQInfo_27);
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 2))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 3))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 4))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_12, (MR_Integer) 6)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_QualInfo_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_27));
        MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_1);
      }
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
  MR_Word STATE_VARIABLE_QualInfo_0_30,
  MR_Word * STATE_VARIABLE_QualInfo_31)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_QualInfo_31 = STATE_VARIABLE_QualInfo_0_30;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_11, (MR_Integer) 0))));
          MR_Word SymName_37;
          MR_Integer Arity_38;

          succeeded = ((((MR_tag((MR_Word) ConsId_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            SymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 1))));
            Arity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 2))));
            {
              MR_Word Id_40;
              MR_Word MQInfo0_51;
              MR_Word MaybeRecompInfo0_52;

              {
                Id_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Id_40, 0) = ((MR_Box) (SymName_37));
                MR_hl_field(MR_mktag(0), Id_40, 1) = ((MR_Box) (Arity_38));
              }
              MQInfo0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 5))));
              parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_51, &MaybeRecompInfo0_52);
              if ((MaybeRecompInfo0_52 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_QualInfo_31 = STATE_VARIABLE_QualInfo_0_30;
              else
              {
                MR_Word RecompInfo0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo0_52, (MR_Integer) 0))));
                MR_Word RecompInfo_54;
                MR_Word MQInfo_55;
                MR_Word Var_56;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Unsigned packed_word_2;

                recompilation__record_used_item_5_p_0((MR_Integer) 5, Id_40, Id_40, RecompInfo0_53, &RecompInfo_54);
                {
                  Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (RecompInfo_54));
                }
                parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(Var_56, MQInfo0_51, &MQInfo_55);
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 0))));
                Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 1))));
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 2))));
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 3))));
                Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 4))));
                packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_30, (MR_Integer) 6)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_QualInfo_31 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_76));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_55));
                  MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_2);
                }
              }
            }
          }
          else
            *STATE_VARIABLE_QualInfo_31 = STATE_VARIABLE_QualInfo_0_30;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_QualInfo_31 = STATE_VARIABLE_QualInfo_0_30;
        break;
    }
    hlds__make_goal__create_atomic_complicated_unification_7_p_0(Var_10, RHS_11, Context_12, MainContext_13, SubContext_14, Purity_15, Goal_16);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__process_type_qualification_10_p_0(
  MR_Word Var_11,
  MR_Word Type0_12,
  MR_Word VarSet_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  {
    MR_bool succeeded;
    MR_Word TypeEqvMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 0))));
    MR_Word TVarSet0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 1))));
    MR_Word TVarRenaming0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 2))));
    MR_Word TVarNameMap0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 3))));
    MR_Word VarTypes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 4))));
    MR_Word MQInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 5))));
    MR_Word MaybeOptImported_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
    MR_Word Type1_27;
    MR_Word MQInfo_28;
    MR_Word TVars_29;
    MR_Word TVarSet1_30;
    MR_Word TVarNameMap_31;
    MR_Word TVarRenaming_32;
    MR_Word Type2_33;
    MR_Word Type_35;
    MR_Word TVarSet_37;
    MR_Word VarTypes_39;
    MR_Word STATE_VARIABLE_Specs_47_47;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 6)));
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Type0_59;

    switch (MaybeOptImported_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_qual__qualify_type_qualification_8_p_0((MR_Integer) 0, Context_14, Type0_12, &Type1_27, MQInfo0_23, &MQInfo_28, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_47_47);
        break;
      case (MR_Integer) 1:
        {
          Type1_27 = Type0_12;
          MQInfo_28 = MQInfo0_23;
          STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_0_44;
        }
        break;
    }
    parse_tree__prog_type__type_vars_2_p_0(Type1_27, &TVars_29);
    parse_tree__prog_util__get_new_tvars_8_p_0(TVars_29, VarSet_13, TVarSet0_19, &TVarSet1_30, TVarNameMap0_21, &TVarNameMap_31, TVarRenaming0_20, &TVarRenaming_32);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_32, Type1_27, &Type2_33);
    parse_tree__equiv_type__replace_in_type_8_p_0(TypeEqvMap_18, Type2_33, &Type_35, &Var_36, TVarSet1_30, &TVarSet_37, (MR_Word) ((MR_Unsigned) 0U), &Var_38);
    succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_22, Var_11, &Type0_59);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_35, Type0_59);
      if (succeeded)
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_47_47;
      else
      {
        MR_Word Spec_61;

        {
          Spec_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.qual_info.update_var_types\'/7"));
          MR_hl_field(MR_mktag(1), Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_61, 3) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(1), Spec_61, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[7])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_61));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_47_47));
        }
      }
      VarTypes_39 = VarTypes0_22;
    }
    else
    {
      hlds__vartypes__add_var_type_4_p_0(Var_11, Type_35, VarTypes0_22, &VarTypes_39);
      *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_47_47;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_QualInfo_43 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeEqvMap_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TVarRenaming_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarNameMap_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarTypes_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_28));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_0);
    }
    *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(
  MR_Word QualInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word MQInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualInfo_4, (MR_Integer) 5))));
    MR_Word RecompInfo_7;

    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo_6, &RecompInfo_7);
    hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(RecompInfo_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(
  MR_Word Pred_4,
  MR_Word STATE_VARIABLE_QualInfo_0_11,
  MR_Word * STATE_VARIABLE_QualInfo_12)
{
  {
    MR_Word MQInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5))));
    MR_Word MaybeRecompInfo0_7;

    parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(MQInfo0_6, &MaybeRecompInfo0_7);
    if ((MaybeRecompInfo0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_QualInfo_12 = STATE_VARIABLE_QualInfo_0_11;
    else
    {
      MR_Word RecompInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo0_7, (MR_Integer) 0))));
      MR_Word RecompInfo_9;
      MR_Word MQInfo_10;
      MR_Word Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_4, (MR_Integer) 1))));
      MR_Box conv1_RecompInfo_9;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Unsigned packed_word_1;

      func_0(((MR_Box) (Pred_4)), ((MR_Box) (RecompInfo0_8)), &conv1_RecompInfo_9);
      RecompInfo_9 = ((MR_Word) (conv1_RecompInfo_9));
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (RecompInfo_9));
      }
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(Var_13, MQInfo0_6, &MQInfo_10);
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_QualInfo_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_10));
        MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_1);
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) (X_4)));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (X_4) << 1))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))));
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
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
  {
    MR_Word TypeEqvMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 0))));
    MR_Word MQInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 5))));
    MR_Word Renaming_21;

    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Renaming_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_QualInfo_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeEqvMap_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Renaming_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarNameMap_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarTypes_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_17));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (((((MR_Unsigned) (MaybeOptImported_10) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__init_qual_info_3_p_0(
  MR_Word MQInfo_4,
  MR_Word TypeEqvMap_5,
  MR_Word * QualInfo_6)
{
  {
    MR_Word TVarSet_7;
    MR_Word Renaming_8;
    MR_Word Index_9;
    MR_Word VarTypes_10;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_7);
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Renaming_8);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__qual_info_scalar_common_1[0]), &Index_9);
    hlds__vartypes__init_vartypes_1_p_0(&VarTypes_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *QualInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeEqvMap_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Renaming_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Index_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarTypes_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MQInfo_4));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__qual_info____Compare____qual_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
