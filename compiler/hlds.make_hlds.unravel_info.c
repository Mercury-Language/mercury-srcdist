/*
** Automatically generated from `unravel_info.m'
** by the Mercury compiler,
** version rotd-2026-08-31
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


// :- module hlds.make_hlds.unravel_info.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__unravel_info__init
ENDINIT
*/

#include "hlds.make_hlds.unravel_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_types_unravel_info_0_0[7];

static const MR_ConstString hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_names_unravel_info_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_functor_desc_unravel_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_stag_ordered_unravel_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_ptag_ordered_unravel_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_name_ordered_unravel_info_0[1];

static const MR_Integer hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__functor_number_map_unravel_info_0[1];

static void MR_CALL 
hlds__make_hlds__unravel_info__report_unneeded_svar_in_lambda_8_p_0(
  MR_Word Context_9,
  MR_Word Modes_10,
  MR_Word ParseTreeGoal_11,
  MR_Word GoalVarSVarNames_12,
  MR_Unsigned ArgNum_13,
  MR_Word SVarArgDesc_14,
  MR_Word STATE_VARIABLE_UrInfo_0_30,
  MR_Word * STATE_VARIABLE_UrInfo_31);

static void MR_CALL 
hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__unravel_info____Unify____unravel_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__unravel_info____Compare____unravel_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_1[102][2];

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_4[1][11];




static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_1[102][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: you cannot use"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since it represents two arguments, not one,"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be a function result. You probably meant"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: you cannot refer to"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here, because that state variable has"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not been initialized"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "yet."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the if-then-else"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "defines"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but not this one."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the state variable"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "never updated"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replaced with an ordinary variable."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this lambda expressions, so it should be"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the argument"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this lambda expression"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be deleted,"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as its initial value."))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its value"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the arguments"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as the initial value."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and because the final value"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they are not used in the lambda goal,"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[99])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 232U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 198U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 234U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 212U) },
};

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__unravel_info_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__type_ctor_info_unravel_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__unravel_info__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_types_unravel_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__unravel_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__unravel_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0)
};

static const MR_ConstString hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_names_unravel_info_0_0[7] = {
  (MR_String) "ui_module_info",
  (MR_String) "ui_fgt_threshold",
  (MR_String) "ui_qual_info",
  (MR_String) "ui_varset",
  (MR_String) "ui_state_var_store",
  (MR_String) "ui_err_specs",
  (MR_String) "ui_warn_specs"
};

static const MR_DuFunctorDesc hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_functor_desc_unravel_info_0_0 = {
  (MR_String) "unravel_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_types_unravel_info_0_0,
  hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__field_names_unravel_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_stag_ordered_unravel_info_0_0[1] = { &hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_functor_desc_unravel_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_ptag_ordered_unravel_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_stag_ordered_unravel_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_name_ordered_unravel_info_0[1] = { &hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_functor_desc_unravel_info_0_0 };

static const MR_Integer hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__functor_number_map_unravel_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__type_ctor_info_unravel_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__unravel_info____Unify____unravel_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__unravel_info____Compare____unravel_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.unravel_info",
  (MR_String) "unravel_info",
  { hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_name_ordered_unravel_info_0 },
  { hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__du_ptag_ordered_unravel_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__functor_number_map_unravel_info_0,

};

void MR_CALL 
hlds__make_hlds__unravel_info____Compare____unravel_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__make_hlds__qual_info____Compare____qual_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__make_hlds__state_var____Compare____svar_store_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__unravel_info____Unify____unravel_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__unravel_info__report_unneeded_svar_in_lambda_8_p_0(
  MR_Word Context_9,
  MR_Word Modes_10,
  MR_Word ParseTreeGoal_11,
  MR_Word GoalVarSVarNames_12,
  MR_Unsigned ArgNum_13,
  MR_Word SVarArgDesc_14,
  MR_Word STATE_VARIABLE_UrInfo_0_30,
  MR_Word * STATE_VARIABLE_UrInfo_31)
{
  MR_bool succeeded;
  MR_Word InitOrFinal_16 = ((MR_Word) ((MR_hl_field(0, SVarArgDesc_14, 0))));
  MR_String SVarName_17 = ((MR_String) ((MR_hl_field(0, SVarArgDesc_14, 1))));

  switch (MR_tag((MR_Word) InitOrFinal_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InitOrFinal_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_175;
            MR_Word Spec_177;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_String Var_183;
            MR_Word Var_185;
            MR_Word Var_187;
            MR_Word Var_188;

            Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_17);
            {
              Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_182, 1) = ((MR_Box) (Var_183));
            }
            {
              Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
              MR_hl_field(1, Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_180 = parse_tree__error_spec__color_as_subject_1_f_0(Var_181);
            Var_188 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[77])));
            Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_188, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[81])));
            Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[75])), Var_187);
            Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_180, Var_185);
            Pieces_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[73])), Var_179);
            {
              Spec_177 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_177, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_177, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[2])));
              MR_hl_field(0, Spec_177, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_177, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_177, 4) = ((MR_Box) (Pieces_175));
            }
            hlds__make_hlds__unravel_info__add_unravel_warn_3_p_0(Spec_177, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pieces_19;
            MR_Word Spec_21;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_String Var_40;
            MR_Word Var_42;
            MR_Word Var_47;
            MR_Word Var_48;

            Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
            {
              Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
            }
            {
              Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
            Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[77])));
            Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[81])));
            Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[75])), Var_47);
            Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[73])), Var_36);
            {
              Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_21, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[2])));
              MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_19));
            }
            hlds__make_hlds__unravel_info__add_unravel_warn_3_p_0(Spec_21, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned FinalArgNum_23 = ((MR_Unsigned) ((MR_hl_field(1, InitOrFinal_16, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SVarName_17)), GoalVarSVarNames_12);
        if (succeeded)
        {
          MR_Word ModuleInfo_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_30, 0))));
          MR_Integer FinalArgNumI_25;
          MR_Integer InitArgNumI_26;
          MR_Word InitArgMode_27;
          MR_Word FinalArgMode_28;
          MR_Box conv0_InitArgMode_27;
          MR_Box conv1_FinalArgMode_28;

          FinalArgNumI_25 = mercury__uint__cast_to_int_1_f_0(FinalArgNum_23);
          InitArgNumI_26 = mercury__uint__cast_to_int_1_f_0(ArgNum_13);
          mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_10, InitArgNumI_26, &conv0_InitArgMode_27);
          InitArgMode_27 = ((MR_Word) (conv0_InitArgMode_27));
          mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_10, FinalArgNumI_25, &conv1_FinalArgMode_28);
          FinalArgMode_28 = ((MR_Word) (conv1_FinalArgMode_28));
          succeeded = ((((MR_tag((MR_Word) ParseTreeGoal_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ParseTreeGoal_11, 0)))) == (MR_Integer) 0)));
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_24, InitArgMode_27);
            if (succeeded)
              succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_24, FinalArgMode_28);
          }
          if (succeeded)
          {
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_String Var_74;
            MR_Word Var_77;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Pieces_151;
            MR_Word Spec_153;

            Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_71 = parse_tree__error_spec__color_as_subject_1_f_0(Var_72);
            Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[87])));
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[91])));
            Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[85])), Var_82);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_77);
            Pieces_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[83])), Var_70);
            {
              Spec_153 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_153, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_153, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[3])));
              MR_hl_field(0, Spec_153, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_153, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_153, 4) = ((MR_Box) (Pieces_151));
            }
            hlds__make_hlds__unravel_info__add_unravel_warn_3_p_0(Spec_153, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          else
            *STATE_VARIABLE_UrInfo_31 = STATE_VARIABLE_UrInfo_0_30;
        }
        else
        {
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_String Var_109;
          MR_Word Var_112;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_String Var_121;
          MR_Word Var_124;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Pieces_160;
          MR_Word Spec_162;

          Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_17);
          {
            Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_106 = parse_tree__error_spec__color_as_subject_1_f_0(Var_107);
          Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
          {
            Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
          }
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
            MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_118 = parse_tree__error_spec__color_as_subject_1_f_0(Var_119);
          Var_130 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[87])));
          Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[101])));
          Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[85])), Var_129);
          Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_124);
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[95])), Var_117);
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_112);
          Pieces_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[93])), Var_105);
          {
            Spec_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_unneeded_svar_in_lambda\'/8"));
            MR_hl_field(0, Spec_162, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[3])));
            MR_hl_field(0, Spec_162, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Spec_162, 3) = ((MR_Box) (Context_9));
            MR_hl_field(0, Spec_162, 4) = ((MR_Box) (Pieces_160));
          }
          hlds__make_hlds__unravel_info__add_unravel_warn_3_p_0(Spec_162, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UrInfo_31;

  hlds__make_hlds__unravel_info__report_unneeded_svar_in_lambda_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_UrInfo_31);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_UrInfo_31));
}

static MR_bool MR_CALL 
hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  succeeded = hlds__make_hlds__state_var__is_prog_var_for_some_state_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0(
  MR_Word Context_8,
  MR_Word Modes_9,
  MR_Word ParseTreeGoal_10,
  MR_Word Goal_11,
  MR_Word UnusedSVarArgMap_12,
  MR_Word STATE_VARIABLE_UrInfo_0_18,
  MR_Word * STATE_VARIABLE_UrInfo_19)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarArgMap_12);
  if (succeeded)
    *STATE_VARIABLE_UrInfo_19 = STATE_VARIABLE_UrInfo_0_18;
  else
  {
    MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_18, 3))));
    MR_Word GoalVarsSet_15;
    MR_Word GoalVars_16;
    MR_Word GoalVarSVarNames_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv2_STATE_VARIABLE_UrInfo_19;

    hlds__goal_vars__non_svar_copy_vars_in_goal_2_p_0(Goal_11, &GoalVarsSet_15);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVarsSet_15, &GoalVars_16);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&hlds__make_hlds__unravel_info_scalar_common_3[0]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (VarSet_14));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, GoalVars_16, &GoalVarSVarNames_17);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__make_hlds__unravel_info_scalar_common_4[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__make_hlds__unravel_info__report_any_unneeded_svars_in_lambda_7_p_0_2));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (Modes_9));
      MR_hl_field(0, Var_21, 5) = ((MR_Box) (ParseTreeGoal_10));
      MR_hl_field(0, Var_21, 6) = ((MR_Box) (GoalVarSVarNames_17));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), (MR_Word) (&hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__type_ctor_info_unravel_info_0), Var_21, UnusedSVarArgMap_12, ((MR_Box) (STATE_VARIABLE_UrInfo_0_18)), &conv2_STATE_VARIABLE_UrInfo_19);
    *STATE_VARIABLE_UrInfo_19 = ((MR_Word) (conv2_STATE_VARIABLE_UrInfo_19));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_svar_unify_error_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_25;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_String Var_39;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_51;
  MR_Word Specs0_71;
  MR_Word Specs_72;
  MR_Word Var_73;
  MR_Integer Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, StateVar_6);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_9);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_19 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_20);
  Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_9);
  {
    Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_38, 0) = ((MR_Box) (Var_39));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_36 = parse_tree__error_spec__color_as_correct_1_f_0(Var_37);
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_9);
  {
    Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_50, 0) = ((MR_Box) (Var_51));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[13])));
  }
  Var_48 = parse_tree__error_spec__color_as_correct_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[31])), Var_47);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_42);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[71])), Var_35);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_25);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[24])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_svar_unify_error\'/4"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 0))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 1))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 2))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 4))));
  Specs0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 5))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 6))));
  {
    Specs_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_72, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, Specs_72, 1) = ((MR_Box) (Specs0_71));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_72));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_78));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_missing_inits_in_disjunct_4_p_0(
  MR_Word Context_5,
  MR_Word NextStateVars_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_24;
  MR_Word Var_25;

  Var_17 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[53])), NextStateVars_6);
  Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[66])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_24);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[64])), Var_16);
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_missing_inits_in_disjunct\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[1])));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_missing_inits_in_ite_5_p_0(
  MR_Word Context_6,
  MR_Word NextStateVars_7,
  MR_String WhenMissing_8,
  MR_String WhenNotMissing_9,
  MR_Word * Spec_10)
{
  MR_Word NextStateVarsPieces_11;
  MR_Word Pieces_12;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_48;
  MR_Word Var_49;

  NextStateVarsPieces_11 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[53])), NextStateVars_7);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (WhenNotMissing_9));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[57])));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[54])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  Var_32 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[59])));
  {
    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_43, 1) = ((MR_Box) (WhenMissing_8));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[53])));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[60])));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  Var_49 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[62])));
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_48);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NextStateVarsPieces_11, Var_38);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_37);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_missing_inits_in_ite\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[1])));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_state_var_shadow_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Specs0_44;
  MR_Word Specs_45;
  MR_Word Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, StateVar_6);
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (Name_9));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_19 = parse_tree__error_spec__color_as_subject_1_f_0(Var_20);
  Var_24 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[51])));
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_23);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[49])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_state_var_shadow\'/4"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_2[0])));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 0))));
  Var_47 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 1))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 4))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 5))));
  Specs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 6))));
  {
    Specs_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_45, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, Specs_45, 1) = ((MR_Box) (Specs0_44));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 6) = ((MR_Box) (Specs_45));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_repeated_head_state_var_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Specs0_43;
  MR_Word Specs_44;
  MR_Word Var_45;
  MR_Integer Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, StateVar_6);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Name_9));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[16])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Var_19 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_20);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[47])));
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[45])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_repeated_head_state_var\'/4"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 0))));
  Var_46 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 4))));
  Specs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 6))));
  {
    Specs_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_44, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, Specs_44, 1) = ((MR_Box) (Specs0_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_44));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_uninitialized_state_var_5_p_0(
  MR_Word WarnOption_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  MR_String Name_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_24;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_45;
  MR_Word Specs0_55;
  MR_Word Specs_56;
  MR_Word Var_57;
  MR_Integer Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;

  Name_11 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, StateVar_8);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_11);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = parse_tree__error_spec__color_as_subject_1_f_0(Var_22);
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[41])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[43])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[39])), Var_32);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_27);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[37])), Var_20);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_6));
  }
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_uninitialized_state_var\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 0))));
  Var_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 1))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 2))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 4))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 5))));
  Specs0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 6))));
  {
    Specs_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_56, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, Specs_56, 1) = ((MR_Box) (Specs0_55));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 6) = ((MR_Box) (Specs_56));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_non_visible_state_var_5_p_0(
  MR_String DorC_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  MR_String Name_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_24;
  MR_String Var_26;
  MR_Word Specs0_45;
  MR_Word Specs_46;
  MR_Word Var_47;
  MR_Integer Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  Name_11 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, StateVar_8);
  Var_26 = mercury__string__f_43_43_2_f_0(DorC_6, Name_11);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_26);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[35])));
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[33])), Var_20);
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_non_visible_state_var\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 0))));
  Var_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 1))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 4))));
  Specs0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 5))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 6))));
  {
    Specs_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_46, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, Specs_46, 1) = ((MR_Box) (Specs0_45));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_46));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_52));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_illegal_bang_svar_lambda_arg_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word Spec_9;
  MR_Word Specs0_18;
  MR_Word Specs_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  Spec_9 = hlds__make_hlds__unravel_info__report_illegal_bang_svar_lambda_arg_raw_3_f_0(Context_5, VarSet_8, StateVar_6);
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_21 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Specs0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 6))));
  {
    Specs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_19, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, Specs_19, 1) = ((MR_Box) (Specs0_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
  }
}

MR_Word MR_CALL 
hlds__make_hlds__unravel_info__report_illegal_bang_svar_lambda_arg_raw_3_f_0(
  MR_Word Context_5,
  MR_Word VarSet_6,
  MR_Word StateVar_7)
{
  MR_Word Spec_8;
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_22;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_36;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_48;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, StateVar_7);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_9);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_17);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_9);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_33 = parse_tree__error_spec__color_as_correct_1_f_0(Var_34);
  Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_9);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[13])));
  }
  Var_45 = parse_tree__error_spec__color_as_correct_1_f_0(Var_46);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[31])), Var_44);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[29])), Var_32);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[24])), Var_15);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.unravel_info.report_illegal_bang_svar_lambda_arg_raw\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_illegal_func_svar_result_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word Spec_9;
  MR_Word Specs0_18;
  MR_Word Specs_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  Spec_9 = hlds__make_hlds__unravel_info__report_illegal_func_svar_result_raw_3_f_0(Context_5, VarSet_8, StateVar_6);
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_21 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Specs0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 6))));
  {
    Specs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_19, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, Specs_19, 1) = ((MR_Box) (Specs0_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
  }
}

MR_Word MR_CALL 
hlds__make_hlds__unravel_info__report_illegal_func_svar_result_raw_3_f_0(
  MR_Word Context_5,
  MR_Word VarSet_6,
  MR_Word StateVar_7)
{
  MR_Word Spec_8;
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_31;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, StateVar_7);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_9);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_17);
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_9);
  {
    Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_30, 0) = ((MR_Box) (Var_31));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[13])));
  }
  Var_28 = parse_tree__error_spec__color_as_correct_1_f_0(Var_29);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[22])), Var_27);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[20])), Var_15);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.unravel_info.report_illegal_func_svar_result_raw\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

void MR_CALL 
hlds__make_hlds__unravel_info__report_illegal_state_var_update_6_p_0(
  MR_Word Context_7,
  MR_String RO_Construct_8,
  MR_Word RO_Context_9,
  MR_Word StateVar_10,
  MR_Word STATE_VARIABLE_UrInfo_0_19,
  MR_Word * STATE_VARIABLE_UrInfo_20)
{
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 3))));
  MR_String Name_13;
  MR_Word Pieces1_14;
  MR_Word Msg1_15;
  MR_Word Pieces2_16;
  MR_Word Msg2_17;
  MR_Word Spec_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_String Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Specs0_85;
  MR_Word Specs_86;
  MR_Word Var_87;
  MR_Integer Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;

  Name_13 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, StateVar_10);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_13);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_27);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (RO_Construct_8));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[11])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[7])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_13);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[13])));
  }
  Var_46 = parse_tree__error_spec__color_as_correct_1_f_0(Var_47);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[14])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_45);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_32);
  Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[6])), Var_25);
  {
    Msg1_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg1_15, 0) = ((MR_Box) (Context_7));
    MR_hl_field(0, Msg1_15, 1) = ((MR_Box) (Pieces1_14));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Name_13));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__unravel_info_scalar_common_1[18])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[16])));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Pieces2_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces2_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__unravel_info_scalar_common_1[15])));
    MR_hl_field(1, Pieces2_16, 1) = ((MR_Box) (Var_60));
  }
  {
    Msg2_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg2_17, 0) = ((MR_Box) (RO_Context_9));
    MR_hl_field(0, Msg2_17, 1) = ((MR_Box) (Pieces2_16));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Msg2_17));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Msg1_15));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.unravel_info.report_illegal_state_var_update\'/6"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_74));
  }
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 0))));
  Var_88 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 1))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 2))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 3))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 4))));
  Specs0_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 5))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 6))));
  {
    Specs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_86, 0) = ((MR_Box) (Spec_18));
    MR_hl_field(1, Specs_86, 1) = ((MR_Box) (Specs0_85));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_86));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_92));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__unravel_info__is_term_a_bang_state_pair_3_p_0(
  MR_Word ArgTerm_4,
  MR_Word * StateVar_5,
  MR_Word * Context_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgTerm_4)) == (MR_Integer) 0);
  MR_Word Var_8;
  MR_String Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, 1))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_9 = ((MR_String) ((MR_hl_field(0, Var_8, 0))));
      succeeded = (strcmp(Var_9, (MR_String) "!") == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            *StateVar_5 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
            *Context_6 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
            succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__unravel_info__illegal_state_var_func_result_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgTerms_5,
  MR_Word * StateVar_6,
  MR_Word * Context_7)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Integer) 1);
  MR_Word TypeInfo_9_9;
  MR_Word LastArgTerm_8;
  MR_Word Var_11;
  MR_String Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_LastArgTerm_8;

  if (succeeded)
  {
    TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__unravel_info_scalar_common_1[0]);
    succeeded = mercury__list__last_2_p_0(TypeInfo_9_9, ArgTerms_5, &conv0_LastArgTerm_8);
    if (succeeded)
    {
      LastArgTerm_8 = ((MR_Word) (conv0_LastArgTerm_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) LastArgTerm_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, 1))));
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_12 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
          succeeded = (strcmp(Var_12, (MR_String) "!") == 0);
          if (succeeded)
          {
            succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
              succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  *StateVar_6 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
                  *Context_7 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__unravel_info__add_unravel_warns_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 6))));
  MR_Word Specs_7;
  MR_Word Var_16;
  MR_Integer Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), NewSpecs_4, Specs0_6);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  Var_17 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Specs_7));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__add_unravel_warn_3_p_0(
  MR_Word NewSpec_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 6))));
  MR_Word Specs_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));

  {
    Specs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_7, 0) = ((MR_Box) (NewSpec_4));
    MR_hl_field(1, Specs_7, 1) = ((MR_Box) (Specs0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Specs_7));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__add_unravel_oom_errs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UrInfo_0_9,
  MR_Word * STATE_VARIABLE_UrInfo_10)
{
  MR_Word HeadSpec_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TailSpecs_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word Specs0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 5))));
  MR_Word Specs_8;
  MR_Word Var_11;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (HeadSpec_4));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (TailSpecs_5));
  }
  Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_11, Specs0_7);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 0))));
  Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 3))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_9, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_8));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__add_unravel_errs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  if ((NewSpecs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UrInfo_11 = STATE_VARIABLE_UrInfo_0_10;
  else
  {
    MR_Word Specs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
    MR_Word Specs_9;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_24;

    Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NewSpecs_4, Specs0_8);
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
    Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 5) = ((MR_Box) (Specs_9));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
    }
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__add_unravel_err_3_p_0(
  MR_Word NewSpec_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));
  MR_Word Specs_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 6))));

  {
    Specs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_7, 0) = ((MR_Box) (NewSpec_4));
    MR_hl_field(1, Specs_7, 1) = ((MR_Box) (Specs0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_7));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__record_unravel_found_syntax_error_2_p_0(
  MR_Word STATE_VARIABLE_UrInfo_0_6,
  MR_Word * STATE_VARIABLE_UrInfo_7)
{
  MR_Word QualInfo0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 2))));
  MR_Word QualInfo_5;
  MR_Word Var_15;
  MR_Integer Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, QualInfo0_4, &QualInfo_5);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 0))));
  Var_16 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 5))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_5));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__create_new_named_unravel_var_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word VarSet_9;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_5, Var_6, VarSet0_8, &VarSet_9);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
hlds__make_hlds__unravel_info__create_new_unravel_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word VarSet0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  MR_Word VarSet_7;
  MR_Word Var_16;
  MR_Integer Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, VarSet0_6, &VarSet_7);
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  Var_17 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__unravel_info____Unify____unravel_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__unravel_info____Unify____unravel_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__unravel_info____Compare____unravel_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__unravel_info____Compare____unravel_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__unravel_info__init(void)
{
}

void mercury__hlds__make_hlds__unravel_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__unravel_info__hlds__make_hlds__unravel_info__type_ctor_info_unravel_info_0);
}

void mercury__hlds__make_hlds__unravel_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__unravel_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.unravel_info.
