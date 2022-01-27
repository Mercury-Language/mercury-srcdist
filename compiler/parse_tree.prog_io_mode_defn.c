/*
** Automatically generated from `prog_io_mode_defn.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 100 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 103 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 106 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 109 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 112 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 115 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3];

#line 118 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0;

#line 121 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

#line 124 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

#line 127 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1];

#line 130 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1];

#line 133 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 136 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 138 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 141 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 144 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 146 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 148 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3);

#line 327 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__327__1_2_p_0(
#line 327 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 327 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149);

#line 310 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__310__1_2_f_0(
#line 310 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 310 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143);

#line 284 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__284__1_2_f_0(
#line 284 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 284 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135);

#line 169 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 169 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3);

#line 169 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2);

#line 327 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 327 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 327 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 327 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 310 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 310 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 310 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 284 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 284 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 284 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 260 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 260 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 260 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12);

#line 131 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 131 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 131 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12);

#line 80 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 80 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 80 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14);


static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[38][2];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[38][2] = {
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
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in inst body at"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in LHS of"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free inst"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of"))
  },
  /* row 37 */
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



#line 536 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 544 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 552 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 560 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 568 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 576 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

#line 583 "parse_tree.prog_io_mode_defn.c"
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

#line 598 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 603 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

#line 612 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 617 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

#line 622 "parse_tree.prog_io_mode_defn.c"
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

#line 639 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 642 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 644 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 646 "parse_tree.prog_io_mode_defn.c"
{
#line 648 "parse_tree.prog_io_mode_defn.c"
  {
#line 650 "parse_tree.prog_io_mode_defn.c"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 653 "parse_tree.prog_io_mode_defn.c"
    {
#line 655 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2));
    }
#line 658 "parse_tree.prog_io_mode_defn.c"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 660 "parse_tree.prog_io_mode_defn.c"
  }
#line 662 "parse_tree.prog_io_mode_defn.c"
}

#line 665 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 668 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 670 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 672 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3)
#line 674 "parse_tree.prog_io_mode_defn.c"
{
#line 676 "parse_tree.prog_io_mode_defn.c"
  {
#line 678 "parse_tree.prog_io_mode_defn.c"
    MR_Word parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1;

#line 681 "parse_tree.prog_io_mode_defn.c"
    {
#line 683 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_3));
    }
#line 686 "parse_tree.prog_io_mode_defn.c"
    *parse_tree__prog_io_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1));
#line 688 "parse_tree.prog_io_mode_defn.c"
  }
#line 690 "parse_tree.prog_io_mode_defn.c"
}

#line 327 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__327__1_2_p_0(
#line 327 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 327 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149)
#line 327 "prog_io_mode_defn.m"
{
#line 327 "prog_io_mode_defn.m"
  {
#line 327 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 327 "prog_io_mode_defn.m"
    {
#line 327 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_148, parse_tree__prog_io_mode_defn__HeadVar__2_149);
#line 327 "prog_io_mode_defn.m"
      return;
    }
#line 327 "prog_io_mode_defn.m"
  }
#line 327 "prog_io_mode_defn.m"
}

#line 310 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__310__1_2_f_0(
#line 310 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 310 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143)
#line 310 "prog_io_mode_defn.m"
{
#line 310 "prog_io_mode_defn.m"
  {
#line 310 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 310 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_144;

#line 310 "prog_io_mode_defn.m"
    {
#line 310 "prog_io_mode_defn.m"
      return parse_tree__prog_io_mode_defn__HeadVar__3_144 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_143);
    }
#line 310 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_144;
#line 310 "prog_io_mode_defn.m"
  }
#line 310 "prog_io_mode_defn.m"
}

#line 284 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__284__1_2_f_0(
#line 284 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 284 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135)
#line 284 "prog_io_mode_defn.m"
{
#line 284 "prog_io_mode_defn.m"
  {
#line 284 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 284 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_136;

#line 284 "prog_io_mode_defn.m"
    {
#line 284 "prog_io_mode_defn.m"
      return parse_tree__prog_io_mode_defn__HeadVar__3_136 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_135);
    }
#line 284 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_136;
#line 284 "prog_io_mode_defn.m"
  }
#line 284 "prog_io_mode_defn.m"
}

#line 169 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 169 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3)
#line 169 "prog_io_mode_defn.m"
{
#line 169 "prog_io_mode_defn.m"
  {
#line 169 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 169 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;
#line 169 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__3_3;

#line 169 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_12 == parse_tree__prog_io_mode_defn__CastY_13);
#line 169 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 799 "parse_tree.prog_io_mode_defn.c"
      *parse_tree__prog_io_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "prog_io_mode_defn.m"
    else
#line 169 "prog_io_mode_defn.m"
      {
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_10_10;

#line 169 "prog_io_mode_defn.m"
        {
#line 169 "prog_io_mode_defn.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_mode_defn__V_10_10, parse_tree__prog_io_mode_defn__V_4_4, parse_tree__prog_io_mode_defn__V_7_7);
        }
#line 825 "parse_tree.prog_io_mode_defn.c"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_10_10 == (MR_Integer) 0);
#line 169 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 169 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 169 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_10_10;
#line 169 "prog_io_mode_defn.m"
        else
#line 169 "prog_io_mode_defn.m"
          {
#line 169 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_11_11;

#line 169 "prog_io_mode_defn.m"
            {
#line 169 "prog_io_mode_defn.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], &parse_tree__prog_io_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_8_8)));
            }
#line 845 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_11_11 == (MR_Integer) 0);
#line 169 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 169 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 169 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_11_11;
#line 169 "prog_io_mode_defn.m"
            else
#line 169 "prog_io_mode_defn.m"
              {
#line 169 "prog_io_mode_defn.m"
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_mode_defn__HeadVar__1_1, parse_tree__prog_io_mode_defn__V_6_6, parse_tree__prog_io_mode_defn__V_9_9);
#line 169 "prog_io_mode_defn.m"
                return;
              }
#line 169 "prog_io_mode_defn.m"
          }
#line 169 "prog_io_mode_defn.m"
      }
#line 169 "prog_io_mode_defn.m"
  }
#line 169 "prog_io_mode_defn.m"
}

#line 169 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 169 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2)
#line 169 "prog_io_mode_defn.m"
{
#line 169 "prog_io_mode_defn.m"
  {
#line 169 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 169 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__1_1;
#line 169 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;

#line 169 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_9 == parse_tree__prog_io_mode_defn__CastY_10);
#line 169 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 169 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = MR_TRUE;
#line 169 "prog_io_mode_defn.m"
    else
#line 169 "prog_io_mode_defn.m"
      {
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_12_12;
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

#line 914 "parse_tree.prog_io_mode_defn.c"
        {
#line 916 "parse_tree.prog_io_mode_defn.c"
          parse_tree__prog_io_mode_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_mode_defn__V_3_3, parse_tree__prog_io_mode_defn__V_6_6);
        }
#line 169 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 169 "prog_io_mode_defn.m"
          {
#line 923 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1];
#line 925 "parse_tree.prog_io_mode_defn.c"
            {
#line 927 "parse_tree.prog_io_mode_defn.c"
              parse_tree__prog_io_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_7_7)));
            }
#line 169 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 932 "parse_tree.prog_io_mode_defn.c"
              {
#line 934 "parse_tree.prog_io_mode_defn.c"
                return parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_mode_defn__V_5_5, parse_tree__prog_io_mode_defn__V_8_8);
              }
#line 169 "prog_io_mode_defn.m"
          }
#line 169 "prog_io_mode_defn.m"
      }
#line 169 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 169 "prog_io_mode_defn.m"
  }
#line 169 "prog_io_mode_defn.m"
}

#line 327 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 327 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 327 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 327 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 327 "prog_io_mode_defn.m"
{
#line 327 "prog_io_mode_defn.m"
  {
#line 327 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 327 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149;

#line 327 "prog_io_mode_defn.m"
    {
#line 327 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__327__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149);
    }
#line 327 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149));
#line 327 "prog_io_mode_defn.m"
  }
#line 327 "prog_io_mode_defn.m"
}

#line 310 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 310 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 310 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 310 "prog_io_mode_defn.m"
{
#line 310 "prog_io_mode_defn.m"
  {
#line 310 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 310 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 310 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144;

#line 310 "prog_io_mode_defn.m"
    {
#line 310 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__310__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 310 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144));
#line 310 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 310 "prog_io_mode_defn.m"
  }
#line 310 "prog_io_mode_defn.m"
}

#line 284 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 284 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 284 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 284 "prog_io_mode_defn.m"
{
#line 284 "prog_io_mode_defn.m"
  {
#line 284 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 284 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 284 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136;

#line 284 "prog_io_mode_defn.m"
    {
#line 284 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__284__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 284 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136));
#line 284 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 284 "prog_io_mode_defn.m"
  }
#line 284 "prog_io_mode_defn.m"
}

#line 260 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 260 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 260 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 260 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12)
#line 260 "prog_io_mode_defn.m"
{
#line 334 "prog_io_mode_defn.m"
  {
#line 334 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 334 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ArgVars_13;

#line 266 "prog_io_mode_defn.m"
    {
#line 266 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__ArgTerms_10, &parse_tree__prog_io_mode_defn__ArgVars_13);
    }
#line 334 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 268 "prog_io_mode_defn.m"
      {
#line 268 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81;
#line 293 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__DupArgVars_19;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_132_132;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsBag_18;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_15_15;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;
#line 274 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_17_17;
#line 277 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_20_20;
#line 277 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_21_21;
#line 1097 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_27;
#line 1099 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__FreeVars_34;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_140_140;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVars_28;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVarsSet_31;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsSet_32;
#line 300 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__FreeVarsSet_33;
#line 302 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 302 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 307 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_35_35;
#line 307 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_36_36;

#line 274 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
#line 274 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 274 "prog_io_mode_defn.m"
          {
#line 274 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 0)));
#line 274 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 1)));
#line 274 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 274 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 274 "prog_io_mode_defn.m"
              {
#line 274 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 0)));
#line 274 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 1)));
#line 1142 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_132_132 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 275 "prog_io_mode_defn.m"
                {
#line 275 "prog_io_mode_defn.m"
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsBag_18);
                }
#line 276 "prog_io_mode_defn.m"
                {
#line 276 "prog_io_mode_defn.m"
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVarsBag_18, &parse_tree__prog_io_mode_defn__DupArgVars_19);
                }
#line 277 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__DupArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 277 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 277 "prog_io_mode_defn.m"
                  {
#line 277 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 0)));
#line 277 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 1)));
#line 277 "prog_io_mode_defn.m"
                  }
#line 274 "prog_io_mode_defn.m"
              }
#line 274 "prog_io_mode_defn.m"
          }
#line 293 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 280 "prog_io_mode_defn.m"
          {
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_133_133 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138;
#line 280 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__ParamWord_22;
#line 280 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__IsAreWord_23;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__DupVarNames_24;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatPieces_25;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatSpec_26;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_55_55;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_62_62;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_75_75;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_76_76;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_77_77;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 279 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv0_ParamWord_22;
#line 281 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv1_IsAreWord_23;

#line 279 "prog_io_mode_defn.m"
            {
#line 279 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 279 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ParamWord_22 = ((MR_String) parse_tree__prog_io_mode_defn__conv0_ParamWord_22);
#line 281 "prog_io_mode_defn.m"
            {
#line 281 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
            }
#line 281 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__IsAreWord_23 = ((MR_String) parse_tree__prog_io_mode_defn__conv1_IsAreWord_23);
#line 284 "prog_io_mode_defn.m"
            {
#line 284 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1));
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 284 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 284 "prog_io_mode_defn.m"
            }
#line 284 "prog_io_mode_defn.m"
            {
#line 284 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__DupVarNames_24 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__V_51_51, parse_tree__prog_io_mode_defn__DupArgVars_19);
            }
#line 1258 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ParamWord_22));
#line 285 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "prog_io_mode_defn.m"
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[33])));
#line 285 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 285 "prog_io_mode_defn.m"
            }
#line 286 "prog_io_mode_defn.m"
            {
#line 286 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__DupVarNames_24);
            }
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__IsAreWord_23));
#line 287 "prog_io_mode_defn.m"
            }
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 287 "prog_io_mode_defn.m"
            }
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 287 "prog_io_mode_defn.m"
            }
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[34])));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 287 "prog_io_mode_defn.m"
            }
#line 287 "prog_io_mode_defn.m"
            {
#line 287 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 287 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_62_62));
#line 287 "prog_io_mode_defn.m"
            }
#line 286 "prog_io_mode_defn.m"
            {
#line 286 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 285 "prog_io_mode_defn.m"
            {
#line 285 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatPieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_52_52, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 291 "prog_io_mode_defn.m"
            {
#line 291 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatPieces_25));
#line 291 "prog_io_mode_defn.m"
            }
#line 291 "prog_io_mode_defn.m"
            {
#line 291 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_mode_defn.m"
            }
#line 291 "prog_io_mode_defn.m"
            {
#line 291 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_77_77));
#line 291 "prog_io_mode_defn.m"
            }
#line 291 "prog_io_mode_defn.m"
            {
#line 291 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_76_76));
#line 291 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_mode_defn.m"
            }
#line 289 "prog_io_mode_defn.m"
            {
#line 289 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 289 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_75_75));
#line 289 "prog_io_mode_defn.m"
            }
#line 292 "prog_io_mode_defn.m"
            {
#line 292 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatSpec_26));
#line 292 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45));
#line 292 "prog_io_mode_defn.m"
            }
#line 280 "prog_io_mode_defn.m"
          }
#line 293 "prog_io_mode_defn.m"
        else
#line 293 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45;
#line 300 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeBodyTerm_11)) == (MR_mktag((MR_Integer) 1)));
#line 300 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 300 "prog_io_mode_defn.m"
          {
#line 300 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__BodyTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeBodyTerm_11, (MR_Integer) 0)));
#line 1429 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 301 "prog_io_mode_defn.m"
            {
#line 301 "prog_io_mode_defn.m"
              mercury__term__vars_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139, parse_tree__prog_io_mode_defn__BodyTerm_27, &parse_tree__prog_io_mode_defn__BodyVars_28);
            }
#line 302 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__BodyVars_28)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 302 "prog_io_mode_defn.m"
              {
#line 302 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 0)));
#line 302 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 1)));
#line 1446 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_140_140 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 303 "prog_io_mode_defn.m"
                {
#line 303 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVars_28, &parse_tree__prog_io_mode_defn__BodyVarsSet_31);
                }
#line 304 "prog_io_mode_defn.m"
                {
#line 304 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsSet_32);
                }
#line 305 "prog_io_mode_defn.m"
                {
#line 305 "prog_io_mode_defn.m"
                  mercury__set__difference_3_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVarsSet_31, parse_tree__prog_io_mode_defn__ArgVarsSet_32, &parse_tree__prog_io_mode_defn__FreeVarsSet_33);
                }
#line 306 "prog_io_mode_defn.m"
                {
#line 306 "prog_io_mode_defn.m"
                  mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__FreeVarsSet_33, &parse_tree__prog_io_mode_defn__FreeVars_34);
                }
#line 307 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__FreeVars_34)) == (MR_mktag((MR_Integer) 1)));
#line 307 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 307 "prog_io_mode_defn.m"
                  {
#line 307 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 0)));
#line 307 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 1)));
#line 307 "prog_io_mode_defn.m"
                  }
#line 302 "prog_io_mode_defn.m"
              }
#line 300 "prog_io_mode_defn.m"
          }
#line 1484 "parse_tree.prog_io_mode_defn.c"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 1486 "parse_tree.prog_io_mode_defn.c"
          {
#line 1488 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_141_141 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 1490 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1492 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146;
#line 1494 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeVarNames_37;
#line 1496 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreePieces_38;
#line 1498 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeSpec_39;
#line 1500 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_82_82;
#line 1502 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_83_83;
#line 1504 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_86_86;
#line 1506 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 1508 "parse_tree.prog_io_mode_defn.c"
            MR_String parse_tree__prog_io_mode_defn__V_88_88;
#line 1510 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_92_92;
#line 1512 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 1514 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 1516 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_97_97;
#line 1518 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_98_98;
#line 1520 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_107_107;
#line 1522 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_108_108;
#line 1524 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_109_109;
#line 1526 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_110_110;
#line 1528 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_111_111;
#line 1530 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114;
#line 312 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv4_V_88_88;

#line 310 "prog_io_mode_defn.m"
            {
#line 310 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 310 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2));
#line 310 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 310 "prog_io_mode_defn.m"
            }
#line 310 "prog_io_mode_defn.m"
            {
#line 310 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeVarNames_37 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__V_82_82, parse_tree__prog_io_mode_defn__FreeVars_34);
            }
#line 1554 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 312 "prog_io_mode_defn.m"
            {
#line 312 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv4_V_88_88 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 312 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_88_88 = ((MR_String) parse_tree__prog_io_mode_defn__conv4_V_88_88);
#line 312 "prog_io_mode_defn.m"
            {
#line 312 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 312 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 312 "prog_io_mode_defn.m"
            }
#line 313 "prog_io_mode_defn.m"
            {
#line 313 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 313 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_mode_defn.m"
            }
#line 311 "prog_io_mode_defn.m"
            {
#line 311 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[35])));
#line 311 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_86_86));
#line 311 "prog_io_mode_defn.m"
            }
#line 314 "prog_io_mode_defn.m"
            {
#line 314 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__FreeVarNames_37);
            }
#line 315 "prog_io_mode_defn.m"
            {
#line 315 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 315 "prog_io_mode_defn.m"
            }
#line 315 "prog_io_mode_defn.m"
            {
#line 315 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_98_98));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 315 "prog_io_mode_defn.m"
            }
#line 315 "prog_io_mode_defn.m"
            {
#line 315 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[36])));
#line 315 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_97_97));
#line 315 "prog_io_mode_defn.m"
            }
#line 314 "prog_io_mode_defn.m"
            {
#line 314 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_93_93, parse_tree__prog_io_mode_defn__V_94_94);
            }
#line 313 "prog_io_mode_defn.m"
            {
#line 313 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreePieces_38 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_83_83, parse_tree__prog_io_mode_defn__V_92_92);
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_109_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__BodyTerm_27);
            }
#line 319 "prog_io_mode_defn.m"
            {
#line 319 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreePieces_38));
#line 319 "prog_io_mode_defn.m"
            }
#line 319 "prog_io_mode_defn.m"
            {
#line 319 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_111_111));
#line 319 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_mode_defn.m"
            }
#line 318 "prog_io_mode_defn.m"
            {
#line 318 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_109_109));
#line 318 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_110_110));
#line 318 "prog_io_mode_defn.m"
            }
#line 319 "prog_io_mode_defn.m"
            {
#line 319 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_108_108));
#line 319 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_mode_defn.m"
            }
#line 316 "prog_io_mode_defn.m"
            {
#line 316 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 316 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_107_107));
#line 316 "prog_io_mode_defn.m"
            }
#line 320 "prog_io_mode_defn.m"
            {
#line 320 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreeSpec_39));
#line 320 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 320 "prog_io_mode_defn.m"
            }
#line 331 "prog_io_mode_defn.m"
            {
#line 331 "prog_io_mode_defn.m"
              MR_Word base;
#line 331 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114));
#line 331 "prog_io_mode_defn.m"
            }
#line 1715 "parse_tree.prog_io_mode_defn.c"
          }
#line 1717 "parse_tree.prog_io_mode_defn.c"
        else
#line 329 "prog_io_mode_defn.m"
        if ((parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "prog_io_mode_defn.m"
          {
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstArgVars_40;

#line 327 "prog_io_mode_defn.m"
            {
#line 327 "prog_io_mode_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_5[0], parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__InstArgVars_40);
            }
#line 328 "prog_io_mode_defn.m"
            {
#line 328 "prog_io_mode_defn.m"
              MR_Word base;
#line 328 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 328 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_40));
#line 328 "prog_io_mode_defn.m"
            }
#line 326 "prog_io_mode_defn.m"
          }
#line 329 "prog_io_mode_defn.m"
        else
#line 331 "prog_io_mode_defn.m"
          {
#line 331 "prog_io_mode_defn.m"
            MR_Word base;
#line 331 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 331 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 331 "prog_io_mode_defn.m"
          }
#line 268 "prog_io_mode_defn.m"
      }
#line 334 "prog_io_mode_defn.m"
    else
#line 337 "prog_io_mode_defn.m"
      {
#line 337 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__VarSpec_44;
#line 337 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_123_123;
#line 337 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_124_124;
#line 337 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_129_129;

#line 339 "prog_io_mode_defn.m"
        {
#line 339 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 339 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[37])));
#line 339 "prog_io_mode_defn.m"
        }
#line 339 "prog_io_mode_defn.m"
        {
#line 339 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_124_124));
#line 339 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_io_mode_defn.m"
        }
#line 338 "prog_io_mode_defn.m"
        {
#line 338 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__VarSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 338 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 338 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_123_123));
#line 338 "prog_io_mode_defn.m"
        }
#line 340 "prog_io_mode_defn.m"
        {
#line 340 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSpec_44));
#line 340 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "prog_io_mode_defn.m"
        }
#line 340 "prog_io_mode_defn.m"
        {
#line 340 "prog_io_mode_defn.m"
          MR_Word base;
#line 340 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 340 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 340 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_129_129));
#line 340 "prog_io_mode_defn.m"
        }
#line 337 "prog_io_mode_defn.m"
      }
#line 334 "prog_io_mode_defn.m"
  }
#line 260 "prog_io_mode_defn.m"
}

#line 131 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 131 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 131 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 131 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_12)
#line 131 "prog_io_mode_defn.m"
{
#line 135 "prog_io_mode_defn.m"
  {
#line 135 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 135 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 135 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14;

#line 137 "prog_io_mode_defn.m"
    {
#line 137 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_35_35, parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__HeadTerm_9, parse_tree__prog_io_mode_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30]), &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14);
    }
#line 142 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
#line 140 "prog_io_mode_defn.m"
      {
#line 140 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));

#line 141 "prog_io_mode_defn.m"
        {
#line 141 "prog_io_mode_defn.m"
          MR_Word base;
#line 141 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 141 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_15));
#line 141 "prog_io_mode_defn.m"
        }
#line 140 "prog_io_mode_defn.m"
      }
#line 142 "prog_io_mode_defn.m"
    else
#line 143 "prog_io_mode_defn.m"
      {
#line 143 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));
#line 143 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 1)));
#line 143 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_18;
#line 143 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_19;
#line 143 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_20;
#line 143 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_42;
#line 160 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_21;

#line 145 "prog_io_mode_defn.m"
        {
#line 145 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_18 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_35_35, parse_tree__prog_io_mode_defn__HeadTerm_9);
        }
#line 231 "prog_io_mode_defn.m"
        {
#line 231 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_42 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_16);
        }
#line 232 "prog_io_mode_defn.m"
        {
#line 232 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_42);
        }
#line 238 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 234 "prog_io_mode_defn.m"
          {
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_43;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_44;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_47_47;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_57_57;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;

#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_42));
#line 233 "prog_io_mode_defn.m"
            }
#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_48_48));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 233 "prog_io_mode_defn.m"
            }
#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[31])));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_43, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_47_47));
#line 233 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_43));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_18));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_58_58));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_mode_defn.m"
            }
#line 235 "prog_io_mode_defn.m"
            {
#line 235 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_57_57));
#line 235 "prog_io_mode_defn.m"
            }
#line 237 "prog_io_mode_defn.m"
            {
#line 237 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_44));
#line 237 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_mode_defn.m"
            }
#line 234 "prog_io_mode_defn.m"
          }
#line 238 "prog_io_mode_defn.m"
        else
#line 239 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 147 "prog_io_mode_defn.m"
        {
#line 147 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTermContext_18, parse_tree__prog_io_mode_defn__ArgTerms_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
        }
#line 151 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 151 "prog_io_mode_defn.m"
          {
#line 152 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 152 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 152 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_20, (MR_Integer) 0)));
#line 151 "prog_io_mode_defn.m"
          }
#line 160 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 154 "prog_io_mode_defn.m"
          {
#line 154 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_22;
#line 154 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_24;
#line 154 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_25;

#line 154 "prog_io_mode_defn.m"
            {
#line 154 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_35_35, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_8, &parse_tree__prog_io_mode_defn__InstVarSet_22);
            }
#line 156 "prog_io_mode_defn.m"
            {
#line 156 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_16));
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_21));
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_22));
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 156 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_24, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_11));
#line 156 "prog_io_mode_defn.m"
            }
#line 158 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_25 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_24);
#line 159 "prog_io_mode_defn.m"
            {
#line 159 "prog_io_mode_defn.m"
              MR_Word base;
#line 159 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 159 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_25));
#line 159 "prog_io_mode_defn.m"
            }
#line 154 "prog_io_mode_defn.m"
          }
#line 160 "prog_io_mode_defn.m"
        else
#line 162 "prog_io_mode_defn.m"
          {
#line 162 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_31_31;
#line 162 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_32;

#line 162 "prog_io_mode_defn.m"
            {
#line 162 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_31_31 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
            }
#line 161 "prog_io_mode_defn.m"
            {
#line 161 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_mode_defn__NameSpecs_19, parse_tree__prog_io_mode_defn__V_31_31);
            }
#line 163 "prog_io_mode_defn.m"
            {
#line 163 "prog_io_mode_defn.m"
              MR_Word base;
#line 163 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 163 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 163 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_32));
#line 163 "prog_io_mode_defn.m"
            }
#line 162 "prog_io_mode_defn.m"
          }
#line 143 "prog_io_mode_defn.m"
      }
#line 135 "prog_io_mode_defn.m"
  }
#line 131 "prog_io_mode_defn.m"
}

#line 80 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 80 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 80 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 80 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeItem_14)
#line 80 "prog_io_mode_defn.m"
{
#line 84 "prog_io_mode_defn.m"
  {
#line 84 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 84 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 84 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16;

#line 86 "prog_io_mode_defn.m"
    {
#line 86 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30]), &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16);
    }
#line 91 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 89 "prog_io_mode_defn.m"
      {
#line 89 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));

#line 90 "prog_io_mode_defn.m"
        {
#line 90 "prog_io_mode_defn.m"
          MR_Word base;
#line 90 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 90 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 90 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 90 "prog_io_mode_defn.m"
        }
#line 89 "prog_io_mode_defn.m"
      }
#line 91 "prog_io_mode_defn.m"
    else
#line 92 "prog_io_mode_defn.m"
      {
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 1)));
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_20;
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_21;
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_22;
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInst_24;
#line 92 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_38_38;
#line 92 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_75;
#line 101 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst0_23;
#line 123 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_28;
#line 123 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst_29;

#line 94 "prog_io_mode_defn.m"
        {
#line 94 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_20 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 231 "prog_io_mode_defn.m"
        {
#line 231 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_75 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_18);
        }
#line 232 "prog_io_mode_defn.m"
        {
#line 232 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_75);
        }
#line 238 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 234 "prog_io_mode_defn.m"
          {
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_76;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_77;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_80_80;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_81_81;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_90_90;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_91_91;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_92_92;
#line 234 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;

#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_75));
#line 233 "prog_io_mode_defn.m"
            }
#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_81_81));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 233 "prog_io_mode_defn.m"
            }
#line 233 "prog_io_mode_defn.m"
            {
#line 233 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[31])));
#line 233 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_76, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_80_80));
#line 233 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_76));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_93_93));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_20));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_92_92));
#line 236 "prog_io_mode_defn.m"
            }
#line 236 "prog_io_mode_defn.m"
            {
#line 236 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_91_91));
#line 236 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_mode_defn.m"
            }
#line 235 "prog_io_mode_defn.m"
            {
#line 235 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 235 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_77, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 235 "prog_io_mode_defn.m"
            }
#line 237 "prog_io_mode_defn.m"
            {
#line 237 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_77));
#line 237 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_mode_defn.m"
            }
#line 234 "prog_io_mode_defn.m"
          }
#line 238 "prog_io_mode_defn.m"
        else
#line 239 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 97 "prog_io_mode_defn.m"
        {
#line 97 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 97 "prog_io_mode_defn.m"
        }
#line 96 "prog_io_mode_defn.m"
        {
#line 96 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_20, parse_tree__prog_io_mode_defn__ArgTerms_19, parse_tree__prog_io_mode_defn__V_38_38, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
        }
#line 99 "prog_io_mode_defn.m"
        {
#line 99 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Inst0_23);
        }
#line 101 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 100 "prog_io_mode_defn.m"
          {
#line 100 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeInst_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 100 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst0_23));
#line 100 "prog_io_mode_defn.m"
          }
#line 101 "prog_io_mode_defn.m"
        else
#line 103 "prog_io_mode_defn.m"
          {
#line 103 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__BodyTermStr_25;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyPieces_26;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_27;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_42_42;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_43_43;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_53_53;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_54_54;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_55_55;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;
#line 103 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;

#line 103 "prog_io_mode_defn.m"
            {
#line 103 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyTermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 105 "prog_io_mode_defn.m"
            {
#line 105 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTermStr_25));
#line 105 "prog_io_mode_defn.m"
            }
#line 105 "prog_io_mode_defn.m"
            {
#line 105 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_43_43));
#line 105 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])));
#line 105 "prog_io_mode_defn.m"
            }
#line 104 "prog_io_mode_defn.m"
            {
#line 104 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[32])));
#line 104 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_26, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_42_42));
#line 104 "prog_io_mode_defn.m"
            }
#line 107 "prog_io_mode_defn.m"
            {
#line 107 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_54_54 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 108 "prog_io_mode_defn.m"
            {
#line 108 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 108 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyPieces_26));
#line 108 "prog_io_mode_defn.m"
            }
#line 108 "prog_io_mode_defn.m"
            {
#line 108 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 108 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_io_mode_defn.m"
            }
#line 107 "prog_io_mode_defn.m"
            {
#line 107 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_54_54));
#line 107 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 107 "prog_io_mode_defn.m"
            }
#line 108 "prog_io_mode_defn.m"
            {
#line 108 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_53_53));
#line 108 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_io_mode_defn.m"
            }
#line 106 "prog_io_mode_defn.m"
            {
#line 106 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 106 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_27, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_52_52));
#line 106 "prog_io_mode_defn.m"
            }
#line 109 "prog_io_mode_defn.m"
            {
#line 109 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_27));
#line 109 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "prog_io_mode_defn.m"
            }
#line 109 "prog_io_mode_defn.m"
            {
#line 109 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 109 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeInst_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 109 "prog_io_mode_defn.m"
            }
#line 103 "prog_io_mode_defn.m"
          }
#line 113 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 113 "prog_io_mode_defn.m"
          {
#line 114 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
#line 114 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 114 "prog_io_mode_defn.m"
              {
#line 114 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__InstArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_22, (MR_Integer) 0)));
#line 115 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInst_24)) == (MR_mktag((MR_Integer) 1)));
#line 115 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 115 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_24, (MR_Integer) 0)));
#line 114 "prog_io_mode_defn.m"
              }
#line 113 "prog_io_mode_defn.m"
          }
#line 123 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 117 "prog_io_mode_defn.m"
          {
#line 117 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_30;
#line 117 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstDefn_31;
#line 117 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_32;
#line 117 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_33;

#line 117 "prog_io_mode_defn.m"
            {
#line 117 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_30);
            }
#line 118 "prog_io_mode_defn.m"
            {
#line 118 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstDefn_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 118 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__InstDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst_29));
#line 118 "prog_io_mode_defn.m"
            }
#line 119 "prog_io_mode_defn.m"
            {
#line 119 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_18));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_28));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstDefn_31));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_30));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_32, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 119 "prog_io_mode_defn.m"
            }
#line 121 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_33 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_32);
#line 122 "prog_io_mode_defn.m"
            {
#line 122 "prog_io_mode_defn.m"
              MR_Word base;
#line 122 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_33));
#line 122 "prog_io_mode_defn.m"
            }
#line 117 "prog_io_mode_defn.m"
          }
#line 123 "prog_io_mode_defn.m"
        else
#line 126 "prog_io_mode_defn.m"
          {
#line 126 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 126 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 126 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_62_62;
#line 126 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_63_63;
#line 126 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_64;

#line 125 "prog_io_mode_defn.m"
            {
#line 125 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_62_62 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
            }
#line 126 "prog_io_mode_defn.m"
            {
#line 126 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_63_63 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mode_defn__MaybeInst_24);
            }
#line 125 "prog_io_mode_defn.m"
            {
#line 125 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_69_69, parse_tree__prog_io_mode_defn__V_62_62, parse_tree__prog_io_mode_defn__V_63_63);
            }
#line 124 "prog_io_mode_defn.m"
            {
#line 124 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_64 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_69_69, parse_tree__prog_io_mode_defn__NameSpecs_21, parse_tree__prog_io_mode_defn__V_61_61);
            }
#line 127 "prog_io_mode_defn.m"
            {
#line 127 "prog_io_mode_defn.m"
              MR_Word base;
#line 127 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 127 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 127 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_64));
#line 127 "prog_io_mode_defn.m"
            }
#line 126 "prog_io_mode_defn.m"
          }
#line 92 "prog_io_mode_defn.m"
      }
#line 84 "prog_io_mode_defn.m"
  }
#line 80 "prog_io_mode_defn.m"
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
#line 177 "prog_io_mode_defn.m"
  {
#line 177 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 177 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 177 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16;

#line 179 "prog_io_mode_defn.m"
    {
#line 179 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[26]), &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16);
    }
#line 184 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 182 "prog_io_mode_defn.m"
      {
#line 182 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));

#line 183 "prog_io_mode_defn.m"
        {
#line 183 "prog_io_mode_defn.m"
          MR_Word base;
#line 183 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 183 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 183 "prog_io_mode_defn.m"
        }
#line 182 "prog_io_mode_defn.m"
      }
#line 184 "prog_io_mode_defn.m"
    else
#line 185 "prog_io_mode_defn.m"
      {
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 1)));
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_20;
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_21;
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_22;
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeMode_24;
#line 185 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_37_37;
#line 185 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_72;
#line 194 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode0_23;
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_27;
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode_28;

#line 187 "prog_io_mode_defn.m"
        {
#line 187 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_20 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 249 "prog_io_mode_defn.m"
        {
#line 249 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_72 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_18);
        }
#line 250 "prog_io_mode_defn.m"
        {
#line 250 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_mode_name_1_p_0(parse_tree__prog_io_mode_defn__Name_72);
        }
#line 256 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 252 "prog_io_mode_defn.m"
          {
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_73;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_74;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_77_77;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 252 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_90_90;

#line 251 "prog_io_mode_defn.m"
            {
#line 251 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_72));
#line 251 "prog_io_mode_defn.m"
            }
#line 251 "prog_io_mode_defn.m"
            {
#line 251 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[21])));
#line 251 "prog_io_mode_defn.m"
            }
#line 251 "prog_io_mode_defn.m"
            {
#line 251 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[27])));
#line 251 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_73, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_77_77));
#line 251 "prog_io_mode_defn.m"
            }
#line 254 "prog_io_mode_defn.m"
            {
#line 254 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_73));
#line 254 "prog_io_mode_defn.m"
            }
#line 254 "prog_io_mode_defn.m"
            {
#line 254 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_mode_defn.m"
            }
#line 254 "prog_io_mode_defn.m"
            {
#line 254 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_20));
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 254 "prog_io_mode_defn.m"
            }
#line 254 "prog_io_mode_defn.m"
            {
#line 254 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 254 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_mode_defn.m"
            }
#line 253 "prog_io_mode_defn.m"
            {
#line 253 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 253 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_74, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 253 "prog_io_mode_defn.m"
            }
#line 255 "prog_io_mode_defn.m"
            {
#line 255 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_74));
#line 255 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io_mode_defn.m"
            }
#line 252 "prog_io_mode_defn.m"
          }
#line 256 "prog_io_mode_defn.m"
        else
#line 257 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "prog_io_mode_defn.m"
        {
#line 190 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 190 "prog_io_mode_defn.m"
        }
#line 189 "prog_io_mode_defn.m"
        {
#line 189 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_20, parse_tree__prog_io_mode_defn__ArgTerms_19, parse_tree__prog_io_mode_defn__V_37_37, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
        }
#line 192 "prog_io_mode_defn.m"
        {
#line 192 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Mode0_23);
        }
#line 194 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 193 "prog_io_mode_defn.m"
          {
#line 193 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Mode0_23));
#line 193 "prog_io_mode_defn.m"
          }
#line 194 "prog_io_mode_defn.m"
        else
#line 197 "prog_io_mode_defn.m"
          {
#line 197 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_26;
#line 197 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 197 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 197 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 197 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;

#line 199 "prog_io_mode_defn.m"
            {
#line 199 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_51_51 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 199 "prog_io_mode_defn.m"
            {
#line 199 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_51_51));
#line 199 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 199 "prog_io_mode_defn.m"
            }
#line 200 "prog_io_mode_defn.m"
            {
#line 200 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 200 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_mode_defn.m"
            }
#line 198 "prog_io_mode_defn.m"
            {
#line 198 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 198 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 198 "prog_io_mode_defn.m"
            }
#line 201 "prog_io_mode_defn.m"
            {
#line 201 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_26));
#line 201 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_mode_defn.m"
            }
#line 201 "prog_io_mode_defn.m"
            {
#line 201 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 201 "prog_io_mode_defn.m"
            }
#line 197 "prog_io_mode_defn.m"
          }
#line 205 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 205 "prog_io_mode_defn.m"
          {
#line 206 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
#line 206 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 206 "prog_io_mode_defn.m"
              {
#line 206 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__InstArgVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_22, (MR_Integer) 0)));
#line 207 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeMode_24)) == (MR_mktag((MR_Integer) 1)));
#line 207 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 207 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, (MR_Integer) 0)));
#line 206 "prog_io_mode_defn.m"
              }
#line 205 "prog_io_mode_defn.m"
          }
#line 215 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 209 "prog_io_mode_defn.m"
          {
#line 209 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_29;
#line 209 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ModeDefn_30;
#line 209 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemModeDefn_31;
#line 209 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_32;

#line 209 "prog_io_mode_defn.m"
            {
#line 209 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_29);
            }
#line 210 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ModeDefn_30 = (MR_Word) parse_tree__prog_io_mode_defn__Mode_28;
#line 211 "prog_io_mode_defn.m"
            {
#line 211 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemModeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_18));
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_27));
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeDefn_30));
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_29));
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 211 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 211 "prog_io_mode_defn.m"
            }
#line 213 "prog_io_mode_defn.m"
            {
#line 213 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 213 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemModeDefn_31));
#line 213 "prog_io_mode_defn.m"
            }
#line 214 "prog_io_mode_defn.m"
            {
#line 214 "prog_io_mode_defn.m"
              MR_Word base;
#line 214 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 214 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_32));
#line 214 "prog_io_mode_defn.m"
            }
#line 209 "prog_io_mode_defn.m"
          }
#line 215 "prog_io_mode_defn.m"
        else
#line 218 "prog_io_mode_defn.m"
          {
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 218 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_61;

#line 217 "prog_io_mode_defn.m"
            {
#line 217 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
            }
#line 218 "prog_io_mode_defn.m"
            {
#line 218 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__prog_io_mode_defn__MaybeMode_24);
            }
#line 217 "prog_io_mode_defn.m"
            {
#line 217 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 216 "prog_io_mode_defn.m"
            {
#line 216 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_66_66, parse_tree__prog_io_mode_defn__NameSpecs_21, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 219 "prog_io_mode_defn.m"
            {
#line 219 "prog_io_mode_defn.m"
              MR_Word base;
#line 219 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeItem_14 = base;
#line 219 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_61));
#line 219 "prog_io_mode_defn.m"
            }
#line 218 "prog_io_mode_defn.m"
          }
#line 185 "prog_io_mode_defn.m"
      }
#line 177 "prog_io_mode_defn.m"
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
#line 58 "prog_io_mode_defn.m"
  {
#line 58 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 58 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__HeadTerm_13;
#line 58 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__BodyTerm_14;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_23_23;
#line 54 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_24_24;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_25_25;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_26_26;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 54 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_15_15;

#line 54 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 54 "prog_io_mode_defn.m"
      {
#line 54 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 54 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 54 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 54 "prog_io_mode_defn.m"
          {
#line 54 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, (MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_24_24, (MR_String) "==") == 0);
#line 54 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 54 "prog_io_mode_defn.m"
              {
#line 54 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 54 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 54 "prog_io_mode_defn.m"
                  {
#line 54 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__HeadTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 1)));
#line 54 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 54 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 54 "prog_io_mode_defn.m"
                      {
#line 54 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__BodyTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 0)));
#line 54 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_26_26, (MR_Integer) 1)));
#line 54 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 54 "prog_io_mode_defn.m"
                      }
#line 54 "prog_io_mode_defn.m"
                  }
#line 54 "prog_io_mode_defn.m"
              }
#line 54 "prog_io_mode_defn.m"
          }
#line 54 "prog_io_mode_defn.m"
      }
#line 58 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 56 "prog_io_mode_defn.m"
      {
#line 56 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_13, parse_tree__prog_io_mode_defn__BodyTerm_14, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 56 "prog_io_mode_defn.m"
        return;
      }
#line 58 "prog_io_mode_defn.m"
    else
#line 64 "prog_io_mode_defn.m"
      {
#line 64 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_31_31;
#line 64 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTerm_74;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_28_28;
#line 59 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_29_29;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_75;

#line 59 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
          {
#line 59 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 59 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
              {
#line 59 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_29_29, (MR_String) "--->") == 0);
#line 59 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                  {
#line 59 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                      {
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__HeadTerm_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                          {
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__BodyTerm_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 0)));
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_31_31, (MR_Integer) 1)));
#line 59 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 59 "prog_io_mode_defn.m"
                          }
#line 59 "prog_io_mode_defn.m"
                      }
#line 59 "prog_io_mode_defn.m"
                  }
#line 59 "prog_io_mode_defn.m"
              }
#line 59 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 61 "prog_io_mode_defn.m"
          {
#line 61 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BoundBodyTerm_17;

#line 61 "prog_io_mode_defn.m"
            {
#line 61 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BoundBodyTerm_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 61 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[0]));
#line 61 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_31_31));
#line 61 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_17, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 61 "prog_io_mode_defn.m"
            }
#line 62 "prog_io_mode_defn.m"
            {
#line 62 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__parse_inst_defn_base_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_74, parse_tree__prog_io_mode_defn__BoundBodyTerm_17, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 62 "prog_io_mode_defn.m"
              return;
            }
#line 61 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
        else
#line 72 "prog_io_mode_defn.m"
          {
#line 72 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__HeadTerm_73;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Args_18;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_37_37;
#line 67 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_38_38;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_39_39;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_40_40;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_41_41;
#line 67 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_42_42;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_43_43;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_44_44;
#line 67 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_19_19;
#line 68 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_20_20;

#line 67 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 67 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
              {
#line 67 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 0)));
#line 67 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 1)));
#line 67 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Term_9, (MR_Integer) 2)));
#line 67 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 67 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
                  {
#line 67 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_37_37, (MR_Integer) 0)));
#line 67 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_38_38, (MR_String) "is") == 0);
#line 67 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
                      {
#line 68 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Args_18)) == (MR_mktag((MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                          {
#line 68 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__HeadTerm_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_18, (MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                              {
#line 68 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 67 "prog_io_mode_defn.m"
                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
                                  {
#line 68 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                                      {
#line 68 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 1)));
#line 68 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_40_40, (MR_Integer) 2)));
#line 68 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 67 "prog_io_mode_defn.m"
                                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 67 "prog_io_mode_defn.m"
                                          {
#line 68 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 68 "prog_io_mode_defn.m"
                                              {
#line 68 "prog_io_mode_defn.m"
                                                parse_tree__prog_io_mode_defn__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 0)));
#line 68 "prog_io_mode_defn.m"
                                                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_42_42, (MR_String) "private") == 0);
#line 68 "prog_io_mode_defn.m"
                                              }
#line 67 "prog_io_mode_defn.m"
                                          }
#line 68 "prog_io_mode_defn.m"
                                      }
#line 67 "prog_io_mode_defn.m"
                                  }
#line 68 "prog_io_mode_defn.m"
                              }
#line 68 "prog_io_mode_defn.m"
                          }
#line 67 "prog_io_mode_defn.m"
                      }
#line 67 "prog_io_mode_defn.m"
                  }
#line 67 "prog_io_mode_defn.m"
              }
#line 72 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 70 "prog_io_mode_defn.m"
              {
#line 70 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_73, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeItem_12);
#line 70 "prog_io_mode_defn.m"
                return;
              }
#line 72 "prog_io_mode_defn.m"
            else
#line 74 "prog_io_mode_defn.m"
              {
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Spec_22;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_64_64;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 74 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_71_71;

#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__Term_9);
                }
#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[24])));
#line 76 "prog_io_mode_defn.m"
                }
#line 76 "prog_io_mode_defn.m"
                {
#line 76 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 76 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 76 "prog_io_mode_defn.m"
                }
#line 75 "prog_io_mode_defn.m"
                {
#line 75 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 75 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_64_64));
#line 75 "prog_io_mode_defn.m"
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_22));
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_mode_defn.m"
                }
#line 77 "prog_io_mode_defn.m"
                {
#line 77 "prog_io_mode_defn.m"
                  MR_Word base;
#line 77 "prog_io_mode_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 77 "prog_io_mode_defn.m"
                  *parse_tree__prog_io_mode_defn__MaybeItem_12 = base;
#line 77 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 77 "prog_io_mode_defn.m"
                }
#line 74 "prog_io_mode_defn.m"
              }
#line 72 "prog_io_mode_defn.m"
          }
#line 64 "prog_io_mode_defn.m"
      }
#line 58 "prog_io_mode_defn.m"
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
