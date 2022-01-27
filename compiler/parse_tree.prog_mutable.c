/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module parse_tree.prog_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#include "parse_tree.prog_mutable.mih"


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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[2][1];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 591 "prog_mutable.m"
MR_String MR_CALL 
parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(
#line 591 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__TargetMutableVarName_3)
#line 591 "prog_mutable.m"
{
#line 848 "prog_mutable.m"
  {
#line 848 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 848 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__MutexVarName_4;

#line 849 "prog_mutable.m"
    {
#line 849 "prog_mutable.m"
      return parse_tree__prog_mutable__MutexVarName_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_mutable__TargetMutableVarName_3, (MR_String) "_lock");
    }
#line 848 "prog_mutable.m"
    return parse_tree__prog_mutable__MutexVarName_4;
#line 848 "prog_mutable.m"
  }
#line 591 "prog_mutable.m"
}

#line 584 "prog_mutable.m"
MR_String MR_CALL 
parse_tree__prog_mutable__mutable_c_var_name_2_f_0(
#line 584 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 584 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 584 "prog_mutable.m"
{
#line 837 "prog_mutable.m"
  {
#line 837 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 837 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__MangledCVarName_6;
#line 837 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__RawCVarName_7;
#line 837 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__QualifiedCVarName0_8;
#line 837 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__QualifiedCVarName_9;

#line 838 "prog_mutable.m"
    {
#line 838 "prog_mutable.m"
      parse_tree__prog_mutable__RawCVarName_7 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", parse_tree__prog_mutable__Name_5);
    }
#line 839 "prog_mutable.m"
    {
#line 839 "prog_mutable.m"
      parse_tree__prog_mutable__QualifiedCVarName0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 839 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 1) = ((MR_Box) (parse_tree__prog_mutable__RawCVarName_7));
#line 839 "prog_mutable.m"
    }
#line 840 "prog_mutable.m"
    {
#line 840 "prog_mutable.m"
      parse_tree__prog_mutable__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_mutable__ModuleName_4);
    }
#line 843 "prog_mutable.m"
    if (parse_tree__prog_mutable__succeeded)
#line 841 "prog_mutable.m"
      {
#line 841 "prog_mutable.m"
        {
#line 841 "prog_mutable.m"
          parse_tree__prog_mutable__QualifiedCVarName_9 = mdbcomp__prim_data__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__prog_mutable__QualifiedCVarName0_8);
        }
#line 841 "prog_mutable.m"
      }
#line 843 "prog_mutable.m"
    else
#line 844 "prog_mutable.m"
      parse_tree__prog_mutable__QualifiedCVarName_9 = parse_tree__prog_mutable__QualifiedCVarName0_8;
#line 846 "prog_mutable.m"
    {
#line 846 "prog_mutable.m"
      return parse_tree__prog_mutable__MangledCVarName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_mutable__QualifiedCVarName_9);
    }
#line 837 "prog_mutable.m"
    return parse_tree__prog_mutable__MangledCVarName_6;
#line 837 "prog_mutable.m"
  }
#line 584 "prog_mutable.m"
}

#line 582 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(
#line 582 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 582 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 582 "prog_mutable.m"
{
#line 834 "prog_mutable.m"
  {
#line 834 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 834 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 834 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 835 "prog_mutable.m"
    {
#line 835 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
#line 834 "prog_mutable.m"
    {
#line 834 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 834 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 834 "prog_mutable.m"
    }
#line 834 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 834 "prog_mutable.m"
  }
#line 582 "prog_mutable.m"
}

#line 580 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(
#line 580 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 580 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 580 "prog_mutable.m"
{
#line 831 "prog_mutable.m"
  {
#line 831 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 831 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 831 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 832 "prog_mutable.m"
    {
#line 832 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
#line 831 "prog_mutable.m"
    {
#line 831 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 831 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 831 "prog_mutable.m"
    }
#line 831 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 831 "prog_mutable.m"
  }
#line 580 "prog_mutable.m"
}

#line 578 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(
#line 578 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 578 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 578 "prog_mutable.m"
{
#line 828 "prog_mutable.m"
  {
#line 828 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 828 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 828 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 829 "prog_mutable.m"
    {
#line 829 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_5);
    }
#line 828 "prog_mutable.m"
    {
#line 828 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 828 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 828 "prog_mutable.m"
    }
#line 828 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 828 "prog_mutable.m"
  }
#line 578 "prog_mutable.m"
}

#line 562 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(
#line 562 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 562 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 562 "prog_mutable.m"
{
#line 825 "prog_mutable.m"
  {
#line 825 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 825 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 825 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 826 "prog_mutable.m"
    {
#line 826 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_5);
    }
#line 825 "prog_mutable.m"
    {
#line 825 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 825 "prog_mutable.m"
    }
#line 825 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 825 "prog_mutable.m"
  }
#line 562 "prog_mutable.m"
}

#line 560 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(
#line 560 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 560 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 560 "prog_mutable.m"
{
#line 822 "prog_mutable.m"
  {
#line 822 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 822 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 822 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 823 "prog_mutable.m"
    {
#line 823 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_5);
    }
#line 822 "prog_mutable.m"
    {
#line 822 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 822 "prog_mutable.m"
    }
#line 822 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 822 "prog_mutable.m"
  }
#line 560 "prog_mutable.m"
}

#line 558 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(
#line 558 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 558 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 558 "prog_mutable.m"
{
#line 819 "prog_mutable.m"
  {
#line 819 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 819 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 819 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 820 "prog_mutable.m"
    {
#line 820 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", parse_tree__prog_mutable__Name_5);
    }
#line 819 "prog_mutable.m"
    {
#line 819 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 819 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 819 "prog_mutable.m"
    }
#line 819 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 819 "prog_mutable.m"
  }
#line 558 "prog_mutable.m"
}

#line 557 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(
#line 557 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 557 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 557 "prog_mutable.m"
{
#line 816 "prog_mutable.m"
  {
#line 816 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 816 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 816 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 817 "prog_mutable.m"
    {
#line 817 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", parse_tree__prog_mutable__Name_5);
    }
#line 816 "prog_mutable.m"
    {
#line 816 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 816 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 816 "prog_mutable.m"
    }
#line 816 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 816 "prog_mutable.m"
  }
#line 557 "prog_mutable.m"
}

#line 556 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(
#line 556 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 556 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 556 "prog_mutable.m"
{
#line 813 "prog_mutable.m"
  {
#line 813 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 813 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 813 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 814 "prog_mutable.m"
    {
#line 814 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", parse_tree__prog_mutable__Name_5);
    }
#line 813 "prog_mutable.m"
    {
#line 813 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 813 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 813 "prog_mutable.m"
    }
#line 813 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 813 "prog_mutable.m"
  }
#line 556 "prog_mutable.m"
}

#line 555 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(
#line 555 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_4,
#line 555 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_5)
#line 555 "prog_mutable.m"
{
#line 810 "prog_mutable.m"
  {
#line 810 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 810 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
#line 810 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_6_6;

#line 811 "prog_mutable.m"
    {
#line 811 "prog_mutable.m"
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", parse_tree__prog_mutable__Name_5);
    }
#line 810 "prog_mutable.m"
    {
#line 810 "prog_mutable.m"
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
#line 810 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
#line 810 "prog_mutable.m"
    }
#line 810 "prog_mutable.m"
    return parse_tree__prog_mutable__HeadVar__3_3;
#line 810 "prog_mutable.m"
  }
#line 555 "prog_mutable.m"
}

#line 551 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_pre_init_pred_decl_3_f_0(
#line 551 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_5,
#line 551 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_6,
#line 551 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_7)
#line 551 "prog_mutable.m"
{
#line 791 "prog_mutable.m"
  {
#line 791 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 791 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__PreInitPredDeclItem_8;
#line 791 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_9;
#line 791 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_10;
#line 791 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__PreInitPredDecl_18;
#line 791 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_23_23;
#line 791 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_32_32;

#line 792 "prog_mutable.m"
    {
#line 792 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_9 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 793 "prog_mutable.m"
    {
#line 793 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_10 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 835 "prog_mutable.m"
    {
#line 835 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", parse_tree__prog_mutable__Name_6);
    }
#line 834 "prog_mutable.m"
    {
#line 834 "prog_mutable.m"
      parse_tree__prog_mutable__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_23_23, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_5));
#line 834 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_23_23, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 834 "prog_mutable.m"
    }
#line 801 "prog_mutable.m"
    {
#line 801 "prog_mutable.m"
      parse_tree__prog_mutable__PreInitPredDecl_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_9));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_10));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 4) = ((MR_Box) ((MR_Integer) 0));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 5) = ((MR_Box) (parse_tree__prog_mutable__V_23_23));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 11) = ((MR_Box) ((MR_Integer) 2));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_7));
#line 801 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__PreInitPredDecl_18, 14) = ((MR_Box) ((MR_Integer) -1));
#line 801 "prog_mutable.m"
    }
#line 806 "prog_mutable.m"
    {
#line 806 "prog_mutable.m"
      parse_tree__prog_mutable__PreInitPredDeclItem_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__PreInitPredDeclItem_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 806 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__PreInitPredDeclItem_8, 1) = ((MR_Box) (parse_tree__prog_mutable__PreInitPredDecl_18));
#line 806 "prog_mutable.m"
    }
#line 791 "prog_mutable.m"
    return parse_tree__prog_mutable__PreInitPredDeclItem_8;
#line 791 "prog_mutable.m"
  }
#line 551 "prog_mutable.m"
}

#line 544 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_init_pred_decl_3_f_0(
#line 544 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_5,
#line 544 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_6,
#line 544 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_7)
#line 544 "prog_mutable.m"
{
#line 775 "prog_mutable.m"
  {
#line 775 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 775 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InitPredDeclItem_8;
#line 775 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_9;
#line 775 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_10;
#line 775 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InitPredDecl_18;
#line 775 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_23_23;
#line 775 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_32_32;

#line 776 "prog_mutable.m"
    {
#line 776 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_9 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 777 "prog_mutable.m"
    {
#line 777 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_10 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 832 "prog_mutable.m"
    {
#line 832 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", parse_tree__prog_mutable__Name_6);
    }
#line 831 "prog_mutable.m"
    {
#line 831 "prog_mutable.m"
      parse_tree__prog_mutable__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_23_23, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_5));
#line 831 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_23_23, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 831 "prog_mutable.m"
    }
#line 785 "prog_mutable.m"
    {
#line 785 "prog_mutable.m"
      parse_tree__prog_mutable__InitPredDecl_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_9));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_10));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 4) = ((MR_Box) ((MR_Integer) 0));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 5) = ((MR_Box) (parse_tree__prog_mutable__V_23_23));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 11) = ((MR_Box) ((MR_Integer) 2));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_7));
#line 785 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__InitPredDecl_18, 14) = ((MR_Box) ((MR_Integer) -1));
#line 785 "prog_mutable.m"
    }
#line 789 "prog_mutable.m"
    {
#line 789 "prog_mutable.m"
      parse_tree__prog_mutable__InitPredDeclItem_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__InitPredDeclItem_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 789 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__InitPredDeclItem_8, 1) = ((MR_Box) (parse_tree__prog_mutable__InitPredDecl_18));
#line 789 "prog_mutable.m"
    }
#line 775 "prog_mutable.m"
    return parse_tree__prog_mutable__InitPredDeclItem_8;
#line 775 "prog_mutable.m"
  }
#line 544 "prog_mutable.m"
}

#line 539 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__io_set_pred_decl_5_f_0(
#line 539 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 539 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 539 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 539 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 539 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 539 "prog_mutable.m"
{
#line 758 "prog_mutable.m"
  {
#line 758 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDeclItem_12;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDecl_20;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_29_29;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_30_30;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_31_31;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_32_32;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_33_33;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_34_34;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_35_35;
#line 758 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_36_36;
#line 758 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_47_47;

#line 759 "prog_mutable.m"
    {
#line 759 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 760 "prog_mutable.m"
    {
#line 760 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 826 "prog_mutable.m"
    {
#line 826 "prog_mutable.m"
      parse_tree__prog_mutable__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_8);
    }
#line 825 "prog_mutable.m"
    {
#line 825 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_47_47));
#line 825 "prog_mutable.m"
    }
#line 768 "prog_mutable.m"
    {
#line 768 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 768 "prog_mutable.m"
    {
#line 768 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 768 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 768 "prog_mutable.m"
    }
#line 769 "prog_mutable.m"
    {
#line 769 "prog_mutable.m"
      parse_tree__prog_mutable__V_31_31 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 769 "prog_mutable.m"
    {
#line 769 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 769 "prog_mutable.m"
    {
#line 769 "prog_mutable.m"
      parse_tree__prog_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_mutable__V_31_31));
#line 769 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 769 "prog_mutable.m"
    }
#line 770 "prog_mutable.m"
    {
#line 770 "prog_mutable.m"
      parse_tree__prog_mutable__V_35_35 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 770 "prog_mutable.m"
    {
#line 770 "prog_mutable.m"
      parse_tree__prog_mutable__V_36_36 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 770 "prog_mutable.m"
    {
#line 770 "prog_mutable.m"
      parse_tree__prog_mutable__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_mutable__V_35_35));
#line 770 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_34_34, 1) = ((MR_Box) (parse_tree__prog_mutable__V_36_36));
#line 770 "prog_mutable.m"
    }
#line 769 "prog_mutable.m"
    {
#line 769 "prog_mutable.m"
      parse_tree__prog_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_mutable__V_34_34));
#line 769 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "prog_mutable.m"
    }
#line 768 "prog_mutable.m"
    {
#line 768 "prog_mutable.m"
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
#line 768 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_33_33));
#line 768 "prog_mutable.m"
    }
#line 766 "prog_mutable.m"
    {
#line 766 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
#line 766 "prog_mutable.m"
    }
#line 766 "prog_mutable.m"
    {
#line 766 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 0));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 766 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 766 "prog_mutable.m"
    }
#line 773 "prog_mutable.m"
    {
#line 773 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 773 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__SetPredDecl_20));
#line 773 "prog_mutable.m"
    }
#line 758 "prog_mutable.m"
    return parse_tree__prog_mutable__SetPredDeclItem_12;
#line 758 "prog_mutable.m"
  }
#line 539 "prog_mutable.m"
}

#line 533 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__io_get_pred_decl_5_f_0(
#line 533 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 533 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 533 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 533 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 533 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 533 "prog_mutable.m"
{
#line 741 "prog_mutable.m"
  {
#line 741 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDeclItem_12;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDecl_20;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_29_29;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_30_30;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_31_31;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_32_32;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_33_33;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_34_34;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_35_35;
#line 741 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_36_36;
#line 741 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_47_47;

#line 742 "prog_mutable.m"
    {
#line 742 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 743 "prog_mutable.m"
    {
#line 743 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 823 "prog_mutable.m"
    {
#line 823 "prog_mutable.m"
      parse_tree__prog_mutable__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_8);
    }
#line 822 "prog_mutable.m"
    {
#line 822 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_47_47));
#line 822 "prog_mutable.m"
    }
#line 751 "prog_mutable.m"
    {
#line 751 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 751 "prog_mutable.m"
    {
#line 751 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 751 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 751 "prog_mutable.m"
    }
#line 752 "prog_mutable.m"
    {
#line 752 "prog_mutable.m"
      parse_tree__prog_mutable__V_31_31 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 752 "prog_mutable.m"
    {
#line 752 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 752 "prog_mutable.m"
    {
#line 752 "prog_mutable.m"
      parse_tree__prog_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__prog_mutable__V_31_31));
#line 752 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 752 "prog_mutable.m"
    }
#line 753 "prog_mutable.m"
    {
#line 753 "prog_mutable.m"
      parse_tree__prog_mutable__V_35_35 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    }
#line 753 "prog_mutable.m"
    {
#line 753 "prog_mutable.m"
      parse_tree__prog_mutable__V_36_36 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 753 "prog_mutable.m"
    {
#line 753 "prog_mutable.m"
      parse_tree__prog_mutable__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__prog_mutable__V_35_35));
#line 753 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_34_34, 1) = ((MR_Box) (parse_tree__prog_mutable__V_36_36));
#line 753 "prog_mutable.m"
    }
#line 752 "prog_mutable.m"
    {
#line 752 "prog_mutable.m"
      parse_tree__prog_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__prog_mutable__V_34_34));
#line 752 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "prog_mutable.m"
    }
#line 751 "prog_mutable.m"
    {
#line 751 "prog_mutable.m"
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
#line 751 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_33_33));
#line 751 "prog_mutable.m"
    }
#line 749 "prog_mutable.m"
    {
#line 749 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
#line 749 "prog_mutable.m"
    }
#line 749 "prog_mutable.m"
    {
#line 749 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 0));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 749 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 749 "prog_mutable.m"
    }
#line 756 "prog_mutable.m"
    {
#line 756 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 756 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__GetPredDecl_20));
#line 756 "prog_mutable.m"
    }
#line 741 "prog_mutable.m"
    return parse_tree__prog_mutable__GetPredDeclItem_12;
#line 741 "prog_mutable.m"
  }
#line 533 "prog_mutable.m"
}

#line 527 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(
#line 527 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 527 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 527 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 527 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 527 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 527 "prog_mutable.m"
{
#line 726 "prog_mutable.m"
  {
#line 726 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDeclItem_12;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDecl_20;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 726 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 726 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 727 "prog_mutable.m"
    {
#line 727 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 728 "prog_mutable.m"
    {
#line 728 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 829 "prog_mutable.m"
    {
#line 829 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_8);
    }
#line 828 "prog_mutable.m"
    {
#line 828 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 828 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 828 "prog_mutable.m"
    }
#line 736 "prog_mutable.m"
    {
#line 736 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 736 "prog_mutable.m"
    {
#line 736 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 736 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 736 "prog_mutable.m"
    }
#line 734 "prog_mutable.m"
    {
#line 734 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_mutable.m"
    }
#line 734 "prog_mutable.m"
    {
#line 734 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 2));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 734 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 734 "prog_mutable.m"
    }
#line 739 "prog_mutable.m"
    {
#line 739 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 739 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__SetPredDecl_20));
#line 739 "prog_mutable.m"
    }
#line 726 "prog_mutable.m"
    return parse_tree__prog_mutable__SetPredDeclItem_12;
#line 726 "prog_mutable.m"
  }
#line 527 "prog_mutable.m"
}

#line 519 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(
#line 519 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 519 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 519 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 519 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 519 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 519 "prog_mutable.m"
{
#line 710 "prog_mutable.m"
  {
#line 710 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDeclItem_12;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDecl_20;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 710 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 710 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 711 "prog_mutable.m"
    {
#line 711 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 712 "prog_mutable.m"
    {
#line 712 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 823 "prog_mutable.m"
    {
#line 823 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_8);
    }
#line 822 "prog_mutable.m"
    {
#line 822 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 822 "prog_mutable.m"
    }
#line 720 "prog_mutable.m"
    {
#line 720 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 720 "prog_mutable.m"
    {
#line 720 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 720 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 720 "prog_mutable.m"
    }
#line 718 "prog_mutable.m"
    {
#line 718 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_mutable.m"
    }
#line 718 "prog_mutable.m"
    {
#line 718 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 0));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 718 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 718 "prog_mutable.m"
    }
#line 723 "prog_mutable.m"
    {
#line 723 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 723 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__GetPredDecl_20));
#line 723 "prog_mutable.m"
    }
#line 710 "prog_mutable.m"
    return parse_tree__prog_mutable__GetPredDeclItem_12;
#line 710 "prog_mutable.m"
  }
#line 519 "prog_mutable.m"
}

#line 513 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__std_set_pred_decl_5_f_0(
#line 513 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 513 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 513 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 513 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 513 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 513 "prog_mutable.m"
{
#line 694 "prog_mutable.m"
  {
#line 694 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDeclItem_12;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__SetPredDecl_20;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 694 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 694 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 695 "prog_mutable.m"
    {
#line 695 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 696 "prog_mutable.m"
    {
#line 696 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 826 "prog_mutable.m"
    {
#line 826 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_8);
    }
#line 825 "prog_mutable.m"
    {
#line 825 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 825 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 825 "prog_mutable.m"
    }
#line 704 "prog_mutable.m"
    {
#line 704 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 704 "prog_mutable.m"
    {
#line 704 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 704 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 704 "prog_mutable.m"
    }
#line 702 "prog_mutable.m"
    {
#line 702 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_mutable.m"
    }
#line 702 "prog_mutable.m"
    {
#line 702 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 2));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 702 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 702 "prog_mutable.m"
    }
#line 707 "prog_mutable.m"
    {
#line 707 "prog_mutable.m"
      parse_tree__prog_mutable__SetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 707 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__SetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__SetPredDecl_20));
#line 707 "prog_mutable.m"
    }
#line 694 "prog_mutable.m"
    return parse_tree__prog_mutable__SetPredDeclItem_12;
#line 694 "prog_mutable.m"
  }
#line 513 "prog_mutable.m"
}

#line 507 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__std_get_pred_decl_5_f_0(
#line 507 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 507 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 507 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 507 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 507 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 507 "prog_mutable.m"
{
#line 679 "prog_mutable.m"
  {
#line 679 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDeclItem_12;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__GetPredDecl_20;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 679 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 679 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 680 "prog_mutable.m"
    {
#line 680 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 681 "prog_mutable.m"
    {
#line 681 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 823 "prog_mutable.m"
    {
#line 823 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_8);
    }
#line 822 "prog_mutable.m"
    {
#line 822 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 822 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 822 "prog_mutable.m"
    }
#line 689 "prog_mutable.m"
    {
#line 689 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 689 "prog_mutable.m"
    {
#line 689 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 689 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 689 "prog_mutable.m"
    }
#line 687 "prog_mutable.m"
    {
#line 687 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_mutable.m"
    }
#line 687 "prog_mutable.m"
    {
#line 687 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 1));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 687 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 687 "prog_mutable.m"
    }
#line 692 "prog_mutable.m"
    {
#line 692 "prog_mutable.m"
      parse_tree__prog_mutable__GetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 692 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__GetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__GetPredDecl_20));
#line 692 "prog_mutable.m"
    }
#line 679 "prog_mutable.m"
    return parse_tree__prog_mutable__GetPredDeclItem_12;
#line 679 "prog_mutable.m"
  }
#line 507 "prog_mutable.m"
}

#line 502 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__unlock_pred_decl_3_f_0(
#line 502 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_5,
#line 502 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_6,
#line 502 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_7)
#line 502 "prog_mutable.m"
{
#line 662 "prog_mutable.m"
  {
#line 662 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 662 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnlockPredDeclItem_8;
#line 662 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_9;
#line 662 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_10;
#line 662 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnlockPredDecl_16;
#line 662 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_21_21;
#line 662 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_32_32;

#line 663 "prog_mutable.m"
    {
#line 663 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_9 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 664 "prog_mutable.m"
    {
#line 664 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_10 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 814 "prog_mutable.m"
    {
#line 814 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", parse_tree__prog_mutable__Name_6);
    }
#line 813 "prog_mutable.m"
    {
#line 813 "prog_mutable.m"
      parse_tree__prog_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_21_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_5));
#line 813 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 813 "prog_mutable.m"
    }
#line 670 "prog_mutable.m"
    {
#line 670 "prog_mutable.m"
      parse_tree__prog_mutable__UnlockPredDecl_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_9));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_10));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 5) = ((MR_Box) (parse_tree__prog_mutable__V_21_21));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 11) = ((MR_Box) ((MR_Integer) 2));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_7));
#line 670 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnlockPredDecl_16, 14) = ((MR_Box) ((MR_Integer) -1));
#line 670 "prog_mutable.m"
    }
#line 675 "prog_mutable.m"
    {
#line 675 "prog_mutable.m"
      parse_tree__prog_mutable__UnlockPredDeclItem_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnlockPredDeclItem_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 675 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnlockPredDeclItem_8, 1) = ((MR_Box) (parse_tree__prog_mutable__UnlockPredDecl_16));
#line 675 "prog_mutable.m"
    }
#line 662 "prog_mutable.m"
    return parse_tree__prog_mutable__UnlockPredDeclItem_8;
#line 662 "prog_mutable.m"
  }
#line 502 "prog_mutable.m"
}

#line 501 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__lock_pred_decl_3_f_0(
#line 501 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_5,
#line 501 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_6,
#line 501 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_7)
#line 501 "prog_mutable.m"
{
#line 647 "prog_mutable.m"
  {
#line 647 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 647 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__LockPredDeclItem_8;
#line 647 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_9;
#line 647 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_10;
#line 647 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__LockPredDecl_16;
#line 647 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_21_21;
#line 647 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_32_32;

#line 648 "prog_mutable.m"
    {
#line 648 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_9 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 649 "prog_mutable.m"
    {
#line 649 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_10 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 811 "prog_mutable.m"
    {
#line 811 "prog_mutable.m"
      parse_tree__prog_mutable__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", parse_tree__prog_mutable__Name_6);
    }
#line 810 "prog_mutable.m"
    {
#line 810 "prog_mutable.m"
      parse_tree__prog_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_21_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_5));
#line 810 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_32_32));
#line 810 "prog_mutable.m"
    }
#line 655 "prog_mutable.m"
    {
#line 655 "prog_mutable.m"
      parse_tree__prog_mutable__LockPredDecl_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_9));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_10));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 5) = ((MR_Box) (parse_tree__prog_mutable__V_21_21));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 11) = ((MR_Box) ((MR_Integer) 2));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_7));
#line 655 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__LockPredDecl_16, 14) = ((MR_Box) ((MR_Integer) -1));
#line 655 "prog_mutable.m"
    }
#line 660 "prog_mutable.m"
    {
#line 660 "prog_mutable.m"
      parse_tree__prog_mutable__LockPredDeclItem_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__LockPredDeclItem_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 660 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__LockPredDeclItem_8, 1) = ((MR_Box) (parse_tree__prog_mutable__LockPredDecl_16));
#line 660 "prog_mutable.m"
    }
#line 647 "prog_mutable.m"
    return parse_tree__prog_mutable__LockPredDeclItem_8;
#line 647 "prog_mutable.m"
  }
#line 501 "prog_mutable.m"
}

#line 499 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__unsafe_set_pred_decl_5_f_0(
#line 499 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 499 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 499 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 499 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 499 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 499 "prog_mutable.m"
{
#line 631 "prog_mutable.m"
  {
#line 631 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnsafeSetPredDeclItem_12;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnsafeSetPredDecl_20;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 631 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 631 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 632 "prog_mutable.m"
    {
#line 632 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 633 "prog_mutable.m"
    {
#line 633 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 820 "prog_mutable.m"
    {
#line 820 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", parse_tree__prog_mutable__Name_8);
    }
#line 819 "prog_mutable.m"
    {
#line 819 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 819 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 819 "prog_mutable.m"
    }
#line 642 "prog_mutable.m"
    {
#line 642 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 642 "prog_mutable.m"
    {
#line 642 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 642 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 642 "prog_mutable.m"
    }
#line 639 "prog_mutable.m"
    {
#line 639 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_mutable.m"
    }
#line 639 "prog_mutable.m"
    {
#line 639 "prog_mutable.m"
      parse_tree__prog_mutable__UnsafeSetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 2));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 639 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeSetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 639 "prog_mutable.m"
    }
#line 645 "prog_mutable.m"
    {
#line 645 "prog_mutable.m"
      parse_tree__prog_mutable__UnsafeSetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnsafeSetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 645 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnsafeSetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__UnsafeSetPredDecl_20));
#line 645 "prog_mutable.m"
    }
#line 631 "prog_mutable.m"
    return parse_tree__prog_mutable__UnsafeSetPredDeclItem_12;
#line 631 "prog_mutable.m"
  }
#line 499 "prog_mutable.m"
}

#line 497 "prog_mutable.m"
MR_Word MR_CALL 
parse_tree__prog_mutable__unsafe_get_pred_decl_5_f_0(
#line 497 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__ModuleName_7,
#line 497 "prog_mutable.m"
  MR_String parse_tree__prog_mutable__Name_8,
#line 497 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Type_9,
#line 497 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Inst_10,
#line 497 "prog_mutable.m"
  MR_Word parse_tree__prog_mutable__Context_11)
#line 497 "prog_mutable.m"
{
#line 614 "prog_mutable.m"
  {
#line 614 "prog_mutable.m"
    MR_bool parse_tree__prog_mutable__succeeded;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnsafeGetPredDeclItem_12;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__VarSet_13;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__InstVarSet_14;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__UnsafeGetPredDecl_20;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_25_25;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_26_26;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_27_27;
#line 614 "prog_mutable.m"
    MR_Word parse_tree__prog_mutable__V_28_28;
#line 614 "prog_mutable.m"
    MR_String parse_tree__prog_mutable__V_39_39;

#line 615 "prog_mutable.m"
    {
#line 615 "prog_mutable.m"
      parse_tree__prog_mutable__VarSet_13 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 616 "prog_mutable.m"
    {
#line 616 "prog_mutable.m"
      parse_tree__prog_mutable__InstVarSet_14 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 817 "prog_mutable.m"
    {
#line 817 "prog_mutable.m"
      parse_tree__prog_mutable__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", parse_tree__prog_mutable__Name_8);
    }
#line 816 "prog_mutable.m"
    {
#line 816 "prog_mutable.m"
      parse_tree__prog_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_7));
#line 816 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_25_25, 1) = ((MR_Box) (parse_tree__prog_mutable__V_39_39));
#line 816 "prog_mutable.m"
    }
#line 625 "prog_mutable.m"
    {
#line 625 "prog_mutable.m"
      parse_tree__prog_mutable__V_28_28 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_10);
    }
#line 625 "prog_mutable.m"
    {
#line 625 "prog_mutable.m"
      parse_tree__prog_mutable__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_9));
#line 625 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_27_27, 1) = ((MR_Box) (parse_tree__prog_mutable__V_28_28));
#line 625 "prog_mutable.m"
    }
#line 622 "prog_mutable.m"
    {
#line 622 "prog_mutable.m"
      parse_tree__prog_mutable__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 0) = ((MR_Box) (parse_tree__prog_mutable__V_27_27));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_mutable.m"
    }
#line 622 "prog_mutable.m"
    {
#line 622 "prog_mutable.m"
      parse_tree__prog_mutable__UnsafeGetPredDecl_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 1) = ((MR_Box) (parse_tree__prog_mutable__VarSet_13));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 2) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_14));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 4) = ((MR_Box) ((MR_Integer) 0));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 5) = ((MR_Box) (parse_tree__prog_mutable__V_25_25));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 6) = ((MR_Box) (parse_tree__prog_mutable__V_26_26));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 9) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[1])));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 11) = ((MR_Box) ((MR_Integer) 1));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 12) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0]));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 13) = ((MR_Box) (parse_tree__prog_mutable__Context_11));
#line 622 "prog_mutable.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__UnsafeGetPredDecl_20, 14) = ((MR_Box) ((MR_Integer) -1));
#line 622 "prog_mutable.m"
    }
#line 628 "prog_mutable.m"
    {
#line 628 "prog_mutable.m"
      parse_tree__prog_mutable__UnsafeGetPredDeclItem_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnsafeGetPredDeclItem_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 628 "prog_mutable.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_mutable__UnsafeGetPredDeclItem_12, 1) = ((MR_Box) (parse_tree__prog_mutable__UnsafeGetPredDecl_20));
#line 628 "prog_mutable.m"
    }
#line 614 "prog_mutable.m"
    return parse_tree__prog_mutable__UnsafeGetPredDeclItem_12;
#line 614 "prog_mutable.m"
  }
#line 497 "prog_mutable.m"
}

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
}

void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_mutable. */
