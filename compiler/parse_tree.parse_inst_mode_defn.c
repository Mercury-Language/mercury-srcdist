/*
** Automatically generated from `parse_inst_mode_defn.m'
** by the Mercury compiler,
** version rotd-2025-07-16
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
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




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
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__409__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word * HeadVar__2_85);

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__391__1_2_f_0(
  MR_Word VarSet_9,
  MR_Word HeadVar__2_80);

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
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String AAn_7,
  MR_String DefnKind_8,
  MR_Word VarSet_9,
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


static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[67][2];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[1][3];




static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_1[67][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inst_ctor(...) == inst"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inst_ctor(...) ---> f(...) ; g(...) ..."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as inst definition, got"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be the definition of an inst."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "abstract_inst"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In inst definition:"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In mode definition:"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the definition of the mode"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "abstract_mode"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In abstract_mode definition:"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type constructor name/arity,"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the definition of the inst"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the inst name"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "reserved"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the Mercury implementation."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the mode name"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not occur"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on the right hand side of"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "bound")) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_inst_mode_defn_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_inst_mode_defn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__parse_inst_mode_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
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

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0[1] = { &parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0 };

static const MR_DuPtagLayout parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_stag_ordered_processed_mode_body_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0[1] = { &parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_functor_desc_processed_mode_body_0_0 };

static const MR_Integer parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__type_ctor_info_processed_mode_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001)),
  ((MR_Box) (parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001)),
  (MR_String) "parse_tree.parse_inst_mode_defn",
  (MR_String) "processed_mode_body",
  { parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_name_ordered_processed_mode_body_0 },
  { parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__du_ptag_ordered_processed_mode_body_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_inst_mode_defn__parse_tree__parse_inst_mode_defn__functor_number_map_processed_mode_body_0,

};

static void MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__409__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word * HeadVar__2_85)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), HeadVar__1_84, HeadVar__2_85);
}

static MR_Word MR_CALL 
parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__391__1_2_f_0(
  MR_Word VarSet_9,
  MR_Word HeadVar__2_80)
{
  MR_Word HeadVar__3_81;

  HeadVar__3_81 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, HeadVar__2_80);
  return HeadVar__3_81;
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

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

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_abstract_mode_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((HeadTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_30;
    MR_Word Spec_31;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_63;

    Var_46 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[42])));
    Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[35])));
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_51);
    Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[31])), Var_45);
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_mode_defn_item\'/6"));
      MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_31, 4) = ((MR_Box) (Pieces_30));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
    }
  }
  else
  {
    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(1, HeadTerms_9, 1))));
    MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, HeadTerms_9, 0))));

    if ((Var_126 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_14;
      MR_Word MaybeSymNameAndArgs_15;

      ContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[43]))));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_8, ContextPieces_14, Var_127, &MaybeSymNameAndArgs_15);
      if (((MR_tag((MR_Word) MaybeSymNameAndArgs_15)) == (MR_Integer) 0))
      {
        MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs_15, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_16));
        }
      }
      else
      {
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_15, 0))));
        MR_Word ArgTerms_18 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_15, 1))));
        MR_Word HeadTermContext_19;
        MR_Word NameSpecs_20;
        MR_Word MaybeInstArgVars_21;
        MR_Word InstArgVars_22;

        HeadTermContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_127);
        parse_tree__parse_inst_mode_defn__check_user_mode_name_3_p_0(SymName_17, HeadTermContext_19, &NameSpecs_20);
        parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "an", (MR_String) "abstract_mode definition", VarSet_8, ArgTerms_18, (MR_Word) ((MR_Unsigned) 0U), &MaybeInstArgVars_21);
        succeeded = (NameSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_21)) == (MR_Integer) 1);
          if (succeeded)
            InstArgVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeInstArgVars_21, 0))));
        }
        if (succeeded)
        {
          MR_Word InstVarSet_23;
          MR_Word ItemModeDefn_25;
          MR_Word Item_26;
          MR_Word Var_38;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_8, &InstVarSet_23);
          {
            ItemModeDefn_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemModeDefn_25, 0) = ((MR_Box) (SymName_17));
            MR_hl_field(0, ItemModeDefn_25, 1) = ((MR_Box) (InstArgVars_22));
            MR_hl_field(0, ItemModeDefn_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemModeDefn_25, 3) = ((MR_Box) (InstVarSet_23));
            MR_hl_field(0, ItemModeDefn_25, 4) = ((MR_Box) (Context_10));
            MR_hl_field(0, ItemModeDefn_25, 5) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_26, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Item_26, 1) = ((MR_Box) (ItemModeDefn_25));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (Item_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
          }
        }
        else
        {
          MR_Word Var_39;
          MR_Word Specs_65;

          Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_21);
          Specs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NameSpecs_20, Var_39);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_65));
          }
        }
      }
    }
    else
    {
      MR_Word Pieces_72;
      MR_Word Spec_73;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_96;

      Var_79 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[42])));
      Var_85 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[35])));
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_84);
      Pieces_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[31])), Var_78);
      {
        Spec_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_mode_defn_item\'/6"));
        MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_73, 3) = ((MR_Box) (Context_10));
        MR_hl_field(0, Spec_73, 4) = ((MR_Box) (Pieces_72));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Spec_73));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
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
  MR_bool succeeded;
  MR_String Name_7;

  Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
  succeeded = parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(Name_7);
  if (succeeded)
  {
    MR_Word NamePieces_8;
    MR_Word NameSpec_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_17, 1) = ((MR_Box) (Name_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_15 = parse_tree__error_spec__color_as_subject_1_f_0(Var_16);
    Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[56])));
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[58])));
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[54])), Var_24);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_19);
    NamePieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[60])), Var_14);
    {
      NameSpec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_mode_name\'/3"));
      MR_hl_field(0, NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, NameSpec_9, 3) = ((MR_Box) (Context_5));
      MR_hl_field(0, NameSpec_9, 4) = ((MR_Box) (NamePieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *NameSpecs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NameSpec_9));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
parse_tree__parse_inst_mode_defn__parse_mode_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;
  MR_Word ContextPieces_15;
  MR_Word MaybeSymNameAndArgs_16;

  ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[37]))));
  parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, ContextPieces_15, HeadTerm_10, &MaybeSymNameAndArgs_16);
  if (((MR_tag((MR_Word) MaybeSymNameAndArgs_16)) == (MR_Integer) 0))
  {
    MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs_16, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_17));
    }
  }
  else
  {
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_16, 0))));
    MR_Word ArgTerms_19 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_16, 1))));
    MR_Word HeadTermContext_20;
    MR_Word NameSpecs_21;
    MR_Word MaybeInstArgVars_22;
    MR_Word NamedContextPieces_23;
    MR_Word MaybeMode_24;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Name_59;
    MR_Word InstArgVars_25;
    MR_Word Mode_26;

    HeadTermContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
    Name_59 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
    succeeded = parse_tree__parse_inst_mode_name__is_known_mode_name_1_p_0(Name_59);
    if (succeeded)
    {
      MR_Word NamePieces_60;
      MR_Word NameSpec_61;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word Var_76;
      MR_Word Var_77;

      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (Name_59));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_67 = parse_tree__error_spec__color_as_subject_1_f_0(Var_68);
      Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[56])));
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[58])));
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[54])), Var_76);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_71);
      NamePieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[60])), Var_66);
      {
        NameSpec_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NameSpec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_mode_name\'/3"));
        MR_hl_field(0, NameSpec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, NameSpec_61, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, NameSpec_61, 3) = ((MR_Box) (HeadTermContext_20));
        MR_hl_field(0, NameSpec_61, 4) = ((MR_Box) (NamePieces_60));
      }
      {
        NameSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NameSpecs_21, 0) = ((MR_Box) (NameSpec_61));
        MR_hl_field(1, NameSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      NameSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (BodyTerm_11));
    }
    parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "a", (MR_String) "mode definition", VarSet_9, ArgTerms_19, Var_35, &MaybeInstArgVars_22);
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (SymName_18));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[40])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[38])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    NamedContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36);
    parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_2[1])), VarSet_9, NamedContextPieces_23, BodyTerm_11, &MaybeMode_24);
    succeeded = (NameSpecs_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        InstArgVars_25 = ((MR_Word) ((MR_hl_field(1, MaybeInstArgVars_22, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMode_24)) == (MR_Integer) 1);
        if (succeeded)
          Mode_26 = ((MR_Word) ((MR_hl_field(1, MaybeMode_24, 0))));
      }
    }
    if (succeeded)
    {
      MR_Word InstVarSet_27;
      MR_Word MaybeAbstractModeDefn_28;
      MR_Word ItemModeDefn_29;
      MR_Word Item_30;
      MR_Word Var_47;
      MR_Word Var_48;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_9, &InstVarSet_27);
      Var_47 = (MR_Word) (Mode_26);
      {
        MaybeAbstractModeDefn_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeAbstractModeDefn_28, 0) = ((MR_Box) (Var_47));
      }
      {
        ItemModeDefn_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemModeDefn_29, 0) = ((MR_Box) (SymName_18));
        MR_hl_field(0, ItemModeDefn_29, 1) = ((MR_Box) (InstArgVars_25));
        MR_hl_field(0, ItemModeDefn_29, 2) = ((MR_Box) (MaybeAbstractModeDefn_28));
        MR_hl_field(0, ItemModeDefn_29, 3) = ((MR_Box) (InstVarSet_27));
        MR_hl_field(0, ItemModeDefn_29, 4) = ((MR_Box) (Context_12));
        MR_hl_field(0, ItemModeDefn_29, 5) = ((MR_Box) (SeqNum_13));
      }
      {
        Item_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_30, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, Item_30, 1) = ((MR_Box) (ItemModeDefn_29));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Item_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
      }
    }
    else
    {
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Specs_52;

      Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_22);
      Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeMode_24);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_50, Var_51);
      Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NameSpecs_21, Var_49);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_52));
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
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((HeadTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_64;

    Var_47 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[33])));
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[35])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[31])), Var_46);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_inst_defn_item\'/6"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
    }
  }
  else
  {
    MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, HeadTerms_9, 1))));
    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, HeadTerms_9, 0))));

    if ((Var_127 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ContextPieces_14;
      MR_Word MaybeNameAndArgs_15;

      ContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[36]))));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_8, ContextPieces_14, Var_128, &MaybeNameAndArgs_15);
      if (((MR_tag((MR_Word) MaybeNameAndArgs_15)) == (MR_Integer) 0))
      {
        MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(0, MaybeNameAndArgs_15, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_16));
        }
      }
      else
      {
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndArgs_15, 0))));
        MR_Word ArgTerms_18 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndArgs_15, 1))));
        MR_Word HeadTermContext_19;
        MR_Word NameSpecs_20;
        MR_Word MaybeInstArgVars_21;
        MR_Word InstArgVars_22;

        HeadTermContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_128);
        parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(SymName_17, HeadTermContext_19, &NameSpecs_20);
        parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "an", (MR_String) "abstract_inst definition", VarSet_8, ArgTerms_18, (MR_Word) ((MR_Unsigned) 0U), &MaybeInstArgVars_21);
        succeeded = (NameSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_21)) == (MR_Integer) 1);
          if (succeeded)
            InstArgVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeInstArgVars_21, 0))));
        }
        if (succeeded)
        {
          MR_Word InstVarSet_23;
          MR_Word ItemInstDefn_26;
          MR_Word Item_27;
          MR_Word Var_39;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_8, &InstVarSet_23);
          {
            ItemInstDefn_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemInstDefn_26, 0) = ((MR_Box) (SymName_17));
            MR_hl_field(0, ItemInstDefn_26, 1) = ((MR_Box) (InstArgVars_22));
            MR_hl_field(0, ItemInstDefn_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstDefn_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstDefn_26, 4) = ((MR_Box) (InstVarSet_23));
            MR_hl_field(0, ItemInstDefn_26, 5) = ((MR_Box) (Context_10));
            MR_hl_field(0, ItemInstDefn_26, 6) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, Item_27, 1) = ((MR_Box) (ItemInstDefn_26));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Item_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
          }
        }
        else
        {
          MR_Word Var_40;
          MR_Word Specs_66;

          Var_40 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_21);
          Specs_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NameSpecs_20, Var_40);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_66));
          }
        }
      }
    }
    else
    {
      MR_Word Pieces_73;
      MR_Word Spec_74;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_97;

      Var_80 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[33])));
      Var_86 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[35])));
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
      Pieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[31])), Var_79);
      {
        Spec_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_abstract_inst_defn_item\'/6"));
        MR_hl_field(0, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_74, 3) = ((MR_Box) (Context_10));
        MR_hl_field(0, Spec_74, 4) = ((MR_Box) (Pieces_73));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (Spec_74));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
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
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word InstDefnTerm_13;
  MR_Word Var_22;

  if (succeeded)
  {
    InstDefnTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word HeadTerm_14;
    MR_Word BodyTerm_15;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(0, InstDefnTerm_13, 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, InstDefnTerm_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, 0))));
        succeeded = (strcmp(Var_24, (MR_String) "==") == 0);
        if (succeeded)
        {
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BodyTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_14, BodyTerm_15, Context_10, SeqNum_11, MaybeIOM_12);
    else
    {
      MR_Word Var_31;
      MR_Word HeadTerm_118;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_32;

      succeeded = ((MR_tag((MR_Word) InstDefnTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(0, InstDefnTerm_13, 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(0, InstDefnTerm_13, 1))));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_String) ((MR_hl_field(0, Var_28, 0))));
          succeeded = (strcmp(Var_29, (MR_String) "--->") == 0);
          if (succeeded)
          {
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_118 = ((MR_Word) ((MR_hl_field(1, Var_30, 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, 1))));
              succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
                succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_hl_field(0, BoundBodyTerm_18, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_2[0]));
          MR_hl_field(0, BoundBodyTerm_18, 1) = ((MR_Box) (Var_31));
          MR_hl_field(0, BoundBodyTerm_18, 2) = ((MR_Box) (Context_10));
        }
        parse_tree__parse_inst_mode_defn__parse_inst_defn_eqv_7_p_0(ModuleName_7, VarSet_8, HeadTerm_118, BoundBodyTerm_18, Context_10, SeqNum_11, MaybeIOM_12);
      }
      else
      {
        MR_String InstDefnTermStr_19;
        MR_Word Pieces_20;
        MR_Word Spec_21;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_50;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_63;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_85;
        MR_Word Var_86;

        InstDefnTermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, InstDefnTerm_13);
        Var_45 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[8])));
        Var_58 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[13])));
        {
          Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_74, 1) = ((MR_Box) (InstDefnTermStr_19));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[19])));
        }
        Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_73);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[17])), Var_71);
        Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_63);
        Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[11])), Var_57);
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_50);
        Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[6])), Var_44);
        Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstDefnTerm_13);
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_item\'/6"));
          MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Var_85));
          MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
        }
      }
    }
  }
  else
  {
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_116;
    MR_Word Pieces_120;
    MR_Word Spec_121;

    Var_93 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[25])));
    Var_102 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[27])));
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[29])));
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_101);
    Pieces_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[21])), Var_92);
    {
      Spec_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_121, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_item\'/6"));
      MR_hl_field(0, Spec_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_121, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_121, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_121, 4) = ((MR_Box) (Pieces_120));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (Spec_121));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_116));
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
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
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

  ContextPieces_15 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[36]))));
  succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_45 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, 1))));
    succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, 0))));
      succeeded = (strcmp(Var_46, (MR_String) "for") == 0);
      if (succeeded)
      {
        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTermPrime_16 = ((MR_Word) ((MR_hl_field(1, Var_47, 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ForTypeTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
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
    succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ForTypeTerm_17, &TypeSymName_20, &TypeArity_21);
    if (succeeded)
    {
      MR_Word Var_50;

      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_50, 0) = ((MR_Box) (TypeSymName_20));
        MR_hl_field(0, Var_50, 1) = ((MR_Box) (TypeArity_21));
      }
      {
        MaybeForType_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeForType_22, 0) = ((MR_Box) (Var_50));
      }
      ForTypeSpecs_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String ForTypeTermStr_24;
      MR_Word ForTypePieces_25;
      MR_Word ForTypeSpec_26;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_80;

      MaybeForType_22 = (MR_Word) ((MR_Unsigned) 0U);
      ForTypeTermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, ForTypeTerm_17);
      Var_56 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[47])));
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (ForTypeTermStr_24));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[19])));
      }
      Var_67 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_68);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[9])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[49])), Var_66);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_61);
      ForTypePieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[45])), Var_55);
      Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ForTypeTerm_17);
      {
        ForTypeSpec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForTypeSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.parse_inst_defn_eqv\'/7"));
        MR_hl_field(0, ForTypeSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ForTypeSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, ForTypeSpec_26, 3) = ((MR_Box) (Var_80));
        MR_hl_field(0, ForTypeSpec_26, 4) = ((MR_Box) (ForTypePieces_25));
      }
      {
        ForTypeSpecs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ForTypeSpecs_23, 0) = ((MR_Box) (ForTypeSpec_26));
        MR_hl_field(1, ForTypeSpecs_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
  {
    NameTerm_19 = HeadTerm_10;
    MaybeForType_22 = (MR_Word) ((MR_Unsigned) 0U);
    ForTypeSpecs_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, ContextPieces_15, NameTerm_19, &MaybeSymNameAndArgs_27);
  if (((MR_tag((MR_Word) MaybeSymNameAndArgs_27)) == (MR_Integer) 0))
  {
    MR_Word SymNameAndArgSpecs_28 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs_27, 0))));
    MR_Word Specs_29;

    Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SymNameAndArgSpecs_28, ForTypeSpecs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_29));
    }
  }
  else
  {
    MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_27, 0))));
    MR_Word ArgTerms_31 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_27, 1))));
    MR_Word HeadTermContext_32;
    MR_Word NameSpecs_33;
    MR_Word MaybeInstArgVars_34;
    MR_Word NamedContextPieces_35;
    MR_Word MaybeInst_36;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word InstArgVars_37;
    MR_Word Inst_38;

    HeadTermContext_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
    parse_tree__parse_inst_mode_defn__check_user_inst_name_3_p_0(SymName_30, HeadTermContext_32, &NameSpecs_33);
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (BodyTerm_11));
    }
    parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0((MR_String) "an", (MR_String) "inst definition", VarSet_9, ArgTerms_31, Var_84, &MaybeInstArgVars_34);
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (SymName_30));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[40])));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[50])));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
    }
    NamedContextPieces_35 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85);
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_2[2])), VarSet_9, NamedContextPieces_35, BodyTerm_11, &MaybeInst_36);
    succeeded = (NameSpecs_33 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ForTypeSpecs_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeInstArgVars_34)) == (MR_Integer) 1);
        if (succeeded)
        {
          InstArgVars_37 = ((MR_Word) ((MR_hl_field(1, MaybeInstArgVars_34, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeInst_36)) == (MR_Integer) 1);
          if (succeeded)
            Inst_38 = ((MR_Word) ((MR_hl_field(1, MaybeInst_36, 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word InstVarSet_39;
      MR_Word MaybeAbstractInstDefn_40;
      MR_Word ItemInstDefn_41;
      MR_Word Item_42;
      MR_Word Var_96;
      MR_Word Var_97;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_9, &InstVarSet_39);
      Var_96 = (MR_Word) (Inst_38);
      {
        MaybeAbstractInstDefn_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeAbstractInstDefn_40, 0) = ((MR_Box) (Var_96));
      }
      {
        ItemInstDefn_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemInstDefn_41, 0) = ((MR_Box) (SymName_30));
        MR_hl_field(0, ItemInstDefn_41, 1) = ((MR_Box) (InstArgVars_37));
        MR_hl_field(0, ItemInstDefn_41, 2) = ((MR_Box) (MaybeForType_22));
        MR_hl_field(0, ItemInstDefn_41, 3) = ((MR_Box) (MaybeAbstractInstDefn_40));
        MR_hl_field(0, ItemInstDefn_41, 4) = ((MR_Box) (InstVarSet_39));
        MR_hl_field(0, ItemInstDefn_41, 5) = ((MR_Box) (Context_12));
        MR_hl_field(0, ItemInstDefn_41, 6) = ((MR_Box) (SeqNum_13));
      }
      {
        Item_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_42, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(3, Item_42, 1) = ((MR_Box) (ItemInstDefn_41));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (Item_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_97));
      }
    }
    else
    {
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Specs_102;

      Var_100 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[1]), MaybeInstArgVars_34);
      Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_36);
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_100, Var_101);
      Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ForTypeSpecs_23, Var_99);
      Specs_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NameSpecs_33, Var_98);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_102));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_85;

  parse_tree__parse_inst_mode_defn__IntroducedFrom__pred__check_inst_mode_defn_args__409__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_85);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_85));
}

static MR_Box MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_81;

  conv0_HeadVar__3_81 = parse_tree__parse_inst_mode_defn__IntroducedFrom__func__check_inst_mode_defn_args__391__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_81));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0(
  MR_String AAn_7,
  MR_String DefnKind_8,
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word MaybeBodyTerm_11,
  MR_Word * MaybeArgVars_12)
{
  MR_bool succeeded;
  MR_Word MaybeArgVars0_13;

  parse_tree__parse_util__terms_to_distinct_vars_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, AAn_7, DefnKind_8, ArgTerms_10, &MaybeArgVars0_13);
  if (((MR_tag((MR_Word) MaybeArgVars0_13)) == (MR_Integer) 0))
    *MaybeArgVars_12 = (MR_Word) (MaybeArgVars0_13);
  else
  {
    MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(1, MaybeArgVars0_13, 0))));
    MR_Word BodyTerm_16;
    MR_Word FreeVars_23;
    MR_Word TypeInfo_77_77;
    MR_Word BodyVars_17;
    MR_Word BodyVarsSet_20;
    MR_Word ArgVarsSet_21;
    MR_Word FreeVarsSet_22;

    succeeded = (MaybeBodyTerm_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BodyTerm_16 = ((MR_Word) ((MR_hl_field(1, MaybeBodyTerm_11, 0))));
      mercury__term_vars__vars_in_term_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_16, &BodyVars_17);
      succeeded = (BodyVars_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_77_77 = (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]);
        mercury__set__list_to_set_2_p_0(TypeInfo_77_77, BodyVars_17, &BodyVarsSet_20);
        mercury__set__list_to_set_2_p_0(TypeInfo_77_77, ArgVars_14, &ArgVarsSet_21);
        mercury__set__difference_3_p_0(TypeInfo_77_77, BodyVarsSet_20, ArgVarsSet_21, &FreeVarsSet_22);
        mercury__set__to_sorted_list_2_p_0(TypeInfo_77_77, FreeVarsSet_22, &FreeVars_23);
        succeeded = (FreeVars_23 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word FreeVarPieces_26;
      MR_Word FreePieces_27;
      MR_Word FreeSpec_28;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_Specs_2_74;
      MR_Box conv1_Var_39;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__parse_inst_mode_defn_scalar_common_3[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__parse_inst_mode_defn__check_inst_mode_defn_args_6_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (VarSet_9));
      }
      FreeVarPieces_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, FreeVars_23);
      conv1_Var_39 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FreeVars_23, ((MR_Box) ((MR_String) "a free inst parameter")), ((MR_Box) ((MR_String) "free inst parameters")));
      Var_39 = ((MR_String) (conv1_Var_39));
      {
        Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[62])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[30])));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
      }
      Var_47 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), FreeVarPieces_26);
      Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[64])));
      {
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (AAn_7));
      }
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (DefnKind_8));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[66])));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_inst_mode_defn_scalar_common_1[65])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_57);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_51);
      FreePieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_46);
      Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_16);
      {
        FreeSpec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FreeSpec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_inst_mode_defn_args\'/6"));
        MR_hl_field(0, FreeSpec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, FreeSpec_28, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, FreeSpec_28, 3) = ((MR_Box) (Var_73));
        MR_hl_field(0, FreeSpec_28, 4) = ((MR_Box) (FreePieces_27));
      }
      {
        STATE_VARIABLE_Specs_2_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_2_74, 0) = ((MR_Box) (FreeSpec_28));
        MR_hl_field(1, STATE_VARIABLE_Specs_2_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeArgVars_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_2_74));
      }
    }
    else
    {
      MR_Word InstArgVars_29;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_inst_mode_defn_scalar_common_5[0]), ArgVars_14, &InstArgVars_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArgVars_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstArgVars_29));
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
  MR_bool succeeded;
  MR_String Name_7;

  Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
  succeeded = parse_tree__parse_inst_mode_name__is_known_inst_name_1_p_0(Name_7);
  if (succeeded)
  {
    MR_Word NamePieces_8;
    MR_Word NameSpec_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_17, 1) = ((MR_Box) (Name_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_15 = parse_tree__error_spec__color_as_subject_1_f_0(Var_16);
    Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[56])));
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[58])));
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[54])), Var_24);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_19);
    NamePieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_inst_mode_defn_scalar_common_1[52])), Var_14);
    {
      NameSpec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_inst_mode_defn.check_user_inst_name\'/3"));
      MR_hl_field(0, NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, NameSpec_9, 3) = ((MR_Box) (Context_5));
      MR_hl_field(0, NameSpec_9, 4) = ((MR_Box) (NamePieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *NameSpecs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NameSpec_9));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_inst_mode_defn____Unify____processed_mode_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_inst_mode_defn____Compare____processed_mode_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
