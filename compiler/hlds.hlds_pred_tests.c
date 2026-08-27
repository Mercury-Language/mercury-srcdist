/*
** Automatically generated from `hlds_pred_tests.m'
** by the Mercury compiler,
** version rotd-2026-08-27
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


// :- module hlds.hlds_pred_tests.
// :- implementation.

/*
INIT mercury__hlds__hlds_pred_tests__init
ENDINIT
*/

#include "hlds.hlds_pred_tests.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_bool MR_CALL 
hlds__hlds_pred_tests__is_inline_builtin_3_p_0(
  MR_Word ModuleName_4,
  MR_String PredName_5,
  MR_Word PredFormArity_6);


static /* final */ const MR_Box hlds__hlds_pred_tests_scalar_common_1[1][2];




static /* final */ const MR_Box hlds__hlds_pred_tests_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


MR_bool MR_CALL 
hlds__hlds_pred_tests__pred_info_is_promise_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * PromiseType_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_3, &Var_5);
  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
  if (succeeded)
    *PromiseType_4 = ((MR_Unsigned) ((MR_hl_field(1, Var_5, 0))) & (MR_Integer) 3);
  return succeeded;
}

MR_Word MR_CALL 
hlds__hlds_pred_tests__builtin_state_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word CallerPredId_7,
  MR_Word PredId_8,
  MR_Integer _ProcId_9)
{
  MR_Word BuiltinState_10;

  BuiltinState_10 = hlds__hlds_pred_tests__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_116_105_110_95_115_116_97_116_101_95_95_91_52_93_95_48_4_f_0(ModuleInfo_6, CallerPredId_7, PredId_8);
  return BuiltinState_10;
}

MR_Word MR_CALL 
hlds__hlds_pred_tests__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_117_105_108_116_105_110_95_115_116_97_116_101_95_95_91_52_93_95_48_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word CallerPredId_7,
  MR_Word PredId_8)
{
  MR_bool succeeded;
  MR_Word BuiltinState_10;
  MR_Word PredInfo_11;
  MR_Word ModuleName_12;
  MR_String PredName_13;
  MR_Word PredFormArity_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_11);
  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
  PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
  PredFormArity_14 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_11);
  succeeded = hlds__hlds_pred_tests__is_inline_builtin_3_p_0(ModuleName_12, PredName_13, PredFormArity_14);
  if (succeeded)
  {
    {
      MR_Word Globals_15;
      MR_Word OptTuple_16;
      MR_Word Var_17;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_15);
      libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_16);
      Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_16, 0))) >> 31)) & (MR_Integer) 1);
      succeeded = (Var_17 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_16, 0))) >> 29)) & (MR_Integer) 1);

          succeeded = (Var_18 == (MR_Integer) 0);
        }
        if (!(succeeded))
        {
          MR_Word Var_267;

          succeeded = (strcmp(PredName_13, (MR_String) "store_at_ref_impure") == 0);
          if (succeeded)
          {
            Var_267 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_267);
          }
        }
      }
    }
    if (!(succeeded))
      succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(CallerPredId_7, PredId_8);
  }
  if (succeeded)
    BuiltinState_10 = (MR_Integer) 0;
  else
    BuiltinState_10 = (MR_Integer) 1;
  return BuiltinState_10;
}

static MR_bool MR_CALL 
hlds__hlds_pred_tests__is_inline_builtin_3_p_0(
  MR_Word ModuleName_4,
  MR_String PredName_5,
  MR_Word PredFormArity_6)
{
  MR_bool succeeded;
  MR_Integer Arity_7 = (MR_Integer) (PredFormArity_6);

  succeeded = (Arity_7 <= (MR_Integer) 3);
  if (succeeded)
    succeeded = backend_libs__builtin_ops__test_if_builtin_3_p_0(ModuleName_4, PredName_5, Arity_7);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred_tests__pred_info_is_builtin_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word ModuleName_3;
  MR_String PredName_4;
  MR_Word PredFormArity_5;
  MR_Integer Arity_6;

  ModuleName_3 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_2);
  PredName_4 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_2);
  PredFormArity_5 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_2);
  Arity_6 = (MR_Integer) (PredFormArity_5);
  succeeded = (Arity_6 <= (MR_Integer) 3);
  if (succeeded)
    succeeded = backend_libs__builtin_ops__test_if_builtin_3_p_0(ModuleName_3, PredName_4, Arity_6);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred_tests__is_unify_index_or_compare_pred_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word Origin_3;
  MR_Word Var_6;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_2, &Origin_3);
  succeeded = ((MR_tag((MR_Word) Origin_3)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(1, Origin_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred_tests__is_unify_pred_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word Origin_3;
  MR_Word Var_5;
  MR_Word Var_6;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_2, &Origin_3);
  succeeded = ((MR_tag((MR_Word) Origin_3)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(1, Origin_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, 0))) & (MR_Integer) 3);
      succeeded = (Var_6 == (MR_Integer) 0);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred_tests__pred_info_is_field_access_function_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word * Accesstype_8,
  MR_Word * FieldName_9,
  MR_Word * OoMFieldDefns_10)
{
  MR_bool succeeded;
  MR_Word Module_11;
  MR_String Name_12;
  MR_Word PredFormArity_13;
  MR_Integer FuncArityInt_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Integer Var_19;

  Var_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  succeeded = (Var_15 == (MR_Integer) 1);
  if (succeeded)
  {
    Module_11 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    Name_12 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_7, &PredFormArity_13);
    Var_16 = (MR_Integer) 1;
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(Var_16, &Var_17, PredFormArity_13);
    FuncArityInt_14 = (MR_Integer) (Var_17);
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Module_11));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Name_12));
    }
    succeeded = hlds__hlds_pred_tests__is_field_access_function_name_6_p_0(ModuleInfo_6, Var_18, &Var_19, Accesstype_8, FieldName_9, OoMFieldDefns_10);
    if (succeeded)
      succeeded = (FuncArityInt_14 == Var_19);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred_tests__is_field_access_function_name_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word FuncName_8,
  MR_Integer * Arity_9,
  MR_Word * AccessType_10,
  MR_Word * FieldName_11,
  MR_Word * OoMFieldDefns_12)
{
  MR_bool succeeded;
  MR_Word CtorFieldTable_14;
  MR_Word FieldName0_13;
  MR_Box conv0_OoMFieldDefns_12;

  succeeded = mdbcomp__sym_name__remove_sym_name_suffix_3_p_0(FuncName_8, (MR_String) " :=", &FieldName0_13);
  if (succeeded)
  {
    *Arity_9 = (MR_Integer) 2;
    *AccessType_10 = (MR_Integer) 1;
    *FieldName_11 = FieldName0_13;
  }
  else
  {
    *Arity_9 = (MR_Integer) 1;
    *AccessType_10 = (MR_Integer) 0;
    *FieldName_11 = FuncName_8;
  }
  hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_7, &CtorFieldTable_14);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_pred_tests_scalar_common_1[0]), CtorFieldTable_14, ((MR_Box) (*FieldName_11)), &conv0_OoMFieldDefns_12);
  if (succeeded)
  {
    *OoMFieldDefns_12 = ((MR_Word) (conv0_OoMFieldDefns_12));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred_tests__construct_field_access_function_name_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FieldName_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = FieldName_2;
      break;
    case (MR_Integer) 1:
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(FieldName_2, (MR_String) " :=", HeadVar__3_3);
      break;
  }
}

void mercury__hlds__hlds_pred_tests__init(void)
{
}

void mercury__hlds__hlds_pred_tests__init_type_tables(void)
{
}

void mercury__hlds__hlds_pred_tests__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_pred_tests__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_pred_tests.
