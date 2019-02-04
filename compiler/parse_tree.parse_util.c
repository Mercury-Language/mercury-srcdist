/*
** Automatically generated from `parse_util.m'
** by the Mercury compiler,
** version rotd-2018-10-15
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


// :- module parse_tree.parse_util.
// :- implementation.

/*
INIT mercury__parse_tree__parse_util__init
ENDINIT
*/

#include "parse_tree.parse_util.mih"


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
#include "multi_map.mih"
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
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3];

static const MR_DuFunctorDesc parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1];

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word Parser_5,
  MR_Word Head_6,
  MR_Word Tail_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Op_5,
  MR_Word Term_6,
  MR_Word List0_7,
  MR_Word * OneOrMore_8);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[3][1];

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][10];




static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer parse_tree__parse_util_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_util_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_util_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__parse_util__pti_conflict_1__pseudo_1 = {
  &parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0 = {
  (MR_String) "conflict",
  (MR_Integer) 3,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_util__parse_tree__parse_util__field_types_conflict_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0[1] = {
  &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0
};

static const MR_DuPtagLayout parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_util__parse_tree__parse_util__du_stag_ordered_conflict_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1[1] = {
  &parse_tree__parse_util__parse_tree__parse_util__du_functor_desc_conflict_1_0
};

static const MR_Integer parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_util____Unify____conflict_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____conflict_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "conflict",
  {     parse_tree__parse_util__parse_tree__parse_util__du_name_ordered_conflict_1 },
  {     parse_tree__parse_util__parse_tree__parse_util__du_ptag_ordered_conflict_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_util__parse_tree__parse_util__functor_number_map_conflict_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__list__pti_list_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "maybe_pred_or_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "parser",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_13_13;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_11_11));
    }
    parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_13_13, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_12_12;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
    }
    succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_12_12, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util__accumulate_conflict_specs_6_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word Context_7,
  MR_String ConflictingWhatInWhat_8,
  MR_Word Specified_9,
  MR_Word Conflict_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_bool succeeded;
    MR_Box A_12 = (MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 0));
    MR_Box B_13 = (MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 1));
    MR_String Diagnosis_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Conflict_10, (MR_Integer) 2))));

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_45, A_12, Specified_9);
    if (succeeded)
      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_45, B_13, Specified_9);
    if (succeeded)
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ConflictingWhatInWhat_8));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Diagnosis_14));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[3])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[5])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_util_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Pieces_15));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
      }
    }
    else
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
  }
}

static void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_18;

    parse_tree__parse_util__accumulate_conflict_specs_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
  }
}

void MR_CALL 
parse_tree__parse_util__report_any_conflicts_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Context_6,
  MR_String ConflictingWhatInWhat_7,
  MR_Word Conflicts_8,
  MR_Word Specified_9,
  MR_Word * Specs_10)
{
  {
    MR_Word TypeInfo_18_18;
    MR_Word Var_11;
    MR_Box conv1_Specs_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (parse_tree__parse_util__report_any_conflicts_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (ConflictingWhatInWhat_7));
      MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Specified_9));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__list__foldl_4_p_0(TypeInfo_18_18, (MR_Word) (&parse_tree__parse_util_scalar_common_1[0]), (MR_Word) (Var_11), (MR_Word) (Conflicts_8), ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_10);
    *Specs_10 = ((MR_Word) (conv1_Specs_10));
  }
}

void MR_CALL 
parse_tree__parse_util__parse_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Parser_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  {
    MR_Word List_7;
    MR_Word Head_12;
    MR_Word Tail_13;
    MR_Word Var_15;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
    Head_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
    Tail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
    {
      List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), List_7, 0) = ((MR_Box) (Head_12));
      MR_hl_field(MR_mktag(1), List_7, 1) = ((MR_Box) (Tail_13));
    }
    parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_8, Parser_4, List_7, Result_6);
  }
}

void MR_CALL 
parse_tree__parse_util__map_parser_3_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Parser_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_2[2]));
  else
  {
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadResult_10;
    MR_Word TailResult_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Parser_1, (MR_Integer) 1))));
    MR_Box conv1_HeadResult_10;

    func_0(((MR_Box) (Parser_1)), ((MR_Box) (Head_7)), &conv1_HeadResult_10);
    HeadResult_10 = ((MR_Word) (conv1_HeadResult_10));
    parse_tree__parse_util__map_parser_3_p_0(TypeInfo_for_T_22, Parser_1, Tail_8, &TailResult_11);
    if (((MR_tag((MR_Word) HeadResult_10)) == (MR_Integer) 0))
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadResult_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
      {
        MR_Word TailSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailResult_11, (MR_Integer) 0))));
        MR_Word Var_20;

        Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_24, TailSpecs_13);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
        }
      }
      else
        *HeadVar__3_3 = (MR_Word) (HeadResult_10);
    }
    else
    {
      MR_Box Var_25 = (MR_hl_field(MR_mktag(1), HeadResult_10, (MR_Integer) 0));

      if (((MR_tag((MR_Word) TailResult_11)) == (MR_Integer) 0))
        *HeadVar__3_3 = TailResult_11;
      else
      {
        MR_Word TailItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_11, (MR_Integer) 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = Var_25;
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (TailItems_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_one_or_more_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Parser_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  {
    MR_Word Head_7;
    MR_Word Tail_8;
    MR_Word Var_9;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
    Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_10, Parser_4, Head_7, Tail_8, Result_6);
  }
}

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word Parser_5,
  MR_Word Head_6,
  MR_Word Tail_7,
  MR_Word * Result_8)
{
  {
    MR_Word HeadResult_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Parser_5, (MR_Integer) 1))));
    MR_Box conv1_HeadResult_9;

    func_0(((MR_Box) (Parser_5)), ((MR_Box) (Head_6)), &conv1_HeadResult_9);
    HeadResult_9 = ((MR_Word) (conv1_HeadResult_9));
    if ((Tail_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
        *Result_8 = (MR_Word) (HeadResult_9);
      else
      {
        MR_Box Item_11 = (MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0));
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = Item_11;
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        }
      }
    else
    {
      MR_Word HeadTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_7, (MR_Integer) 0))));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_7, (MR_Integer) 1))));
      MR_Word TailResult_14;

      parse_tree__parse_util__map_parser_one_or_more_4_p_0(TypeInfo_for_T_29, Parser_5, HeadTail_12, TailTail_13, &TailResult_14);
      if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadResult_9, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
        {
          MR_Word TailSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TailResult_14, (MR_Integer) 0))));
          MR_Word Var_22;

          Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_31, TailSpecs_16);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
          }
        }
        else
          *Result_8 = (MR_Word) (HeadResult_9);
      }
      else
      {
        MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0));

        if (((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 0))
          *Result_8 = TailResult_14;
        else
        {
          MR_Word TailItems_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_14, (MR_Integer) 0))));
          MR_Word Var_21;

          Var_21 = mercury__list__one_or_more_cons_2_f_0(TypeInfo_for_T_29, Var_32, TailItems_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  {
    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
  }
}

void MR_CALL 
parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word * Term_3)
{
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *Term_3 = Var_22;
    else
    {
      MR_Word Second_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
      MR_Word Tail_12;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Second_9));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Rest_10));
      }
      parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(TypeInfo_for_T_20, Context_1, Var_14, &Tail_12);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Tail_12));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_1));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  {
    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
  }
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * List_4)
{
  {
    MR_Word Head_5;
    MR_Word Tail_6;
    MR_Word Var_8;

    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", Term_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    Head_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_one_or_more_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * OneOrMore_4)
{
  {
    parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", Term_3, (MR_Word) ((MR_Unsigned) 0U), OneOrMore_4);
  }
}

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Op_5,
  MR_Word Term_6,
  MR_Word List0_7,
  MR_Word * OneOrMore_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word L_9;
    MR_Word R_10;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(Op_5, Var_21) == 0);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            L_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
              succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word RHead_12;
      MR_Word RTail_13;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word next_value_of_Term_6;
      MR_Word next_value_of_List0_7;

      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Op_5, R_10, List0_7, &Var_18);
      RHead_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      RTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (RHead_12));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RTail_13));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Term_6 = L_9;
      next_value_of_List0_7 = Var_19;
      Term_6 = next_value_of_Term_6;
      List0_7 = next_value_of_List0_7;
      continue;
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *OneOrMore_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Term_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (List0_7));
      }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__list_term_to_term_list_2_p_0(
  MR_Word Term_3,
  MR_Word * Terms_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_21;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = (strcmp(Var_21, (MR_String) "[]") == 0);
          if (succeeded)
          {
            *Terms_4 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word HeadTerm_5;
          MR_Word TailTerm_6;
          MR_Word TailTerms_8;
          MR_Word Var_16;
          MR_Word Var_17;

          succeeded = (strcmp(Var_21, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            HeadTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
              succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(TailTerm_6, &TailTerms_8);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Terms_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTerm_5));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTerms_8));
                  }
                  succeeded = MR_TRUE;
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
parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word MaybeModuleName_6,
  MR_Word PredAndArgsTerm_7,
  MR_Word VarSet_8,
  MR_Word ContextPieces_9,
  MR_Word * PredAndArgsResult_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PredAndArgsTerm_7)) == (MR_Integer) 0);
    MR_Word FunctorTerm_14;
    MR_Word MaybeFuncResult_15;
    MR_Word GenericVarSet_16;
    MR_Word Result_18;
    MR_Word FuncAndArgsTerm_11;
    MR_Word FuncResultTerm_12;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_7, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        succeeded = (strcmp(Var_23, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncAndArgsTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncResultTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      FunctorTerm_14 = FuncAndArgsTerm_11;
      {
        MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFuncResult_15, 0) = ((MR_Box) (FuncResultTerm_12));
      }
    }
    else
    {
      FunctorTerm_14 = PredAndArgsTerm_7;
      MaybeFuncResult_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__varset__coerce_2_p_0(TypeInfo_for_T_28, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, &GenericVarSet_16);
    if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(TypeInfo_for_T_28, GenericVarSet_16, ContextPieces_9, FunctorTerm_14, &Result_18);
    else
    {
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_6, (MR_Integer) 0))));

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeInfo_for_T_28, ModuleName_17, FunctorTerm_14, GenericVarSet_16, ContextPieces_9, &Result_18);
    }
    if (((MR_tag((MR_Word) Result_18)) == (MR_Integer) 0))
      *PredAndArgsResult_10 = (MR_Word) (Result_18);
    else
    {
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_18, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_18, (MR_Integer) 1))));
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Args_20));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MaybeFuncResult_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PredAndArgsResult_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_27));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word PredAndArgsTerm_5,
  MR_Word * PredOrFunc_6,
  MR_Word * SymName_7,
  MR_Word * ArgTerms_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PredAndArgsTerm_5)) == (MR_Integer) 0);
    MR_Word FuncAndArgsTerm_9;
    MR_Word Var_16;
    MR_Word Var_13;
    MR_String Var_14;
    MR_Word Var_15;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_5, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArgsTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        succeeded = (strcmp(Var_14, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncAndArgsTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
              succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgTerms0_12;
      MR_Word conv0_ArgTerms_8;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_20, FuncAndArgsTerm_9, SymName_7, &ArgTerms0_12);
      if (succeeded)
      {
        *PredOrFunc_6 = (MR_Integer) 1;
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
        }
        conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(TypeInfo_22_22, (MR_Word) (ArgTerms0_12), (MR_Word) (Var_16));
        *ArgTerms_8 = (MR_Word) (conv0_ArgTerms_8);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(TypeInfo_for_T_20, PredAndArgsTerm_5, SymName_7, ArgTerms_8);
      if (succeeded)
      {
        *PredOrFunc_6 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_name_and_arity_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word PorFPredAndArityTerm_5,
  MR_Word * PredOrFunc_6,
  MR_Word * SymName_7,
  MR_Integer * Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PorFPredAndArityTerm_5)) == (MR_Integer) 0);
    MR_String PredOrFuncStr_9;
    MR_Word Args_10;
    MR_Word Arg_12;
    MR_Word ModuleName_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PorFPredAndArityTerm_5, (MR_Integer) 0))));
      Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PorFPredAndArityTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        PredOrFuncStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        if ((strcmp(PredOrFuncStr_9, (MR_String) "func") == 0))
        {
          *PredOrFunc_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(PredOrFuncStr_9, (MR_String) "pred") == 0))
        {
          *PredOrFunc_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
            succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleName_13 = (MR_Word) (&parse_tree__parse_util_scalar_common_2[0]);
              succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0(TypeInfo_for_T_17, ModuleName_13, Arg_12, SymName_7, Arity_8);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_name_and_arity_unqualified_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word PredAndArityTerm_4,
  MR_Word * SymName_5,
  MR_Integer * Arity_6)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0(TypeInfo_for_T_9, (MR_Word) (&parse_tree__parse_util_scalar_common_2[0]), PredAndArityTerm_4, SymName_5, Arity_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_name_and_arity_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word ModuleName_5,
  MR_Word PredAndArityTerm_6,
  MR_Word * SymName_7,
  MR_Integer * Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) PredAndArityTerm_6)) == (MR_Integer) 0);
    MR_Word PredNameTerm_9;
    MR_Word ArityTerm_10;
    MR_Word Var_12;
    MR_String Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArityTerm_6, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredAndArityTerm_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_13, (MR_String) "/") == 0);
        if (succeeded)
        {
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PredNameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArityTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(TypeInfo_for_T_17, ModuleName_5, PredNameTerm_9, SymName_7);
                if (succeeded)
                  succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeInfo_for_T_17, ArityTerm_10, Arity_8);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____conflict_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____conflict_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____conflict_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_util____Unify____parser_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_util____Compare____parser_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_util__init(void)
{
}

void mercury__parse_tree__parse_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_conflict_1);
	MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1);
	MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1);
}

void mercury__parse_tree__parse_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_util.
