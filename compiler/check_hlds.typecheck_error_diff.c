/*
** Automatically generated from `typecheck_error_diff.m'
** by the Mercury compiler,
** version rotd-2025-12-15
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


// :- module check_hlds.typecheck_error_diff.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_diff__init
ENDINIT
*/

#include "check_hlds.typecheck_error_diff.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_EnumFunctorDesc check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_ordinal_ordered_maybe_top_level_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_name_ordered_maybe_top_level_0[2];

static const MR_Integer check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__functor_number_map_maybe_top_level_0[2];

static void MR_CALL 
check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word TypeCtorPieces_8,
  MR_Word ExistQTVars_9,
  MR_Word ActualArgTypes_10,
  MR_Word ExpectedArgTypes_11);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__higher_order_diff_pieces_10_f_0(
  MR_Word ContextPieces_12,
  MR_Word ExistQTVars_13,
  MR_Word ActualPorF_14,
  MR_Word ExpectedPorF_15,
  MR_Word ActualArgTypes_16,
  MR_Word ExpectedArgTypes_17,
  MR_Word ActualInstInfo_18,
  MR_Word ExpectedInstInfo_19,
  MR_Word ActualPurity_20,
  MR_Word ExpectedPurity_21);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_loop_7_f_0(
  MR_Word ContextPieces_1,
  MR_Word TypeCtorPieces_2,
  MR_Integer TypeCtorArity_3,
  MR_Word ExistQTVars_4,
  MR_Integer CurArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__generate_type_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word ExistQTVars_8,
  MR_Word MaybeTopLevel_9,
  MR_Word ActualType0_10,
  MR_Word ExpectedType0_11);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__wrap_diff_pieces_2_f_0(
  MR_Word ContextPieces_4,
  MR_Word MismatchPieces_5);

static void MR_CALL 
check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word MismatchPieces_6,
  MR_Word STATE_VARIABLE_DiffPieces_0_9,
  MR_Word * STATE_VARIABLE_DiffPieces_10);

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__report_type_ctor_arity_mismatch_3_f_0(
  MR_Word TypeCtorPieces_5,
  MR_Integer ActualNumArgs_6,
  MR_Integer ExpectedNumArgs_7);

static MR_bool MR_CALL 
check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_diff_scalar_common_1[82][2];




static /* final */ const MR_Box check_hlds__typecheck_error_diff_scalar_common_1[82][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "apply_n type constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Argument type mismatch:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[6])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the tuple type constructor"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed for existentially typed arguments."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The context requires a specific type, but this is"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Arity mismatch for"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only argument of"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Predicate vs function mismatch: expected a"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got a"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Purity mismatch: expected"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Predicate vs function mismatch:"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the actual type is a"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its mode says it is a"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the expected type is a"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Arity mismatch:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the actual"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type has"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its mode information says it has"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Mode mismatch:"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the actual and expected modes of the"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "differ."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Determinism mismatch:"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the expected determinism is"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[80])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_0 = {
  (MR_String) "not_top_level",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_1 = {
  (MR_String) "top_level",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_ordinal_ordered_maybe_top_level_0[2] = {
  &check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_0,
  &check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_name_ordered_maybe_top_level_0[2] = {
  &check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_0,
  &check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_functor_desc_maybe_top_level_0_1
};

static const MR_Integer check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__functor_number_map_maybe_top_level_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__type_ctor_info_maybe_top_level_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_diff",
  (MR_String) "maybe_top_level",
  { check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_name_ordered_maybe_top_level_0 },
  { check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__enum_ordinal_ordered_maybe_top_level_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__functor_number_map_maybe_top_level_0,

};

static void MR_CALL 
check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_diff__type_diff_pieces_3_f_0(
  MR_Word ExistQTVars_5,
  MR_Word ActualType0_6,
  MR_Word ExpectedType0_7)
{
  MR_Word DiffPieces_8;

  DiffPieces_8 = check_hlds__typecheck_error_diff__generate_type_diff_pieces_5_f_0((MR_Word) ((MR_Unsigned) 0U), ExistQTVars_5, (MR_Integer) 1, ActualType0_6, ExpectedType0_7);
  return DiffPieces_8;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word TypeCtorPieces_8,
  MR_Word ExistQTVars_9,
  MR_Word ActualArgTypes_10,
  MR_Word ExpectedArgTypes_11)
{
  MR_bool succeeded;
  MR_Word DiffPieces_12;
  MR_Integer ActualNumArgs_13;
  MR_Integer ExpectedNumArgs_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_10, &ActualNumArgs_13);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExpectedArgTypes_11, &ExpectedNumArgs_14);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[1]), ((MR_Box) (ActualArgTypes_10)), ((MR_Box) (ExpectedArgTypes_11)));
  if (succeeded)
    DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = (ActualNumArgs_13 == ExpectedNumArgs_14);
    if (succeeded)
      DiffPieces_12 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_loop_7_f_0(ContextPieces_7, TypeCtorPieces_8, ExpectedNumArgs_14, ExistQTVars_9, (MR_Integer) 1, ActualArgTypes_10, ExpectedArgTypes_11);
    else
    {
      MR_Word CausePieces_15;
      MR_String ArgumentS_19;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      succeeded = (ExpectedNumArgs_14 == (MR_Integer) 1);
      if (succeeded)
        ArgumentS_19 = (MR_String) "argument";
      else
        ArgumentS_19 = (MR_String) "arguments";
      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (ExpectedNumArgs_14));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (ArgumentS_19));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
      }
      Var_28 = parse_tree__error_spec__color_as_correct_1_f_0(Var_29);
      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (ActualNumArgs_13));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
      }
      Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_43);
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[31])), Var_42);
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_37);
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[30])), Var_27);
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_8, Var_25);
      CausePieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[27])), Var_24);
      if ((ContextPieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_55;

        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CausePieces_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[39])));
        DiffPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[79])), Var_55);
      }
      else
      {
        MR_Word Var_59;
        MR_Word Var_61;
        MR_Word Var_63;

        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (ContextPieces_7));
        }
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CausePieces_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[19])));
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[81])), Var_63);
        DiffPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_61);
      }
    }
  }
  return DiffPieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__higher_order_diff_pieces_10_f_0(
  MR_Word ContextPieces_12,
  MR_Word ExistQTVars_13,
  MR_Word ActualPorF_14,
  MR_Word ExpectedPorF_15,
  MR_Word ActualArgTypes_16,
  MR_Word ExpectedArgTypes_17,
  MR_Word ActualInstInfo_18,
  MR_Word ExpectedInstInfo_19,
  MR_Word ActualPurity_20,
  MR_Word ExpectedPurity_21)
{
  MR_bool succeeded = (ActualPorF_14 == ExpectedPorF_15);
  MR_Word STATE_VARIABLE_DiffPieces_53;
  MR_Word STATE_VARIABLE_DiffPieces_2_79;
  MR_Word STATE_VARIABLE_DiffPieces_3_112;
  MR_Word STATE_VARIABLE_DiffPieces_4_120;

  if (succeeded)
    STATE_VARIABLE_DiffPieces_2_79 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExpActPredFuncCausePieces_23;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_67;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_62, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
    }
    Var_60 = parse_tree__error_spec__color_as_correct_1_f_0(Var_61);
    {
      Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_74, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
    }
    Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_73);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[44])), Var_72);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
    ExpActPredFuncCausePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[42])), Var_59);
    check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ExpActPredFuncCausePieces_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_DiffPieces_2_79);
  }
  succeeded = (ActualPurity_20 == ExpectedPurity_21);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_3_112 = STATE_VARIABLE_DiffPieces_2_79;
  else
  {
    MR_Word ExpActPurityCausePieces_24;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;

    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 34U));
      MR_hl_field(3, Var_84, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPurity_21));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[45])));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_89, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPurity_21));
    }
    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_91, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
    }
    Var_87 = parse_tree__error_spec__color_as_correct_1_f_0(Var_88);
    {
      Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 34U));
      MR_hl_field(3, Var_101, 1) = (MR_Box) ((MR_Unsigned) (ActualPurity_20));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[13])));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_105, 1) = (MR_Box) ((MR_Unsigned) (ActualPurity_20));
    }
    {
      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_107, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
    }
    Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_104);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_103);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, Var_96);
    ExpActPurityCausePieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_86);
    check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ExpActPurityCausePieces_24, STATE_VARIABLE_DiffPieces_2_79, &STATE_VARIABLE_DiffPieces_3_112);
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[1]), ((MR_Box) (ActualArgTypes_16)), ((MR_Box) (ExpectedArgTypes_17)));
  if (succeeded)
    STATE_VARIABLE_DiffPieces_4_120 = STATE_VARIABLE_DiffPieces_3_112;
  else
  {
    MR_Word TypeCtorPieces_25;
    MR_Word ArgTypeCausePieces_26;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;

    {
      Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_118, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[46])));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
    }
    {
      TypeCtorPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeCtorPieces_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, TypeCtorPieces_25, 1) = ((MR_Box) (Var_114));
    }
    ArgTypeCausePieces_26 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(ContextPieces_12, TypeCtorPieces_25, ExistQTVars_13, ActualArgTypes_16, ExpectedArgTypes_17);
    check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ArgTypeCausePieces_26, STATE_VARIABLE_DiffPieces_3_112, &STATE_VARIABLE_DiffPieces_4_120);
  }
  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(ActualInstInfo_18, ExpectedInstInfo_19);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_53 = STATE_VARIABLE_DiffPieces_4_120;
  else
  {
    MR_Word ActualPredInstInfo_27;
    MR_Word ExpectedPredInstInfo_28;

    succeeded = (ActualInstInfo_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualPredInstInfo_27 = (MR_Word) (MR_body((MR_Word) (ActualInstInfo_18), (MR_Integer) 1));
      succeeded = (ExpectedInstInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ExpectedPredInstInfo_28 = (MR_Word) (MR_body((MR_Word) (ExpectedInstInfo_19), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word ActualHOPorF_29 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_27, 0))) & (MR_Integer) 1);
      MR_Word ActualArgModes_30 = ((MR_Word) ((MR_hl_field(0, ActualPredInstInfo_27, 1))));
      MR_Word ActualDetism_32 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_27, 3))) & (MR_Integer) 7);
      MR_Word ExpectedHOPorF_33 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_28, 0))) & (MR_Integer) 1);
      MR_Word ExpectedArgModes_34 = ((MR_Word) ((MR_hl_field(0, ExpectedPredInstInfo_28, 1))));
      MR_Word ExpectedDetism_36 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_28, 3))) & (MR_Integer) 7);
      MR_Integer ActualNumArgTypes_39;
      MR_Integer ExpectedNumArgTypes_40;
      MR_Integer ActualNumArgModes_41;
      MR_Integer ExpectedNumArgModes_42;
      MR_Word STATE_VARIABLE_DiffPieces_5_151;
      MR_Word STATE_VARIABLE_DiffPieces_6_182;
      MR_Word STATE_VARIABLE_DiffPieces_7_221;
      MR_Word STATE_VARIABLE_DiffPieces_8_260;
      MR_Word STATE_VARIABLE_DiffPieces_9_275;

      succeeded = (ActualHOPorF_29 == ActualPorF_14);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_5_151 = STATE_VARIABLE_DiffPieces_4_120;
      else
      {
        MR_Word ActPredFuncTypeModeCausePieces_37;
        MR_Word Var_121;
        MR_Word Var_126;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_139;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_146;

        Var_121 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[48])));
        {
          Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_134, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
        }
        Var_132 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_133);
        {
          Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_146, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_29));
        }
        {
          Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(1, Var_145, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
        }
        Var_144 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_145);
        Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[52])), Var_144);
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_139);
        Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[50])), Var_131);
        ActPredFuncTypeModeCausePieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, Var_126);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ActPredFuncTypeModeCausePieces_37, STATE_VARIABLE_DiffPieces_4_120, &STATE_VARIABLE_DiffPieces_5_151);
      }
      succeeded = (ExpectedHOPorF_33 == ExpectedPorF_15);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_6_182 = STATE_VARIABLE_DiffPieces_5_151;
      else
      {
        MR_Word ExpPredFuncTypeModeCausePieces_38;
        MR_Word Var_152;
        MR_Word Var_157;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_170;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;

        Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[48])));
        {
          Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_165, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
        }
        Var_163 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_164);
        {
          Var_177 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_177, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_177, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_29));
        }
        {
          Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_176, 0) = ((MR_Box) (Var_177));
          MR_hl_field(1, Var_176, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
        }
        Var_175 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_176);
        Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[52])), Var_175);
        Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, Var_170);
        Var_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[54])), Var_162);
        ExpPredFuncTypeModeCausePieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, Var_157);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ExpPredFuncTypeModeCausePieces_38, STATE_VARIABLE_DiffPieces_5_151, &STATE_VARIABLE_DiffPieces_6_182);
      }
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_16, &ActualNumArgTypes_39);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExpectedArgTypes_17, &ExpectedNumArgTypes_40);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ActualArgModes_30, &ActualNumArgModes_41);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExpectedArgModes_34, &ExpectedNumArgModes_42);
      succeeded = (ActualNumArgTypes_39 == ActualNumArgModes_41);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_7_221 = STATE_VARIABLE_DiffPieces_6_182;
      else
      {
        MR_Integer ActualTypeArity_43;
        MR_Integer ActualModeArity_44;
        MR_Word ActArityCausePieces_45;
        MR_Word Var_183;
        MR_Word Var_188;
        MR_Word Var_189;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_201;
        MR_Word Var_209;
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_216;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualTypeArity_43, ActualNumArgTypes_39);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualModeArity_44, ActualNumArgModes_41);
        Var_183 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[56])));
        {
          Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_193, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
          MR_hl_field(1, Var_192, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[59])));
        }
        {
          Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_189, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[57])));
          MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_192));
        }
        {
          Var_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_201, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_201, 1) = ((MR_Box) (ActualTypeArity_43));
        }
        {
          Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
          MR_hl_field(1, Var_200, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[61])));
        }
        Var_199 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_200);
        {
          Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_216, 1) = ((MR_Box) (ActualModeArity_44));
        }
        {
          Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
          MR_hl_field(1, Var_215, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[65])));
        }
        Var_214 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_215);
        Var_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[63])), Var_214);
        Var_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_199, Var_209);
        Var_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_189, Var_198);
        ActArityCausePieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_183, Var_188);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ActArityCausePieces_45, STATE_VARIABLE_DiffPieces_6_182, &STATE_VARIABLE_DiffPieces_7_221);
      }
      succeeded = (ExpectedNumArgTypes_40 == ExpectedNumArgModes_42);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_8_260 = STATE_VARIABLE_DiffPieces_7_221;
      else
      {
        MR_Integer ExpectedTypeArity_46;
        MR_Integer ExpectedModeArity_47;
        MR_Word ExpArityCausePieces_48;
        MR_Word Var_222;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_248;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedTypeArity_46, ExpectedNumArgTypes_40);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedModeArity_47, ExpectedNumArgModes_42);
        Var_222 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[56])));
        {
          Var_232 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_232, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_232, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
        }
        {
          Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_231, 0) = ((MR_Box) (Var_232));
          MR_hl_field(1, Var_231, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[59])));
        }
        {
          Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_228, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[57])));
          MR_hl_field(1, Var_228, 1) = ((MR_Box) (Var_231));
        }
        {
          Var_240 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_240, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_240, 1) = ((MR_Box) (ExpectedTypeArity_46));
        }
        {
          Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_239, 0) = ((MR_Box) (Var_240));
          MR_hl_field(1, Var_239, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[61])));
        }
        Var_238 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_239);
        {
          Var_255 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_255, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_255, 1) = ((MR_Box) (ExpectedModeArity_47));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (Var_255));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[65])));
        }
        Var_253 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_254);
        Var_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[63])), Var_253);
        Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_238, Var_248);
        Var_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_228, Var_237);
        ExpArityCausePieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, Var_227);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ExpArityCausePieces_48, STATE_VARIABLE_DiffPieces_7_221, &STATE_VARIABLE_DiffPieces_8_260);
      }
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[66]), ((MR_Box) (ActualArgModes_30)), ((MR_Box) (ExpectedArgModes_34)));
      if (succeeded)
        STATE_VARIABLE_DiffPieces_9_275 = STATE_VARIABLE_DiffPieces_8_260;
      else
      {
        MR_Word ModeCausePieces_49;
        MR_Word Var_261;
        MR_Word Var_266;
        MR_Word Var_269;
        MR_Word Var_270;

        Var_261 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[68])));
        {
          Var_270 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_270, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_270, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_269, 0) = ((MR_Box) (Var_270));
          MR_hl_field(1, Var_269, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[71])));
        }
        {
          Var_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_266, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[69])));
          MR_hl_field(1, Var_266, 1) = ((MR_Box) (Var_269));
        }
        ModeCausePieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_261, Var_266);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, ModeCausePieces_49, STATE_VARIABLE_DiffPieces_8_260, &STATE_VARIABLE_DiffPieces_9_275);
      }
      succeeded = (ActualDetism_32 == ExpectedDetism_36);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_53 = STATE_VARIABLE_DiffPieces_9_275;
      else
      {
        MR_String ActualDetismStr_50;
        MR_String ExpectedDetismStr_51;
        MR_Word DetismCausePieces_52;
        MR_Word Var_276;
        MR_Word Var_279;
        MR_Word Var_282;
        MR_Word Var_283;
        MR_Word Var_291;
        MR_Word Var_292;
        MR_Word Var_293;
        MR_Word Var_294;
        MR_Word Var_299;
        MR_Word Var_304;
        MR_Word Var_305;
        MR_Word Var_306;

        ActualDetismStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_32);
        ExpectedDetismStr_51 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ExpectedDetism_36);
        {
          Var_283 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_283, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_283, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_282 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_282, 0) = ((MR_Box) (Var_283));
          MR_hl_field(1, Var_282, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[76])));
        }
        {
          Var_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_279, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[57])));
          MR_hl_field(1, Var_279, 1) = ((MR_Box) (Var_282));
        }
        {
          Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_276, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[72])));
          MR_hl_field(1, Var_276, 1) = ((MR_Box) (Var_279));
        }
        {
          Var_294 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_294, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_294, 1) = ((MR_Box) (ActualDetismStr_50));
        }
        {
          Var_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_293, 0) = ((MR_Box) (Var_294));
          MR_hl_field(1, Var_293, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
        }
        Var_292 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_293);
        {
          Var_306 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_306, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_306, 1) = ((MR_Box) (ExpectedDetismStr_51));
        }
        {
          Var_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_305, 0) = ((MR_Box) (Var_306));
          MR_hl_field(1, Var_305, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
        }
        Var_304 = parse_tree__error_spec__color_as_correct_1_f_0(Var_305);
        Var_299 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[78])), Var_304);
        Var_291 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_292, Var_299);
        DetismCausePieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_276, Var_291);
        check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(ContextPieces_12, DetismCausePieces_52, STATE_VARIABLE_DiffPieces_9_275, &STATE_VARIABLE_DiffPieces_53);
      }
    }
    else
      STATE_VARIABLE_DiffPieces_53 = STATE_VARIABLE_DiffPieces_4_120;
  }
  return STATE_VARIABLE_DiffPieces_53;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_loop_7_f_0(
  MR_Word ContextPieces_1,
  MR_Word TypeCtorPieces_2,
  MR_Integer TypeCtorArity_3,
  MR_Word ExistQTVars_4,
  MR_Integer CurArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__8_8;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_diff.arg_type_list_diff_pieces_loop\'/7", (MR_String) "list length mismatch");
  else
  {
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));

    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_diff.arg_type_list_diff_pieces_loop\'/7", (MR_String) "list length mismatch");
    else
    {
      MR_Word ExpectedArgType_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word ExpectedArgTypes_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word TailDiffPieces_44;
      MR_Integer Var_48 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);

      TailDiffPieces_44 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_loop_7_f_0(ContextPieces_1, TypeCtorPieces_2, TypeCtorArity_3, ExistQTVars_4, Var_48, Var_77, ExpectedArgTypes_42);
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_78, ExpectedArgType_41);
      if (succeeded)
        HeadVar__8_8 = TailDiffPieces_44;
      else
      {
        MR_Word ArgNumOfPieces_45;
        MR_Word ArgContextPieces_46;
        MR_Word HeadDiffPieces_47;
        MR_Word Var_58;
        MR_Word Var_60;
        MR_Word Var_67;
        MR_Word Var_68;

        succeeded = (TypeCtorArity_3 == (MR_Integer) 1);
        if (succeeded)
          ArgNumOfPieces_45 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[33]));
        else
        {
          MR_Word Var_53;

          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (CurArgNum_5));
          }
          {
            ArgNumOfPieces_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArgNumOfPieces_45, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, ArgNumOfPieces_45, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[35])));
          }
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (ContextPieces_1));
        }
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_2, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[40])));
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumOfPieces_45, Var_68);
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[38])), Var_67);
        ArgContextPieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_60);
        HeadDiffPieces_47 = check_hlds__typecheck_error_diff__generate_type_diff_pieces_5_f_0(ArgContextPieces_46, ExistQTVars_4, (MR_Integer) 0, Var_78, ExpectedArgType_41);
        HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadDiffPieces_47, TailDiffPieces_44);
      }
    }
  }
  return HeadVar__8_8;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__generate_type_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word ExistQTVars_8,
  MR_Word MaybeTopLevel_9,
  MR_Word ActualType0_10,
  MR_Word ExpectedType0_11)
{
  MR_bool succeeded;
  MR_Word DiffPieces_12;
  MR_Word ActualType_13;
  MR_Word ExpectedType_14;

  ActualType_13 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ActualType0_10);
  ExpectedType_14 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ExpectedType0_11);
  succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(ActualType_13, ExpectedType_14);
  if (succeeded)
    DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DiffPiecesPrime_28;

    switch (MR_tag((MR_Word) ActualType_13)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_126_126;
          MR_Word ActualTypeSymName_18 = ((MR_Word) ((MR_hl_field(1, ActualType_13, 0))));
          MR_Word ActualArgTypes_19 = ((MR_Word) ((MR_hl_field(1, ActualType_13, 1))));
          MR_Word ExpectedTypeSymName_21;
          MR_Word ExpectedArgTypes_22;
          MR_Integer ActualArity_24;
          MR_Integer ExpectedArity_25;
          MR_Word ActualTypeCtor_26;
          MR_Word ExpectedTypeCtor_27;

          succeeded = ((MR_tag((MR_Word) ExpectedType_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            ExpectedTypeSymName_21 = ((MR_Word) ((MR_hl_field(1, ExpectedType_14, 0))));
            ExpectedArgTypes_22 = ((MR_Word) ((MR_hl_field(1, ExpectedType_14, 1))));
            TypeCtorInfo_126_126 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__list__length_2_p_0(TypeCtorInfo_126_126, ActualArgTypes_19, &ActualArity_24);
            mercury__list__length_2_p_0(TypeCtorInfo_126_126, ExpectedArgTypes_22, &ExpectedArity_25);
            {
              ActualTypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActualTypeCtor_26, 0) = ((MR_Box) (ActualTypeSymName_18));
              MR_hl_field(0, ActualTypeCtor_26, 1) = ((MR_Box) (ActualArity_24));
            }
            {
              ExpectedTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ExpectedTypeCtor_27, 0) = ((MR_Box) (ExpectedTypeSymName_21));
              MR_hl_field(0, ExpectedTypeCtor_27, 1) = ((MR_Box) (ExpectedArity_25));
            }
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ActualTypeCtor_26, ExpectedTypeCtor_27);
            if (succeeded)
            {
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[1]), ((MR_Box) (ActualArgTypes_19)), ((MR_Box) (ExpectedArgTypes_22)));
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_56 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[4]));
                Var_60 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 21U));
                  MR_hl_field(3, Var_59, 1) = ((MR_Box) (ActualTypeCtor_26));
                }
                {
                  Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                  MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
                }
                DiffPiecesPrime_28 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(ContextPieces_7, Var_55, ExistQTVars_8, ActualArgTypes_19, ExpectedArgTypes_22);
                succeeded = (DiffPiecesPrime_28 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word CausePieces_34;

              succeeded = (ActualArity_24 == ExpectedArity_25);
              if (succeeded)
              {
                MR_Word TypeCtorInfo_127_127;
                MR_Word ActualTCPiece_32;
                MR_Word ExpectedTCPiece_33;
                MR_Word Var_61;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_96;
                MR_Word CommonModuleName_29;
                MR_Word Var_129;

                succeeded = (MaybeTopLevel_9 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ActualTypeSymName_18)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    CommonModuleName_29 = ((MR_Word) ((MR_hl_field(1, ActualTypeSymName_18, 0))));
                    succeeded = ((MR_tag((MR_Word) ExpectedTypeSymName_21)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_129 = ((MR_Word) ((MR_hl_field(1, ExpectedTypeSymName_21, 0))));
                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CommonModuleName_29, Var_129);
                    }
                  }
                  if (succeeded)
                  {
                    {
                      ActualTCPiece_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ActualTCPiece_32, 0) = ((MR_Box) ((MR_Unsigned) 21U));
                      MR_hl_field(3, ActualTCPiece_32, 1) = ((MR_Box) (ActualTypeCtor_26));
                    }
                    {
                      ExpectedTCPiece_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ExpectedTCPiece_33, 0) = ((MR_Box) ((MR_Unsigned) 21U));
                      MR_hl_field(3, ExpectedTCPiece_33, 1) = ((MR_Box) (ExpectedTypeCtor_27));
                    }
                  }
                  else
                  {
                    {
                      ActualTCPiece_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ActualTCPiece_32, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(3, ActualTCPiece_32, 1) = ((MR_Box) (ActualTypeCtor_26));
                    }
                    {
                      ExpectedTCPiece_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ExpectedTCPiece_33, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(3, ExpectedTCPiece_33, 1) = ((MR_Box) (ExpectedTypeCtor_27));
                    }
                  }
                  TypeCtorInfo_127_127 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                  Var_61 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[10]));
                  Var_74 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12]));
                  {
                    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_73, 0) = ((MR_Box) (ExpectedTCPiece_33));
                    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
                  }
                  Var_72 = parse_tree__error_spec__color_as_correct_1_f_0(Var_73);
                  Var_79 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[16]));
                  Var_92 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18]));
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (ActualTCPiece_32));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
                  }
                  Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_91);
                  Var_96 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[19]));
                  Var_89 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_127_127, Var_90, Var_96);
                  Var_78 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_127_127, Var_79, Var_89);
                  Var_71 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_127_127, Var_72, Var_78);
                  CausePieces_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_127_127, Var_61, Var_71);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word TypeCtorPieces_35;
                MR_Word Var_102;
                MR_Word Var_103;

                {
                  Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(3, Var_103, 1) = ((MR_Box) (ActualTypeSymName_18));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  TypeCtorPieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypeCtorPieces_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_diff_scalar_common_1[4])));
                  MR_hl_field(1, TypeCtorPieces_35, 1) = ((MR_Box) (Var_102));
                }
                CausePieces_34 = check_hlds__typecheck_error_diff__report_type_ctor_arity_mismatch_3_f_0(TypeCtorPieces_35, ActualArity_24, ExpectedArity_25);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                DiffPiecesPrime_28 = check_hlds__typecheck_error_diff__wrap_diff_pieces_2_f_0(ContextPieces_7, CausePieces_34);
                succeeded = (DiffPiecesPrime_28 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ActualType_13, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_105;
              MR_Word ActualArgTypes_120 = ((MR_Word) ((MR_hl_field(3, ActualType_13, 1))));
              MR_Word ExpectedArgTypes_121;
              MR_Word TypeInfo_137_137;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_14, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ExpectedArgTypes_121 = ((MR_Word) ((MR_hl_field(3, ExpectedType_14, 1))));
                TypeInfo_137_137 = (MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_137_137, ((MR_Box) (ActualArgTypes_120)), ((MR_Box) (ExpectedArgTypes_121)));
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_105 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[21]));
                  DiffPiecesPrime_28 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(ContextPieces_7, Var_105, ExistQTVars_8, ActualArgTypes_120, ExpectedArgTypes_121);
                  succeeded = (DiffPiecesPrime_28 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ActualPorF_41 = ((MR_Unsigned) ((MR_hl_field(3, ActualType_13, 1))) & (MR_Integer) 1);
              MR_Word ActualInstInfo_42 = ((MR_Word) ((MR_hl_field(3, ActualType_13, 3))));
              MR_Word ActualPurity_43 = ((MR_Unsigned) ((MR_hl_field(3, ActualType_13, 4))) & (MR_Integer) 3);
              MR_Word ExpectedPorF_44;
              MR_Word ExpectedInstInfo_45;
              MR_Word ExpectedPurity_46;
              MR_Word ActualArgTypes_124 = ((MR_Word) ((MR_hl_field(3, ActualType_13, 2))));
              MR_Word ExpectedArgTypes_125;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_14, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ExpectedPorF_44 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_14, 1))) & (MR_Integer) 1);
                ExpectedArgTypes_125 = ((MR_Word) ((MR_hl_field(3, ExpectedType_14, 2))));
                ExpectedInstInfo_45 = ((MR_Word) ((MR_hl_field(3, ExpectedType_14, 3))));
                ExpectedPurity_46 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_14, 4))) & (MR_Integer) 3);
                DiffPiecesPrime_28 = check_hlds__typecheck_error_diff__higher_order_diff_pieces_10_f_0(ContextPieces_7, ExistQTVars_8, ActualPorF_41, ExpectedPorF_44, ActualArgTypes_124, ExpectedArgTypes_125, ActualInstInfo_42, ExpectedInstInfo_45, ActualPurity_43, ExpectedPurity_46);
                succeeded = (DiffPiecesPrime_28 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_132_132;
              MR_Word TVar_38 = ((MR_Word) ((MR_hl_field(3, ActualType_13, 1))));
              MR_Word Var_109;
              MR_Word ActualArgTypes_122 = ((MR_Word) ((MR_hl_field(3, ActualType_13, 2))));
              MR_Word ExpectedArgTypes_123;
              MR_Word Var_130;
              MR_Word TypeInfo_133_133;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_14, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_130 = ((MR_Word) ((MR_hl_field(3, ExpectedType_14, 1))));
                ExpectedArgTypes_123 = ((MR_Word) ((MR_hl_field(3, ExpectedType_14, 2))));
                TypeInfo_132_132 = (MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_132_132, ((MR_Box) (TVar_38)), ((MR_Box) (Var_130)));
                if (succeeded)
                {
                  TypeInfo_133_133 = (MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_133_133, ((MR_Box) (ActualArgTypes_122)), ((MR_Box) (ExpectedArgTypes_123)));
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_109 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[3]));
                    DiffPiecesPrime_28 = check_hlds__typecheck_error_diff__arg_type_list_diff_pieces_5_f_0(ContextPieces_7, Var_109, ExistQTVars_8, ActualArgTypes_122, ExpectedArgTypes_123);
                    succeeded = (DiffPiecesPrime_28 != (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            break;
        }
        break;
    }
    if (succeeded)
      DiffPieces_12 = DiffPiecesPrime_28;
    else
    {
      MR_Word TypeInfo_128_128;
      MR_Word ExpectedTVar_49;

      succeeded = ((MR_tag((MR_Word) ExpectedType_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        ExpectedTVar_49 = ((MR_Word) ((MR_hl_field(0, ExpectedType_14, 0))));
        TypeInfo_128_128 = (MR_Word) (&check_hlds__typecheck_error_diff_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_128_128, ((MR_Box) (ExpectedTVar_49)), ExistQTVars_8);
        if (succeeded)
          succeeded = ((MR_tag((MR_Word) ActualType_13)) != (MR_Integer) 0);
      }
      if (succeeded)
        DiffPieces_12 = check_hlds__typecheck_error_diff__wrap_diff_pieces_2_f_0(ContextPieces_7, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[25])));
      else
      if ((ContextPieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
        DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
        DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  return DiffPieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__wrap_diff_pieces_2_f_0(
  MR_Word ContextPieces_4,
  MR_Word MismatchPieces_5)
{
  MR_Word DiffPieces_6;

  if ((ContextPieces_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_12;

    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[39])));
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[79])), Var_12);
  }
  else
  {
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_25;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (ContextPieces_4));
    }
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[19])));
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[81])), Var_25);
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_18);
  }
  return DiffPieces_6;
}

static void MR_CALL 
check_hlds__typecheck_error_diff__add_to_diff_pieces_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word MismatchPieces_6,
  MR_Word STATE_VARIABLE_DiffPieces_0_9,
  MR_Word * STATE_VARIABLE_DiffPieces_10)
{
  MR_Word NewDiffPieces_8;

  if ((ContextPieces_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_17;

    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_6, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[39])));
    NewDiffPieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[79])), Var_17);
  }
  else
  {
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_25;

    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (ContextPieces_5));
    }
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_6, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[19])));
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[81])), Var_25);
    NewDiffPieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_23);
  }
  *STATE_VARIABLE_DiffPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_0_9, NewDiffPieces_8);
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_diff__report_type_ctor_arity_mismatch_3_f_0(
  MR_Word TypeCtorPieces_5,
  MR_Integer ActualNumArgs_6,
  MR_Integer ExpectedNumArgs_7)
{
  MR_bool succeeded = (ExpectedNumArgs_7 == (MR_Integer) 1);
  MR_Word Pieces_8;
  MR_String ArgumentS_9;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  if (succeeded)
    ArgumentS_9 = (MR_String) "argument";
  else
    ArgumentS_9 = (MR_String) "arguments";
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (ExpectedNumArgs_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (ArgumentS_9));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[12])));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
  }
  Var_24 = parse_tree__error_spec__color_as_correct_1_f_0(Var_25);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (ActualNumArgs_6));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[18])));
  }
  Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[31])), Var_38);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_33);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[30])), Var_23);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_5, Var_15);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_diff_scalar_common_1[27])), Var_14);
  return Pieces_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_diff____Unify____maybe_top_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_diff____Compare____maybe_top_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_diff__init(void)
{
}

void mercury__check_hlds__typecheck_error_diff__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_diff__check_hlds__typecheck_error_diff__type_ctor_info_maybe_top_level_0);
}

void mercury__check_hlds__typecheck_error_diff__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_diff__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_diff.
