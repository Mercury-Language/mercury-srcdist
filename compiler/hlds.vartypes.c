/*
** Automatically generated from `vartypes.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module hlds.vartypes. */
/* :- implementation. */

/*
INIT mercury__hlds__vartypes__init
ENDINIT
*/

#include "hlds.vartypes.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2];

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0;

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1;

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1];

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1];

static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_maybe_vartypes_0[2];

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2];

static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2];

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0;

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1];

static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1];

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1];

static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1];

static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2);

static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2);

static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2);

static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3);

static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2);

static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2);

static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2);


static /* final */ const MR_Box hlds__vartypes_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__vartypes_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__vartypes_scalar_common_3[2][6];




static /* final */ const MR_Box hlds__vartypes_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__vartypes_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__vartypes_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__vartypes_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0 = {
  (MR_String) "varset_vartypes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1 = {
  (MR_String) "no_varset_vartypes",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1
};

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_maybe_vartypes_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1,
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__vartypes____Unify____maybe_vartypes_0_0_10001)),
  ((MR_Box) (hlds__vartypes____Compare____maybe_vartypes_0_0_10001)),
  (MR_String) "hlds.vartypes",
  (MR_String) "maybe_vartypes",
  {     hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0 },
  {     hlds__vartypes__hlds__vartypes__du_ptag_ordered_maybe_vartypes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0
};

static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0 = {
  (MR_String) "prog_var_set_types",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__vartypes____Unify____prog_var_set_types_0_0_10001)),
  ((MR_Box) (hlds__vartypes____Compare____prog_var_set_types_0_0_10001)),
  (MR_String) "hlds.vartypes",
  (MR_String) "prog_var_set_types",
  {     hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0 },
  {     hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0
};

const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__vartypes____Unify____vartypes_0_0_10001)),
  ((MR_Box) (hlds__vartypes____Compare____vartypes_0_0_10001)),
  (MR_String) "hlds.vartypes",
  (MR_String) "vartypes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      hlds__vartypes__succeeded = hlds__vartypes____Unify____maybe_vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
    return hlds__vartypes__succeeded;
  }
}

static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3)
{
  {
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

    {
      hlds__vartypes____Compare____maybe_vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      hlds__vartypes__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
    return hlds__vartypes__succeeded;
  }
}

static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3)
{
  {
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

    {
      hlds__vartypes____Compare____prog_var_set_types_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      hlds__vartypes__succeeded = hlds__vartypes____Unify____vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
    return hlds__vartypes__succeeded;
  }
}

static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
  MR_Box * hlds__vartypes__wrapper_arg_1,
  MR_Box hlds__vartypes__wrapper_arg_2,
  MR_Box hlds__vartypes__wrapper_arg_3)
{
  {
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

    {
      hlds__vartypes____Compare____vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0(
  MR_Word * hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2,
  MR_Word hlds__vartypes__HeadVar__3_3)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__Cast_HeadVar1_4 = hlds__vartypes__HeadVar__2_2;
    MR_Word hlds__vartypes__Cast_HeadVar2_5 = hlds__vartypes__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Cast_HeadVar1_4)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0(
  MR_Word hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__Cast_HeadVar1_3 = hlds__vartypes__HeadVar__1_1;
    MR_Word hlds__vartypes__Cast_HeadVar2_4 = hlds__vartypes__HeadVar__2_2;

    {
      hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], ((MR_Box) (hlds__vartypes__Cast_HeadVar1_3)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_4)));
    }
    return hlds__vartypes__succeeded;
  }
}

void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0(
  MR_Word * hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2,
  MR_Word hlds__vartypes__HeadVar__3_3)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
    if (hlds__vartypes__succeeded)
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__vartypes__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__vartypes__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__vartypes__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__vartypes__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__vartypes__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], &hlds__vartypes__Var_8, ((MR_Box) (hlds__vartypes__ArgX1_4)), ((MR_Box) (hlds__vartypes__ArgY1_5)));
        }
        hlds__vartypes__succeeded = (hlds__vartypes__Var_8 == (MR_Integer) 0);
        hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
        if (hlds__vartypes__succeeded)
          *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__ArgX2_6)), ((MR_Box) (hlds__vartypes__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0(
  MR_Word hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
    MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

    hlds__vartypes__succeeded = (hlds__vartypes__CastX_7 == hlds__vartypes__CastY_8);
    if (hlds__vartypes__succeeded)
      hlds__vartypes__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__vartypes__TypeInfo_10_10;
        MR_Word hlds__vartypes__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__vartypes__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__vartypes__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__vartypes__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], ((MR_Box) (hlds__vartypes__ArgX1_3)), ((MR_Box) (hlds__vartypes__ArgY1_4)));
        }
        if (hlds__vartypes__succeeded)
          {
            hlds__vartypes__TypeInfo_10_10 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
            {
              hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_10_10, ((MR_Box) (hlds__vartypes__ArgX2_5)), ((MR_Box) (hlds__vartypes__ArgY2_6)));
            }
          }
      }
    return hlds__vartypes__succeeded;
  }
}

void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0(
  MR_Word * hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2,
  MR_Word hlds__vartypes__HeadVar__3_3)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Integer hlds__vartypes__CastX_13 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
    MR_Integer hlds__vartypes__CastY_14 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

    hlds__vartypes__succeeded = (hlds__vartypes__CastX_13 == hlds__vartypes__CastY_14);
    if (hlds__vartypes__succeeded)
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word hlds__vartypes__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__vartypes__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__vartypes__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__vartypes__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__vartypes__Var_8;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[1], &hlds__vartypes__Var_8, ((MR_Box) (hlds__vartypes__Var_18)), ((MR_Box) (hlds__vartypes__ArgY1_5)));
            }
            hlds__vartypes__succeeded = (hlds__vartypes__Var_8 == (MR_Integer) 0);
            hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
            if (hlds__vartypes__succeeded)
              *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__Var_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Var_17)), ((MR_Box) (hlds__vartypes__ArgY2_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0(
  MR_Word hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
    if (hlds__vartypes__succeeded)
      hlds__vartypes__succeeded = MR_TRUE;
    else
    if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
        MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

        hlds__vartypes__succeeded = (hlds__vartypes__CastY_8 == hlds__vartypes__CastX_7);
      }
    else
      {
        MR_Word hlds__vartypes__TypeInfo_11_11;
        MR_Word hlds__vartypes__TypeInfo_12_12;
        MR_Word hlds__vartypes__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__vartypes__ArgY1_4;
        MR_Word hlds__vartypes__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__vartypes__ArgY2_6;

        hlds__vartypes__succeeded = ((MR_tag((MR_Word) hlds__vartypes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__vartypes__succeeded)
          {
            hlds__vartypes__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
            hlds__vartypes__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
            hlds__vartypes__TypeInfo_11_11 = (MR_Word) &hlds__vartypes_scalar_common_1[1];
            {
              hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_11_11, ((MR_Box) (hlds__vartypes__ArgX1_3)), ((MR_Box) (hlds__vartypes__ArgY1_4)));
            }
            if (hlds__vartypes__succeeded)
              {
                hlds__vartypes__TypeInfo_12_12 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
                {
                  hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_12_12, ((MR_Box) (hlds__vartypes__ArgX2_5)), ((MR_Box) (hlds__vartypes__ArgY2_6)));
                }
              }
          }
      }
    return hlds__vartypes__succeeded;
  }
}

void MR_CALL 
hlds__vartypes__transform_foldl_var_types_5_p_0(
  MR_Word hlds__vartypes__TypeInfo_for_T_15,
  MR_Word hlds__vartypes__Transform_6,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_9,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_10,
  MR_Box hlds__vartypes__STATE_VARIABLE_Acc_0_11,
  MR_Box * hlds__vartypes__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

    {
      mercury__map__map_values_foldl_5_p_1(hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeInfo_for_T_15, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Transform_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_9, hlds__vartypes__STATE_VARIABLE_VarTypes_10, hlds__vartypes__STATE_VARIABLE_Acc_0_11, hlds__vartypes__STATE_VARIABLE_Acc_12);
    }
  }
}

static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2)
{
  {
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(
  MR_Word hlds__vartypes__Subst_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
    MR_Word hlds__vartypes__Var_8;

    {
      hlds__vartypes__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 1) = ((MR_Box) (hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
    }
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Var_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2)
{
  {
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0(
  MR_Word hlds__vartypes__Subst_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
    MR_Word hlds__vartypes__Var_8;

    {
      hlds__vartypes__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 1) = ((MR_Box) (hlds__vartypes__apply_subst_to_vartypes_3_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
    }
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Var_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
  MR_Box hlds__vartypes__closure_arg,
  MR_Box hlds__vartypes__wrapper_arg_1,
  MR_Box * hlds__vartypes__wrapper_arg_2)
{
  {
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(
  MR_Word hlds__vartypes__Renaming_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
    MR_Word hlds__vartypes__Var_8;

    {
      hlds__vartypes__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 1) = ((MR_Box) (hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__vartypes__Var_8, 3) = ((MR_Box) (hlds__vartypes__Renaming_4));
    }
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Var_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

void MR_CALL 
hlds__vartypes__delete_sorted_var_types_3_p_0(
  MR_Word hlds__vartypes__SortedVars_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__delete_sorted_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__SortedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

void MR_CALL 
hlds__vartypes__delete_var_types_3_p_0(
  MR_Word hlds__vartypes__Vars_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__delete_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

void MR_CALL 
hlds__vartypes__delete_var_type_3_p_0(
  MR_Word hlds__vartypes__Var_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__delete_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_4)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(
  MR_Word hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_3,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__vartypes__succeeded;

        if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__vartypes__STATE_VARIABLE_VarTypes_4 = hlds__vartypes__STATE_VARIABLE_VarTypes_0_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
                return;
              }
            }
        else
          {
            MR_Word hlds__vartypes__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__vartypes__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));

            if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
                  return;
                }
              }
            else
              {
                MR_Word hlds__vartypes__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word hlds__vartypes__Types_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

                {
                  mercury__map__set_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_36)), ((MR_Box) (hlds__vartypes__Type_26)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_3, &hlds__vartypes__STATE_VARIABLE_VarTypes_31_31);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__vartypes__next_value_of_HeadVar__1_1 = hlds__vartypes__Var_35;
                  MR_Word hlds__vartypes__next_value_of_HeadVar__2_2 = hlds__vartypes__Types_27;
                  MR_Word hlds__vartypes__next_value_of_STATE_VARIABLE_VarTypes_0_3 = hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

                  hlds__vartypes__STATE_VARIABLE_VarTypes_0_3 = hlds__vartypes__next_value_of_STATE_VARIABLE_VarTypes_0_3;
                  hlds__vartypes__HeadVar__2_2 = hlds__vartypes__next_value_of_HeadVar__2_2;
                  hlds__vartypes__HeadVar__1_1 = hlds__vartypes__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(
  MR_Word hlds__vartypes__Vars_5,
  MR_Word hlds__vartypes__Types_6,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_5, hlds__vartypes__Types_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(
  MR_Word hlds__vartypes__AssocList_3,
  MR_Word * hlds__vartypes__VarTypes_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__AssocList_3, hlds__vartypes__VarTypes_4);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(
  MR_Word hlds__vartypes__Vars_4,
  MR_Word hlds__vartypes__Types_5,
  MR_Word * hlds__vartypes__VarTypes_6)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__Types_5, hlds__vartypes__VarTypes_6);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_to_assoc_list_2_p_0(
  MR_Word hlds__vartypes__VarTypes_3,
  MR_Word * hlds__vartypes__AssocList_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__AssocList_4);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_types_2_p_0(
  MR_Word hlds__vartypes__VarTypes_3,
  MR_Word * hlds__vartypes__Types_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__values_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Types_4);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_vars_2_p_0(
  MR_Word hlds__vartypes__VarTypes_3,
  MR_Word * hlds__vartypes__Vars_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__keys_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Vars_4);
    }
  }
}

void MR_CALL 
hlds__vartypes__lookup_var_types_3_p_0(
  MR_Word hlds__vartypes__HeadVar__1_1,
  MR_Word hlds__vartypes__HeadVar__2_2,
  MR_Word * hlds__vartypes__HeadVar__3_3)
{
  {
    MR_bool hlds__vartypes__succeeded;

    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__vartypes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__vartypes__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__vartypes__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__vartypes__Type_8;
        MR_Word hlds__vartypes__Types_9;
        MR_Box hlds__vartypes__conv0_Type_8;

        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Var_6)), &hlds__vartypes__conv0_Type_8);
        }
        hlds__vartypes__Type_8 = ((MR_Word) hlds__vartypes__conv0_Type_8);
        {
          hlds__vartypes__lookup_var_types_3_p_0(hlds__vartypes__HeadVar__1_1, hlds__vartypes__Vars_7, &hlds__vartypes__Types_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__vartypes__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__vartypes__Type_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__vartypes__Types_9));
        }
      }
  }
}

void MR_CALL 
hlds__vartypes__lookup_var_type_3_p_0(
  MR_Word hlds__vartypes__VarTypes_4,
  MR_Word hlds__vartypes__Var_5,
  MR_Word * hlds__vartypes__Type_6)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Box hlds__vartypes__conv0_Type_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
    *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
  }
}

MR_bool MR_CALL 
hlds__vartypes__search_var_type_3_p_0(
  MR_Word hlds__vartypes__VarTypes_4,
  MR_Word hlds__vartypes__Var_5,
  MR_Word * hlds__vartypes__Type_6)
{
  {
    MR_bool hlds__vartypes__succeeded;
    MR_Box hlds__vartypes__conv0_Type_6;

    {
      hlds__vartypes__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
    if (hlds__vartypes__succeeded)
      {
        *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
        hlds__vartypes__succeeded = MR_TRUE;
      }
    return hlds__vartypes__succeeded;
  }
}

MR_bool MR_CALL 
hlds__vartypes__is_in_vartypes_2_p_0(
  MR_Word hlds__vartypes__VarTypes_3,
  MR_Word hlds__vartypes__Var_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      hlds__vartypes__succeeded = mercury__map__contains_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, ((MR_Box) (hlds__vartypes__Var_4)));
    }
    return hlds__vartypes__succeeded;
  }
}

void MR_CALL 
hlds__vartypes__search_insert_var_type_5_p_0(
  MR_Word hlds__vartypes__Var_6,
  MR_Word hlds__vartypes__NewType_7,
  MR_Word * hlds__vartypes__MaybeOldType_8,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_10,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_11)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__search_insert_5_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_6)), ((MR_Box) (hlds__vartypes__NewType_7)), hlds__vartypes__MaybeOldType_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_10, hlds__vartypes__STATE_VARIABLE_VarTypes_11);
    }
  }
}

void MR_CALL 
hlds__vartypes__update_var_type_4_p_0(
  MR_Word hlds__vartypes__Var_5,
  MR_Word hlds__vartypes__Type_6,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__det_update_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
  }
}

void MR_CALL 
hlds__vartypes__add_var_type_4_p_0(
  MR_Word hlds__vartypes__Var_5,
  MR_Word hlds__vartypes__Type_6,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_optimize_2_p_0(
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_4,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_5)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__optimize_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_4, hlds__vartypes__STATE_VARIABLE_VarTypes_5);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_select_3_p_0(
  MR_Word hlds__vartypes__SelectedVars_4,
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__select_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__SelectedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
  }
}

void MR_CALL 
hlds__vartypes__vartypes_count_2_p_0(
  MR_Word hlds__vartypes__VarTypes_3,
  MR_Integer * hlds__vartypes__Count_4)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__count_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Count_4);
    }
  }
}

MR_bool MR_CALL 
hlds__vartypes__vartypes_is_empty_1_p_0(
  MR_Word hlds__vartypes__VarTypes_2)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      hlds__vartypes__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
    }
    return hlds__vartypes__succeeded;
  }
}

void MR_CALL 
hlds__vartypes__init_vartypes_1_p_0(
  MR_Word * hlds__vartypes__VarTypes_2)
{
  {
    MR_bool hlds__vartypes__succeeded;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
    }
  }
}

void mercury__hlds__vartypes__init(void)
{
}

void mercury__hlds__vartypes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0);
	MR_register_type_ctor_info(&hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0);
	MR_register_type_ctor_info(&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
}

void mercury__hlds__vartypes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__vartypes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.vartypes. */
