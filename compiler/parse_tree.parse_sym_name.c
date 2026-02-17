/*
** Automatically generated from `parse_sym_name.m'
** by the Mercury compiler,
** version rotd-2026-02-17
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
#include "ops.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct3 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_3mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_maybe_arity_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_maybe_arity_0[2];

static const MR_Integer parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_maybe_arity_0[2];

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_noninteger_arity_term_2_f_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_U_41,
  MR_Word VarSet0_4,
  MR_Word Term_5);

static void MR_CALL 
parse_tree__parse_sym_name__insist_on_no_args_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word SymName_8,
  MR_Word Args_9,
  MR_Word * MaybeSymName_10);

static MR_Word MR_CALL 
parse_tree__parse_sym_name__glue_sym_names_2_f_0(
  MR_Word ModuleSymName_4,
  MR_Word SubSymName_5);

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_no_sym_name_3_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeInfo_for_U_47,
  MR_Word ContextPieces_5,
  MR_Word VarSet0_6,
  MR_Word Term_7);

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_bad_name_after_dot_3_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeInfo_for_U_47,
  MR_Word ContextPieces_5,
  MR_Word VarSet0_6,
  MR_Word NameArgsTerm_7);

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
parse_tree__parse_sym_name____Unify____sym_name_maybe_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_maybe_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[49][2];

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][4];




static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_1[49][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module name"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "before \'.\' in qualified symbol name, got"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "identifier"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "after \'.\' in qualified symbol name, got"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "symbol name,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not have any arguments."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "non-negative integer"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as arity, got"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected an"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "integer"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the module qualifier in"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is for"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the preceding"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_sym_name_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[46])))
  },
};

static /* final */ const MR_Box parse_tree__parse_sym_name_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__parse_sym_name_scalar_common_1[0]))
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_sym_name__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct3 parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
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
  { (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__pti_maybe2_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
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

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_3mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__parse_sym_name__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&parse_tree__parse_sym_name__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
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
  { (MR_PseudoTypeInfo) (&parse_tree__parse_sym_name__parse_tree__maybe_error__ti_maybe2_3mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_0 = {
  (MR_String) "sym_name_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_DuFunctorDesc parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_1 = {
  (MR_String) "sym_name_with_arity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__field_types_sym_name_maybe_arity_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_0[1] = { &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_1[1] = { &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_1 };

static const MR_DuPtagLayout parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_maybe_arity_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_stag_ordered_sym_name_maybe_arity_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_maybe_arity_0[2] = {
  &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_0,
  &parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_functor_desc_sym_name_maybe_arity_0_1
};

static const MR_Integer parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_maybe_arity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_sym_name_maybe_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_sym_name____Unify____sym_name_maybe_arity_0_0_10001)),
  ((MR_Box) (parse_tree__parse_sym_name____Compare____sym_name_maybe_arity_0_0_10001)),
  (MR_String) "parse_tree.parse_sym_name",
  (MR_String) "sym_name_maybe_arity",
  { parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_name_ordered_sym_name_maybe_arity_0 },
  { parse_tree__parse_sym_name__parse_tree__parse_sym_name__du_ptag_ordered_sym_name_maybe_arity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_sym_name__parse_tree__parse_sym_name__functor_number_map_sym_name_maybe_arity_0,

};

void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_maybe_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_8;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Integer Var_16 = (MR_Integer) (ArgX2_9);
      MR_Integer Var_17 = (MR_Integer) (ArgY2_10);

      succeeded = (Var_16 < Var_17);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 > Var_17);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name____Unify____sym_name_maybe_arity_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;
    MR_Integer Var_14;
    MR_Integer Var_15;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
  parse_tree__maybe_error____Compare____maybe2_3_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_11_11, (MR_Word) (&parse_tree__parse_sym_name_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
  succeeded = parse_tree__maybe_error____Unify____maybe2_3_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_10_10, (MR_Word) (&parse_tree__parse_sym_name_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_maybe_arity_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymNameArity_6)
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
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
      succeeded = (strcmp(Var_20, (MR_String) "/") == 0);
      if (succeeded)
      {
        succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeName_10;
    MR_Integer Arity_11;

    parse_tree__parse_sym_name__parse_sym_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, NameTerm_7, &MaybeName_10);
    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_8, &Arity_11);
    if (succeeded)
    {
      succeeded = (Arity_11 >= (MR_Integer) 0);
      if (succeeded)
        if (((MR_tag((MR_Word) MaybeName_10)) == (MR_Integer) 0))
          *MaybeSymNameArity_6 = (MR_Word) (MaybeName_10);
        else
        {
          MR_Word Name_13 = ((MR_Word) ((MR_hl_field(1, MaybeName_10, 0))));
          MR_Word UserArity_14 = (MR_Word) (Arity_11);
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (Name_13));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (UserArity_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSymNameArity_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
          }
        }
      else
      {
        MR_Word AritySpec_15;
        MR_Word Specs_16;
        MR_Word Var_26;
        MR_String ArityStr_36;
        MR_Word Pieces_37;
        MR_Word Context_38;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_49;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;

        ArityStr_36 = mercury__string__int_to_string_1_f_0(Arity_11);
        Var_44 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[30])));
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (ArityStr_36));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
        }
        Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_56);
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[32])), Var_54);
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_49);
        Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[18])), Var_43);
        Context_38 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_8);
        {
          AritySpec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AritySpec_15, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_negative_arity\'/2"));
          MR_hl_field(0, AritySpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, AritySpec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, AritySpec_15, 3) = ((MR_Box) (Context_38));
          MR_hl_field(0, AritySpec_15, 4) = ((MR_Box) (Pieces_37));
        }
        Var_26 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeName_10);
        {
          Specs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_16, 0) = ((MR_Box) (AritySpec_15));
          MR_hl_field(1, Specs_16, 1) = ((MR_Box) (Var_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameArity_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_16));
        }
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word AritySpec_29;
      MR_Word Specs_30;

      AritySpec_29 = parse_tree__parse_sym_name__report_noninteger_arity_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, ArityTerm_8);
      Var_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeName_10);
      {
        Specs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Specs_30, 0) = ((MR_Box) (AritySpec_29));
        MR_hl_field(1, Specs_30, 1) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameArity_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_30));
      }
    }
  }
  else
  {
    MR_Word MaybeSymName_17;

    parse_tree__parse_sym_name__parse_sym_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5, &MaybeSymName_17);
    if (((MR_tag((MR_Word) MaybeSymName_17)) == (MR_Integer) 0))
      *MaybeSymNameArity_6 = (MR_Word) (MaybeSymName_17);
    else
    {
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_17, 0))));
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (SymName_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameArity_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_noninteger_arity_term_2_f_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeInfo_for_U_41,
  MR_Word VarSet0_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_Word VarSet_7;
  MR_String TermStr_8;
  MR_Word Pieces_9;
  MR_Word Context_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  mercury__varset__coerce_2_p_0(TypeInfo_for_T_40, TypeInfo_for_U_41, VarSet0_4, &VarSet_7);
  TermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_U_41, VarSet_7, Term_5);
  Var_16 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[36])));
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (TermStr_8));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
  }
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_28);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[32])), Var_26);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_21);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[34])), Var_15);
  Context_10 = mercury__term__get_term_context_1_f_0(TypeInfo_for_U_41, Term_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_noninteger_arity_term\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_6;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeSymName_8)
{
  MR_Word MaybeSymName0_9;

  parse_tree__parse_sym_name__parse_sym_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7, &MaybeSymName0_9);
  if (((MR_tag((MR_Word) MaybeSymName0_9)) == (MR_Integer) 0))
    *MaybeSymName_8 = MaybeSymName0_9;
  else
  {
    MR_Word SymName0_10 = ((MR_Word) ((MR_hl_field(1, MaybeSymName0_9, 0))));

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
    MR_Word ModuleName0_7 = ((MR_Word) ((MR_hl_field(1, SymName0_5, 0))));
    MR_String Name0_8 = ((MR_String) ((MR_hl_field(1, SymName0_5, 1))));

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
    MR_String Name0_9 = ((MR_String) ((MR_hl_field(0, SymName0_5, 0))));

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
  MR_Word TypeInfo_for_T_24,
  MR_Word DefaultModuleName_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeSymName_10)
{
  MR_bool succeeded;
  MR_Word MaybeSymNameAndArgs0_11;

  parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_24, VarSet_7, ContextPieces_8, Term_9, &MaybeSymNameAndArgs0_11);
  if (((MR_tag((MR_Word) MaybeSymNameAndArgs0_11)) == (MR_Integer) 0))
  {
    MR_Word Specs_23 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs0_11, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
    }
  }
  else
  {
    MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, 0))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, 1))));
    MR_Word MaybeSymName1_14;
    MR_Word ArgSpecs_15;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0(TypeInfo_for_T_24, DefaultModuleName_6, Term_9, SymName0_12, &MaybeSymName1_14);
    if ((Args0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgSpecs_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgSpec_18;
      MR_Word Pieces_27;
      MR_Word Context_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_38;

      Var_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (SymName0_12));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_33 = parse_tree__error_spec__color_as_subject_1_f_0(Var_34);
      Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[28])));
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_37);
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[26])), Var_32);
      Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
      Context_28 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_24, Term_9);
      {
        ArgSpec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgSpec_18, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_unexpected_args\'/3"));
        MR_hl_field(0, ArgSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ArgSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, ArgSpec_18, 3) = ((MR_Box) (Context_28));
        MR_hl_field(0, ArgSpec_18, 4) = ((MR_Box) (Pieces_27));
      }
      {
        ArgSpecs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgSpecs_15, 0) = ((MR_Box) (ArgSpec_18));
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
      MR_Word Specs_20;
      MR_Word Var_22;

      Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeSymName1_14);
      Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_22, ArgSpecs_15);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_20));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word DefaultModuleName_5,
  MR_Word Term_6,
  MR_Word SymName0_7,
  MR_Word * MaybeSymName_8)
{
  MR_bool succeeded;
  MR_Word SymName_9;

  if (((MR_tag((MR_Word) SymName0_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName0_14 = ((MR_Word) ((MR_hl_field(1, SymName0_7, 0))));
    MR_String Name0_15 = ((MR_String) ((MR_hl_field(1, SymName0_7, 1))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName0_14, DefaultModuleName_5);
    if (succeeded)
    {
      {
        SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_9, 0) = ((MR_Box) (DefaultModuleName_5));
        MR_hl_field(1, SymName_9, 1) = ((MR_Box) (Name0_15));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Name0_16 = ((MR_String) ((MR_hl_field(0, SymName0_7, 0))));

    {
      SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_9, 0) = ((MR_Box) (DefaultModuleName_5));
      MR_hl_field(1, SymName_9, 1) = ((MR_Box) (Name0_16));
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
    MR_Word Spec_10;
    MR_Word Var_11;
    MR_Word Pieces_17;
    MR_Word Context_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (SymName0_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
    Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[40])));
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (DefaultModuleName_5));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
    }
    Var_37 = parse_tree__error_spec__color_as_correct_1_f_0(Var_38);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[48])), Var_36);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_34);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[38])), Var_23);
    Context_18 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_13, Term_6);
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_failed_implicit_qualification\'/3"));
      MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_18));
      MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
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
    MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, 0))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs0_11, 1))));
    MR_Word SymName_16;

    if (((MR_tag((MR_Word) SymName0_12)) == (MR_Integer) 1))
    {
      MR_Word ModuleName0_20 = ((MR_Word) ((MR_hl_field(1, SymName0_12, 0))));
      MR_String Name0_21 = ((MR_String) ((MR_hl_field(1, SymName0_12, 1))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ModuleName0_20, DefaultModuleName_6);
      if (succeeded)
      {
        {
          SymName_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_16, 0) = ((MR_Box) (DefaultModuleName_6));
          MR_hl_field(1, SymName_16, 1) = ((MR_Box) (Name0_21));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String Name0_22 = ((MR_String) ((MR_hl_field(0, SymName0_12, 0))));

      {
        SymName_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_16, 0) = ((MR_Box) (DefaultModuleName_6));
        MR_hl_field(1, SymName_16, 1) = ((MR_Box) (Name0_22));
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
      MR_Word Spec_17;
      MR_Word Var_18;
      MR_Word Pieces_23;
      MR_Word Context_24;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (SymName0_12));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
      Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[40])));
      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (DefaultModuleName_6));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
      }
      Var_43 = parse_tree__error_spec__color_as_correct_1_f_0(Var_44);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[48])), Var_42);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_40);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
      Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[38])), Var_29);
      Context_24 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_15, Term_9);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_failed_implicit_qualification\'/3"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_24));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_23));
      }
      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
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
    Functor_5 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    FunctorArgs_6 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_8 = ((MR_String) ((MR_hl_field(0, Functor_5, 0))));
      succeeded = (strcmp(FunctorName_8, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_9 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, 0))));
          Var_14 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, 1))));
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
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
          Var_16 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_10, 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_10, 1))));
          succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Name_11 = ((MR_String) ((MR_hl_field(0, Var_16, 0))));
              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_19, ModuleTerm_9, &Module_13);
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
  MR_Word TypeInfo_for_T_41,
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * MaybeSymName_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word ModuleTerm_12;
  MR_Word NameArgsTerm_13;
  MR_Word Functor_9;
  MR_Word FunctorArgs_10;
  MR_String Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((MR_String) ((MR_hl_field(0, Functor_9, 0))));
      succeeded = (strcmp(Var_24, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 1))));
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_14;
    MR_Word Args_15;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, 0))));
      Args_15 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
        Name_14 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_17;
      MR_Word MaybeModule_18;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, VarSet_5, &GenericVarSet_17);
      parse_tree__parse_sym_name__parse_sym_name_3_p_0(TypeInfo_for_T_41, GenericVarSet_17, ModuleTerm_12, &MaybeModule_18);
      if (((MR_tag((MR_Word) MaybeModule_18)) == (MR_Integer) 0))
      {
        MR_Word Spec_22;
        MR_Word Var_28;
        MR_Word VarSet_45;
        MR_String ModuleTermStr_46;
        MR_Word Pieces_47;
        MR_Word Context_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_58;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, VarSet_5, &VarSet_45);
        ModuleTermStr_46 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_41, VarSet_45, ModuleTerm_12);
        Var_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
        Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[7])));
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (ModuleTermStr_46));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
        }
        Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[9])), Var_63);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[5])), Var_52);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
        Context_48 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_41, ModuleTerm_12);
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_no_module_name_before_dot\'/3"));
          MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_48));
          MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_47));
        }
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
        }
      }
      else
      {
        MR_Word Module_19 = ((MR_Word) ((MR_hl_field(1, MaybeModule_18, 0))));
        MR_Word SymName_20;

        {
          SymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_20, 0) = ((MR_Box) (Module_19));
          MR_hl_field(1, SymName_20, 1) = ((MR_Box) (Name_14));
        }
        parse_tree__parse_sym_name__insist_on_no_args_5_p_0(TypeInfo_for_T_41, ContextPieces_6, NameArgsTerm_13, SymName_20, Args_15, MaybeSymName_8);
      }
    }
    else
    {
      MR_Word Var_30;
      MR_Word Spec_36;

      Spec_36 = parse_tree__parse_sym_name__report_bad_name_after_dot_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, ContextPieces_6, VarSet_5, NameArgsTerm_13);
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
      }
    }
  }
  else
  {
    MR_String Name_39;
    MR_Word Args_40;
    MR_Word Var_32;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
      Args_40 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
      if (succeeded)
        Name_39 = ((MR_String) ((MR_hl_field(0, Var_32, 0))));
    }
    if (succeeded)
    {
      MR_Word SymName_37;

      SymName_37 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_39, (MR_String) "__");
      parse_tree__parse_sym_name__insist_on_no_args_5_p_0(TypeInfo_for_T_41, ContextPieces_6, Term_7, SymName_37, Args_40, MaybeSymName_8);
    }
    else
    {
      MR_Word Var_34;
      MR_Word Spec_38;

      Spec_38 = parse_tree__parse_sym_name__report_no_sym_name_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, ContextPieces_6, VarSet_5, Term_7);
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_sym_name__insist_on_no_args_5_p_0(
  MR_Word TypeInfo_for_T_16,
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
    MR_Word ArgSpec_13;
    MR_Word Var_14;
    MR_Word Pieces_17;
    MR_Word Context_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;

    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (SymName_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
    Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[28])));
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_27);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[26])), Var_22);
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
    Context_18 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_16, Term_7);
    {
      ArgSpec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgSpec_13, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_unexpected_args\'/3"));
      MR_hl_field(0, ArgSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ArgSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, ArgSpec_13, 3) = ((MR_Box) (Context_18));
      MR_hl_field(0, ArgSpec_13, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (ArgSpec_13));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSymName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Functor_5,
  MR_Word FunctorArgs_6,
  MR_Word * SymName_7,
  MR_Word * Args_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
  MR_String FunctorName_9;
  MR_Word ModuleTerm_10;
  MR_Word NameArgsTerm_11;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    FunctorName_9 = ((MR_String) ((MR_hl_field(0, Functor_5, 0))));
    succeeded = (strcmp(FunctorName_9, (MR_String) ".") == 0);
    if (succeeded)
    {
      succeeded = (FunctorArgs_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleTerm_10 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, 0))));
        Var_14 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_6, 1))));
        succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameArgsTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ModuleSymName_12;
      MR_Word SubSymName_13;
      MR_Word Functor_18;
      MR_Word FunctorArgs_19;
      MR_String FunctorName_21;
      MR_Word ModuleTerm_22;
      MR_Word NameArgsTerm_23;
      MR_Word Var_26;
      MR_Word Var_27;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_17, ModuleTerm_10, &ModuleSymName_12);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) NameArgsTerm_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Functor_18 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_11, 0))));
          FunctorArgs_19 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_11, 1))));
          succeeded = ((MR_tag((MR_Word) Functor_18)) == (MR_Integer) 0);
          if (succeeded)
          {
            FunctorName_21 = ((MR_String) ((MR_hl_field(0, Functor_18, 0))));
            succeeded = (strcmp(FunctorName_21, (MR_String) ".") == 0);
            if (succeeded)
            {
              succeeded = (FunctorArgs_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleTerm_22 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_19, 0))));
                Var_26 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_19, 1))));
                succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  NameArgsTerm_23 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
                  Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
                  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              MR_Word ModuleSymName_24;
              MR_Word SubSymName_25;

              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_17, ModuleTerm_22, &ModuleSymName_24);
              if (succeeded)
              {
                succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_17, NameArgsTerm_23, &SubSymName_25, Args_8);
                if (succeeded)
                {
                  SubSymName_13 = parse_tree__parse_sym_name__glue_sym_names_2_f_0(ModuleSymName_24, SubSymName_25);
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            {
              SubSymName_13 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(FunctorName_21, (MR_String) "__");
              *Args_8 = FunctorArgs_19;
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              if (((MR_tag((MR_Word) SubSymName_13)) == (MR_Integer) 1))
              {
                MR_Word ModuleNameList_32;
                MR_Word SubModuleNameList_33;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;
                MR_String BaseName_38;

                ModuleNameList_32 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleSymName_12);
                mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(SubSymName_13, &SubModuleNameList_33, &BaseName_38);
                {
                  Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_36, 0) = ((MR_Box) (BaseName_38));
                  MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubModuleNameList_33, Var_36);
                Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleNameList_32, Var_35);
                mdbcomp__sym_name__det_list_to_sym_name_2_p_0(Var_34, SymName_7);
              }
              else
              {
                MR_String BaseName_29 = ((MR_String) ((MR_hl_field(0, SubSymName_13, 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SymName_7 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ModuleSymName_12));
                  MR_hl_field(1, base, 1) = ((MR_Box) (BaseName_29));
                }
              }
              succeeded = MR_TRUE;
            }
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
  MR_Word Var_16;
  MR_Word Var_17;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_4, 0))));
    FunctorArgs_8 = ((MR_Word) ((MR_hl_field(0, Term_4, 1))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_11 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
      succeeded = (strcmp(FunctorName_11, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, 1))));
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_16, 0))));
            Var_17 = ((MR_Word) ((MR_hl_field(1, Var_16, 1))));
            succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word ModuleSymName_14;
        MR_Word SubSymName_15;

        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_10, ModuleTerm_12, &ModuleSymName_14);
        if (succeeded)
        {
          succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_10, NameArgsTerm_13, &SubSymName_15, Args_6);
          if (succeeded)
          {
            *SymName_5 = parse_tree__parse_sym_name__glue_sym_names_2_f_0(ModuleSymName_14, SubSymName_15);
            succeeded = MR_TRUE;
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

static MR_Word MR_CALL 
parse_tree__parse_sym_name__glue_sym_names_2_f_0(
  MR_Word ModuleSymName_4,
  MR_Word SubSymName_5)
{
  MR_Word SymName_6;

  if (((MR_tag((MR_Word) SubSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleNameList_10;
    MR_Word SubModuleNameList_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_String BaseName_16;

    ModuleNameList_10 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleSymName_4);
    mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(SubSymName_5, &SubModuleNameList_11, &BaseName_16);
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (BaseName_16));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubModuleNameList_11, Var_14);
    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleNameList_10, Var_13);
    mdbcomp__sym_name__det_list_to_sym_name_2_p_0(Var_12, &SymName_6);
  }
  else
  {
    MR_String BaseName_7 = ((MR_String) ((MR_hl_field(0, SubSymName_5, 0))));

    {
      SymName_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_6, 0) = ((MR_Box) (ModuleSymName_4));
      MR_hl_field(1, SymName_6, 1) = ((MR_Box) (BaseName_7));
    }
  }
  return SymName_6;
}

MR_bool MR_CALL 
parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Term_3,
  MR_Word * SymName_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word ModuleTerm_5;
  MR_Word NameTerm_6;
  MR_Word Var_12;
  MR_String Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_13 = ((MR_String) ((MR_hl_field(0, Var_12, 0))));
      succeeded = (strcmp(Var_13, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ModuleSymName_8;
    MR_Word SubSymName_9;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_20, ModuleTerm_5, &ModuleSymName_8);
    if (succeeded)
    {
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeInfo_for_T_20, NameTerm_6, &SubSymName_9);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) SubSymName_9)) == (MR_Integer) 1))
        {
          MR_Word ModuleNameList_24;
          MR_Word SubModuleNameList_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_String BaseName_30;

          ModuleNameList_24 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleSymName_8);
          mdbcomp__sym_name__sym_name_to_qualifier_list_and_name_3_p_0(SubSymName_9, &SubModuleNameList_25, &BaseName_30);
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (BaseName_30));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubModuleNameList_25, Var_28);
          Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleNameList_24, Var_27);
          mdbcomp__sym_name__det_list_to_sym_name_2_p_0(Var_26, SymName_4);
        }
        else
        {
          MR_String BaseName_21 = ((MR_String) ((MR_hl_field(0, SubSymName_9, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SymName_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ModuleSymName_8));
            MR_hl_field(1, base, 1) = ((MR_Box) (BaseName_21));
          }
        }
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_String Name_10;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_10 = ((MR_String) ((MR_hl_field(0, Var_17, 0))));
          Var_19 = (MR_String) "__";
          *SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_10, Var_19);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * MaybeSymNameAndArgs_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word ModuleTerm_12;
  MR_Word NameArgsTerm_13;
  MR_Word Functor_9;
  MR_Word FunctorArgs_10;
  MR_String Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((MR_String) ((MR_hl_field(0, Functor_9, 0))));
      succeeded = (strcmp(Var_24, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_12 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 1))));
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArgsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_14;
    MR_Word Args_15;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) NameArgsTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, 0))));
      Args_15 = ((MR_Word) ((MR_hl_field(0, NameArgsTerm_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
        Name_14 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_17;
      MR_Word MaybeModule_18;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, VarSet_5, &GenericVarSet_17);
      parse_tree__parse_sym_name__parse_sym_name_3_p_0(TypeInfo_for_T_41, GenericVarSet_17, ModuleTerm_12, &MaybeModule_18);
      if (((MR_tag((MR_Word) MaybeModule_18)) == (MR_Integer) 0))
      {
        MR_Word Spec_21;
        MR_Word Var_29;
        MR_Word VarSet_45;
        MR_String ModuleTermStr_46;
        MR_Word Pieces_47;
        MR_Word Context_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_58;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, VarSet_5, &VarSet_45);
        ModuleTermStr_46 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_41, VarSet_45, ModuleTerm_12);
        Var_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
        Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[7])));
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (ModuleTermStr_46));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
        }
        Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[9])), Var_63);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[5])), Var_52);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
        Context_48 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_41, ModuleTerm_12);
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_no_module_name_before_dot\'/3"));
          MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_48));
          MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_47));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
        }
      }
      else
      {
        MR_Word Module_19 = ((MR_Word) ((MR_hl_field(1, MaybeModule_18, 0))));
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (Module_19));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) (Name_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymNameAndArgs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, base, 1) = ((MR_Box) (Args_15));
        }
      }
    }
    else
    {
      MR_Word Var_31;
      MR_Word Spec_37;

      Spec_37 = parse_tree__parse_sym_name__report_bad_name_after_dot_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, ContextPieces_6, VarSet_5, NameArgsTerm_13);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
      }
    }
  }
  else
  {
    MR_String Name_39;
    MR_Word Args_40;
    MR_Word Var_33;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
      Args_40 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
      succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
      if (succeeded)
        Name_39 = ((MR_String) ((MR_hl_field(0, Var_33, 0))));
    }
    if (succeeded)
    {
      MR_Word SymName_23;

      SymName_23 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_39, (MR_String) "__");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Args_40));
      }
    }
    else
    {
      MR_Word Var_35;
      MR_Word Spec_38;

      Spec_38 = parse_tree__parse_sym_name__report_no_sym_name_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_41, ContextPieces_6, VarSet_5, Term_7);
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymNameAndArgs_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_sym_name__parse_sym_name_3_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeSymName_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word ModuleTerm_10;
  MR_Word NameTerm_11;
  MR_Word Functor_7;
  MR_Word FunctorArgs_8;
  MR_String Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    FunctorArgs_8 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Functor_7, 0))));
      succeeded = (strcmp(Var_21, (MR_String) ".") == 0);
      if (succeeded)
      {
        succeeded = (FunctorArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_10 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_8, 1))));
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Name_12;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = ((MR_tag((MR_Word) NameTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(0, NameTerm_11, 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, NameTerm_11, 1))));
      succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
        if (succeeded)
          Name_12 = ((MR_String) ((MR_hl_field(0, Var_24, 0))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeModule_14;

      parse_tree__parse_sym_name__parse_sym_name_3_p_0(TypeInfo_for_T_41, VarSet_4, ModuleTerm_10, &MaybeModule_14);
      if (((MR_tag((MR_Word) MaybeModule_14)) == (MR_Integer) 0))
      {
        MR_Word ContextPieces_17;
        MR_Word Spec_18;
        MR_Word Var_27;
        MR_Word VarSet_45;
        MR_String ModuleTermStr_46;
        MR_Word Pieces_47;
        MR_Word Context_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_58;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;

        ContextPieces_17 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
        mercury__varset__coerce_2_p_0(TypeInfo_for_T_41, TypeInfo_for_T_41, VarSet_4, &VarSet_45);
        ModuleTermStr_46 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_41, VarSet_45, ModuleTerm_10);
        Var_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_17);
        Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[7])));
        {
          Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_66, 1) = ((MR_Box) (ModuleTermStr_46));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
        }
        Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[9])), Var_63);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[5])), Var_52);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
        Context_48 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_41, ModuleTerm_10);
        {
          Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_no_module_name_before_dot\'/3"));
          MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_48));
          MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_47));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSymName_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Word Module_15 = ((MR_Word) ((MR_hl_field(1, MaybeModule_14, 0))));
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (Module_15));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Name_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSymName_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
        }
      }
    }
    else
    {
      MR_Word Var_29;
      MR_Word ContextPieces_36;
      MR_Word Spec_37;

      ContextPieces_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
      Spec_37 = parse_tree__parse_sym_name__report_bad_name_after_dot_3_f_0(TypeInfo_for_T_41, TypeInfo_for_T_41, ContextPieces_36, VarSet_4, NameTerm_11);
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
      }
    }
  }
  else
  {
    MR_String Name_40;
    MR_Word Var_31;
    MR_Word Var_32;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
      succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
        if (succeeded)
          Name_40 = ((MR_String) ((MR_hl_field(0, Var_31, 0))));
      }
    }
    if (succeeded)
    {
      MR_Word SymName_20;

      SymName_20 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(Name_40, (MR_String) "__");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSymName_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SymName_20));
      }
    }
    else
    {
      MR_Word Var_34;
      MR_Word ContextPieces_38;
      MR_Word Spec_39;

      ContextPieces_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
      Spec_39 = parse_tree__parse_sym_name__report_no_sym_name_3_f_0(TypeInfo_for_T_41, TypeInfo_for_T_41, ContextPieces_38, VarSet_4, Term_5);
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_39));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSymName_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_no_sym_name_3_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeInfo_for_U_47,
  MR_Word ContextPieces_5,
  MR_Word VarSet0_6,
  MR_Word Term_7)
{
  MR_Word Spec_8;
  MR_Word VarSet_9;
  MR_String TermStr_10;
  MR_Word Pieces_11;
  MR_Word Context_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__varset__coerce_2_p_0(TypeInfo_for_T_46, TypeInfo_for_U_47, VarSet0_6, &VarSet_9);
  TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_U_47, VarSet_9, Term_7);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  Var_22 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[21])));
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (TermStr_10));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[23])), Var_32);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[19])), Var_21);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
  Context_12 = mercury__term__get_term_context_1_f_0(TypeInfo_for_U_47, Term_7);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_no_sym_name\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_8;
}

static MR_Word MR_CALL 
parse_tree__parse_sym_name__report_bad_name_after_dot_3_f_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeInfo_for_U_47,
  MR_Word ContextPieces_5,
  MR_Word VarSet0_6,
  MR_Word NameArgsTerm_7)
{
  MR_Word Spec_8;
  MR_Word VarSet_9;
  MR_String NameArgsTermStr_10;
  MR_Word Pieces_11;
  MR_Word Context_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__varset__coerce_2_p_0(TypeInfo_for_T_46, TypeInfo_for_U_47, VarSet0_6, &VarSet_9);
  NameArgsTermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_U_47, VarSet_9, NameArgsTerm_7);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  Var_22 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[14])));
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (NameArgsTermStr_10));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[11])));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[12])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[16])), Var_32);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_sym_name_scalar_common_1[5])), Var_21);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
  Context_12 = mercury__term__get_term_context_1_f_0(TypeInfo_for_U_47, NameArgsTerm_7);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_sym_name.report_bad_name_after_dot\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_8;
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
parse_tree__parse_sym_name____Unify____sym_name_maybe_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name____Unify____sym_name_maybe_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_sym_name____Compare____sym_name_maybe_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_sym_name____Compare____sym_name_maybe_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&parse_tree__parse_sym_name__parse_tree__parse_sym_name__type_ctor_info_sym_name_maybe_arity_0);
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
