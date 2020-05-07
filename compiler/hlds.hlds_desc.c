/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2020-05-06
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


// :- module hlds.hlds_desc.
// :- implementation.

/*
INIT mercury__hlds__hlds_desc__init
ENDINIT
*/

#include "hlds.hlds_desc.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_4[2][3];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[1][1];




static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_4[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  {
    MR_String HeadVar__3_3;
    MR_String Var_7;

    Var_7 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, (MR_Integer) 1, Var_5);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_7);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_from_id_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  {
    MR_String ProcDesc_6;
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 0))));
    MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_5, (MR_Integer) 1))));
    MR_Word PredInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_7, &PredInfo_9);
    ProcDesc_6 = hlds__hlds_desc__describe_proc_2_f_0(PredInfo_9, ProcId_8);
    return ProcDesc_6;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5)
{
  {
    MR_bool succeeded;
    MR_String ProcDesc_6;
    MR_Word PredOrFunc_7;
    MR_Word ModuleName_8;
    MR_String PredName_9;
    MR_Integer Arity0_10;
    MR_Integer Arity_11;
    MR_Word Origin_12;
    MR_String FullPredName_15;
    MR_String Var_27;
    MR_String Var_30;
    MR_Integer Var_37;
    MR_String Var_41;
    MR_String Var_49;
    MR_String Var_50;
    MR_String Var_57;
    MR_String Var_59;
    MR_String Var_60;
    MR_String Var_62;
    MR_String Var_63;
    MR_String Var_65;
    MR_Word SpecialId_13;
    MR_Word TypeCtor_14;

    PredOrFunc_7 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_4);
    ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_4);
    PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
    Arity0_10 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_4);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_7, &Arity_11, Arity0_10);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_4, &Origin_12);
    succeeded = ((MR_tag((MR_Word) Origin_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialId_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_12, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_12, (MR_Integer) 1))));
      {
        MR_String Var_19;
        MR_String Var_22;
        MR_String Var_40;
        MR_Word TypeCtorSymName_68;
        MR_Integer TypeCtorArity_69;
        MR_String Var_73;
        MR_String Var_77;
        MR_String Var_85;

        Var_19 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(SpecialId_13);
        TypeCtorSymName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
        TypeCtorArity_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 1))));
        Var_73 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_68);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_5[0]), TypeCtorArity_69, &Var_77);
        Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_77);
        Var_22 = mercury__string__f_43_43_2_f_0(Var_73, Var_85);
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_22);
        FullPredName_15 = mercury__string__f_43_43_2_f_0(Var_19, Var_40);
      }
    }
    else
      FullPredName_15 = PredName_9;
    Var_27 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_7);
    Var_30 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
    Var_37 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_5);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_5[0]), Var_37, &Var_41);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_41);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_5[0]), Arity_11, &Var_50);
    Var_57 = mercury__string__f_43_43_2_f_0(Var_50, Var_49);
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_57);
    Var_60 = mercury__string__f_43_43_2_f_0(FullPredName_15, Var_59);
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_60);
    Var_63 = mercury__string__f_43_43_2_f_0(Var_30, Var_62);
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_63);
    ProcDesc_6 = mercury__string__f_43_43_2_f_0(Var_27, Var_65);
    return ProcDesc_6;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word Goal_7)
{
  {
    MR_String FullDesc_8;
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
    MR_String Desc_23;
    MR_Word Context_94;
    MR_Integer Line_95;
    MR_String Var_144;
    MR_String Var_146;

    switch (MR_tag((MR_Word) GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Desc_23 = (MR_String) "negation";
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_9, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_14, (MR_Integer) 0))));
                MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_14, (MR_Integer) 1))));
                MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_14, (MR_Integer) 2))));
                MR_String Var_138;
                MR_String Var_139;
                MR_String Var_141;
                MR_String Var_142;
                MR_String Var_143;

                Var_138 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, Var_16);
                Var_142 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_17);
                Var_143 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_18);
                Var_141 = mercury__string__f_43_43_2_f_0(Var_142, Var_143);
                Var_139 = mercury__string__f_43_43_2_f_0((MR_String) " <= ", Var_141);
                Desc_23 = mercury__string__f_43_43_2_f_0(Var_138, Var_139);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_132;
                MR_String Var_133;
                MR_String Var_135;
                MR_String Var_136;
                MR_String Var_137;
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_14, (MR_Integer) 0))));
                MR_Word ConsId_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_14, (MR_Integer) 1))));
                MR_Word Args_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_14, (MR_Integer) 2))));

                Var_132 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, Var_147);
                Var_136 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_148);
                Var_137 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_149);
                Var_135 = mercury__string__f_43_43_2_f_0(Var_136, Var_137);
                Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " => ", Var_135);
                Desc_23 = mercury__string__f_43_43_2_f_0(Var_132, Var_133);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_14, (MR_Integer) 0))));
                MR_Word FromVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_14, (MR_Integer) 1))));
                MR_String Var_128;
                MR_String Var_129;
                MR_String Var_131;

                Var_128 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, ToVar_27);
                Var_131 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, FromVar_28);
                Var_129 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_131);
                Desc_23 = mercury__string__f_43_43_2_f_0(Var_128, Var_129);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word VarA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 1))));
                    MR_Word VarB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 2))));
                    MR_String Var_124;
                    MR_String Var_125;
                    MR_String Var_127;

                    Var_124 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, VarA_29);
                    Var_127 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, VarB_30);
                    Var_125 = mercury__string__f_43_43_2_f_0((MR_String) " == ", Var_127);
                    Desc_23 = mercury__string__f_43_43_2_f_0(Var_124, Var_125);
                  }
                  break;
                case (MR_Integer) 1:
                  Desc_23 = (MR_String) "complicated unify";
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SymName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 5))));
          MR_String Var_122;
          MR_String Var_123;
          MR_Word Args_150 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 2))));

          Var_122 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_38);
          Var_123 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_150);
          Desc_23 = mercury__string__f_43_43_2_f_0(Var_122, Var_123);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GCall_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word Args_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) GCall_39)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_120;
                    MR_String Var_121;
                    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GCall_39, (MR_Integer) 0))));

                    Var_120 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, Var_151);
                    Var_121 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_155);
                    Desc_23 = mercury__string__f_43_43_2_f_0(Var_120, Var_121);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Method_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCall_39, (MR_Integer) 3))));
                    MR_String Var_112;
                    MR_String Var_113;
                    MR_String Var_115;
                    MR_String Var_116;
                    MR_String Var_117;
                    MR_String Var_119;
                    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCall_39, (MR_Integer) 0))));

                    Var_112 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(Method_48);
                    Var_116 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, Var_152);
                    Var_119 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_155);
                    Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "]", Var_119);
                    Var_115 = mercury__string__f_43_43_2_f_0(Var_116, Var_117);
                    Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_115);
                    Desc_23 = mercury__string__f_43_43_2_f_0(Var_112, Var_113);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String Event_49 = ((MR_String) ((MR_hl_field(MR_mktag(2), GCall_39, (MR_Integer) 0))));
                    MR_String Var_110;
                    MR_String Var_111;

                    Var_111 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_155);
                    Var_110 = mercury__string__f_43_43_2_f_0(Event_49, Var_111);
                    Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "event ", Var_110);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String Var_108;

                    Var_108 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Args_155);
                    Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", Var_108);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word ExtraArgs_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 5))));
              MR_Word PredInfo_57;
              MR_String Name_58;
              MR_String Var_99;
              MR_String Var_100;
              MR_String Var_101;
              MR_Word Var_102;
              MR_String Var_104;
              MR_Word Var_105;
              MR_Word Args_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));

              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_52, &PredInfo_57);
              Name_58 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_57);
              Var_102 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_4[0]), Args_156);
              Var_101 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Var_102);
              Var_105 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_4[1]), ExtraArgs_54);
              Var_104 = hlds__hlds_desc__describe_args_2_f_0(VarSet_6, Var_105);
              Var_100 = mercury__string__f_43_43_2_f_0(Var_101, Var_104);
              Var_99 = mercury__string__f_43_43_2_f_0(Name_58, Var_100);
              Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_99);
            }
            break;
          case (MR_Integer) 2:
            Desc_23 = (MR_String) "conj";
            break;
          case (MR_Integer) 3:
            Desc_23 = (MR_String) "disj";
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_97;
              MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

              Var_97 = hlds__hlds_desc__describe_var_2_f_0(VarSet_6, Var_157);
              Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "switch on ", Var_97);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Reason_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Desc_23 = (MR_String) "scope exist quant";
                  break;
                case (MR_Integer) 1:
                  Desc_23 = (MR_String) "disable warnings";
                  break;
                case (MR_Integer) 2:
                  Desc_23 = (MR_String) "scope promise solutions";
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_65, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Desc_23 = (MR_String) "scope promise purity";
                      break;
                    case (MR_Integer) 1:
                      Desc_23 = (MR_String) "scope require detism";
                      break;
                    case (MR_Integer) 2:
                      Desc_23 = (MR_String) "scope require complete switch";
                      break;
                    case (MR_Integer) 3:
                      Desc_23 = (MR_String) "scope require switch arm detism";
                      break;
                    case (MR_Integer) 4:
                      Desc_23 = (MR_String) "scope commit";
                      break;
                    case (MR_Integer) 5:
                      Desc_23 = (MR_String) "scope barrier";
                      break;
                    case (MR_Integer) 6:
                      Desc_23 = (MR_String) "scope from_ground_term";
                      break;
                    case (MR_Integer) 7:
                      Desc_23 = (MR_String) "scope trace goal";
                      break;
                    case (MR_Integer) 8:
                      Desc_23 = (MR_String) "scope loop control goal";
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            Desc_23 = (MR_String) "if_then_else";
            break;
          case (MR_Integer) 7:
            Desc_23 = (MR_String) "shorthand";
            break;
        }
        break;
    }
    Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
    Line_95 = mercury__term__context_line_1_f_0(Context_94);
    Var_146 = mercury__string__int_to_string_1_f_0(Line_95);
    Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "\100", Var_146);
    FullDesc_8 = mercury__string__f_43_43_2_f_0(Desc_23, Var_144);
    return FullDesc_8;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_var_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, (MR_Integer) 1, Var_5);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__hlds_desc__describe_comma_var_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_args_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word HeadVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_12;
      MR_Word Var_13;
      MR_Word Var_14;

      Var_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, (MR_Integer) 1, HeadVar_6);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__hlds_desc__describe_args_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (VarSet_1));
      }
      Var_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, TailVars_7);
      Var_12 = mercury__string__append_list_1_f_0(Var_13);
      Var_11 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ")");
      Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_9);
    }
    return HeadVar__3_3;
  }
}

void mercury__hlds__hlds_desc__init(void)
{
}

void mercury__hlds__hlds_desc__init_type_tables(void)
{
}

void mercury__hlds__hlds_desc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_desc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_desc.
