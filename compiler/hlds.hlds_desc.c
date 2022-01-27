/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "hlds.hlds_desc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 137 "hlds.hlds_desc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "hlds_desc.m"
static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
#line 183 "hlds_desc.m"
  MR_Word hlds__hlds_desc__VarSet_4,
#line 183 "hlds_desc.m"
  MR_Word hlds__hlds_desc__Var_5);

#line 178 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
#line 178 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 178 "hlds_desc.m"
  MR_Box hlds__hlds_desc__wrapper_arg_1);

#line 117 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
#line 117 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 117 "hlds_desc.m"
  MR_Box hlds__hlds_desc__wrapper_arg_1);

#line 116 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
#line 116 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 116 "hlds_desc.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 247 "hlds.hlds_desc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 255 "hlds.hlds_desc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 183 "hlds_desc.m"
static MR_String MR_CALL 
hlds__hlds_desc__describe_comma_var_2_f_0(
#line 183 "hlds_desc.m"
  MR_Word hlds__hlds_desc__VarSet_4,
#line 183 "hlds_desc.m"
  MR_Word hlds__hlds_desc__Var_5)
#line 183 "hlds_desc.m"
{
#line 185 "hlds_desc.m"
  {
#line 185 "hlds_desc.m"
    MR_bool hlds__hlds_desc__succeeded;
#line 185 "hlds_desc.m"
    MR_String hlds__hlds_desc__HeadVar__3_3;
#line 185 "hlds_desc.m"
    MR_String hlds__hlds_desc__V_7_7;

#line 186 "hlds_desc.m"
    {
#line 186 "hlds_desc.m"
      hlds__hlds_desc__V_7_7 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_4, (MR_Integer) 1, hlds__hlds_desc__Var_5);
    }
#line 186 "hlds_desc.m"
    {
#line 186 "hlds_desc.m"
      return hlds__hlds_desc__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) ", ", hlds__hlds_desc__V_7_7);
    }
#line 185 "hlds_desc.m"
    return hlds__hlds_desc__HeadVar__3_3;
#line 185 "hlds_desc.m"
  }
#line 183 "hlds_desc.m"
}

#line 47 "hlds_desc.m"
MR_String MR_CALL 
hlds__hlds_desc__describe_var_2_f_0(
#line 47 "hlds_desc.m"
  MR_Word hlds__hlds_desc__VarSet_4,
#line 47 "hlds_desc.m"
  MR_Word hlds__hlds_desc__Var_5)
#line 47 "hlds_desc.m"
{
#line 181 "hlds_desc.m"
  {
#line 181 "hlds_desc.m"
    MR_bool hlds__hlds_desc__succeeded;
#line 181 "hlds_desc.m"
    MR_String hlds__hlds_desc__HeadVar__3_3;

#line 181 "hlds_desc.m"
    {
#line 181 "hlds_desc.m"
      return hlds__hlds_desc__HeadVar__3_3 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_4, (MR_Integer) 1, hlds__hlds_desc__Var_5);
    }
#line 181 "hlds_desc.m"
    return hlds__hlds_desc__HeadVar__3_3;
#line 181 "hlds_desc.m"
  }
#line 47 "hlds_desc.m"
}

#line 178 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
#line 178 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 178 "hlds_desc.m"
  MR_Box hlds__hlds_desc__wrapper_arg_1)
#line 178 "hlds_desc.m"
{
#line 178 "hlds_desc.m"
  {
#line 178 "hlds_desc.m"
    MR_Box hlds__hlds_desc__wrapper_arg_2;
#line 178 "hlds_desc.m"
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
#line 178 "hlds_desc.m"
    MR_String hlds__hlds_desc__conv0_HeadVar__3_3;

#line 178 "hlds_desc.m"
    {
#line 178 "hlds_desc.m"
      hlds__hlds_desc__conv0_HeadVar__3_3 = hlds__hlds_desc__describe_comma_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
#line 178 "hlds_desc.m"
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv0_HeadVar__3_3));
#line 178 "hlds_desc.m"
    return hlds__hlds_desc__wrapper_arg_2;
#line 178 "hlds_desc.m"
  }
#line 178 "hlds_desc.m"
}

#line 42 "hlds_desc.m"
MR_String MR_CALL 
hlds__hlds_desc__describe_args_2_f_0(
#line 42 "hlds_desc.m"
  MR_Word hlds__hlds_desc__VarSet_1,
#line 42 "hlds_desc.m"
  MR_Word hlds__hlds_desc__HeadVar__2_2)
#line 42 "hlds_desc.m"
{
#line 174 "hlds_desc.m"
  {
#line 174 "hlds_desc.m"
    MR_bool hlds__hlds_desc__succeeded;
#line 174 "hlds_desc.m"
    MR_String hlds__hlds_desc__HeadVar__3_3;

#line 174 "hlds_desc.m"
    if ((hlds__hlds_desc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "hlds_desc.m"
      hlds__hlds_desc__HeadVar__3_3 = (MR_String) "";
#line 174 "hlds_desc.m"
    else
#line 175 "hlds_desc.m"
      {
#line 175 "hlds_desc.m"
        MR_Word hlds__hlds_desc__HeadVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "hlds_desc.m"
        MR_Word hlds__hlds_desc__TailVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "hlds_desc.m"
        MR_String hlds__hlds_desc__V_9_9;
#line 175 "hlds_desc.m"
        MR_String hlds__hlds_desc__V_10_10;
#line 175 "hlds_desc.m"
        MR_String hlds__hlds_desc__V_11_11;
#line 175 "hlds_desc.m"
        MR_String hlds__hlds_desc__V_12_12;
#line 175 "hlds_desc.m"
        MR_Word hlds__hlds_desc__V_13_13;
#line 175 "hlds_desc.m"
        MR_Word hlds__hlds_desc__V_14_14;

#line 181 "hlds_desc.m"
        {
#line 181 "hlds_desc.m"
          hlds__hlds_desc__V_10_10 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_desc__VarSet_1, (MR_Integer) 1, hlds__hlds_desc__HeadVar_6);
        }
#line 178 "hlds_desc.m"
        {
#line 178 "hlds_desc.m"
          hlds__hlds_desc__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 178 "hlds_desc.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_4[0]));
#line 178 "hlds_desc.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 1) = ((MR_Box) (hlds__hlds_desc__describe_args_2_f_0_1));
#line 178 "hlds_desc.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 178 "hlds_desc.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_desc__V_14_14, 3) = ((MR_Box) (hlds__hlds_desc__VarSet_1));
#line 178 "hlds_desc.m"
        }
#line 178 "hlds_desc.m"
        {
#line 178 "hlds_desc.m"
          hlds__hlds_desc__V_13_13 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_desc_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_desc__V_14_14, hlds__hlds_desc__TailVars_7);
        }
#line 178 "hlds_desc.m"
        {
#line 178 "hlds_desc.m"
          hlds__hlds_desc__V_12_12 = mercury__string__append_list_1_f_0(hlds__hlds_desc__V_13_13);
        }
#line 178 "hlds_desc.m"
        {
#line 178 "hlds_desc.m"
          hlds__hlds_desc__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_12_12, (MR_String) ")");
        }
#line 177 "hlds_desc.m"
        {
#line 177 "hlds_desc.m"
          hlds__hlds_desc__V_9_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_10_10, hlds__hlds_desc__V_11_11);
        }
#line 176 "hlds_desc.m"
        {
#line 176 "hlds_desc.m"
          return hlds__hlds_desc__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_desc__V_9_9);
        }
#line 175 "hlds_desc.m"
      }
#line 174 "hlds_desc.m"
    return hlds__hlds_desc__HeadVar__3_3;
#line 174 "hlds_desc.m"
  }
#line 42 "hlds_desc.m"
}

#line 117 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
#line 117 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 117 "hlds_desc.m"
  MR_Box hlds__hlds_desc__wrapper_arg_1)
#line 117 "hlds_desc.m"
{
#line 117 "hlds_desc.m"
  {
#line 117 "hlds_desc.m"
    MR_Box hlds__hlds_desc__wrapper_arg_2;
#line 117 "hlds_desc.m"
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
#line 117 "hlds_desc.m"
    MR_Word hlds__hlds_desc__conv1_HeadVar__2_2;

#line 117 "hlds_desc.m"
    {
#line 117 "hlds_desc.m"
      hlds__hlds_desc__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
#line 117 "hlds_desc.m"
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv1_HeadVar__2_2));
#line 117 "hlds_desc.m"
    return hlds__hlds_desc__wrapper_arg_2;
#line 117 "hlds_desc.m"
  }
#line 117 "hlds_desc.m"
}

#line 116 "hlds_desc.m"
static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
#line 116 "hlds_desc.m"
  MR_Box hlds__hlds_desc__closure_arg,
#line 116 "hlds_desc.m"
  MR_Box hlds__hlds_desc__wrapper_arg_1)
#line 116 "hlds_desc.m"
{
#line 116 "hlds_desc.m"
  {
#line 116 "hlds_desc.m"
    MR_Box hlds__hlds_desc__wrapper_arg_2;
#line 116 "hlds_desc.m"
    MR_Box hlds__hlds_desc__closure = hlds__hlds_desc__closure_arg;
#line 116 "hlds_desc.m"
    MR_Word hlds__hlds_desc__conv0_HeadVar__2_2;

#line 116 "hlds_desc.m"
    {
#line 116 "hlds_desc.m"
      hlds__hlds_desc__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_desc__wrapper_arg_1));
    }
#line 116 "hlds_desc.m"
    hlds__hlds_desc__wrapper_arg_2 = ((MR_Box) (hlds__hlds_desc__conv0_HeadVar__2_2));
#line 116 "hlds_desc.m"
    return hlds__hlds_desc__wrapper_arg_2;
#line 116 "hlds_desc.m"
  }
#line 116 "hlds_desc.m"
}

#line 35 "hlds_desc.m"
MR_String MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0(
#line 35 "hlds_desc.m"
  MR_Word hlds__hlds_desc__ModuleInfo_5,
#line 35 "hlds_desc.m"
  MR_Word hlds__hlds_desc__VarSet_6,
#line 35 "hlds_desc.m"
  MR_Word hlds__hlds_desc__Goal_7)
#line 35 "hlds_desc.m"
{
#line 65 "hlds_desc.m"
  {
#line 65 "hlds_desc.m"
    MR_bool hlds__hlds_desc__succeeded;
#line 65 "hlds_desc.m"
    MR_String hlds__hlds_desc__FullDesc_8;
#line 65 "hlds_desc.m"
    MR_Word hlds__hlds_desc__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Goal_7, (MR_Integer) 0)));
#line 65 "hlds_desc.m"
    MR_Word hlds__hlds_desc__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Goal_7, (MR_Integer) 1)));
#line 65 "hlds_desc.m"
    MR_String hlds__hlds_desc__Desc_23;
#line 65 "hlds_desc.m"
    MR_Word hlds__hlds_desc__Context_90;
#line 65 "hlds_desc.m"
    MR_Integer hlds__hlds_desc__Line_91;
#line 65 "hlds_desc.m"
    MR_String hlds__hlds_desc__V_140_140;
#line 65 "hlds_desc.m"
    MR_String hlds__hlds_desc__V_142_142;

#line 91 "hlds_desc.m"
    if (((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 0))))
#line 129 "hlds_desc.m"
      hlds__hlds_desc__Desc_23 = (MR_String) "negation";
#line 91 "hlds_desc.m"
    else
#line 91 "hlds_desc.m"
      if (((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 2))))
#line 92 "hlds_desc.m"
        {
#line 92 "hlds_desc.m"
          MR_Word hlds__hlds_desc__SymName_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));
#line 92 "hlds_desc.m"
          MR_String hlds__hlds_desc__V_118_118;
#line 92 "hlds_desc.m"
          MR_String hlds__hlds_desc__V_119_119;
#line 92 "hlds_desc.m"
          MR_Word hlds__hlds_desc__Args_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
#line 92 "hlds_desc.m"
          MR_Word hlds__hlds_desc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)));
#line 92 "hlds_desc.m"
          MR_Integer hlds__hlds_desc__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 92 "hlds_desc.m"
          MR_Word hlds__hlds_desc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
#line 92 "hlds_desc.m"
          MR_Word hlds__hlds_desc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));

#line 93 "hlds_desc.m"
          {
#line 93 "hlds_desc.m"
            hlds__hlds_desc__V_118_118 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_desc__SymName_38);
          }
#line 93 "hlds_desc.m"
          {
#line 93 "hlds_desc.m"
            hlds__hlds_desc__V_119_119 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_146);
          }
#line 93 "hlds_desc.m"
          {
#line 93 "hlds_desc.m"
            hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_118_118, hlds__hlds_desc__V_119_119);
          }
#line 92 "hlds_desc.m"
        }
#line 91 "hlds_desc.m"
      else
#line 91 "hlds_desc.m"
        if (((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 1))))
#line 68 "hlds_desc.m"
          {
#line 68 "hlds_desc.m"
            MR_Word hlds__hlds_desc__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
#line 68 "hlds_desc.m"
            MR_Word hlds__hlds_desc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)));
#line 68 "hlds_desc.m"
            MR_Word hlds__hlds_desc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 68 "hlds_desc.m"
            MR_Word hlds__hlds_desc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
#line 68 "hlds_desc.m"
            MR_Word hlds__hlds_desc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));

#line 74 "hlds_desc.m"
            if (((MR_tag((MR_Word) hlds__hlds_desc__Unification_14)) == (MR_mktag((MR_Integer) 2))))
#line 80 "hlds_desc.m"
              {
#line 80 "hlds_desc.m"
                MR_Word hlds__hlds_desc__ToVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
#line 80 "hlds_desc.m"
                MR_Word hlds__hlds_desc__FromVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
#line 80 "hlds_desc.m"
                MR_String hlds__hlds_desc__V_124_124;
#line 80 "hlds_desc.m"
                MR_String hlds__hlds_desc__V_125_125;
#line 80 "hlds_desc.m"
                MR_String hlds__hlds_desc__V_127_127;

#line 81 "hlds_desc.m"
                {
#line 81 "hlds_desc.m"
                  hlds__hlds_desc__V_124_124 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__ToVar_27);
                }
#line 82 "hlds_desc.m"
                {
#line 82 "hlds_desc.m"
                  hlds__hlds_desc__V_127_127 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__FromVar_28);
                }
#line 82 "hlds_desc.m"
                {
#line 82 "hlds_desc.m"
                  hlds__hlds_desc__V_125_125 = mercury__string__f_43_43_2_f_0((MR_String) " := ", hlds__hlds_desc__V_127_127);
                }
#line 81 "hlds_desc.m"
                {
#line 81 "hlds_desc.m"
                  hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_124_124, hlds__hlds_desc__V_125_125);
                }
#line 80 "hlds_desc.m"
              }
#line 74 "hlds_desc.m"
            else
#line 74 "hlds_desc.m"
              if (((MR_tag((MR_Word) hlds__hlds_desc__Unification_14)) == (MR_mktag((MR_Integer) 0))))
#line 70 "hlds_desc.m"
                {
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
#line 70 "hlds_desc.m"
                  MR_String hlds__hlds_desc__V_134_134;
#line 70 "hlds_desc.m"
                  MR_String hlds__hlds_desc__V_135_135;
#line 70 "hlds_desc.m"
                  MR_String hlds__hlds_desc__V_137_137;
#line 70 "hlds_desc.m"
                  MR_String hlds__hlds_desc__V_138_138;
#line 70 "hlds_desc.m"
                  MR_String hlds__hlds_desc__V_139_139;
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 3)));
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 4)));
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 5)));
#line 70 "hlds_desc.m"
                  MR_Word hlds__hlds_desc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__Unification_14, (MR_Integer) 6)));

#line 71 "hlds_desc.m"
                  {
#line 71 "hlds_desc.m"
                    hlds__hlds_desc__V_134_134 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_16);
                  }
#line 72 "hlds_desc.m"
                  {
#line 72 "hlds_desc.m"
                    hlds__hlds_desc__V_138_138 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_desc__ConsId_17);
                  }
#line 73 "hlds_desc.m"
                  {
#line 73 "hlds_desc.m"
                    hlds__hlds_desc__V_139_139 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_18);
                  }
#line 72 "hlds_desc.m"
                  {
#line 72 "hlds_desc.m"
                    hlds__hlds_desc__V_137_137 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_138_138, hlds__hlds_desc__V_139_139);
                  }
#line 71 "hlds_desc.m"
                  {
#line 71 "hlds_desc.m"
                    hlds__hlds_desc__V_135_135 = mercury__string__f_43_43_2_f_0((MR_String) " <= ", hlds__hlds_desc__V_137_137);
                  }
#line 71 "hlds_desc.m"
                  {
#line 71 "hlds_desc.m"
                    hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_134_134, hlds__hlds_desc__V_135_135);
                  }
#line 70 "hlds_desc.m"
                }
#line 74 "hlds_desc.m"
              else
#line 74 "hlds_desc.m"
                if (((MR_tag((MR_Word) hlds__hlds_desc__Unification_14)) == (MR_mktag((MR_Integer) 1))))
#line 75 "hlds_desc.m"
                  {
#line 75 "hlds_desc.m"
                    MR_String hlds__hlds_desc__V_128_128;
#line 75 "hlds_desc.m"
                    MR_String hlds__hlds_desc__V_129_129;
#line 75 "hlds_desc.m"
                    MR_String hlds__hlds_desc__V_131_131;
#line 75 "hlds_desc.m"
                    MR_String hlds__hlds_desc__V_132_132;
#line 75 "hlds_desc.m"
                    MR_String hlds__hlds_desc__V_133_133;
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 0)));
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__ConsId_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__Args_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 3)));
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 4)));
#line 75 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__Unification_14, (MR_Integer) 5)));

#line 76 "hlds_desc.m"
                    {
#line 76 "hlds_desc.m"
                      hlds__hlds_desc__V_128_128 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_143);
                    }
#line 77 "hlds_desc.m"
                    {
#line 77 "hlds_desc.m"
                      hlds__hlds_desc__V_132_132 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(hlds__hlds_desc__ConsId_144);
                    }
#line 78 "hlds_desc.m"
                    {
#line 78 "hlds_desc.m"
                      hlds__hlds_desc__V_133_133 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_145);
                    }
#line 77 "hlds_desc.m"
                    {
#line 77 "hlds_desc.m"
                      hlds__hlds_desc__V_131_131 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_132_132, hlds__hlds_desc__V_133_133);
                    }
#line 76 "hlds_desc.m"
                    {
#line 76 "hlds_desc.m"
                      hlds__hlds_desc__V_129_129 = mercury__string__f_43_43_2_f_0((MR_String) " => ", hlds__hlds_desc__V_131_131);
                    }
#line 76 "hlds_desc.m"
                    {
#line 76 "hlds_desc.m"
                      hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_128_128, hlds__hlds_desc__V_129_129);
                    }
#line 75 "hlds_desc.m"
                  }
#line 74 "hlds_desc.m"
                else
#line 74 "hlds_desc.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_desc__Unification_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 89 "hlds_desc.m"
                    hlds__hlds_desc__Desc_23 = (MR_String) "complicated unify";
#line 74 "hlds_desc.m"
                  else
#line 84 "hlds_desc.m"
                    {
#line 84 "hlds_desc.m"
                      MR_Word hlds__hlds_desc__VarA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 1)));
#line 84 "hlds_desc.m"
                      MR_Word hlds__hlds_desc__VarB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Unification_14, (MR_Integer) 2)));
#line 84 "hlds_desc.m"
                      MR_String hlds__hlds_desc__V_120_120;
#line 84 "hlds_desc.m"
                      MR_String hlds__hlds_desc__V_121_121;
#line 84 "hlds_desc.m"
                      MR_String hlds__hlds_desc__V_123_123;

#line 85 "hlds_desc.m"
                      {
#line 85 "hlds_desc.m"
                        hlds__hlds_desc__V_120_120 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__VarA_29);
                      }
#line 86 "hlds_desc.m"
                      {
#line 86 "hlds_desc.m"
                        hlds__hlds_desc__V_123_123 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__VarB_30);
                      }
#line 86 "hlds_desc.m"
                      {
#line 86 "hlds_desc.m"
                        hlds__hlds_desc__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) " == ", hlds__hlds_desc__V_123_123);
                      }
#line 85 "hlds_desc.m"
                      {
#line 85 "hlds_desc.m"
                        hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_120_120, hlds__hlds_desc__V_121_121);
                      }
#line 84 "hlds_desc.m"
                    }
#line 68 "hlds_desc.m"
          }
#line 91 "hlds_desc.m"
        else
#line 91 "hlds_desc.m"
          if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 112 "hlds_desc.m"
            {
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__TypeCtorInfo_154_154;
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__TypeInfo_155_155;
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__PredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__ExtraArgs_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__PredInfo_57;
#line 112 "hlds_desc.m"
              MR_String hlds__hlds_desc__Name_58;
#line 112 "hlds_desc.m"
              MR_String hlds__hlds_desc__V_95_95;
#line 112 "hlds_desc.m"
              MR_String hlds__hlds_desc__V_96_96;
#line 112 "hlds_desc.m"
              MR_String hlds__hlds_desc__V_97_97;
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__V_98_98;
#line 112 "hlds_desc.m"
              MR_String hlds__hlds_desc__V_100_100;
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__V_101_101;
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__Args_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 112 "hlds_desc.m"
              MR_Integer hlds__hlds_desc__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 6)));
#line 112 "hlds_desc.m"
              MR_Word hlds__hlds_desc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 7)));

#line 113 "hlds_desc.m"
              {
#line 113 "hlds_desc.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_desc__ModuleInfo_5, hlds__hlds_desc__PredId_52, &hlds__hlds_desc__PredInfo_57);
              }
#line 114 "hlds_desc.m"
              {
#line 114 "hlds_desc.m"
                hlds__hlds_desc__Name_58 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_desc__PredInfo_57);
              }
#line 866 "hlds.hlds_desc.c"
              hlds__hlds_desc__TypeCtorInfo_154_154 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 868 "hlds.hlds_desc.c"
              hlds__hlds_desc__TypeInfo_155_155 = (MR_Word) &hlds__hlds_desc_scalar_common_1[0];
#line 116 "hlds_desc.m"
              {
#line 116 "hlds_desc.m"
                hlds__hlds_desc__V_98_98 = mercury__list__map_2_f_0(hlds__hlds_desc__TypeCtorInfo_154_154, hlds__hlds_desc__TypeInfo_155_155, (MR_Word) &hlds__hlds_desc_scalar_common_3[0], hlds__hlds_desc__Args_152);
              }
#line 116 "hlds_desc.m"
              {
#line 116 "hlds_desc.m"
                hlds__hlds_desc__V_97_97 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__V_98_98);
              }
#line 117 "hlds_desc.m"
              {
#line 117 "hlds_desc.m"
                hlds__hlds_desc__V_101_101 = mercury__list__map_2_f_0(hlds__hlds_desc__TypeCtorInfo_154_154, hlds__hlds_desc__TypeInfo_155_155, (MR_Word) &hlds__hlds_desc_scalar_common_3[1], hlds__hlds_desc__ExtraArgs_54);
              }
#line 117 "hlds_desc.m"
              {
#line 117 "hlds_desc.m"
                hlds__hlds_desc__V_100_100 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__V_101_101);
              }
#line 116 "hlds_desc.m"
              {
#line 116 "hlds_desc.m"
                hlds__hlds_desc__V_96_96 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_97_97, hlds__hlds_desc__V_100_100);
              }
#line 115 "hlds_desc.m"
              {
#line 115 "hlds_desc.m"
                hlds__hlds_desc__V_95_95 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Name_58, hlds__hlds_desc__V_96_96);
              }
#line 115 "hlds_desc.m"
              {
#line 115 "hlds_desc.m"
                hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", hlds__hlds_desc__V_95_95);
              }
#line 112 "hlds_desc.m"
            }
#line 91 "hlds_desc.m"
          else
#line 91 "hlds_desc.m"
            if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 120 "hlds_desc.m"
              hlds__hlds_desc__Desc_23 = (MR_String) "conj";
#line 91 "hlds_desc.m"
            else
#line 91 "hlds_desc.m"
              if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 123 "hlds_desc.m"
                hlds__hlds_desc__Desc_23 = (MR_String) "disj";
#line 91 "hlds_desc.m"
              else
#line 91 "hlds_desc.m"
                if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 95 "hlds_desc.m"
                  {
#line 95 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__GCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 95 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__Args_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
#line 95 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));
#line 95 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 4)));
#line 95 "hlds_desc.m"
                    MR_Word hlds__hlds_desc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 5)));

#line 99 "hlds_desc.m"
                    if (((MR_tag((MR_Word) hlds__hlds_desc__GCall_39)) == (MR_mktag((MR_Integer) 3))))
#line 108 "hlds_desc.m"
                      {
#line 108 "hlds_desc.m"
                        MR_String hlds__hlds_desc__V_104_104;

#line 109 "hlds_desc.m"
                        {
#line 109 "hlds_desc.m"
                          hlds__hlds_desc__V_104_104 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_151);
                        }
#line 109 "hlds_desc.m"
                        {
#line 109 "hlds_desc.m"
                          hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", hlds__hlds_desc__V_104_104);
                        }
#line 108 "hlds_desc.m"
                      }
#line 99 "hlds_desc.m"
                    else
#line 99 "hlds_desc.m"
                      if (((MR_tag((MR_Word) hlds__hlds_desc__GCall_39)) == (MR_mktag((MR_Integer) 1))))
#line 100 "hlds_desc.m"
                        {
#line 100 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__Method_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 3)));
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_108_108;
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_109_109;
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_111_111;
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_112_112;
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_113_113;
#line 100 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_115_115;
#line 100 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
#line 100 "hlds_desc.m"
                          MR_Integer hlds__hlds_desc__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 1)));
#line 100 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_desc__GCall_39, (MR_Integer) 2)));

#line 101 "hlds_desc.m"
                          {
#line 101 "hlds_desc.m"
                            hlds__hlds_desc__V_108_108 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(hlds__hlds_desc__Method_48);
                          }
#line 102 "hlds_desc.m"
                          {
#line 102 "hlds_desc.m"
                            hlds__hlds_desc__V_112_112 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_148);
                          }
#line 103 "hlds_desc.m"
                          {
#line 103 "hlds_desc.m"
                            hlds__hlds_desc__V_115_115 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_151);
                          }
#line 102 "hlds_desc.m"
                          {
#line 102 "hlds_desc.m"
                            hlds__hlds_desc__V_113_113 = mercury__string__f_43_43_2_f_0((MR_String) "]", hlds__hlds_desc__V_115_115);
                          }
#line 102 "hlds_desc.m"
                          {
#line 102 "hlds_desc.m"
                            hlds__hlds_desc__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_112_112, hlds__hlds_desc__V_113_113);
                          }
#line 102 "hlds_desc.m"
                          {
#line 102 "hlds_desc.m"
                            hlds__hlds_desc__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "[", hlds__hlds_desc__V_111_111);
                          }
#line 101 "hlds_desc.m"
                          {
#line 101 "hlds_desc.m"
                            hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_108_108, hlds__hlds_desc__V_109_109);
                          }
#line 100 "hlds_desc.m"
                        }
#line 99 "hlds_desc.m"
                      else
#line 99 "hlds_desc.m"
                        if (((MR_tag((MR_Word) hlds__hlds_desc__GCall_39)) == (MR_mktag((MR_Integer) 2))))
#line 105 "hlds_desc.m"
                          {
#line 105 "hlds_desc.m"
                            MR_String hlds__hlds_desc__Event_49 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
#line 105 "hlds_desc.m"
                            MR_String hlds__hlds_desc__V_106_106;
#line 105 "hlds_desc.m"
                            MR_String hlds__hlds_desc__V_107_107;

#line 106 "hlds_desc.m"
                            {
#line 106 "hlds_desc.m"
                              hlds__hlds_desc__V_107_107 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_151);
                            }
#line 106 "hlds_desc.m"
                            {
#line 106 "hlds_desc.m"
                              hlds__hlds_desc__V_106_106 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Event_49, hlds__hlds_desc__V_107_107);
                            }
#line 106 "hlds_desc.m"
                            {
#line 106 "hlds_desc.m"
                              hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "event ", hlds__hlds_desc__V_106_106);
                            }
#line 105 "hlds_desc.m"
                          }
#line 99 "hlds_desc.m"
                        else
#line 97 "hlds_desc.m"
                          {
#line 97 "hlds_desc.m"
                            MR_String hlds__hlds_desc__V_116_116;
#line 97 "hlds_desc.m"
                            MR_String hlds__hlds_desc__V_117_117;
#line 97 "hlds_desc.m"
                            MR_Word hlds__hlds_desc__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 0)));
#line 97 "hlds_desc.m"
                            MR_Word hlds__hlds_desc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 1)));
#line 97 "hlds_desc.m"
                            MR_Word hlds__hlds_desc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 2)));
#line 97 "hlds_desc.m"
                            MR_Integer hlds__hlds_desc__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_desc__GCall_39, (MR_Integer) 3)));

#line 98 "hlds_desc.m"
                            {
#line 98 "hlds_desc.m"
                              hlds__hlds_desc__V_116_116 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_147);
                            }
#line 98 "hlds_desc.m"
                            {
#line 98 "hlds_desc.m"
                              hlds__hlds_desc__V_117_117 = hlds__hlds_desc__describe_args_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Args_151);
                            }
#line 98 "hlds_desc.m"
                            {
#line 98 "hlds_desc.m"
                              hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__V_116_116, hlds__hlds_desc__V_117_117);
                            }
#line 97 "hlds_desc.m"
                          }
#line 95 "hlds_desc.m"
                  }
#line 91 "hlds_desc.m"
                else
#line 91 "hlds_desc.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 165 "hlds_desc.m"
                    hlds__hlds_desc__Desc_23 = (MR_String) "if_then_else";
#line 91 "hlds_desc.m"
                  else
#line 91 "hlds_desc.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 131 "hlds_desc.m"
                      {
#line 131 "hlds_desc.m"
                        MR_Word hlds__hlds_desc__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 131 "hlds_desc.m"
                        MR_Word hlds__hlds_desc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));

#line 135 "hlds_desc.m"
                        if (((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 0))))
#line 134 "hlds_desc.m"
                          hlds__hlds_desc__Desc_23 = (MR_String) "scope exist quant";
#line 135 "hlds_desc.m"
                        else
#line 135 "hlds_desc.m"
                          if (((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 2))))
#line 140 "hlds_desc.m"
                            hlds__hlds_desc__Desc_23 = (MR_String) "scope promise purity";
#line 135 "hlds_desc.m"
                          else
#line 135 "hlds_desc.m"
                            if (((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 1))))
#line 137 "hlds_desc.m"
                              hlds__hlds_desc__Desc_23 = (MR_String) "scope promise solutions";
#line 135 "hlds_desc.m"
                            else
#line 135 "hlds_desc.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 152 "hlds_desc.m"
                                hlds__hlds_desc__Desc_23 = (MR_String) "scope barrier";
#line 135 "hlds_desc.m"
                              else
#line 135 "hlds_desc.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 149 "hlds_desc.m"
                                  hlds__hlds_desc__Desc_23 = (MR_String) "scope commit";
#line 135 "hlds_desc.m"
                                else
#line 135 "hlds_desc.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 155 "hlds_desc.m"
                                    hlds__hlds_desc__Desc_23 = (MR_String) "scope from_ground_term";
#line 135 "hlds_desc.m"
                                  else
#line 135 "hlds_desc.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 161 "hlds_desc.m"
                                      hlds__hlds_desc__Desc_23 = (MR_String) "scope loop control goal";
#line 135 "hlds_desc.m"
                                    else
#line 135 "hlds_desc.m"
                                      if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 146 "hlds_desc.m"
                                        hlds__hlds_desc__Desc_23 = (MR_String) "scope require complete switch";
#line 135 "hlds_desc.m"
                                      else
#line 135 "hlds_desc.m"
                                        if (((((MR_tag((MR_Word) hlds__hlds_desc__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 143 "hlds_desc.m"
                                          hlds__hlds_desc__Desc_23 = (MR_String) "scope require detism";
#line 135 "hlds_desc.m"
                                        else
#line 158 "hlds_desc.m"
                                          hlds__hlds_desc__Desc_23 = (MR_String) "scope trace goal";
#line 131 "hlds_desc.m"
                      }
#line 91 "hlds_desc.m"
                    else
#line 91 "hlds_desc.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_desc__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 168 "hlds_desc.m"
                        hlds__hlds_desc__Desc_23 = (MR_String) "shorthand";
#line 91 "hlds_desc.m"
                      else
#line 125 "hlds_desc.m"
                        {
#line 125 "hlds_desc.m"
                          MR_String hlds__hlds_desc__V_93_93;
#line 125 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 1)));
#line 125 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 2)));
#line 125 "hlds_desc.m"
                          MR_Word hlds__hlds_desc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_desc__GoalExpr_9, (MR_Integer) 3)));

#line 126 "hlds_desc.m"
                          {
#line 126 "hlds_desc.m"
                            hlds__hlds_desc__V_93_93 = hlds__hlds_desc__describe_var_2_f_0(hlds__hlds_desc__VarSet_6, hlds__hlds_desc__Var_153);
                          }
#line 126 "hlds_desc.m"
                          {
#line 126 "hlds_desc.m"
                            hlds__hlds_desc__Desc_23 = mercury__string__f_43_43_2_f_0((MR_String) "switch on ", hlds__hlds_desc__V_93_93);
                          }
#line 125 "hlds_desc.m"
                        }
#line 170 "hlds_desc.m"
    {
#line 170 "hlds_desc.m"
      hlds__hlds_desc__Context_90 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_desc__GoalInfo_10);
    }
#line 171 "hlds_desc.m"
    {
#line 171 "hlds_desc.m"
      hlds__hlds_desc__Line_91 = mercury__term__context_line_1_f_0(hlds__hlds_desc__Context_90);
    }
#line 172 "hlds_desc.m"
    {
#line 172 "hlds_desc.m"
      hlds__hlds_desc__V_142_142 = mercury__string__int_to_string_1_f_0(hlds__hlds_desc__Line_91);
    }
#line 172 "hlds_desc.m"
    {
#line 172 "hlds_desc.m"
      hlds__hlds_desc__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) "\100", hlds__hlds_desc__V_142_142);
    }
#line 172 "hlds_desc.m"
    {
#line 172 "hlds_desc.m"
      return hlds__hlds_desc__FullDesc_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_desc__Desc_23, hlds__hlds_desc__V_140_140);
    }
#line 65 "hlds_desc.m"
    return hlds__hlds_desc__FullDesc_8;
#line 65 "hlds_desc.m"
  }
#line 35 "hlds_desc.m"
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
