/*
** Automatically generated from `parse_pragma_analysis.m'
** by the Mercury compiler,
** version rotd-2022-09-29
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


// :- module parse_tree.parse_pragma_analysis.
// :- implementation.

/*
INIT mercury__parse_tree__parse_pragma_analysis__init
ENDINIT
*/

#include "parse_tree.parse_pragma_analysis.mih"


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
#include "term_context.mih"
#include "term_int.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0;

static void MR_CALL 
parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_reuse__603__1_2_p_0(
  MR_Word HeadVar__1_92,
  MR_Word * HeadVar__2_93);

static void MR_CALL 
parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_sharing__549__1_2_p_0(
  MR_Word HeadVar__1_92,
  MR_Word * HeadVar__2_93);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_lp_term_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLpTerm_6);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_rational_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRational_6);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeConstr_6);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_bool_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeBool_8);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeMaybeArgSizeConstraints_6);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_termination_info_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeTerminationInfo_8);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybePredOrFunc_6);


static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_1[162][2];

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_3[11][1];

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_6[1][5];




static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_1[162][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_2[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have five arguments."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the third argument of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the fourth argument of"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the fifth argument of"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have three arguments."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[35])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have two arguments."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "finite"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in the second argument of"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the first argument:"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the second argument:"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have no arguments."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "infinite"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "not_set"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[53])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected one of"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "finite(N, <used_args>)"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[35])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have four arguments."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[11])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Syntax error in"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[82])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[13])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the third argument of an"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the fourth argument of an"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[20])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "conditional"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[53])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_exception"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "user_exception"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which must be either"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have one argument,"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_throw"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "will_not_throw"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[53])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[13])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "traling_info"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "will_not_modify_trail"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_modify_trail"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[13])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[19])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[143])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a boolean (yes or no),"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "can_loop"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cannot_loop"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a description of"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument size constraints,"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected an argument size constraint,"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected an integer,"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a linear term of the form"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "term(<varnum>, <rational_coeff>)"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a rational number of the form"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "r(N, M)"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "function"))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_3[11][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 14U)
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[0])))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_3[0]))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_analysis_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_builtin__type_ctor_info_int_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_bool__type_ctor_info_bool_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_analysis__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)
  }
};

static void MR_CALL 
parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_reuse__603__1_2_p_0(
  MR_Word HeadVar__1_92,
  MR_Word * HeadVar__2_93)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_92, HeadVar__2_93);
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_sharing__549__1_2_p_0(
  MR_Word HeadVar__1_92,
  MR_Word * HeadVar__2_93)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_92, HeadVar__2_93);
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_lp_term_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeLpTerm_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word VarIdTerm_7;
  MR_Word CoeffTerm_8;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      succeeded = (strcmp(Var_22, (MR_String) "term") == 0);
      if (succeeded)
      {
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarIdTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CoeffTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
            succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeVarId_11;
    MR_Word MaybeCoeff_15;
    MR_Integer VarId0_10;
    MR_Integer VarId_16;
    MR_Word Coeff_17;

    succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarIdTerm_7, &VarId0_10);
    if (succeeded)
      {
        MaybeVarId_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVarId_11, 0) = ((MR_Box) (VarId0_10));
      }
    else
    {
      MR_String VarIdTermStr_12;
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_42;
      MR_Word Var_43;

      VarIdTermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, VarIdTerm_7);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (VarIdTermStr_12));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[154])));
        MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_28));
      }
      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarIdTerm_7);
      {
        Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_lp_term\'/3"));
        MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeVarId_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeVarId_11, 0) = ((MR_Box) (Var_43));
      }
    }
    parse_tree__parse_pragma_analysis__parse_rational_3_p_0(VarSet_4, CoeffTerm_8, &MaybeCoeff_15);
    succeeded = ((MR_tag((MR_Word) MaybeVarId_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      VarId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVarId_11, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeCoeff_15)) == (MR_Integer) 1);
      if (succeeded)
        Coeff_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCoeff_15, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word LpTerm_18;

      {
        LpTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LpTerm_18, 0) = ((MR_Box) (VarId_16));
        MR_hl_field(MR_mktag(0), LpTerm_18, 1) = ((MR_Box) (Coeff_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeLpTerm_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LpTerm_18));
      }
    }
    else
    {
      MR_Word Specs_19;
      MR_Word Var_45;
      MR_Word Var_46;

      Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeVarId_11);
      Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__rat__libs__rat__type_ctor_info_rat_0), MaybeCoeff_15);
      Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_45, Var_46);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeLpTerm_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
      }
    }
  }
  else
  {
    MR_String TermStr_20;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Pieces_72;
    MR_Word Spec_73;

    TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TermStr_20));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[156])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[155])));
      MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_49));
    }
    Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_lp_term\'/3"));
      MR_hl_field(MR_mktag(1), Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_73, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Spec_73, 4) = ((MR_Box) (Pieces_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_73));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeLpTerm_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_rational_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRational_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Integer Numer_10;
  MR_Integer Denom_11;
  MR_Word TypeCtorInfo_46_46;
  MR_Word NumerTerm_7;
  MR_Word DenomTerm_8;
  MR_Word Var_16;
  MR_String Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      succeeded = (strcmp(Var_17, (MR_String) "r") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NumerTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DenomTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_46_46 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_46_46, NumerTerm_7, &Numer_10);
              if (succeeded)
                succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_46_46, DenomTerm_8, &Denom_11);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Rational_12;

    Rational_12 = libs__rat__rat_2_f_0(Numer_10, Denom_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRational_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rational_12));
    }
  }
  else
  {
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;
    MR_Word Var_44;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[158])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[157])));
      MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_23));
    }
    Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_rational\'/3"));
      MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRational_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeLpTerm_6;

  parse_tree__parse_pragma_analysis__parse_lp_term_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeLpTerm_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeLpTerm_6));
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeConstr_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_String Functor_7;
  MR_Word Terms_8;
  MR_Word ConstantTerm_9;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
      if ((strcmp(Functor_7, (MR_String) "eq") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(Functor_7, (MR_String) "le") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Terms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConstantTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word LPTermsResult_11;
    MR_Word ConstantResult_12;
    MR_Integer Numer_58;
    MR_Integer Denom_59;
    MR_Word TypeCtorInfo_46_89;
    MR_Word NumerTerm_55;
    MR_Word DenomTerm_56;
    MR_Word Var_64;
    MR_String Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word LPTerms_13;
    MR_Word Constant_14;

    parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_String) "a list of linear terms", (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_2[4]), VarSet_4, Terms_8, &LPTermsResult_11);
    succeeded = ((MR_tag((MR_Word) ConstantTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstantTerm_9, (MR_Integer) 0))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstantTerm_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
        succeeded = (strcmp(Var_65, (MR_String) "r") == 0);
        if (succeeded)
        {
          succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NumerTerm_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
            succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DenomTerm_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
              Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
              succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_46_89 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_46_89, NumerTerm_55, &Numer_58);
                if (succeeded)
                  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_46_89, DenomTerm_56, &Denom_59);
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Rational_60;

      Rational_60 = libs__rat__rat_2_f_0(Numer_58, Denom_59);
      {
        ConstantResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConstantResult_12, 0) = ((MR_Box) (Rational_60));
      }
    }
    else
    {
      MR_String TermStr_61;
      MR_Word Pieces_62;
      MR_Word Spec_63;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_86;
      MR_Word Var_87;

      TermStr_61 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, ConstantTerm_9);
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (TermStr_61));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[158])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Pieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[157])));
        MR_hl_field(MR_mktag(1), Pieces_62, 1) = ((MR_Box) (Var_71));
      }
      Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstantTerm_9);
      {
        Spec_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_rational\'/3"));
        MR_hl_field(MR_mktag(1), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_63, 3) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Spec_63, 4) = ((MR_Box) (Pieces_62));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Spec_63));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ConstantResult_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstantResult_12, 0) = ((MR_Box) (Var_87));
      }
    }
    succeeded = ((MR_tag((MR_Word) LPTermsResult_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      LPTerms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LPTermsResult_11, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) ConstantResult_12)) == (MR_Integer) 1);
      if (succeeded)
        Constant_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstantResult_12, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Constr_15;

      if ((strcmp(Functor_7, (MR_String) "eq") == 0))
        {
          Constr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Constr_15, 0) = ((MR_Box) (LPTerms_13));
          MR_hl_field(MR_mktag(1), Constr_15, 1) = ((MR_Box) (Constant_14));
        }
      else
        {
          Constr_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Constr_15, 0) = ((MR_Box) (LPTerms_13));
          MR_hl_field(MR_mktag(0), Constr_15, 1) = ((MR_Box) (Constant_14));
        }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConstr_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constr_15));
      }
    }
    else
    {
      MR_Word Specs_16;
      MR_Word Var_26;
      MR_Word Var_27;

      Var_26 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[10]), LPTermsResult_11);
      Var_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__rat__libs__rat__type_ctor_info_rat_0), ConstantResult_12);
      Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_26, Var_27);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConstr_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_16));
      }
    }
  }
  else
  {
    MR_String TermStr_17;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_44;
    MR_Word Var_45;

    TermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (TermStr_17));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[153])));
      MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_30));
    }
    Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_arg_size_constraint\'/3"));
      MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeConstr_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_bool_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeBool_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word Bool_11;
  MR_String Name_9;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
        if ((strcmp(Name_9, (MR_String) "no") == 0))
        {
          Bool_11 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Name_9, (MR_String) "yes") == 0))
        {
          Bool_11 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBool_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bool_11));
    }
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_37;
    MR_Word Var_38;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[147])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_17, Var_18);
    Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_bool\'/4"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeBool_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_mm_tabling_info_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_63;
    MR_Word Var_197;
    MR_Word Var_198;

    Var_197 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
      MR_hl_field(MR_mktag(1), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_63, 3) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(1), Spec_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
    }
    {
      Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Spec_63));
      MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_198));
    }
  }
  else
  {
    MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_262 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_209;
      MR_Word Var_213;
      MR_Word Var_214;

      Var_213 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_209, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
        MR_hl_field(MR_mktag(1), Spec_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_209, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_209, 3) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(1), Spec_209, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
      }
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Spec_209));
        MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_214));
      }
    }
    else
    {
      MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 1))));
      MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 0))));

      if ((Var_264 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_218;
        MR_Word Var_222;
        MR_Word Var_223;

        Var_222 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_218, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
          MR_hl_field(MR_mktag(1), Spec_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_218, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_218, 3) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(1), Spec_218, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
        }
        {
          Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Spec_218));
          MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_223));
        }
      }
      else
      {
        MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 1))));
        MR_Word Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 0))));

        if ((Var_266 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_227;
          MR_Word Var_231;
          MR_Word Var_232;

          Var_231 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_227, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
            MR_hl_field(MR_mktag(1), Spec_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_227, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_227, 3) = ((MR_Box) (Var_231));
            MR_hl_field(MR_mktag(1), Spec_227, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
          }
          {
            Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Spec_227));
            MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_232));
          }
        }
        else
        {
          MR_Word Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 1))));
          MR_Word Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 0))));

          if ((Var_268 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_236;
            MR_Word Var_240;
            MR_Word Var_241;

            Var_240 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_236, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
              MR_hl_field(MR_mktag(1), Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_236, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_236, 3) = ((MR_Box) (Var_240));
              MR_hl_field(MR_mktag(1), Spec_236, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
            }
            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Spec_236));
              MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_241));
            }
          }
          else
          {
            MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 1))));
            MR_Word Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 0))));

            if ((Var_270 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybePredOrFunc_20;
              MR_Word PNContextPieces_21;
              MR_Word MaybePredName_22;
              MR_Word ArityContextPieces_23;
              MR_Word MaybeArity_24;
              MR_Word ModeNumContextPieces_25;
              MR_Word MaybeModeNum_26;
              MR_Word MaybeMMTablingStatus_30;
              MR_Word MMTablingStatus0_29;
              MR_String MMTablingStatusFunctor_27;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word PredOrFunc_34;
              MR_Word PredName_35;
              MR_Integer Arity_36;
              MR_Integer ModeNum_37;
              MR_Word MMTablingStatus_38;

              parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(VarSet_9, Var_263, &MaybePredOrFunc_20);
              PNContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[144])));
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_no_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, PNContextPieces_21, Var_265, &MaybePredName_22);
              ArityContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[145])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ArityContextPieces_23, VarSet_9, Var_267, &MaybeArity_24);
              ModeNumContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[146])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ModeNumContextPieces_25, VarSet_9, Var_269, &MaybeModeNum_26);
              succeeded = ((MR_tag((MR_Word) Var_271)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 0))));
                Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 1))));
                succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    MMTablingStatusFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0))));
                    if ((strcmp(MMTablingStatusFunctor_27, (MR_String) "mm_tabled_may_call") == 0))
                    {
                      MMTablingStatus0_29 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(MMTablingStatusFunctor_27, (MR_String) "mm_tabled_conditional") == 0))
                    {
                      MMTablingStatus0_29 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(MMTablingStatusFunctor_27, (MR_String) "mm_tabled_will_not_call") == 0))
                    {
                      MMTablingStatus0_29 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
              if (succeeded)
                {
                  MaybeMMTablingStatus_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeMMTablingStatus_30, 0) = ((MR_Box) (MMTablingStatus0_29));
                }
              else
              {
                MR_String MMTablingStatusTermStr_31;
                MR_Word MMTablingStatusPieces_32;
                MR_Word MMTablingStatusSpec_33;
                MR_Word Var_109;
                MR_Word Var_112;
                MR_Word Var_115;
                MR_Word Var_117;
                MR_Word Var_120;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_126;
                MR_Word Var_129;
                MR_Word Var_132;
                MR_Word Var_135;
                MR_Word Var_138;
                MR_Word Var_141;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_155;
                MR_Word Var_156;

                MMTablingStatusTermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_271);
                Var_124 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62]));
                {
                  Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (MMTablingStatusTermStr_31));
                }
                {
                  Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
                }
                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
                  MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[100])));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
                }
                {
                  Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[63])));
                  MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
                }
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[139])));
                  MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                }
                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
                }
                {
                  Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[138])));
                  MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                }
                {
                  Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
                }
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_117));
                }
                {
                  Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18])));
                  MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_115));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[140])));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
                }
                {
                  MMTablingStatusPieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MMTablingStatusPieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), MMTablingStatusPieces_32, 1) = ((MR_Box) (Var_109));
                }
                Var_155 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_271);
                {
                  MMTablingStatusSpec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MMTablingStatusSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
                  MR_hl_field(MR_mktag(1), MMTablingStatusSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), MMTablingStatusSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), MMTablingStatusSpec_33, 3) = ((MR_Box) (Var_155));
                  MR_hl_field(MR_mktag(1), MMTablingStatusSpec_33, 4) = ((MR_Box) (MMTablingStatusPieces_32));
                }
                {
                  Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (MMTablingStatusSpec_33));
                  MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeMMTablingStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeMMTablingStatus_30, 0) = ((MR_Box) (Var_156));
                }
              }
              succeeded = ((MR_tag((MR_Word) MaybePredOrFunc_20)) == (MR_Integer) 1);
              if (succeeded)
              {
                PredOrFunc_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_20, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybePredName_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PredName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredName_22, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeArity_24)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Arity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_24, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeModeNum_26)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ModeNum_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeModeNum_26, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeMMTablingStatus_30)) == (MR_Integer) 1);
                      if (succeeded)
                        MMTablingStatus_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMMTablingStatus_30, (MR_Integer) 0))));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word PredNameArityPFMn_39;
                MR_Word TablingInfo_40;
                MR_Word Pragma_41;
                MR_Word ItemPragma_42;
                MR_Word Item_43;
                MR_Word Var_158 = (MR_Word) (Arity_36);
                MR_Word Var_159;

                {
                  PredNameArityPFMn_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 1) = ((MR_Box) (PredName_35));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 2) = ((MR_Box) (Var_158));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 3) = ((MR_Box) (ModeNum_37));
                }
                {
                  TablingInfo_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TablingInfo_40, 0) = ((MR_Box) (PredNameArityPFMn_39));
                  MR_hl_field(MR_mktag(0), TablingInfo_40, 1) = (MR_Box) ((MR_Unsigned) (MMTablingStatus_38));
                }
                Pragma_41 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (TablingInfo_40)));
                {
                  ItemPragma_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 0) = ((MR_Box) (Pragma_41));
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 1) = ((MR_Box) (Context_12));
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 2) = ((MR_Box) (SeqNum_13));
                }
                {
                  Item_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_43, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Item_43, 1) = ((MR_Box) (ItemPragma_42));
                }
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Item_43));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_159));
                }
              }
              else
              {
                MR_Word Specs_44;
                MR_Word Var_160;
                MR_Word Var_161;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Var_165;
                MR_Word Var_166;
                MR_Word Var_167;

                Var_160 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MaybePredOrFunc_20);
                Var_162 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybePredName_22);
                Var_164 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_24);
                Var_166 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeModeNum_26);
                Var_167 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mm_tabling_status_0), MaybeMMTablingStatus_30);
                Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_166, Var_167);
                Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_164, Var_165);
                Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_162, Var_163);
                Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_160, Var_161);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_44));
                }
              }
            }
            else
            {
              MR_Word Spec_245;
              MR_Word Var_249;
              MR_Word Var_250;

              Var_249 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                Spec_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_245, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_mm_tabling_info\'/7"));
                MR_hl_field(MR_mktag(1), Spec_245, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_245, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_245, 3) = ((MR_Box) (Var_249));
                MR_hl_field(MR_mktag(1), Spec_245, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[142])));
              }
              {
                Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (Spec_245));
                MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_250));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_trailing_info_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_63;
    MR_Word Var_197;
    MR_Word Var_198;

    Var_197 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
      MR_hl_field(MR_mktag(1), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_63, 3) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(1), Spec_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
    }
    {
      Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Spec_63));
      MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_198));
    }
  }
  else
  {
    MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_262 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_209;
      MR_Word Var_213;
      MR_Word Var_214;

      Var_213 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_209, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
        MR_hl_field(MR_mktag(1), Spec_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_209, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_209, 3) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(1), Spec_209, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
      }
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Spec_209));
        MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_214));
      }
    }
    else
    {
      MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 1))));
      MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 0))));

      if ((Var_264 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_218;
        MR_Word Var_222;
        MR_Word Var_223;

        Var_222 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_218, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
          MR_hl_field(MR_mktag(1), Spec_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_218, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_218, 3) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(1), Spec_218, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
        }
        {
          Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Spec_218));
          MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_223));
        }
      }
      else
      {
        MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 1))));
        MR_Word Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 0))));

        if ((Var_266 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_227;
          MR_Word Var_231;
          MR_Word Var_232;

          Var_231 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_227, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
            MR_hl_field(MR_mktag(1), Spec_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_227, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_227, 3) = ((MR_Box) (Var_231));
            MR_hl_field(MR_mktag(1), Spec_227, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
          }
          {
            Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Spec_227));
            MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_232));
          }
        }
        else
        {
          MR_Word Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 1))));
          MR_Word Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 0))));

          if ((Var_268 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_236;
            MR_Word Var_240;
            MR_Word Var_241;

            Var_240 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_236, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
              MR_hl_field(MR_mktag(1), Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_236, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_236, 3) = ((MR_Box) (Var_240));
              MR_hl_field(MR_mktag(1), Spec_236, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
            }
            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Spec_236));
              MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_241));
            }
          }
          else
          {
            MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 1))));
            MR_Word Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 0))));

            if ((Var_270 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybePredOrFunc_20;
              MR_Word PNContextPieces_21;
              MR_Word MaybePredName_22;
              MR_Word ArityContextPieces_23;
              MR_Word MaybeArity_24;
              MR_Word ModeNumContextPieces_25;
              MR_Word MaybeModeNum_26;
              MR_Word MaybeTrailingStatus_30;
              MR_Word TrailingStatus0_29;
              MR_String TrailingStatusFunctor_27;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word PredOrFunc_34;
              MR_Word PredName_35;
              MR_Integer Arity_36;
              MR_Integer ModeNum_37;
              MR_Word TrailingStatus_38;

              parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(VarSet_9, Var_263, &MaybePredOrFunc_20);
              PNContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[137])));
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_no_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, PNContextPieces_21, Var_265, &MaybePredName_22);
              ArityContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[97])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ArityContextPieces_23, VarSet_9, Var_267, &MaybeArity_24);
              ModeNumContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[99])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ModeNumContextPieces_25, VarSet_9, Var_269, &MaybeModeNum_26);
              succeeded = ((MR_tag((MR_Word) Var_271)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 0))));
                Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_271, (MR_Integer) 1))));
                succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    TrailingStatusFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0))));
                    if ((strcmp(TrailingStatusFunctor_27, (MR_String) "conditional") == 0))
                    {
                      TrailingStatus0_29 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(TrailingStatusFunctor_27, (MR_String) "may_modify_trail") == 0))
                    {
                      TrailingStatus0_29 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(TrailingStatusFunctor_27, (MR_String) "will_not_modify_trail") == 0))
                    {
                      TrailingStatus0_29 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
              if (succeeded)
                {
                  MaybeTrailingStatus_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeTrailingStatus_30, 0) = ((MR_Box) (TrailingStatus0_29));
                }
              else
              {
                MR_String TrailingStatusTermStr_31;
                MR_Word TrailingStatusPieces_32;
                MR_Word TrailingStatusSpec_33;
                MR_Word Var_109;
                MR_Word Var_112;
                MR_Word Var_115;
                MR_Word Var_117;
                MR_Word Var_120;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_126;
                MR_Word Var_129;
                MR_Word Var_132;
                MR_Word Var_135;
                MR_Word Var_138;
                MR_Word Var_141;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_155;
                MR_Word Var_156;

                TrailingStatusTermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_271);
                Var_124 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62]));
                {
                  Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (TrailingStatusTermStr_31));
                }
                {
                  Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
                }
                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
                  MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_144));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[100])));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
                }
                {
                  Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[63])));
                  MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
                }
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[139])));
                  MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                }
                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
                }
                {
                  Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[138])));
                  MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                }
                {
                  Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
                }
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_117));
                }
                {
                  Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18])));
                  MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_115));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[131])));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
                }
                {
                  TrailingStatusPieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), TrailingStatusPieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), TrailingStatusPieces_32, 1) = ((MR_Box) (Var_109));
                }
                Var_155 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_271);
                {
                  TrailingStatusSpec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), TrailingStatusSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
                  MR_hl_field(MR_mktag(1), TrailingStatusSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), TrailingStatusSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), TrailingStatusSpec_33, 3) = ((MR_Box) (Var_155));
                  MR_hl_field(MR_mktag(1), TrailingStatusSpec_33, 4) = ((MR_Box) (TrailingStatusPieces_32));
                }
                {
                  Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (TrailingStatusSpec_33));
                  MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeTrailingStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeTrailingStatus_30, 0) = ((MR_Box) (Var_156));
                }
              }
              succeeded = ((MR_tag((MR_Word) MaybePredOrFunc_20)) == (MR_Integer) 1);
              if (succeeded)
              {
                PredOrFunc_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_20, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybePredName_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PredName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredName_22, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeArity_24)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Arity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_24, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeModeNum_26)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ModeNum_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeModeNum_26, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeTrailingStatus_30)) == (MR_Integer) 1);
                      if (succeeded)
                        TrailingStatus_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailingStatus_30, (MR_Integer) 0))));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word PredNameArityPFMn_39;
                MR_Word TrailingInfo_40;
                MR_Word Pragma_41;
                MR_Word ItemPragma_42;
                MR_Word Item_43;
                MR_Word Var_158 = (MR_Word) (Arity_36);
                MR_Word Var_159;

                {
                  PredNameArityPFMn_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 1) = ((MR_Box) (PredName_35));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 2) = ((MR_Box) (Var_158));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_39, 3) = ((MR_Box) (ModeNum_37));
                }
                {
                  TrailingInfo_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TrailingInfo_40, 0) = ((MR_Box) (PredNameArityPFMn_39));
                  MR_hl_field(MR_mktag(0), TrailingInfo_40, 1) = (MR_Box) ((MR_Unsigned) (TrailingStatus_38));
                }
                Pragma_41 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (TrailingInfo_40)));
                {
                  ItemPragma_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 0) = ((MR_Box) (Pragma_41));
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 1) = ((MR_Box) (Context_12));
                  MR_hl_field(MR_mktag(0), ItemPragma_42, 2) = ((MR_Box) (SeqNum_13));
                }
                {
                  Item_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_43, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Item_43, 1) = ((MR_Box) (ItemPragma_42));
                }
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Item_43));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_159));
                }
              }
              else
              {
                MR_Word Specs_44;
                MR_Word Var_160;
                MR_Word Var_161;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Var_165;
                MR_Word Var_166;
                MR_Word Var_167;

                Var_160 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MaybePredOrFunc_20);
                Var_162 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybePredName_22);
                Var_164 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_24);
                Var_166 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeModeNum_26);
                Var_167 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0), MaybeTrailingStatus_30);
                Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_166, Var_167);
                Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_164, Var_165);
                Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_162, Var_163);
                Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_160, Var_161);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_44));
                }
              }
            }
            else
            {
              MR_Word Spec_245;
              MR_Word Var_249;
              MR_Word Var_250;

              Var_249 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                Spec_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_245, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_trailing_info\'/7"));
                MR_hl_field(MR_mktag(1), Spec_245, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_245, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_245, 3) = ((MR_Box) (Var_249));
                MR_hl_field(MR_mktag(1), Spec_245, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[134])));
              }
              {
                Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (Spec_245));
                MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_250));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_exceptions_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_77;
    MR_Word Var_315;
    MR_Word Var_316;

    Var_315 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
      MR_hl_field(MR_mktag(1), Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_77, 3) = ((MR_Box) (Var_315));
      MR_hl_field(MR_mktag(1), Spec_77, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
    }
    {
      Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_316, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(MR_mktag(1), Var_316, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_316));
    }
  }
  else
  {
    MR_Word Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_380 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_327;
      MR_Word Var_331;
      MR_Word Var_332;

      Var_331 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_327, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
        MR_hl_field(MR_mktag(1), Spec_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_327, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_327, 3) = ((MR_Box) (Var_331));
        MR_hl_field(MR_mktag(1), Spec_327, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
      }
      {
        Var_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_332, 0) = ((MR_Box) (Spec_327));
        MR_hl_field(MR_mktag(1), Var_332, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_332));
      }
    }
    else
    {
      MR_Word Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_380, (MR_Integer) 1))));
      MR_Word Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_380, (MR_Integer) 0))));

      if ((Var_382 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_336;
        MR_Word Var_340;
        MR_Word Var_341;

        Var_340 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_336, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
          MR_hl_field(MR_mktag(1), Spec_336, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_336, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_336, 3) = ((MR_Box) (Var_340));
          MR_hl_field(MR_mktag(1), Spec_336, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
        }
        {
          Var_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_341, 0) = ((MR_Box) (Spec_336));
          MR_hl_field(MR_mktag(1), Var_341, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_341));
        }
      }
      else
      {
        MR_Word Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_382, (MR_Integer) 1))));
        MR_Word Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_382, (MR_Integer) 0))));

        if ((Var_384 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_345;
          MR_Word Var_349;
          MR_Word Var_350;

          Var_349 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_345, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
            MR_hl_field(MR_mktag(1), Spec_345, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_345, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_345, 3) = ((MR_Box) (Var_349));
            MR_hl_field(MR_mktag(1), Spec_345, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
          }
          {
            Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_350, 0) = ((MR_Box) (Spec_345));
            MR_hl_field(MR_mktag(1), Var_350, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_350));
          }
        }
        else
        {
          MR_Word Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_384, (MR_Integer) 1))));
          MR_Word Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_384, (MR_Integer) 0))));

          if ((Var_386 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_354;
            MR_Word Var_358;
            MR_Word Var_359;

            Var_358 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_354, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
              MR_hl_field(MR_mktag(1), Spec_354, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_354, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_354, 3) = ((MR_Box) (Var_358));
              MR_hl_field(MR_mktag(1), Spec_354, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
            }
            {
              Var_359 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_359, 0) = ((MR_Box) (Spec_354));
              MR_hl_field(MR_mktag(1), Var_359, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_359));
            }
          }
          else
          {
            MR_Word Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_386, (MR_Integer) 1))));
            MR_Word Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_386, (MR_Integer) 0))));

            if ((Var_388 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word MaybePredOrFunc_20;
              MR_Word PNContextPieces_21;
              MR_Word MaybePredName_22;
              MR_Word ArityContextPieces_23;
              MR_Word MaybeArity_24;
              MR_Word ModeNumContextPieces_25;
              MR_Word MaybeModeNum_26;
              MR_Word MaybeThrowStatus_30;
              MR_String ThrowStatusFunctor_27;
              MR_Word ThrowStatusArgTerms_28;
              MR_Word Var_119;
              MR_Word PredOrFunc_48;
              MR_Word PredName_49;
              MR_Integer Arity_50;
              MR_Integer ModeNum_51;
              MR_Word ThrowStatus_52;

              parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(VarSet_9, Var_381, &MaybePredOrFunc_20);
              PNContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[95])));
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_no_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, PNContextPieces_21, Var_383, &MaybePredName_22);
              ArityContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[97])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ArityContextPieces_23, VarSet_9, Var_385, &MaybeArity_24);
              ModeNumContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[99])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ModeNumContextPieces_25, VarSet_9, Var_387, &MaybeModeNum_26);
              succeeded = ((MR_tag((MR_Word) Var_389)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_389, (MR_Integer) 0))));
                ThrowStatusArgTerms_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_389, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_Integer) 0);
                if (succeeded)
                {
                  ThrowStatusFunctor_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0))));
                  if ((strcmp(ThrowStatusFunctor_27, (MR_String) "may_throw") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(ThrowStatusFunctor_27, (MR_String) "conditional") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(ThrowStatusFunctor_27, (MR_String) "will_not_throw") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
              }
              if (succeeded)
                if ((strcmp(ThrowStatusFunctor_27, (MR_String) "may_throw") == 0))
                {
                  MR_Word ExceptionType_38;
                  MR_Word ExceptionTypeTerm_35;
                  MR_String ExceptionFunctor_36;
                  MR_Word Var_149;
                  MR_Word Var_150;
                  MR_Word Var_151;

                  succeeded = (ThrowStatusArgTerms_28 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ExceptionTypeTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThrowStatusArgTerms_28, (MR_Integer) 0))));
                    Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThrowStatusArgTerms_28, (MR_Integer) 1))));
                    succeeded = (Var_149 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ExceptionTypeTerm_35)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionTypeTerm_35, (MR_Integer) 0))));
                        Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionTypeTerm_35, (MR_Integer) 1))));
                        succeeded = (Var_151 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ExceptionFunctor_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_150, (MR_Integer) 0))));
                            if ((strcmp(ExceptionFunctor_36, (MR_String) "type_exception") == 0))
                            {
                              ExceptionType_38 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            if ((strcmp(ExceptionFunctor_36, (MR_String) "user_exception") == 0))
                            {
                              ExceptionType_38 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_152;

                    {
                      Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_152, 0) = (MR_Box) ((MR_Unsigned) (ExceptionType_38));
                    }
                    {
                      MaybeThrowStatus_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeThrowStatus_30, 0) = ((MR_Box) (Var_152));
                    }
                  }
                  else
                  {
                    MR_Word MayThrowSpec_40;
                    MR_Word Var_193;
                    MR_Word Var_194;

                    Var_193 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_389);
                    {
                      MayThrowSpec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MayThrowSpec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
                      MR_hl_field(MR_mktag(1), MayThrowSpec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), MayThrowSpec_40, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), MayThrowSpec_40, 3) = ((MR_Box) (Var_193));
                      MR_hl_field(MR_mktag(1), MayThrowSpec_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[123])));
                    }
                    {
                      Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (MayThrowSpec_40));
                      MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeThrowStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeThrowStatus_30, 0) = ((MR_Box) (Var_194));
                    }
                  }
                }
                else
                if ((strcmp(ThrowStatusFunctor_27, (MR_String) "conditional") == 0))
                  if ((ThrowStatusArgTerms_28 == (MR_Word) ((MR_Unsigned) 0U)))
                    MaybeThrowStatus_30 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[6]));
                  else
                  {
                    MR_Word ConditionalSpec_44;
                    MR_Word Var_222;
                    MR_Word Var_223;

                    Var_222 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_389);
                    {
                      ConditionalSpec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ConditionalSpec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
                      MR_hl_field(MR_mktag(1), ConditionalSpec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), ConditionalSpec_44, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), ConditionalSpec_44, 3) = ((MR_Box) (Var_222));
                      MR_hl_field(MR_mktag(1), ConditionalSpec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[106])));
                    }
                    {
                      Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (ConditionalSpec_44));
                      MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeThrowStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeThrowStatus_30, 0) = ((MR_Box) (Var_223));
                    }
                  }
                else
                if ((ThrowStatusArgTerms_28 == (MR_Word) ((MR_Unsigned) 0U)))
                  MaybeThrowStatus_30 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[7]));
                else
                {
                  MR_Word WillNotThrowSpec_34;
                  MR_Word Var_146;
                  MR_Word Var_147;

                  Var_146 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_389);
                  {
                    WillNotThrowSpec_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), WillNotThrowSpec_34, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
                    MR_hl_field(MR_mktag(1), WillNotThrowSpec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), WillNotThrowSpec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(1), WillNotThrowSpec_34, 3) = ((MR_Box) (Var_146));
                    MR_hl_field(MR_mktag(1), WillNotThrowSpec_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[130])));
                  }
                  {
                    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (WillNotThrowSpec_34));
                    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeThrowStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeThrowStatus_30, 0) = ((MR_Box) (Var_147));
                  }
                }
              else
              {
                MR_String ThrowStatusTermStr_45;
                MR_Word ThrowStatusPieces_46;
                MR_Word ThrowStatusSpec_47;
                MR_Word Var_227;
                MR_Word Var_230;
                MR_Word Var_233;
                MR_Word Var_235;
                MR_Word Var_238;
                MR_Word Var_241;
                MR_Word Var_242;
                MR_Word Var_244;
                MR_Word Var_247;
                MR_Word Var_250;
                MR_Word Var_253;
                MR_Word Var_256;
                MR_Word Var_259;
                MR_Word Var_262;
                MR_Word Var_263;
                MR_Word Var_273;
                MR_Word Var_274;

                ThrowStatusTermStr_45 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_389);
                Var_242 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62]));
                {
                  Var_263 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_263, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_263, 1) = ((MR_Box) (ThrowStatusTermStr_45));
                }
                {
                  Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (Var_263));
                  MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
                }
                {
                  Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
                  MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) (Var_262));
                }
                {
                  Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_242));
                  MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (Var_259));
                }
                {
                  Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_253, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[100])));
                  MR_hl_field(MR_mktag(1), Var_253, 1) = ((MR_Box) (Var_256));
                }
                {
                  Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[63])));
                  MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (Var_253));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (Var_242));
                  MR_hl_field(MR_mktag(1), Var_247, 1) = ((MR_Box) (Var_250));
                }
                {
                  Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[117])));
                  MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) (Var_247));
                }
                {
                  Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Var_242));
                  MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Var_244));
                }
                {
                  Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[124])));
                  MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (Var_241));
                }
                {
                  Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (Var_238));
                }
                {
                  Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (Var_235));
                }
                {
                  Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18])));
                  MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_233));
                }
                {
                  Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[91])));
                  MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (Var_230));
                }
                {
                  ThrowStatusPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ThrowStatusPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), ThrowStatusPieces_46, 1) = ((MR_Box) (Var_227));
                }
                Var_273 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_389);
                {
                  ThrowStatusSpec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ThrowStatusSpec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
                  MR_hl_field(MR_mktag(1), ThrowStatusSpec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), ThrowStatusSpec_47, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), ThrowStatusSpec_47, 3) = ((MR_Box) (Var_273));
                  MR_hl_field(MR_mktag(1), ThrowStatusSpec_47, 4) = ((MR_Box) (ThrowStatusPieces_46));
                }
                {
                  Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (ThrowStatusSpec_47));
                  MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeThrowStatus_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeThrowStatus_30, 0) = ((MR_Box) (Var_274));
                }
              }
              succeeded = ((MR_tag((MR_Word) MaybePredOrFunc_20)) == (MR_Integer) 1);
              if (succeeded)
              {
                PredOrFunc_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_20, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybePredName_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PredName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredName_22, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeArity_24)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Arity_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_24, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeModeNum_26)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ModeNum_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeModeNum_26, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeThrowStatus_30)) == (MR_Integer) 1);
                      if (succeeded)
                        ThrowStatus_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThrowStatus_30, (MR_Integer) 0))));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word PredNameArityPFMn_53;
                MR_Word ExceptionsInfo_54;
                MR_Word Pragma_55;
                MR_Word ItemPragma_56;
                MR_Word Item_57;
                MR_Word Var_276 = (MR_Word) (Arity_50);
                MR_Word Var_277;

                {
                  PredNameArityPFMn_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_48));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_53, 1) = ((MR_Box) (PredName_49));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_53, 2) = ((MR_Box) (Var_276));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_53, 3) = ((MR_Box) (ModeNum_51));
                }
                {
                  ExceptionsInfo_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ExceptionsInfo_54, 0) = ((MR_Box) (PredNameArityPFMn_53));
                  MR_hl_field(MR_mktag(0), ExceptionsInfo_54, 1) = ((MR_Box) (ThrowStatus_52));
                }
                Pragma_55 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExceptionsInfo_54)));
                {
                  ItemPragma_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPragma_56, 0) = ((MR_Box) (Pragma_55));
                  MR_hl_field(MR_mktag(0), ItemPragma_56, 1) = ((MR_Box) (Context_12));
                  MR_hl_field(MR_mktag(0), ItemPragma_56, 2) = ((MR_Box) (SeqNum_13));
                }
                {
                  Item_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_57, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Item_57, 1) = ((MR_Box) (ItemPragma_56));
                }
                {
                  Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Item_57));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_277));
                }
              }
              else
              {
                MR_Word Specs_58;
                MR_Word Var_278;
                MR_Word Var_279;
                MR_Word Var_280;
                MR_Word Var_281;
                MR_Word Var_282;
                MR_Word Var_283;
                MR_Word Var_284;
                MR_Word Var_285;

                Var_278 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MaybePredOrFunc_20);
                Var_280 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybePredName_22);
                Var_282 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_24);
                Var_284 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeModeNum_26);
                Var_285 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_exception_status_0), MaybeThrowStatus_30);
                Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_284, Var_285);
                Var_281 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_282, Var_283);
                Var_279 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_280, Var_281);
                Specs_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_278, Var_279);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_58));
                }
              }
            }
            else
            {
              MR_Word Spec_363;
              MR_Word Var_367;
              MR_Word Var_368;

              Var_367 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                Spec_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_363, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_exceptions\'/7"));
                MR_hl_field(MR_mktag(1), Spec_363, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_363, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_363, 3) = ((MR_Box) (Var_367));
                MR_hl_field(MR_mktag(1), Spec_363, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[93])));
              }
              {
                Var_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_368, 0) = ((MR_Box) (Spec_363));
                MR_hl_field(MR_mktag(1), Var_368, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_368));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_93;

  parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_reuse__603__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_93);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_93));
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_reuse_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded = (PragmaTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PredName_21;
  MR_Word PredOrFunc_22;
  MR_Word Modes_23;
  MR_Word HeadVars_27;
  MR_Word Types_30;
  MR_Word MaybeStructureReuse_34;
  MR_Word TypeCtorInfo_90_90;
  MR_Word TypeCtorInfo_91_91;
  MR_Word TypeInfo_96_96;
  MR_Word TypeInfo_97_97;
  MR_Word PredAndModesTerm0_15;
  MR_Word HeadVarsTerm_16;
  MR_Word HeadVarTypesTerm_17;
  MR_Word MaybeStructureReuseTerm_18;
  MR_Word ReuseContextPieces_19;
  MR_Word MaybeNameAndModes_20;
  MR_Word ListHVTerms_24;
  MR_Word HeadVarsGeneric_26;
  MR_Word ListTypeTerms_28;
  MR_String ReuseFunctor_31;
  MR_Word ReuseArgTerms_32;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_String Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_String Var_67;
  MR_Word Var_68;
  MR_Word Var_70;

  if (succeeded)
  {
    PredAndModesTerm0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVarsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
      succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadVarTypesTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
        succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeStructureReuseTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1))));
          succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeCtorInfo_90_90 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            Var_50 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[88]));
            ReuseContextPieces_19 = mercury__cord__from_list_1_f_0(TypeCtorInfo_90_90, Var_50);
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ModuleName_8));
            }
            parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_62, ReuseContextPieces_19, VarSet_9, PredAndModesTerm0_15, &MaybeNameAndModes_20);
            succeeded = ((MR_tag((MR_Word) MaybeNameAndModes_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 0))));
              PredOrFunc_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 1))));
              Modes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) HeadVarsTerm_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarsTerm_16, (MR_Integer) 0))));
                ListHVTerms_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarsTerm_16, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_63)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_64, (MR_String) "vars") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_91_91 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                    mercury__term_vars__vars_in_terms_2_p_0(TypeCtorInfo_91_91, ListHVTerms_24, &HeadVarsGeneric_26);
                    Var_65 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_2[3]);
                    TypeInfo_96_96 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[8]);
                    TypeInfo_97_97 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[9]);
                    mercury__list__map_3_p_0(TypeInfo_96_96, TypeInfo_97_97, Var_65, HeadVarsGeneric_26, &HeadVars_27);
                    succeeded = ((MR_tag((MR_Word) HeadVarTypesTerm_17)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarTypesTerm_17, (MR_Integer) 0))));
                      ListTypeTerms_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarTypesTerm_17, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_67, (MR_String) "types") == 0);
                        if (succeeded)
                        {
                          Var_68 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[5]));
                          succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(Var_68, ListTypeTerms_28, &Types_30);
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) MaybeStructureReuseTerm_18)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeStructureReuseTerm_18, (MR_Integer) 0))));
                              ReuseArgTerms_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeStructureReuseTerm_18, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                ReuseFunctor_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 0))));
                                if ((strcmp(ReuseFunctor_31, (MR_String) "yes") == 0))
                                {
                                  MR_Word StructureReuseTerm_35;
                                  MR_Word StructureReuse_36;
                                  MR_Word Var_71;

                                  succeeded = (ReuseArgTerms_32 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    StructureReuseTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseArgTerms_32, (MR_Integer) 0))));
                                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseArgTerms_32, (MR_Integer) 1))));
                                    succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      StructureReuse_36 = parse_tree__prog_ctgc__parse_structure_reuse_domain_1_f_0(TypeCtorInfo_91_91, StructureReuseTerm_35);
                                      {
                                        MaybeStructureReuse_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), MaybeStructureReuse_34, 0) = ((MR_Box) (StructureReuse_36));
                                      }
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                else
                                if ((strcmp(ReuseFunctor_31, (MR_String) "not_available") == 0))
                                {
                                  MaybeStructureReuse_34 = (MR_Word) ((MR_Unsigned) 0U);
                                  succeeded = MR_TRUE;
                                }
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                      }
                    }
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
  {
    MR_Word PredNameModesPF_37;
    MR_Word ProgVarSet_38;
    MR_Word TVarSet_39;
    MR_Word ReuseInfo_40;
    MR_Word Pragma_41;
    MR_Word ItemPragma_42;
    MR_Word Item_43;
    MR_Word Var_72;

    {
      PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_37, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
      MR_hl_field(MR_mktag(0), PredNameModesPF_37, 1) = ((MR_Box) (PredName_21));
      MR_hl_field(MR_mktag(0), PredNameModesPF_37, 2) = ((MR_Box) (Modes_23));
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, &ProgVarSet_38);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_39);
    {
      ReuseInfo_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 0) = ((MR_Box) (PredNameModesPF_37));
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 1) = ((MR_Box) (HeadVars_27));
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 2) = ((MR_Box) (Types_30));
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 3) = ((MR_Box) (ProgVarSet_38));
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 4) = ((MR_Box) (TVarSet_39));
      MR_hl_field(MR_mktag(0), ReuseInfo_40, 5) = ((MR_Box) (MaybeStructureReuse_34));
    }
    {
      Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Pragma_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Pragma_41, 1) = ((MR_Box) (ReuseInfo_40));
    }
    {
      ItemPragma_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemPragma_42, 0) = ((MR_Box) (Pragma_41));
      MR_hl_field(MR_mktag(0), ItemPragma_42, 1) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), ItemPragma_42, 2) = ((MR_Box) (SeqNum_13));
    }
    {
      Item_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_43, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_43, 1) = ((MR_Box) (ItemPragma_42));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Item_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Spec_45;
    MR_Word Var_87;
    MR_Word Var_88;

    Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_structure_reuse\'/7"));
      MR_hl_field(MR_mktag(1), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_45, 3) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(1), Spec_45, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[90])));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_45));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_93;

  parse_tree__parse_pragma_analysis__IntroducedFrom__pred__parse_pragma_structure_sharing__549__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_93);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_93));
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_structure_sharing_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded = (PragmaTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PredName_21;
  MR_Word PredOrFunc_22;
  MR_Word Modes_23;
  MR_Word HeadVars_27;
  MR_Word Types_30;
  MR_Word MaybeSharingAs_34;
  MR_Word TypeCtorInfo_90_90;
  MR_Word TypeCtorInfo_91_91;
  MR_Word TypeInfo_96_96;
  MR_Word TypeInfo_97_97;
  MR_Word PredAndModesTerm0_15;
  MR_Word HeadVarsTerm_16;
  MR_Word HeadVarTypesTerm_17;
  MR_Word SharingInformationTerm_18;
  MR_Word ModesContextPieces_19;
  MR_Word MaybeNameAndModes_20;
  MR_Word ListHVTerms_24;
  MR_Word HeadVarsGeneric_26;
  MR_Word ListTypeTerms_28;
  MR_String SharingFunctor_31;
  MR_Word SharingArgTerms_32;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_String Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_String Var_66;
  MR_Word Var_67;
  MR_Word Var_69;

  if (succeeded)
  {
    PredAndModesTerm0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVarsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadVarTypesTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SharingInformationTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeCtorInfo_90_90 = (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            Var_49 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[80]));
            ModesContextPieces_19 = mercury__cord__from_list_1_f_0(TypeCtorInfo_90_90, Var_49);
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ModuleName_8));
            }
            parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_61, ModesContextPieces_19, VarSet_9, PredAndModesTerm0_15, &MaybeNameAndModes_20);
            succeeded = ((MR_tag((MR_Word) MaybeNameAndModes_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 0))));
              PredOrFunc_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 1))));
              Modes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) HeadVarsTerm_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarsTerm_16, (MR_Integer) 0))));
                ListHVTerms_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarsTerm_16, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_63, (MR_String) "vars") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_91_91 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                    mercury__term_vars__vars_in_terms_2_p_0(TypeCtorInfo_91_91, ListHVTerms_24, &HeadVarsGeneric_26);
                    Var_64 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_2[2]);
                    TypeInfo_96_96 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[8]);
                    TypeInfo_97_97 = (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[9]);
                    mercury__list__map_3_p_0(TypeInfo_96_96, TypeInfo_97_97, Var_64, HeadVarsGeneric_26, &HeadVars_27);
                    succeeded = ((MR_tag((MR_Word) HeadVarTypesTerm_17)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarTypesTerm_17, (MR_Integer) 0))));
                      ListTypeTerms_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVarTypesTerm_17, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_66, (MR_String) "types") == 0);
                        if (succeeded)
                        {
                          Var_67 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[4]));
                          succeeded = parse_tree__parse_type_name__maybe_parse_types_3_p_0(Var_67, ListTypeTerms_28, &Types_30);
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) SharingInformationTerm_18)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInformationTerm_18, (MR_Integer) 0))));
                              SharingArgTerms_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInformationTerm_18, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                SharingFunctor_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
                                if ((strcmp(SharingFunctor_31, (MR_String) "yes") == 0))
                                {
                                  MR_Word SharingAsTerm_35;
                                  MR_Word Var_70;
                                  MR_Word Var_71;

                                  succeeded = (SharingArgTerms_32 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    SharingAsTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SharingArgTerms_32, (MR_Integer) 0))));
                                    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SharingArgTerms_32, (MR_Integer) 1))));
                                    succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_71 = parse_tree__prog_ctgc__parse_structure_sharing_domain_1_f_0(TypeCtorInfo_91_91, SharingAsTerm_35);
                                      {
                                        MaybeSharingAs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), MaybeSharingAs_34, 0) = ((MR_Box) (Var_71));
                                      }
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                else
                                if ((strcmp(SharingFunctor_31, (MR_String) "not_available") == 0))
                                {
                                  MaybeSharingAs_34 = (MR_Word) ((MR_Unsigned) 0U);
                                  succeeded = MR_TRUE;
                                }
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                      }
                    }
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
  {
    MR_Word PredNameModesPF_36;
    MR_Word ProgVarSet_37;
    MR_Word TVarSet_38;
    MR_Word SharingInfo_39;
    MR_Word Pragma_40;
    MR_Word ItemPragma_41;
    MR_Word Item_42;
    MR_Word Var_72;

    {
      PredNameModesPF_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_36, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
      MR_hl_field(MR_mktag(0), PredNameModesPF_36, 1) = ((MR_Box) (PredName_21));
      MR_hl_field(MR_mktag(0), PredNameModesPF_36, 2) = ((MR_Box) (Modes_23));
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, &ProgVarSet_37);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_38);
    {
      SharingInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SharingInfo_39, 0) = ((MR_Box) (PredNameModesPF_36));
      MR_hl_field(MR_mktag(0), SharingInfo_39, 1) = ((MR_Box) (HeadVars_27));
      MR_hl_field(MR_mktag(0), SharingInfo_39, 2) = ((MR_Box) (Types_30));
      MR_hl_field(MR_mktag(0), SharingInfo_39, 3) = ((MR_Box) (ProgVarSet_37));
      MR_hl_field(MR_mktag(0), SharingInfo_39, 4) = ((MR_Box) (TVarSet_38));
      MR_hl_field(MR_mktag(0), SharingInfo_39, 5) = ((MR_Box) (MaybeSharingAs_34));
    }
    {
      Pragma_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Pragma_40, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Pragma_40, 1) = ((MR_Box) (SharingInfo_39));
    }
    {
      ItemPragma_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemPragma_41, 0) = ((MR_Box) (Pragma_40));
      MR_hl_field(MR_mktag(0), ItemPragma_41, 1) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), ItemPragma_41, 2) = ((MR_Box) (SeqNum_13));
    }
    {
      Item_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_42, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_42, 1) = ((MR_Box) (ItemPragma_41));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Item_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Spec_44;
    MR_Word Var_87;
    MR_Word Var_88;

    Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_structure_sharing\'/7"));
      MR_hl_field(MR_mktag(1), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[85])));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_termination2_info_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_50;
    MR_Word Var_110;
    MR_Word Var_111;

    Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination2_info\'/7"));
      MR_hl_field(MR_mktag(1), Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_50, 3) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Spec_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[73])));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_50));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
    }
  }
  else
  {
    MR_Word Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_166 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_122;
      MR_Word Var_126;
      MR_Word Var_127;

      Var_126 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination2_info\'/7"));
        MR_hl_field(MR_mktag(1), Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_122, 3) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(1), Spec_122, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[73])));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_122));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
      }
    }
    else
    {
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 1))));
      MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_166, (MR_Integer) 0))));

      if ((Var_168 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_131;
        MR_Word Var_135;
        MR_Word Var_136;

        Var_135 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_131, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination2_info\'/7"));
          MR_hl_field(MR_mktag(1), Spec_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_131, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_131, 3) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(1), Spec_131, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[73])));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Spec_131));
          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_136));
        }
      }
      else
      {
        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_168, (MR_Integer) 1))));
        MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_168, (MR_Integer) 0))));

        if ((Var_170 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_140;
          MR_Word Var_144;
          MR_Word Var_145;

          Var_144 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_140, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination2_info\'/7"));
            MR_hl_field(MR_mktag(1), Spec_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_140, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_140, 3) = ((MR_Box) (Var_144));
            MR_hl_field(MR_mktag(1), Spec_140, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[73])));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Spec_140));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_145));
          }
        }
        else
        {
          MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_170, (MR_Integer) 1))));
          MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_170, (MR_Integer) 0))));

          if ((Var_172 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PAMContextPieces_19;
            MR_Word MaybeNameAndModes_20;
            MR_Word MaybeSuccessArgSize_21;
            MR_Word MaybeFailureArgSize_22;
            MR_Word MaybeMaybeTerminationInfo_24;
            MR_Word Var_67;
            MR_Word PredName_25;
            MR_Word PredOrFunc_26;
            MR_Word Modes_27;
            MR_Word SuccessArgSizeInfo_28;
            MR_Word FailureArgSizeInfo_29;
            MR_Word MaybeTerminationInfo_30;

            PAMContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[75])));
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ModuleName_8));
            }
            parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_67, PAMContextPieces_19, VarSet_9, Var_167, &MaybeNameAndModes_20);
            parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0(VarSet_9, Var_169, &MaybeSuccessArgSize_21);
            parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0(VarSet_9, Var_171, &MaybeFailureArgSize_22);
            parse_tree__parse_pragma_analysis__parse_termination_info_4_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[76])), VarSet_9, Var_173, &MaybeMaybeTerminationInfo_24);
            succeeded = ((MR_tag((MR_Word) MaybeNameAndModes_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 0))));
              PredOrFunc_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 1))));
              Modes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_20, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) MaybeSuccessArgSize_21)) == (MR_Integer) 1);
              if (succeeded)
              {
                SuccessArgSizeInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccessArgSize_21, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeFailureArgSize_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  FailureArgSizeInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailureArgSize_22, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeMaybeTerminationInfo_24)) == (MR_Integer) 1);
                  if (succeeded)
                    MaybeTerminationInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeTerminationInfo_24, (MR_Integer) 0))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word PredNameModesPF_31;
              MR_Word Term2Info_32;
              MR_Word Pragma_33;
              MR_Word ItemPragma_34;
              MR_Word Item_35;
              MR_Word Var_79;

              {
                PredNameModesPF_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredNameModesPF_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
                MR_hl_field(MR_mktag(0), PredNameModesPF_31, 1) = ((MR_Box) (PredName_25));
                MR_hl_field(MR_mktag(0), PredNameModesPF_31, 2) = ((MR_Box) (Modes_27));
              }
              {
                Term2Info_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Term2Info_32, 0) = ((MR_Box) (PredNameModesPF_31));
                MR_hl_field(MR_mktag(0), Term2Info_32, 1) = ((MR_Box) (SuccessArgSizeInfo_28));
                MR_hl_field(MR_mktag(0), Term2Info_32, 2) = ((MR_Box) (FailureArgSizeInfo_29));
                MR_hl_field(MR_mktag(0), Term2Info_32, 3) = ((MR_Box) (MaybeTerminationInfo_30));
              }
              {
                Pragma_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Pragma_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Pragma_33, 1) = ((MR_Box) (Term2Info_32));
              }
              {
                ItemPragma_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemPragma_34, 0) = ((MR_Box) (Pragma_33));
                MR_hl_field(MR_mktag(0), ItemPragma_34, 1) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), ItemPragma_34, 2) = ((MR_Box) (SeqNum_13));
              }
              {
                Item_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Item_35, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), Item_35, 1) = ((MR_Box) (ItemPragma_34));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Item_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
              }
            }
            else
            {
              MR_Word Specs_36;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;

              Var_80 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[2]), MaybeNameAndModes_20);
              Var_82 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[7]), MaybeSuccessArgSize_21);
              Var_84 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[7]), MaybeFailureArgSize_22);
              Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[5]), MaybeMaybeTerminationInfo_24);
              Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_84, Var_85);
              Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_82, Var_83);
              Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_80, Var_81);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_36));
              }
            }
          }
          else
          {
            MR_Word Spec_149;
            MR_Word Var_153;
            MR_Word Var_154;

            Var_153 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_149, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination2_info\'/7"));
              MR_hl_field(MR_mktag(1), Spec_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_149, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_149, 3) = ((MR_Box) (Var_153));
              MR_hl_field(MR_mktag(1), Spec_149, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[73])));
            }
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_149));
              MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeConstr_6;

  parse_tree__parse_pragma_analysis__parse_arg_size_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeConstr_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeConstr_6));
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_arg_size_constraints_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeMaybeArgSizeConstraints_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Var_16;
  MR_String Var_17;
  MR_Word Var_18;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_17, (MR_String) "not_set") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeMaybeArgSizeConstraints_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[10]));
  else
  {
    MR_Word ConstraintsTerm_8;
    MR_Word Var_20;
    MR_String Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_21, (MR_String) "constraints") == 0);
        if (succeeded)
        {
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConstraintsTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeConstraints_10;

      parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_String) "list of argument size constraints", (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_2[1]), VarSet_4, ConstraintsTerm_8, &MaybeConstraints_10);
      if (((MR_tag((MR_Word) MaybeConstraints_10)) == (MR_Integer) 0))
        *MaybeMaybeArgSizeConstraints_6 = (MR_Word) (MaybeConstraints_10);
      else
      {
        MR_Word Constraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstraints_10, (MR_Integer) 0))));
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Constraints_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeArgSizeConstraints_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
        }
      }
    }
    else
    {
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_46;
      MR_Word Var_47;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[152])));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[151])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_29));
      }
      Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_arg_size_constraints\'/3"));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeArgSizeConstraints_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeBool_8;

  parse_tree__parse_pragma_analysis__parse_bool_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeBool_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeBool_8));
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_75;
    MR_Word Var_281;
    MR_Word Var_282;

    Var_281 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
      MR_hl_field(MR_mktag(1), Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_75, 3) = ((MR_Box) (Var_281));
      MR_hl_field(MR_mktag(1), Spec_75, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[34])));
    }
    {
      Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_282, 0) = ((MR_Box) (Spec_75));
      MR_hl_field(MR_mktag(1), Var_282, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_282));
    }
  }
  else
  {
    MR_Word Var_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_344 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_343 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_308;
      MR_Word Var_312;
      MR_Word Var_313;

      Var_312 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_308, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
        MR_hl_field(MR_mktag(1), Spec_308, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_308, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_308, 3) = ((MR_Box) (Var_312));
        MR_hl_field(MR_mktag(1), Spec_308, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[34])));
      }
      {
        Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_313, 0) = ((MR_Box) (Spec_308));
        MR_hl_field(MR_mktag(1), Var_313, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_313));
      }
    }
    else
    {
      MR_Word Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_343, (MR_Integer) 1))));
      MR_Word Var_346 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_343, (MR_Integer) 0))));

      if ((Var_345 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_317;
        MR_Word Var_321;
        MR_Word Var_322;

        Var_321 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_317, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
          MR_hl_field(MR_mktag(1), Spec_317, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_317, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_317, 3) = ((MR_Box) (Var_321));
          MR_hl_field(MR_mktag(1), Spec_317, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[34])));
        }
        {
          Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (Spec_317));
          MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_322));
        }
      }
      else
      {
        MR_Word Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_345, (MR_Integer) 1))));
        MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_345, (MR_Integer) 0))));

        if ((Var_347 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PAMContextPieces_18;
          MR_Word MaybeNameAndModes_19;
          MR_Word MaybeMaybeArgSizeInfo_25;
          MR_Word MaybeMaybeTerminationInfo_54;
          MR_Word Var_91;
          MR_String ArgSizeFunctor_20;
          MR_Word ArgSizeArgTerms_21;
          MR_Word Var_92;
          MR_Word PredName_55;
          MR_Word PredOrFunc_56;
          MR_Word Modes_57;
          MR_Word MaybeArgSizeInfo_58;
          MR_Word MaybeTerminationInfo_59;

          PAMContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[37])));
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ModuleName_8));
          }
          parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0(Var_91, PAMContextPieces_18, VarSet_9, Var_344, &MaybeNameAndModes_19);
          succeeded = ((MR_tag((MR_Word) Var_346)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_346, (MR_Integer) 0))));
            ArgSizeArgTerms_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_346, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgSizeFunctor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));
              if ((strcmp(ArgSizeFunctor_20, (MR_String) "finite") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(ArgSizeFunctor_20, (MR_String) "not_set") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(ArgSizeFunctor_20, (MR_String) "infinite") == 0))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
          }
          if (succeeded)
          {
            MR_Word ArgSizeContextPieces_23;

            ArgSizeContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[38])));
            if ((strcmp(ArgSizeFunctor_20, (MR_String) "finite") == 0))
              if ((ArgSizeArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word FiniteSpec_49;
                MR_Word Var_191;
                MR_Word Var_192;

                Var_191 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
                {
                  FiniteSpec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), FiniteSpec_49, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
                  MR_hl_field(MR_mktag(1), FiniteSpec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), FiniteSpec_49, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), FiniteSpec_49, 3) = ((MR_Box) (Var_191));
                  MR_hl_field(MR_mktag(1), FiniteSpec_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[47])));
                }
                {
                  Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (FiniteSpec_49));
                  MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_192));
                }
              }
              else
              {
                MR_Word Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgSizeArgTerms_21, (MR_Integer) 1))));
                MR_Word Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgSizeArgTerms_21, (MR_Integer) 0))));

                if ((Var_376 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word FiniteSpec_350;
                  MR_Word Var_354;
                  MR_Word Var_355;

                  Var_354 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
                  {
                    FiniteSpec_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), FiniteSpec_350, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
                    MR_hl_field(MR_mktag(1), FiniteSpec_350, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), FiniteSpec_350, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(1), FiniteSpec_350, 3) = ((MR_Box) (Var_354));
                    MR_hl_field(MR_mktag(1), FiniteSpec_350, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[47])));
                  }
                  {
                    Var_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_355, 0) = ((MR_Box) (FiniteSpec_350));
                    MR_hl_field(MR_mktag(1), Var_355, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_355));
                  }
                }
                else
                {
                  MR_Word Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_376, (MR_Integer) 1))));
                  MR_Word Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_376, (MR_Integer) 0))));

                  if ((Var_378 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word IntContextPieces_36;
                    MR_Word MaybeInt_37;
                    MR_Word BoolContextPieces_38;
                    MR_Word MaybeUsedArgs_39;
                    MR_Word Var_147;
                    MR_Word Var_154;
                    MR_Word Var_162;
                    MR_Integer Int_40;
                    MR_Word UsedArgs_41;

                    Var_147 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[49])));
                    IntContextPieces_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgSizeContextPieces_23, Var_147);
                    parse_tree__parse_util__parse_decimal_int_4_p_0(IntContextPieces_36, VarSet_9, Var_377, &MaybeInt_37);
                    Var_154 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[51])));
                    BoolContextPieces_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgSizeContextPieces_23, Var_154);
                    {
                      Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (parse_tree__parse_pragma_analysis__parse_pragma_termination_info_7_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (BoolContextPieces_38));
                    }
                    parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "a list of booleans", Var_162, VarSet_9, Var_379, &MaybeUsedArgs_39);
                    succeeded = ((MR_tag((MR_Word) MaybeInt_37)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Int_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeInt_37, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeUsedArgs_39)) == (MR_Integer) 1);
                      if (succeeded)
                        UsedArgs_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUsedArgs_39, (MR_Integer) 0))));
                    }
                    if (succeeded)
                    {
                      MR_Word Var_163;
                      MR_Word MaybeArgSizeInfo0_287;

                      {
                        Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Int_40));
                        MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (UsedArgs_41));
                      }
                      {
                        MaybeArgSizeInfo0_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeArgSizeInfo0_287, 0) = ((MR_Box) (Var_163));
                      }
                      {
                        MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (MaybeArgSizeInfo0_287));
                      }
                    }
                    else
                    {
                      MR_Word FiniteSpecs_42;
                      MR_Word Var_164;
                      MR_Word Var_165;

                      Var_164 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeInt_37);
                      Var_165 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[1]), MaybeUsedArgs_39);
                      FiniteSpecs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_164, Var_165);
                      {
                        MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (FiniteSpecs_42));
                      }
                    }
                  }
                  else
                  {
                    MR_Word FiniteSpec_359;
                    MR_Word Var_363;
                    MR_Word Var_364;

                    Var_363 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
                    {
                      FiniteSpec_359 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), FiniteSpec_359, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
                      MR_hl_field(MR_mktag(1), FiniteSpec_359, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), FiniteSpec_359, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(1), FiniteSpec_359, 3) = ((MR_Box) (Var_363));
                      MR_hl_field(MR_mktag(1), FiniteSpec_359, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[47])));
                    }
                    {
                      Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (FiniteSpec_359));
                      MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_364));
                    }
                  }
                }
              }
            else
            if ((strcmp(ArgSizeFunctor_20, (MR_String) "not_set") == 0))
              if ((ArgSizeArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeMaybeArgSizeInfo_25 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[3]));
              else
              {
                MR_Word NotSetPieces_28;
                MR_Word NotSetSpec_29;
                MR_Word Var_105;
                MR_Word Var_121;
                MR_Word Var_122;

                Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgSizeContextPieces_23);
                NotSetPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_105, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[60])));
                Var_121 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
                {
                  NotSetSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NotSetSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
                  MR_hl_field(MR_mktag(1), NotSetSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), NotSetSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), NotSetSpec_29, 3) = ((MR_Box) (Var_121));
                  MR_hl_field(MR_mktag(1), NotSetSpec_29, 4) = ((MR_Box) (NotSetPieces_28));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (NotSetSpec_29));
                  MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_122));
                }
              }
            else
            if ((ArgSizeArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeMaybeArgSizeInfo_25 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[2]));
            else
            {
              MR_Word InfinitePieces_32;
              MR_Word InfiniteSpec_33;
              MR_Word Var_126;
              MR_Word Var_142;
              MR_Word Var_143;

              Var_126 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgSizeContextPieces_23);
              InfinitePieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_126, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[57])));
              Var_142 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
              {
                InfiniteSpec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InfiniteSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
                MR_hl_field(MR_mktag(1), InfiniteSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), InfiniteSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), InfiniteSpec_33, 3) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(1), InfiniteSpec_33, 4) = ((MR_Box) (InfinitePieces_32));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (InfiniteSpec_33));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_143));
              }
            }
          }
          else
          {
            MR_String ArgSizeTermStr_50;
            MR_Word ArgSizePieces_51;
            MR_Word ArgSizeSpec_52;
            MR_Word Var_196;
            MR_Word Var_199;
            MR_Word Var_202;
            MR_Word Var_204;
            MR_Word Var_207;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Word Var_213;
            MR_Word Var_216;
            MR_Word Var_219;
            MR_Word Var_222;
            MR_Word Var_225;
            MR_Word Var_228;
            MR_Word Var_231;
            MR_Word Var_232;
            MR_Word Var_242;
            MR_Word Var_243;

            ArgSizeTermStr_50 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Var_346);
            Var_211 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62]));
            {
              Var_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_232, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_232, 1) = ((MR_Box) (ArgSizeTermStr_50));
            }
            {
              Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (Var_232));
              MR_hl_field(MR_mktag(1), Var_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
            }
            {
              Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) (Var_231));
            }
            {
              Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (Var_211));
              MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_228));
            }
            {
              Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[64])));
              MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (Var_225));
            }
            {
              Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[63])));
              MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_222));
            }
            {
              Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (Var_211));
              MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_219));
            }
            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[54])));
              MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (Var_216));
            }
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (Var_211));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_213));
            }
            {
              Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[58])));
              MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_210));
            }
            {
              Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_207));
            }
            {
              Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
            }
            {
              Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[18])));
              MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_202));
            }
            {
              Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[31])));
              MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_199));
            }
            {
              ArgSizePieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgSizePieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[21])));
              MR_hl_field(MR_mktag(1), ArgSizePieces_51, 1) = ((MR_Box) (Var_196));
            }
            Var_242 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_346);
            {
              ArgSizeSpec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgSizeSpec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
              MR_hl_field(MR_mktag(1), ArgSizeSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), ArgSizeSpec_52, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), ArgSizeSpec_52, 3) = ((MR_Box) (Var_242));
              MR_hl_field(MR_mktag(1), ArgSizeSpec_52, 4) = ((MR_Box) (ArgSizePieces_51));
            }
            {
              Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_243, 0) = ((MR_Box) (ArgSizeSpec_52));
              MR_hl_field(MR_mktag(1), Var_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeMaybeArgSizeInfo_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeMaybeArgSizeInfo_25, 0) = ((MR_Box) (Var_243));
            }
          }
          parse_tree__parse_pragma_analysis__parse_termination_info_4_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[68])), VarSet_9, Var_348, &MaybeMaybeTerminationInfo_54);
          succeeded = ((MR_tag((MR_Word) MaybeNameAndModes_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            PredName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_19, (MR_Integer) 0))));
            PredOrFunc_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_19, (MR_Integer) 1))));
            Modes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndModes_19, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) MaybeMaybeArgSizeInfo_25)) == (MR_Integer) 1);
            if (succeeded)
            {
              MaybeArgSizeInfo_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeArgSizeInfo_25, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeMaybeTerminationInfo_54)) == (MR_Integer) 1);
              if (succeeded)
                MaybeTerminationInfo_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeTerminationInfo_54, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word PredNameModesPF_60;
            MR_Word TermInfo_61;
            MR_Word Pragma_62;
            MR_Word ItemPragma_63;
            MR_Word Item_64;
            MR_Word Var_256;

            {
              PredNameModesPF_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_60, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_56));
              MR_hl_field(MR_mktag(0), PredNameModesPF_60, 1) = ((MR_Box) (PredName_55));
              MR_hl_field(MR_mktag(0), PredNameModesPF_60, 2) = ((MR_Box) (Modes_57));
            }
            {
              TermInfo_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TermInfo_61, 0) = ((MR_Box) (PredNameModesPF_60));
              MR_hl_field(MR_mktag(0), TermInfo_61, 1) = ((MR_Box) (MaybeArgSizeInfo_58));
              MR_hl_field(MR_mktag(0), TermInfo_61, 2) = ((MR_Box) (MaybeTerminationInfo_59));
            }
            {
              Pragma_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Pragma_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Pragma_62, 1) = ((MR_Box) (TermInfo_61));
            }
            {
              ItemPragma_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_63, 0) = ((MR_Box) (Pragma_62));
              MR_hl_field(MR_mktag(0), ItemPragma_63, 1) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), ItemPragma_63, 2) = ((MR_Box) (SeqNum_13));
            }
            {
              Item_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_64, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Item_64, 1) = ((MR_Box) (ItemPragma_63));
            }
            {
              Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Item_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_256));
            }
          }
          else
          {
            MR_Word Specs_65;
            MR_Word Var_257;
            MR_Word Var_258;
            MR_Word Var_259;
            MR_Word Var_260;

            Var_257 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[2]), MaybeNameAndModes_19);
            Var_259 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[4]), MaybeMaybeArgSizeInfo_25);
            Var_260 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[5]), MaybeMaybeTerminationInfo_54);
            Var_258 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_259, Var_260);
            Specs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_257, Var_258);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_65));
            }
          }
        }
        else
        {
          MR_Word Spec_326;
          MR_Word Var_330;
          MR_Word Var_331;

          Var_330 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_326, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_termination_info\'/7"));
            MR_hl_field(MR_mktag(1), Spec_326, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_326, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_326, 3) = ((MR_Box) (Var_330));
            MR_hl_field(MR_mktag(1), Spec_326, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[34])));
          }
          {
            Var_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_331, 0) = ((MR_Box) (Spec_326));
            MR_hl_field(MR_mktag(1), Var_331, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_331));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_termination_info_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeMaybeTerminationInfo_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word MaybeTerminationInfo_11;
  MR_String Functor_9;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
        if ((strcmp(Functor_9, (MR_String) "not_set") == 0))
        {
          MaybeTerminationInfo_11 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Functor_9, (MR_String) "can_loop") == 0))
        {
          MaybeTerminationInfo_11 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[8]));
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Functor_9, (MR_String) "cannot_loop") == 0))
        {
          MaybeTerminationInfo_11 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_3[9]));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeMaybeTerminationInfo_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeTerminationInfo_11));
    }
  else
  {
    MR_String TermStr_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_61;
    MR_Word Var_62;

    TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_30 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62]));
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (TermStr_12));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[150])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[149])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[148])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5, Var_21);
    Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_termination_info\'/4"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeTerminationInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_util__parse_decimal_int_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_58;
    MR_Word Var_153;
    MR_Word Var_154;

    Var_153 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
      MR_hl_field(MR_mktag(1), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_58, 3) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
    }
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_58));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
    }
  }
  else
  {
    MR_Word Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_221 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_168;
      MR_Word Var_172;
      MR_Word Var_173;

      Var_172 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_168, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
        MR_hl_field(MR_mktag(1), Spec_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_168, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_168, 3) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(1), Spec_168, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
      }
      {
        Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Spec_168));
        MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_173));
      }
    }
    else
    {
      MR_Word Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 1))));
      MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 0))));

      if ((Var_223 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_177;
        MR_Word Var_181;
        MR_Word Var_182;

        Var_181 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_177, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
          MR_hl_field(MR_mktag(1), Spec_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_177, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_177, 3) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(1), Spec_177, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
        }
        {
          Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Spec_177));
          MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_182));
        }
      }
      else
      {
        MR_Word Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 1))));
        MR_Word Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 0))));

        if ((Var_225 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_186;
          MR_Word Var_190;
          MR_Word Var_191;

          Var_190 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_186, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
            MR_hl_field(MR_mktag(1), Spec_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_186, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_186, 3) = ((MR_Box) (Var_190));
            MR_hl_field(MR_mktag(1), Spec_186, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Spec_186));
            MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_191));
          }
        }
        else
        {
          MR_Word Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_225, (MR_Integer) 1))));
          MR_Word Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_225, (MR_Integer) 0))));

          if ((Var_227 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_195;
            MR_Word Var_199;
            MR_Word Var_200;

            Var_199 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_195, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
              MR_hl_field(MR_mktag(1), Spec_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_195, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_195, 3) = ((MR_Box) (Var_199));
              MR_hl_field(MR_mktag(1), Spec_195, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
            }
            {
              Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Spec_195));
              MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_200));
            }
          }
          else
          {
            MR_Word Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_227, (MR_Integer) 1))));
            MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_227, (MR_Integer) 0))));

            if ((Var_229 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word PredNameContextPieces_20;
              MR_Word MaybePredOrFunc_21;
              MR_Word MaybePredName_22;
              MR_Word ArityContextPieces_23;
              MR_Word MaybeArity_24;
              MR_Word ModeNumContextPieces_25;
              MR_Word MaybeModeNum_26;
              MR_Word UnusedArgsContextPieces_27;
              MR_Word MaybeUnusedArgs_28;
              MR_Word Var_113;
              MR_Word PredOrFunc_29;
              MR_Word PredName_30;
              MR_Integer Arity_31;
              MR_Integer ModeNum_32;
              MR_Word UnusedArgs_33;

              PredNameContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[22])));
              parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(VarSet_9, Var_222, &MaybePredOrFunc_21);
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_no_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, VarSet_9, PredNameContextPieces_20, Var_224, &MaybePredName_22);
              ArityContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[24])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ArityContextPieces_23, VarSet_9, Var_226, &MaybeArity_24);
              ModeNumContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[26])));
              parse_tree__parse_util__parse_decimal_int_4_p_0(ModeNumContextPieces_25, VarSet_9, Var_228, &MaybeModeNum_26);
              UnusedArgsContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[28])));
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&parse_tree__parse_pragma_analysis_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (parse_tree__parse_pragma_analysis__parse_pragma_unused_args_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (UnusedArgsContextPieces_27));
              }
              parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_String) "a list of integers", Var_113, VarSet_9, Var_230, &MaybeUnusedArgs_28);
              succeeded = ((MR_tag((MR_Word) MaybePredOrFunc_21)) == (MR_Integer) 1);
              if (succeeded)
              {
                PredOrFunc_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_21, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybePredName_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PredName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredName_22, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeArity_24)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Arity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_24, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeModeNum_26)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ModeNum_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeModeNum_26, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeUnusedArgs_28)) == (MR_Integer) 1);
                      if (succeeded)
                        UnusedArgs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUnusedArgs_28, (MR_Integer) 0))));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word PredNameArityPFMn_34;
                MR_Word UnusedArgsInfo_35;
                MR_Word Pragma_36;
                MR_Word ItemPragma_37;
                MR_Word Item_38;
                MR_Word Var_114 = (MR_Word) (Arity_31);
                MR_Word Var_115;

                {
                  PredNameArityPFMn_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_29));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 1) = ((MR_Box) (PredName_30));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 2) = ((MR_Box) (Var_114));
                  MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 3) = ((MR_Box) (ModeNum_32));
                }
                {
                  UnusedArgsInfo_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), UnusedArgsInfo_35, 0) = ((MR_Box) (PredNameArityPFMn_34));
                  MR_hl_field(MR_mktag(0), UnusedArgsInfo_35, 1) = ((MR_Box) (UnusedArgs_33));
                }
                Pragma_36 = (MR_Word) ((MR_Word) (UnusedArgsInfo_35));
                {
                  ItemPragma_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPragma_37, 0) = ((MR_Box) (Pragma_36));
                  MR_hl_field(MR_mktag(0), ItemPragma_37, 1) = ((MR_Box) (Context_12));
                  MR_hl_field(MR_mktag(0), ItemPragma_37, 2) = ((MR_Box) (SeqNum_13));
                }
                {
                  Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemPragma_37));
                }
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Item_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_115));
                }
              }
              else
              {
                MR_Word Specs_39;
                MR_Word Var_116;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_122;
                MR_Word Var_123;

                Var_116 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), MaybePredOrFunc_21);
                Var_118 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybePredName_22);
                Var_120 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeArity_24);
                Var_122 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MaybeModeNum_26);
                Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_analysis_scalar_common_1[0]), MaybeUnusedArgs_28);
                Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_122, Var_123);
                Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_120, Var_121);
                Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_118, Var_119);
                Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_116, Var_117);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_39));
                }
              }
            }
            else
            {
              MR_Word Spec_204;
              MR_Word Var_208;
              MR_Word Var_209;

              Var_208 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
              {
                Spec_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_204, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_pragma_unused_args\'/7"));
                MR_hl_field(MR_mktag(1), Spec_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_204, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_204, 3) = ((MR_Box) (Var_208));
                MR_hl_field(MR_mktag(1), Spec_204, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[17])));
              }
              {
                Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Spec_204));
                MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_209));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_analysis__parse_predicate_or_function_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybePredOrFunc_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word PredOrFunc_9;
  MR_String Functor_7;
  MR_Word Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        if ((strcmp(Functor_7, (MR_String) "function") == 0))
        {
          PredOrFunc_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Functor_7, (MR_String) "predicate") == 0))
        {
          PredOrFunc_9 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybePredOrFunc_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrFunc_9));
    }
  else
  {
    MR_String TermStr_10;
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;
    MR_Word Var_44;

    TermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (TermStr_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_analysis_scalar_common_1[67])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[161])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[109])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[160])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_analysis_scalar_common_1[159])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_analysis.parse_predicate_or_function\'/3"));
      MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredOrFunc_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
    }
  }
}

void mercury__parse_tree__parse_pragma_analysis__init(void)
{
}

void mercury__parse_tree__parse_pragma_analysis__init_type_tables(void)
{
}

void mercury__parse_tree__parse_pragma_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_pragma_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_pragma_analysis.
