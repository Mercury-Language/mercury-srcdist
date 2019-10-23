/*
** Automatically generated from `check_for_missing_type_defns.m'
** by the Mercury compiler,
** version rotd-2019-10-23
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_2[1][7];

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no corresponding definition."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_for_missing_type_defns_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_for_missing_type_defns_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: abstract declaration for type"))
  },
};

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_for_missing_type_defns_scalar_common_3[1][3] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_for_missing_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word TypeStatus_8;
    MR_Word TypeBody_9;
    MR_Word Var_21;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_6, &TypeStatus_8);
    Var_21 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
    succeeded = (Var_21 == (MR_Integer) 1);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_9);
      succeeded = ((((MR_tag((MR_Word) TypeBody_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
      MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
      MR_Word BuiltinTypeCtors_13;
      MR_Word ModuleName_14;
      MR_Word Var_23;
      MR_Word Var_44;
      MR_String Var_22;
      MR_Word TypeCtorInfo_43_43;

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
            Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_14, (MR_Integer) 0))));
            succeeded = (strcmp(Var_22, (MR_String) "type_desc") == 0);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_43_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
            succeeded = mercury__list__member_2_p_0(TypeCtorInfo_43_43, ((MR_Box) (TypeCtor_5)), BuiltinTypeCtors_13);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_23 = (MR_Integer) 0;
              hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_6, &Var_44);
              succeeded = (Var_23 == Var_44);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeContext_15;
        MR_Word Pieces_16;
        MR_Word Msg_17;
        MR_Word Spec_18;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_40;

        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_6, &TypeContext_15);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Arity_12));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_for_missing_type_defns_scalar_common_1[3])));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_for_missing_type_defns_scalar_common_1[4])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Pieces_16));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_17, 0) = ((MR_Box) (TypeContext_15));
          MR_hl_field(MR_mktag(1), Msg_17, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Msg_17));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_40));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
        }
      }
      else
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    }
    else
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
}

static void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_20;

    check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_in_type_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_20);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
  }
}

void MR_CALL 
check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Specs_4)
{
  {
    MR_Word TypeTable_5;
    MR_Box conv1_Specs_4;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_5);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&check_hlds__check_for_missing_type_defns_scalar_common_1[0]), (MR_Word) (&check_hlds__check_for_missing_type_defns_scalar_common_3[0]), TypeTable_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_4);
    *Specs_4 = ((MR_Word) (conv1_Specs_4));
  }
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
