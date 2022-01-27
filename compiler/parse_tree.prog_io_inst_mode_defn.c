/*
** Automatically generated from `prog_io_inst_mode_defn.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module parse_tree.prog_io_inst_mode_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_inst_mode_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_inst_mode_defn.mih"


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
#include "parse_tree.prog_io_inst_mode_name.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__field_types_processed_mode_body_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_functor_desc_processed_mode_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_name_ordered_processed_mode_body_0[1];

static const MR_Integer parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__functor_number_map_processed_mode_body_0[1];

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0_10001(
  MR_Box * parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__374__1_2_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__1_148,
  MR_Word * parse_tree__prog_io_inst_mode_defn__HeadVar__2_149);

static MR_String MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__357__1_2_f_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_143);

static MR_String MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__331__1_2_f_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_135);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0(
  MR_Word * parse_tree__prog_io_inst_mode_defn__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_defn__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String parse_tree__prog_io_inst_mode_defn__DefnKind_7,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTermContext_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_10,
  MR_Word parse_tree__prog_io_inst_mode_defn__MaybeBodyTerm_11,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_user_inst_name_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__SymName_4,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_5,
  MR_Word * parse_tree__prog_io_inst_mode_defn__NameSpecs_6);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_abstract_inst_defn_6_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_7,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_10,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_11,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_12);

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_inst_defn_eqv_7_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_10,
  MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_11,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_12,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_13,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_14);


static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_1[48][2];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_2[5][1];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_1[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_1[0]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be the definition of an inst."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in mode definition body."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[3])))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the mode name"))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type constructor name/arity, not"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in inst body at"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in LHS of"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free inst"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of"))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[13])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[22])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[26])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[32])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_inst_mode_defn_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

static const MR_DuFunctorDesc parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_functor_desc_processed_mode_body_0_0 = {
  (MR_String) "processed_mode_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__field_types_processed_mode_body_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_functor_desc_processed_mode_body_0_0
};

static const MR_DuPtagLayout parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_functor_desc_processed_mode_body_0_0
};

static const MR_Integer parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.prog_io_inst_mode_defn",
  (MR_String) "processed_mode_body",
  {     parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_name_ordered_processed_mode_body_0 },
  {     parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__functor_number_map_processed_mode_body_0
};

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;

    {
      parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_2));
    }
    return parse_tree__prog_io_inst_mode_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0_10001(
  MR_Box * parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_inst_mode_defn__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_inst_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_3));
    }
    *parse_tree__prog_io_inst_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__374__1_2_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__1_148,
  MR_Word * parse_tree__prog_io_inst_mode_defn__HeadVar__2_149)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_inst_mode_defn__HeadVar__1_148, parse_tree__prog_io_inst_mode_defn__HeadVar__2_149);
    }
  }
}

static MR_String MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__357__1_2_f_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_143)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_String parse_tree__prog_io_inst_mode_defn__HeadVar__3_144;

    {
      parse_tree__prog_io_inst_mode_defn__HeadVar__3_144 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadVar__2_143);
    }
    return parse_tree__prog_io_inst_mode_defn__HeadVar__3_144;
  }
}

static MR_String MR_CALL 
parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__331__1_2_f_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_135)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_String parse_tree__prog_io_inst_mode_defn__HeadVar__3_136;

    {
      parse_tree__prog_io_inst_mode_defn__HeadVar__3_136 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadVar__2_135);
    }
    return parse_tree__prog_io_inst_mode_defn__HeadVar__3_136;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn____Compare____processed_mode_body_0_0(
  MR_Word * parse_tree__prog_io_inst_mode_defn__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_2,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_inst_mode_defn__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_inst_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_inst_mode_defn__HeadVar__3_3;

    parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__CastX_12 == parse_tree__prog_io_inst_mode_defn__CastY_13);
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      *parse_tree__prog_io_inst_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_10_10;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_inst_mode_defn__V_10_10, parse_tree__prog_io_inst_mode_defn__V_4_4, parse_tree__prog_io_inst_mode_defn__V_7_7);
        }
        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_10_10 == (MR_Integer) 0);
        parse_tree__prog_io_inst_mode_defn__succeeded = !(parse_tree__prog_io_inst_mode_defn__succeeded);
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          *parse_tree__prog_io_inst_mode_defn__HeadVar__1_1 = parse_tree__prog_io_inst_mode_defn__V_10_10;
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[1], &parse_tree__prog_io_inst_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_8_8)));
            }
            parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_11_11 == (MR_Integer) 0);
            parse_tree__prog_io_inst_mode_defn__succeeded = !(parse_tree__prog_io_inst_mode_defn__succeeded);
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              *parse_tree__prog_io_inst_mode_defn__HeadVar__1_1 = parse_tree__prog_io_inst_mode_defn__V_11_11;
            else
              {
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_inst_mode_defn__HeadVar__1_1, parse_tree__prog_io_inst_mode_defn__V_6_6, parse_tree__prog_io_inst_mode_defn__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_inst_mode_defn____Unify____processed_mode_body_0_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__1_1,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Integer parse_tree__prog_io_inst_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_inst_mode_defn__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_inst_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_inst_mode_defn__HeadVar__2_2;

    parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__CastX_9 == parse_tree__prog_io_inst_mode_defn__CastY_10);
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      parse_tree__prog_io_inst_mode_defn__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__TypeInfo_12_12;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

        {
          parse_tree__prog_io_inst_mode_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_inst_mode_defn__V_3_3, parse_tree__prog_io_inst_mode_defn__V_6_6);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[1];
            {
              parse_tree__prog_io_inst_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_7_7)));
            }
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_inst_mode_defn__V_5_5, parse_tree__prog_io_inst_mode_defn__V_8_8);
              }
          }
      }
    return parse_tree__prog_io_inst_mode_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_3(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_inst_mode_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_inst_mode_defn__closure = parse_tree__prog_io_inst_mode_defn__closure_arg;
    MR_Word parse_tree__prog_io_inst_mode_defn__conv5_HeadVar__2_149;

    {
      parse_tree__prog_io_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__374__1_2_p_0(((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_1), &parse_tree__prog_io_inst_mode_defn__conv5_HeadVar__2_149);
    }
    *parse_tree__prog_io_inst_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__conv5_HeadVar__2_149));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2;
    MR_Box parse_tree__prog_io_inst_mode_defn__closure = parse_tree__prog_io_inst_mode_defn__closure_arg;
    MR_String parse_tree__prog_io_inst_mode_defn__conv3_HeadVar__3_144;

    {
      parse_tree__prog_io_inst_mode_defn__conv3_HeadVar__3_144 = parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__357__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_1));
    }
    parse_tree__prog_io_inst_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__conv3_HeadVar__3_144));
    return parse_tree__prog_io_inst_mode_defn__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box parse_tree__prog_io_inst_mode_defn__closure_arg,
  MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_io_inst_mode_defn__wrapper_arg_2;
    MR_Box parse_tree__prog_io_inst_mode_defn__closure = parse_tree__prog_io_inst_mode_defn__closure_arg;
    MR_String parse_tree__prog_io_inst_mode_defn__conv2_HeadVar__3_136;

    {
      parse_tree__prog_io_inst_mode_defn__conv2_HeadVar__3_136 = parse_tree__prog_io_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__331__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_inst_mode_defn__wrapper_arg_1));
    }
    parse_tree__prog_io_inst_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__conv2_HeadVar__3_136));
    return parse_tree__prog_io_inst_mode_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String parse_tree__prog_io_inst_mode_defn__DefnKind_7,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTermContext_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_10,
  MR_Word parse_tree__prog_io_inst_mode_defn__MaybeBodyTerm_11,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Word parse_tree__prog_io_inst_mode_defn__ArgVars_13;

    {
      parse_tree__prog_io_inst_mode_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__ArgTerms_10, &parse_tree__prog_io_inst_mode_defn__ArgVars_13);
    }
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81;
        MR_Word parse_tree__prog_io_inst_mode_defn__DupArgVars_19;
        MR_Word parse_tree__prog_io_inst_mode_defn__TypeInfo_132_132;
        MR_Word parse_tree__prog_io_inst_mode_defn__ArgVarsBag_18;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_46_46;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_15_15;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_16_16;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_17_17;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_20_20;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_21_21;
        MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_27;
        MR_Word parse_tree__prog_io_inst_mode_defn__FreeVars_34;
        MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_139_139;
        MR_Word parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140;
        MR_Word parse_tree__prog_io_inst_mode_defn__BodyVars_28;
        MR_Word parse_tree__prog_io_inst_mode_defn__BodyVarsSet_31;
        MR_Word parse_tree__prog_io_inst_mode_defn__ArgVarsSet_32;
        MR_Word parse_tree__prog_io_inst_mode_defn__FreeVarsSet_33;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_29_29;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_30_30;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_35_35;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_36_36;

        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ArgVars_13, (MR_Integer) 0)));
            parse_tree__prog_io_inst_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ArgVars_13, (MR_Integer) 1)));
            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_46_46, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_46_46, (MR_Integer) 1)));
                parse_tree__prog_io_inst_mode_defn__TypeInfo_132_132 = (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[2];
                {
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_132_132, parse_tree__prog_io_inst_mode_defn__ArgVars_13, &parse_tree__prog_io_inst_mode_defn__ArgVarsBag_18);
                }
                {
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_132_132, parse_tree__prog_io_inst_mode_defn__ArgVarsBag_18, &parse_tree__prog_io_inst_mode_defn__DupArgVars_19);
                }
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__DupArgVars_19)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__DupArgVars_19, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__DupArgVars_19, (MR_Integer) 1)));
                  }
              }
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeInfo_133_133 = (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[2];
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_138_138;
            MR_String parse_tree__prog_io_inst_mode_defn__ParamWord_22;
            MR_String parse_tree__prog_io_inst_mode_defn__IsAreWord_23;
            MR_Word parse_tree__prog_io_inst_mode_defn__DupVarNames_24;
            MR_Word parse_tree__prog_io_inst_mode_defn__RepeatPieces_25;
            MR_Word parse_tree__prog_io_inst_mode_defn__RepeatSpec_26;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_51_51;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_52_52;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_55_55;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_56_56;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_58_58;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_59_59;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_60_60;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_61_61;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_62_62;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_65_65;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_66_66;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_75_75;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_76_76;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_77_77;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_78_78;
            MR_Box parse_tree__prog_io_inst_mode_defn__conv0_ParamWord_22;
            MR_Box parse_tree__prog_io_inst_mode_defn__conv1_IsAreWord_23;

            {
              parse_tree__prog_io_inst_mode_defn__conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_133_133, parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_inst_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
            parse_tree__prog_io_inst_mode_defn__ParamWord_22 = ((MR_String) parse_tree__prog_io_inst_mode_defn__conv0_ParamWord_22);
            {
              parse_tree__prog_io_inst_mode_defn__conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_133_133, parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_inst_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
            }
            parse_tree__prog_io_inst_mode_defn__IsAreWord_23 = ((MR_String) parse_tree__prog_io_inst_mode_defn__conv1_IsAreWord_23);
            {
              parse_tree__prog_io_inst_mode_defn__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_51_51, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__VarSet_8));
            }
            {
              parse_tree__prog_io_inst_mode_defn__DupVarNames_24 = mercury__list__map_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_133_133, parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_inst_mode_defn__V_51_51, parse_tree__prog_io_inst_mode_defn__DupArgVars_19);
            }
            parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__prog_io_inst_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ParamWord_22));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_56_56));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[43])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_55_55));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_59_59 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_inst_mode_defn__DupVarNames_24);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__IsAreWord_23));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__DefnKind_7));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_66_66));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[28])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[44])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_65_65));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_61_61));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_62_62));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_inst_mode_defn__V_59_59, parse_tree__prog_io_inst_mode_defn__V_60_60);
            }
            {
              parse_tree__prog_io_inst_mode_defn__RepeatPieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_inst_mode_defn__V_52_52, parse_tree__prog_io_inst_mode_defn__V_58_58);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__RepeatPieces_25));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_78_78));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__HeadTermContext_9));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_77_77));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_76_76));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__RepeatSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__RepeatSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__RepeatSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__RepeatSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_75_75));
            }
            {
              parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__RepeatSpec_26));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_45_45));
            }
          }
        else
          parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81 = parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_45_45;
        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeBodyTerm_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__BodyTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeBodyTerm_11, (MR_Integer) 0)));
            parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            {
              mercury__term__vars_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_139_139, parse_tree__prog_io_inst_mode_defn__BodyTerm_27, &parse_tree__prog_io_inst_mode_defn__BodyVars_28);
            }
            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__BodyVars_28)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__BodyVars_28, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__BodyVars_28, (MR_Integer) 1)));
                parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140 = (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[2];
                {
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140, parse_tree__prog_io_inst_mode_defn__BodyVars_28, &parse_tree__prog_io_inst_mode_defn__BodyVarsSet_31);
                }
                {
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140, parse_tree__prog_io_inst_mode_defn__ArgVars_13, &parse_tree__prog_io_inst_mode_defn__ArgVarsSet_32);
                }
                {
                  mercury__set__difference_3_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140, parse_tree__prog_io_inst_mode_defn__BodyVarsSet_31, parse_tree__prog_io_inst_mode_defn__ArgVarsSet_32, &parse_tree__prog_io_inst_mode_defn__FreeVarsSet_33);
                }
                {
                  mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_140_140, parse_tree__prog_io_inst_mode_defn__FreeVarsSet_33, &parse_tree__prog_io_inst_mode_defn__FreeVars_34);
                }
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__FreeVars_34)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__FreeVars_34, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__FreeVars_34, (MR_Integer) 1)));
                  }
              }
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeInfo_141_141 = (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[2];
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_146_146;
            MR_Word parse_tree__prog_io_inst_mode_defn__FreeVarNames_37;
            MR_Word parse_tree__prog_io_inst_mode_defn__FreePieces_38;
            MR_Word parse_tree__prog_io_inst_mode_defn__FreeSpec_39;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_82_82;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_83_83;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_86_86;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_87_87;
            MR_String parse_tree__prog_io_inst_mode_defn__V_88_88;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_92_92;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_93_93;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_94_94;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_97_97;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_98_98;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_107_107;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_108_108;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_109_109;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_110_110;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_111_111;
            MR_Word parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_114_114;
            MR_Box parse_tree__prog_io_inst_mode_defn__conv4_V_88_88;

            {
              parse_tree__prog_io_inst_mode_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_82_82, 0) = ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_82_82, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__VarSet_8));
            }
            {
              parse_tree__prog_io_inst_mode_defn__FreeVarNames_37 = mercury__list__map_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_141_141, parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_inst_mode_defn__V_82_82, parse_tree__prog_io_inst_mode_defn__FreeVars_34);
            }
            parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__prog_io_inst_mode_defn__conv4_V_88_88 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_inst_mode_defn__TypeInfo_141_141, parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_inst_mode_defn__FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
            parse_tree__prog_io_inst_mode_defn__V_88_88 = ((MR_String) parse_tree__prog_io_inst_mode_defn__conv4_V_88_88);
            {
              parse_tree__prog_io_inst_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_88_88));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_87_87));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[45])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_86_86));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_93_93 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_inst_mode_defn__FreeVarNames_37);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__DefnKind_7));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_98_98));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[28])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[46])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_97_97));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_inst_mode_defn__V_93_93, parse_tree__prog_io_inst_mode_defn__V_94_94);
            }
            {
              parse_tree__prog_io_inst_mode_defn__FreePieces_38 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_inst_mode_defn__V_83_83, parse_tree__prog_io_inst_mode_defn__V_92_92);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_109_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__BodyTerm_27);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__FreePieces_38));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_111_111));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_109_109));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_110_110));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_108_108));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__FreeSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__FreeSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__FreeSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__FreeSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_107_107));
            }
            {
              parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__FreeSpec_39));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_114_114));
            }
          }
        else
        if ((parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__InstArgVars_40;

            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_5[0], parse_tree__prog_io_inst_mode_defn__ArgVars_13, &parse_tree__prog_io_inst_mode_defn__InstArgVars_40);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstArgVars_40));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__STATE_VARIABLE_Specs_81_81));
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__VarSpec_44;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_123_123;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_124_124;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_129_129;

        {
          parse_tree__prog_io_inst_mode_defn__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__HeadTermContext_9));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[47])));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_124_124));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_inst_mode_defn__VarSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__VarSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__VarSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__VarSpec_44, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_123_123));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__VarSpec_44));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_inst_mode_defn__MaybeArgVars_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_129_129));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__check_user_inst_name_3_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__SymName_4,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_5,
  MR_Word * parse_tree__prog_io_inst_mode_defn__NameSpecs_6)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_String parse_tree__prog_io_inst_mode_defn__Name_7;

    {
      parse_tree__prog_io_inst_mode_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_inst_mode_defn__SymName_4);
    }
    {
      parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_name__is_known_inst_name_1_p_0(parse_tree__prog_io_inst_mode_defn__Name_7);
    }
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__NamePieces_8;
        MR_Word parse_tree__prog_io_inst_mode_defn__NameSpec_9;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_12_12;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_13_13;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_22_22;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_23_23;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_24_24;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_25_25;

        {
          parse_tree__prog_io_inst_mode_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Name_7));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_12_12, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_13_13));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[30])));
        }
        {
          parse_tree__prog_io_inst_mode_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_12_12));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NamePieces_8));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_25_25));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_5));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_24_24));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_23_23));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_inst_mode_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_22_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_inst_mode_defn__NameSpecs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NameSpec_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      *parse_tree__prog_io_inst_mode_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_abstract_inst_defn_6_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_7,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_10,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_11,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_12)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_37_37;
    MR_Word parse_tree__prog_io_inst_mode_defn__ContextPieces_13;
    MR_Word parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14;

    {
      parse_tree__prog_io_inst_mode_defn__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[38]))));
    }
    parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_37_37, parse_tree__prog_io_inst_mode_defn__ModuleName_7, parse_tree__prog_io_inst_mode_defn__HeadTerm_9, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__ContextPieces_13, &parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_inst_mode_defn__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_15));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__HeadTermContext_18;
        MR_Word parse_tree__prog_io_inst_mode_defn__NameSpecs_19;
        MR_Word parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_20;
        MR_String parse_tree__prog_io_inst_mode_defn__Name_44;
        MR_Word parse_tree__prog_io_inst_mode_defn__InstArgVars_21;

        {
          parse_tree__prog_io_inst_mode_defn__HeadTermContext_18 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_37_37, parse_tree__prog_io_inst_mode_defn__HeadTerm_9);
        }
        {
          parse_tree__prog_io_inst_mode_defn__Name_44 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_inst_mode_defn__SymName_16);
        }
        {
          parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_name__is_known_inst_name_1_p_0(parse_tree__prog_io_inst_mode_defn__Name_44);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__NamePieces_45;
            MR_Word parse_tree__prog_io_inst_mode_defn__NameSpec_46;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_49_49;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_50_50;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_59_59;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_60_60;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_61_61;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_62_62;

            {
              parse_tree__prog_io_inst_mode_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Name_44));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_50_50));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[30])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NamePieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[42])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_45, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_49_49));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NamePieces_45));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_62_62));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__HeadTermContext_18));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_61_61));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_60_60));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NameSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_46, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_59_59));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NameSpecs_19, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NameSpec_46));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NameSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          parse_tree__prog_io_inst_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadTermContext_18, parse_tree__prog_io_inst_mode_defn__ArgTerms_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_20);
        }
        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__NameSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_20)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              parse_tree__prog_io_inst_mode_defn__InstArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_20, (MR_Integer) 0)));
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__InstVarSet_22;
            MR_Word parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25;
            MR_Word parse_tree__prog_io_inst_mode_defn__Item_26;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_31_31;

            {
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_37_37, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_inst_mode_defn__VarSet_8, &parse_tree__prog_io_inst_mode_defn__InstVarSet_22);
            }
            {
              parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SymName_16));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstArgVars_21));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 4) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstVarSet_22));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 5) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_10));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25, 6) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SeqNum_11));
            }
            parse_tree__prog_io_inst_mode_defn__Item_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_inst_mode_defn__ItemInstDefn_25);
            {
              parse_tree__prog_io_inst_mode_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Item_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_31_31));
            }
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__V_32_32;
            MR_Word parse_tree__prog_io_inst_mode_defn__Specs_33;

            {
              parse_tree__prog_io_inst_mode_defn__V_32_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[1], parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_20);
            }
            {
              parse_tree__prog_io_inst_mode_defn__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_inst_mode_defn__NameSpecs_19, parse_tree__prog_io_inst_mode_defn__V_32_32);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_33));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_inst_defn_eqv_7_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_10,
  MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_11,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_12,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_13,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111;
    MR_Word parse_tree__prog_io_inst_mode_defn__ContextPieces_15;
    MR_Word parse_tree__prog_io_inst_mode_defn__NameTerm_19;
    MR_Word parse_tree__prog_io_inst_mode_defn__MaybeForType_22;
    MR_Word parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23;
    MR_Word parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27;
    MR_Word parse_tree__prog_io_inst_mode_defn__NameTermPrime_16;
    MR_Word parse_tree__prog_io_inst_mode_defn__ForTypeTerm_17;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_48_48;
    MR_String parse_tree__prog_io_inst_mode_defn__V_49_49;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_50_50;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_51_51;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_52_52;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_18_18;

    {
      parse_tree__prog_io_inst_mode_defn__ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[38]))));
    }
    parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        parse_tree__prog_io_inst_mode_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadTerm_10, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadTerm_10, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__HeadTerm_10, (MR_Integer) 2)));
        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_48_48)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_48_48, (MR_Integer) 0)));
            parse_tree__prog_io_inst_mode_defn__succeeded = (strcmp(parse_tree__prog_io_inst_mode_defn__V_49_49, (MR_String) "for") == 0);
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_50_50)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__NameTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_50_50, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_50_50, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_51_51)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_defn__ForTypeTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_51_51, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_51_51, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__TypeSymName_20;
        MR_Integer parse_tree__prog_io_inst_mode_defn__TypeArity_21;

        parse_tree__prog_io_inst_mode_defn__NameTerm_19 = parse_tree__prog_io_inst_mode_defn__NameTermPrime_16;
        {
          parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__ForTypeTerm_17, &parse_tree__prog_io_inst_mode_defn__TypeSymName_20, &parse_tree__prog_io_inst_mode_defn__TypeArity_21);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__V_53_53;

            {
              parse_tree__prog_io_inst_mode_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__TypeSymName_20));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__TypeArity_21));
            }
            {
              parse_tree__prog_io_inst_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeForType_22, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_53_53));
            }
            parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_110_110;
            MR_String parse_tree__prog_io_inst_mode_defn__ForTypeTermStr_24;
            MR_Word parse_tree__prog_io_inst_mode_defn__ForTypePieces_25;
            MR_Word parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_56_56;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_59_59;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_60_60;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_69_69;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_70_70;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_71_71;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_72_72;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_73_73;

            parse_tree__prog_io_inst_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            {
              parse_tree__prog_io_inst_mode_defn__ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__ForTypeTerm_17);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ForTypeTermStr_24));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_60_60));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[28])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[40])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_59_59));
            }
            {
              parse_tree__prog_io_inst_mode_defn__ForTypePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ForTypePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[39])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ForTypePieces_25, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_56_56));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_71_71 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_inst_mode_defn__ForTypeTerm_17);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ForTypePieces_25));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_73_73));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_71_71));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_72_72));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_70_70));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_69_69));
            }
            {
              parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ForTypeSpec_26));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    else
      {
        parse_tree__prog_io_inst_mode_defn__NameTerm_19 = parse_tree__prog_io_inst_mode_defn__HeadTerm_10;
        parse_tree__prog_io_inst_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_inst_mode_defn__ModuleName_8, parse_tree__prog_io_inst_mode_defn__NameTerm_19, parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__ContextPieces_15, &parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__SymNameAndArgSpecs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__Specs_29;

        {
          parse_tree__prog_io_inst_mode_defn__Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_inst_mode_defn__SymNameAndArgSpecs_28, parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_29));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__HeadTermContext_32;
        MR_Word parse_tree__prog_io_inst_mode_defn__NameSpecs_33;
        MR_Word parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_34;
        MR_Word parse_tree__prog_io_inst_mode_defn__MaybeInst_36;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_78_78;
        MR_Word parse_tree__prog_io_inst_mode_defn__Inst0_35;
        MR_Word parse_tree__prog_io_inst_mode_defn__InstArgVars_40;
        MR_Word parse_tree__prog_io_inst_mode_defn__Inst_41;

        {
          parse_tree__prog_io_inst_mode_defn__HeadTermContext_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_inst_mode_defn__HeadTerm_10);
        }
        {
          parse_tree__prog_io_inst_mode_defn__check_user_inst_name_3_p_0(parse_tree__prog_io_inst_mode_defn__SymName_30, parse_tree__prog_io_inst_mode_defn__HeadTermContext_32, &parse_tree__prog_io_inst_mode_defn__NameSpecs_33);
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodyTerm_11));
        }
        {
          parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__HeadTermContext_32, parse_tree__prog_io_inst_mode_defn__ArgTerms_31, parse_tree__prog_io_inst_mode_defn__V_78_78, &parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_34);
        }
        {
          parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_name__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_inst_mode_defn__BodyTerm_11, &parse_tree__prog_io_inst_mode_defn__Inst0_35);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__MaybeInst_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Inst0_35));
          }
        else
          {
            MR_String parse_tree__prog_io_inst_mode_defn__BodyTermStr_37;
            MR_Word parse_tree__prog_io_inst_mode_defn__BodyPieces_38;
            MR_Word parse_tree__prog_io_inst_mode_defn__BodySpec_39;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_82_82;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_83_83;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_92_92;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_93_93;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_94_94;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_95_95;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_96_96;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_99_99;

            {
              parse_tree__prog_io_inst_mode_defn__BodyTermStr_37 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__BodyTerm_11);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodyTermStr_37));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_83_83));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[28])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__BodyPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__BodyPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[41])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__BodyPieces_38, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_82_82));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_94_94 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_inst_mode_defn__BodyTerm_11);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodyPieces_38));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_96_96));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_94_94));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_93_93, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_95_95));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_93_93));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__BodySpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_39, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_92_92));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodySpec_39));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__MaybeInst_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_99_99));
            }
          }
        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__NameSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__ForTypeSpecs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_34)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__InstArgVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_34, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeInst_36)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                      parse_tree__prog_io_inst_mode_defn__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeInst_36, (MR_Integer) 0)));
                  }
              }
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__InstVarSet_42;
            MR_Word parse_tree__prog_io_inst_mode_defn__InstDefn_43;
            MR_Word parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44;
            MR_Word parse_tree__prog_io_inst_mode_defn__Item_45;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_101_101;

            {
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_111_111, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_inst_mode_defn__VarSet_9, &parse_tree__prog_io_inst_mode_defn__InstVarSet_42);
            }
            {
              parse_tree__prog_io_inst_mode_defn__InstDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__InstDefn_43, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Inst_41));
            }
            {
              parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SymName_30));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstArgVars_40));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__MaybeForType_22));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstDefn_43));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 4) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstVarSet_42));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 5) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_12));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44, 6) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SeqNum_13));
            }
            parse_tree__prog_io_inst_mode_defn__Item_45 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_inst_mode_defn__ItemInstDefn_44);
            {
              parse_tree__prog_io_inst_mode_defn__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Item_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_101_101));
            }
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_102_102;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_103_103;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_104_104;
            MR_Word parse_tree__prog_io_inst_mode_defn__Specs_105;

            {
              parse_tree__prog_io_inst_mode_defn__V_103_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[1], parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_34);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_104_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_inst_mode_defn__MaybeInst_36);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_102_102 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_114_114, parse_tree__prog_io_inst_mode_defn__V_103_103, parse_tree__prog_io_inst_mode_defn__V_104_104);
            }
            {
              parse_tree__prog_io_inst_mode_defn__Specs_105 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_114_114, parse_tree__prog_io_inst_mode_defn__NameSpecs_33, parse_tree__prog_io_inst_mode_defn__V_102_102);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_105));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_mode_defn_7_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_10,
  MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_11,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_12,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_13,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded;
    MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65;
    MR_Word parse_tree__prog_io_inst_mode_defn__ContextPieces_15;
    MR_Word parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16;

    {
      parse_tree__prog_io_inst_mode_defn__ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[35]))));
    }
    parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_inst_mode_defn__ModuleName_8, parse_tree__prog_io_inst_mode_defn__HeadTerm_10, parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__ContextPieces_15, &parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_17));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_inst_mode_defn__HeadTermContext_20;
        MR_Word parse_tree__prog_io_inst_mode_defn__NameSpecs_21;
        MR_Word parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_22;
        MR_Word parse_tree__prog_io_inst_mode_defn__MaybeMode_24;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_36_36;
        MR_String parse_tree__prog_io_inst_mode_defn__Name_73;
        MR_Word parse_tree__prog_io_inst_mode_defn__Mode0_23;
        MR_Word parse_tree__prog_io_inst_mode_defn__InstArgVars_27;
        MR_Word parse_tree__prog_io_inst_mode_defn__Mode_28;

        {
          parse_tree__prog_io_inst_mode_defn__HeadTermContext_20 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_inst_mode_defn__HeadTerm_10);
        }
        {
          parse_tree__prog_io_inst_mode_defn__Name_73 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_inst_mode_defn__SymName_18);
        }
        {
          parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_name__is_known_mode_name_1_p_0(parse_tree__prog_io_inst_mode_defn__Name_73);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__NamePieces_74;
            MR_Word parse_tree__prog_io_inst_mode_defn__NameSpec_75;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_78_78;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_79_79;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_88_88;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_89_89;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_90_90;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_91_91;

            {
              parse_tree__prog_io_inst_mode_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Name_73));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_79_79));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[30])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NamePieces_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[36])));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NamePieces_74, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_78_78));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NamePieces_74));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_91_91));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__HeadTermContext_20));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_90_90));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_89_89));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NameSpec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__NameSpec_75, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_88_88));
            }
            {
              parse_tree__prog_io_inst_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NameSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__NameSpec_75));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          parse_tree__prog_io_inst_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__prog_io_inst_mode_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodyTerm_11));
        }
        {
          parse_tree__prog_io_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", parse_tree__prog_io_inst_mode_defn__VarSet_9, parse_tree__prog_io_inst_mode_defn__HeadTermContext_20, parse_tree__prog_io_inst_mode_defn__ArgTerms_19, parse_tree__prog_io_inst_mode_defn__V_36_36, &parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_22);
        }
        {
          parse_tree__prog_io_inst_mode_defn__succeeded = parse_tree__prog_io_inst_mode_name__convert_mode_3_p_0((MR_Integer) 1, parse_tree__prog_io_inst_mode_defn__BodyTerm_11, &parse_tree__prog_io_inst_mode_defn__Mode0_23);
        }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__MaybeMode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Mode0_23));
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__BodySpec_26;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_48_48;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_49_49;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_50_50;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_55_55;

            {
              parse_tree__prog_io_inst_mode_defn__V_50_50 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_inst_mode_defn__BodyTerm_11);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_50_50));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[37])));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_49_49));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__BodySpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BodySpec_26, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_48_48));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__BodySpec_26));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_io_inst_mode_defn__MaybeMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_55_55));
            }
          }
        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__InstArgVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_22, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__MaybeMode_24)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  parse_tree__prog_io_inst_mode_defn__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__MaybeMode_24, (MR_Integer) 0)));
              }
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__InstVarSet_29;
            MR_Word parse_tree__prog_io_inst_mode_defn__ModeDefn_30;
            MR_Word parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31;
            MR_Word parse_tree__prog_io_inst_mode_defn__Item_32;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_57_57;

            {
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_65_65, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_inst_mode_defn__VarSet_9, &parse_tree__prog_io_inst_mode_defn__InstVarSet_29);
            }
            parse_tree__prog_io_inst_mode_defn__ModeDefn_30 = (MR_Word) parse_tree__prog_io_inst_mode_defn__Mode_28;
            {
              parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SymName_18));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstArgVars_27));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ModeDefn_30));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__InstVarSet_29));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_12));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__SeqNum_13));
            }
            {
              parse_tree__prog_io_inst_mode_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_inst_mode_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__ItemModeDefn_31));
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Item_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_57_57));
            }
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_58_58;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_59_59;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_60_60;
            MR_Word parse_tree__prog_io_inst_mode_defn__Specs_61;

            {
              parse_tree__prog_io_inst_mode_defn__V_59_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_inst_mode_defn_scalar_common_1[1], parse_tree__prog_io_inst_mode_defn__MaybeInstArgVars_22);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__prog_io_inst_mode_defn__MaybeMode_24);
            }
            {
              parse_tree__prog_io_inst_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_inst_mode_defn__V_59_59, parse_tree__prog_io_inst_mode_defn__V_60_60);
            }
            {
              parse_tree__prog_io_inst_mode_defn__Specs_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_inst_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_inst_mode_defn__NameSpecs_21, parse_tree__prog_io_inst_mode_defn__V_58_58);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_inst_mode_defn__MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Specs_61));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_inst_mode_defn__parse_inst_defn_item_6_p_0(
  MR_Word parse_tree__prog_io_inst_mode_defn__ModuleName_7,
  MR_Word parse_tree__prog_io_inst_mode_defn__VarSet_8,
  MR_Word parse_tree__prog_io_inst_mode_defn__ArgTerms_9,
  MR_Word parse_tree__prog_io_inst_mode_defn__Context_10,
  MR_Integer parse_tree__prog_io_inst_mode_defn__SeqNum_11,
  MR_Word * parse_tree__prog_io_inst_mode_defn__MaybeIOM_12)
{
  {
    MR_bool parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13;
    MR_Word parse_tree__prog_io_inst_mode_defn__V_24_24;

    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__prog_io_inst_mode_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__prog_io_inst_mode_defn__succeeded)
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_14;
        MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_15;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_25_25;
        MR_String parse_tree__prog_io_inst_mode_defn__V_26_26;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_27_27;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_28_28;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_29_29;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_16_16;

        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
            parse_tree__prog_io_inst_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
            parse_tree__prog_io_inst_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_25_25, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_defn__succeeded = (strcmp(parse_tree__prog_io_inst_mode_defn__V_26_26, (MR_String) "==") == 0);
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_defn__HeadTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_27_27, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_27_27, (MR_Integer) 1)));
                        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_inst_mode_defn__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_defn__BodyTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_28_28, (MR_Integer) 0)));
                            parse_tree__prog_io_inst_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_28_28, (MR_Integer) 1)));
                            parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_inst_mode_defn__succeeded)
          {
            parse_tree__prog_io_inst_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_inst_mode_defn__ModuleName_7, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadTerm_14, parse_tree__prog_io_inst_mode_defn__BodyTerm_15, parse_tree__prog_io_inst_mode_defn__Context_10, parse_tree__prog_io_inst_mode_defn__SeqNum_11, parse_tree__prog_io_inst_mode_defn__MaybeIOM_12);
          }
        else
          {
            MR_Word parse_tree__prog_io_inst_mode_defn__V_33_33;
            MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_103;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_30_30;
            MR_String parse_tree__prog_io_inst_mode_defn__V_31_31;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_32_32;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_34_34;
            MR_Word parse_tree__prog_io_inst_mode_defn__V_17_17;
            MR_Word parse_tree__prog_io_inst_mode_defn__BodyTerm_104;

            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                parse_tree__prog_io_inst_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
                parse_tree__prog_io_inst_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
                parse_tree__prog_io_inst_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_30_30, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__succeeded = (strcmp(parse_tree__prog_io_inst_mode_defn__V_31_31, (MR_String) "--->") == 0);
                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_inst_mode_defn__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_defn__HeadTerm_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_32_32, (MR_Integer) 0)));
                            parse_tree__prog_io_inst_mode_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_32_32, (MR_Integer) 1)));
                            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_inst_mode_defn__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_defn__BodyTerm_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_33_33, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_33_33, (MR_Integer) 1)));
                                parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__prog_io_inst_mode_defn__succeeded)
              {
                MR_Word parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18;

                {
                  parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18, 0) = ((MR_Box) (&parse_tree__prog_io_inst_mode_defn_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18, 1) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_33_33));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_10));
                }
                {
                  parse_tree__prog_io_inst_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_inst_mode_defn__ModuleName_7, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadTerm_103, parse_tree__prog_io_inst_mode_defn__BoundBodyTerm_18, parse_tree__prog_io_inst_mode_defn__Context_10, parse_tree__prog_io_inst_mode_defn__SeqNum_11, parse_tree__prog_io_inst_mode_defn__MaybeIOM_12);
                }
              }
            else
              {
                MR_Word parse_tree__prog_io_inst_mode_defn__HeadTerm_102;
                MR_Word parse_tree__prog_io_inst_mode_defn__Args_19;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_39_39;
                MR_String parse_tree__prog_io_inst_mode_defn__V_40_40;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_41_41;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_42_42;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_43_43;
                MR_String parse_tree__prog_io_inst_mode_defn__V_44_44;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_45_45;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_46_46;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_20_20;
                MR_Word parse_tree__prog_io_inst_mode_defn__V_21_21;

                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
                    parse_tree__prog_io_inst_mode_defn__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
                    parse_tree__prog_io_inst_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
                    parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_39_39)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                      {
                        parse_tree__prog_io_inst_mode_defn__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_39_39, (MR_Integer) 0)));
                        parse_tree__prog_io_inst_mode_defn__succeeded = (strcmp(parse_tree__prog_io_inst_mode_defn__V_40_40, (MR_String) "is") == 0);
                        if (parse_tree__prog_io_inst_mode_defn__succeeded)
                          {
                            parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__Args_19)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_inst_mode_defn__succeeded)
                              {
                                parse_tree__prog_io_inst_mode_defn__HeadTerm_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__Args_19, (MR_Integer) 0)));
                                parse_tree__prog_io_inst_mode_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__Args_19, (MR_Integer) 1)));
                                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_41_41)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                                  {
                                    parse_tree__prog_io_inst_mode_defn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_41_41, (MR_Integer) 0)));
                                    parse_tree__prog_io_inst_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_41_41, (MR_Integer) 1)));
                                    parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (parse_tree__prog_io_inst_mode_defn__succeeded)
                                      {
                                        parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_42_42)) == (MR_mktag((MR_Integer) 0)));
                                        if (parse_tree__prog_io_inst_mode_defn__succeeded)
                                          {
                                            parse_tree__prog_io_inst_mode_defn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_42_42, (MR_Integer) 0)));
                                            parse_tree__prog_io_inst_mode_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_42_42, (MR_Integer) 1)));
                                            parse_tree__prog_io_inst_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_42_42, (MR_Integer) 2)));
                                            parse_tree__prog_io_inst_mode_defn__succeeded = (parse_tree__prog_io_inst_mode_defn__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (parse_tree__prog_io_inst_mode_defn__succeeded)
                                              {
                                                parse_tree__prog_io_inst_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_inst_mode_defn__V_43_43)) == (MR_mktag((MR_Integer) 0)));
                                                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                                                  {
                                                    parse_tree__prog_io_inst_mode_defn__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_43_43, (MR_Integer) 0)));
                                                    parse_tree__prog_io_inst_mode_defn__succeeded = (strcmp(parse_tree__prog_io_inst_mode_defn__V_44_44, (MR_String) "private") == 0);
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                if (parse_tree__prog_io_inst_mode_defn__succeeded)
                  {
                    parse_tree__prog_io_inst_mode_defn__parse_abstract_inst_defn_6_p_0(parse_tree__prog_io_inst_mode_defn__ModuleName_7, parse_tree__prog_io_inst_mode_defn__VarSet_8, parse_tree__prog_io_inst_mode_defn__HeadTerm_102, parse_tree__prog_io_inst_mode_defn__Context_10, parse_tree__prog_io_inst_mode_defn__SeqNum_11, parse_tree__prog_io_inst_mode_defn__MaybeIOM_12);
                  }
                else
                  {
                    MR_Word parse_tree__prog_io_inst_mode_defn__Spec_23;
                    MR_Word parse_tree__prog_io_inst_mode_defn__V_66_66;
                    MR_Word parse_tree__prog_io_inst_mode_defn__V_67_67;
                    MR_Word parse_tree__prog_io_inst_mode_defn__V_68_68;
                    MR_Word parse_tree__prog_io_inst_mode_defn__V_73_73;

                    {
                      parse_tree__prog_io_inst_mode_defn__V_68_68 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_inst_mode_defn__InstDefnTerm_13);
                    }
                    {
                      parse_tree__prog_io_inst_mode_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_68_68));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[33])));
                    }
                    {
                      parse_tree__prog_io_inst_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_67_67));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_io_inst_mode_defn__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_66_66));
                    }
                    {
                      parse_tree__prog_io_inst_mode_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Spec_23));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_inst_mode_defn__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_73_73));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_inst_mode_defn__V_94_94;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_95_95;
        MR_Word parse_tree__prog_io_inst_mode_defn__V_100_100;
        MR_Word parse_tree__prog_io_inst_mode_defn__Spec_106;

        {
          parse_tree__prog_io_inst_mode_defn__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_inst_mode_defn_scalar_common_1[34])));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_95_95));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_inst_mode_defn__Spec_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_inst_mode_defn__Spec_106, 2) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_94_94));
        }
        {
          parse_tree__prog_io_inst_mode_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__Spec_106));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_inst_mode_defn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_inst_mode_defn__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_inst_mode_defn__V_100_100));
        }
      }
  }
}

void mercury__parse_tree__prog_io_inst_mode_defn__init(void)
{
}

void mercury__parse_tree__prog_io_inst_mode_defn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_inst_mode_defn__parse_tree__prog_io_inst_mode_defn__type_ctor_info_processed_mode_body_0);
}

void mercury__parse_tree__prog_io_inst_mode_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_inst_mode_defn. */
