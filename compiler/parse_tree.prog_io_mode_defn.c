/*
** Automatically generated from `prog_io_mode_defn.m'
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


/* :- module parse_tree.prog_io_mode_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_mode_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_mode_defn.mih"


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
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 101 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 104 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 107 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 110 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 113 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 116 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3];

#line 119 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDesc parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0;

#line 122 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1];

#line 125 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1];

#line 128 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1];

#line 131 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1];

#line 134 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 137 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 139 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 142 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 145 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 147 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 149 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3);

#line 373 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__373__1_2_p_0(
#line 373 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 373 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149);

#line 356 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__356__1_2_f_0(
#line 356 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 356 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143);

#line 330 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__330__1_2_f_0(
#line 330 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 330 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135);

#line 215 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 215 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3);

#line 215 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2);

#line 373 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 373 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 373 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 373 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2);

#line 356 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 356 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 356 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 330 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 330 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 330 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1);

#line 306 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 306 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 306 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12);

#line 273 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(
#line 273 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__SymName_4,
#line 273 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_5,
#line 273 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__NameSpecs_6);

#line 177 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 177 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 177 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_12);

#line 97 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 97 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 97 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_14);


static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[48][2];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[5][1];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_1[48][2] = {
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
    ((MR_Box) ((MR_String) "which should be the definition of an inst."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in mode definition body."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst parameters must be variables."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[3])))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[2])),
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
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[3])),
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
    ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_mode_defn_scalar_common_2[5][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[22])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[26])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[32])))
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



#line 601 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 609 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 617 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 625 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 633 "parse_tree.prog_io_mode_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 641 "parse_tree.prog_io_mode_defn.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__field_types_processed_mode_body_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0
};

#line 648 "parse_tree.prog_io_mode_defn.c"
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

#line 663 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 668 "parse_tree.prog_io_mode_defn.c"
static const MR_DuPtagLayout parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_stag_ordered_processed_mode_body_0_0
  }
};

#line 677 "parse_tree.prog_io_mode_defn.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_name_ordered_processed_mode_body_0[1] = {
  &parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__du_functor_desc_processed_mode_body_0_0
};

#line 682 "parse_tree.prog_io_mode_defn.c"
static const MR_Integer parse_tree__prog_io_mode_defn__parse_tree__prog_io_mode_defn__functor_number_map_processed_mode_body_0[1] = {
  (MR_Integer) 0
};

#line 687 "parse_tree.prog_io_mode_defn.c"
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

#line 704 "parse_tree.prog_io_mode_defn.c"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0_10001(
#line 707 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 709 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 711 "parse_tree.prog_io_mode_defn.c"
{
#line 713 "parse_tree.prog_io_mode_defn.c"
  {
#line 715 "parse_tree.prog_io_mode_defn.c"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 718 "parse_tree.prog_io_mode_defn.c"
    {
#line 720 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2));
    }
#line 723 "parse_tree.prog_io_mode_defn.c"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 725 "parse_tree.prog_io_mode_defn.c"
  }
#line 727 "parse_tree.prog_io_mode_defn.c"
}

#line 730 "parse_tree.prog_io_mode_defn.c"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0_10001(
#line 733 "parse_tree.prog_io_mode_defn.c"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 735 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2,
#line 737 "parse_tree.prog_io_mode_defn.c"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_3)
#line 739 "parse_tree.prog_io_mode_defn.c"
{
#line 741 "parse_tree.prog_io_mode_defn.c"
  {
#line 743 "parse_tree.prog_io_mode_defn.c"
    MR_Word parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1;

#line 746 "parse_tree.prog_io_mode_defn.c"
    {
#line 748 "parse_tree.prog_io_mode_defn.c"
      parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(&parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_3));
    }
#line 751 "parse_tree.prog_io_mode_defn.c"
    *parse_tree__prog_io_mode_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv0_HeadVar__1_1));
#line 753 "parse_tree.prog_io_mode_defn.c"
  }
#line 755 "parse_tree.prog_io_mode_defn.c"
}

#line 373 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__373__1_2_p_0(
#line 373 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_148,
#line 373 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__2_149)
#line 373 "prog_io_mode_defn.m"
{
#line 373 "prog_io_mode_defn.m"
  {
#line 373 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;

#line 373 "prog_io_mode_defn.m"
    {
#line 373 "prog_io_mode_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__HeadVar__1_148, parse_tree__prog_io_mode_defn__HeadVar__2_149);
    }
#line 373 "prog_io_mode_defn.m"
  }
#line 373 "prog_io_mode_defn.m"
}

#line 356 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__356__1_2_f_0(
#line 356 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 356 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_143)
#line 356 "prog_io_mode_defn.m"
{
#line 356 "prog_io_mode_defn.m"
  {
#line 356 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 356 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_144;

#line 356 "prog_io_mode_defn.m"
    {
#line 356 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__HeadVar__3_144 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_143);
    }
#line 356 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_144;
#line 356 "prog_io_mode_defn.m"
  }
#line 356 "prog_io_mode_defn.m"
}

#line 330 "prog_io_mode_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__330__1_2_f_0(
#line 330 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 330 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_135)
#line 330 "prog_io_mode_defn.m"
{
#line 330 "prog_io_mode_defn.m"
  {
#line 330 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 330 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__HeadVar__3_136;

#line 330 "prog_io_mode_defn.m"
    {
#line 330 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__HeadVar__3_136 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadVar__2_135);
    }
#line 330 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__HeadVar__3_136;
#line 330 "prog_io_mode_defn.m"
  }
#line 330 "prog_io_mode_defn.m"
}

#line 215 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn____Compare____processed_mode_body_0_0(
#line 215 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__3_3)
#line 215 "prog_io_mode_defn.m"
{
#line 215 "prog_io_mode_defn.m"
  {
#line 215 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 215 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_12 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;
#line 215 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_13 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__3_3;

#line 215 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_12 == parse_tree__prog_io_mode_defn__CastY_13);
#line 215 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 862 "parse_tree.prog_io_mode_defn.c"
      *parse_tree__prog_io_mode_defn__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "prog_io_mode_defn.m"
    else
#line 215 "prog_io_mode_defn.m"
      {
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__3_3, (MR_Integer) 2)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_10_10;

#line 215 "prog_io_mode_defn.m"
        {
#line 215 "prog_io_mode_defn.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_mode_defn__V_10_10, parse_tree__prog_io_mode_defn__V_4_4, parse_tree__prog_io_mode_defn__V_7_7);
        }
#line 888 "parse_tree.prog_io_mode_defn.c"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_10_10 == (MR_Integer) 0);
#line 215 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 215 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 215 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_10_10;
#line 215 "prog_io_mode_defn.m"
        else
#line 215 "prog_io_mode_defn.m"
          {
#line 215 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_11_11;

#line 215 "prog_io_mode_defn.m"
            {
#line 215 "prog_io_mode_defn.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], &parse_tree__prog_io_mode_defn__V_11_11, ((MR_Box) (parse_tree__prog_io_mode_defn__V_5_5)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_8_8)));
            }
#line 908 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_11_11 == (MR_Integer) 0);
#line 215 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = !(parse_tree__prog_io_mode_defn__succeeded);
#line 215 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 215 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__HeadVar__1_1 = parse_tree__prog_io_mode_defn__V_11_11;
#line 215 "prog_io_mode_defn.m"
            else
#line 215 "prog_io_mode_defn.m"
              {
#line 215 "prog_io_mode_defn.m"
                parse_tree__prog_data____Compare____mode_defn_0_0(parse_tree__prog_io_mode_defn__HeadVar__1_1, parse_tree__prog_io_mode_defn__V_6_6, parse_tree__prog_io_mode_defn__V_9_9);
              }
#line 215 "prog_io_mode_defn.m"
          }
#line 215 "prog_io_mode_defn.m"
      }
#line 215 "prog_io_mode_defn.m"
  }
#line 215 "prog_io_mode_defn.m"
}

#line 215 "prog_io_mode_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_mode_defn____Unify____processed_mode_body_0_0(
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__1_1,
#line 215 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadVar__2_2)
#line 215 "prog_io_mode_defn.m"
{
#line 215 "prog_io_mode_defn.m"
  {
#line 215 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 215 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastX_9 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__1_1;
#line 215 "prog_io_mode_defn.m"
    MR_Integer parse_tree__prog_io_mode_defn__CastY_10 = (MR_Integer) parse_tree__prog_io_mode_defn__HeadVar__2_2;

#line 215 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__CastX_9 == parse_tree__prog_io_mode_defn__CastY_10);
#line 215 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 215 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = MR_TRUE;
#line 215 "prog_io_mode_defn.m"
    else
#line 215 "prog_io_mode_defn.m"
      {
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_12_12;
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__1_1, (MR_Integer) 2)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadVar__2_2, (MR_Integer) 2)));

#line 975 "parse_tree.prog_io_mode_defn.c"
        {
#line 977 "parse_tree.prog_io_mode_defn.c"
          parse_tree__prog_io_mode_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_mode_defn__V_3_3, parse_tree__prog_io_mode_defn__V_6_6);
        }
#line 215 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 215 "prog_io_mode_defn.m"
          {
#line 984 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1];
#line 986 "parse_tree.prog_io_mode_defn.c"
            {
#line 988 "parse_tree.prog_io_mode_defn.c"
              parse_tree__prog_io_mode_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io_mode_defn__V_4_4)), ((MR_Box) (parse_tree__prog_io_mode_defn__V_7_7)));
            }
#line 215 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 993 "parse_tree.prog_io_mode_defn.c"
              {
#line 995 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(parse_tree__prog_io_mode_defn__V_5_5, parse_tree__prog_io_mode_defn__V_8_8);
              }
#line 215 "prog_io_mode_defn.m"
          }
#line 215 "prog_io_mode_defn.m"
      }
#line 215 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__succeeded;
#line 215 "prog_io_mode_defn.m"
  }
#line 215 "prog_io_mode_defn.m"
}

#line 373 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_3(
#line 373 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 373 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1,
#line 373 "prog_io_mode_defn.m"
  MR_Box * parse_tree__prog_io_mode_defn__wrapper_arg_2)
#line 373 "prog_io_mode_defn.m"
{
#line 373 "prog_io_mode_defn.m"
  {
#line 373 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 373 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149;

#line 373 "prog_io_mode_defn.m"
    {
#line 373 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__373__1_2_p_0(((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1), &parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149);
    }
#line 373 "prog_io_mode_defn.m"
    *parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv5_HeadVar__2_149));
#line 373 "prog_io_mode_defn.m"
  }
#line 373 "prog_io_mode_defn.m"
}

#line 356 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2(
#line 356 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 356 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 356 "prog_io_mode_defn.m"
{
#line 356 "prog_io_mode_defn.m"
  {
#line 356 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 356 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 356 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144;

#line 356 "prog_io_mode_defn.m"
    {
#line 356 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__356__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 356 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv3_HeadVar__3_144));
#line 356 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 356 "prog_io_mode_defn.m"
  }
#line 356 "prog_io_mode_defn.m"
}

#line 330 "prog_io_mode_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1(
#line 330 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__closure_arg,
#line 330 "prog_io_mode_defn.m"
  MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_1)
#line 330 "prog_io_mode_defn.m"
{
#line 330 "prog_io_mode_defn.m"
  {
#line 330 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 330 "prog_io_mode_defn.m"
    MR_Box parse_tree__prog_io_mode_defn__closure = parse_tree__prog_io_mode_defn__closure_arg;
#line 330 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136;

#line 330 "prog_io_mode_defn.m"
    {
#line 330 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136 = parse_tree__prog_io_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__330__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_mode_defn__wrapper_arg_1));
    }
#line 330 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_mode_defn__conv2_HeadVar__3_136));
#line 330 "prog_io_mode_defn.m"
    return parse_tree__prog_io_mode_defn__wrapper_arg_2;
#line 330 "prog_io_mode_defn.m"
  }
#line 330 "prog_io_mode_defn.m"
}

#line 306 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0(
#line 306 "prog_io_mode_defn.m"
  MR_String parse_tree__prog_io_mode_defn__DefnKind_7,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_9,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_10,
#line 306 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__MaybeBodyTerm_11,
#line 306 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeArgVars_12)
#line 306 "prog_io_mode_defn.m"
{
#line 312 "prog_io_mode_defn.m"
  {
#line 312 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 312 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ArgVars_13;

#line 312 "prog_io_mode_defn.m"
    {
#line 312 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__ArgTerms_10, &parse_tree__prog_io_mode_defn__ArgVars_13);
    }
#line 312 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 314 "prog_io_mode_defn.m"
      {
#line 314 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81;
#line 319 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__DupArgVars_19;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_132_132;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsBag_18;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_15_15;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;
#line 320 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_17_17;
#line 323 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_20_20;
#line 323 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_21_21;
#line 1158 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_27;
#line 1160 "parse_tree.prog_io_mode_defn.c"
        MR_Word parse_tree__prog_io_mode_defn__FreeVars_34;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeInfo_140_140;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVars_28;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyVarsSet_31;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgVarsSet_32;
#line 346 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__FreeVarsSet_33;
#line 348 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 348 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 353 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_35_35;
#line 353 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_36_36;

#line 320 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__ArgVars_13)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 320 "prog_io_mode_defn.m"
          {
#line 320 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 0)));
#line 320 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgVars_13, (MR_Integer) 1)));
#line 320 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 320 "prog_io_mode_defn.m"
              {
#line 320 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 0)));
#line 320 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_46_46, (MR_Integer) 1)));
#line 1203 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_132_132 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 321 "prog_io_mode_defn.m"
                {
#line 321 "prog_io_mode_defn.m"
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsBag_18);
                }
#line 322 "prog_io_mode_defn.m"
                {
#line 322 "prog_io_mode_defn.m"
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_132_132, parse_tree__prog_io_mode_defn__ArgVarsBag_18, &parse_tree__prog_io_mode_defn__DupArgVars_19);
                }
#line 323 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__DupArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 323 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 323 "prog_io_mode_defn.m"
                  {
#line 323 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 0)));
#line 323 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__DupArgVars_19, (MR_Integer) 1)));
#line 323 "prog_io_mode_defn.m"
                  }
#line 320 "prog_io_mode_defn.m"
              }
#line 320 "prog_io_mode_defn.m"
          }
#line 319 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 326 "prog_io_mode_defn.m"
          {
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_133_133 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138;
#line 326 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__ParamWord_22;
#line 326 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__IsAreWord_23;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__DupVarNames_24;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatPieces_25;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__RepeatSpec_26;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_55_55;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_62_62;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_65_65;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_75_75;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_76_76;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_77_77;
#line 326 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 325 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv0_ParamWord_22;
#line 327 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv1_IsAreWord_23;

#line 325 "prog_io_mode_defn.m"
            {
#line 325 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv0_ParamWord_22 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 325 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ParamWord_22 = ((MR_String) parse_tree__prog_io_mode_defn__conv0_ParamWord_22);
#line 327 "prog_io_mode_defn.m"
            {
#line 327 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv1_IsAreWord_23 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__DupArgVars_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
            }
#line 327 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__IsAreWord_23 = ((MR_String) parse_tree__prog_io_mode_defn__conv1_IsAreWord_23);
#line 330 "prog_io_mode_defn.m"
            {
#line 330 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 330 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_1));
#line 330 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 330 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_51_51, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 330 "prog_io_mode_defn.m"
            }
#line 330 "prog_io_mode_defn.m"
            {
#line 330 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__DupVarNames_24 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_133_133, parse_tree__prog_io_mode_defn__TypeCtorInfo_134_134, parse_tree__prog_io_mode_defn__V_51_51, parse_tree__prog_io_mode_defn__DupArgVars_19);
            }
#line 1319 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 331 "prog_io_mode_defn.m"
            {
#line 331 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ParamWord_22));
#line 331 "prog_io_mode_defn.m"
            }
#line 331 "prog_io_mode_defn.m"
            {
#line 331 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_mode_defn.m"
            }
#line 331 "prog_io_mode_defn.m"
            {
#line 331 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[43])));
#line 331 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 331 "prog_io_mode_defn.m"
            }
#line 332 "prog_io_mode_defn.m"
            {
#line 332 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__DupVarNames_24);
            }
#line 333 "prog_io_mode_defn.m"
            {
#line 333 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__IsAreWord_23));
#line 333 "prog_io_mode_defn.m"
            }
#line 333 "prog_io_mode_defn.m"
            {
#line 333 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 333 "prog_io_mode_defn.m"
            }
#line 333 "prog_io_mode_defn.m"
            {
#line 333 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 333 "prog_io_mode_defn.m"
            }
#line 333 "prog_io_mode_defn.m"
            {
#line 333 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[44])));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_65_65));
#line 333 "prog_io_mode_defn.m"
            }
#line 333 "prog_io_mode_defn.m"
            {
#line 333 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 333 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_62_62));
#line 333 "prog_io_mode_defn.m"
            }
#line 332 "prog_io_mode_defn.m"
            {
#line 332 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 331 "prog_io_mode_defn.m"
            {
#line 331 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatPieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_138_138, parse_tree__prog_io_mode_defn__V_52_52, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 337 "prog_io_mode_defn.m"
            {
#line 337 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatPieces_25));
#line 337 "prog_io_mode_defn.m"
            }
#line 337 "prog_io_mode_defn.m"
            {
#line 337 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "prog_io_mode_defn.m"
            }
#line 337 "prog_io_mode_defn.m"
            {
#line 337 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_77_77));
#line 337 "prog_io_mode_defn.m"
            }
#line 337 "prog_io_mode_defn.m"
            {
#line 337 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_76_76));
#line 337 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "prog_io_mode_defn.m"
            }
#line 335 "prog_io_mode_defn.m"
            {
#line 335 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__RepeatSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 335 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__RepeatSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_75_75));
#line 335 "prog_io_mode_defn.m"
            }
#line 338 "prog_io_mode_defn.m"
            {
#line 338 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__RepeatSpec_26));
#line 338 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45));
#line 338 "prog_io_mode_defn.m"
            }
#line 326 "prog_io_mode_defn.m"
          }
#line 319 "prog_io_mode_defn.m"
        else
#line 319 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 = parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_45_45;
#line 346 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeBodyTerm_11)) == (MR_mktag((MR_Integer) 1)));
#line 346 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 346 "prog_io_mode_defn.m"
          {
#line 346 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__BodyTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeBodyTerm_11, (MR_Integer) 0)));
#line 1490 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 347 "prog_io_mode_defn.m"
            {
#line 347 "prog_io_mode_defn.m"
              mercury__term__vars_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_139_139, parse_tree__prog_io_mode_defn__BodyTerm_27, &parse_tree__prog_io_mode_defn__BodyVars_28);
            }
#line 348 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__BodyVars_28)) == (MR_mktag((MR_Integer) 1)));
#line 348 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 348 "prog_io_mode_defn.m"
              {
#line 348 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 0)));
#line 348 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyVars_28, (MR_Integer) 1)));
#line 1507 "parse_tree.prog_io_mode_defn.c"
                parse_tree__prog_io_mode_defn__TypeInfo_140_140 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 349 "prog_io_mode_defn.m"
                {
#line 349 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVars_28, &parse_tree__prog_io_mode_defn__BodyVarsSet_31);
                }
#line 350 "prog_io_mode_defn.m"
                {
#line 350 "prog_io_mode_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__ArgVarsSet_32);
                }
#line 351 "prog_io_mode_defn.m"
                {
#line 351 "prog_io_mode_defn.m"
                  mercury__set__difference_3_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__BodyVarsSet_31, parse_tree__prog_io_mode_defn__ArgVarsSet_32, &parse_tree__prog_io_mode_defn__FreeVarsSet_33);
                }
#line 352 "prog_io_mode_defn.m"
                {
#line 352 "prog_io_mode_defn.m"
                  mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_mode_defn__TypeInfo_140_140, parse_tree__prog_io_mode_defn__FreeVarsSet_33, &parse_tree__prog_io_mode_defn__FreeVars_34);
                }
#line 353 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__FreeVars_34)) == (MR_mktag((MR_Integer) 1)));
#line 353 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 353 "prog_io_mode_defn.m"
                  {
#line 353 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 0)));
#line 353 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__FreeVars_34, (MR_Integer) 1)));
#line 353 "prog_io_mode_defn.m"
                  }
#line 348 "prog_io_mode_defn.m"
              }
#line 346 "prog_io_mode_defn.m"
          }
#line 1545 "parse_tree.prog_io_mode_defn.c"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 1547 "parse_tree.prog_io_mode_defn.c"
          {
#line 1549 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeInfo_141_141 = (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2];
#line 1551 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1553 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146;
#line 1555 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeVarNames_37;
#line 1557 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreePieces_38;
#line 1559 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__FreeSpec_39;
#line 1561 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_82_82;
#line 1563 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_83_83;
#line 1565 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_86_86;
#line 1567 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_87_87;
#line 1569 "parse_tree.prog_io_mode_defn.c"
            MR_String parse_tree__prog_io_mode_defn__V_88_88;
#line 1571 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_92_92;
#line 1573 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 1575 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 1577 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_97_97;
#line 1579 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_98_98;
#line 1581 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_107_107;
#line 1583 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_108_108;
#line 1585 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_109_109;
#line 1587 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_110_110;
#line 1589 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__V_111_111;
#line 1591 "parse_tree.prog_io_mode_defn.c"
            MR_Word parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114;
#line 358 "prog_io_mode_defn.m"
            MR_Box parse_tree__prog_io_mode_defn__conv4_V_88_88;

#line 356 "prog_io_mode_defn.m"
            {
#line 356 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_3[0]));
#line 356 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0_2));
#line 356 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_82_82, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSet_8));
#line 356 "prog_io_mode_defn.m"
            }
#line 356 "prog_io_mode_defn.m"
            {
#line 356 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeVarNames_37 = mercury__list__map_2_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__V_82_82, parse_tree__prog_io_mode_defn__FreeVars_34);
            }
#line 1615 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 358 "prog_io_mode_defn.m"
            {
#line 358 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__conv4_V_88_88 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_mode_defn__TypeInfo_141_141, parse_tree__prog_io_mode_defn__TypeCtorInfo_142_142, parse_tree__prog_io_mode_defn__FreeVars_34, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            }
#line 358 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_88_88 = ((MR_String) parse_tree__prog_io_mode_defn__conv4_V_88_88);
#line 358 "prog_io_mode_defn.m"
            {
#line 358 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 358 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 358 "prog_io_mode_defn.m"
            }
#line 359 "prog_io_mode_defn.m"
            {
#line 359 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_87_87));
#line 359 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_mode_defn.m"
            }
#line 357 "prog_io_mode_defn.m"
            {
#line 357 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[45])));
#line 357 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_86_86));
#line 357 "prog_io_mode_defn.m"
            }
#line 360 "prog_io_mode_defn.m"
            {
#line 360 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_mode_defn__FreeVarNames_37);
            }
#line 361 "prog_io_mode_defn.m"
            {
#line 361 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__DefnKind_7));
#line 361 "prog_io_mode_defn.m"
            }
#line 361 "prog_io_mode_defn.m"
            {
#line 361 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_98_98));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 361 "prog_io_mode_defn.m"
            }
#line 361 "prog_io_mode_defn.m"
            {
#line 361 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[46])));
#line 361 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_97_97));
#line 361 "prog_io_mode_defn.m"
            }
#line 360 "prog_io_mode_defn.m"
            {
#line 360 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_93_93, parse_tree__prog_io_mode_defn__V_94_94);
            }
#line 359 "prog_io_mode_defn.m"
            {
#line 359 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreePieces_38 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_146_146, parse_tree__prog_io_mode_defn__V_83_83, parse_tree__prog_io_mode_defn__V_92_92);
            }
#line 364 "prog_io_mode_defn.m"
            {
#line 364 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_109_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__BodyTerm_27);
            }
#line 365 "prog_io_mode_defn.m"
            {
#line 365 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 365 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreePieces_38));
#line 365 "prog_io_mode_defn.m"
            }
#line 365 "prog_io_mode_defn.m"
            {
#line 365 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_111_111));
#line 365 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_mode_defn.m"
            }
#line 364 "prog_io_mode_defn.m"
            {
#line 364 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_109_109));
#line 364 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_110_110));
#line 364 "prog_io_mode_defn.m"
            }
#line 365 "prog_io_mode_defn.m"
            {
#line 365 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_108_108));
#line 365 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_mode_defn.m"
            }
#line 362 "prog_io_mode_defn.m"
            {
#line 362 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__FreeSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 362 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 362 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__FreeSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_107_107));
#line 362 "prog_io_mode_defn.m"
            }
#line 366 "prog_io_mode_defn.m"
            {
#line 366 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__FreeSpec_39));
#line 366 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 366 "prog_io_mode_defn.m"
            }
#line 377 "prog_io_mode_defn.m"
            {
#line 377 "prog_io_mode_defn.m"
              MR_Word base;
#line 377 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 377 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 377 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_114_114));
#line 377 "prog_io_mode_defn.m"
            }
#line 1776 "parse_tree.prog_io_mode_defn.c"
          }
#line 1778 "parse_tree.prog_io_mode_defn.c"
        else
#line 375 "prog_io_mode_defn.m"
        if ((parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "prog_io_mode_defn.m"
          {
#line 372 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstArgVars_40;

#line 373 "prog_io_mode_defn.m"
            {
#line 373 "prog_io_mode_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_5[0], parse_tree__prog_io_mode_defn__ArgVars_13, &parse_tree__prog_io_mode_defn__InstArgVars_40);
            }
#line 374 "prog_io_mode_defn.m"
            {
#line 374 "prog_io_mode_defn.m"
              MR_Word base;
#line 374 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 374 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_40));
#line 374 "prog_io_mode_defn.m"
            }
#line 372 "prog_io_mode_defn.m"
          }
#line 375 "prog_io_mode_defn.m"
        else
#line 377 "prog_io_mode_defn.m"
          {
#line 377 "prog_io_mode_defn.m"
            MR_Word base;
#line 377 "prog_io_mode_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 377 "prog_io_mode_defn.m"
            *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 377 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__STATE_VARIABLE_Specs_81_81));
#line 377 "prog_io_mode_defn.m"
          }
#line 314 "prog_io_mode_defn.m"
      }
#line 312 "prog_io_mode_defn.m"
    else
#line 383 "prog_io_mode_defn.m"
      {
#line 383 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__VarSpec_44;
#line 383 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_123_123;
#line 383 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_124_124;
#line 383 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_129_129;

#line 385 "prog_io_mode_defn.m"
        {
#line 385 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_9));
#line 385 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[47])));
#line 385 "prog_io_mode_defn.m"
        }
#line 385 "prog_io_mode_defn.m"
        {
#line 385 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_124_124));
#line 385 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "prog_io_mode_defn.m"
        }
#line 384 "prog_io_mode_defn.m"
        {
#line 384 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__VarSpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 384 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__VarSpec_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_123_123));
#line 384 "prog_io_mode_defn.m"
        }
#line 386 "prog_io_mode_defn.m"
        {
#line 386 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__VarSpec_44));
#line 386 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "prog_io_mode_defn.m"
        }
#line 386 "prog_io_mode_defn.m"
        {
#line 386 "prog_io_mode_defn.m"
          MR_Word base;
#line 386 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 386 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeArgVars_12 = base;
#line 386 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_129_129));
#line 386 "prog_io_mode_defn.m"
        }
#line 383 "prog_io_mode_defn.m"
      }
#line 312 "prog_io_mode_defn.m"
  }
#line 306 "prog_io_mode_defn.m"
}

#line 273 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(
#line 273 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__SymName_4,
#line 273 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_5,
#line 273 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__NameSpecs_6)
#line 273 "prog_io_mode_defn.m"
{
#line 276 "prog_io_mode_defn.m"
  {
#line 276 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 276 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__Name_7;

#line 277 "prog_io_mode_defn.m"
    {
#line 277 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_4);
    }
#line 278 "prog_io_mode_defn.m"
    {
#line 278 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_7);
    }
#line 278 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 280 "prog_io_mode_defn.m"
      {
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NamePieces_8;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpec_9;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_12_12;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_13_13;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_22_22;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_23_23;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_24_24;
#line 280 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_25_25;

#line 279 "prog_io_mode_defn.m"
        {
#line 279 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_7));
#line 279 "prog_io_mode_defn.m"
        }
#line 279 "prog_io_mode_defn.m"
        {
#line 279 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_12_12, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_13_13));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30])));
#line 279 "prog_io_mode_defn.m"
        }
#line 279 "prog_io_mode_defn.m"
        {
#line 279 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[42])));
#line 279 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_12_12));
#line 279 "prog_io_mode_defn.m"
        }
#line 282 "prog_io_mode_defn.m"
        {
#line 282 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_8));
#line 282 "prog_io_mode_defn.m"
        }
#line 282 "prog_io_mode_defn.m"
        {
#line 282 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_25_25));
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_mode_defn.m"
        }
#line 282 "prog_io_mode_defn.m"
        {
#line 282 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_5));
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_24_24));
#line 282 "prog_io_mode_defn.m"
        }
#line 282 "prog_io_mode_defn.m"
        {
#line 282 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_23_23));
#line 282 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_mode_defn.m"
        }
#line 281 "prog_io_mode_defn.m"
        {
#line 281 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 281 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_22_22));
#line 281 "prog_io_mode_defn.m"
        }
#line 283 "prog_io_mode_defn.m"
        {
#line 283 "prog_io_mode_defn.m"
          MR_Word base;
#line 283 "prog_io_mode_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__NameSpecs_6 = base;
#line 283 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_9));
#line 283 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_mode_defn.m"
        }
#line 280 "prog_io_mode_defn.m"
      }
#line 278 "prog_io_mode_defn.m"
    else
#line 285 "prog_io_mode_defn.m"
      *parse_tree__prog_io_mode_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 276 "prog_io_mode_defn.m"
  }
#line 273 "prog_io_mode_defn.m"
}

#line 177 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_9,
#line 177 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 177 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 177 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_12)
#line 177 "prog_io_mode_defn.m"
{
#line 181 "prog_io_mode_defn.m"
  {
#line 181 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 181 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_37_37;
#line 181 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ContextPieces_13;
#line 181 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14;

#line 182 "prog_io_mode_defn.m"
    {
#line 182 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[38]))));
    }
#line 2083 "parse_tree.prog_io_mode_defn.c"
    parse_tree__prog_io_mode_defn__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 183 "prog_io_mode_defn.m"
    {
#line 183 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_37_37, parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__HeadTerm_9, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__ContextPieces_13, &parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14);
    }
#line 188 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14)) == (MR_mktag((MR_Integer) 0))))
#line 186 "prog_io_mode_defn.m"
      {
#line 186 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));

#line 187 "prog_io_mode_defn.m"
        {
#line 187 "prog_io_mode_defn.m"
          MR_Word base;
#line 187 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 187 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeIOM_12 = base;
#line 187 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_15));
#line 187 "prog_io_mode_defn.m"
        }
#line 186 "prog_io_mode_defn.m"
      }
#line 188 "prog_io_mode_defn.m"
    else
#line 189 "prog_io_mode_defn.m"
      {
#line 189 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 0)));
#line 189 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeNameAndArgs_14, (MR_Integer) 1)));
#line 189 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_18;
#line 189 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_19;
#line 189 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_20;
#line 189 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_44;
#line 196 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_21;

#line 191 "prog_io_mode_defn.m"
        {
#line 191 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_18 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_37_37, parse_tree__prog_io_mode_defn__HeadTerm_9);
        }
#line 277 "prog_io_mode_defn.m"
        {
#line 277 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_44 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_16);
        }
#line 278 "prog_io_mode_defn.m"
        {
#line 278 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_inst_name_1_p_0(parse_tree__prog_io_mode_defn__Name_44);
        }
#line 278 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 280 "prog_io_mode_defn.m"
          {
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_45;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_46;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_61_61;
#line 280 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_62_62;

#line 279 "prog_io_mode_defn.m"
            {
#line 279 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_44));
#line 279 "prog_io_mode_defn.m"
            }
#line 279 "prog_io_mode_defn.m"
            {
#line 279 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30])));
#line 279 "prog_io_mode_defn.m"
            }
#line 279 "prog_io_mode_defn.m"
            {
#line 279 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[42])));
#line 279 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_45, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 279 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_45));
#line 282 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_62_62));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_18));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_61_61));
#line 282 "prog_io_mode_defn.m"
            }
#line 282 "prog_io_mode_defn.m"
            {
#line 282 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 282 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_mode_defn.m"
            }
#line 281 "prog_io_mode_defn.m"
            {
#line 281 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 281 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_46, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 281 "prog_io_mode_defn.m"
            }
#line 283 "prog_io_mode_defn.m"
            {
#line 283 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_46));
#line 283 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_mode_defn.m"
            }
#line 280 "prog_io_mode_defn.m"
          }
#line 278 "prog_io_mode_defn.m"
        else
#line 285 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "prog_io_mode_defn.m"
        {
#line 193 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTermContext_18, parse_tree__prog_io_mode_defn__ArgTerms_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
        }
#line 197 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 197 "prog_io_mode_defn.m"
          {
#line 198 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 198 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 198 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_20, (MR_Integer) 0)));
#line 197 "prog_io_mode_defn.m"
          }
#line 196 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 200 "prog_io_mode_defn.m"
          {
#line 200 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_22;
#line 200 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_25;
#line 200 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_26;
#line 200 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_31_31;

#line 200 "prog_io_mode_defn.m"
            {
#line 200 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_37_37, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_8, &parse_tree__prog_io_mode_defn__InstVarSet_22);
            }
#line 203 "prog_io_mode_defn.m"
            {
#line 203 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_16));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_21));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_22));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 203 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_25, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_11));
#line 203 "prog_io_mode_defn.m"
            }
#line 205 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_25);
#line 206 "prog_io_mode_defn.m"
            {
#line 206 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_26));
#line 206 "prog_io_mode_defn.m"
            }
#line 206 "prog_io_mode_defn.m"
            {
#line 206 "prog_io_mode_defn.m"
              MR_Word base;
#line 206 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_12 = base;
#line 206 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_31_31));
#line 206 "prog_io_mode_defn.m"
            }
#line 200 "prog_io_mode_defn.m"
          }
#line 196 "prog_io_mode_defn.m"
        else
#line 208 "prog_io_mode_defn.m"
          {
#line 208 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 208 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_33;

#line 208 "prog_io_mode_defn.m"
            {
#line 208 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_32_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_20);
            }
#line 208 "prog_io_mode_defn.m"
            {
#line 208 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_mode_defn__NameSpecs_19, parse_tree__prog_io_mode_defn__V_32_32);
            }
#line 209 "prog_io_mode_defn.m"
            {
#line 209 "prog_io_mode_defn.m"
              MR_Word base;
#line 209 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_12 = base;
#line 209 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_33));
#line 209 "prog_io_mode_defn.m"
            }
#line 208 "prog_io_mode_defn.m"
          }
#line 189 "prog_io_mode_defn.m"
      }
#line 181 "prog_io_mode_defn.m"
  }
#line 177 "prog_io_mode_defn.m"
}

#line 97 "prog_io_mode_defn.m"
static void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 97 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 97 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 97 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_14)
#line 97 "prog_io_mode_defn.m"
{
#line 101 "prog_io_mode_defn.m"
  {
#line 101 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ContextPieces_15;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__NameTerm_19;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeForType_22;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ForTypeSpecs_23;
#line 101 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27;
#line 103 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__NameTermPrime_16;
#line 103 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ForTypeTerm_17;
#line 104 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 104 "prog_io_mode_defn.m"
    MR_String parse_tree__prog_io_mode_defn__V_49_49;
#line 104 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 104 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_51_51;
#line 104 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_52_52;
#line 104 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_18_18;

#line 102 "prog_io_mode_defn.m"
    {
#line 102 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[38]))));
    }
#line 104 "prog_io_mode_defn.m"
    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 104 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 104 "prog_io_mode_defn.m"
      {
#line 104 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 0)));
#line 104 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 1)));
#line 104 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__HeadTerm_10, (MR_Integer) 2)));
#line 104 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 104 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 104 "prog_io_mode_defn.m"
          {
#line 104 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_48_48, (MR_Integer) 0)));
#line 104 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_49_49, (MR_String) "for") == 0);
#line 104 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 104 "prog_io_mode_defn.m"
              {
#line 105 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 105 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 105 "prog_io_mode_defn.m"
                  {
#line 105 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__NameTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_50_50, (MR_Integer) 0)));
#line 105 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_50_50, (MR_Integer) 1)));
#line 105 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 105 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 105 "prog_io_mode_defn.m"
                      {
#line 105 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__ForTypeTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, (MR_Integer) 0)));
#line 105 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_51_51, (MR_Integer) 1)));
#line 105 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_mode_defn.m"
                      }
#line 105 "prog_io_mode_defn.m"
                  }
#line 104 "prog_io_mode_defn.m"
              }
#line 104 "prog_io_mode_defn.m"
          }
#line 104 "prog_io_mode_defn.m"
      }
#line 103 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 107 "prog_io_mode_defn.m"
      {
#line 108 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__TypeSymName_20;
#line 108 "prog_io_mode_defn.m"
        MR_Integer parse_tree__prog_io_mode_defn__TypeArity_21;

#line 107 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__NameTerm_19 = parse_tree__prog_io_mode_defn__NameTermPrime_16;
#line 109 "prog_io_mode_defn.m"
        {
#line 109 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__ForTypeTerm_17, &parse_tree__prog_io_mode_defn__TypeSymName_20, &parse_tree__prog_io_mode_defn__TypeArity_21);
        }
#line 108 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 112 "prog_io_mode_defn.m"
          {
#line 112 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_53_53;

#line 112 "prog_io_mode_defn.m"
            {
#line 112 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__TypeSymName_20));
#line 112 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__TypeArity_21));
#line 112 "prog_io_mode_defn.m"
            }
#line 112 "prog_io_mode_defn.m"
            {
#line 112 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 112 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeForType_22, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_53_53));
#line 112 "prog_io_mode_defn.m"
            }
#line 113 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 112 "prog_io_mode_defn.m"
          }
#line 108 "prog_io_mode_defn.m"
        else
#line 115 "prog_io_mode_defn.m"
          {
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110;
#line 115 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__ForTypeTermStr_24;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ForTypePieces_25;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ForTypeSpec_26;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_56_56;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_69_69;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_70_70;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_71_71;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_72_72;
#line 115 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_73_73;

#line 115 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2574 "parse_tree.prog_io_mode_defn.c"
            parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 116 "prog_io_mode_defn.m"
            {
#line 116 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__ForTypeTerm_17);
            }
#line 119 "prog_io_mode_defn.m"
            {
#line 119 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypeTermStr_24));
#line 119 "prog_io_mode_defn.m"
            }
#line 119 "prog_io_mode_defn.m"
            {
#line 119 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_60_60));
#line 119 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 119 "prog_io_mode_defn.m"
            }
#line 118 "prog_io_mode_defn.m"
            {
#line 118 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[40])));
#line 118 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_59_59));
#line 118 "prog_io_mode_defn.m"
            }
#line 117 "prog_io_mode_defn.m"
            {
#line 117 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypePieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypePieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[39])));
#line 117 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypePieces_25, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_56_56));
#line 117 "prog_io_mode_defn.m"
            }
#line 121 "prog_io_mode_defn.m"
            {
#line 121 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_71_71 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_110_110, parse_tree__prog_io_mode_defn__ForTypeTerm_17);
            }
#line 122 "prog_io_mode_defn.m"
            {
#line 122 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypePieces_25));
#line 122 "prog_io_mode_defn.m"
            }
#line 122 "prog_io_mode_defn.m"
            {
#line 122 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_73_73));
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "prog_io_mode_defn.m"
            }
#line 121 "prog_io_mode_defn.m"
            {
#line 121 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_71_71));
#line 121 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_72_72));
#line 121 "prog_io_mode_defn.m"
            }
#line 122 "prog_io_mode_defn.m"
            {
#line 122 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_70_70));
#line 122 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "prog_io_mode_defn.m"
            }
#line 120 "prog_io_mode_defn.m"
            {
#line 120 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 120 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ForTypeSpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_69_69));
#line 120 "prog_io_mode_defn.m"
            }
#line 123 "prog_io_mode_defn.m"
            {
#line 123 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypeSpecs_23, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__ForTypeSpec_26));
#line 123 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ForTypeSpecs_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "prog_io_mode_defn.m"
            }
#line 115 "prog_io_mode_defn.m"
          }
#line 107 "prog_io_mode_defn.m"
      }
#line 103 "prog_io_mode_defn.m"
    else
#line 126 "prog_io_mode_defn.m"
      {
#line 126 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__NameTerm_19 = parse_tree__prog_io_mode_defn__HeadTerm_10;
#line 127 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__MaybeForType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__ForTypeSpecs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 126 "prog_io_mode_defn.m"
      }
#line 2702 "parse_tree.prog_io_mode_defn.c"
    parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 130 "prog_io_mode_defn.m"
    {
#line 130 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__NameTerm_19, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__ContextPieces_15, &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27);
    }
#line 136 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27)) == (MR_mktag((MR_Integer) 0))))
#line 133 "prog_io_mode_defn.m"
      {
#line 133 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymNameAndArgSpecs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
#line 133 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_29;

#line 134 "prog_io_mode_defn.m"
        {
#line 134 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_mode_defn__SymNameAndArgSpecs_28, parse_tree__prog_io_mode_defn__ForTypeSpecs_23);
        }
#line 135 "prog_io_mode_defn.m"
        {
#line 135 "prog_io_mode_defn.m"
          MR_Word base;
#line 135 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 135 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 135 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_29));
#line 135 "prog_io_mode_defn.m"
        }
#line 133 "prog_io_mode_defn.m"
      }
#line 136 "prog_io_mode_defn.m"
    else
#line 137 "prog_io_mode_defn.m"
      {
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 0)));
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_27, (MR_Integer) 1)));
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_32;
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_33;
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_34;
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInst_36;
#line 137 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 144 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst0_35;
#line 157 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_40;
#line 157 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Inst_41;

#line 139 "prog_io_mode_defn.m"
        {
#line 139 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 140 "prog_io_mode_defn.m"
        {
#line 140 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_user_inst_name_3_p_0(parse_tree__prog_io_mode_defn__SymName_30, parse_tree__prog_io_mode_defn__HeadTermContext_32, &parse_tree__prog_io_mode_defn__NameSpecs_33);
        }
#line 142 "prog_io_mode_defn.m"
        {
#line 142 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 142 "prog_io_mode_defn.m"
        }
#line 141 "prog_io_mode_defn.m"
        {
#line 141 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "inst definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_32, parse_tree__prog_io_mode_defn__ArgTerms_31, parse_tree__prog_io_mode_defn__V_78_78, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_34);
        }
#line 144 "prog_io_mode_defn.m"
        {
#line 144 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Inst0_35);
        }
#line 144 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 145 "prog_io_mode_defn.m"
          {
#line 145 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeInst_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst0_35));
#line 145 "prog_io_mode_defn.m"
          }
#line 144 "prog_io_mode_defn.m"
        else
#line 148 "prog_io_mode_defn.m"
          {
#line 148 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__BodyTermStr_37;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyPieces_38;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_39;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_82_82;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_83_83;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_92_92;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_93_93;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_95_95;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_96_96;
#line 148 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_99_99;

#line 148 "prog_io_mode_defn.m"
            {
#line 148 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyTermStr_37 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 150 "prog_io_mode_defn.m"
            {
#line 150 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 150 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTermStr_37));
#line 150 "prog_io_mode_defn.m"
            }
#line 150 "prog_io_mode_defn.m"
            {
#line 150 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_83_83));
#line 150 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[28])));
#line 150 "prog_io_mode_defn.m"
            }
#line 149 "prog_io_mode_defn.m"
            {
#line 149 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodyPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[41])));
#line 149 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__BodyPieces_38, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_82_82));
#line 149 "prog_io_mode_defn.m"
            }
#line 152 "prog_io_mode_defn.m"
            {
#line 152 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_94_94 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 153 "prog_io_mode_defn.m"
            {
#line 153 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 153 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyPieces_38));
#line 153 "prog_io_mode_defn.m"
            }
#line 153 "prog_io_mode_defn.m"
            {
#line 153 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_96_96));
#line 153 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_mode_defn.m"
            }
#line 152 "prog_io_mode_defn.m"
            {
#line 152 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_94_94));
#line 152 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_93_93, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_95_95));
#line 152 "prog_io_mode_defn.m"
            }
#line 153 "prog_io_mode_defn.m"
            {
#line 153 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_93_93));
#line 153 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_mode_defn.m"
            }
#line 151 "prog_io_mode_defn.m"
            {
#line 151 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 151 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 151 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_39, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_92_92));
#line 151 "prog_io_mode_defn.m"
            }
#line 154 "prog_io_mode_defn.m"
            {
#line 154 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_39));
#line 154 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_mode_defn.m"
            }
#line 154 "prog_io_mode_defn.m"
            {
#line 154 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeInst_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeInst_36, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_99_99));
#line 154 "prog_io_mode_defn.m"
            }
#line 148 "prog_io_mode_defn.m"
          }
#line 158 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 158 "prog_io_mode_defn.m"
          {
#line 159 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__ForTypeSpecs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 158 "prog_io_mode_defn.m"
              {
#line 160 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_34)) == (MR_mktag((MR_Integer) 1)));
#line 160 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 160 "prog_io_mode_defn.m"
                  {
#line 160 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__InstArgVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_34, (MR_Integer) 0)));
#line 161 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInst_36)) == (MR_mktag((MR_Integer) 1)));
#line 161 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 161 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInst_36, (MR_Integer) 0)));
#line 160 "prog_io_mode_defn.m"
                  }
#line 158 "prog_io_mode_defn.m"
              }
#line 158 "prog_io_mode_defn.m"
          }
#line 157 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 163 "prog_io_mode_defn.m"
          {
#line 163 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_42;
#line 163 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstDefn_43;
#line 163 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemInstDefn_44;
#line 163 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_45;
#line 163 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_101_101;

#line 163 "prog_io_mode_defn.m"
            {
#line 163 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_111_111, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_42);
            }
#line 164 "prog_io_mode_defn.m"
            {
#line 164 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__InstDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 164 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__InstDefn_43, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Inst_41));
#line 164 "prog_io_mode_defn.m"
            }
#line 165 "prog_io_mode_defn.m"
            {
#line 165 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemInstDefn_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_30));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_40));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__MaybeForType_22));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstDefn_43));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_42));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 165 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemInstDefn_44, 6) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 165 "prog_io_mode_defn.m"
            }
#line 167 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__Item_45 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_mode_defn__ItemInstDefn_44);
#line 168 "prog_io_mode_defn.m"
            {
#line 168 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 168 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_45));
#line 168 "prog_io_mode_defn.m"
            }
#line 168 "prog_io_mode_defn.m"
            {
#line 168 "prog_io_mode_defn.m"
              MR_Word base;
#line 168 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 168 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_101_101));
#line 168 "prog_io_mode_defn.m"
            }
#line 163 "prog_io_mode_defn.m"
          }
#line 157 "prog_io_mode_defn.m"
        else
#line 172 "prog_io_mode_defn.m"
          {
#line 172 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 172 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_102_102;
#line 172 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_103_103;
#line 172 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_104_104;
#line 172 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_105;

#line 171 "prog_io_mode_defn.m"
            {
#line 171 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_103_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_34);
            }
#line 172 "prog_io_mode_defn.m"
            {
#line 172 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_104_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_mode_defn__MaybeInst_36);
            }
#line 171 "prog_io_mode_defn.m"
            {
#line 171 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_102_102 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_114_114, parse_tree__prog_io_mode_defn__V_103_103, parse_tree__prog_io_mode_defn__V_104_104);
            }
#line 170 "prog_io_mode_defn.m"
            {
#line 170 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_105 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_114_114, parse_tree__prog_io_mode_defn__NameSpecs_33, parse_tree__prog_io_mode_defn__V_102_102);
            }
#line 173 "prog_io_mode_defn.m"
            {
#line 173 "prog_io_mode_defn.m"
              MR_Word base;
#line 173 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 173 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_105));
#line 173 "prog_io_mode_defn.m"
            }
#line 172 "prog_io_mode_defn.m"
          }
#line 137 "prog_io_mode_defn.m"
      }
#line 101 "prog_io_mode_defn.m"
  }
#line 97 "prog_io_mode_defn.m"
}

#line 35 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(
#line 35 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_8,
#line 35 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_9,
#line 35 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__HeadTerm_10,
#line 35 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__BodyTerm_11,
#line 35 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_12,
#line 35 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_13,
#line 35 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_14)
#line 35 "prog_io_mode_defn.m"
{
#line 223 "prog_io_mode_defn.m"
  {
#line 223 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded;
#line 223 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65;
#line 223 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__ContextPieces_15;
#line 223 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16;

#line 224 "prog_io_mode_defn.m"
    {
#line 224 "prog_io_mode_defn.m"
      parse_tree__prog_io_mode_defn__ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[35]))));
    }
#line 3132 "parse_tree.prog_io_mode_defn.c"
    parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 225 "prog_io_mode_defn.m"
    {
#line 225 "prog_io_mode_defn.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_mode_defn__ModuleName_8, parse_tree__prog_io_mode_defn__HeadTerm_10, parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__ContextPieces_15, &parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16);
    }
#line 230 "prog_io_mode_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16)) == (MR_mktag((MR_Integer) 0))))
#line 228 "prog_io_mode_defn.m"
      {
#line 228 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));

#line 229 "prog_io_mode_defn.m"
        {
#line 229 "prog_io_mode_defn.m"
          MR_Word base;
#line 229 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 229 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_17));
#line 229 "prog_io_mode_defn.m"
        }
#line 228 "prog_io_mode_defn.m"
      }
#line 230 "prog_io_mode_defn.m"
    else
#line 231 "prog_io_mode_defn.m"
      {
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 0)));
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__ArgTerms_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeSymNameAndArgs_16, (MR_Integer) 1)));
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTermContext_20;
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__NameSpecs_21;
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeInstArgVars_22;
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__MaybeMode_24;
#line 231 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_36_36;
#line 231 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__Name_73;
#line 238 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode0_23;
#line 250 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__InstArgVars_27;
#line 250 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Mode_28;

#line 233 "prog_io_mode_defn.m"
        {
#line 233 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__HeadTermContext_20 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_mode_defn__HeadTerm_10);
        }
#line 295 "prog_io_mode_defn.m"
        {
#line 295 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Name_73 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_mode_defn__SymName_18);
        }
#line 296 "prog_io_mode_defn.m"
        {
#line 296 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__is_known_mode_name_1_p_0(parse_tree__prog_io_mode_defn__Name_73);
        }
#line 296 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 298 "prog_io_mode_defn.m"
          {
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NamePieces_74;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__NameSpec_75;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_78_78;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_79_79;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_88_88;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_89_89;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_90_90;
#line 298 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_91_91;

#line 297 "prog_io_mode_defn.m"
            {
#line 297 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__Name_73));
#line 297 "prog_io_mode_defn.m"
            }
#line 297 "prog_io_mode_defn.m"
            {
#line 297 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_79_79));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[30])));
#line 297 "prog_io_mode_defn.m"
            }
#line 297 "prog_io_mode_defn.m"
            {
#line 297 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NamePieces_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_mode_defn_scalar_common_1[36])));
#line 297 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NamePieces_74, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_78_78));
#line 297 "prog_io_mode_defn.m"
            }
#line 300 "prog_io_mode_defn.m"
            {
#line 300 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NamePieces_74));
#line 300 "prog_io_mode_defn.m"
            }
#line 300 "prog_io_mode_defn.m"
            {
#line 300 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_91_91));
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io_mode_defn.m"
            }
#line 300 "prog_io_mode_defn.m"
            {
#line 300 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__HeadTermContext_20));
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_90_90));
#line 300 "prog_io_mode_defn.m"
            }
#line 300 "prog_io_mode_defn.m"
            {
#line 300 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_89_89));
#line 300 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io_mode_defn.m"
            }
#line 299 "prog_io_mode_defn.m"
            {
#line 299 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 299 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__NameSpec_75, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_88_88));
#line 299 "prog_io_mode_defn.m"
            }
#line 301 "prog_io_mode_defn.m"
            {
#line 301 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__NameSpec_75));
#line 301 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__NameSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io_mode_defn.m"
            }
#line 298 "prog_io_mode_defn.m"
          }
#line 296 "prog_io_mode_defn.m"
        else
#line 303 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__NameSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "prog_io_mode_defn.m"
        {
#line 236 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodyTerm_11));
#line 236 "prog_io_mode_defn.m"
        }
#line 235 "prog_io_mode_defn.m"
        {
#line 235 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "mode definition", parse_tree__prog_io_mode_defn__VarSet_9, parse_tree__prog_io_mode_defn__HeadTermContext_20, parse_tree__prog_io_mode_defn__ArgTerms_19, parse_tree__prog_io_mode_defn__V_36_36, &parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
        }
#line 238 "prog_io_mode_defn.m"
        {
#line 238 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 1, parse_tree__prog_io_mode_defn__BodyTerm_11, &parse_tree__prog_io_mode_defn__Mode0_23);
        }
#line 238 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 239 "prog_io_mode_defn.m"
          {
#line 239 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_io_mode_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Mode0_23));
#line 239 "prog_io_mode_defn.m"
          }
#line 238 "prog_io_mode_defn.m"
        else
#line 243 "prog_io_mode_defn.m"
          {
#line 243 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodySpec_26;
#line 243 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_48_48;
#line 243 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_49_49;
#line 243 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_50_50;
#line 243 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_55_55;

#line 245 "prog_io_mode_defn.m"
            {
#line 245 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_50_50 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65, parse_tree__prog_io_mode_defn__BodyTerm_11);
            }
#line 245 "prog_io_mode_defn.m"
            {
#line 245 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_50_50));
#line 245 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[37])));
#line 245 "prog_io_mode_defn.m"
            }
#line 246 "prog_io_mode_defn.m"
            {
#line 246 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_49_49));
#line 246 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_mode_defn.m"
            }
#line 244 "prog_io_mode_defn.m"
            {
#line 244 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__BodySpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 244 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BodySpec_26, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_48_48));
#line 244 "prog_io_mode_defn.m"
            }
#line 247 "prog_io_mode_defn.m"
            {
#line 247 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__BodySpec_26));
#line 247 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_io_mode_defn.m"
            }
#line 247 "prog_io_mode_defn.m"
            {
#line 247 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__MaybeMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__MaybeMode_24, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_55_55));
#line 247 "prog_io_mode_defn.m"
            }
#line 243 "prog_io_mode_defn.m"
          }
#line 251 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 251 "prog_io_mode_defn.m"
          {
#line 252 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeInstArgVars_22)) == (MR_mktag((MR_Integer) 1)));
#line 252 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 252 "prog_io_mode_defn.m"
              {
#line 252 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__InstArgVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeInstArgVars_22, (MR_Integer) 0)));
#line 253 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__MaybeMode_24)) == (MR_mktag((MR_Integer) 1)));
#line 253 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 253 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__MaybeMode_24, (MR_Integer) 0)));
#line 252 "prog_io_mode_defn.m"
              }
#line 251 "prog_io_mode_defn.m"
          }
#line 250 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 255 "prog_io_mode_defn.m"
          {
#line 255 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__InstVarSet_29;
#line 255 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ModeDefn_30;
#line 255 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__ItemModeDefn_31;
#line 255 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Item_32;
#line 255 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_57_57;

#line 255 "prog_io_mode_defn.m"
            {
#line 255 "prog_io_mode_defn.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_65_65, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_mode_defn__VarSet_9, &parse_tree__prog_io_mode_defn__InstVarSet_29);
            }
#line 256 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__ModeDefn_30 = (MR_Word) parse_tree__prog_io_mode_defn__Mode_28;
#line 257 "prog_io_mode_defn.m"
            {
#line 257 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__ItemModeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__SymName_18));
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstArgVars_27));
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__ModeDefn_30));
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_mode_defn__InstVarSet_29));
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_12));
#line 257 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__ItemModeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_mode_defn__SeqNum_13));
#line 257 "prog_io_mode_defn.m"
            }
#line 259 "prog_io_mode_defn.m"
            {
#line 259 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 259 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_mode_defn__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__ItemModeDefn_31));
#line 259 "prog_io_mode_defn.m"
            }
#line 260 "prog_io_mode_defn.m"
            {
#line 260 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Item_32));
#line 260 "prog_io_mode_defn.m"
            }
#line 260 "prog_io_mode_defn.m"
            {
#line 260 "prog_io_mode_defn.m"
              MR_Word base;
#line 260 "prog_io_mode_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 260 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_57_57));
#line 260 "prog_io_mode_defn.m"
            }
#line 255 "prog_io_mode_defn.m"
          }
#line 250 "prog_io_mode_defn.m"
        else
#line 264 "prog_io_mode_defn.m"
          {
#line 264 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 264 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_58_58;
#line 264 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_59_59;
#line 264 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_60_60;
#line 264 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__Specs_61;

#line 263 "prog_io_mode_defn.m"
            {
#line 263 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_59_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_mode_defn_scalar_common_1[1], parse_tree__prog_io_mode_defn__MaybeInstArgVars_22);
            }
#line 264 "prog_io_mode_defn.m"
            {
#line 264 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__prog_io_mode_defn__MaybeMode_24);
            }
#line 263 "prog_io_mode_defn.m"
            {
#line 263 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__V_59_59, parse_tree__prog_io_mode_defn__V_60_60);
            }
#line 262 "prog_io_mode_defn.m"
            {
#line 262 "prog_io_mode_defn.m"
              parse_tree__prog_io_mode_defn__Specs_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_mode_defn__TypeCtorInfo_67_67, parse_tree__prog_io_mode_defn__NameSpecs_21, parse_tree__prog_io_mode_defn__V_58_58);
            }
#line 265 "prog_io_mode_defn.m"
            {
#line 265 "prog_io_mode_defn.m"
              MR_Word base;
#line 265 "prog_io_mode_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_mode_defn.m"
              *parse_tree__prog_io_mode_defn__MaybeIOM_14 = base;
#line 265 "prog_io_mode_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Specs_61));
#line 265 "prog_io_mode_defn.m"
            }
#line 264 "prog_io_mode_defn.m"
          }
#line 231 "prog_io_mode_defn.m"
      }
#line 223 "prog_io_mode_defn.m"
  }
#line 35 "prog_io_mode_defn.m"
}

#line 30 "prog_io_mode_defn.m"
void MR_CALL 
parse_tree__prog_io_mode_defn__parse_inst_defn_item_6_p_0(
#line 30 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ModuleName_7,
#line 30 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__VarSet_8,
#line 30 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__ArgTerms_9,
#line 30 "prog_io_mode_defn.m"
  MR_Word parse_tree__prog_io_mode_defn__Context_10,
#line 30 "prog_io_mode_defn.m"
  MR_Integer parse_tree__prog_io_mode_defn__SeqNum_11,
#line 30 "prog_io_mode_defn.m"
  MR_Word * parse_tree__prog_io_mode_defn__MaybeIOM_12)
#line 30 "prog_io_mode_defn.m"
{
#line 56 "prog_io_mode_defn.m"
  {
#line 56 "prog_io_mode_defn.m"
    MR_bool parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 56 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__InstDefnTerm_13;
#line 56 "prog_io_mode_defn.m"
    MR_Word parse_tree__prog_io_mode_defn__V_24_24;

#line 56 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 56 "prog_io_mode_defn.m"
      {
#line 56 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__InstDefnTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgTerms_9, (MR_Integer) 0)));
#line 56 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__ArgTerms_9, (MR_Integer) 1)));
#line 56 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "prog_io_mode_defn.m"
      }
#line 56 "prog_io_mode_defn.m"
    if (parse_tree__prog_io_mode_defn__succeeded)
#line 58 "prog_io_mode_defn.m"
      {
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__HeadTerm_14;
#line 58 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__BodyTerm_15;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_25_25;
#line 59 "prog_io_mode_defn.m"
        MR_String parse_tree__prog_io_mode_defn__V_26_26;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_27_27;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_28_28;
#line 59 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_29_29;
#line 60 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_16_16;

#line 60 "prog_io_mode_defn.m"
        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
          {
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
#line 60 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
              {
#line 60 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_25_25, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_26_26, (MR_String) "==") == 0);
#line 59 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 59 "prog_io_mode_defn.m"
                  {
#line 60 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
                      {
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__HeadTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_27_27, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_27_27, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 60 "prog_io_mode_defn.m"
                          {
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__BodyTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 0)));
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_28_28, (MR_Integer) 1)));
#line 60 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 60 "prog_io_mode_defn.m"
                          }
#line 60 "prog_io_mode_defn.m"
                      }
#line 59 "prog_io_mode_defn.m"
                  }
#line 60 "prog_io_mode_defn.m"
              }
#line 60 "prog_io_mode_defn.m"
          }
#line 58 "prog_io_mode_defn.m"
        if (parse_tree__prog_io_mode_defn__succeeded)
#line 62 "prog_io_mode_defn.m"
          {
#line 62 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_14, parse_tree__prog_io_mode_defn__BodyTerm_15, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeIOM_12);
          }
#line 58 "prog_io_mode_defn.m"
        else
#line 64 "prog_io_mode_defn.m"
          {
#line 64 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_33_33;
#line 64 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__HeadTerm_103;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_30_30;
#line 65 "prog_io_mode_defn.m"
            MR_String parse_tree__prog_io_mode_defn__V_31_31;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_32_32;
#line 65 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_34_34;
#line 66 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__V_17_17;
#line 66 "prog_io_mode_defn.m"
            MR_Word parse_tree__prog_io_mode_defn__BodyTerm_104;

#line 66 "prog_io_mode_defn.m"
            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 66 "prog_io_mode_defn.m"
              {
#line 66 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
#line 66 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
#line 66 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 66 "prog_io_mode_defn.m"
                  {
#line 66 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_30_30, (MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_31_31, (MR_String) "--->") == 0);
#line 65 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 65 "prog_io_mode_defn.m"
                      {
#line 66 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 66 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 66 "prog_io_mode_defn.m"
                          {
#line 66 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__HeadTerm_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_32_32, (MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_32_32, (MR_Integer) 1)));
#line 66 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 66 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 66 "prog_io_mode_defn.m"
                              {
#line 66 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__BodyTerm_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_33_33, (MR_Integer) 0)));
#line 66 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_33_33, (MR_Integer) 1)));
#line 66 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "prog_io_mode_defn.m"
                              }
#line 66 "prog_io_mode_defn.m"
                          }
#line 65 "prog_io_mode_defn.m"
                      }
#line 66 "prog_io_mode_defn.m"
                  }
#line 66 "prog_io_mode_defn.m"
              }
#line 64 "prog_io_mode_defn.m"
            if (parse_tree__prog_io_mode_defn__succeeded)
#line 69 "prog_io_mode_defn.m"
              {
#line 69 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__BoundBodyTerm_18;

#line 69 "prog_io_mode_defn.m"
                {
#line 69 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__BoundBodyTerm_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 69 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_18, 0) = ((MR_Box) (&parse_tree__prog_io_mode_defn_scalar_common_2[0]));
#line 69 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_18, 1) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_33_33));
#line 69 "prog_io_mode_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__BoundBodyTerm_18, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 69 "prog_io_mode_defn.m"
                }
#line 70 "prog_io_mode_defn.m"
                {
#line 70 "prog_io_mode_defn.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_eqv_7_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_103, parse_tree__prog_io_mode_defn__BoundBodyTerm_18, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeIOM_12);
                }
#line 69 "prog_io_mode_defn.m"
              }
#line 64 "prog_io_mode_defn.m"
            else
#line 72 "prog_io_mode_defn.m"
              {
#line 72 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__HeadTerm_102;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__Args_19;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_39_39;
#line 75 "prog_io_mode_defn.m"
                MR_String parse_tree__prog_io_mode_defn__V_40_40;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_41_41;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_42_42;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_43_43;
#line 75 "prog_io_mode_defn.m"
                MR_String parse_tree__prog_io_mode_defn__V_44_44;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_45_45;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_46_46;
#line 75 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_20_20;
#line 76 "prog_io_mode_defn.m"
                MR_Word parse_tree__prog_io_mode_defn__V_21_21;

#line 75 "prog_io_mode_defn.m"
                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__InstDefnTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 75 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 75 "prog_io_mode_defn.m"
                  {
#line 75 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 0)));
#line 75 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 1)));
#line 75 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__InstDefnTerm_13, (MR_Integer) 2)));
#line 75 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_39_39)) == (MR_mktag((MR_Integer) 0)));
#line 75 "prog_io_mode_defn.m"
                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 75 "prog_io_mode_defn.m"
                      {
#line 75 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_39_39, (MR_Integer) 0)));
#line 75 "prog_io_mode_defn.m"
                        parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_40_40, (MR_String) "is") == 0);
#line 75 "prog_io_mode_defn.m"
                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 75 "prog_io_mode_defn.m"
                          {
#line 76 "prog_io_mode_defn.m"
                            parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__Args_19)) == (MR_mktag((MR_Integer) 1)));
#line 76 "prog_io_mode_defn.m"
                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 76 "prog_io_mode_defn.m"
                              {
#line 76 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__HeadTerm_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_19, (MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__Args_19, (MR_Integer) 1)));
#line 76 "prog_io_mode_defn.m"
                                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 76 "prog_io_mode_defn.m"
                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 76 "prog_io_mode_defn.m"
                                  {
#line 76 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_41_41, (MR_Integer) 1)));
#line 76 "prog_io_mode_defn.m"
                                    parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_mode_defn.m"
                                    if (parse_tree__prog_io_mode_defn__succeeded)
#line 75 "prog_io_mode_defn.m"
                                      {
#line 76 "prog_io_mode_defn.m"
                                        parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                        if (parse_tree__prog_io_mode_defn__succeeded)
#line 76 "prog_io_mode_defn.m"
                                          {
#line 76 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_42_42, (MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_42_42, (MR_Integer) 1)));
#line 76 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_42_42, (MR_Integer) 2)));
#line 76 "prog_io_mode_defn.m"
                                            parse_tree__prog_io_mode_defn__succeeded = (parse_tree__prog_io_mode_defn__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_mode_defn.m"
                                            if (parse_tree__prog_io_mode_defn__succeeded)
#line 75 "prog_io_mode_defn.m"
                                              {
#line 76 "prog_io_mode_defn.m"
                                                parse_tree__prog_io_mode_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_mode_defn__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                                if (parse_tree__prog_io_mode_defn__succeeded)
#line 76 "prog_io_mode_defn.m"
                                                  {
#line 76 "prog_io_mode_defn.m"
                                                    parse_tree__prog_io_mode_defn__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_43_43, (MR_Integer) 0)));
#line 76 "prog_io_mode_defn.m"
                                                    parse_tree__prog_io_mode_defn__succeeded = (strcmp(parse_tree__prog_io_mode_defn__V_44_44, (MR_String) "private") == 0);
#line 76 "prog_io_mode_defn.m"
                                                  }
#line 75 "prog_io_mode_defn.m"
                                              }
#line 76 "prog_io_mode_defn.m"
                                          }
#line 75 "prog_io_mode_defn.m"
                                      }
#line 76 "prog_io_mode_defn.m"
                                  }
#line 76 "prog_io_mode_defn.m"
                              }
#line 75 "prog_io_mode_defn.m"
                          }
#line 75 "prog_io_mode_defn.m"
                      }
#line 75 "prog_io_mode_defn.m"
                  }
#line 72 "prog_io_mode_defn.m"
                if (parse_tree__prog_io_mode_defn__succeeded)
#line 78 "prog_io_mode_defn.m"
                  {
#line 78 "prog_io_mode_defn.m"
                    parse_tree__prog_io_mode_defn__parse_abstract_inst_defn_6_p_0(parse_tree__prog_io_mode_defn__ModuleName_7, parse_tree__prog_io_mode_defn__VarSet_8, parse_tree__prog_io_mode_defn__HeadTerm_102, parse_tree__prog_io_mode_defn__Context_10, parse_tree__prog_io_mode_defn__SeqNum_11, parse_tree__prog_io_mode_defn__MaybeIOM_12);
                  }
#line 72 "prog_io_mode_defn.m"
                else
#line 82 "prog_io_mode_defn.m"
                  {
#line 82 "prog_io_mode_defn.m"
                    MR_Word parse_tree__prog_io_mode_defn__Spec_23;
#line 82 "prog_io_mode_defn.m"
                    MR_Word parse_tree__prog_io_mode_defn__V_66_66;
#line 82 "prog_io_mode_defn.m"
                    MR_Word parse_tree__prog_io_mode_defn__V_67_67;
#line 82 "prog_io_mode_defn.m"
                    MR_Word parse_tree__prog_io_mode_defn__V_68_68;
#line 82 "prog_io_mode_defn.m"
                    MR_Word parse_tree__prog_io_mode_defn__V_73_73;

#line 84 "prog_io_mode_defn.m"
                    {
#line 84 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__V_68_68 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_mode_defn__InstDefnTerm_13);
                    }
#line 84 "prog_io_mode_defn.m"
                    {
#line 84 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 84 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_68_68));
#line 84 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[33])));
#line 84 "prog_io_mode_defn.m"
                    }
#line 85 "prog_io_mode_defn.m"
                    {
#line 85 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_67_67));
#line 85 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 85 "prog_io_mode_defn.m"
                    }
#line 83 "prog_io_mode_defn.m"
                    {
#line 83 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 83 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_66_66));
#line 83 "prog_io_mode_defn.m"
                    }
#line 86 "prog_io_mode_defn.m"
                    {
#line 86 "prog_io_mode_defn.m"
                      parse_tree__prog_io_mode_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_23));
#line 86 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 86 "prog_io_mode_defn.m"
                    }
#line 86 "prog_io_mode_defn.m"
                    {
#line 86 "prog_io_mode_defn.m"
                      MR_Word base;
#line 86 "prog_io_mode_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 86 "prog_io_mode_defn.m"
                      *parse_tree__prog_io_mode_defn__MaybeIOM_12 = base;
#line 86 "prog_io_mode_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_73_73));
#line 86 "prog_io_mode_defn.m"
                    }
#line 82 "prog_io_mode_defn.m"
                  }
#line 72 "prog_io_mode_defn.m"
              }
#line 64 "prog_io_mode_defn.m"
          }
#line 58 "prog_io_mode_defn.m"
      }
#line 56 "prog_io_mode_defn.m"
    else
#line 91 "prog_io_mode_defn.m"
      {
#line 91 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_94_94;
#line 91 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_95_95;
#line 91 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__V_100_100;
#line 91 "prog_io_mode_defn.m"
        MR_Word parse_tree__prog_io_mode_defn__Spec_106;

#line 93 "prog_io_mode_defn.m"
        {
#line 93 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 93 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Context_10));
#line 93 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_mode_defn_scalar_common_1[34])));
#line 93 "prog_io_mode_defn.m"
        }
#line 93 "prog_io_mode_defn.m"
        {
#line 93 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_95_95));
#line 93 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 93 "prog_io_mode_defn.m"
        }
#line 92 "prog_io_mode_defn.m"
        {
#line 92 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__Spec_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 92 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 92 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 92 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_mode_defn__Spec_106, 2) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_94_94));
#line 92 "prog_io_mode_defn.m"
        }
#line 94 "prog_io_mode_defn.m"
        {
#line 94 "prog_io_mode_defn.m"
          parse_tree__prog_io_mode_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__Spec_106));
#line 94 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_mode_defn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 94 "prog_io_mode_defn.m"
        }
#line 94 "prog_io_mode_defn.m"
        {
#line 94 "prog_io_mode_defn.m"
          MR_Word base;
#line 94 "prog_io_mode_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 94 "prog_io_mode_defn.m"
          *parse_tree__prog_io_mode_defn__MaybeIOM_12 = base;
#line 94 "prog_io_mode_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_mode_defn__V_100_100));
#line 94 "prog_io_mode_defn.m"
        }
#line 91 "prog_io_mode_defn.m"
      }
#line 56 "prog_io_mode_defn.m"
  }
#line 30 "prog_io_mode_defn.m"
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
