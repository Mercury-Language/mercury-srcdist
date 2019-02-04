/*
** Automatically generated from `qual_info.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.make_hlds.qual_info. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__qual_info__init
ENDINIT
*/

#include "hlds.make_hlds.qual_info.mih"


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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_1,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
  MR_Box * hlds__make_hlds__qual_info__wrapper_arg_1,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_1[9][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match prior qualification."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__qual_info_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: explicit type qualification"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__qual_info_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[4][3] = {
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
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__qual_info_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[7])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 = {
  (MR_String) "qual_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_locns_qual_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1] = {
  &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.qual_info",
  (MR_String) "qual_info",
  {     hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0 },
  {     hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0
};

void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0(
  MR_Word * hlds__make_hlds__qual_info__HeadVar__1_1,
  MR_Word hlds__make_hlds__qual_info__HeadVar__2_2,
  MR_Word hlds__make_hlds__qual_info__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__qual_info__succeeded;
    MR_Integer hlds__make_hlds__qual_info__CastX_30 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__2_2;
    MR_Integer hlds__make_hlds__qual_info__CastY_31 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__3_3;

    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__CastX_30 == hlds__make_hlds__qual_info__CastY_31);
    if (hlds__make_hlds__qual_info__succeeded)
      *hlds__make_hlds__qual_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__qual_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__qual_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__qual_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__qual_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__qual_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__qual_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__qual_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__qual_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__qual_info__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__qual_info__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__qual_info__ArgX7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY7_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__Var_22;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[0], &hlds__make_hlds__qual_info__Var_22, ((MR_Box) (hlds__make_hlds__qual_info__ArgX1_4)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY1_5)));
        }
        hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_22 == (MR_Integer) 0);
        hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
        if (hlds__make_hlds__qual_info__succeeded)
          *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_22;
        else
          {
            MR_Word hlds__make_hlds__qual_info__Var_23;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[2], &hlds__make_hlds__qual_info__Var_23, ((MR_Box) (hlds__make_hlds__qual_info__ArgX2_6)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY2_7)));
            }
            hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_23 == (MR_Integer) 0);
            hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
            if (hlds__make_hlds__qual_info__succeeded)
              *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_23;
            else
              {
                MR_Word hlds__make_hlds__qual_info__Var_24;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[1], &hlds__make_hlds__qual_info__Var_24, ((MR_Box) (hlds__make_hlds__qual_info__ArgX3_8)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY3_9)));
                }
                hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_24 == (MR_Integer) 0);
                hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                if (hlds__make_hlds__qual_info__succeeded)
                  *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_24;
                else
                  {
                    MR_Word hlds__make_hlds__qual_info__Var_25;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[2], &hlds__make_hlds__qual_info__Var_25, ((MR_Box) (hlds__make_hlds__qual_info__ArgX4_10)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY4_11)));
                    }
                    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_25 == (MR_Integer) 0);
                    hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                    if (hlds__make_hlds__qual_info__succeeded)
                      *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_25;
                    else
                      {
                        MR_Word hlds__make_hlds__qual_info__Var_26;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[3], &hlds__make_hlds__qual_info__Var_26, ((MR_Box) (hlds__make_hlds__qual_info__ArgX5_12)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY5_13)));
                        }
                        hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_26 == (MR_Integer) 0);
                        hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                        if (hlds__make_hlds__qual_info__succeeded)
                          *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_26;
                        else
                          {
                            MR_Word hlds__make_hlds__qual_info__Var_27;

                            {
                              parse_tree__module_qual____Compare____mq_info_0_0(&hlds__make_hlds__qual_info__Var_27, hlds__make_hlds__qual_info__ArgX6_14, hlds__make_hlds__qual_info__ArgY6_15);
                            }
                            hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_27 == (MR_Integer) 0);
                            hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                            if (hlds__make_hlds__qual_info__succeeded)
                              *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_27;
                            else
                              {
                                MR_Word hlds__make_hlds__qual_info__Var_28;
                                MR_Integer hlds__make_hlds__qual_info__Var_41 = (MR_Integer) hlds__make_hlds__qual_info__ArgX7_16;
                                MR_Integer hlds__make_hlds__qual_info__Var_42 = (MR_Integer) hlds__make_hlds__qual_info__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__qual_info__Var_28, hlds__make_hlds__qual_info__Var_41, hlds__make_hlds__qual_info__Var_42);
                                }
                                hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_28 == (MR_Integer) 0);
                                hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                                if (hlds__make_hlds__qual_info__succeeded)
                                  *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_28;
                                else
                                  {
                                    MR_Word hlds__make_hlds__qual_info__Var_29;
                                    MR_Integer hlds__make_hlds__qual_info__Var_43 = (MR_Integer) hlds__make_hlds__qual_info__ArgX8_18;
                                    MR_Integer hlds__make_hlds__qual_info__Var_44 = (MR_Integer) hlds__make_hlds__qual_info__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__qual_info__Var_29, hlds__make_hlds__qual_info__Var_43, hlds__make_hlds__qual_info__Var_44);
                                    }
                                    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Var_29 == (MR_Integer) 0);
                                    hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
                                    if (hlds__make_hlds__qual_info__succeeded)
                                      *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__Var_29;
                                    else
                                      {
                                        MR_Integer hlds__make_hlds__qual_info__Var_45 = (MR_Integer) hlds__make_hlds__qual_info__ArgX9_20;
                                        MR_Integer hlds__make_hlds__qual_info__Var_46 = (MR_Integer) hlds__make_hlds__qual_info__ArgY9_21;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__qual_info__HeadVar__1_1, hlds__make_hlds__qual_info__Var_45, hlds__make_hlds__qual_info__Var_46);
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
  MR_Word hlds__make_hlds__qual_info__HeadVar__1_1,
  MR_Word hlds__make_hlds__qual_info__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__qual_info__succeeded;
    MR_Integer hlds__make_hlds__qual_info__CastX_21 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__1_1;
    MR_Integer hlds__make_hlds__qual_info__CastY_22 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__2_2;

    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__CastX_21 == hlds__make_hlds__qual_info__CastY_22);
    if (hlds__make_hlds__qual_info__succeeded)
      hlds__make_hlds__qual_info__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__qual_info__TypeInfo_24_24;
        MR_Word hlds__make_hlds__qual_info__TypeInfo_25_25;
        MR_Word hlds__make_hlds__qual_info__TypeInfo_26_26;
        MR_Word hlds__make_hlds__qual_info__TypeInfo_27_27;
        MR_Word hlds__make_hlds__qual_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__qual_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__qual_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__qual_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__qual_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__qual_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__qual_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__qual_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__qual_info__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__qual_info__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__qual_info__ArgX7_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__qual_info__ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        {
          hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[0], ((MR_Box) (hlds__make_hlds__qual_info__ArgX1_3)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY1_4)));
        }
        if (hlds__make_hlds__qual_info__succeeded)
          {
            hlds__make_hlds__qual_info__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[2];
            {
              hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__qual_info__ArgX2_5)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY2_6)));
            }
            if (hlds__make_hlds__qual_info__succeeded)
              {
                hlds__make_hlds__qual_info__TypeInfo_25_25 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[1];
                {
                  hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_25_25, ((MR_Box) (hlds__make_hlds__qual_info__ArgX3_7)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY3_8)));
                }
                if (hlds__make_hlds__qual_info__succeeded)
                  {
                    hlds__make_hlds__qual_info__TypeInfo_26_26 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[2];
                    {
                      hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_26_26, ((MR_Box) (hlds__make_hlds__qual_info__ArgX4_9)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY4_10)));
                    }
                    if (hlds__make_hlds__qual_info__succeeded)
                      {
                        hlds__make_hlds__qual_info__TypeInfo_27_27 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[3];
                        {
                          hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_27_27, ((MR_Box) (hlds__make_hlds__qual_info__ArgX5_11)), ((MR_Box) (hlds__make_hlds__qual_info__ArgY5_12)));
                        }
                        if (hlds__make_hlds__qual_info__succeeded)
                          {
                            {
                              hlds__make_hlds__qual_info__succeeded = parse_tree__module_qual____Unify____mq_info_0_0(hlds__make_hlds__qual_info__ArgX6_13, hlds__make_hlds__qual_info__ArgY6_14);
                            }
                            if (hlds__make_hlds__qual_info__succeeded)
                              {
                                hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__ArgX7_15 == hlds__make_hlds__qual_info__ArgY7_16);
                                if (hlds__make_hlds__qual_info__succeeded)
                                  {
                                    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__ArgX8_17 == hlds__make_hlds__qual_info__ArgY8_18);
                                    if (hlds__make_hlds__qual_info__succeeded)
                                      hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__ArgX9_19 == hlds__make_hlds__qual_info__ArgY9_20);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__make_hlds__qual_info__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(
  MR_Word hlds__make_hlds__qual_info__PredId_9,
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_10,
  MR_Word hlds__make_hlds__qual_info__SymName_11,
  MR_Word hlds__make_hlds__qual_info__Args_12,
  MR_Word hlds__make_hlds__qual_info__GoalInfo_13,
  MR_Word * hlds__make_hlds__qual_info__Goal_14,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_18,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_19)
{
  {
    MR_Integer hlds__make_hlds__qual_info__Arity_16;
    MR_Integer hlds__make_hlds__qual_info__OrigArity_17;

    {
      hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(hlds__make_hlds__qual_info__PredId_9, hlds__make_hlds__qual_info__PredOrFunc_10, hlds__make_hlds__qual_info__SymName_11, hlds__make_hlds__qual_info__Args_12, hlds__make_hlds__qual_info__GoalInfo_13, hlds__make_hlds__qual_info__Goal_14);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[1], hlds__make_hlds__qual_info__Args_12, &hlds__make_hlds__qual_info__Arity_16);
    }
    {
      parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__qual_info__PredOrFunc_10, &hlds__make_hlds__qual_info__OrigArity_17, hlds__make_hlds__qual_info__Arity_16);
    }
    {
      hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(hlds__make_hlds__qual_info__PredOrFunc_10, hlds__make_hlds__qual_info__SymName_11, hlds__make_hlds__qual_info__OrigArity_17, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_18, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_19);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(
  MR_Word hlds__make_hlds__qual_info__PredId_7,
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_8,
  MR_Word hlds__make_hlds__qual_info__SymName_9,
  MR_Word hlds__make_hlds__qual_info__Args_10,
  MR_Word hlds__make_hlds__qual_info__GoalInfo_11,
  MR_Word * hlds__make_hlds__qual_info__Goal_12)
{
  switch (hlds__make_hlds__qual_info__PredOrFunc_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word hlds__make_hlds__qual_info__TypeInfo_30_30 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[1];
        MR_Word hlds__make_hlds__qual_info__FuncArgs_14;
        MR_Word hlds__make_hlds__qual_info__RetArg_15;
        MR_Integer hlds__make_hlds__qual_info__Arity_16;
        MR_Word hlds__make_hlds__qual_info__TypeCtor_17;
        MR_Word hlds__make_hlds__qual_info__ConsId_18;
        MR_Word hlds__make_hlds__qual_info__Context_19;
        MR_Word hlds__make_hlds__qual_info__RHS_20;
        MR_Word hlds__make_hlds__qual_info__Var_25;
        MR_Word hlds__make_hlds__qual_info__GoalExpr_29;
        MR_Box hlds__make_hlds__qual_info__conv0_RetArg_15;
        MR_Word hlds__make_hlds__qual_info__Var_21;

        {
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__qual_info__TypeInfo_30_30, hlds__make_hlds__qual_info__Args_10, &hlds__make_hlds__qual_info__FuncArgs_14, &hlds__make_hlds__qual_info__conv0_RetArg_15);
        }
        hlds__make_hlds__qual_info__RetArg_15 = ((MR_Word) hlds__make_hlds__qual_info__conv0_RetArg_15);
        {
          mercury__list__length_2_p_0(hlds__make_hlds__qual_info__TypeInfo_30_30, hlds__make_hlds__qual_info__FuncArgs_14, &hlds__make_hlds__qual_info__Arity_16);
        }
        {
          hlds__make_hlds__qual_info__TypeCtor_17 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
        {
          hlds__make_hlds__qual_info__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 1) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_16));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TypeCtor_17));
        }
        {
          hlds__make_hlds__qual_info__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__qual_info__GoalInfo_11);
        }
        {
          hlds__make_hlds__qual_info__RHS_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 0) = ((MR_Box) (hlds__make_hlds__qual_info__ConsId_18));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 2) = ((MR_Box) (hlds__make_hlds__qual_info__FuncArgs_14));
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__qual_info__RetArg_15, hlds__make_hlds__qual_info__RHS_20, hlds__make_hlds__qual_info__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__qual_info__Var_25);
        }
        hlds__make_hlds__qual_info__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Var_25, (MR_Integer) 0)));
        hlds__make_hlds__qual_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Var_25, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__qual_info__Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__GoalExpr_29));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__GoalInfo_11));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word hlds__make_hlds__qual_info__GoalExpr_13;
        MR_Integer hlds__make_hlds__qual_info__Var_26;

        {
          hlds__make_hlds__qual_info__Var_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
        {
          hlds__make_hlds__qual_info__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 0) = ((MR_Box) (hlds__make_hlds__qual_info__PredId_7));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_26));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Args_10));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 5) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__qual_info__Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__GoalExpr_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__GoalInfo_11));
        }
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_6,
  MR_Word hlds__make_hlds__qual_info__SymName_7,
  MR_Integer hlds__make_hlds__qual_info__Arity_8,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12)
{
  {
    MR_Word hlds__make_hlds__qual_info__Id_10;
    MR_Word hlds__make_hlds__qual_info__Var_15;
    MR_Word hlds__make_hlds__qual_info__MQInfo0_23;
    MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_24;
    MR_Word hlds__make_hlds__qual_info__Var_32;
    MR_Word hlds__make_hlds__qual_info__Var_33;
    MR_Word hlds__make_hlds__qual_info__Var_34;
    MR_Word hlds__make_hlds__qual_info__Var_35;
    MR_Word hlds__make_hlds__qual_info__Var_36;
    MR_Word hlds__make_hlds__qual_info__Var_37;
    MR_Word hlds__make_hlds__qual_info__Var_38;
    MR_Word hlds__make_hlds__qual_info__Var_39;

    {
      hlds__make_hlds__qual_info__Id_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_10, 0) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_10, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_8));
    }
    {
      hlds__make_hlds__qual_info__Var_15 = recompilation__pred_or_func_to_item_type_1_f_0(hlds__make_hlds__qual_info__PredOrFunc_6);
    }
    hlds__make_hlds__qual_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
    hlds__make_hlds__qual_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
    hlds__make_hlds__qual_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
    hlds__make_hlds__qual_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
    hlds__make_hlds__qual_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
    hlds__make_hlds__qual_info__MQInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
    hlds__make_hlds__qual_info__Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    {
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MaybeRecompInfo0_24);
    }
    if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11;
    else
      {
        MR_Word hlds__make_hlds__qual_info__RecompInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_24, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__RecompInfo_26;
        MR_Word hlds__make_hlds__qual_info__MQInfo_27;
        MR_Word hlds__make_hlds__qual_info__Var_28;
        MR_Word hlds__make_hlds__qual_info__Var_45;
        MR_Word hlds__make_hlds__qual_info__Var_46;
        MR_Word hlds__make_hlds__qual_info__Var_47;
        MR_Word hlds__make_hlds__qual_info__Var_48;
        MR_Word hlds__make_hlds__qual_info__Var_49;
        MR_Word hlds__make_hlds__qual_info__Var_51;
        MR_Word hlds__make_hlds__qual_info__Var_52;
        MR_Word hlds__make_hlds__qual_info__Var_53;
        MR_Word hlds__make_hlds__qual_info__Var_50;

        {
          recompilation__record_used_item_5_p_0(hlds__make_hlds__qual_info__Var_15, hlds__make_hlds__qual_info__Id_10, hlds__make_hlds__qual_info__Id_10, hlds__make_hlds__qual_info__RecompInfo0_25, &hlds__make_hlds__qual_info__RecompInfo_26);
        }
        {
          hlds__make_hlds__qual_info__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__Var_28, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_26));
        }
        {
          parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__Var_28, hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MQInfo_27);
        }
        hlds__make_hlds__qual_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
        hlds__make_hlds__qual_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
        hlds__make_hlds__qual_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
        hlds__make_hlds__qual_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
        hlds__make_hlds__qual_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
        hlds__make_hlds__qual_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
        hlds__make_hlds__qual_info__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) & (MR_Integer) 1);
        hlds__make_hlds__qual_info__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        hlds__make_hlds__qual_info__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_45));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_46));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_47));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_48));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_49));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_27));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_51 | ((((hlds__make_hlds__qual_info__Var_52 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_53 << (MR_Integer) 2)))))));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(
  MR_Word hlds__make_hlds__qual_info__Var_9,
  MR_Word hlds__make_hlds__qual_info__RHS_10,
  MR_Word hlds__make_hlds__qual_info__Context_11,
  MR_Word hlds__make_hlds__qual_info__MainContext_12,
  MR_Word hlds__make_hlds__qual_info__SubContext_13,
  MR_Word * hlds__make_hlds__qual_info__Goal_14,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_16,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_17)
{
  {
    {
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__qual_info__Var_9, hlds__make_hlds__qual_info__RHS_10, hlds__make_hlds__qual_info__Context_11, hlds__make_hlds__qual_info__MainContext_12, hlds__make_hlds__qual_info__SubContext_13, (MR_Integer) 0, hlds__make_hlds__qual_info__Goal_14, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_17);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(
  MR_Word hlds__make_hlds__qual_info__Var_10,
  MR_Word hlds__make_hlds__qual_info__RHS_11,
  MR_Word hlds__make_hlds__qual_info__Context_12,
  MR_Word hlds__make_hlds__qual_info__MainContext_13,
  MR_Word hlds__make_hlds__qual_info__SubContext_14,
  MR_Word hlds__make_hlds__qual_info__Purity_15,
  MR_Word * hlds__make_hlds__qual_info__Goal_16,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32)
{
  {
    MR_bool hlds__make_hlds__qual_info__succeeded;

    switch (MR_tag((MR_Word) hlds__make_hlds__qual_info__RHS_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__qual_info__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__qual_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__qual_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 2)));
          MR_Word hlds__make_hlds__qual_info__SymName_38;
          MR_Integer hlds__make_hlds__qual_info__Arity_39;
          MR_Word hlds__make_hlds__qual_info__Var_40;

          hlds__make_hlds__qual_info__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__qual_info__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__make_hlds__qual_info__succeeded)
            {
              hlds__make_hlds__qual_info__SymName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 1)));
              hlds__make_hlds__qual_info__Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 2)));
              hlds__make_hlds__qual_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 3)));
              {
                MR_Word hlds__make_hlds__qual_info__Id_41;
                MR_Word hlds__make_hlds__qual_info__MQInfo0_52;
                MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_53;
                MR_Word hlds__make_hlds__qual_info__Var_61;
                MR_Word hlds__make_hlds__qual_info__Var_62;
                MR_Word hlds__make_hlds__qual_info__Var_63;
                MR_Word hlds__make_hlds__qual_info__Var_64;
                MR_Word hlds__make_hlds__qual_info__Var_65;
                MR_Word hlds__make_hlds__qual_info__Var_66;
                MR_Word hlds__make_hlds__qual_info__Var_67;
                MR_Word hlds__make_hlds__qual_info__Var_68;

                {
                  hlds__make_hlds__qual_info__Id_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_41, 0) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_38));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_41, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_39));
                }
                hlds__make_hlds__qual_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 0)));
                hlds__make_hlds__qual_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 1)));
                hlds__make_hlds__qual_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 2)));
                hlds__make_hlds__qual_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 3)));
                hlds__make_hlds__qual_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 4)));
                hlds__make_hlds__qual_info__MQInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 5)));
                hlds__make_hlds__qual_info__Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) & (MR_Integer) 1);
                hlds__make_hlds__qual_info__Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                hlds__make_hlds__qual_info__Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                {
                  parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_52, &hlds__make_hlds__qual_info__MaybeRecompInfo0_53);
                }
                if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
                else
                  {
                    MR_Word hlds__make_hlds__qual_info__RecompInfo0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_53, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__qual_info__RecompInfo_55;
                    MR_Word hlds__make_hlds__qual_info__MQInfo_56;
                    MR_Word hlds__make_hlds__qual_info__Var_57;
                    MR_Word hlds__make_hlds__qual_info__Var_74;
                    MR_Word hlds__make_hlds__qual_info__Var_75;
                    MR_Word hlds__make_hlds__qual_info__Var_76;
                    MR_Word hlds__make_hlds__qual_info__Var_77;
                    MR_Word hlds__make_hlds__qual_info__Var_78;
                    MR_Word hlds__make_hlds__qual_info__Var_80;
                    MR_Word hlds__make_hlds__qual_info__Var_81;
                    MR_Word hlds__make_hlds__qual_info__Var_82;
                    MR_Word hlds__make_hlds__qual_info__Var_79;

                    {
                      recompilation__record_used_item_5_p_0((MR_Integer) 5, hlds__make_hlds__qual_info__Id_41, hlds__make_hlds__qual_info__Id_41, hlds__make_hlds__qual_info__RecompInfo0_54, &hlds__make_hlds__qual_info__RecompInfo_55);
                    }
                    {
                      hlds__make_hlds__qual_info__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__Var_57, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_55));
                    }
                    {
                      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__Var_57, hlds__make_hlds__qual_info__MQInfo0_52, &hlds__make_hlds__qual_info__MQInfo_56);
                    }
                    hlds__make_hlds__qual_info__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 0)));
                    hlds__make_hlds__qual_info__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 1)));
                    hlds__make_hlds__qual_info__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 2)));
                    hlds__make_hlds__qual_info__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 3)));
                    hlds__make_hlds__qual_info__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 4)));
                    hlds__make_hlds__qual_info__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 5)));
                    hlds__make_hlds__qual_info__Var_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) & (MR_Integer) 1);
                    hlds__make_hlds__qual_info__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    hlds__make_hlds__qual_info__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_74));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_75));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_76));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_77));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_78));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_56));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_80 | ((((hlds__make_hlds__qual_info__Var_81 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_82 << (MR_Integer) 2)))))));
                    }
                  }
              }
            }
          else
            *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
        }
        break;
      case (MR_Integer) 2:
        *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
        break;
    }
    {
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(hlds__make_hlds__qual_info__Var_10, hlds__make_hlds__qual_info__RHS_11, hlds__make_hlds__qual_info__Context_12, hlds__make_hlds__qual_info__MainContext_13, hlds__make_hlds__qual_info__SubContext_14, hlds__make_hlds__qual_info__Purity_15, hlds__make_hlds__qual_info__Goal_16);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__process_type_qualification_10_p_0(
  MR_Word hlds__make_hlds__qual_info__Var_11,
  MR_Word hlds__make_hlds__qual_info__Type0_12,
  MR_Word hlds__make_hlds__qual_info__VarSet_13,
  MR_Word hlds__make_hlds__qual_info__Context_14,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_41,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_43,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_44,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45)
{
  {
    MR_bool hlds__make_hlds__qual_info__succeeded;
    MR_Word hlds__make_hlds__qual_info__TypeEqvMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__TVarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__TVarRenaming0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__TVarNameMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__VarTypes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__MQInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__MaybeOptImported_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__FoundSyntaxError_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__FoundTraceGoal_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_42, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Type1_27;
    MR_Word hlds__make_hlds__qual_info__MQInfo_28;
    MR_Word hlds__make_hlds__qual_info__TVars_29;
    MR_Word hlds__make_hlds__qual_info__TVarSet1_30;
    MR_Word hlds__make_hlds__qual_info__TVarNameMap_31;
    MR_Word hlds__make_hlds__qual_info__TVarRenaming_32;
    MR_Word hlds__make_hlds__qual_info__Type2_33;
    MR_Word hlds__make_hlds__qual_info__Type_35;
    MR_Word hlds__make_hlds__qual_info__TVarSet_37;
    MR_Word hlds__make_hlds__qual_info__VarTypes_39;
    MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47;
    MR_Word hlds__make_hlds__qual_info__Var_36;
    MR_Word hlds__make_hlds__qual_info__Var_38;
    MR_Word hlds__make_hlds__qual_info__Type0_59;

    switch (hlds__make_hlds__qual_info__MaybeOptImported_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            parse_tree__module_qual__qualify_type_qualification_8_p_0((MR_Integer) 0, hlds__make_hlds__qual_info__Context_14, hlds__make_hlds__qual_info__Type0_12, &hlds__make_hlds__qual_info__Type1_27, hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MQInfo_28, hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_44, &hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__make_hlds__qual_info__Type1_27 = hlds__make_hlds__qual_info__Type0_12;
          hlds__make_hlds__qual_info__MQInfo_28 = hlds__make_hlds__qual_info__MQInfo0_23;
          hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_44;
        }
        break;
    }
    {
      parse_tree__prog_type__type_vars_2_p_0(hlds__make_hlds__qual_info__Type1_27, &hlds__make_hlds__qual_info__TVars_29);
    }
    {
      parse_tree__prog_util__get_new_tvars_8_p_0(hlds__make_hlds__qual_info__TVars_29, hlds__make_hlds__qual_info__VarSet_13, hlds__make_hlds__qual_info__TVarSet0_19, &hlds__make_hlds__qual_info__TVarSet1_30, hlds__make_hlds__qual_info__TVarNameMap0_21, &hlds__make_hlds__qual_info__TVarNameMap_31, hlds__make_hlds__qual_info__TVarRenaming0_20, &hlds__make_hlds__qual_info__TVarRenaming_32);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__make_hlds__qual_info__TVarRenaming_32, hlds__make_hlds__qual_info__Type1_27, &hlds__make_hlds__qual_info__Type2_33);
    }
    {
      parse_tree__equiv_type__replace_in_type_8_p_0(hlds__make_hlds__qual_info__TypeEqvMap_18, hlds__make_hlds__qual_info__Type2_33, &hlds__make_hlds__qual_info__Type_35, &hlds__make_hlds__qual_info__Var_36, hlds__make_hlds__qual_info__TVarSet1_30, &hlds__make_hlds__qual_info__TVarSet_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__qual_info__Var_38);
    }
    {
      hlds__make_hlds__qual_info__succeeded = hlds__vartypes__search_var_type_3_p_0(hlds__make_hlds__qual_info__VarTypes0_22, hlds__make_hlds__qual_info__Var_11, &hlds__make_hlds__qual_info__Type0_59);
    }
    if (hlds__make_hlds__qual_info__succeeded)
      {
        {
          hlds__make_hlds__qual_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__qual_info__Type_35, hlds__make_hlds__qual_info__Type0_59);
        }
        if (hlds__make_hlds__qual_info__succeeded)
          *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47;
        else
          {
            MR_Word hlds__make_hlds__qual_info__Msg_61;
            MR_Word hlds__make_hlds__qual_info__Spec_62;
            MR_Word hlds__make_hlds__qual_info__Var_76;

            {
              hlds__make_hlds__qual_info__Msg_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Msg_61, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Context_14));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Msg_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[8])));
            }
            {
              hlds__make_hlds__qual_info__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__Var_76, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Msg_61));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__qual_info__Spec_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_62, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_76));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Spec_62));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47));
            }
          }
        hlds__make_hlds__qual_info__VarTypes_39 = hlds__make_hlds__qual_info__VarTypes0_22;
      }
    else
      {
        {
          hlds__vartypes__add_var_type_4_p_0(hlds__make_hlds__qual_info__Var_11, hlds__make_hlds__qual_info__Type_35, hlds__make_hlds__qual_info__VarTypes0_22, &hlds__make_hlds__qual_info__VarTypes_39);
        }
        *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_47_47;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_43 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__TypeEqvMap_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__TVarRenaming_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TVarNameMap_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__MaybeOptImported_24 | ((((hlds__make_hlds__qual_info__FoundSyntaxError_25 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__FoundTraceGoal_26 << (MR_Integer) 2)))))));
    }
    *hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_41 = hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_40;
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(
  MR_Word hlds__make_hlds__qual_info__QualInfo_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word hlds__make_hlds__qual_info__MQInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__RecompInfo_7;
    MR_Word hlds__make_hlds__qual_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo_6, &hlds__make_hlds__qual_info__RecompInfo_7);
    }
    {
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(hlds__make_hlds__qual_info__RecompInfo_7, hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_9);
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(
  MR_Word hlds__make_hlds__qual_info__Pred_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12)
{
  {
    MR_Word hlds__make_hlds__qual_info__MQInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_7;
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_6, &hlds__make_hlds__qual_info__MaybeRecompInfo0_7);
    }
    if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11;
    else
      {
        MR_Word hlds__make_hlds__qual_info__RecompInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_7, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__qual_info__RecompInfo_9;
        MR_Word hlds__make_hlds__qual_info__MQInfo_10;
        MR_Word hlds__make_hlds__qual_info__Var_13;
        void MR_CALL (* hlds__make_hlds__qual_info__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Pred_4, (MR_Integer) 1)));
        MR_Box hlds__make_hlds__qual_info__conv1_RecompInfo_9;
        MR_Word hlds__make_hlds__qual_info__Var_30;
        MR_Word hlds__make_hlds__qual_info__Var_31;
        MR_Word hlds__make_hlds__qual_info__Var_32;
        MR_Word hlds__make_hlds__qual_info__Var_33;
        MR_Word hlds__make_hlds__qual_info__Var_34;
        MR_Word hlds__make_hlds__qual_info__Var_36;
        MR_Word hlds__make_hlds__qual_info__Var_37;
        MR_Word hlds__make_hlds__qual_info__Var_38;
        MR_Word hlds__make_hlds__qual_info__Var_35;

        {
          hlds__make_hlds__qual_info__func_0(((MR_Box) hlds__make_hlds__qual_info__Pred_4), ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo0_8)), &hlds__make_hlds__qual_info__conv1_RecompInfo_9);
        }
        hlds__make_hlds__qual_info__RecompInfo_9 = ((MR_Word) hlds__make_hlds__qual_info__conv1_RecompInfo_9);
        {
          hlds__make_hlds__qual_info__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__Var_13, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_9));
        }
        {
          parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__Var_13, hlds__make_hlds__qual_info__MQInfo0_6, &hlds__make_hlds__qual_info__MQInfo_10);
        }
        hlds__make_hlds__qual_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
        hlds__make_hlds__qual_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
        hlds__make_hlds__qual_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
        hlds__make_hlds__qual_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
        hlds__make_hlds__qual_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
        hlds__make_hlds__qual_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
        hlds__make_hlds__qual_info__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) & (MR_Integer) 1);
        hlds__make_hlds__qual_info__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        hlds__make_hlds__qual_info__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_30));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_31));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_32));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_33));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_34));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_36 | ((((hlds__make_hlds__qual_info__Var_37 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_38 << (MR_Integer) 2)))))));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0(
  MR_Word hlds__make_hlds__qual_info__X_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_15 | ((((hlds__make_hlds__qual_info__Var_16 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__X_4 << (MR_Integer) 2)))))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0(
  MR_Word hlds__make_hlds__qual_info__X_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_15 | ((((hlds__make_hlds__qual_info__X_4 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_17 << (MR_Integer) 2)))))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(
  MR_Word hlds__make_hlds__qual_info__X_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_15 | ((((hlds__make_hlds__qual_info__Var_16 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_17 << (MR_Integer) 2)))))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(
  MR_Word hlds__make_hlds__qual_info__X_4,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__Var_15 | ((((hlds__make_hlds__qual_info__Var_16 << (MR_Integer) 1)) | ((hlds__make_hlds__qual_info__Var_17 << (MR_Integer) 2)))))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_trace_goal_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    *hlds__make_hlds__qual_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info__Var_12;

    *hlds__make_hlds__qual_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Var_11;
    MR_Word hlds__make_hlds__qual_info__Var_12;

    *hlds__make_hlds__qual_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info__Var_10;
    MR_Word hlds__make_hlds__qual_info__Var_11;
    MR_Word hlds__make_hlds__qual_info__Var_12;

    *hlds__make_hlds__qual_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    hlds__make_hlds__qual_info__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info__Var_9;
    MR_Word hlds__make_hlds__qual_info__Var_10;
    MR_Word hlds__make_hlds__qual_info__Var_11;
    MR_Word hlds__make_hlds__qual_info__Var_12;

    *hlds__make_hlds__qual_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    hlds__make_hlds__qual_info__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(
  MR_Word hlds__make_hlds__qual_info__Info_3,
  MR_Word * hlds__make_hlds__qual_info__X_4)
{
  {
    MR_Word hlds__make_hlds__qual_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__Var_6;
    MR_Word hlds__make_hlds__qual_info__Var_7;
    MR_Word hlds__make_hlds__qual_info__Var_8;
    MR_Word hlds__make_hlds__qual_info__Var_9;
    MR_Word hlds__make_hlds__qual_info__Var_10;
    MR_Word hlds__make_hlds__qual_info__Var_11;
    MR_Word hlds__make_hlds__qual_info__Var_12;

    *hlds__make_hlds__qual_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
    hlds__make_hlds__qual_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
    hlds__make_hlds__qual_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
    hlds__make_hlds__qual_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
    hlds__make_hlds__qual_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
    hlds__make_hlds__qual_info__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__make_hlds__qual_info__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__update_qual_info_6_p_0(
  MR_Word hlds__make_hlds__qual_info__TVarNameMap_7,
  MR_Word hlds__make_hlds__qual_info__TVarSet_8,
  MR_Word hlds__make_hlds__qual_info__VarTypes_9,
  MR_Word hlds__make_hlds__qual_info__MaybeOptImported_10,
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22,
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_23)
{
  {
    MR_Word hlds__make_hlds__qual_info__TypeInfo_27_27 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[0];
    MR_Word hlds__make_hlds__qual_info__TypeEqvMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__qual_info__MQInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__qual_info__Renaming_21;
    MR_Word hlds__make_hlds__qual_info___TVarSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__qual_info___Renaming0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__qual_info___TVarNameMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__qual_info___VarTypes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__qual_info___MaybeOptImported_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info___FoundError_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__qual_info___FoundTraceGoal_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_22, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      mercury__map__init_1_p_0(hlds__make_hlds__qual_info__TypeInfo_27_27, hlds__make_hlds__qual_info__TypeInfo_27_27, &hlds__make_hlds__qual_info__Renaming_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__TypeEqvMap_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Renaming_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TVarNameMap_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((hlds__make_hlds__qual_info__MaybeOptImported_10 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
    }
  }
}

void MR_CALL 
hlds__make_hlds__qual_info__init_qual_info_3_p_0(
  MR_Word hlds__make_hlds__qual_info__MQInfo_4,
  MR_Word hlds__make_hlds__qual_info__TypeEqvMap_5,
  MR_Word * hlds__make_hlds__qual_info__QualInfo_6)
{
  {
    MR_Word hlds__make_hlds__qual_info__TypeInfo_15_15;
    MR_Word hlds__make_hlds__qual_info__TVarSet_7;
    MR_Word hlds__make_hlds__qual_info__Renaming_8;
    MR_Word hlds__make_hlds__qual_info__Index_9;
    MR_Word hlds__make_hlds__qual_info__VarTypes_10;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__qual_info__TVarSet_7);
    }
    hlds__make_hlds__qual_info__TypeInfo_15_15 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(hlds__make_hlds__qual_info__TypeInfo_15_15, hlds__make_hlds__qual_info__TypeInfo_15_15, &hlds__make_hlds__qual_info__Renaming_8);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__qual_info__TypeInfo_15_15, &hlds__make_hlds__qual_info__Index_9);
    }
    {
      hlds__vartypes__init_vartypes_1_p_0(&hlds__make_hlds__qual_info__VarTypes_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__qual_info__QualInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__TypeEqvMap_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Renaming_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Index_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_1,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__qual_info__succeeded;

    {
      hlds__make_hlds__qual_info__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_1), ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_2));
    }
    return hlds__make_hlds__qual_info__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
  MR_Box * hlds__make_hlds__qual_info__wrapper_arg_1,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2,
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__qual_info__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(&hlds__make_hlds__qual_info__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_2), ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_3));
    }
    *hlds__make_hlds__qual_info__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__qual_info__conv0_HeadVar__1_1));
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

/* :- end_module hlds.make_hlds.qual_info. */
