/*
** Automatically generated from `parse_inst_mode_defn.m'
** by the Mercury compiler,
** version rotd-2020-03-27
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


// :- module parse_tree.parse_inst_mode_defn.
// :- implementation.

/*
INIT mercury__parse_tree__parse_inst_mode_defn__init
ENDINIT
*/

#include "parse_tree.parse_inst_mode_defn.mih"


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
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__field_types_processed_mode_body_0_0[3];

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0[1];

static const MR_Integer parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0[1];

static void MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__412__1_2_p_0(
  MR_Word HeadVar__1_133,
  MR_Word * HeadVar__2_134);

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__395__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_128);

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__370__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_120);

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_user_mode_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String DefnKind_7,
  MR_Word VarSet_8,
  MR_Word HeadTermContext_9,
  MR_Word ArgTerms_10,
  MR_Word MaybeBodyTerm_11,
  MR_Word * MaybeArgVars_12);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6);

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[54][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[1][6];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][3];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[3][1];




static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[54][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at start of"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--->"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be the definition of an inst."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "abstract_inst"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "repeated on left hand side of"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: free inst"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on right hand side of"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type constructor name/arity, not"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the definition of the inst"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the mode name"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the definition of the mode"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In abstract_mode definition:"))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[3][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0)
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0 = {
  (MR_String) "processed_mode_body",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__field_types_processed_mode_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0
};

static const MR_Integer parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_defn",
  (MR_String) "processed_mode_body",
  {     parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0 },
  {     parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0
};

static void MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__412__1_2_p_0(
  MR_Word HeadVar__1_133,
  MR_Word * HeadVar__2_134)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), HeadVar__1_133, HeadVar__2_134);
}

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__395__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_128)
{
  {
    MR_String HeadVar__3_129;

    HeadVar__3_129 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_128);
    return HeadVar__3_129;
  }
}

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__370__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_120)
{
  {
    MR_String HeadVar__3_121;

    HeadVar__3_121 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_120);
    return HeadVar__3_121;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__prog_data____Compare____mode_defn_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_abstract_mode_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded;

    if ((HeadTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_31;
      MR_Word Var_47;

      {
        Spec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_mode_defn_item\'/6"));
        MR_hl_field(MR_mktag(1), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_31, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[32])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
      }
    }
    else
    {
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadTerms_9, (MR_Integer) 1))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadTerms_9, (MR_Integer) 0))));

      if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ContextPieces_14;
        MR_Word MaybeSymNameAndArgs_15;

        ContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[53]))));
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, Var_79, VarSet_8, ContextPieces_14, &MaybeSymNameAndArgs_15);
        if (((MR_tag((MR_Word) MaybeSymNameAndArgs_15)) == (MR_Integer) 0))
        {
          MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_15, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_16));
          }
        }
        else
        {
          MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_15, (MR_Integer) 0))));
          MR_Word ArgTerms_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_15, (MR_Integer) 1))));
          MR_Word HeadTermContext_19;
          MR_Word NameSpecs_20;
          MR_Word MaybeInstArgVars_21;
          MR_Word InstArgVars_22;

          HeadTermContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_79);
          parse_tree__parse_inst_mode_defn__check_user_mode_name_3_p_0(SymName_17, HeadTermContext_19, &NameSpecs_20);
          parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "abstract_mode definition", VarSet_8, HeadTermContext_19, ArgTerms_18, (MR_Word) ((MR_Unsigned) 0U), &MaybeInstArgVars_21);
          succeeded = (NameSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_21)) == (MR_Integer) 1);
            if (succeeded)
              InstArgVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstArgVars_21, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word InstVarSet_23;
            MR_Word ItemModeDefn_25;
            MR_Word Item_26;
            MR_Word Var_54;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_8, &InstVarSet_23);
            {
              ItemModeDefn_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 0) = ((MR_Box) (SymName_17));
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 1) = ((MR_Box) (InstArgVars_22));
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 3) = ((MR_Box) (InstVarSet_23));
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 4) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemModeDefn_25, 5) = ((MR_Box) (SeqNum_11));
            }
            Item_26 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemModeDefn_25)));
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Item_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
            }
          }
          else
          {
            MR_Word Var_55;
            MR_Word Specs_56;

            Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_21);
            Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_20, Var_55);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_56));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_65;
        MR_Word Var_69;

        {
          Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_mode_defn_item\'/6"));
          MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[32])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Spec_65));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_user_mode_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6)
{
  {
    MR_bool succeeded;
    MR_String Name_7;

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
    succeeded = parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(Name_7);
    if (succeeded)
    {
      MR_Word NamePieces_8;
      MR_Word NameSpec_9;
      MR_Word Var_12;
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[36])));
      }
      {
        NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[51])));
        MR_hl_field(MR_mktag(1), NamePieces_8, 1) = ((MR_Box) (Var_12));
      }
      {
        NameSpec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_mode_name\'/3"));
        MR_hl_field(MR_mktag(1), NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 3) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), NameSpec_9, 4) = ((MR_Box) (NamePieces_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_mode_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;
    MR_Word ContextPieces_15;
    MR_Word MaybeSymNameAndArgs_16;

    ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[50]))));
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, HeadTerm_10, VarSet_9, ContextPieces_15, &MaybeSymNameAndArgs_16);
    if (((MR_tag((MR_Word) MaybeSymNameAndArgs_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
      }
    }
    else
    {
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_16, (MR_Integer) 0))));
      MR_Word ArgTerms_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_16, (MR_Integer) 1))));
      MR_Word HeadTermContext_20;
      MR_Word NameSpecs_21;
      MR_Word MaybeInstArgVars_22;
      MR_Word NamedContextPieces_23;
      MR_Word MaybeMode_24;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_String Name_63;
      MR_Word InstArgVars_25;
      MR_Word Mode_26;

      HeadTermContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
      Name_63 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
      succeeded = parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(Name_63);
      if (succeeded)
      {
        MR_Word NamePieces_64;
        MR_Word NameSpec_65;
        MR_Word Var_68;
        MR_Word Var_69;

        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Name_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[36])));
        }
        {
          NamePieces_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NamePieces_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[51])));
          MR_hl_field(MR_mktag(1), NamePieces_64, 1) = ((MR_Box) (Var_68));
        }
        {
          NameSpec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NameSpec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_mode_name\'/3"));
          MR_hl_field(MR_mktag(1), NameSpec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), NameSpec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), NameSpec_65, 3) = ((MR_Box) (HeadTermContext_20));
          MR_hl_field(MR_mktag(1), NameSpec_65, 4) = ((MR_Box) (NamePieces_64));
        }
        {
          NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NameSpecs_21, 0) = ((MR_Box) (NameSpec_65));
          MR_hl_field(MR_mktag(1), NameSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        NameSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (BodyTerm_11));
      }
      parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", VarSet_9, HeadTermContext_20, ArgTerms_19, Var_34, &MaybeInstArgVars_22);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (SymName_18));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[49])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[52])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      NamedContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_5[2])), VarSet_9, NamedContextPieces_23, BodyTerm_11, &MaybeMode_24);
      succeeded = (NameSpecs_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          InstArgVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstArgVars_22, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeMode_24)) == (MR_Integer) 1);
          if (succeeded)
            Mode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_24, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_27;
        MR_Word MaybeAbstractModeDefn_28;
        MR_Word ItemModeDefn_29;
        MR_Word Item_30;
        MR_Word Var_46;
        MR_Word Var_47;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_9, &InstVarSet_27);
        Var_46 = (MR_Word) (Mode_26);
        {
          MaybeAbstractModeDefn_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_28, 0) = ((MR_Box) (Var_46));
        }
        {
          ItemModeDefn_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 0) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 1) = ((MR_Box) (InstArgVars_25));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 2) = ((MR_Box) (MaybeAbstractModeDefn_28));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 3) = ((MR_Box) (InstVarSet_27));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 5) = ((MR_Box) (SeqNum_13));
        }
        Item_30 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemModeDefn_29)));
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Item_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Specs_51;

        Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_22);
        Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeMode_24);
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_49, Var_50);
        Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_21, Var_48);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_51));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded;

    if ((HeadTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_32;
      MR_Word Var_48;

      {
        Spec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_inst_defn_item\'/6"));
        MR_hl_field(MR_mktag(1), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_32, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[32])));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      }
    }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadTerms_9, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadTerms_9, (MR_Integer) 0))));

      if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ContextPieces_14;
        MR_Word MaybeNameAndArgs_15;

        ContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[44]))));
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, Var_80, VarSet_8, ContextPieces_14, &MaybeNameAndArgs_15);
        if (((MR_tag((MR_Word) MaybeNameAndArgs_15)) == (MR_Integer) 0))
        {
          MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeNameAndArgs_15, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_16));
          }
        }
        else
        {
          MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArgs_15, (MR_Integer) 0))));
          MR_Word ArgTerms_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndArgs_15, (MR_Integer) 1))));
          MR_Word HeadTermContext_19;
          MR_Word NameSpecs_20;
          MR_Word MaybeInstArgVars_21;
          MR_Word InstArgVars_22;

          HeadTermContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_80);
          parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(SymName_17, HeadTermContext_19, &NameSpecs_20);
          parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "abstract_inst definition", VarSet_8, HeadTermContext_19, ArgTerms_18, (MR_Word) ((MR_Unsigned) 0U), &MaybeInstArgVars_21);
          succeeded = (NameSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_21)) == (MR_Integer) 1);
            if (succeeded)
              InstArgVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstArgVars_21, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word InstVarSet_23;
            MR_Word ItemInstDefn_26;
            MR_Word Item_27;
            MR_Word Var_55;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_8, &InstVarSet_23);
            {
              ItemInstDefn_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 0) = ((MR_Box) (SymName_17));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 1) = ((MR_Box) (InstArgVars_22));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 4) = ((MR_Box) (InstVarSet_23));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 5) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemInstDefn_26, 6) = ((MR_Box) (SeqNum_11));
            }
            Item_27 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemInstDefn_26)));
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Item_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
            }
          }
          else
          {
            MR_Word Var_56;
            MR_Word Specs_57;

            Var_56 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_21);
            Specs_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_20, Var_56);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_57));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_66;
        MR_Word Var_70;

        {
          Spec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_inst_defn_item\'/6"));
          MR_hl_field(MR_mktag(1), Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_66, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[32])));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_66));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_inst_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word InstDefnTerm_13;
    MR_Word Var_21;

    if (succeeded)
    {
      InstDefnTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word HeadTerm_14;
      MR_Word BodyTerm_15;
      MR_Word Var_22;
      MR_String Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
          succeeded = (strcmp(Var_23, (MR_String) "==") == 0);
          if (succeeded)
          {
            succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
              succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_14, BodyTerm_15, Context_10, SeqNum_11, MaybeIOM_12);
      else
      {
        MR_Word Var_30;
        MR_Word HeadTerm_87;
        MR_Word Var_27;
        MR_String Var_28;
        MR_Word Var_29;
        MR_Word Var_31;

        succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
            succeeded = (strcmp(Var_28, (MR_String) "--->") == 0);
            if (succeeded)
            {
              succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadTerm_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
                Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
                succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                  succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word BoundBodyTerm_18;

          {
            BoundBodyTerm_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 1) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 2) = ((MR_Box) (Context_10));
          }
          parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_87, BoundBodyTerm_18, Context_10, SeqNum_11, MaybeIOM_12);
        }
        else
        {
          MR_Word Spec_20;
          MR_Word Var_62;
          MR_Word Var_63;

          Var_62 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstDefnTerm_13);
          {
            Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_item\'/6"));
            MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[17])));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
          }
        }
      }
    }
    else
    {
      MR_Word Var_85;
      MR_Word Spec_90;

      {
        Spec_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_90, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_item\'/6"));
        MR_hl_field(MR_mktag(1), Spec_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_90, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_90, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_90, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[26])));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_90));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;
    MR_Word ContextPieces_15;
    MR_Word NameTerm_19;
    MR_Word MaybeForType_22;
    MR_Word ForTypeSpecs_23;
    MR_Word MaybeSymNameAndArgs_27;
    MR_Word NameTermPrime_16;
    MR_Word ForTypeTerm_17;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[44]))));
    succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
        succeeded = (strcmp(Var_46, (MR_String) "for") == 0);
        if (succeeded)
        {
          succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTermPrime_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
            succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ForTypeTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
              Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1))));
              succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeSymName_20;
      MR_Integer TypeArity_21;

      NameTerm_19 = NameTermPrime_16;
      succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ForTypeTerm_17, &TypeSymName_20, &TypeArity_21);
      if (succeeded)
      {
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (TypeSymName_20));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (TypeArity_21));
        }
        {
          MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeForType_22, 0) = ((MR_Box) (Var_50));
        }
        ForTypeSpecs_23 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_String ForTypeTermStr_24;
        MR_Word ForTypePieces_25;
        MR_Word ForTypeSpec_26;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_67;

        MaybeForType_22 = (MR_Word) ((MR_Unsigned) 0U);
        ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, ForTypeTerm_17);
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (ForTypeTermStr_24));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[34])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          ForTypePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ForTypePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), ForTypePieces_25, 1) = ((MR_Box) (Var_53));
        }
        Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ForTypeTerm_17);
        {
          ForTypeSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ForTypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_eqv\'/7"));
          MR_hl_field(MR_mktag(1), ForTypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), ForTypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), ForTypeSpec_26, 3) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), ForTypeSpec_26, 4) = ((MR_Box) (ForTypePieces_25));
        }
        {
          ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ForTypeSpecs_23, 0) = ((MR_Box) (ForTypeSpec_26));
          MR_hl_field(MR_mktag(1), ForTypeSpecs_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      NameTerm_19 = HeadTerm_10;
      MaybeForType_22 = (MR_Word) ((MR_Unsigned) 0U);
      ForTypeSpecs_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, NameTerm_19, VarSet_9, ContextPieces_15, &MaybeSymNameAndArgs_27);
    if (((MR_tag((MR_Word) MaybeSymNameAndArgs_27)) == (MR_Integer) 0))
    {
      MR_Word SymNameAndArgSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_27, (MR_Integer) 0))));
      MR_Word Specs_29;

      Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SymNameAndArgSpecs_28, ForTypeSpecs_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_29));
      }
    }
    else
    {
      MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_27, (MR_Integer) 0))));
      MR_Word ArgTerms_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_27, (MR_Integer) 1))));
      MR_Word HeadTermContext_32;
      MR_Word NameSpecs_33;
      MR_Word MaybeInstArgVars_34;
      MR_Word NamedContextPieces_35;
      MR_Word MaybeInst_36;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word InstArgVars_37;
      MR_Word Inst_38;

      HeadTermContext_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
      parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(SymName_30, HeadTermContext_32, &NameSpecs_33);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (BodyTerm_11));
      }
      parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", VarSet_9, HeadTermContext_32, ArgTerms_31, Var_70, &MaybeInstArgVars_34);
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (SymName_30));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[49])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      NamedContextPieces_35 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71);
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_5[0])), VarSet_9, NamedContextPieces_35, BodyTerm_11, &MaybeInst_36);
      succeeded = (NameSpecs_33 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ForTypeSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_34)) == (MR_Integer) 1);
          if (succeeded)
          {
            InstArgVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstArgVars_34, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeInst_36)) == (MR_Integer) 1);
            if (succeeded)
              Inst_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 0))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_39;
        MR_Word MaybeAbstractInstDefn_40;
        MR_Word ItemInstDefn_41;
        MR_Word Item_42;
        MR_Word Var_82;
        MR_Word Var_83;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_9, &InstVarSet_39);
        Var_82 = (MR_Word) (Inst_38);
        {
          MaybeAbstractInstDefn_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_40, 0) = ((MR_Box) (Var_82));
        }
        {
          ItemInstDefn_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 0) = ((MR_Box) (SymName_30));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 1) = ((MR_Box) (InstArgVars_37));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 2) = ((MR_Box) (MaybeForType_22));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 3) = ((MR_Box) (MaybeAbstractInstDefn_40));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 4) = ((MR_Box) (InstVarSet_39));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 5) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 6) = ((MR_Box) (SeqNum_13));
        }
        Item_42 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemInstDefn_41)));
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Item_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_83));
        }
      }
      else
      {
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Specs_88;

        Var_86 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_34);
        Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_36);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_86, Var_87);
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ForTypeSpecs_23, Var_85);
        Specs_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NameSpecs_33, Var_84);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_88));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_134;

    parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__412__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_134);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_134));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_HeadVar__3_129;

    conv3_HeadVar__3_129 = parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__395__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_129));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__3_121;

    conv2_HeadVar__3_121 = parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__370__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_121));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String DefnKind_7,
  MR_Word VarSet_8,
  MR_Word HeadTermContext_9,
  MR_Word ArgTerms_10,
  MR_Word MaybeBodyTerm_11,
  MR_Word * MaybeArgVars_12)
{
  {
    MR_bool succeeded;
    MR_Word ArgVars_13;

    succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgTerms_10, &ArgVars_13);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Specs_76_76;
      MR_Word DupArgVars_19;
      MR_Word TypeInfo_117_117;
      MR_Word ArgVarsBag_18;
      MR_Word Var_46;
      MR_Word BodyTerm_27;
      MR_Word FreeVars_34;
      MR_Word TypeCtorInfo_124_124;
      MR_Word TypeInfo_125_125;
      MR_Word BodyVars_28;
      MR_Word BodyVarsSet_31;
      MR_Word ArgVarsSet_32;
      MR_Word FreeVarsSet_33;

      succeeded = (ArgVars_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 1))));
        succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfo_117_117 = (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]);
          mercury__bag__from_list_2_p_0(TypeInfo_117_117, ArgVars_13, &ArgVarsBag_18);
          mercury__bag__to_list_only_duplicates_2_p_0(TypeInfo_117_117, ArgVarsBag_18, &DupArgVars_19);
          succeeded = (DupArgVars_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_String ParamWord_22;
        MR_String IsAreWord_23;
        MR_Word DupVarNames_24;
        MR_Word RepeatPieces_25;
        MR_Word RepeatSpec_26;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Box conv0_ParamWord_22;
        MR_Box conv1_IsAreWord_23;

        conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
        ParamWord_22 = ((MR_String) (conv0_ParamWord_22));
        conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        IsAreWord_23 = ((MR_String) (conv1_IsAreWord_23));
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (VarSet_8));
        }
        DupVarNames_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_51, DupArgVars_19);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ParamWord_22));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[40])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        Var_59 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(DupVarNames_24);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (IsAreWord_23));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (DefnKind_7));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[34])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_59, Var_60);
        RepeatPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, Var_58);
        {
          RepeatSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepeatSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_inst_mode_defn_args\'/6"));
          MR_hl_field(MR_mktag(1), RepeatSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), RepeatSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), RepeatSpec_26, 3) = ((MR_Box) (HeadTermContext_9));
          MR_hl_field(MR_mktag(1), RepeatSpec_26, 4) = ((MR_Box) (RepeatPieces_25));
        }
        {
          STATE_VARIABLE_Specs_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_76_76, 0) = ((MR_Box) (RepeatSpec_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_76_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        STATE_VARIABLE_Specs_76_76 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = (MaybeBodyTerm_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BodyTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyTerm_11, (MR_Integer) 0))));
        TypeCtorInfo_124_124 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
        mercury__term__vars_2_p_0(TypeCtorInfo_124_124, BodyTerm_27, &BodyVars_28);
        succeeded = (BodyVars_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfo_125_125 = (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]);
          mercury__set__list_to_set_2_p_0(TypeInfo_125_125, BodyVars_28, &BodyVarsSet_31);
          mercury__set__list_to_set_2_p_0(TypeInfo_125_125, ArgVars_13, &ArgVarsSet_32);
          mercury__set__difference_3_p_0(TypeInfo_125_125, BodyVarsSet_31, ArgVarsSet_32, &FreeVarsSet_33);
          mercury__set__to_sorted_list_2_p_0(TypeInfo_125_125, FreeVarsSet_33, &FreeVars_34);
          succeeded = (FreeVars_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word FreeVarNames_37;
        MR_Word FreePieces_38;
        MR_Word FreeSpec_39;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_String Var_83;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_103;
        MR_Word STATE_VARIABLE_Specs_104_104;
        MR_Box conv4_Var_83;

        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (VarSet_8));
        }
        FreeVarNames_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, FreeVars_34);
        conv4_Var_83 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
        Var_83 = ((MR_String) (conv4_Var_83));
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
        }
        Var_88 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(FreeVarNames_37);
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (DefnKind_7));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[34])));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
        }
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_88, Var_89);
        FreePieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_78, Var_87);
        Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_27);
        {
          FreeSpec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FreeSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_inst_mode_defn_args\'/6"));
          MR_hl_field(MR_mktag(1), FreeSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), FreeSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), FreeSpec_39, 3) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(1), FreeSpec_39, 4) = ((MR_Box) (FreePieces_38));
        }
        {
          STATE_VARIABLE_Specs_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 0) = ((MR_Box) (FreeSpec_39));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 1) = ((MR_Box) (STATE_VARIABLE_Specs_76_76));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_104_104));
        }
      }
      else
      if ((STATE_VARIABLE_Specs_76_76 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word InstArgVars_40;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_4[0]), ArgVars_13, &InstArgVars_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstArgVars_40));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_76_76));
        }
    }
    else
    {
      MR_Word VarSpec_44;
      MR_Word Var_114;

      {
        VarSpec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarSpec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_inst_mode_defn_args\'/6"));
        MR_hl_field(MR_mktag(1), VarSpec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), VarSpec_44, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), VarSpec_44, 3) = ((MR_Box) (HeadTermContext_9));
        MR_hl_field(MR_mktag(1), VarSpec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[38])));
      }
      {
        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (VarSpec_44));
        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgVars_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6)
{
  {
    MR_bool succeeded;
    MR_String Name_7;

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
    succeeded = parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(Name_7);
    if (succeeded)
    {
      MR_Word NamePieces_8;
      MR_Word NameSpec_9;
      MR_Word Var_12;
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[36])));
      }
      {
        NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), NamePieces_8, 1) = ((MR_Box) (Var_12));
      }
      {
        NameSpec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_inst_name\'/3"));
        MR_hl_field(MR_mktag(1), NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 3) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), NameSpec_9, 4) = ((MR_Box) (NamePieces_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_inst_mode_defn__init(void)
{
}

void mercury__parse_tree__parse_inst_mode_defn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__type_ctor_info_processed_mode_body_0);
}

void mercury__parse_tree__parse_inst_mode_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_inst_mode_defn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_inst_mode_defn.
