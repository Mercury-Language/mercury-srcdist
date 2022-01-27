/*
** Automatically generated from `vartypes.m'
** by the Mercury compiler,
** version 2015-10-27
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 99 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 102 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 105 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 108 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 111 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 114 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 117 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2];

#line 120 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0;

#line 123 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1;

#line 126 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1];

#line 129 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1];

#line 132 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_maybe_vartypes_0[2];

#line 135 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2];

#line 138 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2];

#line 141 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2];

#line 147 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0;

#line 150 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1];

#line 153 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1];

#line 156 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1];

#line 159 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1];

#line 162 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
#line 165 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 167 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 170 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
#line 173 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 175 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 177 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 180 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
#line 183 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 185 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 188 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
#line 191 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 193 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 195 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 198 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
#line 201 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 203 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 206 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
#line 209 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 211 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 213 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 193 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
#line 193 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 193 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 193 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2);

#line 190 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
#line 190 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 190 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 190 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2);

#line 187 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 187 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 187 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 187 "vartypes.m"
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



#line 313 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 321 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 330 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 339 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 347 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 355 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 364 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 370 "hlds.vartypes.c"
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
  NULL
};

#line 385 "hlds.vartypes.c"
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
  NULL
};

#line 400 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1
};

#line 405 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

#line 410 "hlds.vartypes.c"
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

#line 424 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1,
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

#line 430 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 436 "hlds.vartypes.c"
const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 453 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 461 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 467 "hlds.vartypes.c"
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
  NULL
};

#line 482 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

#line 487 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0
  }
};

#line 496 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

#line 501 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1] = {
  (MR_Integer) 0
};

#line 506 "hlds.vartypes.c"
const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 523 "hlds.vartypes.c"
const MR_TypeCtorInfo_Struct hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 540 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
#line 543 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 545 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 547 "hlds.vartypes.c"
{
#line 549 "hlds.vartypes.c"
  {
#line 551 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 554 "hlds.vartypes.c"
    {
#line 556 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____maybe_vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 559 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 561 "hlds.vartypes.c"
  }
#line 563 "hlds.vartypes.c"
}

#line 566 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
#line 569 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 571 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 573 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 575 "hlds.vartypes.c"
{
#line 577 "hlds.vartypes.c"
  {
#line 579 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 582 "hlds.vartypes.c"
    {
#line 584 "hlds.vartypes.c"
      hlds__vartypes____Compare____maybe_vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 587 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 589 "hlds.vartypes.c"
  }
#line 591 "hlds.vartypes.c"
}

#line 594 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
#line 597 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 599 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 601 "hlds.vartypes.c"
{
#line 603 "hlds.vartypes.c"
  {
#line 605 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 608 "hlds.vartypes.c"
    {
#line 610 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 613 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 615 "hlds.vartypes.c"
  }
#line 617 "hlds.vartypes.c"
}

#line 620 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
#line 623 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 625 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 627 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 629 "hlds.vartypes.c"
{
#line 631 "hlds.vartypes.c"
  {
#line 633 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 636 "hlds.vartypes.c"
    {
#line 638 "hlds.vartypes.c"
      hlds__vartypes____Compare____prog_var_set_types_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 641 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 643 "hlds.vartypes.c"
  }
#line 645 "hlds.vartypes.c"
}

#line 648 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
#line 651 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 653 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 655 "hlds.vartypes.c"
{
#line 657 "hlds.vartypes.c"
  {
#line 659 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 662 "hlds.vartypes.c"
    {
#line 664 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 667 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 669 "hlds.vartypes.c"
  }
#line 671 "hlds.vartypes.c"
}

#line 674 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
#line 677 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 679 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 681 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 683 "hlds.vartypes.c"
{
#line 685 "hlds.vartypes.c"
  {
#line 687 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 690 "hlds.vartypes.c"
    {
#line 692 "hlds.vartypes.c"
      hlds__vartypes____Compare____vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 695 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 697 "hlds.vartypes.c"
  }
#line 699 "hlds.vartypes.c"
}

#line 107 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0(
#line 107 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 107 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 107 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 107 "vartypes.m"
{
#line 107 "vartypes.m"
  {
#line 107 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 107 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar1_4 = hlds__vartypes__HeadVar__2_2;
#line 107 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar2_5 = hlds__vartypes__HeadVar__3_3;

#line 107 "vartypes.m"
    {
#line 107 "vartypes.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Cast_HeadVar1_4)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_5)));
#line 107 "vartypes.m"
      return;
    }
#line 107 "vartypes.m"
  }
#line 107 "vartypes.m"
}

#line 107 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0(
#line 107 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 107 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 107 "vartypes.m"
{
#line 107 "vartypes.m"
  {
#line 107 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 107 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar1_3 = hlds__vartypes__HeadVar__1_1;
#line 107 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar2_4 = hlds__vartypes__HeadVar__2_2;

#line 107 "vartypes.m"
    {
#line 107 "vartypes.m"
      return hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], ((MR_Box) (hlds__vartypes__Cast_HeadVar1_3)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_4)));
    }
#line 107 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 107 "vartypes.m"
  }
#line 107 "vartypes.m"
}

#line 91 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0(
#line 91 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 91 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 91 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 91 "vartypes.m"
{
#line 91 "vartypes.m"
  {
#line 91 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 91 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
#line 91 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

#line 91 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
#line 91 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 788 "hlds.vartypes.c"
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 91 "vartypes.m"
    else
#line 91 "vartypes.m"
      {
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_8_8;

#line 91 "vartypes.m"
        {
#line 91 "vartypes.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], &hlds__vartypes__V_8_8, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
        }
#line 810 "hlds.vartypes.c"
        hlds__vartypes__succeeded = (hlds__vartypes__V_8_8 == (MR_Integer) 0);
#line 91 "vartypes.m"
        hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
#line 91 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 91 "vartypes.m"
          *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__V_8_8;
#line 91 "vartypes.m"
        else
#line 91 "vartypes.m"
          {
#line 91 "vartypes.m"
            {
#line 91 "vartypes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__V_5_5)), ((MR_Box) (hlds__vartypes__V_7_7)));
#line 91 "vartypes.m"
              return;
            }
#line 91 "vartypes.m"
          }
#line 91 "vartypes.m"
      }
#line 91 "vartypes.m"
  }
#line 91 "vartypes.m"
}

#line 91 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0(
#line 91 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 91 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 91 "vartypes.m"
{
#line 91 "vartypes.m"
  {
#line 91 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 91 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 91 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 91 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_7 == hlds__vartypes__CastY_8);
#line 91 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 91 "vartypes.m"
      hlds__vartypes__succeeded = MR_TRUE;
#line 91 "vartypes.m"
    else
#line 91 "vartypes.m"
      {
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_10_10;
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 91 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));

#line 877 "hlds.vartypes.c"
        {
#line 879 "hlds.vartypes.c"
          hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], ((MR_Box) (hlds__vartypes__V_3_3)), ((MR_Box) (hlds__vartypes__V_5_5)));
        }
#line 91 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 91 "vartypes.m"
          {
#line 886 "hlds.vartypes.c"
            hlds__vartypes__TypeInfo_10_10 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
#line 888 "hlds.vartypes.c"
            {
#line 890 "hlds.vartypes.c"
              return hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_10_10, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
            }
#line 91 "vartypes.m"
          }
#line 91 "vartypes.m"
      }
#line 91 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 91 "vartypes.m"
  }
#line 91 "vartypes.m"
}

#line 94 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0(
#line 94 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 94 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 94 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 94 "vartypes.m"
{
#line 94 "vartypes.m"
  {
#line 94 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 94 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_13 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
#line 94 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_14 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

#line 94 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_13 == hlds__vartypes__CastY_14);
#line 94 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 928 "hlds.vartypes.c"
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "vartypes.m"
    else
#line 94 "vartypes.m"
    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "vartypes.m"
      if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "vartypes.m"
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "vartypes.m"
      else
#line 940 "hlds.vartypes.c"
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 2;
#line 94 "vartypes.m"
    else
#line 94 "vartypes.m"
      {
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));

#line 94 "vartypes.m"
        if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "hlds.vartypes.c"
          *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 1;
#line 94 "vartypes.m"
        else
#line 94 "vartypes.m"
          {
#line 94 "vartypes.m"
            MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
#line 94 "vartypes.m"
            MR_Word hlds__vartypes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
#line 94 "vartypes.m"
            MR_Word hlds__vartypes__V_8_8;

#line 94 "vartypes.m"
            {
#line 94 "vartypes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[1], &hlds__vartypes__V_8_8, ((MR_Box) (hlds__vartypes__V_18_18)), ((MR_Box) (hlds__vartypes__V_6_6)));
            }
#line 971 "hlds.vartypes.c"
            hlds__vartypes__succeeded = (hlds__vartypes__V_8_8 == (MR_Integer) 0);
#line 94 "vartypes.m"
            hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
#line 94 "vartypes.m"
            if (hlds__vartypes__succeeded)
#line 94 "vartypes.m"
              *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__V_8_8;
#line 94 "vartypes.m"
            else
#line 94 "vartypes.m"
              {
#line 94 "vartypes.m"
                {
#line 94 "vartypes.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__V_17_17)), ((MR_Box) (hlds__vartypes__V_7_7)));
#line 94 "vartypes.m"
                  return;
                }
#line 94 "vartypes.m"
              }
#line 94 "vartypes.m"
          }
#line 94 "vartypes.m"
      }
#line 94 "vartypes.m"
  }
#line 94 "vartypes.m"
}

#line 94 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0(
#line 94 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 94 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 94 "vartypes.m"
{
#line 94 "vartypes.m"
  {
#line 94 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 94 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 94 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 94 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
#line 94 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 94 "vartypes.m"
      hlds__vartypes__succeeded = MR_TRUE;
#line 94 "vartypes.m"
    else
#line 94 "vartypes.m"
    if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "vartypes.m"
      {
#line 94 "vartypes.m"
        MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 94 "vartypes.m"
        MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 94 "vartypes.m"
        hlds__vartypes__succeeded = (hlds__vartypes__CastY_8 == hlds__vartypes__CastX_7);
#line 94 "vartypes.m"
      }
#line 94 "vartypes.m"
    else
#line 94 "vartypes.m"
      {
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_11_11;
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_12_12;
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5;
#line 94 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6;

#line 94 "vartypes.m"
        hlds__vartypes__succeeded = ((MR_tag((MR_Word) hlds__vartypes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 94 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 94 "vartypes.m"
          {
#line 94 "vartypes.m"
            hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "vartypes.m"
            hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 1067 "hlds.vartypes.c"
            hlds__vartypes__TypeInfo_11_11 = (MR_Word) &hlds__vartypes_scalar_common_1[1];
#line 1069 "hlds.vartypes.c"
            {
#line 1071 "hlds.vartypes.c"
              hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_11_11, ((MR_Box) (hlds__vartypes__V_3_3)), ((MR_Box) (hlds__vartypes__V_5_5)));
            }
#line 94 "vartypes.m"
            if (hlds__vartypes__succeeded)
#line 94 "vartypes.m"
              {
#line 1078 "hlds.vartypes.c"
                hlds__vartypes__TypeInfo_12_12 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
#line 1080 "hlds.vartypes.c"
                {
#line 1082 "hlds.vartypes.c"
                  return hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_12_12, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
                }
#line 94 "vartypes.m"
              }
#line 94 "vartypes.m"
          }
#line 94 "vartypes.m"
      }
#line 94 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 94 "vartypes.m"
  }
#line 94 "vartypes.m"
}

#line 87 "vartypes.m"
void MR_CALL 
hlds__vartypes__transform_foldl_var_types_5_p_0(
#line 87 "vartypes.m"
  MR_Word hlds__vartypes__TypeInfo_for_T_15,
#line 87 "vartypes.m"
  MR_Word hlds__vartypes__Transform_6,
#line 87 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_9,
#line 87 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_10,
#line 87 "vartypes.m"
  MR_Box hlds__vartypes__STATE_VARIABLE_Acc_0_11,
#line 87 "vartypes.m"
  MR_Box * hlds__vartypes__STATE_VARIABLE_Acc_12)
#line 87 "vartypes.m"
{
#line 202 "vartypes.m"
  {
#line 202 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 202 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 202 "vartypes.m"
    {
#line 202 "vartypes.m"
      mercury__map__map_values_foldl_5_p_1(hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeInfo_for_T_15, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Transform_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_9, hlds__vartypes__STATE_VARIABLE_VarTypes_10, hlds__vartypes__STATE_VARIABLE_Acc_0_11, hlds__vartypes__STATE_VARIABLE_Acc_12);
#line 202 "vartypes.m"
      return;
    }
#line 202 "vartypes.m"
  }
#line 87 "vartypes.m"
}

#line 193 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
#line 193 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 193 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 193 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 193 "vartypes.m"
{
#line 193 "vartypes.m"
  {
#line 193 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 193 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 193 "vartypes.m"
    {
#line 193 "vartypes.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 193 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 193 "vartypes.m"
  }
#line 193 "vartypes.m"
}

#line 84 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(
#line 84 "vartypes.m"
  MR_Word hlds__vartypes__Subst_4,
#line 84 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 84 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 84 "vartypes.m"
{
#line 192 "vartypes.m"
  {
#line 192 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 192 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 192 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 193 "vartypes.m"
    {
#line 193 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 193 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
#line 193 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1));
#line 193 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 193 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
#line 193 "vartypes.m"
    }
#line 1198 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 199 "vartypes.m"
    {
#line 199 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 199 "vartypes.m"
      return;
    }
#line 192 "vartypes.m"
  }
#line 84 "vartypes.m"
}

#line 190 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
#line 190 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 190 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 190 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 190 "vartypes.m"
{
#line 190 "vartypes.m"
  {
#line 190 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 190 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 190 "vartypes.m"
    {
#line 190 "vartypes.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 190 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 190 "vartypes.m"
  }
#line 190 "vartypes.m"
}

#line 81 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0(
#line 81 "vartypes.m"
  MR_Word hlds__vartypes__Subst_4,
#line 81 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 81 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 81 "vartypes.m"
{
#line 189 "vartypes.m"
  {
#line 189 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 189 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 189 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 190 "vartypes.m"
    {
#line 190 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 190 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
#line 190 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_subst_to_vartypes_3_p_0_1));
#line 190 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 190 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
#line 190 "vartypes.m"
    }
#line 1276 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 199 "vartypes.m"
    {
#line 199 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 199 "vartypes.m"
      return;
    }
#line 189 "vartypes.m"
  }
#line 81 "vartypes.m"
}

#line 187 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 187 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 187 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 187 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 187 "vartypes.m"
{
#line 187 "vartypes.m"
  {
#line 187 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 187 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 187 "vartypes.m"
    {
#line 187 "vartypes.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 187 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 187 "vartypes.m"
  }
#line 187 "vartypes.m"
}

#line 78 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(
#line 78 "vartypes.m"
  MR_Word hlds__vartypes__Renaming_4,
#line 78 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 78 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 78 "vartypes.m"
{
#line 186 "vartypes.m"
  {
#line 186 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 186 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 186 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 187 "vartypes.m"
    {
#line 187 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[0]));
#line 187 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1));
#line 187 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Renaming_4));
#line 187 "vartypes.m"
    }
#line 1354 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 199 "vartypes.m"
    {
#line 199 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 199 "vartypes.m"
      return;
    }
#line 186 "vartypes.m"
  }
#line 78 "vartypes.m"
}

#line 75 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_sorted_var_types_3_p_0(
#line 75 "vartypes.m"
  MR_Word hlds__vartypes__SortedVars_4,
#line 75 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 75 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 75 "vartypes.m"
{
#line 184 "vartypes.m"
  {
#line 184 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 184 "vartypes.m"
    {
#line 184 "vartypes.m"
      mercury__map__delete_sorted_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__SortedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 184 "vartypes.m"
      return;
    }
#line 184 "vartypes.m"
  }
#line 75 "vartypes.m"
}

#line 73 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_var_types_3_p_0(
#line 73 "vartypes.m"
  MR_Word hlds__vartypes__Vars_4,
#line 73 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 73 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 73 "vartypes.m"
{
#line 181 "vartypes.m"
  {
#line 181 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 181 "vartypes.m"
    {
#line 181 "vartypes.m"
      mercury__map__delete_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 181 "vartypes.m"
      return;
    }
#line 181 "vartypes.m"
  }
#line 73 "vartypes.m"
}

#line 71 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_var_type_3_p_0(
#line 71 "vartypes.m"
  MR_Word hlds__vartypes__Var_4,
#line 71 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 71 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 71 "vartypes.m"
{
#line 178 "vartypes.m"
  {
#line 178 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 178 "vartypes.m"
    {
#line 178 "vartypes.m"
      mercury__map__delete_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_4)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 178 "vartypes.m"
      return;
    }
#line 178 "vartypes.m"
  }
#line 71 "vartypes.m"
}

#line 68 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(
#line 68 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 68 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 68 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_3,
#line 68 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_4)
#line 68 "vartypes.m"
{
#line 167 "vartypes.m"
  while (MR_TRUE)
#line 167 "vartypes.m"
    {
#line 167 "vartypes.m"
      /* tailcall optimized into a loop */
#line 167 "vartypes.m"
      {
#line 167 "vartypes.m"
        MR_bool hlds__vartypes__succeeded;

#line 167 "vartypes.m"
        if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "vartypes.m"
          if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "vartypes.m"
            *hlds__vartypes__STATE_VARIABLE_VarTypes_4 = hlds__vartypes__STATE_VARIABLE_VarTypes_0_3;
#line 167 "vartypes.m"
          else
#line 168 "vartypes.m"
            {
#line 169 "vartypes.m"
              {
#line 169 "vartypes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
#line 169 "vartypes.m"
                return;
              }
#line 168 "vartypes.m"
            }
#line 167 "vartypes.m"
        else
#line 167 "vartypes.m"
          {
#line 167 "vartypes.m"
            MR_Word hlds__vartypes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "vartypes.m"
            MR_Word hlds__vartypes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));

#line 167 "vartypes.m"
            if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "vartypes.m"
              {
#line 171 "vartypes.m"
                {
#line 171 "vartypes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
#line 171 "vartypes.m"
                  return;
                }
#line 170 "vartypes.m"
              }
#line 167 "vartypes.m"
            else
#line 173 "vartypes.m"
              {
#line 173 "vartypes.m"
                MR_Word hlds__vartypes__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "vartypes.m"
                MR_Word hlds__vartypes__Types_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "vartypes.m"
                MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

#line 174 "vartypes.m"
                {
#line 174 "vartypes.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__V_36_36)), ((MR_Box) (hlds__vartypes__Type_26)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_3, &hlds__vartypes__STATE_VARIABLE_VarTypes_31_31);
                }
#line 175 "vartypes.m"
                /* direct tailcall eliminated */
#line 175 "vartypes.m"
                {
#line 175 "vartypes.m"
                  MR_Word hlds__vartypes__HeadVar__1__tmp_copy_1 = hlds__vartypes__V_35_35;
#line 175 "vartypes.m"
                  MR_Word hlds__vartypes__HeadVar__2__tmp_copy_2 = hlds__vartypes__Types_27;
#line 175 "vartypes.m"
                  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0__tmp_copy_3 = hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

#line 175 "vartypes.m"
                  hlds__vartypes__STATE_VARIABLE_VarTypes_0_3 = hlds__vartypes__STATE_VARIABLE_VarTypes_0__tmp_copy_3;
#line 175 "vartypes.m"
                  hlds__vartypes__HeadVar__2_2 = hlds__vartypes__HeadVar__2__tmp_copy_2;
#line 175 "vartypes.m"
                  hlds__vartypes__HeadVar__1_1 = hlds__vartypes__HeadVar__1__tmp_copy_1;
#line 175 "vartypes.m"
                }
#line 175 "vartypes.m"
                continue;
#line 173 "vartypes.m"
              }
#line 167 "vartypes.m"
          }
#line 167 "vartypes.m"
      }
#line 167 "vartypes.m"
      break;
#line 167 "vartypes.m"
    }
#line 68 "vartypes.m"
}

#line 66 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(
#line 66 "vartypes.m"
  MR_Word hlds__vartypes__Vars_5,
#line 66 "vartypes.m"
  MR_Word hlds__vartypes__Types_6,
#line 66 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 66 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 66 "vartypes.m"
{
#line 165 "vartypes.m"
  {
#line 165 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 165 "vartypes.m"
    {
#line 165 "vartypes.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_5, hlds__vartypes__Types_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
#line 165 "vartypes.m"
      return;
    }
#line 165 "vartypes.m"
  }
#line 66 "vartypes.m"
}

#line 63 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(
#line 63 "vartypes.m"
  MR_Word hlds__vartypes__AssocList_3,
#line 63 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_4)
#line 63 "vartypes.m"
{
#line 162 "vartypes.m"
  {
#line 162 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 162 "vartypes.m"
    {
#line 162 "vartypes.m"
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__AssocList_3, hlds__vartypes__VarTypes_4);
#line 162 "vartypes.m"
      return;
    }
#line 162 "vartypes.m"
  }
#line 63 "vartypes.m"
}

#line 60 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(
#line 60 "vartypes.m"
  MR_Word hlds__vartypes__Vars_4,
#line 60 "vartypes.m"
  MR_Word hlds__vartypes__Types_5,
#line 60 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_6)
#line 60 "vartypes.m"
{
#line 159 "vartypes.m"
  {
#line 159 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 159 "vartypes.m"
    {
#line 159 "vartypes.m"
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__Types_5, hlds__vartypes__VarTypes_6);
#line 159 "vartypes.m"
      return;
    }
#line 159 "vartypes.m"
  }
#line 60 "vartypes.m"
}

#line 57 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_to_assoc_list_2_p_0(
#line 57 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 57 "vartypes.m"
  MR_Word * hlds__vartypes__AssocList_4)
#line 57 "vartypes.m"
{
#line 156 "vartypes.m"
  {
#line 156 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 156 "vartypes.m"
    {
#line 156 "vartypes.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__AssocList_4);
#line 156 "vartypes.m"
      return;
    }
#line 156 "vartypes.m"
  }
#line 57 "vartypes.m"
}

#line 55 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_types_2_p_0(
#line 55 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 55 "vartypes.m"
  MR_Word * hlds__vartypes__Types_4)
#line 55 "vartypes.m"
{
#line 153 "vartypes.m"
  {
#line 153 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 153 "vartypes.m"
    {
#line 153 "vartypes.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Types_4);
#line 153 "vartypes.m"
      return;
    }
#line 153 "vartypes.m"
  }
#line 55 "vartypes.m"
}

#line 54 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_vars_2_p_0(
#line 54 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 54 "vartypes.m"
  MR_Word * hlds__vartypes__Vars_4)
#line 54 "vartypes.m"
{
#line 150 "vartypes.m"
  {
#line 150 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 150 "vartypes.m"
    {
#line 150 "vartypes.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Vars_4);
#line 150 "vartypes.m"
      return;
    }
#line 150 "vartypes.m"
  }
#line 54 "vartypes.m"
}

#line 51 "vartypes.m"
void MR_CALL 
hlds__vartypes__lookup_var_types_3_p_0(
#line 51 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 51 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 51 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__3_3)
#line 51 "vartypes.m"
{
#line 144 "vartypes.m"
  {
#line 144 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 144 "vartypes.m"
    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "vartypes.m"
      *hlds__vartypes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 144 "vartypes.m"
    else
#line 145 "vartypes.m"
      {
#line 145 "vartypes.m"
        MR_Word hlds__vartypes__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "vartypes.m"
        MR_Word hlds__vartypes__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "vartypes.m"
        MR_Word hlds__vartypes__Type_8;
#line 145 "vartypes.m"
        MR_Word hlds__vartypes__Types_9;
#line 142 "vartypes.m"
        MR_Box hlds__vartypes__conv0_Type_8;

#line 142 "vartypes.m"
        {
#line 142 "vartypes.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Var_6)), &hlds__vartypes__conv0_Type_8);
        }
#line 142 "vartypes.m"
        hlds__vartypes__Type_8 = ((MR_Word) hlds__vartypes__conv0_Type_8);
#line 147 "vartypes.m"
        {
#line 147 "vartypes.m"
          hlds__vartypes__lookup_var_types_3_p_0(hlds__vartypes__HeadVar__1_1, hlds__vartypes__Vars_7, &hlds__vartypes__Types_9);
        }
#line 145 "vartypes.m"
        {
#line 145 "vartypes.m"
          MR_Word base;
#line 145 "vartypes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "vartypes.m"
          *hlds__vartypes__HeadVar__3_3 = base;
#line 145 "vartypes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__vartypes__Type_8));
#line 145 "vartypes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__vartypes__Types_9));
#line 145 "vartypes.m"
        }
#line 145 "vartypes.m"
      }
#line 144 "vartypes.m"
  }
#line 51 "vartypes.m"
}

#line 50 "vartypes.m"
void MR_CALL 
hlds__vartypes__lookup_var_type_3_p_0(
#line 50 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_4,
#line 50 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 50 "vartypes.m"
  MR_Word * hlds__vartypes__Type_6)
#line 50 "vartypes.m"
{
#line 142 "vartypes.m"
  {
#line 142 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 142 "vartypes.m"
    MR_Box hlds__vartypes__conv0_Type_6;

#line 142 "vartypes.m"
    {
#line 142 "vartypes.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
#line 142 "vartypes.m"
    *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
#line 142 "vartypes.m"
  }
#line 50 "vartypes.m"
}

#line 48 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__search_var_type_3_p_0(
#line 48 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_4,
#line 48 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 48 "vartypes.m"
  MR_Word * hlds__vartypes__Type_6)
#line 48 "vartypes.m"
{
#line 139 "vartypes.m"
  {
#line 139 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 139 "vartypes.m"
    MR_Box hlds__vartypes__conv0_Type_6;

#line 139 "vartypes.m"
    {
#line 139 "vartypes.m"
      hlds__vartypes__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
#line 139 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 139 "vartypes.m"
      {
#line 139 "vartypes.m"
        *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
#line 139 "vartypes.m"
        hlds__vartypes__succeeded = MR_TRUE;
#line 139 "vartypes.m"
      }
#line 139 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 139 "vartypes.m"
  }
#line 48 "vartypes.m"
}

#line 46 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__is_in_vartypes_2_p_0(
#line 46 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 46 "vartypes.m"
  MR_Word hlds__vartypes__Var_4)
#line 46 "vartypes.m"
{
#line 136 "vartypes.m"
  {
#line 136 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 136 "vartypes.m"
    {
#line 136 "vartypes.m"
      return hlds__vartypes__succeeded = mercury__map__contains_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, ((MR_Box) (hlds__vartypes__Var_4)));
    }
#line 136 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 136 "vartypes.m"
  }
#line 46 "vartypes.m"
}

#line 43 "vartypes.m"
void MR_CALL 
hlds__vartypes__search_insert_var_type_5_p_0(
#line 43 "vartypes.m"
  MR_Word hlds__vartypes__Var_6,
#line 43 "vartypes.m"
  MR_Word hlds__vartypes__NewType_7,
#line 43 "vartypes.m"
  MR_Word * hlds__vartypes__MaybeOldType_8,
#line 43 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_10,
#line 43 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_11)
#line 43 "vartypes.m"
{
#line 133 "vartypes.m"
  {
#line 133 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 133 "vartypes.m"
    {
#line 133 "vartypes.m"
      mercury__map__search_insert_5_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_6)), ((MR_Box) (hlds__vartypes__NewType_7)), hlds__vartypes__MaybeOldType_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_10, hlds__vartypes__STATE_VARIABLE_VarTypes_11);
#line 133 "vartypes.m"
      return;
    }
#line 133 "vartypes.m"
  }
#line 43 "vartypes.m"
}

#line 40 "vartypes.m"
void MR_CALL 
hlds__vartypes__update_var_type_4_p_0(
#line 40 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 40 "vartypes.m"
  MR_Word hlds__vartypes__Type_6,
#line 40 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 40 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 40 "vartypes.m"
{
#line 130 "vartypes.m"
  {
#line 130 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 130 "vartypes.m"
    {
#line 130 "vartypes.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
#line 130 "vartypes.m"
      return;
    }
#line 130 "vartypes.m"
  }
#line 40 "vartypes.m"
}

#line 38 "vartypes.m"
void MR_CALL 
hlds__vartypes__add_var_type_4_p_0(
#line 38 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 38 "vartypes.m"
  MR_Word hlds__vartypes__Type_6,
#line 38 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 38 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 38 "vartypes.m"
{
#line 127 "vartypes.m"
  {
#line 127 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 127 "vartypes.m"
    {
#line 127 "vartypes.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
#line 127 "vartypes.m"
      return;
    }
#line 127 "vartypes.m"
  }
#line 38 "vartypes.m"
}

#line 36 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_optimize_2_p_0(
#line 36 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_4,
#line 36 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_5)
#line 36 "vartypes.m"
{
#line 124 "vartypes.m"
  {
#line 124 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 124 "vartypes.m"
    {
#line 124 "vartypes.m"
      mercury__map__optimize_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_4, hlds__vartypes__STATE_VARIABLE_VarTypes_5);
#line 124 "vartypes.m"
      return;
    }
#line 124 "vartypes.m"
  }
#line 36 "vartypes.m"
}

#line 34 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_select_3_p_0(
#line 34 "vartypes.m"
  MR_Word hlds__vartypes__SelectedVars_4,
#line 34 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 34 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 34 "vartypes.m"
{
#line 121 "vartypes.m"
  {
#line 121 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 121 "vartypes.m"
    {
#line 121 "vartypes.m"
      mercury__map__select_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__SelectedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
#line 121 "vartypes.m"
      return;
    }
#line 121 "vartypes.m"
  }
#line 34 "vartypes.m"
}

#line 32 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_count_2_p_0(
#line 32 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 32 "vartypes.m"
  MR_Integer * hlds__vartypes__Count_4)
#line 32 "vartypes.m"
{
#line 118 "vartypes.m"
  {
#line 118 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 118 "vartypes.m"
    {
#line 118 "vartypes.m"
      mercury__map__count_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Count_4);
#line 118 "vartypes.m"
      return;
    }
#line 118 "vartypes.m"
  }
#line 32 "vartypes.m"
}

#line 30 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__vartypes_is_empty_1_p_0(
#line 30 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_2)
#line 30 "vartypes.m"
{
#line 115 "vartypes.m"
  {
#line 115 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 115 "vartypes.m"
    {
#line 115 "vartypes.m"
      return hlds__vartypes__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
    }
#line 115 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 115 "vartypes.m"
  }
#line 30 "vartypes.m"
}

#line 28 "vartypes.m"
void MR_CALL 
hlds__vartypes__init_vartypes_1_p_0(
#line 28 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_2)
#line 28 "vartypes.m"
{
#line 112 "vartypes.m"
  {
#line 112 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 112 "vartypes.m"
    {
#line 112 "vartypes.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
#line 112 "vartypes.m"
      return;
    }
#line 112 "vartypes.m"
  }
#line 28 "vartypes.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.vartypes. */
