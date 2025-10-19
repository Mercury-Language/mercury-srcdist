/*
** Automatically generated from `check_for_missing_type_defns.m'
** by the Mercury compiler,
** version rotd-2025-10-19
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


// :- module check_hlds.check_for_missing_type_defns.
// :- implementation.

/*
INIT mercury__check_hlds__check_for_missing_type_defns__init
ENDINIT
*/

#include "check_hlds.check_for_missing_type_defns.mih"


#include "analysis.mih"
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
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_2[1][7];

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_for_missing_type_defns_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "abstract declaration for type"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has no corresponding definition."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_for_missing_type_defns_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__check_for_missing_type_defns_scalar_common_2[0])),
    ((MR_Box) (check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word TypeStatus_8;
  MR_Word TypeBody_9;
  MR_Word Var_20;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_6, &TypeStatus_8);
  Var_20 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
  succeeded = (Var_20 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_9);
    succeeded = ((((MR_tag((MR_Word) TypeBody_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_9, 0)))) == (MR_Integer) 1)));
  }
  if (succeeded)
  {
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, 0))));
    MR_Word BuiltinTypeCtors_13;
    MR_Word ModuleName_14;
    MR_Word Var_22;
    MR_Word Var_49;
    MR_String Var_21;
    MR_Word TypeCtorInfo_47_47;

    BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(SymName_11, &ModuleName_14);
    if (succeeded)
    {
      succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_14);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ModuleName_14)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_String) ((MR_hl_field(0, ModuleName_14, 0))));
          succeeded = (strcmp(Var_21, (MR_String) "type_desc") == 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_47_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_47_47, ((MR_Box) (TypeCtor_5)), BuiltinTypeCtors_13);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_22 = (MR_Integer) 0;
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_6, &Var_49);
            succeeded = (Var_22 == Var_49);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeContext_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_36;

      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_6, &TypeContext_15);
      {
        Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(3, Var_33, 1) = ((MR_Box) (TypeCtor_5));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_for_missing_type_defns_scalar_common_1[3])));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
      }
      Var_28 = parse_tree__error_spec__color_as_subject_1_f_0(Var_29);
      Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_for_missing_type_defns_scalar_common_1[5])));
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &check_hlds__check_for_missing_type_defns_scalar_common_1[6])));
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_35);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_for_missing_type_defns_scalar_common_1[2])), Var_27);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_for_missing_type_defns.check_for_missing_type_defns_in_type\'/4"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (TypeContext_15));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
      }
    }
    else
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
}

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_19;

  check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Specs_4)
{
  MR_Word TypeTable_5;
  MR_Box conv1_Specs_4;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_5);
  hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&check_hlds__check_for_missing_type_defns_scalar_common_1[0]), (MR_Word) (&check_hlds__check_for_missing_type_defns_scalar_common_3[0]), TypeTable_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_4);
  *Specs_4 = ((MR_Word) (conv1_Specs_4));
}

void mercury__check_hlds__check_for_missing_type_defns__init(void)
{
}

void mercury__check_hlds__check_for_missing_type_defns__init_type_tables(void)
{
}

void mercury__check_hlds__check_for_missing_type_defns__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_for_missing_type_defns__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.check_for_missing_type_defns.
