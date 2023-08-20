/*
** Automatically generated from `parse_sym_name.m'
** by the Mercury compiler,
** version rotd-2023-08-20
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


// :- module parse_tree.parse_sym_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_sym_name__init
ENDINIT
*/

#include "parse_tree.parse_sym_name.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_specifier_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_specifier_0[2];

static const MR_Integer parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_specifier_0[2];

static void MR_CALL 
parse_tree__parse_sym_name__insist_on_no_args_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word SymName_8,
  MR_Word Args_9,
  MR_Word * MaybeSymName_10);

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____sym_name_specifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_specifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[41][2];

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][3];




static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[41][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected module name before \'.\'"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in qualified symbol name, got"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected identifier after \'.\'"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a symbol name, got"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected module name expected before \'.\'"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: atom expected at"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: did not expect"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to have any arguments."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the module qualifier in"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the preceding"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module name identifier"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected before"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in qualified symbol name."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: identifier expected after"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: symbol name expected at"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be a non-negative integer."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: arity in symbol name specifier"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be an integer."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected none."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has arguments,"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[1]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__term__pti_term_1__pseudo_1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "maybe_functor",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_0 = {
  (MR_String) "sym_name_specifier_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_1 = {
  (MR_String) "sym_name_specifier_name_arity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_specifier_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_0[1] = { &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_1[1] = { &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_1 };

static const MR_DuPtagLayout parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_specifier_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_specifier_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_specifier_0[2] = {
  &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_0,
  &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_specifier_0_1
};

static const MR_Integer parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_specifier_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_sym_name_specifier_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____sym_name_specifier_0_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____sym_name_specifier_0_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "sym_name_specifier",
  { parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_specifier_0 },
  { parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_specifier_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_specifier_0,

};

void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_specifier_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_22, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_14, Var_24, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_Integer Var_25 = (MR_Integer) (Var_23);
        MR_Integer Var_26 = (MR_Integer) (ArgY2_16);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____sym_name_specifier_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Integer Var_14;
    MR_Integer Var_15;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        Var_14 = (MR_Integer) (ArgX2_7);
        Var_15 = (MR_Integer) (ArgY2_8);
        succeeded = (Var_14 == Var_15);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_sym_name_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_sym_name_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
  }
  parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_11_11, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
  }
  succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_10_10, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymNameSpecifier_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word NameTerm_7;
  MR_Word ArityTerm_8;
  MR_Word Var_19;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
      succeeded = (strcmp(Var_20, (MR_String) "/") == 0);
      if (succeeded)
      {
        succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 1))));
            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Arity_10;

    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_8, &Arity_10);
    if (succeeded)
    {
      succeeded = (Arity_10 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word MaybeName_11;

        parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, NameTerm_7, &MaybeName_11);
        if (((MR_tag((MR_Word) MaybeName_11)) == (MR_Integer) 0))
          *MaybeSymNameSpecifier_6 = (MR_Word) (MaybeName_11);
        else
        {
          MR_Word Name_13 = ((MR_Word) ((MR_hl_field(1, MaybeName_11, (MR_Integer) 0))));
          MR_Word UserArity_14 = (MR_Word) (Arity_10);
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (Name_13));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (UserArity_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymNameSpecifier_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        MR_Word Spec_16;
        MR_Word Var_37;
        MR_Word Var_38;

        Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
        {
          Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_symbol_name_specifier\'/3"));
          MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Var_37));
          MR_hl_field(1, Spec_16, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[32])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameSpecifier_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
        }
      }
    }
    else
    {
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Spec_56;

      Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_symbol_name_specifier\'/3"));
        MR_hl_field(1, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_56, 3) = ((MR_Box) (Var_51));
        MR_hl_field(1, Spec_56, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[35])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameSpecifier_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
      }
    }
  }
  else
  {
    MR_Word MaybeSymbolName_17;

    parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5, &MaybeSymbolName_17);
    if (((MR_tag((MR_Word) MaybeSymbolName_17)) == (MR_Integer) 0))
      *MaybeSymNameSpecifier_6 = (MR_Word) (MaybeSymbolName_17);
    else
    {
      MR_Word SymbolName_18 = ((MR_Word) ((MR_hl_field(1, MaybeSymbolName_17, (MR_Integer) 0))));
      MR_Word Var_54;

      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = ((MR_Box) (SymbolName_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameSpecifier_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_54));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSymName_8)
{
  MR_Word MaybeSymName0_9;

  parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7, &MaybeSymName0_9);
  if (((MR_tag((MR_Word) MaybeSymName0_9)) == (MR_Integer) 0))
    *MaybeSymName_8 = MaybeSymName0_9;
  else
  {
    MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(1, MaybeSymName0_9, (MR_Integer) 0))));

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DefaultModuleName_5, Term_7, SymName0_10, MaybeSymName_8);
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_to_implicitly_qualify_sym_name_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word SymName0_5,
  MR_Word * SymName_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName0_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName0_7 = ((MR_Word) ((MR_hl_field(1, SymName0_5, (MR_Integer) 0))));
    MR_String Name0_8 = ((MR_String) ((MR_hl_field(1, SymName0_5, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName0_7, DefaultModuleName_4);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SymName_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DefaultModuleName_4));
        MR_hl_field(1, base, 1) = ((MR_Box) (Name0_8));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Name0_9 = ((MR_String) ((MR_hl_field(0, SymName0_5, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SymName_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DefaultModuleName_4));
      MR_hl_field(1, base, 1) = ((MR_Box) (Name0_9));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_no_args_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word DefaultModuleName_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeSymName_10)
{
  MR_bool succeeded;
  MR_Word MaybeSymNameAndArgs0_11;

  parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_39, VarSet_7, ContextPieces_8, Term_9, &MaybeSymNameAndArgs0_11);
  if (((MR_tag((MR_Word) MaybeSymNameAndArgs0_11)) == (MR_Integer) 0))
  {
    MR_Word Specs_38 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs0_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_38));
    }
  }
  else
  {
    MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, (MR_Integer) 0))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, (MR_Integer) 1))));
    MR_Word MaybeSymName1_14;
    MR_Word ArgSpecs_15;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0(TypeInfo_for_T_39, DefaultModuleName_6, Term_9, SymName0_12, &MaybeSymName1_14);
    if ((Args0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgSpecs_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgPieces_18;
      MR_Word ArgSpec_19;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_35;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (SymName0_12));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[13])));
      }
      {
        ArgPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgPieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[11])));
        MR_hl_field(1, ArgPieces_18, 1) = ((MR_Box) (Var_24));
      }
      Var_35 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_39, Term_9);
      {
        ArgSpec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_implicitly_qualified_sym_name_and_no_args\'/5"));
        MR_hl_field(1, ArgSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, ArgSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, ArgSpec_19, 3) = ((MR_Box) (Var_35));
        MR_hl_field(1, ArgSpec_19, 4) = ((MR_Box) (ArgPieces_18));
      }
      {
        ArgSpecs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgSpecs_15, 0) = ((MR_Box) (ArgSpec_19));
        MR_hl_field(1, ArgSpecs_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeSymName1_14)) == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ArgSpecs_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *MaybeSymName_10 = MaybeSymName1_14;
    else
    {
      MR_Word Specs_21;
      MR_Word Var_37;

      Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeSymName1_14);
      Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_37, ArgSpecs_15);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_21));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word DefaultModuleName_5,
  MR_Word Term_6,
  MR_Word SymName0_7,
  MR_Word * MaybeSymName_8)
{
  MR_bool succeeded;
  MR_Word SymName_9;

  if (((MR_tag((MR_Word) SymName0_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName0_38 = ((MR_Word) ((MR_hl_field(1, SymName0_7, (MR_Integer) 0))));
    MR_String Name0_39 = ((MR_String) ((MR_hl_field(1, SymName0_7, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName0_38, DefaultModuleName_5);
    if (succeeded)
    {
      {
        SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_9, 0) = ((MR_Box) (DefaultModuleName_5));
        MR_hl_field(1, SymName_9, 1) = ((MR_Box) (Name0_39));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Name0_40 = ((MR_String) ((MR_hl_field(0, SymName0_7, (MR_Integer) 0))));

    {
      SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_9, 0) = ((MR_Box) (DefaultModuleName_5));
      MR_hl_field(1, SymName_9, 1) = ((MR_Box) (Name0_40));
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSymName_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_9));
    }
  else
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_15, 1) = ((MR_Box) (SymName0_7));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[22])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[14])));
      MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_14));
    }
    Var_34 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_37, Term_6);
    {
      Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.implicitly_qualify_sym_name\'/4"));
      MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Var_34));
      MR_hl_field(1, Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word DefaultModuleName_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeSymNameAndArgs_10)
{
  MR_bool succeeded;
  MR_Word MaybeSymNameAndArgs0_11;

  parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_15, VarSet_7, ContextPieces_8, Term_9, &MaybeSymNameAndArgs0_11);
  if (((MR_tag((MR_Word) MaybeSymNameAndArgs0_11)) == (MR_Integer) 0))
    *MaybeSymNameAndArgs_10 = MaybeSymNameAndArgs0_11;
  else
  {
    MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, (MR_Integer) 0))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, (MR_Integer) 1))));
    MR_Word SymName_16;

    if (((MR_tag((MR_Word) SymName0_12)) == (MR_Integer) 1))
    {
      MR_Word ModuleName0_30 = ((MR_Word) ((MR_hl_field(1, SymName0_12, (MR_Integer) 0))));
      MR_String Name0_31 = ((MR_String) ((MR_hl_field(1, SymName0_12, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName0_30, DefaultModuleName_6);
      if (succeeded)
      {
        {
          SymName_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_16, 0) = ((MR_Box) (DefaultModuleName_6));
          MR_hl_field(1, SymName_16, 1) = ((MR_Box) (Name0_31));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String Name0_32 = ((MR_String) ((MR_hl_field(0, SymName0_12, (MR_Integer) 0))));

      {
        SymName_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_16, 0) = ((MR_Box) (DefaultModuleName_6));
        MR_hl_field(1, SymName_16, 1) = ((MR_Box) (Name0_32));
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameAndArgs_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (Args_13));
      }
    else
    {
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_27;
      MR_Word Var_28;

      {
        Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_22, 1) = ((MR_Box) (SymName0_12));
      }
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[22])));
      }
      {
        Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[14])));
        MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_21));
      }
      Var_27 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_15, Term_9);
      {
        Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.implicitly_qualify_sym_name_and_args\'/5"));
        MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Var_27));
        MR_hl_field(1, Spec_18, 4) = ((MR_Box) (Pieces_17));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Term_3,
  MR_Word * SymName_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Functor_5;
  MR_Word FunctorArgs_6;
  MR_String FunctorName_8;
  MR_Word ModuleTerm_9;
  MR_Word NameArgsTerm_10;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    Functor_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    FunctorArgs_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_8 = ((MR_String) ((MR_hl_field(0, Functor_5, (MR_Integer) 0))));
      succeeded = (strcmp(FunctorName_8, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_9 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, (MR_Integer) 0))));
          Var_14 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, (MR_Integer) 1))));
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_String Name_11;
        MR_Word Module_13;
        MR_Word Var_16;
        MR_Word Var_17;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_10)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_10, (MR_Integer) 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_10, (MR_Integer) 1))));
          succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Name_11 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
              succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_19, ModuleTerm_9, &Module_13);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SymName_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Module_13));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Name_11));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      else
      {
        MR_String Var_18;

        succeeded = (FunctorArgs_6 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_18 = (MR_String) "__";
          *SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_8, Var_18);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_and_no_args_4_p_0(
  MR_Word TypeInfo_for_T_113,
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * MaybeSymName_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word TermContext_11;
  MR_Word ModuleTerm_12;
  MR_Word NameArgsTerm_13;
  MR_Word Functor_9;
  MR_Word FunctorArgs_10;
  MR_String Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    TermContext_11 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_String) ((MR_hl_field(0, Functor_9, (MR_Integer) 0))));
      succeeded = (strcmp(Var_27, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 1))));
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_14;
    MR_Word Args_15;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 0))));
      Args_15 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
        Name_14 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_17;
      MR_Word MaybeModule_18;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_113, VarSet_5, &GenericVarSet_17);
      parse_tree__parse_sym_name__parse_symbol_name_3_p_0(TypeInfo_for_T_113, GenericVarSet_17, ModuleTerm_12, &MaybeModule_18);
      if (((MR_tag((MR_Word) MaybeModule_18)) == (MR_Integer) 0))
      {
        MR_String ModuleTermStr_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_51;

        ModuleTermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_113, GenericVarSet_17, ModuleTerm_12);
        Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (ModuleTermStr_22));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[3])));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[9])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
        }
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_32);
        {
          Spec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_no_args\'/4"));
          MR_hl_field(1, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_24, 3) = ((MR_Box) (TermContext_11));
          MR_hl_field(1, Spec_24, 4) = ((MR_Box) (Pieces_23));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
        }
      }
      else
      {
        MR_Word Module_19 = ((MR_Word) ((MR_hl_field(1, MaybeModule_18, (MR_Integer) 0))));
        MR_Word SymName_20;

        {
          SymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_20, 0) = ((MR_Box) (Module_19));
          MR_hl_field(1, SymName_20, 1) = ((MR_Box) (Name_14));
        }
        parse_tree__parse_sym_name__insist_on_no_args_5_p_0(TypeInfo_for_T_113, ContextPieces_6, NameArgsTerm_13, SymName_20, Args_15, MaybeSymName_8);
      }
    }
    else
    {
      MR_String TermStr_25;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_73;
      MR_Word GenericVarSet_97;
      MR_Word Pieces_98;
      MR_Word Spec_99;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_113, VarSet_5, &GenericVarSet_97);
      TermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_113, GenericVarSet_97, Term_7);
      Var_53 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (TermStr_25));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[3])));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[7])));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
      }
      Pieces_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_54);
      {
        Spec_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_no_args\'/4"));
        MR_hl_field(1, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_99, 3) = ((MR_Box) (TermContext_11));
        MR_hl_field(1, Spec_99, 4) = ((MR_Box) (Pieces_98));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_99));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
      }
    }
  }
  else
  {
    MR_Word GenericVarSet_112;
    MR_String Name_104;
    MR_Word Args_105;
    MR_Word Var_75;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_113, VarSet_5, &GenericVarSet_112);
    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_75 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Args_105 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 0);
      if (succeeded)
        Name_104 = ((MR_String) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word SymName_100;

      SymName_100 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_104, (MR_String) "__");
      parse_tree__parse_sym_name__insist_on_no_args_5_p_0(TypeInfo_for_T_113, ContextPieces_6, Term_7, SymName_100, Args_105, MaybeSymName_8);
    }
    else
    {
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_80;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Pieces_101;
      MR_Word Spec_102;
      MR_String TermStr_103;

      TermStr_103 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_113, GenericVarSet_112, Term_7);
      Var_77 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      {
        Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_84, 1) = ((MR_Box) (TermStr_103));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[10])));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
      }
      Pieces_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_78);
      Var_94 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_113, Term_7);
      {
        Spec_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_no_args\'/4"));
        MR_hl_field(1, Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_102, 3) = ((MR_Box) (Var_94));
        MR_hl_field(1, Spec_102, 4) = ((MR_Box) (Pieces_101));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_102));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_sym_name__insist_on_no_args_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word SymName_8,
  MR_Word Args_9,
  MR_Word * MaybeSymName_10)
{
  if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSymName_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_8));
    }
  else
  {
    MR_String Name_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_36;
    MR_Word Var_37;

    Name_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_8);
    Var_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (Name_13));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[40])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[36])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_17);
    Var_36 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_39, Term_7);
    {
      Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.insist_on_no_args\'/5"));
      MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Var_36));
      MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Functor_5,
  MR_Word FunctorArgs_6,
  MR_Word * SymName_7,
  MR_Word * Args_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
  MR_String FunctorName_9;
  MR_Word ModuleTerm_10;
  MR_Word NameArgsTerm_11;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    FunctorName_9 = ((MR_String) ((MR_hl_field(0, Functor_5, (MR_Integer) 0))));
    succeeded = (strcmp(FunctorName_9, (MR_String) ".") == 0);
    if (succeeded)
    {
      succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleTerm_10 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, (MR_Integer) 0))));
        Var_15 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, (MR_Integer) 1))));
        succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameArgsTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
          succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_String Name_12;
      MR_Word Module_14;
      MR_Word Var_17;

      succeeded = ((MR_tag((MR_Word) NameArgsTerm_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_11, (MR_Integer) 0))));
        *Args_8 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_11, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_12 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
          succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_19, ModuleTerm_10, &Module_14);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SymName_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Module_14));
              MR_hl_field(1, base, 1) = ((MR_Box) (Name_12));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      *SymName_7 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_9, (MR_String) "__");
      *Args_8 = FunctorArgs_6;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Term_4,
  MR_Word * SymName_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0);
  MR_Word Functor_7;
  MR_Word FunctorArgs_8;
  MR_String FunctorName_11;
  MR_Word ModuleTerm_12;
  MR_Word NameArgsTerm_13;
  MR_Word Var_17;
  MR_Word Var_18;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 0))));
    FunctorArgs_8 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_11 = ((MR_String) ((MR_hl_field(0, Functor_7, (MR_Integer) 0))));
      succeeded = (strcmp(FunctorName_11, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, (MR_Integer) 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, (MR_Integer) 1))));
          succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
            succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_String Name_14;
        MR_Word Module_16;
        MR_Word Var_19;

        succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 0))));
          *Args_6 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_14 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
            succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_10, ModuleTerm_12, &Module_16);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SymName_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Module_16));
                MR_hl_field(1, base, 1) = ((MR_Box) (Name_14));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        *SymName_5 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_11, (MR_String) "__");
        *Args_6 = FunctorArgs_8;
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Term_3,
  MR_Word * SymName_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ModuleTerm_6;
  MR_Word NameTerm_7;
  MR_String FunctorName_5;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_5 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      if ((strcmp(FunctorName_5, (MR_String) ".") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(FunctorName_5, (MR_String) ":") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_9;
    MR_Word Module_11;
    MR_Word Var_17;
    MR_Word Var_18;

    succeeded = ((MR_tag((MR_Word) NameTerm_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, NameTerm_7, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, NameTerm_7, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_9 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
          succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeInfo_for_T_23, ModuleTerm_6, &Module_11);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SymName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Module_11));
              MR_hl_field(1, base, 1) = ((MR_Box) (Name_9));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  else
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_21;
    MR_String Name_22;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_22 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
          Var_21 = (MR_String) "__";
          *SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_22, Var_21);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(
  MR_Word TypeInfo_for_T_112,
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * MaybeSymNameAndArgs_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word TermContext_11;
  MR_Word ModuleTerm_12;
  MR_Word NameArgsTerm_13;
  MR_Word Functor_9;
  MR_Word FunctorArgs_10;
  MR_String Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    TermContext_11 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_String) ((MR_hl_field(0, Functor_9, (MR_Integer) 0))));
      succeeded = (strcmp(Var_27, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, (MR_Integer) 1))));
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_14;
    MR_Word Args_15;
    MR_Word Var_30;

    succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 0))));
      Args_15 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
        Name_14 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_17;
      MR_Word MaybeModule_18;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_112, VarSet_5, &GenericVarSet_17);
      parse_tree__parse_sym_name__parse_symbol_name_3_p_0(TypeInfo_for_T_112, GenericVarSet_17, ModuleTerm_12, &MaybeModule_18);
      if (((MR_tag((MR_Word) MaybeModule_18)) == (MR_Integer) 0))
      {
        MR_String ModuleTermStr_21;
        MR_Word Pieces_22;
        MR_Word Spec_23;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_52;

        ModuleTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_112, GenericVarSet_17, ModuleTerm_12);
        Var_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (ModuleTermStr_21));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[3])));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[2])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
        }
        Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_33);
        {
          Spec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_args\'/4"));
          MR_hl_field(1, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_23, 3) = ((MR_Box) (TermContext_11));
          MR_hl_field(1, Spec_23, 4) = ((MR_Box) (Pieces_22));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_23));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
        }
      }
      else
      {
        MR_Word Module_19 = ((MR_Word) ((MR_hl_field(1, MaybeModule_18, (MR_Integer) 0))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Module_19));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Name_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, base, 1) = ((MR_Box) (Args_15));
        }
      }
    }
    else
    {
      MR_String TermStr_24;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_74;
      MR_Word GenericVarSet_98;
      MR_Word Pieces_99;
      MR_Word Spec_100;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_112, VarSet_5, &GenericVarSet_98);
      TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_112, GenericVarSet_98, Term_7);
      Var_54 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      {
        Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_64, 1) = ((MR_Box) (TermStr_24));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[3])));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[7])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
      }
      Pieces_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_55);
      {
        Spec_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_args\'/4"));
        MR_hl_field(1, Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_100, 3) = ((MR_Box) (TermContext_11));
        MR_hl_field(1, Spec_100, 4) = ((MR_Box) (Pieces_99));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_100));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      }
    }
  }
  else
  {
    MR_Word GenericVarSet_111;
    MR_String Name_104;
    MR_Word Args_105;
    MR_Word Var_76;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_112, VarSet_5, &GenericVarSet_111);
    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_76 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Args_105 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
      if (succeeded)
        Name_104 = ((MR_String) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word SymName_26;

      SymName_26 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_104, (MR_String) "__");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (Args_105));
      }
    }
    else
    {
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Pieces_101;
      MR_Word Spec_102;
      MR_String TermStr_103;

      TermStr_103 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_112, GenericVarSet_111, Term_7);
      Var_78 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_85, 1) = ((MR_Box) (TermStr_103));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[8])));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
      }
      Pieces_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, Var_79);
      Var_95 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_112, Term_7);
      {
        Spec_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_sym_name_and_args\'/4"));
        MR_hl_field(1, Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_102, 3) = ((MR_Box) (Var_95));
        MR_hl_field(1, Spec_102, 4) = ((MR_Box) (Pieces_101));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Spec_102));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_symbol_name_3_p_0(
  MR_Word TypeInfo_for_T_85,
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymName_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String FunctorName_7;
  MR_Word ModuleTerm_8;
  MR_Word NameTerm_9;
  MR_Word TermContext_10;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    TermContext_10 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_7 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      if ((strcmp(FunctorName_7, (MR_String) ".") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(FunctorName_7, (MR_String) ":") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_11;
    MR_Word Var_25;
    MR_Word Var_26;

    succeeded = ((MR_tag((MR_Word) NameTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(0, NameTerm_9, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, NameTerm_9, (MR_Integer) 1))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
          Name_11 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeModule_13;

      parse_tree__parse_sym_name__parse_symbol_name_3_p_0(TypeInfo_for_T_85, VarSet_4, ModuleTerm_8, &MaybeModule_13);
      if (((MR_tag((MR_Word) MaybeModule_13)) == (MR_Integer) 0))
      {
        MR_Word Pieces_16;
        MR_Word Spec_17;
        MR_Word Var_30;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_44;

        {
          Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_34, 1) = ((MR_Box) (FunctorName_7));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[26])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[24])));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[23])));
          MR_hl_field(1, Pieces_16, 1) = ((MR_Box) (Var_30));
        }
        {
          Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_symbol_name\'/3"));
          MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_17, 3) = ((MR_Box) (TermContext_10));
          MR_hl_field(1, Spec_17, 4) = ((MR_Box) (Pieces_16));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
        }
      }
      else
      {
        MR_Word Module_14 = ((MR_Word) ((MR_hl_field(1, MaybeModule_13, (MR_Integer) 0))));
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Module_14));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Name_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymName_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
        }
      }
    }
    else
    {
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_59;
      MR_Word Pieces_80;
      MR_Word Spec_81;

      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (FunctorName_7));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[26])));
      }
      {
        Pieces_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[27])));
        MR_hl_field(1, Pieces_80, 1) = ((MR_Box) (Var_48));
      }
      {
        Spec_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_symbol_name\'/3"));
        MR_hl_field(1, Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_81, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_81, 3) = ((MR_Box) (TermContext_10));
        MR_hl_field(1, Spec_81, 4) = ((MR_Box) (Pieces_80));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Spec_81));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
      }
    }
  }
  else
  {
    MR_String Name_84;
    MR_Word Var_61;
    MR_Word Var_62;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_62 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
        if (succeeded)
          Name_84 = ((MR_String) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word SymName_19;

      SymName_19 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_84, (MR_String) "__");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymName_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_19));
      }
    }
    else
    {
      MR_String TermStr_20;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Pieces_82;
      MR_Word Spec_83;

      TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_85, VarSet_4, Term_5);
      {
        Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_67, 1) = ((MR_Box) (TermStr_20));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[6])));
      }
      {
        Pieces_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_82, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[28])));
        MR_hl_field(1, Pieces_82, 1) = ((MR_Box) (Var_66));
      }
      Var_77 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_85, Term_5);
      {
        Spec_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_sym_name.parse_symbol_name\'/3"));
        MR_hl_field(1, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_83, 3) = ((MR_Box) (Var_77));
        MR_hl_field(1, Spec_83, 4) = ((MR_Box) (Pieces_82));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_83));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_sym_name____Compare____maybe_functor_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____maybe_functor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name____Unify____maybe_functor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____maybe_functor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_sym_name____Compare____maybe_functor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____sym_name_specifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name____Unify____sym_name_specifier_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_specifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_sym_name____Compare____sym_name_specifier_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_sym_name__init(void)
{
}

void mercury__parse_tree__parse_sym_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_1);
	MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_maybe_functor_0);
	MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_sym_name_specifier_0);
}

void mercury__parse_tree__parse_sym_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_sym_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_sym_name.
