/*
** Automatically generated from `vartypes.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 98 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 101 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 104 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 107 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 110 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 113 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 116 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2];

#line 119 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0;

#line 122 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1;

#line 125 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1];

#line 128 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1];

#line 131 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_maybe_vartypes_0[2];

#line 134 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2];

#line 137 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2];

#line 140 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2];

#line 146 "hlds.vartypes.c"
static const MR_DuFunctorDesc hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0;

#line 149 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1];

#line 152 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1];

#line 155 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1];

#line 158 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1];

#line 161 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
#line 164 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 166 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 169 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
#line 172 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 174 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 176 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 179 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
#line 182 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 184 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 187 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
#line 190 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 192 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 194 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 197 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
#line 200 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 202 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2);

#line 205 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
#line 208 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 210 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 212 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3);

#line 194 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
#line 194 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 194 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 194 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2);

#line 191 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
#line 191 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 191 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 191 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2);

#line 188 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 188 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 188 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 188 "vartypes.m"
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



#line 312 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 320 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 329 "hlds.vartypes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__vartypes__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 338 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 346 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 354 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct2 hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__vartypes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 363 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_maybe_vartypes_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 369 "hlds.vartypes.c"
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

#line 384 "hlds.vartypes.c"
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

#line 399 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1
};

#line 404 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_maybe_vartypes_0_1[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

#line 409 "hlds.vartypes.c"
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

#line 423 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_maybe_vartypes_0[2] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_1,
  &hlds__vartypes__hlds__vartypes__du_functor_desc_maybe_vartypes_0_0
};

#line 429 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_maybe_vartypes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 435 "hlds.vartypes.c"
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

#line 452 "hlds.vartypes.c"
static const MR_FA_TypeInfo_Struct1 hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 460 "hlds.vartypes.c"
static const MR_PseudoTypeInfo hlds__vartypes__hlds__vartypes__field_types_prog_var_set_types_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__vartypes__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 466 "hlds.vartypes.c"
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

#line 481 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

#line 486 "hlds.vartypes.c"
static const MR_DuPtagLayout hlds__vartypes__hlds__vartypes__du_ptag_ordered_prog_var_set_types_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__vartypes__hlds__vartypes__du_stag_ordered_prog_var_set_types_0_0
  }
};

#line 495 "hlds.vartypes.c"
static const MR_DuFunctorDescPtr hlds__vartypes__hlds__vartypes__du_name_ordered_prog_var_set_types_0[1] = {
  &hlds__vartypes__hlds__vartypes__du_functor_desc_prog_var_set_types_0_0
};

#line 500 "hlds.vartypes.c"
static const MR_Integer hlds__vartypes__hlds__vartypes__functor_number_map_prog_var_set_types_0[1] = {
  (MR_Integer) 0
};

#line 505 "hlds.vartypes.c"
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

#line 522 "hlds.vartypes.c"
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

#line 539 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0_10001(
#line 542 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 544 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 546 "hlds.vartypes.c"
{
#line 548 "hlds.vartypes.c"
  {
#line 550 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 553 "hlds.vartypes.c"
    {
#line 555 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____maybe_vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 558 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 560 "hlds.vartypes.c"
  }
#line 562 "hlds.vartypes.c"
}

#line 565 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0_10001(
#line 568 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 570 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 572 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 574 "hlds.vartypes.c"
{
#line 576 "hlds.vartypes.c"
  {
#line 578 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 581 "hlds.vartypes.c"
    {
#line 583 "hlds.vartypes.c"
      hlds__vartypes____Compare____maybe_vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 586 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 588 "hlds.vartypes.c"
  }
#line 590 "hlds.vartypes.c"
}

#line 593 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0_10001(
#line 596 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 598 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 600 "hlds.vartypes.c"
{
#line 602 "hlds.vartypes.c"
  {
#line 604 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 607 "hlds.vartypes.c"
    {
#line 609 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 612 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 614 "hlds.vartypes.c"
  }
#line 616 "hlds.vartypes.c"
}

#line 619 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0_10001(
#line 622 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 624 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 626 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 628 "hlds.vartypes.c"
{
#line 630 "hlds.vartypes.c"
  {
#line 632 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 635 "hlds.vartypes.c"
    {
#line 637 "hlds.vartypes.c"
      hlds__vartypes____Compare____prog_var_set_types_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 640 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 642 "hlds.vartypes.c"
  }
#line 644 "hlds.vartypes.c"
}

#line 647 "hlds.vartypes.c"
static MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0_10001(
#line 650 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 652 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2)
#line 654 "hlds.vartypes.c"
{
#line 656 "hlds.vartypes.c"
  {
#line 658 "hlds.vartypes.c"
    MR_bool hlds__vartypes__succeeded;

#line 661 "hlds.vartypes.c"
    {
#line 663 "hlds.vartypes.c"
      hlds__vartypes__succeeded = hlds__vartypes____Unify____vartypes_0_0(((MR_Word) hlds__vartypes__wrapper_arg_1), ((MR_Word) hlds__vartypes__wrapper_arg_2));
    }
#line 666 "hlds.vartypes.c"
    return hlds__vartypes__succeeded;
#line 668 "hlds.vartypes.c"
  }
#line 670 "hlds.vartypes.c"
}

#line 673 "hlds.vartypes.c"
static void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0_10001(
#line 676 "hlds.vartypes.c"
  MR_Box * hlds__vartypes__wrapper_arg_1,
#line 678 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_2,
#line 680 "hlds.vartypes.c"
  MR_Box hlds__vartypes__wrapper_arg_3)
#line 682 "hlds.vartypes.c"
{
#line 684 "hlds.vartypes.c"
  {
#line 686 "hlds.vartypes.c"
    MR_Word hlds__vartypes__conv0_HeadVar__1_1;

#line 689 "hlds.vartypes.c"
    {
#line 691 "hlds.vartypes.c"
      hlds__vartypes____Compare____vartypes_0_0(&hlds__vartypes__conv0_HeadVar__1_1, ((MR_Word) hlds__vartypes__wrapper_arg_2), ((MR_Word) hlds__vartypes__wrapper_arg_3));
    }
#line 694 "hlds.vartypes.c"
    *hlds__vartypes__wrapper_arg_1 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__1_1));
#line 696 "hlds.vartypes.c"
  }
#line 698 "hlds.vartypes.c"
}

#line 108 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____vartypes_0_0(
#line 108 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 108 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 108 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 108 "vartypes.m"
{
#line 108 "vartypes.m"
  {
#line 108 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 108 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar1_4 = hlds__vartypes__HeadVar__2_2;
#line 108 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar2_5 = hlds__vartypes__HeadVar__3_3;

#line 108 "vartypes.m"
    {
#line 108 "vartypes.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Cast_HeadVar1_4)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_5)));
    }
#line 108 "vartypes.m"
  }
#line 108 "vartypes.m"
}

#line 108 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____vartypes_0_0(
#line 108 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 108 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 108 "vartypes.m"
{
#line 108 "vartypes.m"
  {
#line 108 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 108 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar1_3 = hlds__vartypes__HeadVar__1_1;
#line 108 "vartypes.m"
    MR_Word hlds__vartypes__Cast_HeadVar2_4 = hlds__vartypes__HeadVar__2_2;

#line 108 "vartypes.m"
    {
#line 108 "vartypes.m"
      hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], ((MR_Box) (hlds__vartypes__Cast_HeadVar1_3)), ((MR_Box) (hlds__vartypes__Cast_HeadVar2_4)));
    }
#line 108 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 108 "vartypes.m"
  }
#line 108 "vartypes.m"
}

#line 92 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____prog_var_set_types_0_0(
#line 92 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 92 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 92 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 92 "vartypes.m"
{
#line 92 "vartypes.m"
  {
#line 92 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 92 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
#line 92 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

#line 92 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
#line 92 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 785 "hlds.vartypes.c"
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "vartypes.m"
    else
#line 92 "vartypes.m"
      {
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_8_8;

#line 92 "vartypes.m"
        {
#line 92 "vartypes.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], &hlds__vartypes__V_8_8, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
        }
#line 807 "hlds.vartypes.c"
        hlds__vartypes__succeeded = (hlds__vartypes__V_8_8 == (MR_Integer) 0);
#line 92 "vartypes.m"
        hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
#line 92 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 92 "vartypes.m"
          *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__V_8_8;
#line 92 "vartypes.m"
        else
#line 92 "vartypes.m"
          {
#line 92 "vartypes.m"
            {
#line 92 "vartypes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__V_5_5)), ((MR_Box) (hlds__vartypes__V_7_7)));
            }
#line 92 "vartypes.m"
          }
#line 92 "vartypes.m"
      }
#line 92 "vartypes.m"
  }
#line 92 "vartypes.m"
}

#line 92 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____prog_var_set_types_0_0(
#line 92 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 92 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 92 "vartypes.m"
{
#line 92 "vartypes.m"
  {
#line 92 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 92 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 92 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 92 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_7 == hlds__vartypes__CastY_8);
#line 92 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 92 "vartypes.m"
      hlds__vartypes__succeeded = MR_TRUE;
#line 92 "vartypes.m"
    else
#line 92 "vartypes.m"
      {
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_10_10;
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));

#line 872 "hlds.vartypes.c"
        {
#line 874 "hlds.vartypes.c"
          hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[2], ((MR_Box) (hlds__vartypes__V_3_3)), ((MR_Box) (hlds__vartypes__V_5_5)));
        }
#line 92 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 92 "vartypes.m"
          {
#line 881 "hlds.vartypes.c"
            hlds__vartypes__TypeInfo_10_10 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
#line 883 "hlds.vartypes.c"
            {
#line 885 "hlds.vartypes.c"
              hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_10_10, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
            }
#line 92 "vartypes.m"
          }
#line 92 "vartypes.m"
      }
#line 92 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 92 "vartypes.m"
  }
#line 92 "vartypes.m"
}

#line 95 "vartypes.m"
void MR_CALL 
hlds__vartypes____Compare____maybe_vartypes_0_0(
#line 95 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__1_1,
#line 95 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 95 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__3_3)
#line 95 "vartypes.m"
{
#line 95 "vartypes.m"
  {
#line 95 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 95 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_13 = (MR_Integer) hlds__vartypes__HeadVar__2_2;
#line 95 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_14 = (MR_Integer) hlds__vartypes__HeadVar__3_3;

#line 95 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_13 == hlds__vartypes__CastY_14);
#line 95 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 923 "hlds.vartypes.c"
      *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "vartypes.m"
    else
#line 95 "vartypes.m"
    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "vartypes.m"
      if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "vartypes.m"
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "vartypes.m"
      else
#line 935 "hlds.vartypes.c"
        *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "vartypes.m"
    else
#line 95 "vartypes.m"
      {
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));

#line 95 "vartypes.m"
        if ((hlds__vartypes__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "hlds.vartypes.c"
          *hlds__vartypes__HeadVar__1_1 = (MR_Integer) 1;
#line 95 "vartypes.m"
        else
#line 95 "vartypes.m"
          {
#line 95 "vartypes.m"
            MR_Word hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 0)));
#line 95 "vartypes.m"
            MR_Word hlds__vartypes__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__3_3, (MR_Integer) 1)));
#line 95 "vartypes.m"
            MR_Word hlds__vartypes__V_8_8;

#line 95 "vartypes.m"
            {
#line 95 "vartypes.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[1], &hlds__vartypes__V_8_8, ((MR_Box) (hlds__vartypes__V_18_18)), ((MR_Box) (hlds__vartypes__V_6_6)));
            }
#line 966 "hlds.vartypes.c"
            hlds__vartypes__succeeded = (hlds__vartypes__V_8_8 == (MR_Integer) 0);
#line 95 "vartypes.m"
            hlds__vartypes__succeeded = !(hlds__vartypes__succeeded);
#line 95 "vartypes.m"
            if (hlds__vartypes__succeeded)
#line 95 "vartypes.m"
              *hlds__vartypes__HeadVar__1_1 = hlds__vartypes__V_8_8;
#line 95 "vartypes.m"
            else
#line 95 "vartypes.m"
              {
#line 95 "vartypes.m"
                {
#line 95 "vartypes.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes_scalar_common_2[0], hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__V_17_17)), ((MR_Box) (hlds__vartypes__V_7_7)));
                }
#line 95 "vartypes.m"
              }
#line 95 "vartypes.m"
          }
#line 95 "vartypes.m"
      }
#line 95 "vartypes.m"
  }
#line 95 "vartypes.m"
}

#line 95 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes____Unify____maybe_vartypes_0_0(
#line 95 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 95 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2)
#line 95 "vartypes.m"
{
#line 95 "vartypes.m"
  {
#line 95 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 95 "vartypes.m"
    MR_Integer hlds__vartypes__CastX_9 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 95 "vartypes.m"
    MR_Integer hlds__vartypes__CastY_10 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 95 "vartypes.m"
    hlds__vartypes__succeeded = (hlds__vartypes__CastX_9 == hlds__vartypes__CastY_10);
#line 95 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 95 "vartypes.m"
      hlds__vartypes__succeeded = MR_TRUE;
#line 95 "vartypes.m"
    else
#line 95 "vartypes.m"
    if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "vartypes.m"
      {
#line 95 "vartypes.m"
        MR_Integer hlds__vartypes__CastX_7 = (MR_Integer) hlds__vartypes__HeadVar__1_1;
#line 95 "vartypes.m"
        MR_Integer hlds__vartypes__CastY_8 = (MR_Integer) hlds__vartypes__HeadVar__2_2;

#line 95 "vartypes.m"
        hlds__vartypes__succeeded = (hlds__vartypes__CastY_8 == hlds__vartypes__CastX_7);
#line 95 "vartypes.m"
      }
#line 95 "vartypes.m"
    else
#line 95 "vartypes.m"
      {
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_11_11;
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__TypeInfo_12_12;
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_5_5;
#line 95 "vartypes.m"
        MR_Word hlds__vartypes__V_6_6;

#line 95 "vartypes.m"
        hlds__vartypes__succeeded = ((MR_tag((MR_Word) hlds__vartypes__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 95 "vartypes.m"
        if (hlds__vartypes__succeeded)
#line 95 "vartypes.m"
          {
#line 95 "vartypes.m"
            hlds__vartypes__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "vartypes.m"
            hlds__vartypes__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 1060 "hlds.vartypes.c"
            hlds__vartypes__TypeInfo_11_11 = (MR_Word) &hlds__vartypes_scalar_common_1[1];
#line 1062 "hlds.vartypes.c"
            {
#line 1064 "hlds.vartypes.c"
              hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_11_11, ((MR_Box) (hlds__vartypes__V_3_3)), ((MR_Box) (hlds__vartypes__V_5_5)));
            }
#line 95 "vartypes.m"
            if (hlds__vartypes__succeeded)
#line 95 "vartypes.m"
              {
#line 1071 "hlds.vartypes.c"
                hlds__vartypes__TypeInfo_12_12 = (MR_Word) &hlds__vartypes_scalar_common_2[0];
#line 1073 "hlds.vartypes.c"
                {
#line 1075 "hlds.vartypes.c"
                  hlds__vartypes__succeeded = mercury__builtin__unify_2_p_0(hlds__vartypes__TypeInfo_12_12, ((MR_Box) (hlds__vartypes__V_4_4)), ((MR_Box) (hlds__vartypes__V_6_6)));
                }
#line 95 "vartypes.m"
              }
#line 95 "vartypes.m"
          }
#line 95 "vartypes.m"
      }
#line 95 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 95 "vartypes.m"
  }
#line 95 "vartypes.m"
}

#line 88 "vartypes.m"
void MR_CALL 
hlds__vartypes__transform_foldl_var_types_5_p_0(
#line 88 "vartypes.m"
  MR_Word hlds__vartypes__TypeInfo_for_T_15,
#line 88 "vartypes.m"
  MR_Word hlds__vartypes__Transform_6,
#line 88 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_9,
#line 88 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_10,
#line 88 "vartypes.m"
  MR_Box hlds__vartypes__STATE_VARIABLE_Acc_0_11,
#line 88 "vartypes.m"
  MR_Box * hlds__vartypes__STATE_VARIABLE_Acc_12)
#line 88 "vartypes.m"
{
#line 203 "vartypes.m"
  {
#line 203 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 203 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 203 "vartypes.m"
    {
#line 203 "vartypes.m"
      mercury__map__map_values_foldl_5_p_1(hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeCtorInfo_16_16, hlds__vartypes__TypeInfo_for_T_15, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__Transform_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_9, hlds__vartypes__STATE_VARIABLE_VarTypes_10, hlds__vartypes__STATE_VARIABLE_Acc_0_11, hlds__vartypes__STATE_VARIABLE_Acc_12);
    }
#line 203 "vartypes.m"
  }
#line 88 "vartypes.m"
}

#line 194 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1(
#line 194 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 194 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 194 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 194 "vartypes.m"
{
#line 194 "vartypes.m"
  {
#line 194 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 194 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 194 "vartypes.m"
    {
#line 194 "vartypes.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 194 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 194 "vartypes.m"
  }
#line 194 "vartypes.m"
}

#line 85 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(
#line 85 "vartypes.m"
  MR_Word hlds__vartypes__Subst_4,
#line 85 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 85 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 85 "vartypes.m"
{
#line 193 "vartypes.m"
  {
#line 193 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 193 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 193 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 194 "vartypes.m"
    {
#line 194 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 194 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
#line 194 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0_1));
#line 194 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 194 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
#line 194 "vartypes.m"
    }
#line 1189 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 200 "vartypes.m"
    {
#line 200 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 193 "vartypes.m"
  }
#line 85 "vartypes.m"
}

#line 191 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0_1(
#line 191 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 191 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 191 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 191 "vartypes.m"
{
#line 191 "vartypes.m"
  {
#line 191 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 191 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 191 "vartypes.m"
    {
#line 191 "vartypes.m"
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 191 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 191 "vartypes.m"
  }
#line 191 "vartypes.m"
}

#line 82 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_subst_to_vartypes_3_p_0(
#line 82 "vartypes.m"
  MR_Word hlds__vartypes__Subst_4,
#line 82 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 82 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 82 "vartypes.m"
{
#line 190 "vartypes.m"
  {
#line 190 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 190 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 190 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 191 "vartypes.m"
    {
#line 191 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 191 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[1]));
#line 191 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_subst_to_vartypes_3_p_0_1));
#line 191 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Subst_4));
#line 191 "vartypes.m"
    }
#line 1265 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 200 "vartypes.m"
    {
#line 200 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 190 "vartypes.m"
  }
#line 82 "vartypes.m"
}

#line 188 "vartypes.m"
static void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1(
#line 188 "vartypes.m"
  MR_Box hlds__vartypes__closure_arg,
#line 188 "vartypes.m"
  MR_Box hlds__vartypes__wrapper_arg_1,
#line 188 "vartypes.m"
  MR_Box * hlds__vartypes__wrapper_arg_2)
#line 188 "vartypes.m"
{
#line 188 "vartypes.m"
  {
#line 188 "vartypes.m"
    MR_Box hlds__vartypes__closure = hlds__vartypes__closure_arg;
#line 188 "vartypes.m"
    MR_Word hlds__vartypes__conv0_HeadVar__3_3;

#line 188 "vartypes.m"
    {
#line 188 "vartypes.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__vartypes__closure, (MR_Integer) 3))), ((MR_Word) hlds__vartypes__wrapper_arg_1), &hlds__vartypes__conv0_HeadVar__3_3);
    }
#line 188 "vartypes.m"
    *hlds__vartypes__wrapper_arg_2 = ((MR_Box) (hlds__vartypes__conv0_HeadVar__3_3));
#line 188 "vartypes.m"
  }
#line 188 "vartypes.m"
}

#line 79 "vartypes.m"
void MR_CALL 
hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(
#line 79 "vartypes.m"
  MR_Word hlds__vartypes__Renaming_4,
#line 79 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 79 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 79 "vartypes.m"
{
#line 187 "vartypes.m"
  {
#line 187 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 187 "vartypes.m"
    MR_Word hlds__vartypes__TypeCtorInfo_9_17;
#line 187 "vartypes.m"
    MR_Word hlds__vartypes__V_8_8;

#line 188 "vartypes.m"
    {
#line 188 "vartypes.m"
      hlds__vartypes__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 188 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 0) = ((MR_Box) (&hlds__vartypes_scalar_common_3[0]));
#line 188 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 1) = ((MR_Box) (hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0_1));
#line 188 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 188 "vartypes.m"
      MR_hl_field(MR_mktag(0), hlds__vartypes__V_8_8, 3) = ((MR_Box) (hlds__vartypes__Renaming_4));
#line 188 "vartypes.m"
    }
#line 1341 "hlds.vartypes.c"
    hlds__vartypes__TypeCtorInfo_9_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 200 "vartypes.m"
    {
#line 200 "vartypes.m"
      mercury__map__map_values_only_3_p_0(hlds__vartypes__TypeCtorInfo_9_17, hlds__vartypes__TypeCtorInfo_9_17, (MR_Word) &hlds__vartypes_scalar_common_1[0], hlds__vartypes__V_8_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 187 "vartypes.m"
  }
#line 79 "vartypes.m"
}

#line 76 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_sorted_var_types_3_p_0(
#line 76 "vartypes.m"
  MR_Word hlds__vartypes__SortedVars_4,
#line 76 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 76 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 76 "vartypes.m"
{
#line 185 "vartypes.m"
  {
#line 185 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 185 "vartypes.m"
    {
#line 185 "vartypes.m"
      mercury__map__delete_sorted_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__SortedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 185 "vartypes.m"
  }
#line 76 "vartypes.m"
}

#line 74 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_var_types_3_p_0(
#line 74 "vartypes.m"
  MR_Word hlds__vartypes__Vars_4,
#line 74 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 74 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 74 "vartypes.m"
{
#line 182 "vartypes.m"
  {
#line 182 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 182 "vartypes.m"
    {
#line 182 "vartypes.m"
      mercury__map__delete_list_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 182 "vartypes.m"
  }
#line 74 "vartypes.m"
}

#line 72 "vartypes.m"
void MR_CALL 
hlds__vartypes__delete_var_type_3_p_0(
#line 72 "vartypes.m"
  MR_Word hlds__vartypes__Var_4,
#line 72 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 72 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 72 "vartypes.m"
{
#line 179 "vartypes.m"
  {
#line 179 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 179 "vartypes.m"
    {
#line 179 "vartypes.m"
      mercury__map__delete_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_4)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 179 "vartypes.m"
  }
#line 72 "vartypes.m"
}

#line 69 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(
#line 69 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 69 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 69 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_3,
#line 69 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_4)
#line 69 "vartypes.m"
{
#line 168 "vartypes.m"
  while (MR_TRUE)
#line 168 "vartypes.m"
    {
#line 168 "vartypes.m"
      /* tailcall optimized into a loop */
#line 168 "vartypes.m"
      {
#line 168 "vartypes.m"
        MR_bool hlds__vartypes__succeeded;

#line 168 "vartypes.m"
        if ((hlds__vartypes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "vartypes.m"
          if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "vartypes.m"
            *hlds__vartypes__STATE_VARIABLE_VarTypes_4 = hlds__vartypes__STATE_VARIABLE_VarTypes_0_3;
#line 168 "vartypes.m"
          else
#line 169 "vartypes.m"
            {
#line 170 "vartypes.m"
              {
#line 170 "vartypes.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
#line 170 "vartypes.m"
                return;
              }
#line 169 "vartypes.m"
            }
#line 168 "vartypes.m"
        else
#line 168 "vartypes.m"
          {
#line 168 "vartypes.m"
            MR_Word hlds__vartypes__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "vartypes.m"
            MR_Word hlds__vartypes__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__1_1, (MR_Integer) 0)));

#line 168 "vartypes.m"
            if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "vartypes.m"
              {
#line 172 "vartypes.m"
                {
#line 172 "vartypes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.vartypes", (MR_String) "predicate \140hlds.vartypes.vartypes_overlay_corresponding_lists\'/4", (MR_String) "mismatched list lengths");
#line 172 "vartypes.m"
                  return;
                }
#line 171 "vartypes.m"
              }
#line 168 "vartypes.m"
            else
#line 174 "vartypes.m"
              {
#line 174 "vartypes.m"
                MR_Word hlds__vartypes__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 174 "vartypes.m"
                MR_Word hlds__vartypes__Types_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "vartypes.m"
                MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

#line 175 "vartypes.m"
                {
#line 175 "vartypes.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__V_36_36)), ((MR_Box) (hlds__vartypes__Type_26)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_3, &hlds__vartypes__STATE_VARIABLE_VarTypes_31_31);
                }
#line 176 "vartypes.m"
                /* direct tailcall eliminated */
#line 176 "vartypes.m"
                {
#line 176 "vartypes.m"
                  MR_Word hlds__vartypes__HeadVar__1__tmp_copy_1 = hlds__vartypes__V_35_35;
#line 176 "vartypes.m"
                  MR_Word hlds__vartypes__HeadVar__2__tmp_copy_2 = hlds__vartypes__Types_27;
#line 176 "vartypes.m"
                  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0__tmp_copy_3 = hlds__vartypes__STATE_VARIABLE_VarTypes_31_31;

#line 176 "vartypes.m"
                  hlds__vartypes__STATE_VARIABLE_VarTypes_0_3 = hlds__vartypes__STATE_VARIABLE_VarTypes_0__tmp_copy_3;
#line 176 "vartypes.m"
                  hlds__vartypes__HeadVar__2_2 = hlds__vartypes__HeadVar__2__tmp_copy_2;
#line 176 "vartypes.m"
                  hlds__vartypes__HeadVar__1_1 = hlds__vartypes__HeadVar__1__tmp_copy_1;
#line 176 "vartypes.m"
                }
#line 176 "vartypes.m"
                continue;
#line 174 "vartypes.m"
              }
#line 168 "vartypes.m"
          }
#line 168 "vartypes.m"
      }
#line 168 "vartypes.m"
      break;
#line 168 "vartypes.m"
    }
#line 69 "vartypes.m"
}

#line 67 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(
#line 67 "vartypes.m"
  MR_Word hlds__vartypes__Vars_5,
#line 67 "vartypes.m"
  MR_Word hlds__vartypes__Types_6,
#line 67 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 67 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 67 "vartypes.m"
{
#line 166 "vartypes.m"
  {
#line 166 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 166 "vartypes.m"
    {
#line 166 "vartypes.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_5, hlds__vartypes__Types_6, hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
#line 166 "vartypes.m"
  }
#line 67 "vartypes.m"
}

#line 64 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(
#line 64 "vartypes.m"
  MR_Word hlds__vartypes__AssocList_3,
#line 64 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_4)
#line 64 "vartypes.m"
{
#line 163 "vartypes.m"
  {
#line 163 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 163 "vartypes.m"
    {
#line 163 "vartypes.m"
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__AssocList_3, hlds__vartypes__VarTypes_4);
    }
#line 163 "vartypes.m"
  }
#line 64 "vartypes.m"
}

#line 61 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(
#line 61 "vartypes.m"
  MR_Word hlds__vartypes__Vars_4,
#line 61 "vartypes.m"
  MR_Word hlds__vartypes__Types_5,
#line 61 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_6)
#line 61 "vartypes.m"
{
#line 160 "vartypes.m"
  {
#line 160 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 160 "vartypes.m"
    {
#line 160 "vartypes.m"
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__Vars_4, hlds__vartypes__Types_5, hlds__vartypes__VarTypes_6);
    }
#line 160 "vartypes.m"
  }
#line 61 "vartypes.m"
}

#line 58 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_to_assoc_list_2_p_0(
#line 58 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 58 "vartypes.m"
  MR_Word * hlds__vartypes__AssocList_4)
#line 58 "vartypes.m"
{
#line 157 "vartypes.m"
  {
#line 157 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 157 "vartypes.m"
    {
#line 157 "vartypes.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__AssocList_4);
    }
#line 157 "vartypes.m"
  }
#line 58 "vartypes.m"
}

#line 56 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_types_2_p_0(
#line 56 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 56 "vartypes.m"
  MR_Word * hlds__vartypes__Types_4)
#line 56 "vartypes.m"
{
#line 154 "vartypes.m"
  {
#line 154 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 154 "vartypes.m"
    {
#line 154 "vartypes.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Types_4);
    }
#line 154 "vartypes.m"
  }
#line 56 "vartypes.m"
}

#line 55 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_vars_2_p_0(
#line 55 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 55 "vartypes.m"
  MR_Word * hlds__vartypes__Vars_4)
#line 55 "vartypes.m"
{
#line 151 "vartypes.m"
  {
#line 151 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 151 "vartypes.m"
    {
#line 151 "vartypes.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Vars_4);
    }
#line 151 "vartypes.m"
  }
#line 55 "vartypes.m"
}

#line 52 "vartypes.m"
void MR_CALL 
hlds__vartypes__lookup_var_types_3_p_0(
#line 52 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__1_1,
#line 52 "vartypes.m"
  MR_Word hlds__vartypes__HeadVar__2_2,
#line 52 "vartypes.m"
  MR_Word * hlds__vartypes__HeadVar__3_3)
#line 52 "vartypes.m"
{
#line 145 "vartypes.m"
  {
#line 145 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 145 "vartypes.m"
    if ((hlds__vartypes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "vartypes.m"
      *hlds__vartypes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "vartypes.m"
    else
#line 146 "vartypes.m"
      {
#line 146 "vartypes.m"
        MR_Word hlds__vartypes__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "vartypes.m"
        MR_Word hlds__vartypes__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__vartypes__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "vartypes.m"
        MR_Word hlds__vartypes__Type_8;
#line 146 "vartypes.m"
        MR_Word hlds__vartypes__Types_9;
#line 143 "vartypes.m"
        MR_Box hlds__vartypes__conv0_Type_8;

#line 143 "vartypes.m"
        {
#line 143 "vartypes.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__HeadVar__1_1, ((MR_Box) (hlds__vartypes__Var_6)), &hlds__vartypes__conv0_Type_8);
        }
#line 143 "vartypes.m"
        hlds__vartypes__Type_8 = ((MR_Word) hlds__vartypes__conv0_Type_8);
#line 148 "vartypes.m"
        {
#line 148 "vartypes.m"
          hlds__vartypes__lookup_var_types_3_p_0(hlds__vartypes__HeadVar__1_1, hlds__vartypes__Vars_7, &hlds__vartypes__Types_9);
        }
#line 146 "vartypes.m"
        {
#line 146 "vartypes.m"
          MR_Word base;
#line 146 "vartypes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "vartypes.m"
          *hlds__vartypes__HeadVar__3_3 = base;
#line 146 "vartypes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__vartypes__Type_8));
#line 146 "vartypes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__vartypes__Types_9));
#line 146 "vartypes.m"
        }
#line 146 "vartypes.m"
      }
#line 145 "vartypes.m"
  }
#line 52 "vartypes.m"
}

#line 51 "vartypes.m"
void MR_CALL 
hlds__vartypes__lookup_var_type_3_p_0(
#line 51 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_4,
#line 51 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 51 "vartypes.m"
  MR_Word * hlds__vartypes__Type_6)
#line 51 "vartypes.m"
{
#line 143 "vartypes.m"
  {
#line 143 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 143 "vartypes.m"
    MR_Box hlds__vartypes__conv0_Type_6;

#line 143 "vartypes.m"
    {
#line 143 "vartypes.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
#line 143 "vartypes.m"
    *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
#line 143 "vartypes.m"
  }
#line 51 "vartypes.m"
}

#line 49 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__search_var_type_3_p_0(
#line 49 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_4,
#line 49 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 49 "vartypes.m"
  MR_Word * hlds__vartypes__Type_6)
#line 49 "vartypes.m"
{
#line 140 "vartypes.m"
  {
#line 140 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;
#line 140 "vartypes.m"
    MR_Box hlds__vartypes__conv0_Type_6;

#line 140 "vartypes.m"
    {
#line 140 "vartypes.m"
      hlds__vartypes__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_4, ((MR_Box) (hlds__vartypes__Var_5)), &hlds__vartypes__conv0_Type_6);
    }
#line 140 "vartypes.m"
    if (hlds__vartypes__succeeded)
#line 140 "vartypes.m"
      {
#line 140 "vartypes.m"
        *hlds__vartypes__Type_6 = ((MR_Word) hlds__vartypes__conv0_Type_6);
#line 140 "vartypes.m"
        hlds__vartypes__succeeded = MR_TRUE;
#line 140 "vartypes.m"
      }
#line 140 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 140 "vartypes.m"
  }
#line 49 "vartypes.m"
}

#line 47 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__is_in_vartypes_2_p_0(
#line 47 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 47 "vartypes.m"
  MR_Word hlds__vartypes__Var_4)
#line 47 "vartypes.m"
{
#line 137 "vartypes.m"
  {
#line 137 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 137 "vartypes.m"
    {
#line 137 "vartypes.m"
      hlds__vartypes__succeeded = mercury__map__contains_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, ((MR_Box) (hlds__vartypes__Var_4)));
    }
#line 137 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 137 "vartypes.m"
  }
#line 47 "vartypes.m"
}

#line 44 "vartypes.m"
void MR_CALL 
hlds__vartypes__search_insert_var_type_5_p_0(
#line 44 "vartypes.m"
  MR_Word hlds__vartypes__Var_6,
#line 44 "vartypes.m"
  MR_Word hlds__vartypes__NewType_7,
#line 44 "vartypes.m"
  MR_Word * hlds__vartypes__MaybeOldType_8,
#line 44 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_10,
#line 44 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_11)
#line 44 "vartypes.m"
{
#line 134 "vartypes.m"
  {
#line 134 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 134 "vartypes.m"
    {
#line 134 "vartypes.m"
      mercury__map__search_insert_5_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_6)), ((MR_Box) (hlds__vartypes__NewType_7)), hlds__vartypes__MaybeOldType_8, hlds__vartypes__STATE_VARIABLE_VarTypes_0_10, hlds__vartypes__STATE_VARIABLE_VarTypes_11);
    }
#line 134 "vartypes.m"
  }
#line 44 "vartypes.m"
}

#line 41 "vartypes.m"
void MR_CALL 
hlds__vartypes__update_var_type_4_p_0(
#line 41 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 41 "vartypes.m"
  MR_Word hlds__vartypes__Type_6,
#line 41 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 41 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 41 "vartypes.m"
{
#line 131 "vartypes.m"
  {
#line 131 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 131 "vartypes.m"
    {
#line 131 "vartypes.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
#line 131 "vartypes.m"
  }
#line 41 "vartypes.m"
}

#line 39 "vartypes.m"
void MR_CALL 
hlds__vartypes__add_var_type_4_p_0(
#line 39 "vartypes.m"
  MR_Word hlds__vartypes__Var_5,
#line 39 "vartypes.m"
  MR_Word hlds__vartypes__Type_6,
#line 39 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_8,
#line 39 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_9)
#line 39 "vartypes.m"
{
#line 128 "vartypes.m"
  {
#line 128 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 128 "vartypes.m"
    {
#line 128 "vartypes.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__vartypes__Var_5)), ((MR_Box) (hlds__vartypes__Type_6)), hlds__vartypes__STATE_VARIABLE_VarTypes_0_8, hlds__vartypes__STATE_VARIABLE_VarTypes_9);
    }
#line 128 "vartypes.m"
  }
#line 39 "vartypes.m"
}

#line 37 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_optimize_2_p_0(
#line 37 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_4,
#line 37 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_5)
#line 37 "vartypes.m"
{
#line 125 "vartypes.m"
  {
#line 125 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 125 "vartypes.m"
    {
#line 125 "vartypes.m"
      mercury__map__optimize_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_4, hlds__vartypes__STATE_VARIABLE_VarTypes_5);
    }
#line 125 "vartypes.m"
  }
#line 37 "vartypes.m"
}

#line 35 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_select_3_p_0(
#line 35 "vartypes.m"
  MR_Word hlds__vartypes__SelectedVars_4,
#line 35 "vartypes.m"
  MR_Word hlds__vartypes__STATE_VARIABLE_VarTypes_0_6,
#line 35 "vartypes.m"
  MR_Word * hlds__vartypes__STATE_VARIABLE_VarTypes_7)
#line 35 "vartypes.m"
{
#line 122 "vartypes.m"
  {
#line 122 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 122 "vartypes.m"
    {
#line 122 "vartypes.m"
      mercury__map__select_3_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__STATE_VARIABLE_VarTypes_0_6, hlds__vartypes__SelectedVars_4, hlds__vartypes__STATE_VARIABLE_VarTypes_7);
    }
#line 122 "vartypes.m"
  }
#line 35 "vartypes.m"
}

#line 33 "vartypes.m"
void MR_CALL 
hlds__vartypes__vartypes_count_2_p_0(
#line 33 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_3,
#line 33 "vartypes.m"
  MR_Integer * hlds__vartypes__Count_4)
#line 33 "vartypes.m"
{
#line 119 "vartypes.m"
  {
#line 119 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 119 "vartypes.m"
    {
#line 119 "vartypes.m"
      mercury__map__count_2_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_3, hlds__vartypes__Count_4);
    }
#line 119 "vartypes.m"
  }
#line 33 "vartypes.m"
}

#line 31 "vartypes.m"
MR_bool MR_CALL 
hlds__vartypes__vartypes_is_empty_1_p_0(
#line 31 "vartypes.m"
  MR_Word hlds__vartypes__VarTypes_2)
#line 31 "vartypes.m"
{
#line 116 "vartypes.m"
  {
#line 116 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 116 "vartypes.m"
    {
#line 116 "vartypes.m"
      hlds__vartypes__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
    }
#line 116 "vartypes.m"
    return hlds__vartypes__succeeded;
#line 116 "vartypes.m"
  }
#line 31 "vartypes.m"
}

#line 29 "vartypes.m"
void MR_CALL 
hlds__vartypes__init_vartypes_1_p_0(
#line 29 "vartypes.m"
  MR_Word * hlds__vartypes__VarTypes_2)
#line 29 "vartypes.m"
{
#line 113 "vartypes.m"
  {
#line 113 "vartypes.m"
    MR_bool hlds__vartypes__succeeded;

#line 113 "vartypes.m"
    {
#line 113 "vartypes.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__vartypes_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__vartypes__VarTypes_2);
    }
#line 113 "vartypes.m"
  }
#line 29 "vartypes.m"
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
