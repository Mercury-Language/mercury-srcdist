/*
** Automatically generated from `parse_vars.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module parse_tree.parse_vars. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_vars__init
ENDINIT
*/

#include "parse_tree.parse_vars.mih"


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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1[4];

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1[2];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1[2];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0[4];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1[1];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1[1];

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0[2];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1[1];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1[1];

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_14,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_38,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_44,
  MR_Word parse_tree__parse_vars__ContextPieces_6,
  MR_Word parse_tree__parse_vars__VarSet_7,
  MR_String parse_tree__parse_vars__Expected_8,
  MR_Word parse_tree__parse_vars__Term_9,
  MR_Word * parse_tree__parse_vars__Spec_10);

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_34,
  MR_Word parse_tree__parse_vars__ContextPieces_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__Term_7,
  MR_Word * parse_tree__parse_vars__Spec_8);

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_34,
  MR_Word parse_tree__parse_vars__ContextPieces_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__Term_7,
  MR_Word * parse_tree__parse_vars__Spec_8);


static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_3[1][4];




static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "got"))
  },
};

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_vars_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_vars_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0 = {
  (MR_String) "osdc_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1 = {
  (MR_String) "osdc_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2 = {
  (MR_String) "osdc_dot_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3 = {
  (MR_String) "osdc_colon_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "ordinary_state_dot_colon_var",
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1 },
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0 = {
  (MR_String) "os_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1 = {
  (MR_String) "os_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1
};

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "ordinary_state_var",
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1 },
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_vars__term__pti_var_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0 = {
  (MR_String) "plain_state_dot_colon_vars",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0
};

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "plain_state_dot_colon_vars",
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1 },
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0 = {
  (MR_String) "plain_state_vars",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0
};

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1[1] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "plain_state_vars",
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1 },
  {     parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1
};

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;

    {
      parse_tree__parse_vars__succeeded = parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), ((MR_Word) parse_tree__parse_vars__wrapper_arg_2), ((MR_Word) parse_tree__parse_vars__wrapper_arg_3));
    }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_vars__conv0_HeadVar__1_1;

    {
      parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), &parse_tree__parse_vars__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_vars__wrapper_arg_3), ((MR_Word) parse_tree__parse_vars__wrapper_arg_4));
    }
    *parse_tree__parse_vars__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_vars__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;

    {
      parse_tree__parse_vars__succeeded = parse_tree__parse_vars____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), ((MR_Word) parse_tree__parse_vars__wrapper_arg_2), ((MR_Word) parse_tree__parse_vars__wrapper_arg_3));
    }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_vars__conv0_HeadVar__1_1;

    {
      parse_tree__parse_vars____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), &parse_tree__parse_vars__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_vars__wrapper_arg_3), ((MR_Word) parse_tree__parse_vars__wrapper_arg_4));
    }
    *parse_tree__parse_vars__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_vars__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;

    {
      parse_tree__parse_vars__succeeded = parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), ((MR_Word) parse_tree__parse_vars__wrapper_arg_2), ((MR_Word) parse_tree__parse_vars__wrapper_arg_3));
    }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_vars__conv0_HeadVar__1_1;

    {
      parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), &parse_tree__parse_vars__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_vars__wrapper_arg_3), ((MR_Word) parse_tree__parse_vars__wrapper_arg_4));
    }
    *parse_tree__parse_vars__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_vars__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;

    {
      parse_tree__parse_vars__succeeded = parse_tree__parse_vars____Unify____plain_state_vars_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), ((MR_Word) parse_tree__parse_vars__wrapper_arg_2), ((MR_Word) parse_tree__parse_vars__wrapper_arg_3));
    }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001(
  MR_Box parse_tree__parse_vars__wrapper_arg_1,
  MR_Box * parse_tree__parse_vars__wrapper_arg_2,
  MR_Box parse_tree__parse_vars__wrapper_arg_3,
  MR_Box parse_tree__parse_vars__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_vars__conv0_HeadVar__1_1;

    {
      parse_tree__parse_vars____Compare____plain_state_vars_1_0(((MR_Word) parse_tree__parse_vars__wrapper_arg_1), &parse_tree__parse_vars__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_vars__wrapper_arg_3), ((MR_Word) parse_tree__parse_vars__wrapper_arg_4));
    }
    *parse_tree__parse_vars__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_vars__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_11,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_9 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;
    MR_Integer parse_tree__parse_vars__CastY_10 = (MR_Integer) parse_tree__parse_vars__HeadVar__3_3;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_9 == parse_tree__parse_vars__CastY_10);
    if (parse_tree__parse_vars__succeeded)
      *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_8_8;
        MR_Word parse_tree__parse_vars__TypeInfo_13_13;

        {
          parse_tree__parse_vars__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_11));
        }
        {
          mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_13_13, &parse_tree__parse_vars__V_8_8, (MR_Word) parse_tree__parse_vars__V_4_4, (MR_Word) parse_tree__parse_vars__V_6_6);
        }
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_8_8 == (MR_Integer) 0);
        parse_tree__parse_vars__succeeded = !(parse_tree__parse_vars__succeeded);
        if (parse_tree__parse_vars__succeeded)
          *parse_tree__parse_vars__HeadVar__1_1 = parse_tree__parse_vars__V_8_8;
        else
          {
            MR_Word parse_tree__parse_vars__TypeInfo_17_17;

            {
              parse_tree__parse_vars__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_17_17, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_11));
            }
            {
              mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_17_17, parse_tree__parse_vars__HeadVar__1_1, (MR_Word) parse_tree__parse_vars__V_5_5, (MR_Word) parse_tree__parse_vars__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_7 = (MR_Integer) parse_tree__parse_vars__HeadVar__1_1;
    MR_Integer parse_tree__parse_vars__CastY_8 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_7 == parse_tree__parse_vars__CastY_8);
    if (parse_tree__parse_vars__succeeded)
      parse_tree__parse_vars__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__parse_vars__TypeInfo_15_15;
        MR_Word parse_tree__parse_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__parse_vars__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_15_15, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_9));
        }
        {
          parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_15_15, (MR_Word) parse_tree__parse_vars__V_3_3, (MR_Word) parse_tree__parse_vars__V_5_5);
        }
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_15_15, (MR_Word) parse_tree__parse_vars__V_4_4, (MR_Word) parse_tree__parse_vars__V_6_6);
          }
      }
    return parse_tree__parse_vars__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_17,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_15 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;
    MR_Integer parse_tree__parse_vars__CastY_16 = (MR_Integer) parse_tree__parse_vars__HeadVar__3_3;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_15 == parse_tree__parse_vars__CastY_16);
    if (parse_tree__parse_vars__succeeded)
      *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__parse_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__parse_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__parse_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__parse_vars__V_12_12;
        MR_Word parse_tree__parse_vars__TypeInfo_19_19;

        {
          parse_tree__parse_vars__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_19_19, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_17));
        }
        {
          mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_19_19, &parse_tree__parse_vars__V_12_12, (MR_Word) parse_tree__parse_vars__V_4_4, (MR_Word) parse_tree__parse_vars__V_8_8);
        }
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_12_12 == (MR_Integer) 0);
        parse_tree__parse_vars__succeeded = !(parse_tree__parse_vars__succeeded);
        if (parse_tree__parse_vars__succeeded)
          *parse_tree__parse_vars__HeadVar__1_1 = parse_tree__parse_vars__V_12_12;
        else
          {
            MR_Word parse_tree__parse_vars__V_13_13;
            MR_Word parse_tree__parse_vars__TypeInfo_23_23;

            {
              parse_tree__parse_vars__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_23_23, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_17));
            }
            {
              mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_23_23, &parse_tree__parse_vars__V_13_13, (MR_Word) parse_tree__parse_vars__V_5_5, (MR_Word) parse_tree__parse_vars__V_9_9);
            }
            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_13_13 == (MR_Integer) 0);
            parse_tree__parse_vars__succeeded = !(parse_tree__parse_vars__succeeded);
            if (parse_tree__parse_vars__succeeded)
              *parse_tree__parse_vars__HeadVar__1_1 = parse_tree__parse_vars__V_13_13;
            else
              {
                MR_Word parse_tree__parse_vars__V_14_14;
                MR_Word parse_tree__parse_vars__TypeInfo_27_27;

                {
                  parse_tree__parse_vars__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_27_27, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_17));
                }
                {
                  mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_27_27, &parse_tree__parse_vars__V_14_14, (MR_Word) parse_tree__parse_vars__V_6_6, (MR_Word) parse_tree__parse_vars__V_10_10);
                }
                parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_14_14 == (MR_Integer) 0);
                parse_tree__parse_vars__succeeded = !(parse_tree__parse_vars__succeeded);
                if (parse_tree__parse_vars__succeeded)
                  *parse_tree__parse_vars__HeadVar__1_1 = parse_tree__parse_vars__V_14_14;
                else
                  {
                    MR_Word parse_tree__parse_vars__TypeInfo_31_31;

                    {
                      parse_tree__parse_vars__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_31_31, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_17));
                    }
                    {
                      mercury__list____Compare____list_1_0(parse_tree__parse_vars__TypeInfo_31_31, parse_tree__parse_vars__HeadVar__1_1, (MR_Word) parse_tree__parse_vars__V_7_7, (MR_Word) parse_tree__parse_vars__V_11_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_11 = (MR_Integer) parse_tree__parse_vars__HeadVar__1_1;
    MR_Integer parse_tree__parse_vars__CastY_12 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_11 == parse_tree__parse_vars__CastY_12);
    if (parse_tree__parse_vars__succeeded)
      parse_tree__parse_vars__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__parse_vars__TypeInfo_27_27;
        MR_Word parse_tree__parse_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__parse_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__parse_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 3)));

        {
          parse_tree__parse_vars__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_27_27, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_13));
        }
        {
          parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_27_27, (MR_Word) parse_tree__parse_vars__V_3_3, (MR_Word) parse_tree__parse_vars__V_7_7);
        }
        if (parse_tree__parse_vars__succeeded)
          {
            {
              parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_27_27, (MR_Word) parse_tree__parse_vars__V_4_4, (MR_Word) parse_tree__parse_vars__V_8_8);
            }
            if (parse_tree__parse_vars__succeeded)
              {
                {
                  parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_27_27, (MR_Word) parse_tree__parse_vars__V_5_5, (MR_Word) parse_tree__parse_vars__V_9_9);
                }
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_vars__TypeInfo_27_27, (MR_Word) parse_tree__parse_vars__V_6_6, (MR_Word) parse_tree__parse_vars__V_10_10);
                  }
              }
          }
      }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_14,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_12 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;
    MR_Integer parse_tree__parse_vars__CastY_13 = (MR_Integer) parse_tree__parse_vars__HeadVar__3_3;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_12 == parse_tree__parse_vars__CastY_13);
    if (parse_tree__parse_vars__succeeded)
      *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_14, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_19_19, parse_tree__parse_vars__V_5_5);
            }
          }
        else
          *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word parse_tree__parse_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__parse_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_14, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_20_20, parse_tree__parse_vars__V_11_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_7 = (MR_Integer) parse_tree__parse_vars__HeadVar__1_1;
    MR_Integer parse_tree__parse_vars__CastY_8 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_7 == parse_tree__parse_vars__CastY_8);
    if (parse_tree__parse_vars__succeeded)
      parse_tree__parse_vars__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_4_4;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
            {
              parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_9, parse_tree__parse_vars__V_3_3, parse_tree__parse_vars__V_4_4);
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_vars__V_6_6;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
            {
              parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_9, parse_tree__parse_vars__V_5_5, parse_tree__parse_vars__V_6_6);
            }
          }
      }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_38,
  MR_Word * parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2,
  MR_Word parse_tree__parse_vars__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_36 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;
    MR_Integer parse_tree__parse_vars__CastY_37 = (MR_Integer) parse_tree__parse_vars__HeadVar__3_3;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_36 == parse_tree__parse_vars__CastY_37);
    if (parse_tree__parse_vars__succeeded)
      *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_vars__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_38, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_49_49, parse_tree__parse_vars__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_vars__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_38, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_50_50, parse_tree__parse_vars__V_15_15);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_vars__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_vars__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_38, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_48_48, parse_tree__parse_vars__V_25_25);
                  }
                }
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__parse_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__parse_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_vars__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_38, parse_tree__parse_vars__HeadVar__1_1, parse_tree__parse_vars__V_47_47, parse_tree__parse_vars__V_35_35);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_vars__HeadVar__1_1,
  MR_Word parse_tree__parse_vars__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Integer parse_tree__parse_vars__CastX_11 = (MR_Integer) parse_tree__parse_vars__HeadVar__1_1;
    MR_Integer parse_tree__parse_vars__CastY_12 = (MR_Integer) parse_tree__parse_vars__HeadVar__2_2;

    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__CastX_11 == parse_tree__parse_vars__CastY_12);
    if (parse_tree__parse_vars__succeeded)
      parse_tree__parse_vars__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_vars__V_4_4;

            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_13, parse_tree__parse_vars__V_3_3, parse_tree__parse_vars__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_vars__V_6_6;

            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_13, parse_tree__parse_vars__V_5_5, parse_tree__parse_vars__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_vars__V_8_8;

            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_13, parse_tree__parse_vars__V_7_7, parse_tree__parse_vars__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_vars__V_10_10;

            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_vars__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_vars__succeeded = mercury__term____Unify____var_1_0(parse_tree__parse_vars__TypeInfo_for_T_13, parse_tree__parse_vars__V_9_9, parse_tree__parse_vars__V_10_10);
                }
              }
          }
          break;
      }
    return parse_tree__parse_vars__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_44,
  MR_Word parse_tree__parse_vars__ContextPieces_6,
  MR_Word parse_tree__parse_vars__VarSet_7,
  MR_String parse_tree__parse_vars__Expected_8,
  MR_Word parse_tree__parse_vars__Term_9,
  MR_Word * parse_tree__parse_vars__Spec_10)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Word parse_tree__parse_vars__TypeCtorInfo_45_45;
    MR_String parse_tree__parse_vars__TermStr_11;
    MR_Word parse_tree__parse_vars__Pieces_12;
    MR_Word parse_tree__parse_vars__V_13_13;
    MR_Word parse_tree__parse_vars__V_14_14;
    MR_Word parse_tree__parse_vars__V_16_16;
    MR_Word parse_tree__parse_vars__V_19_19;
    MR_Word parse_tree__parse_vars__V_20_20;
    MR_Word parse_tree__parse_vars__V_21_21;
    MR_Word parse_tree__parse_vars__V_24_24;
    MR_Word parse_tree__parse_vars__V_27_27;
    MR_Word parse_tree__parse_vars__V_28_28;
    MR_Word parse_tree__parse_vars__V_37_37;
    MR_Word parse_tree__parse_vars__V_38_38;
    MR_Word parse_tree__parse_vars__V_39_39;
    MR_Word parse_tree__parse_vars__V_40_40;
    MR_Word parse_tree__parse_vars__V_41_41;

    {
      parse_tree__parse_vars__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_vars__TypeInfo_for_T_44, parse_tree__parse_vars__VarSet_7, parse_tree__parse_vars__Term_9);
    }
    parse_tree__parse_vars__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_vars__V_13_13 = mercury__cord__list_1_f_0(parse_tree__parse_vars__TypeCtorInfo_45_45, parse_tree__parse_vars__ContextPieces_6);
    }
    {
      parse_tree__parse_vars__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_20_20, 1) = ((MR_Box) (parse_tree__parse_vars__Expected_8));
    }
    {
      parse_tree__parse_vars__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_28_28, 1) = ((MR_Box) (parse_tree__parse_vars__TermStr_11));
    }
    {
      parse_tree__parse_vars__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 0) = ((MR_Box) (parse_tree__parse_vars__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_1[2])));
    }
    {
      parse_tree__parse_vars__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[8])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_24_24, 1) = ((MR_Box) (parse_tree__parse_vars__V_27_27));
    }
    {
      parse_tree__parse_vars__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_21_21, 1) = ((MR_Box) (parse_tree__parse_vars__V_24_24));
    }
    {
      parse_tree__parse_vars__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_19_19, 0) = ((MR_Box) (parse_tree__parse_vars__V_20_20));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_19_19, 1) = ((MR_Box) (parse_tree__parse_vars__V_21_21));
    }
    {
      parse_tree__parse_vars__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_16_16, 1) = ((MR_Box) (parse_tree__parse_vars__V_19_19));
    }
    {
      parse_tree__parse_vars__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 1) = ((MR_Box) (parse_tree__parse_vars__V_16_16));
    }
    {
      parse_tree__parse_vars__Pieces_12 = mercury__list__f_43_43_2_f_0(parse_tree__parse_vars__TypeCtorInfo_45_45, parse_tree__parse_vars__V_13_13, parse_tree__parse_vars__V_14_14);
    }
    {
      parse_tree__parse_vars__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__parse_vars__TypeInfo_for_T_44, parse_tree__parse_vars__Term_9);
    }
    {
      parse_tree__parse_vars__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_41_41, 0) = ((MR_Box) (parse_tree__parse_vars__Pieces_12));
    }
    {
      parse_tree__parse_vars__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, 0) = ((MR_Box) (parse_tree__parse_vars__V_41_41));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_vars__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_38_38, 0) = ((MR_Box) (parse_tree__parse_vars__V_39_39));
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_38_38, 1) = ((MR_Box) (parse_tree__parse_vars__V_40_40));
    }
    {
      parse_tree__parse_vars__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_37_37, 0) = ((MR_Box) (parse_tree__parse_vars__V_38_38));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__parse_vars__Spec_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_vars__V_37_37));
    }
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_34,
  MR_Word parse_tree__parse_vars__ContextPieces_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__Term_7,
  MR_Word * parse_tree__parse_vars__Spec_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Word parse_tree__parse_vars__TypeCtorInfo_35_35;
    MR_String parse_tree__parse_vars__TermStr_9;
    MR_Word parse_tree__parse_vars__Pieces_10;
    MR_Word parse_tree__parse_vars__V_11_11;
    MR_Word parse_tree__parse_vars__V_12_12;
    MR_Word parse_tree__parse_vars__V_14_14;
    MR_Word parse_tree__parse_vars__V_17_17;
    MR_Word parse_tree__parse_vars__V_18_18;
    MR_Word parse_tree__parse_vars__V_27_27;
    MR_Word parse_tree__parse_vars__V_28_28;
    MR_Word parse_tree__parse_vars__V_29_29;
    MR_Word parse_tree__parse_vars__V_30_30;
    MR_Word parse_tree__parse_vars__V_31_31;

    {
      parse_tree__parse_vars__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_vars__TypeInfo_for_T_34, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__Term_7);
    }
    parse_tree__parse_vars__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_vars__V_11_11 = mercury__cord__list_1_f_0(parse_tree__parse_vars__TypeCtorInfo_35_35, parse_tree__parse_vars__ContextPieces_5);
    }
    {
      parse_tree__parse_vars__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_18_18, 1) = ((MR_Box) (parse_tree__parse_vars__TermStr_9));
    }
    {
      parse_tree__parse_vars__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_17_17, 0) = ((MR_Box) (parse_tree__parse_vars__V_18_18));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_1[2])));
    }
    {
      parse_tree__parse_vars__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[5])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 1) = ((MR_Box) (parse_tree__parse_vars__V_17_17));
    }
    {
      parse_tree__parse_vars__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_12_12, 1) = ((MR_Box) (parse_tree__parse_vars__V_14_14));
    }
    {
      parse_tree__parse_vars__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__parse_vars__TypeCtorInfo_35_35, parse_tree__parse_vars__V_11_11, parse_tree__parse_vars__V_12_12);
    }
    {
      parse_tree__parse_vars__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__parse_vars__TypeInfo_for_T_34, parse_tree__parse_vars__Term_7);
    }
    {
      parse_tree__parse_vars__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_31_31, 0) = ((MR_Box) (parse_tree__parse_vars__Pieces_10));
    }
    {
      parse_tree__parse_vars__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, 0) = ((MR_Box) (parse_tree__parse_vars__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_vars__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_28_28, 0) = ((MR_Box) (parse_tree__parse_vars__V_29_29));
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_28_28, 1) = ((MR_Box) (parse_tree__parse_vars__V_30_30));
    }
    {
      parse_tree__parse_vars__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 0) = ((MR_Box) (parse_tree__parse_vars__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__parse_vars__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_vars__V_27_27));
    }
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_34,
  MR_Word parse_tree__parse_vars__ContextPieces_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__Term_7,
  MR_Word * parse_tree__parse_vars__Spec_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded;
    MR_Word parse_tree__parse_vars__TypeCtorInfo_35_35;
    MR_String parse_tree__parse_vars__TermStr_9;
    MR_Word parse_tree__parse_vars__Pieces_10;
    MR_Word parse_tree__parse_vars__V_11_11;
    MR_Word parse_tree__parse_vars__V_12_12;
    MR_Word parse_tree__parse_vars__V_14_14;
    MR_Word parse_tree__parse_vars__V_17_17;
    MR_Word parse_tree__parse_vars__V_18_18;
    MR_Word parse_tree__parse_vars__V_27_27;
    MR_Word parse_tree__parse_vars__V_28_28;
    MR_Word parse_tree__parse_vars__V_29_29;
    MR_Word parse_tree__parse_vars__V_30_30;
    MR_Word parse_tree__parse_vars__V_31_31;

    {
      parse_tree__parse_vars__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_vars__TypeInfo_for_T_34, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__Term_7);
    }
    parse_tree__parse_vars__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_vars__V_11_11 = mercury__cord__list_1_f_0(parse_tree__parse_vars__TypeCtorInfo_35_35, parse_tree__parse_vars__ContextPieces_5);
    }
    {
      parse_tree__parse_vars__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__V_18_18, 1) = ((MR_Box) (parse_tree__parse_vars__TermStr_9));
    }
    {
      parse_tree__parse_vars__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_17_17, 0) = ((MR_Box) (parse_tree__parse_vars__V_18_18));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_1[2])));
    }
    {
      parse_tree__parse_vars__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_vars_scalar_common_1[4])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_14_14, 1) = ((MR_Box) (parse_tree__parse_vars__V_17_17));
    }
    {
      parse_tree__parse_vars__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_12_12, 1) = ((MR_Box) (parse_tree__parse_vars__V_14_14));
    }
    {
      parse_tree__parse_vars__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__parse_vars__TypeCtorInfo_35_35, parse_tree__parse_vars__V_11_11, parse_tree__parse_vars__V_12_12);
    }
    {
      parse_tree__parse_vars__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__parse_vars__TypeInfo_for_T_34, parse_tree__parse_vars__Term_7);
    }
    {
      parse_tree__parse_vars__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_31_31, 0) = ((MR_Box) (parse_tree__parse_vars__Pieces_10));
    }
    {
      parse_tree__parse_vars__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, 0) = ((MR_Box) (parse_tree__parse_vars__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_vars__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_28_28, 0) = ((MR_Box) (parse_tree__parse_vars__V_29_29));
      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_28_28, 1) = ((MR_Box) (parse_tree__parse_vars__V_30_30));
    }
    {
      parse_tree__parse_vars__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 0) = ((MR_Box) (parse_tree__parse_vars__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__parse_vars__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_vars__V_27_27));
    }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_102,
  MR_Word parse_tree__parse_vars__Term_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__ContextPieces_7,
  MR_Word * parse_tree__parse_vars__MaybeVars_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_vars__V_40_40;
    MR_String parse_tree__parse_vars__V_41_41;
    MR_Word parse_tree__parse_vars__V_42_42;
    MR_Word parse_tree__parse_vars__V_9_9;

    if (parse_tree__parse_vars__succeeded)
      {
        parse_tree__parse_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
        parse_tree__parse_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
        parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_40_40)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_40_40, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_41_41, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__parse_vars__succeeded)
      {
        *parse_tree__parse_vars__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_2[2]);
      }
    else
      {
        MR_Word parse_tree__parse_vars__HeadTerm_10;
        MR_Word parse_tree__parse_vars__Tail_11;
        MR_Word parse_tree__parse_vars__V_48_48;
        MR_String parse_tree__parse_vars__V_49_49;
        MR_Word parse_tree__parse_vars__V_50_50;
        MR_Word parse_tree__parse_vars__V_51_51;
        MR_Word parse_tree__parse_vars__V_52_52;
        MR_Word parse_tree__parse_vars__V_12_12;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
            parse_tree__parse_vars__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
            parse_tree__parse_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_48_48)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_48_48, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_49_49, (MR_String) "[|]") == 0);
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_50_50)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_50_50, (MR_Integer) 0)));
                        parse_tree__parse_vars__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_50_50, (MR_Integer) 1)));
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_51_51)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_51_51, (MR_Integer) 0)));
                            parse_tree__parse_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_51_51, (MR_Integer) 1)));
                            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_vars__succeeded)
          {
            MR_Word parse_tree__parse_vars__MaybeHeadVar_23;
            MR_Word parse_tree__parse_vars__MaybeTailVars_25;
            MR_Word parse_tree__parse_vars__VarKind0_15;
            MR_Word parse_tree__parse_vars__VarKind_26;
            MR_Word parse_tree__parse_vars__TailVars_27;
            MR_Word parse_tree__parse_vars__TailStateVars_28;
            MR_Word parse_tree__parse_vars__TailDotVars_29;
            MR_Word parse_tree__parse_vars__TailColonVars_30;
            MR_Word parse_tree__parse_vars__V_71_71;

            if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_vars__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));
                MR_Word parse_tree__parse_vars__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_vars__V_131_131;
                MR_Word parse_tree__parse_vars__V_132_132;
                MR_String parse_tree__parse_vars__V_133_133;
                MR_Word parse_tree__parse_vars__V_135_135;
                MR_Word parse_tree__parse_vars__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 2)));
                MR_Word parse_tree__parse_vars__V_134_134;

                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_129_129)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_129_129, (MR_Integer) 0)));
                    parse_tree__parse_vars__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_129_129, (MR_Integer) 1)));
                    parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_130_130)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_130_130, (MR_Integer) 0)));
                            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_132_132)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_vars__succeeded)
                              {
                                parse_tree__parse_vars__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_132_132, (MR_Integer) 0)));
                                parse_tree__parse_vars__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_132_132, (MR_Integer) 1)));
                                if ((strcmp(parse_tree__parse_vars__V_133_133, (MR_String) "!") == 0))
                                  {
                                    {
                                      parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__V_135_135));
                                    }
                                    parse_tree__parse_vars__succeeded = MR_TRUE;
                                  }
                                else
                                if ((strcmp(parse_tree__parse_vars__V_133_133, (MR_String) "!.") == 0))
                                  {
                                    {
                                      parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(2), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__V_135_135));
                                    }
                                    parse_tree__parse_vars__succeeded = MR_TRUE;
                                  }
                                else
                                if ((strcmp(parse_tree__parse_vars__V_133_133, (MR_String) "!:") == 0))
                                  {
                                    {
                                      parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__V_135_135));
                                    }
                                    parse_tree__parse_vars__succeeded = MR_TRUE;
                                  }
                                else
                                  parse_tree__parse_vars__succeeded = MR_FALSE;
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_vars__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__V0_13));
                }
                parse_tree__parse_vars__succeeded = MR_TRUE;
              }
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__MaybeHeadVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__parse_vars__VarKind0_15));
              }
            else
              {
                MR_Word parse_tree__parse_vars__HeadSpec_24;
                MR_Word parse_tree__parse_vars__V_69_69;

                {
                  parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a variable or state variable", parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__HeadSpec_24);
                }
                {
                  parse_tree__parse_vars__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_69_69, 0) = ((MR_Box) (parse_tree__parse_vars__HeadSpec_24));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_vars__MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__parse_vars__V_69_69));
                }
              }
            {
              parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__Tail_11, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__ContextPieces_7, &parse_tree__parse_vars__MaybeTailVars_25);
            }
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeHeadVar_23)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__VarKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_23, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeTailVars_25)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeTailVars_25, (MR_Integer) 0)));
                    parse_tree__parse_vars__TailVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_71_71, (MR_Integer) 0)));
                    parse_tree__parse_vars__TailStateVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_71_71, (MR_Integer) 1)));
                    parse_tree__parse_vars__TailDotVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_71_71, (MR_Integer) 2)));
                    parse_tree__parse_vars__TailColonVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_71_71, (MR_Integer) 3)));
                    parse_tree__parse_vars__succeeded = MR_TRUE;
                  }
              }
            if (parse_tree__parse_vars__succeeded)
              switch (MR_tag((MR_Word) parse_tree__parse_vars__VarKind_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__parse_vars__V_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__VarKind_26, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_vars__TypeInfo_104_104;

                    {
                      parse_tree__parse_vars__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                    }
                    {
                      parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_104_104, parse_tree__parse_vars__V_31, parse_tree__parse_vars__TailVars_27);
                    }
                    if (parse_tree__parse_vars__succeeded)
                      {
                        MR_Word parse_tree__parse_vars__Spec_32;
                        MR_Word parse_tree__parse_vars__V_81_81;

                        {
                          parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_32);
                        }
                        {
                          parse_tree__parse_vars__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_81_81, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_32));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_81_81));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_vars__Vars_33;
                        MR_Word parse_tree__parse_vars__V_83_83;

                        {
                          parse_tree__parse_vars__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_33, 0) = ((MR_Box) (parse_tree__parse_vars__V_31));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_33, 1) = ((MR_Box) (parse_tree__parse_vars__TailVars_27));
                        }
                        {
                          parse_tree__parse_vars__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_83_83, 0) = ((MR_Box) (parse_tree__parse_vars__Vars_33));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_83_83, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_28));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_83_83, 2) = ((MR_Box) (parse_tree__parse_vars__TailDotVars_29));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_83_83, 3) = ((MR_Box) (parse_tree__parse_vars__TailColonVars_30));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_83_83));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_vars__SV_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__parse_vars__TypeInfo_106_106;

                      {
                        parse_tree__parse_vars__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                      }
                      {
                        parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_106_106, parse_tree__parse_vars__SV_34, parse_tree__parse_vars__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__parse_vars__succeeded))
                      {
                        {
                          MR_Word parse_tree__parse_vars__TypeInfo_108_108;

                          {
                            parse_tree__parse_vars__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                          }
                          {
                            parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_108_108, parse_tree__parse_vars__SV_34, parse_tree__parse_vars__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__parse_vars__succeeded))
                          {
                            MR_Word parse_tree__parse_vars__TypeInfo_110_110;

                            {
                              parse_tree__parse_vars__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                            }
                            {
                              parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_110_110, parse_tree__parse_vars__SV_34, parse_tree__parse_vars__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__parse_vars__succeeded)
                      {
                        MR_Word parse_tree__parse_vars__V_78_78;
                        MR_Word parse_tree__parse_vars__Spec_90;

                        {
                          parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_90);
                        }
                        {
                          parse_tree__parse_vars__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_78_78, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_90));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_78_78));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_vars__StateVars_35;
                        MR_Word parse_tree__parse_vars__V_80_80;

                        {
                          parse_tree__parse_vars__StateVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__StateVars_35, 0) = ((MR_Box) (parse_tree__parse_vars__SV_34));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__StateVars_35, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_28));
                        }
                        {
                          parse_tree__parse_vars__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_80_80, 0) = ((MR_Box) (parse_tree__parse_vars__TailVars_27));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_80_80, 1) = ((MR_Box) (parse_tree__parse_vars__StateVars_35));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_80_80, 2) = ((MR_Box) (parse_tree__parse_vars__TailDotVars_29));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_80_80, 3) = ((MR_Box) (parse_tree__parse_vars__TailColonVars_30));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_80_80));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__parse_vars__SV_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_vars__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__parse_vars__TypeInfo_112_112;

                      {
                        parse_tree__parse_vars__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                      }
                      {
                        parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_112_112, parse_tree__parse_vars__SV_96, parse_tree__parse_vars__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__parse_vars__succeeded))
                      {
                        {
                          MR_Word parse_tree__parse_vars__TypeInfo_114_114;

                          {
                            parse_tree__parse_vars__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_114_114, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                          }
                          {
                            parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_114_114, parse_tree__parse_vars__SV_96, parse_tree__parse_vars__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__parse_vars__succeeded))
                          {
                            MR_Word parse_tree__parse_vars__TypeInfo_116_116;

                            {
                              parse_tree__parse_vars__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_116_116, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                            }
                            {
                              parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_116_116, parse_tree__parse_vars__SV_96, parse_tree__parse_vars__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__parse_vars__succeeded)
                      {
                        MR_Word parse_tree__parse_vars__V_75_75;
                        MR_Word parse_tree__parse_vars__Spec_93;

                        {
                          parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_93);
                        }
                        {
                          parse_tree__parse_vars__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_75_75, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_93));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_75_75));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_vars__DotVars_36;
                        MR_Word parse_tree__parse_vars__V_77_77;

                        {
                          parse_tree__parse_vars__DotVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__DotVars_36, 0) = ((MR_Box) (parse_tree__parse_vars__SV_96));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__DotVars_36, 1) = ((MR_Box) (parse_tree__parse_vars__TailDotVars_29));
                        }
                        {
                          parse_tree__parse_vars__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_77_77, 0) = ((MR_Box) (parse_tree__parse_vars__TailVars_27));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_77_77, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_28));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_77_77, 2) = ((MR_Box) (parse_tree__parse_vars__DotVars_36));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_77_77, 3) = ((MR_Box) (parse_tree__parse_vars__TailColonVars_30));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_77_77));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word parse_tree__parse_vars__SV_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_vars__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__parse_vars__TypeInfo_118_118;

                      {
                        parse_tree__parse_vars__TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_118_118, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_118_118, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                      }
                      {
                        parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_118_118, parse_tree__parse_vars__SV_100, parse_tree__parse_vars__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__parse_vars__succeeded))
                      {
                        {
                          MR_Word parse_tree__parse_vars__TypeInfo_120_120;

                          {
                            parse_tree__parse_vars__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_120_120, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                          }
                          {
                            parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_120_120, parse_tree__parse_vars__SV_100, parse_tree__parse_vars__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__parse_vars__succeeded))
                          {
                            MR_Word parse_tree__parse_vars__TypeInfo_122_122;

                            {
                              parse_tree__parse_vars__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_122_122, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_122_122, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                            }
                            {
                              parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__TypeInfo_122_122, parse_tree__parse_vars__SV_100, parse_tree__parse_vars__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__parse_vars__succeeded)
                      {
                        MR_Word parse_tree__parse_vars__V_72_72;
                        MR_Word parse_tree__parse_vars__Spec_97;

                        {
                          parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_97);
                        }
                        {
                          parse_tree__parse_vars__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_72_72, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_97));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_72_72));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_vars__ColonVars_37;
                        MR_Word parse_tree__parse_vars__V_74_74;

                        {
                          parse_tree__parse_vars__ColonVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__ColonVars_37, 0) = ((MR_Box) (parse_tree__parse_vars__SV_100));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_vars__ColonVars_37, 1) = ((MR_Box) (parse_tree__parse_vars__TailColonVars_30));
                        }
                        {
                          parse_tree__parse_vars__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_74_74, 0) = ((MR_Box) (parse_tree__parse_vars__TailVars_27));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_74_74, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_28));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_74_74, 2) = ((MR_Box) (parse_tree__parse_vars__TailDotVars_29));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_74_74, 3) = ((MR_Box) (parse_tree__parse_vars__ColonVars_37));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_vars__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_74_74));
                        }
                      }
                  }
                  break;
              }
            else
              {
                MR_Word parse_tree__parse_vars__TypeInfo_124_124;
                MR_Word parse_tree__parse_vars__TypeInfo_126_126;
                MR_Word parse_tree__parse_vars__HeadSpecs_38;
                MR_Word parse_tree__parse_vars__TailSpecs_39;
                MR_Word parse_tree__parse_vars__V_84_84;

                {
                  parse_tree__parse_vars__TypeInfo_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_124_124, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_124_124, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                }
                {
                  parse_tree__parse_vars__HeadSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_124_124, (MR_Word) parse_tree__parse_vars__MaybeHeadVar_23);
                }
                {
                  parse_tree__parse_vars__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_126_126, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_126_126, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_102));
                }
                {
                  parse_tree__parse_vars__TailSpecs_39 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_126_126, (MR_Word) parse_tree__parse_vars__MaybeTailVars_25);
                }
                {
                  parse_tree__parse_vars__V_84_84 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_vars__HeadSpecs_38, parse_tree__parse_vars__TailSpecs_39);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_vars__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_84_84));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_vars__V_86_86;
            MR_Word parse_tree__parse_vars__Spec_101;

            {
              parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_102, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__parse_vars__Term_5, &parse_tree__parse_vars__Spec_101);
            }
            {
              parse_tree__parse_vars__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_86_86, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_101));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_vars__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_86_86));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_vars_state_vars_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_66,
  MR_Word parse_tree__parse_vars__Term_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__ContextPieces_7,
  MR_Word * parse_tree__parse_vars__MaybeVars_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_vars__V_31_31;
    MR_String parse_tree__parse_vars__V_32_32;
    MR_Word parse_tree__parse_vars__V_33_33;
    MR_Word parse_tree__parse_vars__V_9_9;

    if (parse_tree__parse_vars__succeeded)
      {
        parse_tree__parse_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
        parse_tree__parse_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
        parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_31_31)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_31_31, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_32_32, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__parse_vars__succeeded)
      {
        *parse_tree__parse_vars__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_2[1]);
      }
    else
      {
        MR_Word parse_tree__parse_vars__HeadTerm_10;
        MR_Word parse_tree__parse_vars__TailTerm_11;
        MR_Word parse_tree__parse_vars__V_37_37;
        MR_String parse_tree__parse_vars__V_38_38;
        MR_Word parse_tree__parse_vars__V_39_39;
        MR_Word parse_tree__parse_vars__V_40_40;
        MR_Word parse_tree__parse_vars__V_41_41;
        MR_Word parse_tree__parse_vars__V_12_12;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
            parse_tree__parse_vars__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
            parse_tree__parse_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_37_37)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_37_37, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_38_38, (MR_String) "[|]") == 0);
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_39_39, (MR_Integer) 0)));
                        parse_tree__parse_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_39_39, (MR_Integer) 1)));
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, (MR_Integer) 0)));
                            parse_tree__parse_vars__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, (MR_Integer) 1)));
                            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_vars__succeeded)
          {
            MR_Word parse_tree__parse_vars__MaybeHeadVar_19;
            MR_Word parse_tree__parse_vars__MaybeTailVars_21;
            MR_Word parse_tree__parse_vars__VarKind0_15;
            MR_Word parse_tree__parse_vars__VarKind_22;
            MR_Word parse_tree__parse_vars__TailVars_23;
            MR_Word parse_tree__parse_vars__TailStateVars_24;
            MR_Word parse_tree__parse_vars__V_50_50;

            if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_vars__SV0_16;
                MR_Word parse_tree__parse_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_String parse_tree__parse_vars__V_43_43;
                MR_Word parse_tree__parse_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));
                MR_Word parse_tree__parse_vars__V_45_45;
                MR_Word parse_tree__parse_vars__V_46_46;
                MR_Word parse_tree__parse_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 2)));
                MR_Word parse_tree__parse_vars__V_17_17;

                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_42_42)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_42_42, (MR_Integer) 0)));
                    parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_43_43, (MR_String) "!") == 0);
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_44_44, (MR_Integer) 0)));
                            parse_tree__parse_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_44_44, (MR_Integer) 1)));
                            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_vars__succeeded)
                              {
                                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_45_45)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_vars__succeeded)
                                  {
                                    parse_tree__parse_vars__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_45_45, (MR_Integer) 0)));
                                    parse_tree__parse_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_45_45, (MR_Integer) 1)));
                                    {
                                      parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__SV0_16));
                                    }
                                    parse_tree__parse_vars__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_vars__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__parse_vars__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__VarKind0_15, 0) = ((MR_Box) (parse_tree__parse_vars__V0_13));
                }
                parse_tree__parse_vars__succeeded = MR_TRUE;
              }
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__MaybeHeadVar_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__parse_vars__VarKind0_15));
              }
            else
              {
                MR_Word parse_tree__parse_vars__HeadSpec_20;
                MR_Word parse_tree__parse_vars__V_48_48;

                {
                  parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a variable or state variable", parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__HeadSpec_20);
                }
                {
                  parse_tree__parse_vars__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_48_48, 0) = ((MR_Box) (parse_tree__parse_vars__HeadSpec_20));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_vars__MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__parse_vars__V_48_48));
                }
              }
            {
              parse_tree__parse_vars__parse_vars_state_vars_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__TailTerm_11, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__ContextPieces_7, &parse_tree__parse_vars__MaybeTailVars_21);
            }
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__VarKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_19, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeTailVars_21, (MR_Integer) 0)));
                    parse_tree__parse_vars__TailVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_50_50, (MR_Integer) 0)));
                    parse_tree__parse_vars__TailStateVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_50_50, (MR_Integer) 1)));
                    parse_tree__parse_vars__succeeded = MR_TRUE;
                  }
              }
            if (parse_tree__parse_vars__succeeded)
              if (((MR_tag((MR_Word) parse_tree__parse_vars__VarKind_22)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word parse_tree__parse_vars__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__VarKind_22, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_vars__TypeInfo_68_68;

                  {
                    parse_tree__parse_vars__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_68_68, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_68_68, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_66));
                  }
                  {
                    parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__TypeInfo_68_68, parse_tree__parse_vars__V_25, parse_tree__parse_vars__TailVars_23);
                  }
                  if (parse_tree__parse_vars__succeeded)
                    {
                      MR_Word parse_tree__parse_vars__Spec_26;
                      MR_Word parse_tree__parse_vars__V_54_54;

                      {
                        parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_26);
                      }
                      {
                        parse_tree__parse_vars__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_54_54, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_26));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_vars__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_54_54));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_vars__Vars_27;
                      MR_Word parse_tree__parse_vars__V_56_56;

                      {
                        parse_tree__parse_vars__Vars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_27, 0) = ((MR_Box) (parse_tree__parse_vars__V_25));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_27, 1) = ((MR_Box) (parse_tree__parse_vars__TailVars_23));
                      }
                      {
                        parse_tree__parse_vars__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_56_56, 0) = ((MR_Box) (parse_tree__parse_vars__Vars_27));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_56_56, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_24));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_vars__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_56_56));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_vars__SV_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__VarKind_22, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_vars__TypeInfo_70_70;

                  {
                    parse_tree__parse_vars__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_70_70, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_70_70, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_66));
                  }
                  {
                    parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__TypeInfo_70_70, parse_tree__parse_vars__SV_28, parse_tree__parse_vars__TailStateVars_24);
                  }
                  if (parse_tree__parse_vars__succeeded)
                    {
                      MR_Word parse_tree__parse_vars__V_51_51;
                      MR_Word parse_tree__parse_vars__Spec_62;

                      {
                        parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_62);
                      }
                      {
                        parse_tree__parse_vars__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_51_51, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_62));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_vars__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_51_51));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_vars__StateVars_29;
                      MR_Word parse_tree__parse_vars__V_53_53;

                      {
                        parse_tree__parse_vars__StateVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__StateVars_29, 0) = ((MR_Box) (parse_tree__parse_vars__SV_28));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_vars__StateVars_29, 1) = ((MR_Box) (parse_tree__parse_vars__TailStateVars_24));
                      }
                      {
                        parse_tree__parse_vars__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_53_53, 0) = ((MR_Box) (parse_tree__parse_vars__TailVars_23));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_53_53, 1) = ((MR_Box) (parse_tree__parse_vars__StateVars_29));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_vars__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_53_53));
                      }
                    }
                }
            else
              {
                MR_Word parse_tree__parse_vars__TypeInfo_73_73;
                MR_Word parse_tree__parse_vars__TypeInfo_75_75;
                MR_Word parse_tree__parse_vars__Specs_30;
                MR_Word parse_tree__parse_vars__V_57_57;
                MR_Word parse_tree__parse_vars__V_58_58;

                {
                  parse_tree__parse_vars__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_73_73, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_73_73, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_66));
                }
                {
                  parse_tree__parse_vars__V_57_57 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_73_73, (MR_Word) parse_tree__parse_vars__MaybeHeadVar_19);
                }
                {
                  parse_tree__parse_vars__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_75_75, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_75_75, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_66));
                }
                {
                  parse_tree__parse_vars__V_58_58 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_75_75, (MR_Word) parse_tree__parse_vars__MaybeTailVars_21);
                }
                {
                  parse_tree__parse_vars__Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_vars__V_57_57, parse_tree__parse_vars__V_58_58);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_vars__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__Specs_30));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_vars__V_60_60;
            MR_Word parse_tree__parse_vars__Spec_65;

            {
              parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_66, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__parse_vars__Term_5, &parse_tree__parse_vars__Spec_65);
            }
            {
              parse_tree__parse_vars__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_60_60, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_65));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_vars__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_60_60));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_vars_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_46,
  MR_Word parse_tree__parse_vars__Term_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__ContextPieces_7,
  MR_Word * parse_tree__parse_vars__MaybeVars_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_vars__V_26_26;
    MR_String parse_tree__parse_vars__V_27_27;
    MR_Word parse_tree__parse_vars__V_28_28;
    MR_Word parse_tree__parse_vars__V_9_9;

    if (parse_tree__parse_vars__succeeded)
      {
        parse_tree__parse_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
        parse_tree__parse_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
        parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_26_26)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_26_26, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_27_27, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__parse_vars__succeeded)
      {
        *parse_tree__parse_vars__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_2[0]);
      }
    else
      {
        MR_Word parse_tree__parse_vars__HeadTerm_10;
        MR_Word parse_tree__parse_vars__TailTerm_11;
        MR_Word parse_tree__parse_vars__V_30_30;
        MR_String parse_tree__parse_vars__V_31_31;
        MR_Word parse_tree__parse_vars__V_32_32;
        MR_Word parse_tree__parse_vars__V_33_33;
        MR_Word parse_tree__parse_vars__V_34_34;
        MR_Word parse_tree__parse_vars__V_12_12;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
            parse_tree__parse_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
            parse_tree__parse_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_30_30)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_30_30, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_31_31, (MR_String) "[|]") == 0);
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_32_32, (MR_Integer) 0)));
                        parse_tree__parse_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_32_32, (MR_Integer) 1)));
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_33_33, (MR_Integer) 0)));
                            parse_tree__parse_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_33_33, (MR_Integer) 1)));
                            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_vars__succeeded)
          {
            MR_Word parse_tree__parse_vars__MaybeHeadVar_15;
            MR_Word parse_tree__parse_vars__MaybeTailVars_20;
            MR_Word parse_tree__parse_vars__HeadVar_21;
            MR_Word parse_tree__parse_vars__TailVars_22;

            if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_vars__HeadSpec_19;
                MR_Word parse_tree__parse_vars__V_36_36;

                {
                  parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_46, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a variable", parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__HeadSpec_19);
                }
                {
                  parse_tree__parse_vars__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_36_36, 0) = ((MR_Box) (parse_tree__parse_vars__HeadSpec_19));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_vars__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__parse_vars__V_36_36));
                }
              }
            else
              {
                MR_Word parse_tree__parse_vars__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__parse_vars__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__parse_vars__HeadVar0_13));
                }
              }
            {
              parse_tree__parse_vars__parse_vars_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_46, parse_tree__parse_vars__TailTerm_11, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__ContextPieces_7, &parse_tree__parse_vars__MaybeTailVars_20);
            }
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_15, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_vars__succeeded)
                  parse_tree__parse_vars__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeTailVars_20, (MR_Integer) 0)));
              }
            if (parse_tree__parse_vars__succeeded)
              {
                MR_Word parse_tree__parse_vars__TypeInfo_48_48;

                {
                  parse_tree__parse_vars__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_46));
                }
                {
                  parse_tree__parse_vars__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__parse_vars__TypeInfo_for_T_46, parse_tree__parse_vars__TypeInfo_48_48, parse_tree__parse_vars__HeadVar_21, parse_tree__parse_vars__TailVars_22);
                }
                if (parse_tree__parse_vars__succeeded)
                  {
                    MR_Word parse_tree__parse_vars__Spec_23;
                    MR_Word parse_tree__parse_vars__V_38_38;

                    {
                      parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_46, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_23);
                    }
                    {
                      parse_tree__parse_vars__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_38_38, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_23));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_vars__MaybeVars_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_38_38));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_vars__Vars_24;

                    {
                      parse_tree__parse_vars__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_24, 0) = ((MR_Box) (parse_tree__parse_vars__HeadVar_21));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_vars__Vars_24, 1) = ((MR_Box) (parse_tree__parse_vars__TailVars_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_vars__MaybeVars_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__Vars_24));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_vars__TypeInfo_51_51;
                MR_Word parse_tree__parse_vars__TypeInfo_53_53;
                MR_Word parse_tree__parse_vars__Specs_25;
                MR_Word parse_tree__parse_vars__V_40_40;
                MR_Word parse_tree__parse_vars__V_41_41;

                {
                  parse_tree__parse_vars__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_51_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_51_51, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_46));
                }
                {
                  parse_tree__parse_vars__V_40_40 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_51_51, (MR_Word) parse_tree__parse_vars__MaybeHeadVar_15);
                }
                {
                  parse_tree__parse_vars__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_53_53, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_53_53, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_51_51));
                }
                {
                  parse_tree__parse_vars__V_41_41 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_53_53, (MR_Word) parse_tree__parse_vars__MaybeTailVars_20);
                }
                {
                  parse_tree__parse_vars__Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_vars__V_40_40, parse_tree__parse_vars__V_41_41);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_vars__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__Specs_25));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_vars__V_43_43;
            MR_Word parse_tree__parse_vars__Spec_45;

            {
              parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_46, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a list of variables", parse_tree__parse_vars__Term_5, &parse_tree__parse_vars__Spec_45);
            }
            {
              parse_tree__parse_vars__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_43_43, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_45));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_vars__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_43_43));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0(
  MR_Word parse_tree__parse_vars__TypeInfo_for_T_43,
  MR_Word parse_tree__parse_vars__Term_5,
  MR_Word parse_tree__parse_vars__VarSet_6,
  MR_Word parse_tree__parse_vars__ContextPieces_7,
  MR_Word * parse_tree__parse_vars__MaybeVars_8)
{
  {
    MR_bool parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_vars__V_24_24;
    MR_String parse_tree__parse_vars__V_25_25;
    MR_Word parse_tree__parse_vars__V_26_26;
    MR_Word parse_tree__parse_vars__V_9_9;

    if (parse_tree__parse_vars__succeeded)
      {
        parse_tree__parse_vars__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
        parse_tree__parse_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
        parse_tree__parse_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
        parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_24_24)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_24_24, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_25_25, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__parse_vars__succeeded)
      {
        *parse_tree__parse_vars__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_vars_scalar_common_2[0]);
      }
    else
      {
        MR_Word parse_tree__parse_vars__HeadTerm_10;
        MR_Word parse_tree__parse_vars__TailTerm_11;
        MR_Word parse_tree__parse_vars__V_28_28;
        MR_String parse_tree__parse_vars__V_29_29;
        MR_Word parse_tree__parse_vars__V_30_30;
        MR_Word parse_tree__parse_vars__V_31_31;
        MR_Word parse_tree__parse_vars__V_32_32;
        MR_Word parse_tree__parse_vars__V_12_12;

        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_vars__succeeded)
          {
            parse_tree__parse_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 0)));
            parse_tree__parse_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 1)));
            parse_tree__parse_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__Term_5, (MR_Integer) 2)));
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_28_28)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_vars__V_28_28, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = (strcmp(parse_tree__parse_vars__V_29_29, (MR_String) "[|]") == 0);
                if (parse_tree__parse_vars__succeeded)
                  {
                    parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_vars__succeeded)
                      {
                        parse_tree__parse_vars__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, (MR_Integer) 0)));
                        parse_tree__parse_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_30_30, (MR_Integer) 1)));
                        parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_vars__succeeded)
                          {
                            parse_tree__parse_vars__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_31_31, (MR_Integer) 0)));
                            parse_tree__parse_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_31_31, (MR_Integer) 1)));
                            parse_tree__parse_vars__succeeded = (parse_tree__parse_vars__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_vars__succeeded)
          {
            MR_Word parse_tree__parse_vars__MaybeHeadVar_15;
            MR_Word parse_tree__parse_vars__MaybeTailVars_20;
            MR_Word parse_tree__parse_vars__HeadVar_21;
            MR_Word parse_tree__parse_vars__TailVars_22;

            if (((MR_tag((MR_Word) parse_tree__parse_vars__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_vars__Spec_19;
                MR_Word parse_tree__parse_vars__V_34_34;

                {
                  parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_43, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a variable", parse_tree__parse_vars__HeadTerm_10, &parse_tree__parse_vars__Spec_19);
                }
                {
                  parse_tree__parse_vars__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_34_34, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_19));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_vars__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__parse_vars__V_34_34));
                }
              }
            else
              {
                MR_Word parse_tree__parse_vars__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__parse_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__parse_vars__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__parse_vars__HeadVar0_13));
                }
              }
            {
              parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0(parse_tree__parse_vars__TypeInfo_for_T_43, parse_tree__parse_vars__TailTerm_11, parse_tree__parse_vars__VarSet_6, parse_tree__parse_vars__ContextPieces_7, &parse_tree__parse_vars__MaybeTailVars_20);
            }
            parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_vars__succeeded)
              {
                parse_tree__parse_vars__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeHeadVar_15, (MR_Integer) 0)));
                parse_tree__parse_vars__succeeded = ((MR_tag((MR_Word) parse_tree__parse_vars__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_vars__succeeded)
                  parse_tree__parse_vars__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_vars__MaybeTailVars_20, (MR_Integer) 0)));
              }
            if (parse_tree__parse_vars__succeeded)
              {
                MR_Word parse_tree__parse_vars__V_36_36;

                {
                  parse_tree__parse_vars__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_36_36, 0) = ((MR_Box) (parse_tree__parse_vars__HeadVar_21));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_36_36, 1) = ((MR_Box) (parse_tree__parse_vars__TailVars_22));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_vars__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_36_36));
                }
              }
            else
              {
                MR_Word parse_tree__parse_vars__TypeInfo_46_46;
                MR_Word parse_tree__parse_vars__TypeInfo_48_48;
                MR_Word parse_tree__parse_vars__Specs_23;
                MR_Word parse_tree__parse_vars__V_37_37;
                MR_Word parse_tree__parse_vars__V_38_38;

                {
                  parse_tree__parse_vars__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_46_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_46_46, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_for_T_43));
                }
                {
                  parse_tree__parse_vars__V_37_37 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_46_46, (MR_Word) parse_tree__parse_vars__MaybeHeadVar_15);
                }
                {
                  parse_tree__parse_vars__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_vars__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__parse_vars__TypeInfo_46_46));
                }
                {
                  parse_tree__parse_vars__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_vars__TypeInfo_48_48, (MR_Word) parse_tree__parse_vars__MaybeTailVars_20);
                }
                {
                  parse_tree__parse_vars__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_vars__V_37_37, parse_tree__parse_vars__V_38_38);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_vars__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__Specs_23));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_vars__V_40_40;
            MR_Word parse_tree__parse_vars__Spec_42;

            {
              parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(parse_tree__parse_vars__TypeInfo_for_T_43, parse_tree__parse_vars__ContextPieces_7, parse_tree__parse_vars__VarSet_6, (MR_String) "a list of variables", parse_tree__parse_vars__Term_5, &parse_tree__parse_vars__Spec_42);
            }
            {
              parse_tree__parse_vars__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, 0) = ((MR_Box) (parse_tree__parse_vars__Spec_42));
              MR_hl_field(MR_mktag(1), parse_tree__parse_vars__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_vars__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_vars__V_40_40));
            }
          }
      }
  }
}

void mercury__parse_tree__parse_vars__init(void)
{
}

void mercury__parse_tree__parse_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1);
}

void mercury__parse_tree__parse_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.parse_vars. */
