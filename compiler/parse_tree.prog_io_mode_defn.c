/*
** Automatically generated from `prog_io_mode_defn.m'
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


/* :- module parse_tree.prog_io_mode_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mode_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_mode_defn.mih"


#include "check_hlds.mih"
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
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 105 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 108 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 111 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 114 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 117 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3];

#line 120 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0;

#line 123 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

#line 126 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

#line 129 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1];

#line 132 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1];

#line 135 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 138 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 140 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 143 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 146 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 148 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 150 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3);

#line 358 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__358__1_2_p_0(
#line 358 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 358 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149);

#line 341 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(
#line 341 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 341 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143);

#line 315 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(
#line 315 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 315 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135);

#line 200 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 200 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3);

#line 200 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2);

#line 358 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 358 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 358 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 358 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 341 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 341 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 341 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 315 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 315 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 315 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 291 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 291 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 291 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12);

#line 258 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(
#line 258 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__SymName_4,
#line 258 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_5,
#line 258 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__NameSpecs_6);

#line 161 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 161 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 161 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12);

#line 81 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 81 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 81 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14);


static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[40][2];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[40][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_1[0]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in mode definition body."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the mode name"))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type constructor name/arity, not"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in inst body at"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in LHS of"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free inst"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of"))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[13])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[17])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[23])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 558 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 566 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 574 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 582 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 590 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 598 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

#line 605 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0 = {
  (MR_String) "processed_mode_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 620 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 625 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

#line 634 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 639 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

#line 644 "parse_tree.prog_io_mode_defn.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.prog_io_mode_defn",
  (MR_String) "processed_mode_body",
  {     parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0 },
  {     parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0
};

#line 661 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 664 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 666 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 668 "parse_tree.prog_io_mode_defn.c"
{
#line 670 "parse_tree.prog_io_mode_defn.c"
  {
#line 672 "parse_tree.prog_io_mode_defn.c"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 675 "parse_tree.prog_io_mode_defn.c"
    {
#line 677 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2));
    }
#line 680 "parse_tree.prog_io_mode_defn.c"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 682 "parse_tree.prog_io_mode_defn.c"
  }
#line 684 "parse_tree.prog_io_mode_defn.c"
}

#line 687 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 690 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 692 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 694 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3)
#line 696 "parse_tree.prog_io_mode_defn.c"
{
#line 698 "parse_tree.prog_io_mode_defn.c"
  {
#line 700 "parse_tree.prog_io_mode_defn.c"
    MR_Word parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1;

#line 703 "parse_tree.prog_io_mode_defn.c"
    {
#line 705 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_3));
    }
#line 708 "parse_tree.prog_io_mode_defn.c"
    *parse_tree__prog_io_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1));
#line 710 "parse_tree.prog_io_mode_defn.c"
  }
#line 712 "parse_tree.prog_io_mode_defn.c"
}

#line 358 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__358__1_2_p_0(
#line 358 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 358 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149)
#line 358 "prog_io_mode_defn.m"
{
#line 358 "prog_io_mode_defn.m"
  {
#line 358 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 358 "prog_io_mode_defn.m"
    {
#line 358 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_148, parse_tree__prog_io_mode_defn__HeadVar__2_149);
#line 358 "prog_io_mode_defn.m"
      return;
    }
#line 358 "prog_io_mode_defn.m"
  }
#line 358 "prog_io_mode_defn.m"
}

#line 341 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(
#line 341 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 341 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143)
#line 341 "prog_io_mode_defn.m"
{
#line 341 "prog_io_mode_defn.m"
  {
#line 341 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 341 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_144;

#line 341 "prog_io_mode_defn.m"
    {
#line 341 "prog_io_mode_defn.m"
      return parse_tree__prog_io_mode_defn__HeadVar__3_144 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_143);
    }
#line 341 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_144;
#line 341 "prog_io_mode_defn.m"
  }
#line 341 "prog_io_mode_defn.m"
}

#line 315 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(
#line 315 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 315 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135)
#line 315 "prog_io_mode_defn.m"
{
#line 315 "prog_io_mode_defn.m"
  {
#line 315 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 315 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_136;

#line 315 "prog_io_mode_defn.m"
    {
#line 315 "prog_io_mode_defn.m"
      return parse_tree__prog_io_mode_defn__HeadVar__3_136 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_135);
    }
#line 315 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_136;
#line 315 "prog_io_mode_defn.m"
  }
#line 315 "prog_io_mode_defn.m"
}

#line 200 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 200 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3)
#line 200 "prog_io_mode_defn.m"
{
#line 200 "prog_io_mode_defn.m"
  {
#line 200 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 200 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;
#line 200 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__3_3;

#line 200 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_12 == parse_tree__prog_io_mode_defn__CastY_13);
#line 200 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 821 "parse_tree.prog_io_mode_defn.c"
      *parse_tree__prog_io_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "prog_io_mode_defn.m"
    else
#line 200 "prog_io_mode_defn.m"
      {
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_10_10;

#line 200 "prog_io_mode_defn.m"
        {
#line 200 "prog_io_mode_defn.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_mode_defn__V_10_10, parse_tree__prog_io_mode_defn__V_4_4, parse_tree__prog_io_mode_defn__V_7_7);
        }
#line 847 "parse_tree.prog_io_mode_defn.c"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_10_10 == (MR_Integer) 0);
#line 200 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 200 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 200 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_10_10;
#line 200 "prog_io_mode_defn.m"
        else
#line 200 "prog_io_mode_defn.m"
          {
#line 200 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_11_11;

#line 200 "prog_io_mode_defn.m"
            {
#line 200 "prog_io_mode_defn.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], &parse_tree__prog_io_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_8_8)));
            }
#line 867 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_11_11 == (MR_Integer) 0);
#line 200 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 200 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 200 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_11_11;
#line 200 "prog_io_mode_defn.m"
            else
#line 200 "prog_io_mode_defn.m"
              {
#line 200 "prog_io_mode_defn.m"
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_mode_defn__HeadVar__1_1, parse_tree__prog_io_mode_defn__V_6_6, parse_tree__prog_io_mode_defn__V_9_9);
#line 200 "prog_io_mode_defn.m"
                return;
              }
#line 200 "prog_io_mode_defn.m"
          }
#line 200 "prog_io_mode_defn.m"
      }
#line 200 "prog_io_mode_defn.m"
  }
#line 200 "prog_io_mode_defn.m"
}

#line 200 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 200 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2)
#line 200 "prog_io_mode_defn.m"
{
#line 200 "prog_io_mode_defn.m"
  {
#line 200 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 200 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__1_1;
#line 200 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;

#line 200 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_9 == parse_tree__prog_io_mode_defn__CastY_10);
#line 200 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 200 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = MR_TRUE;
#line 200 "prog_io_mode_defn.m"
    else
#line 200 "prog_io_mode_defn.m"
      {
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_12_12;
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

#line 936 "parse_tree.prog_io_mode_defn.c"
        {
#line 938 "parse_tree.prog_io_mode_defn.c"
          parse_tree__prog_io_mode_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_mode_defn__V_3_3, parse_tree__prog_io_mode_defn__V_6_6);
        }
#line 200 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 200 "prog_io_mode_defn.m"
          {
#line 945 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1];
#line 947 "parse_tree.prog_io_mode_defn.c"
            {
#line 949 "parse_tree.prog_io_mode_defn.c"
              parse_tree__prog_io_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_7_7)));
            }
#line 200 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 954 "parse_tree.prog_io_mode_defn.c"
              {
#line 956 "parse_tree.prog_io_mode_defn.c"
                return parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_mode_defn__V_5_5, parse_tree__prog_io_mode_defn__V_8_8);
              }
#line 200 "prog_io_mode_defn.m"
          }
#line 200 "prog_io_mode_defn.m"
      }
#line 200 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 200 "prog_io_mode_defn.m"
  }
#line 200 "prog_io_mode_defn.m"
}

#line 358 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 358 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 358 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 358 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 358 "prog_io_mode_defn.m"
{
#line 358 "prog_io_mode_defn.m"
  {
#line 358 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 358 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149;

#line 358 "prog_io_mode_defn.m"
    {
#line 358 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__358__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149);
    }
#line 358 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149));
#line 358 "prog_io_mode_defn.m"
  }
#line 358 "prog_io_mode_defn.m"
}

#line 341 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 341 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 341 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 341 "prog_io_mode_defn.m"
{
#line 341 "prog_io_mode_defn.m"
  {
#line 341 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 341 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 341 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144;

#line 341 "prog_io_mode_defn.m"
    {
#line 341 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__341__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 341 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144));
#line 341 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 341 "prog_io_mode_defn.m"
  }
#line 341 "prog_io_mode_defn.m"
}

#line 315 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 315 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 315 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 315 "prog_io_mode_defn.m"
{
#line 315 "prog_io_mode_defn.m"
  {
#line 315 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 315 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 315 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136;

#line 315 "prog_io_mode_defn.m"
    {
#line 315 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__315__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 315 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136));
#line 315 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 315 "prog_io_mode_defn.m"
  }
#line 315 "prog_io_mode_defn.m"
}

#line 291 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 291 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 291 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 291 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12)
#line 291 "prog_io_mode_defn.m"
{
#line 365 "prog_io_mode_defn.m"
  {
#line 365 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 365 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ArgVars_13;

#line 297 "prog_io_mode_defn.m"
    {
#line 297 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__ArgTerms_10, &parse_tree__prog_io_mode_defn__ArgVars_13);
    }
#line 365 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 299 "prog_io_mode_defn.m"
      {
#line 299 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81;
#line 324 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__DupArgVars_19;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_132_132;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsBag_18;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_15_15;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;
#line 305 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_17_17;
#line 308 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_20_20;
#line 308 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_21_21;
#line 1119 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_27;
#line 1121 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__FreeVars_34;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_140_140;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVars_28;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVarsSet_31;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsSet_32;
#line 331 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__FreeVarsSet_33;
#line 333 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 333 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 338 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_35_35;
#line 338 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_36_36;

#line 305 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
#line 305 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 305 "prog_io_mode_defn.m"
          {
#line 305 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 0)));
#line 305 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 1)));
#line 305 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 305 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 305 "prog_io_mode_defn.m"
              {
#line 305 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 0)));
#line 305 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 1)));
#line 1164 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_132_132 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 306 "prog_io_mode_defn.m"
                {
#line 306 "prog_io_mode_defn.m"
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsBag_18);
                }
#line 307 "prog_io_mode_defn.m"
                {
#line 307 "prog_io_mode_defn.m"
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVarsBag_18, &parse_tree__prog_io_mode_defn__DupArgVars_19);
                }
#line 308 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__DupArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 308 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 308 "prog_io_mode_defn.m"
                  {
#line 308 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 0)));
#line 308 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 1)));
#line 308 "prog_io_mode_defn.m"
                  }
#line 305 "prog_io_mode_defn.m"
              }
#line 305 "prog_io_mode_defn.m"
          }
#line 324 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 311 "prog_io_mode_defn.m"
          {
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_133_133 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138;
#line 311 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__ParamWord_22;
#line 311 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__IsAreWord_23;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__DupVarNames_24;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatPieces_25;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatSpec_26;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_55_55;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_62_62;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_75_75;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_76_76;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_77_77;
#line 311 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 310 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv0_ParamWord_22;
#line 312 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv1_IsAreWord_23;

#line 310 "prog_io_mode_defn.m"
            {
#line 310 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 310 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ParamWord_22 = ((MR_String) parse_tree__prog_io_mode_defn__conv0_ParamWord_22);
#line 312 "prog_io_mode_defn.m"
            {
#line 312 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
            }
#line 312 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__IsAreWord_23 = ((MR_String) parse_tree__prog_io_mode_defn__conv1_IsAreWord_23);
#line 315 "prog_io_mode_defn.m"
            {
#line 315 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 315 "prog_io_mode_defn.m"
            }
#line 315 "prog_io_mode_defn.m"
            {
#line 315 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__DupVarNames_24 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__V_51_51, parse_tree__prog_io_mode_defn__DupArgVars_19);
            }
#line 1280 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 316 "prog_io_mode_defn.m"
            {
#line 316 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ParamWord_22));
#line 316 "prog_io_mode_defn.m"
            }
#line 316 "prog_io_mode_defn.m"
            {
#line 316 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "prog_io_mode_defn.m"
            }
#line 316 "prog_io_mode_defn.m"
            {
#line 316 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[35])));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 316 "prog_io_mode_defn.m"
            }
#line 317 "prog_io_mode_defn.m"
            {
#line 317 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__DupVarNames_24);
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__IsAreWord_23));
#line 318 "prog_io_mode_defn.m"
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 318 "prog_io_mode_defn.m"
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 318 "prog_io_mode_defn.m"
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[36])));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 318 "prog_io_mode_defn.m"
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_62_62));
#line 318 "prog_io_mode_defn.m"
            }
#line 317 "prog_io_mode_defn.m"
            {
#line 317 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 316 "prog_io_mode_defn.m"
            {
#line 316 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatPieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_52_52, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 322 "prog_io_mode_defn.m"
            {
#line 322 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatPieces_25));
#line 322 "prog_io_mode_defn.m"
            }
#line 322 "prog_io_mode_defn.m"
            {
#line 322 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "prog_io_mode_defn.m"
            }
#line 322 "prog_io_mode_defn.m"
            {
#line 322 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_77_77));
#line 322 "prog_io_mode_defn.m"
            }
#line 322 "prog_io_mode_defn.m"
            {
#line 322 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_76_76));
#line 322 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "prog_io_mode_defn.m"
            }
#line 320 "prog_io_mode_defn.m"
            {
#line 320 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 320 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_75_75));
#line 320 "prog_io_mode_defn.m"
            }
#line 323 "prog_io_mode_defn.m"
            {
#line 323 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatSpec_26));
#line 323 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45));
#line 323 "prog_io_mode_defn.m"
            }
#line 311 "prog_io_mode_defn.m"
          }
#line 324 "prog_io_mode_defn.m"
        else
#line 324 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45;
#line 331 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeBodyTerm_11)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 331 "prog_io_mode_defn.m"
          {
#line 331 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__BodyTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeBodyTerm_11, (MR_Integer) 0)));
#line 1451 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 332 "prog_io_mode_defn.m"
            {
#line 332 "prog_io_mode_defn.m"
              mercury__term__vars_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139, parse_tree__prog_io_mode_defn__BodyTerm_27, &parse_tree__prog_io_mode_defn__BodyVars_28);
            }
#line 333 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__BodyVars_28)) == (MR_mktag((MR_Integer) 1)));
#line 333 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 333 "prog_io_mode_defn.m"
              {
#line 333 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 0)));
#line 333 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 1)));
#line 1468 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_140_140 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 334 "prog_io_mode_defn.m"
                {
#line 334 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVars_28, &parse_tree__prog_io_mode_defn__BodyVarsSet_31);
                }
#line 335 "prog_io_mode_defn.m"
                {
#line 335 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsSet_32);
                }
#line 336 "prog_io_mode_defn.m"
                {
#line 336 "prog_io_mode_defn.m"
                  mercury__set__difference_3_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVarsSet_31, parse_tree__prog_io_mode_defn__ArgVarsSet_32, &parse_tree__prog_io_mode_defn__FreeVarsSet_33);
                }
#line 337 "prog_io_mode_defn.m"
                {
#line 337 "prog_io_mode_defn.m"
                  mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__FreeVarsSet_33, &parse_tree__prog_io_mode_defn__FreeVars_34);
                }
#line 338 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__FreeVars_34)) == (MR_mktag((MR_Integer) 1)));
#line 338 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 338 "prog_io_mode_defn.m"
                  {
#line 338 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 0)));
#line 338 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 1)));
#line 338 "prog_io_mode_defn.m"
                  }
#line 333 "prog_io_mode_defn.m"
              }
#line 331 "prog_io_mode_defn.m"
          }
#line 1506 "parse_tree.prog_io_mode_defn.c"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 1508 "parse_tree.prog_io_mode_defn.c"
          {
#line 1510 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_141_141 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 1512 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1514 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146;
#line 1516 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeVarNames_37;
#line 1518 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreePieces_38;
#line 1520 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeSpec_39;
#line 1522 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_82_82;
#line 1524 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_83_83;
#line 1526 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_86_86;
#line 1528 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 1530 "parse_tree.prog_io_mode_defn.c"
            MR_String parse_tree__prog_io_mode_defn__V_88_88;
#line 1532 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_92_92;
#line 1534 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 1536 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 1538 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_97_97;
#line 1540 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_98_98;
#line 1542 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_107_107;
#line 1544 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_108_108;
#line 1546 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_109_109;
#line 1548 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_110_110;
#line 1550 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_111_111;
#line 1552 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114;
#line 343 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv4_V_88_88;

#line 341 "prog_io_mode_defn.m"
            {
#line 341 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 341 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 341 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2));
#line 341 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 341 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 341 "prog_io_mode_defn.m"
            }
#line 341 "prog_io_mode_defn.m"
            {
#line 341 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeVarNames_37 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__V_82_82, parse_tree__prog_io_mode_defn__FreeVars_34);
            }
#line 1576 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 343 "prog_io_mode_defn.m"
            {
#line 343 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv4_V_88_88 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 343 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_88_88 = ((MR_String) parse_tree__prog_io_mode_defn__conv4_V_88_88);
#line 343 "prog_io_mode_defn.m"
            {
#line 343 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 343 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 343 "prog_io_mode_defn.m"
            }
#line 344 "prog_io_mode_defn.m"
            {
#line 344 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 344 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "prog_io_mode_defn.m"
            }
#line 342 "prog_io_mode_defn.m"
            {
#line 342 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[37])));
#line 342 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_86_86));
#line 342 "prog_io_mode_defn.m"
            }
#line 345 "prog_io_mode_defn.m"
            {
#line 345 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__FreeVarNames_37);
            }
#line 346 "prog_io_mode_defn.m"
            {
#line 346 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 346 "prog_io_mode_defn.m"
            }
#line 346 "prog_io_mode_defn.m"
            {
#line 346 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_98_98));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 346 "prog_io_mode_defn.m"
            }
#line 346 "prog_io_mode_defn.m"
            {
#line 346 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[38])));
#line 346 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_97_97));
#line 346 "prog_io_mode_defn.m"
            }
#line 345 "prog_io_mode_defn.m"
            {
#line 345 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_93_93, parse_tree__prog_io_mode_defn__V_94_94);
            }
#line 344 "prog_io_mode_defn.m"
            {
#line 344 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreePieces_38 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_83_83, parse_tree__prog_io_mode_defn__V_92_92);
            }
#line 349 "prog_io_mode_defn.m"
            {
#line 349 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_109_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__BodyTerm_27);
            }
#line 350 "prog_io_mode_defn.m"
            {
#line 350 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreePieces_38));
#line 350 "prog_io_mode_defn.m"
            }
#line 350 "prog_io_mode_defn.m"
            {
#line 350 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_111_111));
#line 350 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "prog_io_mode_defn.m"
            }
#line 349 "prog_io_mode_defn.m"
            {
#line 349 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_109_109));
#line 349 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_110_110));
#line 349 "prog_io_mode_defn.m"
            }
#line 350 "prog_io_mode_defn.m"
            {
#line 350 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_108_108));
#line 350 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "prog_io_mode_defn.m"
            }
#line 347 "prog_io_mode_defn.m"
            {
#line 347 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 347 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_107_107));
#line 347 "prog_io_mode_defn.m"
            }
#line 351 "prog_io_mode_defn.m"
            {
#line 351 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreeSpec_39));
#line 351 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 351 "prog_io_mode_defn.m"
            }
#line 362 "prog_io_mode_defn.m"
            {
#line 362 "prog_io_mode_defn.m"
              MR_Word base;
#line 362 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 362 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 362 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114));
#line 362 "prog_io_mode_defn.m"
            }
#line 1737 "parse_tree.prog_io_mode_defn.c"
          }
#line 1739 "parse_tree.prog_io_mode_defn.c"
        else
#line 360 "prog_io_mode_defn.m"
        if ((parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "prog_io_mode_defn.m"
          {
#line 357 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstArgVars_40;

#line 358 "prog_io_mode_defn.m"
            {
#line 358 "prog_io_mode_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_5[0], parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__InstArgVars_40);
            }
#line 359 "prog_io_mode_defn.m"
            {
#line 359 "prog_io_mode_defn.m"
              MR_Word base;
#line 359 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 359 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_40));
#line 359 "prog_io_mode_defn.m"
            }
#line 357 "prog_io_mode_defn.m"
          }
#line 360 "prog_io_mode_defn.m"
        else
#line 362 "prog_io_mode_defn.m"
          {
#line 362 "prog_io_mode_defn.m"
            MR_Word base;
#line 362 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 362 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 362 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 362 "prog_io_mode_defn.m"
          }
#line 299 "prog_io_mode_defn.m"
      }
#line 365 "prog_io_mode_defn.m"
    else
#line 368 "prog_io_mode_defn.m"
      {
#line 368 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__VarSpec_44;
#line 368 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_123_123;
#line 368 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_124_124;
#line 368 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_129_129;

#line 370 "prog_io_mode_defn.m"
        {
#line 370 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 370 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[39])));
#line 370 "prog_io_mode_defn.m"
        }
#line 370 "prog_io_mode_defn.m"
        {
#line 370 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_124_124));
#line 370 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "prog_io_mode_defn.m"
        }
#line 369 "prog_io_mode_defn.m"
        {
#line 369 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__VarSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 369 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 369 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_123_123));
#line 369 "prog_io_mode_defn.m"
        }
#line 371 "prog_io_mode_defn.m"
        {
#line 371 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSpec_44));
#line 371 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "prog_io_mode_defn.m"
        }
#line 371 "prog_io_mode_defn.m"
        {
#line 371 "prog_io_mode_defn.m"
          MR_Word base;
#line 371 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 371 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_129_129));
#line 371 "prog_io_mode_defn.m"
        }
#line 368 "prog_io_mode_defn.m"
      }
#line 365 "prog_io_mode_defn.m"
  }
#line 291 "prog_io_mode_defn.m"
}

#line 258 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(
#line 258 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__SymName_4,
#line 258 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_5,
#line 258 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__NameSpecs_6)
#line 258 "prog_io_mode_defn.m"
{
#line 261 "prog_io_mode_defn.m"
  {
#line 261 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 261 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__Name_7;

#line 262 "prog_io_mode_defn.m"
    {
#line 262 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_4);
    }
#line 263 "prog_io_mode_defn.m"
    {
#line 263 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_7);
    }
#line 269 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 265 "prog_io_mode_defn.m"
      {
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NamePieces_8;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpec_9;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_12_12;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_13_13;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_22_22;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_23_23;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_24_24;
#line 265 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_25_25;

#line 264 "prog_io_mode_defn.m"
        {
#line 264 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_7));
#line 264 "prog_io_mode_defn.m"
        }
#line 264 "prog_io_mode_defn.m"
        {
#line 264 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_12_12, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_13_13));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 264 "prog_io_mode_defn.m"
        }
#line 264 "prog_io_mode_defn.m"
        {
#line 264 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[34])));
#line 264 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_12_12));
#line 264 "prog_io_mode_defn.m"
        }
#line 267 "prog_io_mode_defn.m"
        {
#line 267 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_8));
#line 267 "prog_io_mode_defn.m"
        }
#line 267 "prog_io_mode_defn.m"
        {
#line 267 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_25_25));
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_mode_defn.m"
        }
#line 267 "prog_io_mode_defn.m"
        {
#line 267 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_5));
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_24_24));
#line 267 "prog_io_mode_defn.m"
        }
#line 267 "prog_io_mode_defn.m"
        {
#line 267 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_23_23));
#line 267 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_mode_defn.m"
        }
#line 266 "prog_io_mode_defn.m"
        {
#line 266 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 266 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_22_22));
#line 266 "prog_io_mode_defn.m"
        }
#line 268 "prog_io_mode_defn.m"
        {
#line 268 "prog_io_mode_defn.m"
          MR_Word base;
#line 268 "prog_io_mode_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__NameSpecs_6 = base;
#line 268 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_9));
#line 268 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_mode_defn.m"
        }
#line 265 "prog_io_mode_defn.m"
      }
#line 269 "prog_io_mode_defn.m"
    else
#line 270 "prog_io_mode_defn.m"
      *parse_tree__prog_io_mode_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "prog_io_mode_defn.m"
  }
#line 258 "prog_io_mode_defn.m"
}

#line 161 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 161 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 161 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 161 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12)
#line 161 "prog_io_mode_defn.m"
{
#line 165 "prog_io_mode_defn.m"
  {
#line 165 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 165 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 165 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14;

#line 167 "prog_io_mode_defn.m"
    {
#line 167 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_36_36, parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__HeadTerm_9, parse_tree__prog_io_mode_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14);
    }
#line 172 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
#line 170 "prog_io_mode_defn.m"
      {
#line 170 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));

#line 171 "prog_io_mode_defn.m"
        {
#line 171 "prog_io_mode_defn.m"
          MR_Word base;
#line 171 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 171 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 171 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_15));
#line 171 "prog_io_mode_defn.m"
        }
#line 170 "prog_io_mode_defn.m"
      }
#line 172 "prog_io_mode_defn.m"
    else
#line 173 "prog_io_mode_defn.m"
      {
#line 173 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));
#line 173 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 1)));
#line 173 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_18;
#line 173 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_19;
#line 173 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_20;
#line 173 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_43;
#line 191 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_21;

#line 175 "prog_io_mode_defn.m"
        {
#line 175 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_18 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_36_36, parse_tree__prog_io_mode_defn__HeadTerm_9);
        }
#line 262 "prog_io_mode_defn.m"
        {
#line 262 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_43 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_16);
        }
#line 263 "prog_io_mode_defn.m"
        {
#line 263 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_43);
        }
#line 269 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 265 "prog_io_mode_defn.m"
          {
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_44;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_45;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 265 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;

#line 264 "prog_io_mode_defn.m"
            {
#line 264 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_43));
#line 264 "prog_io_mode_defn.m"
            }
#line 264 "prog_io_mode_defn.m"
            {
#line 264 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 264 "prog_io_mode_defn.m"
            }
#line 264 "prog_io_mode_defn.m"
            {
#line 264 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[34])));
#line 264 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_44, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_48_48));
#line 264 "prog_io_mode_defn.m"
            }
#line 267 "prog_io_mode_defn.m"
            {
#line 267 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_44));
#line 267 "prog_io_mode_defn.m"
            }
#line 267 "prog_io_mode_defn.m"
            {
#line 267 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_mode_defn.m"
            }
#line 267 "prog_io_mode_defn.m"
            {
#line 267 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_18));
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 267 "prog_io_mode_defn.m"
            }
#line 267 "prog_io_mode_defn.m"
            {
#line 267 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 267 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_mode_defn.m"
            }
#line 266 "prog_io_mode_defn.m"
            {
#line 266 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 266 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_45, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_58_58));
#line 266 "prog_io_mode_defn.m"
            }
#line 268 "prog_io_mode_defn.m"
            {
#line 268 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_45));
#line 268 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_mode_defn.m"
            }
#line 265 "prog_io_mode_defn.m"
          }
#line 269 "prog_io_mode_defn.m"
        else
#line 270 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "prog_io_mode_defn.m"
        {
#line 177 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTermContext_18, parse_tree__prog_io_mode_defn__ArgTerms_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
        }
#line 181 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 181 "prog_io_mode_defn.m"
          {
#line 182 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 182 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 182 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_20, (MR_Integer) 0)));
#line 181 "prog_io_mode_defn.m"
          }
#line 191 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 184 "prog_io_mode_defn.m"
          {
#line 184 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_22;
#line 184 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_25;
#line 184 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_26;

#line 184 "prog_io_mode_defn.m"
            {
#line 184 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_8, &parse_tree__prog_io_mode_defn__InstVarSet_22);
            }
#line 187 "prog_io_mode_defn.m"
            {
#line 187 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_16));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_21));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_22));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 187 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_11));
#line 187 "prog_io_mode_defn.m"
            }
#line 189 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_25);
#line 190 "prog_io_mode_defn.m"
            {
#line 190 "prog_io_mode_defn.m"
              MR_Word base;
#line 190 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 190 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_26));
#line 190 "prog_io_mode_defn.m"
            }
#line 184 "prog_io_mode_defn.m"
          }
#line 191 "prog_io_mode_defn.m"
        else
#line 193 "prog_io_mode_defn.m"
          {
#line 193 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 193 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_33;

#line 193 "prog_io_mode_defn.m"
            {
#line 193 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_32_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
            }
#line 192 "prog_io_mode_defn.m"
            {
#line 192 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_mode_defn__NameSpecs_19, parse_tree__prog_io_mode_defn__V_32_32);
            }
#line 194 "prog_io_mode_defn.m"
            {
#line 194 "prog_io_mode_defn.m"
              MR_Word base;
#line 194 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 194 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 194 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_33));
#line 194 "prog_io_mode_defn.m"
            }
#line 193 "prog_io_mode_defn.m"
          }
#line 173 "prog_io_mode_defn.m"
      }
#line 165 "prog_io_mode_defn.m"
  }
#line 161 "prog_io_mode_defn.m"
}

#line 81 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 81 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 81 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 81 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 81 "prog_io_mode_defn.m"
{
#line 85 "prog_io_mode_defn.m"
  {
#line 85 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 85 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110;
#line 85 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__NameTerm_19;
#line 85 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeForType_22;
#line 85 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ForTypeSpecs_23;
#line 85 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27;
#line 109 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__NameTermPrime_16;
#line 109 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ForTypeTerm_17;
#line 88 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 88 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_50_50;
#line 88 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 88 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 88 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_53_53;
#line 88 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_18_18;

#line 88 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 88 "prog_io_mode_defn.m"
      {
#line 88 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 0)));
#line 88 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 1)));
#line 88 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 2)));
#line 88 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 88 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 88 "prog_io_mode_defn.m"
          {
#line 88 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_49_49, (MR_Integer) 0)));
#line 88 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_50_50, (MR_String) "for") == 0);
#line 88 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 88 "prog_io_mode_defn.m"
              {
#line 89 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 89 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 89 "prog_io_mode_defn.m"
                  {
#line 89 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__NameTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, (MR_Integer) 0)));
#line 89 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, (MR_Integer) 1)));
#line 89 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 89 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 89 "prog_io_mode_defn.m"
                      {
#line 89 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__ForTypeTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, (MR_Integer) 0)));
#line 89 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, (MR_Integer) 1)));
#line 89 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 89 "prog_io_mode_defn.m"
                      }
#line 89 "prog_io_mode_defn.m"
                  }
#line 88 "prog_io_mode_defn.m"
              }
#line 88 "prog_io_mode_defn.m"
          }
#line 88 "prog_io_mode_defn.m"
      }
#line 109 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 91 "prog_io_mode_defn.m"
      {
#line 98 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeSymName_20;
#line 98 "prog_io_mode_defn.m"
        MR_Integer parse_tree__prog_io_mode_defn__TypeArity_21;

#line 91 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__NameTerm_19 = parse_tree__prog_io_mode_defn__NameTermPrime_16;
#line 93 "prog_io_mode_defn.m"
        {
#line 93 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__ForTypeTerm_17, &parse_tree__prog_io_mode_defn__TypeSymName_20, &parse_tree__prog_io_mode_defn__TypeArity_21);
        }
#line 98 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 96 "prog_io_mode_defn.m"
          {
#line 96 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_54_54;

#line 96 "prog_io_mode_defn.m"
            {
#line 96 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 96 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__TypeSymName_20));
#line 96 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__TypeArity_21));
#line 96 "prog_io_mode_defn.m"
            }
#line 96 "prog_io_mode_defn.m"
            {
#line 96 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeForType_22, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_54_54));
#line 96 "prog_io_mode_defn.m"
            }
#line 97 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 96 "prog_io_mode_defn.m"
          }
#line 98 "prog_io_mode_defn.m"
        else
#line 99 "prog_io_mode_defn.m"
          {
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_109_109;
#line 99 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__ForTypeTermStr_24;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ForTypePieces_25;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ForTypeSpec_26;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_57_57;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_70_70;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_71_71;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_72_72;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_73_73;
#line 99 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_74_74;

#line 99 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2507 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_109_109 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 100 "prog_io_mode_defn.m"
            {
#line 100 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_109_109, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__ForTypeTerm_17);
            }
#line 103 "prog_io_mode_defn.m"
            {
#line 103 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 103 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypeTermStr_24));
#line 103 "prog_io_mode_defn.m"
            }
#line 103 "prog_io_mode_defn.m"
            {
#line 103 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 103 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 103 "prog_io_mode_defn.m"
            }
#line 102 "prog_io_mode_defn.m"
            {
#line 102 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[32])));
#line 102 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 102 "prog_io_mode_defn.m"
            }
#line 101 "prog_io_mode_defn.m"
            {
#line 101 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[31])));
#line 101 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypePieces_25, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_57_57));
#line 101 "prog_io_mode_defn.m"
            }
#line 105 "prog_io_mode_defn.m"
            {
#line 105 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_72_72 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_109_109, parse_tree__prog_io_mode_defn__ForTypeTerm_17);
            }
#line 106 "prog_io_mode_defn.m"
            {
#line 106 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypePieces_25));
#line 106 "prog_io_mode_defn.m"
            }
#line 106 "prog_io_mode_defn.m"
            {
#line 106 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_74_74));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_mode_defn.m"
            }
#line 105 "prog_io_mode_defn.m"
            {
#line 105 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_72_72));
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_73_73));
#line 105 "prog_io_mode_defn.m"
            }
#line 106 "prog_io_mode_defn.m"
            {
#line 106 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_mode_defn.m"
            }
#line 104 "prog_io_mode_defn.m"
            {
#line 104 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 104 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_70_70));
#line 104 "prog_io_mode_defn.m"
            }
#line 107 "prog_io_mode_defn.m"
            {
#line 107 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypeSpecs_23, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypeSpec_26));
#line 107 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypeSpecs_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "prog_io_mode_defn.m"
            }
#line 99 "prog_io_mode_defn.m"
          }
#line 91 "prog_io_mode_defn.m"
      }
#line 109 "prog_io_mode_defn.m"
    else
#line 110 "prog_io_mode_defn.m"
      {
#line 110 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__NameTerm_19 = parse_tree__prog_io_mode_defn__HeadTerm_10;
#line 111 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 112 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 110 "prog_io_mode_defn.m"
      }
#line 2635 "parse_tree.prog_io_mode_defn.c"
    parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 114 "prog_io_mode_defn.m"
    {
#line 114 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__NameTerm_19, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30]), &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27);
    }
#line 120 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27)) == (MR_mktag((MR_Integer) 0))))
#line 117 "prog_io_mode_defn.m"
      {
#line 117 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymNameAndArgSpecs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
#line 117 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_29;

#line 118 "prog_io_mode_defn.m"
        {
#line 118 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_mode_defn__SymNameAndArgSpecs_28, parse_tree__prog_io_mode_defn__ForTypeSpecs_23);
        }
#line 119 "prog_io_mode_defn.m"
        {
#line 119 "prog_io_mode_defn.m"
          MR_Word base;
#line 119 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 119 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_29));
#line 119 "prog_io_mode_defn.m"
        }
#line 117 "prog_io_mode_defn.m"
      }
#line 120 "prog_io_mode_defn.m"
    else
#line 121 "prog_io_mode_defn.m"
      {
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 1)));
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_32;
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_33;
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_34;
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInst_36;
#line 121 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_79_79;
#line 130 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst0_35;
#line 153 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_40;
#line 153 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst_41;

#line 123 "prog_io_mode_defn.m"
        {
#line 123 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 124 "prog_io_mode_defn.m"
        {
#line 124 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(parse_tree__prog_io_mode_defn__SymName_30, parse_tree__prog_io_mode_defn__HeadTermContext_32, &parse_tree__prog_io_mode_defn__NameSpecs_33);
        }
#line 126 "prog_io_mode_defn.m"
        {
#line 126 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 126 "prog_io_mode_defn.m"
        }
#line 125 "prog_io_mode_defn.m"
        {
#line 125 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_32, parse_tree__prog_io_mode_defn__ArgTerms_31, parse_tree__prog_io_mode_defn__V_79_79, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_34);
        }
#line 128 "prog_io_mode_defn.m"
        {
#line 128 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Inst0_35);
        }
#line 130 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 129 "prog_io_mode_defn.m"
          {
#line 129 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeInst_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst0_35));
#line 129 "prog_io_mode_defn.m"
          }
#line 130 "prog_io_mode_defn.m"
        else
#line 132 "prog_io_mode_defn.m"
          {
#line 132 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__BodyTermStr_37;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyPieces_38;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_39;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_83_83;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_84_84;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_95_95;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_96_96;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_97_97;
#line 132 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_100_100;

#line 132 "prog_io_mode_defn.m"
            {
#line 132 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyTermStr_37 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 134 "prog_io_mode_defn.m"
            {
#line 134 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 134 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTermStr_37));
#line 134 "prog_io_mode_defn.m"
            }
#line 134 "prog_io_mode_defn.m"
            {
#line 134 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_84_84));
#line 134 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 134 "prog_io_mode_defn.m"
            }
#line 133 "prog_io_mode_defn.m"
            {
#line 133 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[33])));
#line 133 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_38, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_83_83));
#line 133 "prog_io_mode_defn.m"
            }
#line 136 "prog_io_mode_defn.m"
            {
#line 136 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_95_95 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 137 "prog_io_mode_defn.m"
            {
#line 137 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyPieces_38));
#line 137 "prog_io_mode_defn.m"
            }
#line 137 "prog_io_mode_defn.m"
            {
#line 137 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_97_97));
#line 137 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "prog_io_mode_defn.m"
            }
#line 136 "prog_io_mode_defn.m"
            {
#line 136 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 136 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_95_95));
#line 136 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_96_96));
#line 136 "prog_io_mode_defn.m"
            }
#line 137 "prog_io_mode_defn.m"
            {
#line 137 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_94_94));
#line 137 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "prog_io_mode_defn.m"
            }
#line 135 "prog_io_mode_defn.m"
            {
#line 135 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 135 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 135 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_93_93));
#line 135 "prog_io_mode_defn.m"
            }
#line 138 "prog_io_mode_defn.m"
            {
#line 138 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_39));
#line 138 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 138 "prog_io_mode_defn.m"
            }
#line 138 "prog_io_mode_defn.m"
            {
#line 138 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeInst_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 138 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_100_100));
#line 138 "prog_io_mode_defn.m"
            }
#line 132 "prog_io_mode_defn.m"
          }
#line 142 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 142 "prog_io_mode_defn.m"
          {
#line 143 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__ForTypeSpecs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 142 "prog_io_mode_defn.m"
              {
#line 144 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_34)) == (MR_mktag((MR_Integer) 1)));
#line 144 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 144 "prog_io_mode_defn.m"
                  {
#line 144 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__InstArgVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_34, (MR_Integer) 0)));
#line 145 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInst_36)) == (MR_mktag((MR_Integer) 1)));
#line 145 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 145 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_36, (MR_Integer) 0)));
#line 144 "prog_io_mode_defn.m"
                  }
#line 142 "prog_io_mode_defn.m"
              }
#line 142 "prog_io_mode_defn.m"
          }
#line 153 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 147 "prog_io_mode_defn.m"
          {
#line 147 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_42;
#line 147 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstDefn_43;
#line 147 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_44;
#line 147 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_45;

#line 147 "prog_io_mode_defn.m"
            {
#line 147 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_42);
            }
#line 148 "prog_io_mode_defn.m"
            {
#line 148 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 148 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__InstDefn_43, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst_41));
#line 148 "prog_io_mode_defn.m"
            }
#line 149 "prog_io_mode_defn.m"
            {
#line 149 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_30));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_40));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__MaybeForType_22));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstDefn_43));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_42));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 149 "prog_io_mode_defn.m"
            }
#line 151 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_45 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_44);
#line 152 "prog_io_mode_defn.m"
            {
#line 152 "prog_io_mode_defn.m"
              MR_Word base;
#line 152 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 152 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_45));
#line 152 "prog_io_mode_defn.m"
            }
#line 147 "prog_io_mode_defn.m"
          }
#line 153 "prog_io_mode_defn.m"
        else
#line 156 "prog_io_mode_defn.m"
          {
#line 156 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 156 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_102_102;
#line 156 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_103_103;
#line 156 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_104_104;
#line 156 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_105;

#line 155 "prog_io_mode_defn.m"
            {
#line 155 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_103_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_34);
            }
#line 156 "prog_io_mode_defn.m"
            {
#line 156 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_104_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mode_defn__MaybeInst_36);
            }
#line 155 "prog_io_mode_defn.m"
            {
#line 155 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_102_102 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_113_113, parse_tree__prog_io_mode_defn__V_103_103, parse_tree__prog_io_mode_defn__V_104_104);
            }
#line 154 "prog_io_mode_defn.m"
            {
#line 154 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_105 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_113_113, parse_tree__prog_io_mode_defn__NameSpecs_33, parse_tree__prog_io_mode_defn__V_102_102);
            }
#line 157 "prog_io_mode_defn.m"
            {
#line 157 "prog_io_mode_defn.m"
              MR_Word base;
#line 157 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 157 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_105));
#line 157 "prog_io_mode_defn.m"
            }
#line 156 "prog_io_mode_defn.m"
          }
#line 121 "prog_io_mode_defn.m"
      }
#line 85 "prog_io_mode_defn.m"
  }
#line 81 "prog_io_mode_defn.m"
}

#line 34 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 34 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 34 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 34 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 34 "prog_io_mode_defn.m"
{
#line 208 "prog_io_mode_defn.m"
  {
#line 208 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 208 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 208 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16;

#line 210 "prog_io_mode_defn.m"
    {
#line 210 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[26]), &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16);
    }
#line 215 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 213 "prog_io_mode_defn.m"
      {
#line 213 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));

#line 214 "prog_io_mode_defn.m"
        {
#line 214 "prog_io_mode_defn.m"
          MR_Word base;
#line 214 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 214 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 214 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 214 "prog_io_mode_defn.m"
        }
#line 213 "prog_io_mode_defn.m"
      }
#line 215 "prog_io_mode_defn.m"
    else
#line 216 "prog_io_mode_defn.m"
      {
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 1)));
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_20;
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_21;
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_22;
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeMode_24;
#line 216 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_37_37;
#line 216 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_72;
#line 225 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode0_23;
#line 246 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_27;
#line 246 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode_28;

#line 218 "prog_io_mode_defn.m"
        {
#line 218 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_20 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 280 "prog_io_mode_defn.m"
        {
#line 280 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_72 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_18);
        }
#line 281 "prog_io_mode_defn.m"
        {
#line 281 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_mode_name_1_p_0(parse_tree__prog_io_mode_defn__Name_72);
        }
#line 287 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 283 "prog_io_mode_defn.m"
          {
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_73;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_74;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_77_77;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 283 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_90_90;

#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_72));
#line 282 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 282 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[27])));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_73, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_77_77));
#line 282 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_73));
#line 285 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_20));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 285 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "prog_io_mode_defn.m"
            }
#line 284 "prog_io_mode_defn.m"
            {
#line 284 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 284 "prog_io_mode_defn.m"
            }
#line 286 "prog_io_mode_defn.m"
            {
#line 286 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_74));
#line 286 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "prog_io_mode_defn.m"
            }
#line 283 "prog_io_mode_defn.m"
          }
#line 287 "prog_io_mode_defn.m"
        else
#line 288 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "prog_io_mode_defn.m"
        {
#line 221 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 221 "prog_io_mode_defn.m"
        }
#line 220 "prog_io_mode_defn.m"
        {
#line 220 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_20, parse_tree__prog_io_mode_defn__ArgTerms_19, parse_tree__prog_io_mode_defn__V_37_37, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
        }
#line 223 "prog_io_mode_defn.m"
        {
#line 223 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Mode0_23);
        }
#line 225 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 224 "prog_io_mode_defn.m"
          {
#line 224 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Mode0_23));
#line 224 "prog_io_mode_defn.m"
          }
#line 225 "prog_io_mode_defn.m"
        else
#line 228 "prog_io_mode_defn.m"
          {
#line 228 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_26;
#line 228 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 228 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 228 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 228 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;

#line 230 "prog_io_mode_defn.m"
            {
#line 230 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_51_51 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 230 "prog_io_mode_defn.m"
            {
#line 230 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_51_51));
#line 230 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 230 "prog_io_mode_defn.m"
            }
#line 231 "prog_io_mode_defn.m"
            {
#line 231 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 231 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "prog_io_mode_defn.m"
            }
#line 229 "prog_io_mode_defn.m"
            {
#line 229 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 229 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 229 "prog_io_mode_defn.m"
            }
#line 232 "prog_io_mode_defn.m"
            {
#line 232 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_26));
#line 232 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_io_mode_defn.m"
            }
#line 232 "prog_io_mode_defn.m"
            {
#line 232 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 232 "prog_io_mode_defn.m"
            }
#line 228 "prog_io_mode_defn.m"
          }
#line 236 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 236 "prog_io_mode_defn.m"
          {
#line 237 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 237 "prog_io_mode_defn.m"
              {
#line 237 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__InstArgVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_22, (MR_Integer) 0)));
#line 238 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeMode_24)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 238 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, (MR_Integer) 0)));
#line 237 "prog_io_mode_defn.m"
              }
#line 236 "prog_io_mode_defn.m"
          }
#line 246 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 240 "prog_io_mode_defn.m"
          {
#line 240 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_29;
#line 240 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ModeDefn_30;
#line 240 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemModeDefn_31;
#line 240 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_32;

#line 240 "prog_io_mode_defn.m"
            {
#line 240 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_29);
            }
#line 241 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ModeDefn_30 = (MR_Word) parse_tree__prog_io_mode_defn__Mode_28;
#line 242 "prog_io_mode_defn.m"
            {
#line 242 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemModeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_18));
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_27));
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeDefn_30));
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_29));
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 242 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 242 "prog_io_mode_defn.m"
            }
#line 244 "prog_io_mode_defn.m"
            {
#line 244 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 244 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemModeDefn_31));
#line 244 "prog_io_mode_defn.m"
            }
#line 245 "prog_io_mode_defn.m"
            {
#line 245 "prog_io_mode_defn.m"
              MR_Word base;
#line 245 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 245 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_32));
#line 245 "prog_io_mode_defn.m"
            }
#line 240 "prog_io_mode_defn.m"
          }
#line 246 "prog_io_mode_defn.m"
        else
#line 249 "prog_io_mode_defn.m"
          {
#line 249 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 249 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 249 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 249 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 249 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_61;

#line 248 "prog_io_mode_defn.m"
            {
#line 248 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
            }
#line 249 "prog_io_mode_defn.m"
            {
#line 249 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__prog_io_mode_defn__MaybeMode_24);
            }
#line 248 "prog_io_mode_defn.m"
            {
#line 248 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 247 "prog_io_mode_defn.m"
            {
#line 247 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66, parse_tree__prog_io_mode_defn__NameSpecs_21, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 250 "prog_io_mode_defn.m"
            {
#line 250 "prog_io_mode_defn.m"
              MR_Word base;
#line 250 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 250 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_61));
#line 250 "prog_io_mode_defn.m"
            }
#line 249 "prog_io_mode_defn.m"
          }
#line 216 "prog_io_mode_defn.m"
      }
#line 208 "prog_io_mode_defn.m"
  }
#line 34 "prog_io_mode_defn.m"
}

#line 29 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Term_9,
#line 29 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 29 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 29 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12)
#line 29 "prog_io_mode_defn.m"
{
#line 59 "prog_io_mode_defn.m"
  {
#line 59 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__HeadTerm_13;
#line 59 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__BodyTerm_14;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_23_23;
#line 55 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_24_24;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_25_25;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_26_26;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 55 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_15_15;

#line 55 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 55 "prog_io_mode_defn.m"
      {
#line 55 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 55 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 55 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 55 "prog_io_mode_defn.m"
          {
#line 55 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, (MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_24_24, (MR_String) "==") == 0);
#line 55 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 55 "prog_io_mode_defn.m"
              {
#line 55 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 55 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 55 "prog_io_mode_defn.m"
                  {
#line 55 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__HeadTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 1)));
#line 55 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 55 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 55 "prog_io_mode_defn.m"
                      {
#line 55 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__BodyTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 0)));
#line 55 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 1)));
#line 55 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "prog_io_mode_defn.m"
                      }
#line 55 "prog_io_mode_defn.m"
                  }
#line 55 "prog_io_mode_defn.m"
              }
#line 55 "prog_io_mode_defn.m"
          }
#line 55 "prog_io_mode_defn.m"
      }
#line 59 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 57 "prog_io_mode_defn.m"
      {
#line 57 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_13, parse_tree__prog_io_mode_defn__BodyTerm_14, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 57 "prog_io_mode_defn.m"
        return;
      }
#line 59 "prog_io_mode_defn.m"
    else
#line 65 "prog_io_mode_defn.m"
      {
#line 65 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_31_31;
#line 65 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTerm_74;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_28_28;
#line 60 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_29_29;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_75;

#line 60 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
          {
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
              {
#line 60 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_29_29, (MR_String) "--->") == 0);
#line 60 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
                  {
#line 60 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
                      {
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__HeadTerm_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
                          {
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__BodyTerm_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 60 "prog_io_mode_defn.m"
                          }
#line 60 "prog_io_mode_defn.m"
                      }
#line 60 "prog_io_mode_defn.m"
                  }
#line 60 "prog_io_mode_defn.m"
              }
#line 60 "prog_io_mode_defn.m"
          }
#line 65 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 62 "prog_io_mode_defn.m"
          {
#line 62 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BoundBodyTerm_17;

#line 62 "prog_io_mode_defn.m"
            {
#line 62 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BoundBodyTerm_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 62 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[0]));
#line 62 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_31_31));
#line 62 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 62 "prog_io_mode_defn.m"
            }
#line 63 "prog_io_mode_defn.m"
            {
#line 63 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_74, parse_tree__prog_io_mode_defn__BoundBodyTerm_17, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 63 "prog_io_mode_defn.m"
              return;
            }
#line 62 "prog_io_mode_defn.m"
          }
#line 65 "prog_io_mode_defn.m"
        else
#line 73 "prog_io_mode_defn.m"
          {
#line 73 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__HeadTerm_73;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Args_18;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_37_37;
#line 68 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_38_38;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_39_39;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_40_40;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_41_41;
#line 68 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_42_42;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_43_43;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_44_44;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_19_19;
#line 69 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_20_20;

#line 68 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
              {
#line 68 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 68 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                  {
#line 68 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_37_37, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_38_38, (MR_String) "is") == 0);
#line 68 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                      {
#line 69 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Args_18)) == (MR_mktag((MR_Integer) 1)));
#line 69 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 69 "prog_io_mode_defn.m"
                          {
#line 69 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__HeadTerm_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 1)));
#line 69 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 69 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 69 "prog_io_mode_defn.m"
                              {
#line 69 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 1)));
#line 69 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 68 "prog_io_mode_defn.m"
                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                                  {
#line 69 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 69 "prog_io_mode_defn.m"
                                      {
#line 69 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 1)));
#line 69 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 2)));
#line 69 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 68 "prog_io_mode_defn.m"
                                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                                          {
#line 69 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 69 "prog_io_mode_defn.m"
                                              {
#line 69 "prog_io_mode_defn.m"
                                                parse_tree__prog_io_mode_defn__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 0)));
#line 69 "prog_io_mode_defn.m"
                                                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_42_42, (MR_String) "private") == 0);
#line 69 "prog_io_mode_defn.m"
                                              }
#line 68 "prog_io_mode_defn.m"
                                          }
#line 69 "prog_io_mode_defn.m"
                                      }
#line 68 "prog_io_mode_defn.m"
                                  }
#line 69 "prog_io_mode_defn.m"
                              }
#line 69 "prog_io_mode_defn.m"
                          }
#line 68 "prog_io_mode_defn.m"
                      }
#line 68 "prog_io_mode_defn.m"
                  }
#line 68 "prog_io_mode_defn.m"
              }
#line 73 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 71 "prog_io_mode_defn.m"
              {
#line 71 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_73, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 71 "prog_io_mode_defn.m"
                return;
              }
#line 73 "prog_io_mode_defn.m"
            else
#line 75 "prog_io_mode_defn.m"
              {
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Spec_22;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_64_64;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_71_71;

#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__Term_9);
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[24])));
#line 77 "prog_io_mode_defn.m"
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_mode_defn.m"
                }
#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_64_64));
#line 76 "prog_io_mode_defn.m"
                }
#line 78 "prog_io_mode_defn.m"
                {
#line 78 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_22));
#line 78 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 78 "prog_io_mode_defn.m"
                }
#line 78 "prog_io_mode_defn.m"
                {
#line 78 "prog_io_mode_defn.m"
                  MR_Word base;
#line 78 "prog_io_mode_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 78 "prog_io_mode_defn.m"
                  *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 78 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 78 "prog_io_mode_defn.m"
                }
#line 75 "prog_io_mode_defn.m"
              }
#line 73 "prog_io_mode_defn.m"
          }
#line 65 "prog_io_mode_defn.m"
      }
#line 59 "prog_io_mode_defn.m"
  }
#line 29 "prog_io_mode_defn.m"
}

void mercury__parse_tree__prog_io_mode_defn__init(void)
{
}

void mercury__parse_tree__prog_io_mode_defn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__type_ctor_info_processed_mode_body_0);
}

void mercury__parse_tree__prog_io_mode_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_mode_defn. */
