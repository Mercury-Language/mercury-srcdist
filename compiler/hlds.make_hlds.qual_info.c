/*
** Automatically generated from `qual_info.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 141 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 144 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 147 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 150 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 153 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 159 "hlds.make_hlds.qual_info.c"
static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[8];

#line 162 "hlds.make_hlds.qual_info.c"
static const MR_ConstString hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0[8];

#line 165 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDesc hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0;

#line 168 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1];

#line 171 "hlds.make_hlds.qual_info.c"
static const MR_DuPtagLayout hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[1];

#line 174 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[1];

#line 177 "hlds.make_hlds.qual_info.c"
static const MR_Integer hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0[1];

#line 180 "hlds.make_hlds.qual_info.c"
static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
#line 183 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_1,
#line 185 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2);

#line 188 "hlds.make_hlds.qual_info.c"
static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
#line 191 "hlds.make_hlds.qual_info.c"
  MR_Box * hlds__make_hlds__qual_info__wrapper_arg_1,
#line 193 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2,
#line 195 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_2[3][3];

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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not match prior qualification."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__qual_info_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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

static /* final */ const MR_Box hlds__make_hlds__qual_info_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[7])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 301 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 310 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 318 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 326 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 335 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 344 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 352 "hlds.make_hlds.qual_info.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__make_hlds__qual_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 361 "hlds.make_hlds.qual_info.c"
static const MR_PseudoTypeInfo hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 373 "hlds.make_hlds.qual_info.c"
static const MR_ConstString hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0[8] = {
  (MR_String) "qual_eqv_map",
  (MR_String) "qual_tvarset",
  (MR_String) "qual_tvar_renaming",
  (MR_String) "qual_tvar_name_map",
  (MR_String) "qual_vartypes",
  (MR_String) "qual_mq_info",
  (MR_String) "qual_import_status",
  (MR_String) "qual_found_syntax_error"
};

#line 385 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDesc hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 = {
  (MR_String) "qual_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_types_qual_info_0_0,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__field_names_qual_info_0_0,
  NULL,
  NULL
};

#line 400 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[1] = {
  &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

#line 405 "hlds.make_hlds.qual_info.c"
static const MR_DuPtagLayout hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0
  }
};

#line 414 "hlds.make_hlds.qual_info.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[1] = {
  &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

#line 419 "hlds.make_hlds.qual_info.c"
static const MR_Integer hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0[1] = {
  (MR_Integer) 0
};

#line 424 "hlds.make_hlds.qual_info.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.qual_info",
  (MR_String) "qual_info",
  {
    hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_name_ordered_qual_info_0
  },
  {
    hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__functor_number_map_qual_info_0
};

#line 445 "hlds.make_hlds.qual_info.c"
static MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0_10001(
#line 448 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_1,
#line 450 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2)
#line 452 "hlds.make_hlds.qual_info.c"
{
#line 454 "hlds.make_hlds.qual_info.c"
  {
#line 456 "hlds.make_hlds.qual_info.c"
    MR_bool hlds__make_hlds__qual_info__succeeded;

#line 459 "hlds.make_hlds.qual_info.c"
    {
#line 461 "hlds.make_hlds.qual_info.c"
      hlds__make_hlds__qual_info__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_1), ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_2));
    }
#line 464 "hlds.make_hlds.qual_info.c"
    return hlds__make_hlds__qual_info__succeeded;
#line 466 "hlds.make_hlds.qual_info.c"
  }
#line 468 "hlds.make_hlds.qual_info.c"
}

#line 471 "hlds.make_hlds.qual_info.c"
static void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0_10001(
#line 474 "hlds.make_hlds.qual_info.c"
  MR_Box * hlds__make_hlds__qual_info__wrapper_arg_1,
#line 476 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_2,
#line 478 "hlds.make_hlds.qual_info.c"
  MR_Box hlds__make_hlds__qual_info__wrapper_arg_3)
#line 480 "hlds.make_hlds.qual_info.c"
{
#line 482 "hlds.make_hlds.qual_info.c"
  {
#line 484 "hlds.make_hlds.qual_info.c"
    MR_Word hlds__make_hlds__qual_info__conv0_HeadVar__1_1;

#line 487 "hlds.make_hlds.qual_info.c"
    {
#line 489 "hlds.make_hlds.qual_info.c"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(&hlds__make_hlds__qual_info__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_2), ((MR_Word) hlds__make_hlds__qual_info__wrapper_arg_3));
    }
#line 492 "hlds.make_hlds.qual_info.c"
    *hlds__make_hlds__qual_info__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__qual_info__conv0_HeadVar__1_1));
#line 494 "hlds.make_hlds.qual_info.c"
  }
#line 496 "hlds.make_hlds.qual_info.c"
}

#line 111 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info____Compare____qual_info_0_0(
#line 111 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__1_1,
#line 111 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__HeadVar__2_2,
#line 111 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__HeadVar__3_3)
#line 111 "qual_info.m"
{
#line 111 "qual_info.m"
  {
#line 111 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 111 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__CastX_27 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__2_2;
#line 111 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__CastY_28 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__3_3;

#line 111 "qual_info.m"
    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__CastX_27 == hlds__make_hlds__qual_info__CastY_28);
#line 111 "qual_info.m"
    if (hlds__make_hlds__qual_info__succeeded)
#line 523 "hlds.make_hlds.qual_info.c"
      *hlds__make_hlds__qual_info__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "qual_info.m"
    else
#line 111 "qual_info.m"
      {
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 2)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 3)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 4)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 5)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 7)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 0)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 1)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 2)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 3)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 4)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 5)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 6)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__3_3, (MR_Integer) 7)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_20_20;

#line 111 "qual_info.m"
        {
#line 111 "qual_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[0], &hlds__make_hlds__qual_info__V_20_20, ((MR_Box) (hlds__make_hlds__qual_info__V_4_4)), ((MR_Box) (hlds__make_hlds__qual_info__V_12_12)));
        }
#line 569 "hlds.make_hlds.qual_info.c"
        hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_20_20 == (MR_Integer) 0);
#line 111 "qual_info.m"
        hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
        if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
          *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_20_20;
#line 111 "qual_info.m"
        else
#line 111 "qual_info.m"
          {
#line 111 "qual_info.m"
            MR_Word hlds__make_hlds__qual_info__V_21_21;

#line 111 "qual_info.m"
            {
#line 111 "qual_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[2], &hlds__make_hlds__qual_info__V_21_21, ((MR_Box) (hlds__make_hlds__qual_info__V_5_5)), ((MR_Box) (hlds__make_hlds__qual_info__V_13_13)));
            }
#line 589 "hlds.make_hlds.qual_info.c"
            hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_21_21 == (MR_Integer) 0);
#line 111 "qual_info.m"
            hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
            if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
              *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_21_21;
#line 111 "qual_info.m"
            else
#line 111 "qual_info.m"
              {
#line 111 "qual_info.m"
                MR_Word hlds__make_hlds__qual_info__V_22_22;

#line 111 "qual_info.m"
                {
#line 111 "qual_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[1], &hlds__make_hlds__qual_info__V_22_22, ((MR_Box) (hlds__make_hlds__qual_info__V_6_6)), ((MR_Box) (hlds__make_hlds__qual_info__V_14_14)));
                }
#line 609 "hlds.make_hlds.qual_info.c"
                hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_22_22 == (MR_Integer) 0);
#line 111 "qual_info.m"
                hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
                if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                  *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_22_22;
#line 111 "qual_info.m"
                else
#line 111 "qual_info.m"
                  {
#line 111 "qual_info.m"
                    MR_Word hlds__make_hlds__qual_info__V_23_23;

#line 111 "qual_info.m"
                    {
#line 111 "qual_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[2], &hlds__make_hlds__qual_info__V_23_23, ((MR_Box) (hlds__make_hlds__qual_info__V_7_7)), ((MR_Box) (hlds__make_hlds__qual_info__V_15_15)));
                    }
#line 629 "hlds.make_hlds.qual_info.c"
                    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_23_23 == (MR_Integer) 0);
#line 111 "qual_info.m"
                    hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
                    if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                      *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_23_23;
#line 111 "qual_info.m"
                    else
#line 111 "qual_info.m"
                      {
#line 111 "qual_info.m"
                        MR_Word hlds__make_hlds__qual_info__V_24_24;

#line 111 "qual_info.m"
                        {
#line 111 "qual_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &hlds__make_hlds__qual_info__V_24_24, ((MR_Box) (hlds__make_hlds__qual_info__V_8_8)), ((MR_Box) (hlds__make_hlds__qual_info__V_16_16)));
                        }
#line 649 "hlds.make_hlds.qual_info.c"
                        hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_24_24 == (MR_Integer) 0);
#line 111 "qual_info.m"
                        hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
                        if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                          *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_24_24;
#line 111 "qual_info.m"
                        else
#line 111 "qual_info.m"
                          {
#line 111 "qual_info.m"
                            MR_Word hlds__make_hlds__qual_info__V_25_25;

#line 111 "qual_info.m"
                            {
#line 111 "qual_info.m"
                              parse_tree__module_qual____Compare____mq_info_0_0(&hlds__make_hlds__qual_info__V_25_25, hlds__make_hlds__qual_info__V_9_9, hlds__make_hlds__qual_info__V_17_17);
                            }
#line 669 "hlds.make_hlds.qual_info.c"
                            hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_25_25 == (MR_Integer) 0);
#line 111 "qual_info.m"
                            hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
                            if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                              *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_25_25;
#line 111 "qual_info.m"
                            else
#line 111 "qual_info.m"
                              {
#line 111 "qual_info.m"
                                MR_Word hlds__make_hlds__qual_info__V_26_26;

#line 111 "qual_info.m"
                                {
#line 111 "qual_info.m"
                                  hlds__hlds_pred____Compare____import_status_0_0(&hlds__make_hlds__qual_info__V_26_26, hlds__make_hlds__qual_info__V_10_10, hlds__make_hlds__qual_info__V_18_18);
                                }
#line 689 "hlds.make_hlds.qual_info.c"
                                hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_26_26 == (MR_Integer) 0);
#line 111 "qual_info.m"
                                hlds__make_hlds__qual_info__succeeded = !(hlds__make_hlds__qual_info__succeeded);
#line 111 "qual_info.m"
                                if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                                  *hlds__make_hlds__qual_info__HeadVar__1_1 = hlds__make_hlds__qual_info__V_26_26;
#line 111 "qual_info.m"
                                else
#line 111 "qual_info.m"
                                  {
#line 111 "qual_info.m"
                                    MR_Integer hlds__make_hlds__qual_info__V_37_37 = (MR_Integer) hlds__make_hlds__qual_info__V_11_11;
#line 111 "qual_info.m"
                                    MR_Integer hlds__make_hlds__qual_info__V_38_38 = (MR_Integer) hlds__make_hlds__qual_info__V_19_19;

#line 111 "qual_info.m"
                                    {
#line 111 "qual_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__qual_info__HeadVar__1_1, hlds__make_hlds__qual_info__V_37_37, hlds__make_hlds__qual_info__V_38_38);
#line 111 "qual_info.m"
                                      return;
                                    }
#line 111 "qual_info.m"
                                  }
#line 111 "qual_info.m"
                              }
#line 111 "qual_info.m"
                          }
#line 111 "qual_info.m"
                      }
#line 111 "qual_info.m"
                  }
#line 111 "qual_info.m"
              }
#line 111 "qual_info.m"
          }
#line 111 "qual_info.m"
      }
#line 111 "qual_info.m"
  }
#line 111 "qual_info.m"
}

#line 111 "qual_info.m"
MR_bool MR_CALL 
hlds__make_hlds__qual_info____Unify____qual_info_0_0(
#line 111 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__HeadVar__1_1,
#line 111 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__HeadVar__2_2)
#line 111 "qual_info.m"
{
#line 111 "qual_info.m"
  {
#line 111 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 111 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__CastX_19 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__1_1;
#line 111 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__CastY_20 = (MR_Integer) hlds__make_hlds__qual_info__HeadVar__2_2;

#line 111 "qual_info.m"
    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__CastX_19 == hlds__make_hlds__qual_info__CastY_20);
#line 111 "qual_info.m"
    if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
      hlds__make_hlds__qual_info__succeeded = MR_TRUE;
#line 111 "qual_info.m"
    else
#line 111 "qual_info.m"
      {
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeInfo_22_22;
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeInfo_23_23;
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeInfo_24_24;
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeCtorInfo_25_25;
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 2)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 3)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 4)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 5)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 6)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__1_1, (MR_Integer) 7)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 2)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 3)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 4)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 5)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 6)));
#line 111 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__HeadVar__2_2, (MR_Integer) 7)));

#line 803 "hlds.make_hlds.qual_info.c"
        {
#line 805 "hlds.make_hlds.qual_info.c"
          hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[0], ((MR_Box) (hlds__make_hlds__qual_info__V_3_3)), ((MR_Box) (hlds__make_hlds__qual_info__V_11_11)));
        }
#line 111 "qual_info.m"
        if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
          {
#line 812 "hlds.make_hlds.qual_info.c"
            hlds__make_hlds__qual_info__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[2];
#line 814 "hlds.make_hlds.qual_info.c"
            {
#line 816 "hlds.make_hlds.qual_info.c"
              hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__qual_info__V_4_4)), ((MR_Box) (hlds__make_hlds__qual_info__V_12_12)));
            }
#line 111 "qual_info.m"
            if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
              {
#line 823 "hlds.make_hlds.qual_info.c"
                hlds__make_hlds__qual_info__TypeInfo_23_23 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[1];
#line 825 "hlds.make_hlds.qual_info.c"
                {
#line 827 "hlds.make_hlds.qual_info.c"
                  hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_23_23, ((MR_Box) (hlds__make_hlds__qual_info__V_5_5)), ((MR_Box) (hlds__make_hlds__qual_info__V_13_13)));
                }
#line 111 "qual_info.m"
                if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                  {
#line 834 "hlds.make_hlds.qual_info.c"
                    hlds__make_hlds__qual_info__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_2[2];
#line 836 "hlds.make_hlds.qual_info.c"
                    {
#line 838 "hlds.make_hlds.qual_info.c"
                      hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__qual_info__V_6_6)), ((MR_Box) (hlds__make_hlds__qual_info__V_14_14)));
                    }
#line 111 "qual_info.m"
                    if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                      {
#line 845 "hlds.make_hlds.qual_info.c"
                        hlds__make_hlds__qual_info__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 847 "hlds.make_hlds.qual_info.c"
                        {
#line 849 "hlds.make_hlds.qual_info.c"
                          hlds__make_hlds__qual_info__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__qual_info__TypeCtorInfo_25_25, ((MR_Box) (hlds__make_hlds__qual_info__V_7_7)), ((MR_Box) (hlds__make_hlds__qual_info__V_15_15)));
                        }
#line 111 "qual_info.m"
                        if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                          {
#line 856 "hlds.make_hlds.qual_info.c"
                            {
#line 858 "hlds.make_hlds.qual_info.c"
                              hlds__make_hlds__qual_info__succeeded = parse_tree__module_qual____Unify____mq_info_0_0(hlds__make_hlds__qual_info__V_8_8, hlds__make_hlds__qual_info__V_16_16);
                            }
#line 111 "qual_info.m"
                            if (hlds__make_hlds__qual_info__succeeded)
#line 111 "qual_info.m"
                              {
#line 865 "hlds.make_hlds.qual_info.c"
                                {
#line 867 "hlds.make_hlds.qual_info.c"
                                  hlds__make_hlds__qual_info__succeeded = hlds__hlds_pred____Unify____import_status_0_0(hlds__make_hlds__qual_info__V_9_9, hlds__make_hlds__qual_info__V_17_17);
                                }
#line 111 "qual_info.m"
                                if (hlds__make_hlds__qual_info__succeeded)
#line 872 "hlds.make_hlds.qual_info.c"
                                  hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__V_10_10 == hlds__make_hlds__qual_info__V_18_18);
#line 111 "qual_info.m"
                              }
#line 111 "qual_info.m"
                          }
#line 111 "qual_info.m"
                      }
#line 111 "qual_info.m"
                  }
#line 111 "qual_info.m"
              }
#line 111 "qual_info.m"
          }
#line 111 "qual_info.m"
      }
#line 111 "qual_info.m"
    return hlds__make_hlds__qual_info__succeeded;
#line 111 "qual_info.m"
  }
#line 111 "qual_info.m"
}

#line 89 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(
#line 89 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__PredId_7,
#line 89 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_8,
#line 89 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__SymName_9,
#line 89 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Args_10,
#line 89 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__GoalInfo_11,
#line 89 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__Goal_12)
#line 89 "qual_info.m"
{
#line 287 "qual_info.m"
  {
#line 287 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;

#line 287 "qual_info.m"
    if ((hlds__make_hlds__qual_info__PredOrFunc_8 == (MR_Integer) 1))
#line 292 "qual_info.m"
      {
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeInfo_30_30 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[1];
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__FuncArgs_14;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RetArg_15;
#line 292 "qual_info.m"
        MR_Integer hlds__make_hlds__qual_info__Arity_16;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__TypeCtor_17;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__ConsId_18;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__Context_19;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RHS_20;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_25_25;
#line 292 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__GoalExpr_29;
#line 293 "qual_info.m"
        MR_Box hlds__make_hlds__qual_info__conv0_RetArg_15;
#line 299 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_21_21;

#line 293 "qual_info.m"
        {
#line 293 "qual_info.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__qual_info__TypeInfo_30_30, hlds__make_hlds__qual_info__Args_10, &hlds__make_hlds__qual_info__FuncArgs_14, &hlds__make_hlds__qual_info__conv0_RetArg_15);
        }
#line 293 "qual_info.m"
        hlds__make_hlds__qual_info__RetArg_15 = ((MR_Word) hlds__make_hlds__qual_info__conv0_RetArg_15);
#line 294 "qual_info.m"
        {
#line 294 "qual_info.m"
          mercury__list__length_2_p_0(hlds__make_hlds__qual_info__TypeInfo_30_30, hlds__make_hlds__qual_info__FuncArgs_14, &hlds__make_hlds__qual_info__Arity_16);
        }
#line 295 "qual_info.m"
        {
#line 295 "qual_info.m"
          hlds__make_hlds__qual_info__TypeCtor_17 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 296 "qual_info.m"
        {
#line 296 "qual_info.m"
          hlds__make_hlds__qual_info__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 296 "qual_info.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 296 "qual_info.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 1) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_9));
#line 296 "qual_info.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_16));
#line 296 "qual_info.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_18, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TypeCtor_17));
#line 296 "qual_info.m"
        }
#line 297 "qual_info.m"
        {
#line 297 "qual_info.m"
          hlds__make_hlds__qual_info__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__qual_info__GoalInfo_11);
        }
#line 298 "qual_info.m"
        {
#line 298 "qual_info.m"
          hlds__make_hlds__qual_info__RHS_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 298 "qual_info.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 0) = ((MR_Box) (hlds__make_hlds__qual_info__ConsId_18));
#line 298 "qual_info.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 298 "qual_info.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_20, 2) = ((MR_Box) (hlds__make_hlds__qual_info__FuncArgs_14));
#line 298 "qual_info.m"
        }
#line 299 "qual_info.m"
        {
#line 299 "qual_info.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(hlds__make_hlds__qual_info__RetArg_15, hlds__make_hlds__qual_info__RHS_20, hlds__make_hlds__qual_info__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__qual_info__V_25_25);
        }
#line 299 "qual_info.m"
        hlds__make_hlds__qual_info__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__V_25_25, (MR_Integer) 0)));
#line 299 "qual_info.m"
        hlds__make_hlds__qual_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__V_25_25, (MR_Integer) 1)));
#line 301 "qual_info.m"
        {
#line 301 "qual_info.m"
          MR_Word base;
#line 301 "qual_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "qual_info.m"
          *hlds__make_hlds__qual_info__Goal_12 = base;
#line 301 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__GoalExpr_29));
#line 301 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__GoalInfo_11));
#line 301 "qual_info.m"
        }
#line 292 "qual_info.m"
      }
#line 287 "qual_info.m"
    else
#line 287 "qual_info.m"
      {
#line 287 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__GoalExpr_13;
#line 287 "qual_info.m"
        MR_Integer hlds__make_hlds__qual_info__V_26_26;

#line 288 "qual_info.m"
        {
#line 288 "qual_info.m"
          hlds__make_hlds__qual_info__V_26_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 288 "qual_info.m"
        {
#line 288 "qual_info.m"
          hlds__make_hlds__qual_info__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 0) = ((MR_Box) (hlds__make_hlds__qual_info__PredId_7));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_26_26));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Args_10));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 3) = ((MR_Box) ((MR_Integer) 2));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "qual_info.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__qual_info__GoalExpr_13, 5) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_9));
#line 288 "qual_info.m"
        }
#line 290 "qual_info.m"
        {
#line 290 "qual_info.m"
          MR_Word base;
#line 290 "qual_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "qual_info.m"
          *hlds__make_hlds__qual_info__Goal_12 = base;
#line 290 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__GoalExpr_13));
#line 290 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__GoalInfo_11));
#line 290 "qual_info.m"
        }
#line 287 "qual_info.m"
      }
#line 287 "qual_info.m"
  }
#line 89 "qual_info.m"
}

#line 85 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__PredId_9,
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_10,
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__SymName_11,
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Args_12,
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__GoalInfo_13,
#line 85 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__Goal_14,
#line 85 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_18,
#line 85 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_19)
#line 85 "qual_info.m"
{
#line 277 "qual_info.m"
  {
#line 277 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 277 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__Arity_16;
#line 277 "qual_info.m"
    MR_Integer hlds__make_hlds__qual_info__OrigArity_17;

#line 278 "qual_info.m"
    {
#line 278 "qual_info.m"
      hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(hlds__make_hlds__qual_info__PredId_9, hlds__make_hlds__qual_info__PredOrFunc_10, hlds__make_hlds__qual_info__SymName_11, hlds__make_hlds__qual_info__Args_12, hlds__make_hlds__qual_info__GoalInfo_13, hlds__make_hlds__qual_info__Goal_14);
    }
#line 280 "qual_info.m"
    {
#line 280 "qual_info.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[1], hlds__make_hlds__qual_info__Args_12, &hlds__make_hlds__qual_info__Arity_16);
    }
#line 281 "qual_info.m"
    {
#line 281 "qual_info.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__qual_info__PredOrFunc_10, &hlds__make_hlds__qual_info__OrigArity_17, hlds__make_hlds__qual_info__Arity_16);
    }
#line 282 "qual_info.m"
    {
#line 282 "qual_info.m"
      hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(hlds__make_hlds__qual_info__PredOrFunc_10, hlds__make_hlds__qual_info__SymName_11, hlds__make_hlds__qual_info__OrigArity_17, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_18, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_19);
#line 282 "qual_info.m"
      return;
    }
#line 277 "qual_info.m"
  }
#line 85 "qual_info.m"
}

#line 82 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0(
#line 82 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__PredOrFunc_6,
#line 82 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__SymName_7,
#line 82 "qual_info.m"
  MR_Integer hlds__make_hlds__qual_info__Arity_8,
#line 82 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11,
#line 82 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12)
#line 82 "qual_info.m"
{
#line 258 "qual_info.m"
  {
#line 258 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 258 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Id_10;
#line 258 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_15_15;
#line 258 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo0_23;
#line 258 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_24;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_30_30;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_31_31;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_32_32;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_33_33;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_34_34;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_35_35;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_36_36;

#line 259 "qual_info.m"
    {
#line 259 "qual_info.m"
      hlds__make_hlds__qual_info__Id_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 259 "qual_info.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_10, 0) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_7));
#line 259 "qual_info.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_10, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_8));
#line 259 "qual_info.m"
    }
#line 260 "qual_info.m"
    {
#line 260 "qual_info.m"
      hlds__make_hlds__qual_info__V_15_15 = recompilation__pred_or_func_to_item_type_1_f_0(hlds__make_hlds__qual_info__PredOrFunc_6);
    }
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__MQInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)));
#line 168 "qual_info.m"
    hlds__make_hlds__qual_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 7)));
#line 169 "qual_info.m"
    {
#line 169 "qual_info.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MaybeRecompInfo0_24);
    }
#line 175 "qual_info.m"
    if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "qual_info.m"
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11;
#line 175 "qual_info.m"
    else
#line 171 "qual_info.m"
      {
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RecompInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_24, (MR_Integer) 0)));
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RecompInfo_26;
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__MQInfo_27;
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_28_28;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_37_37;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_38_38;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_39_39;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_40_40;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_41_41;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_43_43;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_44_44;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_42_42;

#line 172 "qual_info.m"
        {
#line 172 "qual_info.m"
          recompilation__record_used_item_5_p_0(hlds__make_hlds__qual_info__V_15_15, hlds__make_hlds__qual_info__Id_10, hlds__make_hlds__qual_info__Id_10, hlds__make_hlds__qual_info__RecompInfo0_25, &hlds__make_hlds__qual_info__RecompInfo_26);
        }
#line 173 "qual_info.m"
        {
#line 173 "qual_info.m"
          hlds__make_hlds__qual_info__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "qual_info.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_26));
#line 173 "qual_info.m"
        }
#line 173 "qual_info.m"
        {
#line 173 "qual_info.m"
          parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__V_28_28, hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MQInfo_27);
        }
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 7)));
#line 174 "qual_info.m"
        {
#line 174 "qual_info.m"
          MR_Word base;
#line 174 "qual_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 174 "qual_info.m"
          *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = base;
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_37_37));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_38_38));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_39_39));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_40_40));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__V_41_41));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_27));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_43_43));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__V_44_44));
#line 174 "qual_info.m"
        }
#line 171 "qual_info.m"
      }
#line 258 "qual_info.m"
  }
#line 82 "qual_info.m"
}

#line 78 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Var_9,
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__RHS_10,
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Context_11,
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__MainContext_12,
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__SubContext_13,
#line 78 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__Goal_14,
#line 78 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_16,
#line 78 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_17)
#line 78 "qual_info.m"
{
#line 241 "qual_info.m"
  {
#line 241 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;

#line 242 "qual_info.m"
    {
#line 242 "qual_info.m"
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__qual_info__Var_9, hlds__make_hlds__qual_info__RHS_10, hlds__make_hlds__qual_info__Context_11, hlds__make_hlds__qual_info__MainContext_12, hlds__make_hlds__qual_info__SubContext_13, (MR_Integer) 0, hlds__make_hlds__qual_info__Goal_14, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_17);
#line 242 "qual_info.m"
      return;
    }
#line 241 "qual_info.m"
  }
#line 78 "qual_info.m"
}

#line 72 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Var_10,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__RHS_11,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Context_12,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__MainContext_13,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__SubContext_14,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Purity_15,
#line 72 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__Goal_16,
#line 72 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31,
#line 72 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32)
#line 72 "qual_info.m"
{
#line 246 "qual_info.m"
  {
#line 246 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;

#line 249 "qual_info.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__qual_info__RHS_11)) == (MR_mktag((MR_Integer) 1))))
#line 252 "qual_info.m"
      {
#line 252 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 0)));
#line 252 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 1)));
#line 252 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__RHS_11, (MR_Integer) 2)));
#line 270 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__SymName_38;
#line 270 "qual_info.m"
        MR_Integer hlds__make_hlds__qual_info__Arity_39;
#line 266 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_40_40;

#line 266 "qual_info.m"
        hlds__make_hlds__qual_info__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__qual_info__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 266 "qual_info.m"
        if (hlds__make_hlds__qual_info__succeeded)
#line 266 "qual_info.m"
          {
#line 266 "qual_info.m"
            hlds__make_hlds__qual_info__SymName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 1)));
#line 266 "qual_info.m"
            hlds__make_hlds__qual_info__Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 2)));
#line 266 "qual_info.m"
            hlds__make_hlds__qual_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__qual_info__ConsId_28, (MR_Integer) 3)));
#line 267 "qual_info.m"
            {
#line 267 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__Id_41;
#line 267 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__MQInfo0_52;
#line 267 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_53;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_59_59;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_60_60;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_61_61;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_62_62;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_63_63;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_64_64;
#line 168 "qual_info.m"
              MR_Word hlds__make_hlds__qual_info__V_65_65;

#line 267 "qual_info.m"
              {
#line 267 "qual_info.m"
                hlds__make_hlds__qual_info__Id_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "qual_info.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_41, 0) = ((MR_Box) (hlds__make_hlds__qual_info__SymName_38));
#line 267 "qual_info.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Id_41, 1) = ((MR_Box) (hlds__make_hlds__qual_info__Arity_39));
#line 267 "qual_info.m"
              }
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 0)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 1)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 2)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 3)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 4)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__MQInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 5)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)));
#line 168 "qual_info.m"
              hlds__make_hlds__qual_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 7)));
#line 169 "qual_info.m"
              {
#line 169 "qual_info.m"
                parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_52, &hlds__make_hlds__qual_info__MaybeRecompInfo0_53);
              }
#line 175 "qual_info.m"
              if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "qual_info.m"
                *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
#line 175 "qual_info.m"
              else
#line 171 "qual_info.m"
                {
#line 171 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__RecompInfo0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_53, (MR_Integer) 0)));
#line 171 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__RecompInfo_55;
#line 171 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__MQInfo_56;
#line 171 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_57_57;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_66_66;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_67_67;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_68_68;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_69_69;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_70_70;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_72_72;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_73_73;
#line 174 "qual_info.m"
                  MR_Word hlds__make_hlds__qual_info__V_71_71;

#line 172 "qual_info.m"
                  {
#line 172 "qual_info.m"
                    recompilation__record_used_item_5_p_0((MR_Integer) 5, hlds__make_hlds__qual_info__Id_41, hlds__make_hlds__qual_info__Id_41, hlds__make_hlds__qual_info__RecompInfo0_54, &hlds__make_hlds__qual_info__RecompInfo_55);
                  }
#line 173 "qual_info.m"
                  {
#line 173 "qual_info.m"
                    hlds__make_hlds__qual_info__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "qual_info.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_55));
#line 173 "qual_info.m"
                  }
#line 173 "qual_info.m"
                  {
#line 173 "qual_info.m"
                    parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__V_57_57, hlds__make_hlds__qual_info__MQInfo0_52, &hlds__make_hlds__qual_info__MQInfo_56);
                  }
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 0)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 1)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 2)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 3)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 4)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 5)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 6)));
#line 174 "qual_info.m"
                  hlds__make_hlds__qual_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31, (MR_Integer) 7)));
#line 174 "qual_info.m"
                  {
#line 174 "qual_info.m"
                    MR_Word base;
#line 174 "qual_info.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 174 "qual_info.m"
                    *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = base;
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_66_66));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_67_67));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_68_68));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_69_69));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__V_70_70));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_56));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_72_72));
#line 174 "qual_info.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__V_73_73));
#line 174 "qual_info.m"
                  }
#line 171 "qual_info.m"
                }
#line 267 "qual_info.m"
            }
#line 266 "qual_info.m"
          }
#line 266 "qual_info.m"
        else
#line 268 "qual_info.m"
          *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
#line 252 "qual_info.m"
      }
#line 249 "qual_info.m"
    else
#line 249 "qual_info.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__qual_info__RHS_11)) == (MR_mktag((MR_Integer) 2))))
#line 250 "qual_info.m"
        *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
#line 249 "qual_info.m"
      else
#line 248 "qual_info.m"
        *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_31;
#line 255 "qual_info.m"
    {
#line 255 "qual_info.m"
      hlds__hlds_goal__create_atomic_complicated_unification_7_p_0(hlds__make_hlds__qual_info__Var_10, hlds__make_hlds__qual_info__RHS_11, hlds__make_hlds__qual_info__Context_12, hlds__make_hlds__qual_info__MainContext_13, hlds__make_hlds__qual_info__SubContext_14, hlds__make_hlds__qual_info__Purity_15, hlds__make_hlds__qual_info__Goal_16);
#line 255 "qual_info.m"
      return;
    }
#line 246 "qual_info.m"
  }
#line 72 "qual_info.m"
}

#line 67 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__process_type_qualification_10_p_0(
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Var_11,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Type0_12,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__VarSet_13,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Context_14,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_39,
#line 67 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_40,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41,
#line 67 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_42,
#line 67 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_43,
#line 67 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_44)
#line 67 "qual_info.m"
{
#line 186 "qual_info.m"
  {
#line 186 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__EqvMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 0)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 1)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarRenaming0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 2)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarNameMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 3)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__VarTypes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 4)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 5)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Status_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 6)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__FoundError_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_41, (MR_Integer) 7)));
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Type1_26;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo_27;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVars_28;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarSet1_29;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarNameMap_30;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarRenaming_31;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Type2_32;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Type_34;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarSet_36;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__VarTypes_38;
#line 186 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45;
#line 213 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_35_35;
#line 213 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_37_37;
#line 234 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Type0_57;

#line 189 "qual_info.m"
    hlds__make_hlds__qual_info__succeeded = (hlds__make_hlds__qual_info__Status_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "qual_info.m"
    if (hlds__make_hlds__qual_info__succeeded)
#line 191 "qual_info.m"
      {
#line 191 "qual_info.m"
        hlds__make_hlds__qual_info__Type1_26 = hlds__make_hlds__qual_info__Type0_12;
#line 192 "qual_info.m"
        hlds__make_hlds__qual_info__MQInfo_27 = hlds__make_hlds__qual_info__MQInfo0_23;
#line 192 "qual_info.m"
        hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_43;
#line 191 "qual_info.m"
      }
#line 193 "qual_info.m"
    else
#line 194 "qual_info.m"
      {
#line 194 "qual_info.m"
        parse_tree__module_qual__qualify_type_qualification_7_p_0(hlds__make_hlds__qual_info__Type0_12, &hlds__make_hlds__qual_info__Type1_26, hlds__make_hlds__qual_info__Context_14, hlds__make_hlds__qual_info__MQInfo0_23, &hlds__make_hlds__qual_info__MQInfo_27, hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45);
      }
#line 200 "qual_info.m"
    {
#line 200 "qual_info.m"
      parse_tree__prog_type__type_vars_2_p_0(hlds__make_hlds__qual_info__Type1_26, &hlds__make_hlds__qual_info__TVars_28);
    }
#line 201 "qual_info.m"
    {
#line 201 "qual_info.m"
      parse_tree__prog_util__get_new_tvars_8_p_0(hlds__make_hlds__qual_info__TVars_28, hlds__make_hlds__qual_info__VarSet_13, hlds__make_hlds__qual_info__TVarSet0_19, &hlds__make_hlds__qual_info__TVarSet1_29, hlds__make_hlds__qual_info__TVarNameMap0_21, &hlds__make_hlds__qual_info__TVarNameMap_30, hlds__make_hlds__qual_info__TVarRenaming0_20, &hlds__make_hlds__qual_info__TVarRenaming_31);
    }
#line 206 "qual_info.m"
    {
#line 206 "qual_info.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__make_hlds__qual_info__TVarRenaming_31, hlds__make_hlds__qual_info__Type1_26, &hlds__make_hlds__qual_info__Type2_32);
    }
#line 213 "qual_info.m"
    {
#line 213 "qual_info.m"
      parse_tree__equiv_type__replace_in_type_8_p_0(hlds__make_hlds__qual_info__EqvMap_18, hlds__make_hlds__qual_info__Type2_32, &hlds__make_hlds__qual_info__Type_34, &hlds__make_hlds__qual_info__V_35_35, hlds__make_hlds__qual_info__TVarSet1_29, &hlds__make_hlds__qual_info__TVarSet_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__qual_info__V_37_37);
    }
#line 224 "qual_info.m"
    {
#line 224 "qual_info.m"
      hlds__make_hlds__qual_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(hlds__make_hlds__qual_info__VarTypes0_22, hlds__make_hlds__qual_info__Var_11, &hlds__make_hlds__qual_info__Type0_57);
    }
#line 234 "qual_info.m"
    if (hlds__make_hlds__qual_info__succeeded)
#line 227 "qual_info.m"
      {
#line 225 "qual_info.m"
        {
#line 225 "qual_info.m"
          hlds__make_hlds__qual_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__qual_info__Type_34, hlds__make_hlds__qual_info__Type0_57);
        }
#line 227 "qual_info.m"
        if (hlds__make_hlds__qual_info__succeeded)
#line 225 "qual_info.m"
          *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_44 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45;
#line 227 "qual_info.m"
        else
#line 229 "qual_info.m"
          {
#line 229 "qual_info.m"
            MR_Word hlds__make_hlds__qual_info__Msg_59;
#line 229 "qual_info.m"
            MR_Word hlds__make_hlds__qual_info__Spec_60;
#line 229 "qual_info.m"
            MR_Word hlds__make_hlds__qual_info__V_74_74;

#line 230 "qual_info.m"
            {
#line 230 "qual_info.m"
              hlds__make_hlds__qual_info__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "qual_info.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Context_14));
#line 230 "qual_info.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Msg_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__qual_info_scalar_common_1[8])));
#line 230 "qual_info.m"
            }
#line 231 "qual_info.m"
            {
#line 231 "qual_info.m"
              hlds__make_hlds__qual_info__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "qual_info.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Msg_59));
#line 231 "qual_info.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "qual_info.m"
            }
#line 231 "qual_info.m"
            {
#line 231 "qual_info.m"
              hlds__make_hlds__qual_info__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 231 "qual_info.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "qual_info.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 231 "qual_info.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_74_74));
#line 231 "qual_info.m"
            }
#line 232 "qual_info.m"
            {
#line 232 "qual_info.m"
              MR_Word base;
#line 232 "qual_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "qual_info.m"
              *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_44 = base;
#line 232 "qual_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__Spec_60));
#line 232 "qual_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45));
#line 232 "qual_info.m"
            }
#line 229 "qual_info.m"
          }
#line 232 "qual_info.m"
        hlds__make_hlds__qual_info__VarTypes_38 = hlds__make_hlds__qual_info__VarTypes0_22;
#line 227 "qual_info.m"
      }
#line 234 "qual_info.m"
    else
#line 235 "qual_info.m"
      {
#line 235 "qual_info.m"
        {
#line 235 "qual_info.m"
          parse_tree__prog_data__add_var_type_4_p_0(hlds__make_hlds__qual_info__Var_11, hlds__make_hlds__qual_info__Type_34, hlds__make_hlds__qual_info__VarTypes0_22, &hlds__make_hlds__qual_info__VarTypes_38);
        }
#line 235 "qual_info.m"
        *hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_44 = hlds__make_hlds__qual_info__STATE_VARIABLE_Specs_45_45;
#line 235 "qual_info.m"
      }
#line 216 "qual_info.m"
    {
#line 216 "qual_info.m"
      MR_Word base;
#line 216 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 216 "qual_info.m"
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_42 = base;
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__EqvMap_18));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_36));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__TVarRenaming_31));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TVarNameMap_30));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_38));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_27));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__Status_24));
#line 216 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__FoundError_25));
#line 216 "qual_info.m"
    }
#line 216 "qual_info.m"
    *hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_39;
#line 186 "qual_info.m"
  }
#line 67 "qual_info.m"
}

#line 62 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(
#line 62 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__QualInfo_4,
#line 62 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_7,
#line 62 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_8)
#line 62 "qual_info.m"
{
#line 179 "qual_info.m"
  {
#line 179 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 179 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__RecompInfo_6;
#line 179 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 5)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 0)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 1)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 2)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 3)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 4)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 6)));
#line 180 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__QualInfo_4, (MR_Integer) 7)));

#line 180 "qual_info.m"
    {
#line 180 "qual_info.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__V_9_9, &hlds__make_hlds__qual_info__RecompInfo_6);
    }
#line 181 "qual_info.m"
    {
#line 181 "qual_info.m"
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(hlds__make_hlds__qual_info__RecompInfo_6, hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_0_7, hlds__make_hlds__qual_info__STATE_VARIABLE_ModuleInfo_8);
#line 181 "qual_info.m"
      return;
    }
#line 179 "qual_info.m"
  }
#line 62 "qual_info.m"
}

#line 55 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(
#line 55 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Pred_4,
#line 55 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11,
#line 55 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12)
#line 55 "qual_info.m"
{
#line 167 "qual_info.m"
  {
#line 167 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 167 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
#line 167 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MaybeRecompInfo0_7;
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)));
#line 168 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 7)));

#line 169 "qual_info.m"
    {
#line 169 "qual_info.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(hlds__make_hlds__qual_info__MQInfo0_6, &hlds__make_hlds__qual_info__MaybeRecompInfo0_7);
    }
#line 175 "qual_info.m"
    if ((hlds__make_hlds__qual_info__MaybeRecompInfo0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "qual_info.m"
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11;
#line 175 "qual_info.m"
    else
#line 171 "qual_info.m"
      {
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RecompInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__MaybeRecompInfo0_7, (MR_Integer) 0)));
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__RecompInfo_9;
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__MQInfo_10;
#line 171 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_13_13;
#line 172 "qual_info.m"
        void MR_CALL (* hlds__make_hlds__qual_info__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Pred_4, (MR_Integer) 1)));
#line 172 "qual_info.m"
        MR_Box hlds__make_hlds__qual_info__conv1_RecompInfo_9;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_22_22;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_23_23;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_24_24;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_25_25;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_26_26;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_28_28;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_29_29;
#line 174 "qual_info.m"
        MR_Word hlds__make_hlds__qual_info__V_27_27;

#line 172 "qual_info.m"
        {
#line 172 "qual_info.m"
          hlds__make_hlds__qual_info__func_0(((MR_Box) hlds__make_hlds__qual_info__Pred_4), ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo0_8)), &hlds__make_hlds__qual_info__conv1_RecompInfo_9);
        }
#line 172 "qual_info.m"
        hlds__make_hlds__qual_info__RecompInfo_9 = ((MR_Word) hlds__make_hlds__qual_info__conv1_RecompInfo_9);
#line 173 "qual_info.m"
        {
#line 173 "qual_info.m"
          hlds__make_hlds__qual_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "qual_info.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__qual_info__V_13_13, 0) = ((MR_Box) (hlds__make_hlds__qual_info__RecompInfo_9));
#line 173 "qual_info.m"
        }
#line 173 "qual_info.m"
        {
#line 173 "qual_info.m"
          parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(hlds__make_hlds__qual_info__V_13_13, hlds__make_hlds__qual_info__MQInfo0_6, &hlds__make_hlds__qual_info__MQInfo_10);
        }
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 0)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 1)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 2)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 3)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 4)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 5)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 6)));
#line 174 "qual_info.m"
        hlds__make_hlds__qual_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_11, (MR_Integer) 7)));
#line 174 "qual_info.m"
        {
#line 174 "qual_info.m"
          MR_Word base;
#line 174 "qual_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 174 "qual_info.m"
          *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_12 = base;
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_22_22));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_23_23));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_24_24));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_25_25));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__V_26_26));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_10));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_28_28));
#line 174 "qual_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__V_29_29));
#line 174 "qual_info.m"
        }
#line 171 "qual_info.m"
      }
#line 167 "qual_info.m"
  }
#line 55 "qual_info.m"
}

#line 52 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0(
#line 52 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__FoundError_4,
#line 52 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_5,
#line 52 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__3_3)
#line 52 "qual_info.m"
{
#line 164 "qual_info.m"
  {
#line 164 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 0)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 1)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 2)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 3)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 4)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 5)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 6)));
#line 164 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 7)));

#line 164 "qual_info.m"
    {
#line 164 "qual_info.m"
      MR_Word base;
#line 164 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 164 "qual_info.m"
      *hlds__make_hlds__qual_info__HeadVar__3_3 = base;
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_6_6));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_7_7));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_8_8));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_9_9));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__V_10_10));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__V_11_11));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_12_12));
#line 164 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__FoundError_4));
#line 164 "qual_info.m"
    }
#line 164 "qual_info.m"
  }
#line 52 "qual_info.m"
}

#line 50 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_var_types_3_p_0(
#line 50 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__VarTypes_4,
#line 50 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_5,
#line 50 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__3_3)
#line 50 "qual_info.m"
{
#line 163 "qual_info.m"
  {
#line 163 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 0)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 1)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 2)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 3)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 5)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 6)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 7)));
#line 163 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 4)));

#line 163 "qual_info.m"
    {
#line 163 "qual_info.m"
      MR_Word base;
#line 163 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 163 "qual_info.m"
      *hlds__make_hlds__qual_info__HeadVar__3_3 = base;
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_6_6));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_7_7));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_8_8));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_9_9));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_4));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__V_11_11));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_12_12));
#line 163 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__V_13_13));
#line 163 "qual_info.m"
    }
#line 163 "qual_info.m"
  }
#line 50 "qual_info.m"
}

#line 48 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(
#line 48 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__MQInfo_4,
#line 48 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_5,
#line 48 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__3_3)
#line 48 "qual_info.m"
{
#line 162 "qual_info.m"
  {
#line 162 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 0)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 1)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 2)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 3)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 4)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 6)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 7)));
#line 162 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_5, (MR_Integer) 5)));

#line 162 "qual_info.m"
    {
#line 162 "qual_info.m"
      MR_Word base;
#line 162 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 162 "qual_info.m"
      *hlds__make_hlds__qual_info__HeadVar__3_3 = base;
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__V_6_6));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__V_7_7));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__V_8_8));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__V_9_9));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__V_10_10));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_4));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__V_12_12));
#line 162 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__qual_info__V_13_13));
#line 162 "qual_info.m"
    }
#line 162 "qual_info.m"
  }
#line 48 "qual_info.m"
}

#line 46 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_p_0(
#line 46 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_3,
#line 46 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__2_2)
#line 46 "qual_info.m"
{
#line 160 "qual_info.m"
  {
#line 160 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
#line 160 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)));

#line 160 "qual_info.m"
    *hlds__make_hlds__qual_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 7)));
#line 160 "qual_info.m"
  }
#line 46 "qual_info.m"
}

#line 45 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_import_status_2_p_0(
#line 45 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_3,
#line 45 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__2_2)
#line 45 "qual_info.m"
{
#line 159 "qual_info.m"
  {
#line 159 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
#line 159 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10;

#line 159 "qual_info.m"
    *hlds__make_hlds__qual_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)));
#line 159 "qual_info.m"
    hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 7)));
#line 159 "qual_info.m"
  }
#line 45 "qual_info.m"
}

#line 44 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(
#line 44 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_3,
#line 44 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__2_2)
#line 44 "qual_info.m"
{
#line 158 "qual_info.m"
  {
#line 158 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9;
#line 158 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10;

#line 158 "qual_info.m"
    *hlds__make_hlds__qual_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
#line 158 "qual_info.m"
    hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)));
#line 158 "qual_info.m"
    hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 7)));
#line 158 "qual_info.m"
  }
#line 44 "qual_info.m"
}

#line 43 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_var_types_2_p_0(
#line 43 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_3,
#line 43 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__2_2)
#line 43 "qual_info.m"
{
#line 157 "qual_info.m"
  {
#line 157 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8;
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9;
#line 157 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10;

#line 157 "qual_info.m"
    *hlds__make_hlds__qual_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
#line 157 "qual_info.m"
    hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
#line 157 "qual_info.m"
    hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)));
#line 157 "qual_info.m"
    hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 7)));
#line 157 "qual_info.m"
  }
#line 43 "qual_info.m"
}

#line 42 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__qual_info_get_tvarset_2_p_0(
#line 42 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Info_3,
#line 42 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__HeadVar__2_2)
#line 42 "qual_info.m"
{
#line 156 "qual_info.m"
  {
#line 156 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 0)));
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_5_5;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_6_6;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_7_7;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_8_8;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_9_9;
#line 156 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__V_10_10;

#line 156 "qual_info.m"
    *hlds__make_hlds__qual_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 1)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 2)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 3)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 4)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 5)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 6)));
#line 156 "qual_info.m"
    hlds__make_hlds__qual_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__Info_3, (MR_Integer) 7)));
#line 156 "qual_info.m"
  }
#line 42 "qual_info.m"
}

#line 38 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__update_qual_info_6_p_0(
#line 38 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__TVarNameMap_7,
#line 38 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__TVarSet_8,
#line 38 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__VarTypes_9,
#line 38 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__Status_10,
#line 38 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21,
#line 38 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_22)
#line 38 "qual_info.m"
{
#line 148 "qual_info.m"
  {
#line 148 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 148 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TypeInfo_25_25 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[0];
#line 148 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__EqvMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 0)));
#line 148 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 5)));
#line 148 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Renaming_20;
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___TVarSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 1)));
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___Renaming0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 2)));
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___TVarNameMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 3)));
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___VarTypes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 4)));
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 6)));
#line 149 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info___FoundError_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_0_21, (MR_Integer) 7)));

#line 152 "qual_info.m"
    {
#line 152 "qual_info.m"
      mercury__map__init_1_p_0(hlds__make_hlds__qual_info__TypeInfo_25_25, hlds__make_hlds__qual_info__TypeInfo_25_25, &hlds__make_hlds__qual_info__Renaming_20);
    }
#line 153 "qual_info.m"
    {
#line 153 "qual_info.m"
      MR_Word base;
#line 153 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 153 "qual_info.m"
      *hlds__make_hlds__qual_info__STATE_VARIABLE_QualInfo_22 = base;
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__EqvMap_12));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_8));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Renaming_20));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__TVarNameMap_7));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_9));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_17));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__qual_info__Status_10));
#line 153 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Integer) 0));
#line 153 "qual_info.m"
    }
#line 148 "qual_info.m"
  }
#line 38 "qual_info.m"
}

#line 34 "qual_info.m"
void MR_CALL 
hlds__make_hlds__qual_info__init_qual_info_3_p_0(
#line 34 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__MQInfo0_4,
#line 34 "qual_info.m"
  MR_Word hlds__make_hlds__qual_info__EqvMap_5,
#line 34 "qual_info.m"
  MR_Word * hlds__make_hlds__qual_info__QualInfo_6)
#line 34 "qual_info.m"
{
#line 138 "qual_info.m"
  {
#line 138 "qual_info.m"
    MR_bool hlds__make_hlds__qual_info__succeeded;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TypeInfo_16_16;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__MQInfo_7;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__TVarSet_8;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Renaming_9;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__Index_10;
#line 138 "qual_info.m"
    MR_Word hlds__make_hlds__qual_info__VarTypes_11;

#line 139 "qual_info.m"
    {
#line 139 "qual_info.m"
      parse_tree__module_qual__mq_info_set_need_qual_flag_3_p_0((MR_Integer) 1, hlds__make_hlds__qual_info__MQInfo0_4, &hlds__make_hlds__qual_info__MQInfo_7);
    }
#line 140 "qual_info.m"
    {
#line 140 "qual_info.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__qual_info__TVarSet_8);
    }
#line 2525 "hlds.make_hlds.qual_info.c"
    hlds__make_hlds__qual_info__TypeInfo_16_16 = (MR_Word) &hlds__make_hlds__qual_info_scalar_common_1[0];
#line 141 "qual_info.m"
    {
#line 141 "qual_info.m"
      mercury__map__init_1_p_0(hlds__make_hlds__qual_info__TypeInfo_16_16, hlds__make_hlds__qual_info__TypeInfo_16_16, &hlds__make_hlds__qual_info__Renaming_9);
    }
#line 142 "qual_info.m"
    {
#line 142 "qual_info.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__qual_info__TypeInfo_16_16, &hlds__make_hlds__qual_info__Index_10);
    }
#line 143 "qual_info.m"
    {
#line 143 "qual_info.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&hlds__make_hlds__qual_info__VarTypes_11);
    }
#line 145 "qual_info.m"
    {
#line 145 "qual_info.m"
      MR_Word base;
#line 145 "qual_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 145 "qual_info.m"
      *hlds__make_hlds__qual_info__QualInfo_6 = base;
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__qual_info__EqvMap_5));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__qual_info__TVarSet_8));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__qual_info__Renaming_9));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__qual_info__Index_10));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__qual_info__VarTypes_11));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__qual_info__MQInfo_7));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 145 "qual_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Integer) 0));
#line 145 "qual_info.m"
    }
#line 138 "qual_info.m"
  }
#line 34 "qual_info.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.qual_info. */
