/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module hlds.hlds_desc. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_desc__init
ENDINIT
*/

#include "hlds.hlds_desc.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
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
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
  MR_Word hlds__hlds_desc__VarSet_4,
  MR_Word hlds__hlds_desc__Var_5);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[2][3];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_4[1][6];




static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
  MR_Word hlds__hlds_desc__VarSet_4,
  MR_Word hlds__hlds_desc__Var_5)
{
  {
    MR_bool hlds__hlds_desc__succeeded;
    MR_String hlds__hlds_desc__HeadVar__3_3;
    MR_String hlds__hlds_desc__V_7_7;

    {
      hlds__hlds_desc__V_7_7 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_4, (MR_Integer) 1, hlds__hlds_desc__Var_5);
    }
    {
      hlds__hlds_desc__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_desc__V_7_7);
    }
    return hlds__hlds_desc__HeadVar__3_3;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_var_2_f_0(
  MR_Word hlds__hlds_desc__VarSet_4,
  MR_Word hlds__hlds_desc__Var_5)
{
  {
    MR_bool hlds__hlds_desc__succeeded;
    MR_String hlds__hlds_desc__HeadVar__3_3;

    {
      hlds__hlds_desc__HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_4, (MR_Integer) 1, hlds__hlds_desc__Var_5);
    }
    return hlds__hlds_desc__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_desc__wrapper_arg_2;
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
    MR_String hlds__hlds_desc__conv0_HeadVar__3_3;

    {
      hlds__hlds_desc__conv0_HeadVar__3_3 = hlds__hlds_desc__describe_comma_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv0_HeadVar__3_3));
    return hlds__hlds_desc__wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_args_2_f_0(
  MR_Word hlds__hlds_desc__VarSet_1,
  MR_Word hlds__hlds_desc__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_desc__succeeded;
    MR_String hlds__hlds_desc__HeadVar__3_3;

    if ((hlds__hlds_desc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_desc__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word hlds__hlds_desc__HeadVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_desc__TailVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__HeadVar__2_2, (MR_Integer) 1)));
        MR_String hlds__hlds_desc__V_9_9;
        MR_String hlds__hlds_desc__V_10_10;
        MR_String hlds__hlds_desc__V_11_11;
        MR_String hlds__hlds_desc__V_12_12;
        MR_Word hlds__hlds_desc__V_13_13;
        MR_Word hlds__hlds_desc__V_14_14;

        {
          hlds__hlds_desc__V_10_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_1, (MR_Integer) 1, hlds__hlds_desc__HeadVar_6);
        }
        {
          hlds__hlds_desc__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 1) = ((MR_Box) (hlds__hlds_desc__describe_args_2_f_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 3) = ((MR_Box) (hlds__hlds_desc__VarSet_1));
        }
        {
          hlds__hlds_desc__V_13_13 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_desc_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_desc__V_14_14, hlds__hlds_desc__TailVars_7);
        }
        {
          hlds__hlds_desc__V_12_12 = mercury__string__append_list_1_f_0(hlds__hlds_desc__V_13_13);
        }
        {
          hlds__hlds_desc__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_12_12, (MR_String) ")");
        }
        {
          hlds__hlds_desc__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_10_10, hlds__hlds_desc__V_11_11);
        }
        {
          hlds__hlds_desc__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_desc__V_9_9);
        }
      }
    return hlds__hlds_desc__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_desc__wrapper_arg_2;
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
    MR_Word hlds__hlds_desc__conv1_HeadVar__2_2;

    {
      hlds__hlds_desc__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv1_HeadVar__2_2));
    return hlds__hlds_desc__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box hlds__hlds_desc__closure_arg,
  MR_Box hlds__hlds_desc__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_desc__wrapper_arg_2;
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
    MR_Word hlds__hlds_desc__conv0_HeadVar__2_2;

    {
      hlds__hlds_desc__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv0_HeadVar__2_2));
    return hlds__hlds_desc__wrapper_arg_2;
  }
}

MR_String MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0(
  MR_Word hlds__hlds_desc__ModuleInfo_5,
  MR_Word hlds__hlds_desc__VarSet_6,
  MR_Word hlds__hlds_desc__Goal_7)
{
  {
    MR_bool hlds__hlds_desc__succeeded;
    MR_String hlds__hlds_desc__FullDesc_8;
    MR_Word hlds__hlds_desc__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Goal_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_desc__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Goal_7, (MR_Integer) 1)));
    MR_String hlds__hlds_desc__Desc_23;
    MR_Word hlds__hlds_desc__Context_92;
    MR_Integer hlds__hlds_desc__Line_93;
    MR_String hlds__hlds_desc__V_142_142;
    MR_String hlds__hlds_desc__V_144_144;

    switch (MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_desc__Desc_23 = (MR_String) "negation";
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_desc__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
          MR_Word hlds__hlds_desc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_desc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
          MR_Word hlds__hlds_desc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
          MR_Word hlds__hlds_desc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) hlds__hlds_desc__Unification_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__hlds_desc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
                MR_Word hlds__hlds_desc__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
                MR_Word hlds__hlds_desc__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
                MR_String hlds__hlds_desc__V_136_136;
                MR_String hlds__hlds_desc__V_137_137;
                MR_String hlds__hlds_desc__V_139_139;
                MR_String hlds__hlds_desc__V_140_140;
                MR_String hlds__hlds_desc__V_141_141;
                MR_Word hlds__hlds_desc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 3)));
                MR_Word hlds__hlds_desc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 4)));
                MR_Word hlds__hlds_desc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 5)));
                MR_Word hlds__hlds_desc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 6)));

                {
                  hlds__hlds_desc__V_136_136 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_16);
                }
                {
                  hlds__hlds_desc__V_140_140 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_desc__ConsId_17);
                }
                {
                  hlds__hlds_desc__V_141_141 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_18);
                }
                {
                  hlds__hlds_desc__V_139_139 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_140_140, hlds__hlds_desc__V_141_141);
                }
                {
                  hlds__hlds_desc__V_137_137 = mercury__string__f_43_43_2_f_0((MR_String) " <= ", hlds__hlds_desc__V_139_139);
                }
                {
                  hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_136_136, hlds__hlds_desc__V_137_137);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String hlds__hlds_desc__V_130_130;
                MR_String hlds__hlds_desc__V_131_131;
                MR_String hlds__hlds_desc__V_133_133;
                MR_String hlds__hlds_desc__V_134_134;
                MR_String hlds__hlds_desc__V_135_135;
                MR_Word hlds__hlds_desc__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
                MR_Word hlds__hlds_desc__ConsId_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
                MR_Word hlds__hlds_desc__Args_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
                MR_Word hlds__hlds_desc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 3)));
                MR_Word hlds__hlds_desc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 4)));
                MR_Word hlds__hlds_desc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 5)));

                {
                  hlds__hlds_desc__V_130_130 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_145);
                }
                {
                  hlds__hlds_desc__V_134_134 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_desc__ConsId_146);
                }
                {
                  hlds__hlds_desc__V_135_135 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_147);
                }
                {
                  hlds__hlds_desc__V_133_133 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_134_134, hlds__hlds_desc__V_135_135);
                }
                {
                  hlds__hlds_desc__V_131_131 = mercury__string__f_43_43_2_f_0((MR_String) " => ", hlds__hlds_desc__V_133_133);
                }
                {
                  hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_130_130, hlds__hlds_desc__V_131_131);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__hlds_desc__ToVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
                MR_Word hlds__hlds_desc__FromVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
                MR_String hlds__hlds_desc__V_126_126;
                MR_String hlds__hlds_desc__V_127_127;
                MR_String hlds__hlds_desc__V_129_129;

                {
                  hlds__hlds_desc__V_126_126 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__ToVar_27);
                }
                {
                  hlds__hlds_desc__V_129_129 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__FromVar_28);
                }
                {
                  hlds__hlds_desc__V_127_127 = mercury__string__f_43_43_2_f_0((MR_String) " := ", hlds__hlds_desc__V_129_129);
                }
                {
                  hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_126_126, hlds__hlds_desc__V_127_127);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__hlds_desc__VarA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
                    MR_Word hlds__hlds_desc__VarB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
                    MR_String hlds__hlds_desc__V_122_122;
                    MR_String hlds__hlds_desc__V_123_123;
                    MR_String hlds__hlds_desc__V_125_125;

                    {
                      hlds__hlds_desc__V_122_122 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__VarA_29);
                    }
                    {
                      hlds__hlds_desc__V_125_125 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__VarB_30);
                    }
                    {
                      hlds__hlds_desc__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) " == ", hlds__hlds_desc__V_125_125);
                    }
                    {
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_122_122, hlds__hlds_desc__V_123_123);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__hlds_desc__Desc_23 = (MR_String) "complicated unify";
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_desc__SymName_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));
          MR_String hlds__hlds_desc__V_120_120;
          MR_String hlds__hlds_desc__V_121_121;
          MR_Word hlds__hlds_desc__Args_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
          MR_Word hlds__hlds_desc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)));
          MR_Integer hlds__hlds_desc__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
          MR_Word hlds__hlds_desc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
          MR_Word hlds__hlds_desc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));

          {
            hlds__hlds_desc__V_120_120 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_desc__SymName_38);
          }
          {
            hlds__hlds_desc__V_121_121 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_148);
          }
          {
            hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_120_120, hlds__hlds_desc__V_121_121);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_desc__GCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_desc__Args_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_desc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
              MR_Word hlds__hlds_desc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));
              MR_Word hlds__hlds_desc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) hlds__hlds_desc__GCall_39)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String hlds__hlds_desc__V_118_118;
                    MR_String hlds__hlds_desc__V_119_119;
                    MR_Word hlds__hlds_desc__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
                    MR_Word hlds__hlds_desc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 1)));
                    MR_Word hlds__hlds_desc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 2)));
                    MR_Integer hlds__hlds_desc__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 3)));

                    {
                      hlds__hlds_desc__V_118_118 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_149);
                    }
                    {
                      hlds__hlds_desc__V_119_119 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_153);
                    }
                    {
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_118_118, hlds__hlds_desc__V_119_119);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_desc__Method_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 3)));
                    MR_String hlds__hlds_desc__V_110_110;
                    MR_String hlds__hlds_desc__V_111_111;
                    MR_String hlds__hlds_desc__V_113_113;
                    MR_String hlds__hlds_desc__V_114_114;
                    MR_String hlds__hlds_desc__V_115_115;
                    MR_String hlds__hlds_desc__V_117_117;
                    MR_Word hlds__hlds_desc__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
                    MR_Integer hlds__hlds_desc__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 1)));
                    MR_Word hlds__hlds_desc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 2)));

                    {
                      hlds__hlds_desc__V_110_110 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_desc__Method_48);
                    }
                    {
                      hlds__hlds_desc__V_114_114 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_150);
                    }
                    {
                      hlds__hlds_desc__V_117_117 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_153);
                    }
                    {
                      hlds__hlds_desc__V_115_115 = mercury__string__f_43_43_2_f_0((MR_String) "]", hlds__hlds_desc__V_117_117);
                    }
                    {
                      hlds__hlds_desc__V_113_113 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_114_114, hlds__hlds_desc__V_115_115);
                    }
                    {
                      hlds__hlds_desc__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "[", hlds__hlds_desc__V_113_113);
                    }
                    {
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_110_110, hlds__hlds_desc__V_111_111);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String hlds__hlds_desc__Event_49 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
                    MR_String hlds__hlds_desc__V_108_108;
                    MR_String hlds__hlds_desc__V_109_109;

                    {
                      hlds__hlds_desc__V_109_109 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_153);
                    }
                    {
                      hlds__hlds_desc__V_108_108 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Event_49, hlds__hlds_desc__V_109_109);
                    }
                    {
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_desc__V_108_108);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String hlds__hlds_desc__V_106_106;

                    {
                      hlds__hlds_desc__V_106_106 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_153);
                    }
                    {
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", hlds__hlds_desc__V_106_106);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_desc__TypeCtorInfo_156_156;
              MR_Word hlds__hlds_desc__TypeInfo_157_157;
              MR_Word hlds__hlds_desc__PredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_desc__ExtraArgs_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));
              MR_Word hlds__hlds_desc__PredInfo_57;
              MR_String hlds__hlds_desc__Name_58;
              MR_String hlds__hlds_desc__V_97_97;
              MR_String hlds__hlds_desc__V_98_98;
              MR_String hlds__hlds_desc__V_99_99;
              MR_Word hlds__hlds_desc__V_100_100;
              MR_String hlds__hlds_desc__V_102_102;
              MR_Word hlds__hlds_desc__V_103_103;
              MR_Word hlds__hlds_desc__Args_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));
              MR_Word hlds__hlds_desc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
              MR_Integer hlds__hlds_desc__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
              MR_Word hlds__hlds_desc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 6)));
              MR_Word hlds__hlds_desc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 7)));

              {
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_desc__ModuleInfo_5, hlds__hlds_desc__PredId_52, &hlds__hlds_desc__PredInfo_57);
              }
              {
                hlds__hlds_desc__Name_58 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_desc__PredInfo_57);
              }
              hlds__hlds_desc__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
              hlds__hlds_desc__TypeInfo_157_157 = (MR_Word) &hlds__hlds_desc_scalar_common_1[0];
              {
                hlds__hlds_desc__V_100_100 = mercury__list__map_2_f_0(hlds__hlds_desc__TypeCtorInfo_156_156, hlds__hlds_desc__TypeInfo_157_157, (MR_Word) &hlds__hlds_desc_scalar_common_3[0], hlds__hlds_desc__Args_154);
              }
              {
                hlds__hlds_desc__V_99_99 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__V_100_100);
              }
              {
                hlds__hlds_desc__V_103_103 = mercury__list__map_2_f_0(hlds__hlds_desc__TypeCtorInfo_156_156, hlds__hlds_desc__TypeInfo_157_157, (MR_Word) &hlds__hlds_desc_scalar_common_3[1], hlds__hlds_desc__ExtraArgs_54);
              }
              {
                hlds__hlds_desc__V_102_102 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__V_103_103);
              }
              {
                hlds__hlds_desc__V_98_98 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_99_99, hlds__hlds_desc__V_102_102);
              }
              {
                hlds__hlds_desc__V_97_97 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Name_58, hlds__hlds_desc__V_98_98);
              }
              {
                hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", hlds__hlds_desc__V_97_97);
              }
            }
            break;
          case (MR_Integer) 2:
            hlds__hlds_desc__Desc_23 = (MR_String) "conj";
            break;
          case (MR_Integer) 3:
            hlds__hlds_desc__Desc_23 = (MR_String) "disj";
            break;
          case (MR_Integer) 4:
            {
              MR_String hlds__hlds_desc__V_95_95;
              MR_Word hlds__hlds_desc__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_desc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_desc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));

              {
                hlds__hlds_desc__V_95_95 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_155);
              }
              {
                hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "switch on ", hlds__hlds_desc__V_95_95);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hlds_desc__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_desc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  hlds__hlds_desc__Desc_23 = (MR_String) "scope exist quant";
                  break;
                case (MR_Integer) 1:
                  hlds__hlds_desc__Desc_23 = (MR_String) "scope promise solutions";
                  break;
                case (MR_Integer) 2:
                  hlds__hlds_desc__Desc_23 = (MR_String) "scope promise purity";
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope require detism";
                      break;
                    case (MR_Integer) 1:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope require complete switch";
                      break;
                    case (MR_Integer) 2:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope require switch arm detism";
                      break;
                    case (MR_Integer) 3:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope commit";
                      break;
                    case (MR_Integer) 4:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope barrier";
                      break;
                    case (MR_Integer) 5:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope from_ground_term";
                      break;
                    case (MR_Integer) 6:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope trace goal";
                      break;
                    case (MR_Integer) 7:
                      hlds__hlds_desc__Desc_23 = (MR_String) "scope loop control goal";
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            hlds__hlds_desc__Desc_23 = (MR_String) "if_then_else";
            break;
          case (MR_Integer) 7:
            hlds__hlds_desc__Desc_23 = (MR_String) "shorthand";
            break;
        }
        break;
    }
    {
      hlds__hlds_desc__Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_desc__GoalInfo_10);
    }
    {
      hlds__hlds_desc__Line_93 = mercury__term__context_line_1_f_0(hlds__hlds_desc__Context_92);
    }
    {
      hlds__hlds_desc__V_144_144 = mercury__string__int_to_string_1_f_0(hlds__hlds_desc__Line_93);
    }
    {
      hlds__hlds_desc__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) "\100", hlds__hlds_desc__V_144_144);
    }
    {
      hlds__hlds_desc__FullDesc_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Desc_23, hlds__hlds_desc__V_142_142);
    }
    return hlds__hlds_desc__FullDesc_8;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_desc. */
