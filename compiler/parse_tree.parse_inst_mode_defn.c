/*
** Automatically generated from `parse_inst_mode_defn.m'
** by the Mercury compiler,
** version 2017-02-07
** configured for x86_64-pc-linux-gnu.
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


// :- module parse_tree.parse_inst_mode_defn.
// :- implementation.

/*
INIT mercury__parse_tree__parse_inst_mode_defn__init
ENDINIT
*/

#include "parse_tree.parse_inst_mode_defn.mih"


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
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__359__1_2_p_0(
  MR_Word HeadVar__1_148,
  MR_Word * HeadVar__2_149);

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_143);

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_135);

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
parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12);

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


static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[50][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[1][6];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][3];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[6][1];




static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[50][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at start of"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--->"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be the definition of an inst."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "repeated on left hand side of"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free inst"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on right hand side of"))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_5[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type constructor name/arity, not"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the definition of the inst"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_5[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_5[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the mode name"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the definition of the mode"))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[32])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[17])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[26])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

static const MR_DuFunctorDesc parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0 = {
  (MR_String) "processed_mode_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__field_types_processed_mode_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0
};

static const MR_DuPtagLayout parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_defn",
  (MR_String) "processed_mode_body",
  {     parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0 },
  {     parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0
};

static void MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__359__1_2_p_0(
  MR_Word HeadVar__1_148,
  MR_Word * HeadVar__2_149)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, HeadVar__1_148, HeadVar__2_149);
  }
}

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_143)
{
  {
    MR_String HeadVar__3_144;

    HeadVar__3_144 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_8, HeadVar__2_143);
    return HeadVar__3_144;
  }
}

static MR_String MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_135)
{
  {
    MR_String HeadVar__3_136;

    HeadVar__3_136 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_8, HeadVar__2_135);
    return HeadVar__3_136;
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[1], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____mode_defn_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
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
    MR_Word TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word TypeCtorInfo_54_54;
    MR_Word ContextPieces_15;
    MR_Word MaybeSymNameAndArgs_16;

    ContextPieces_15 = mercury__cord__singleton_1_f_0(TypeCtorInfo_53_53, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[47]))));
    TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_54_54, ModuleName_8, HeadTerm_10, VarSet_9, ContextPieces_15, &MaybeSymNameAndArgs_16);
    if (((MR_tag((MR_Word) MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_16, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
      }
    }
    else
    {
      MR_Word SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_16, (MR_Integer) 0)));
      MR_Word ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_16, (MR_Integer) 1)));
      MR_Word HeadTermContext_20;
      MR_Word NameSpecs_21;
      MR_Word MaybeInstArgVars_22;
      MR_Word NamedContextPieces_23;
      MR_Word MaybeMode_24;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_String Name_62;
      MR_Word InstArgVars_25;
      MR_Word Mode_26;

      HeadTermContext_20 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_54_54, HeadTerm_10);
      Name_62 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
      succeeded = parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(Name_62);
      if (succeeded)
      {
        MR_Word NamePieces_63;
        MR_Word NameSpec_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Name_62));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[30])));
        }
        {
          NamePieces_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NamePieces_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), NamePieces_63, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (NamePieces_63));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (HeadTermContext_20));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          NameSpec_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NameSpec_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), NameSpec_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), NameSpec_64, 2) = ((MR_Box) (Var_77));
        }
        {
          NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NameSpecs_21, 0) = ((MR_Box) (NameSpec_64));
          MR_hl_field(MR_mktag(1), NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
        NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (BodyTerm_11));
      }
      parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", VarSet_9, HeadTermContext_20, ArgTerms_19, Var_34, &MaybeInstArgVars_22);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (SymName_18));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[44])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[49])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      NamedContextPieces_23 = mercury__cord__from_list_1_f_0(TypeCtorInfo_53_53, Var_35);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_5[5]), VarSet_9, NamedContextPieces_23, BodyTerm_11, &MaybeMode_24);
      succeeded = (NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          InstArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstArgVars_22, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeMode_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Mode_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMode_24, (MR_Integer) 0)));
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_27;
        MR_Word ModeDefn_28;
        MR_Word ItemModeDefn_29;
        MR_Word Item_30;
        MR_Word Var_46;

        mercury__varset__coerce_2_p_0(TypeCtorInfo_54_54, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_9, &InstVarSet_27);
        ModeDefn_28 = (MR_Word) Mode_26;
        {
          ItemModeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 0) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 1) = ((MR_Box) (InstArgVars_25));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 2) = ((MR_Box) (ModeDefn_28));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 3) = ((MR_Box) (InstVarSet_27));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ItemModeDefn_29, 5) = ((MR_Box) (SeqNum_13));
        }
        {
          Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Item_30, 1) = ((MR_Box) (ItemModeDefn_29));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Item_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Specs_50;

        Var_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[1], MaybeInstArgVars_22);
        Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, MaybeMode_24);
        Var_47 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_56_56, Var_48, Var_49);
        Specs_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_56_56, NameSpecs_21, Var_47);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_50));
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
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word InstDefnTerm_13;
    MR_Word Var_24;

    if (succeeded)
    {
      InstDefnTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1)));
      succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word HeadTerm_14;
      MR_Word BodyTerm_15;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_16;

      succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 0)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 1)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
          succeeded = (strcmp(Var_26, (MR_String) "==") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                BodyTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
                Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1)));
                succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_14, BodyTerm_15, Context_10, SeqNum_11, MaybeIOM_12);
      else
      {
        MR_Word Var_33;
        MR_Word HeadTerm_109;
        MR_Word Var_30;
        MR_String Var_31;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_17;
        MR_Word BodyTerm_110;

        succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 0)));
          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 1)));
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
            succeeded = (strcmp(Var_31, (MR_String) "--->") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                HeadTerm_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0)));
                Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  BodyTerm_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
                  Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1)));
                  succeeded = (Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word BoundBodyTerm_18;

          {
            BoundBodyTerm_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 1) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(0), BoundBodyTerm_18, 2) = ((MR_Box) (Context_10));
          }
          parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_109, BoundBodyTerm_18, Context_10, SeqNum_11, MaybeIOM_12);
        }
        else
        {
          MR_Word HeadTerm_108;
          MR_Word Args_19;
          MR_Word Var_39;
          MR_String Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_String Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_20;
          MR_Word Var_21;

          succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 0)));
            Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 1)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnTerm_13, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
              succeeded = (strcmp(Var_40, (MR_String) "is") == 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Args_19)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  HeadTerm_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 0)));
                  Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
                    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1)));
                    succeeded = (Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0)));
                        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)));
                        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 2)));
                        succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0)));
                            succeeded = (strcmp(Var_44, (MR_String) "private") == 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
            parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_6_p_0(ModuleName_7, VarSet_8, HeadTerm_108, Context_10, SeqNum_11, MaybeIOM_12);
          else
          {
            MR_Word Spec_23;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_79;

            Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, InstDefnTerm_13);
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[45])));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_72));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Spec_23));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_106;
      MR_Word Spec_112;

      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[46])));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_112, 2) = ((MR_Box) (Var_100));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Spec_112));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_106));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_37_37;
    MR_Word ContextPieces_13;
    MR_Word MaybeNameAndArgs_14;

    ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[39]))));
    TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_37_37, ModuleName_7, HeadTerm_9, VarSet_8, ContextPieces_13, &MaybeNameAndArgs_14);
    if (((MR_tag((MR_Word) MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeNameAndArgs_14, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_15));
      }
    }
    else
    {
      MR_Word SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndArgs_14, (MR_Integer) 0)));
      MR_Word ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndArgs_14, (MR_Integer) 1)));
      MR_Word HeadTermContext_18;
      MR_Word NameSpecs_19;
      MR_Word MaybeInstArgVars_20;
      MR_String Name_44;
      MR_Word InstArgVars_21;

      HeadTermContext_18 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_37_37, HeadTerm_9);
      Name_44 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      succeeded = parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(Name_44);
      if (succeeded)
      {
        MR_Word NamePieces_45;
        MR_Word NameSpec_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;

        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Name_44));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[30])));
        }
        {
          NamePieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NamePieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[33])));
          MR_hl_field(MR_mktag(1), NamePieces_45, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (NamePieces_45));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (HeadTermContext_18));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          NameSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NameSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), NameSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), NameSpec_46, 2) = ((MR_Box) (Var_59));
        }
        {
          NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NameSpecs_19, 0) = ((MR_Box) (NameSpec_46));
          MR_hl_field(MR_mktag(1), NameSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
        NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", VarSet_8, HeadTermContext_18, ArgTerms_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeInstArgVars_20);
      succeeded = (NameSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_20)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          InstArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstArgVars_20, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word InstVarSet_22;
        MR_Word ItemInstDefn_25;
        MR_Word Item_26;
        MR_Word Var_31;

        mercury__varset__coerce_2_p_0(TypeCtorInfo_37_37, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_8, &InstVarSet_22);
        {
          ItemInstDefn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 0) = ((MR_Box) (SymName_16));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 1) = ((MR_Box) (InstArgVars_21));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 4) = ((MR_Box) (InstVarSet_22));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 5) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), ItemInstDefn_25, 6) = ((MR_Box) (SeqNum_11));
        }
        Item_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ItemInstDefn_25);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Item_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Var_32;
        MR_Word Specs_33;

        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[1], MaybeInstArgVars_20);
        Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NameSpecs_19, Var_32);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
        }
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
    MR_Word TypeCtorInfo_95_95 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word TypeCtorInfo_98_98;
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
    MR_Word Var_18;

    ContextPieces_15 = mercury__cord__singleton_1_f_0(TypeCtorInfo_95_95, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[39]))));
    succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 0)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0)));
        succeeded = (strcmp(Var_46, (MR_String) "for") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            NameTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ForTypeTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1)));
              succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      succeeded = parse_tree__parse_util__parse_name_and_arity_unqualified_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ForTypeTerm_17, &TypeSymName_20, &TypeArity_21);
      if (succeeded)
      {
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (TypeSymName_20));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (TypeArity_21));
        }
        {
          MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeForType_22, 0) = ((MR_Box) (Var_50));
        }
        ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word TypeCtorInfo_97_97;
        MR_String ForTypeTermStr_24;
        MR_Word ForTypePieces_25;
        MR_Word ForTypeSpec_26;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_97_97, VarSet_9, ForTypeTerm_17);
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (ForTypeTermStr_24));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[28])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          ForTypePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ForTypePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[40])));
          MR_hl_field(MR_mktag(1), ForTypePieces_25, 1) = ((MR_Box) (Var_53));
        }
        Var_68 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_97_97, ForTypeTerm_17);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (ForTypePieces_25));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ForTypeSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForTypeSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ForTypeSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), ForTypeSpec_26, 2) = ((MR_Box) (Var_66));
        }
        {
          ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ForTypeSpecs_23, 0) = ((MR_Box) (ForTypeSpec_26));
          MR_hl_field(MR_mktag(1), ForTypeSpecs_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
    {
      NameTerm_19 = HeadTerm_10;
      MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    TypeCtorInfo_98_98 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_98_98, ModuleName_8, NameTerm_19, VarSet_9, ContextPieces_15, &MaybeSymNameAndArgs_27);
    if (((MR_tag((MR_Word) MaybeSymNameAndArgs_27)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word SymNameAndArgSpecs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_27, (MR_Integer) 0)));
      MR_Word Specs_29;

      Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, SymNameAndArgSpecs_28, ForTypeSpecs_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_29));
      }
    }
    else
    {
      MR_Word SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_27, (MR_Integer) 0)));
      MR_Word ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_27, (MR_Integer) 1)));
      MR_Word HeadTermContext_32;
      MR_Word NameSpecs_33;
      MR_Word MaybeInstArgVars_34;
      MR_Word NamedContextPieces_35;
      MR_Word MaybeInst_36;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word InstArgVars_37;
      MR_Word Inst_38;

      HeadTermContext_32 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_98_98, HeadTerm_10);
      parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(SymName_30, HeadTermContext_32, &NameSpecs_33);
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (BodyTerm_11));
      }
      parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", VarSet_9, HeadTermContext_32, ArgTerms_31, Var_75, &MaybeInstArgVars_34);
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (SymName_30));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[44])));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
      }
      NamedContextPieces_35 = mercury__cord__from_list_1_f_0(TypeCtorInfo_95_95, Var_76);
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_5[1]), VarSet_9, NamedContextPieces_35, BodyTerm_11, &MaybeInst_36);
      succeeded = (NameSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (ForTypeSpecs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_34)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            InstArgVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstArgVars_34, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) MaybeInst_36)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              Inst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 0)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word InstVarSet_39;
        MR_Word InstDefn_40;
        MR_Word ItemInstDefn_41;
        MR_Word Item_42;
        MR_Word Var_87;

        mercury__varset__coerce_2_p_0(TypeCtorInfo_98_98, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_9, &InstVarSet_39);
        {
          InstDefn_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), InstDefn_40, 0) = ((MR_Box) (Inst_38));
        }
        {
          ItemInstDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 0) = ((MR_Box) (SymName_30));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 1) = ((MR_Box) (InstArgVars_37));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 2) = ((MR_Box) (MaybeForType_22));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 3) = ((MR_Box) (InstDefn_40));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 4) = ((MR_Box) (InstVarSet_39));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 5) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 6) = ((MR_Box) (SeqNum_13));
        }
        Item_42 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ItemInstDefn_41);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Item_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_87));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_101_101 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Specs_92;

        Var_90 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[1], MaybeInstArgVars_34);
        Var_91 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, MaybeInst_36);
        Var_89 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_101_101, Var_90, Var_91);
        Var_88 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_101_101, ForTypeSpecs_23, Var_89);
        Specs_92 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_101_101, NameSpecs_33, Var_88);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_92));
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
    MR_Word conv5_HeadVar__2_149;

    parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__359__1_2_p_0(((MR_Word) wrapper_arg_1), &conv5_HeadVar__2_149);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_149));
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
    MR_String conv3_HeadVar__3_144;

    conv3_HeadVar__3_144 = parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_144));
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
    MR_String conv2_HeadVar__3_136;

    conv2_HeadVar__3_136 = parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_136));
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

    succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ArgTerms_10, &ArgVars_13);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word STATE_VARIABLE_Specs_81_81;
      MR_Word DupArgVars_19;
      MR_Word TypeInfo_132_132;
      MR_Word ArgVarsBag_18;
      MR_Word Var_46;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word BodyTerm_27;
      MR_Word FreeVars_34;
      MR_Word TypeCtorInfo_139_139;
      MR_Word TypeInfo_140_140;
      MR_Word BodyVars_28;
      MR_Word BodyVarsSet_31;
      MR_Word ArgVarsSet_32;
      MR_Word FreeVarsSet_33;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 0)));
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
          TypeInfo_132_132 = (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[2];
          mercury__bag__from_list_2_p_0(TypeInfo_132_132, ArgVars_13, &ArgVarsBag_18);
          mercury__bag__to_list_only_duplicates_2_p_0(TypeInfo_132_132, ArgVarsBag_18, &DupArgVars_19);
          succeeded = ((MR_tag((MR_Word) DupArgVars_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), DupArgVars_19, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), DupArgVars_19, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeInfo_133_133 = (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[2];
        MR_Word TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word TypeCtorInfo_138_138;
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
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Box conv0_ParamWord_22;
        MR_Box conv1_IsAreWord_23;

        conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_133_133, TypeCtorInfo_134_134, DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
        ParamWord_22 = ((MR_String) conv0_ParamWord_22);
        conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_133_133, TypeCtorInfo_134_134, DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        IsAreWord_23 = ((MR_String) conv1_IsAreWord_23);
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (VarSet_8));
        }
        DupVarNames_24 = mercury__list__map_2_f_0(TypeInfo_133_133, TypeCtorInfo_134_134, Var_51, DupArgVars_19);
        TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ParamWord_22));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        Var_59 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(DupVarNames_24);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (IsAreWord_23));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (DefnKind_7));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[28])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
        }
        Var_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_138_138, Var_59, Var_60);
        RepeatPieces_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_138_138, Var_52, Var_58);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (RepeatPieces_25));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (HeadTermContext_9));
          MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          RepeatSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RepeatSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), RepeatSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), RepeatSpec_26, 2) = ((MR_Box) (Var_75));
        }
        {
          STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (RepeatSpec_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_45_45));
        }
      }
      else
        STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_45_45;
      succeeded = ((MR_tag((MR_Word) MaybeBodyTerm_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        BodyTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBodyTerm_11, (MR_Integer) 0)));
        TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        mercury__term__vars_2_p_0(TypeCtorInfo_139_139, BodyTerm_27, &BodyVars_28);
        succeeded = ((MR_tag((MR_Word) BodyVars_28)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), BodyVars_28, (MR_Integer) 0)));
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), BodyVars_28, (MR_Integer) 1)));
          TypeInfo_140_140 = (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[2];
          mercury__set__list_to_set_2_p_0(TypeInfo_140_140, BodyVars_28, &BodyVarsSet_31);
          mercury__set__list_to_set_2_p_0(TypeInfo_140_140, ArgVars_13, &ArgVarsSet_32);
          mercury__set__difference_3_p_0(TypeInfo_140_140, BodyVarsSet_31, ArgVarsSet_32, &FreeVarsSet_33);
          mercury__set__to_sorted_list_2_p_0(TypeInfo_140_140, FreeVarsSet_33, &FreeVars_34);
          succeeded = ((MR_tag((MR_Word) FreeVars_34)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), FreeVars_34, (MR_Integer) 0)));
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), FreeVars_34, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeInfo_141_141 = (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[2];
        MR_Word TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word TypeCtorInfo_146_146;
        MR_Word FreeVarNames_37;
        MR_Word FreePieces_38;
        MR_Word FreeSpec_39;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_String Var_88;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word STATE_VARIABLE_Specs_114_114;
        MR_Box conv4_Var_88;

        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (VarSet_8));
        }
        FreeVarNames_37 = mercury__list__map_2_f_0(TypeInfo_141_141, TypeCtorInfo_142_142, Var_82, FreeVars_34);
        TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        conv4_Var_88 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_141_141, TypeCtorInfo_142_142, FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
        Var_88 = ((MR_String) conv4_Var_88);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
        }
        Var_93 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(FreeVarNames_37);
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (DefnKind_7));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[28])));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_97));
        }
        Var_92 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_146_146, Var_93, Var_94);
        FreePieces_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_146_146, Var_83, Var_92);
        Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, BodyTerm_27);
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (FreePieces_38));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          FreeSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FreeSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), FreeSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), FreeSpec_39, 2) = ((MR_Box) (Var_107));
        }
        {
          STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (FreeSpec_39));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (STATE_VARIABLE_Specs_81_81));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_114_114));
        }
      }
      else
      if ((STATE_VARIABLE_Specs_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word InstArgVars_40;

        mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[2], (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__parse_inst_mode_defn_scalar_common_4[0], ArgVars_13, &InstArgVars_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstArgVars_40));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_81_81));
        }
    }
    else
    {
      MR_Word VarSpec_44;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_129;

      {
        Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (HeadTermContext_9));
        MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[38])));
      }
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        VarSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), VarSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), VarSpec_44, 2) = ((MR_Box) (Var_123));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (VarSpec_44));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgVars_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
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
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_inst_mode_defn_scalar_common_1[30])));
      }
      {
        NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_inst_mode_defn_scalar_common_1[33])));
        MR_hl_field(MR_mktag(1), NamePieces_8, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (NamePieces_8));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), NameSpec_9, 2) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
