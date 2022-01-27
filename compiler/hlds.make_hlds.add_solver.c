/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module hlds.make_hlds.add_solver. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_solver__init
ENDINIT
*/

#include "hlds.make_hlds.add_solver.mih"


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
#include "require.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 172 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 172 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 172 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 167 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 167 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 167 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 162 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 162 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 162 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 157 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 157 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 157 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);


static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[2][1];




static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 172 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 172 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 172 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 172 "add_solver.m"
{
#line 174 "add_solver.m"
  {
#line 174 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 174 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 179 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 181 "add_solver.m"
      {
#line 181 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 181 "add_solver.m"
        {
#line 181 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 181 "add_solver.m"
        }
#line 181 "add_solver.m"
      }
#line 179 "add_solver.m"
    else
#line 179 "add_solver.m"
      {
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 179 "add_solver.m"
        {
#line 179 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 179 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 179 "add_solver.m"
        }
#line 179 "add_solver.m"
      }
#line 174 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 174 "add_solver.m"
  }
#line 172 "add_solver.m"
}

#line 167 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 167 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 167 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 167 "add_solver.m"
{
#line 169 "add_solver.m"
  {
#line 169 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 169 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 179 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 181 "add_solver.m"
      {
#line 181 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 181 "add_solver.m"
        {
#line 181 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 181 "add_solver.m"
        }
#line 181 "add_solver.m"
      }
#line 179 "add_solver.m"
    else
#line 179 "add_solver.m"
      {
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 179 "add_solver.m"
        {
#line 179 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 179 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 179 "add_solver.m"
        }
#line 179 "add_solver.m"
      }
#line 169 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 169 "add_solver.m"
  }
#line 167 "add_solver.m"
}

#line 162 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 162 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 162 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 162 "add_solver.m"
{
#line 164 "add_solver.m"
  {
#line 164 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 164 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 179 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 181 "add_solver.m"
      {
#line 181 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 181 "add_solver.m"
        {
#line 181 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 181 "add_solver.m"
        }
#line 181 "add_solver.m"
      }
#line 179 "add_solver.m"
    else
#line 179 "add_solver.m"
      {
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 179 "add_solver.m"
        {
#line 179 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 179 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 179 "add_solver.m"
        }
#line 179 "add_solver.m"
      }
#line 164 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 164 "add_solver.m"
  }
#line 162 "add_solver.m"
}

#line 157 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 157 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 157 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 157 "add_solver.m"
{
#line 159 "add_solver.m"
  {
#line 159 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 179 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 181 "add_solver.m"
      {
#line 181 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 181 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 182 "add_solver.m"
        {
#line 182 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 181 "add_solver.m"
        {
#line 181 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 181 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 181 "add_solver.m"
        }
#line 181 "add_solver.m"
      }
#line 179 "add_solver.m"
    else
#line 179 "add_solver.m"
      {
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 179 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 180 "add_solver.m"
        {
#line 180 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 179 "add_solver.m"
        {
#line 179 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 179 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 179 "add_solver.m"
        }
#line 179 "add_solver.m"
      }
#line 159 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 159 "add_solver.m"
  }
#line 157 "add_solver.m"
}

#line 49 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_clause_items_12_p_0(
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeSymName_13,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeParams_14,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_15,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Context_16,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_69,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Status_70,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_71,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_72,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_73,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_74,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_75,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_76)
#line 49 "add_solver.m"
{
#line 185 "add_solver.m"
  {
#line 185 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeCtorInfo_164_164;
#line 185 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_21;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_22;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_23;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_24;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_25;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_26;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_27;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet0_28;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__X_29;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet1_30;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Y_31;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet_32;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_33;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Globals_34;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Target_35;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Lang_36;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Attrs_39;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Impl_40;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_41;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTGPragmaVar_42;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTGPragmaVar_43;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgs_44;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnForeignProc_45;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnItem_47;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_48;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTAPragmaVar_49;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTAPragmaVar_50;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgs_51;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnForeignProc_52;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnItem_54;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_55;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFGPragmaVar_56;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFGPragmaVar_57;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgs_58;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnForeignProc_59;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnItem_61;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_62;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFAPragmaVar_63;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFAPragmaVar_64;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgs_65;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnForeignProc_66;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnItem_68;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_78_78;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_80_80;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_82_82;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_84_84;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_92_92;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_96_96;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_98_98;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_100_100;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Status_103_103;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_104_104;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_105_105;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_106_106;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_108_108;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_112_112;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_114_114;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Status_119_119;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_120_120;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_121_121;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_122_122;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_126_126;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_128_128;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_130_130;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Status_135_135;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_136_136;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_137_137;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_138_138;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_142_142;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_144_144;
#line 185 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_146_146;
#line 188 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_155_155;
#line 188 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_156_156;
#line 188 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_158_158;

#line 186 "add_solver.m"
    {
#line 186 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_21 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0], hlds__make_hlds__add_solver__TypeParams_14);
    }
#line 188 "add_solver.m"
    hlds__make_hlds__add_solver__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 0)));
#line 188 "add_solver.m"
    hlds__make_hlds__add_solver__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 1)));
#line 188 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 2)));
#line 188 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 3)));
#line 188 "add_solver.m"
    hlds__make_hlds__add_solver__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 4)));
#line 191 "add_solver.m"
    {
#line 191 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_22);
    }
#line 192 "add_solver.m"
    {
#line 192 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_25 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_23);
    }
#line 194 "add_solver.m"
    {
#line 194 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_22);
    }
#line 195 "add_solver.m"
    {
#line 195 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_27 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_23);
    }
#line 915 "hlds.make_hlds.add_solver.c"
    hlds__make_hlds__add_solver__TypeCtorInfo_164_164 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 197 "add_solver.m"
    {
#line 197 "add_solver.m"
      hlds__make_hlds__add_solver__ProgVarSet0_28 = mercury__varset__init_0_f_0(hlds__make_hlds__add_solver__TypeCtorInfo_164_164);
    }
#line 198 "add_solver.m"
    {
#line 198 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_164_164, &hlds__make_hlds__add_solver__X_29, hlds__make_hlds__add_solver__ProgVarSet0_28, &hlds__make_hlds__add_solver__ProgVarSet1_30);
    }
#line 199 "add_solver.m"
    {
#line 199 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_164_164, &hlds__make_hlds__add_solver__Y_31, hlds__make_hlds__add_solver__ProgVarSet1_30, &hlds__make_hlds__add_solver__ProgVarSet_32);
    }
#line 201 "add_solver.m"
    {
#line 201 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_33 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 203 "add_solver.m"
    {
#line 203 "add_solver.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_solver__Globals_34);
    }
#line 204 "add_solver.m"
    {
#line 204 "add_solver.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_solver__Globals_34, &hlds__make_hlds__add_solver__Target_35);
    }
#line 208 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Target_35 == (MR_Integer) 0))
#line 207 "add_solver.m"
      hlds__make_hlds__add_solver__Lang_36 = (MR_Integer) 0;
#line 208 "add_solver.m"
    else
#line 208 "add_solver.m"
      if ((hlds__make_hlds__add_solver__Target_35 == (MR_Integer) 2))
#line 210 "add_solver.m"
        hlds__make_hlds__add_solver__Lang_36 = (MR_Integer) 1;
#line 208 "add_solver.m"
      else
#line 208 "add_solver.m"
        if ((hlds__make_hlds__add_solver__Target_35 == (MR_Integer) 5))
#line 216 "add_solver.m"
          hlds__make_hlds__add_solver__Lang_36 = (MR_Integer) 4;
#line 208 "add_solver.m"
        else
#line 208 "add_solver.m"
          if ((hlds__make_hlds__add_solver__Target_35 == (MR_Integer) 3))
#line 213 "add_solver.m"
            hlds__make_hlds__add_solver__Lang_36 = (MR_Integer) 2;
#line 208 "add_solver.m"
          else
#line 220 "add_solver.m"
            {
#line 222 "add_solver.m"
              {
#line 222 "add_solver.m"
                mercury__require__sorry_2_p_0((MR_String) "hlds.make_hlds.add_solver", (MR_String) "solver type conversion functions for this backend");
#line 222 "add_solver.m"
                return;
              }
#line 220 "add_solver.m"
            }
#line 225 "add_solver.m"
    {
#line 225 "add_solver.m"
      hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_78_78 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_solver__Lang_36);
    }
#line 228 "add_solver.m"
    {
#line 228 "add_solver.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_78_78, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_80_80);
    }
#line 229 "add_solver.m"
    {
#line 229 "add_solver.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_80_80, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_82_82);
    }
#line 230 "add_solver.m"
    {
#line 230 "add_solver.m"
      parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_82_82, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_84_84);
    }
#line 231 "add_solver.m"
    {
#line 231 "add_solver.m"
      parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_84_84, &hlds__make_hlds__add_solver__Attrs_39);
    }
#line 241 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Lang_36 == (MR_Integer) 4))
#line 242 "add_solver.m"
      {
#line 242 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_88_88;

#line 243 "add_solver.m"
        {
#line 243 "add_solver.m"
          hlds__make_hlds__add_solver__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 243 "add_solver.m"
        }
#line 243 "add_solver.m"
        {
#line 243 "add_solver.m"
          hlds__make_hlds__add_solver__Impl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_40, 0) = ((MR_Box) ((MR_String) "Y = X"));
#line 243 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_40, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_88_88));
#line 243 "add_solver.m"
        }
#line 242 "add_solver.m"
      }
#line 241 "add_solver.m"
    else
#line 239 "add_solver.m"
      {
#line 239 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_90_90;

#line 240 "add_solver.m"
        {
#line 240 "add_solver.m"
          hlds__make_hlds__add_solver__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 240 "add_solver.m"
        }
#line 240 "add_solver.m"
        {
#line 240 "add_solver.m"
          hlds__make_hlds__add_solver__Impl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_40, 0) = ((MR_Box) ((MR_String) "Y = X;"));
#line 240 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_40, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_90_90));
#line 240 "add_solver.m"
        }
#line 239 "add_solver.m"
      }
#line 248 "add_solver.m"
    {
#line 248 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_41 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_21);
    }
#line 249 "add_solver.m"
    {
#line 249 "add_solver.m"
      hlds__make_hlds__add_solver__V_92_92 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 249 "add_solver.m"
    {
#line 249 "add_solver.m"
      hlds__make_hlds__add_solver__XTGPragmaVar_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 249 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_29));
#line 249 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_42, 1) = ((MR_Box) ((MR_String) "X"));
#line 249 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_42, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_92_92));
#line 249 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_42, 3) = ((MR_Box) ((MR_Integer) 0));
#line 249 "add_solver.m"
    }
#line 250 "add_solver.m"
    {
#line 250 "add_solver.m"
      hlds__make_hlds__add_solver__YTGPragmaVar_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 250 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_31));
#line 250 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_43, 1) = ((MR_Box) ((MR_String) "Y"));
#line 250 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_43, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_27));
#line 250 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 250 "add_solver.m"
    }
#line 251 "add_solver.m"
    {
#line 251 "add_solver.m"
      hlds__make_hlds__add_solver__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTGPragmaVar_43));
#line 251 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "add_solver.m"
    }
#line 251 "add_solver.m"
    {
#line 251 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_44, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTGPragmaVar_42));
#line 251 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_44, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_96_96));
#line 251 "add_solver.m"
    }
#line 252 "add_solver.m"
    {
#line 252 "add_solver.m"
      hlds__make_hlds__add_solver__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_39));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnSymName_41));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 2) = ((MR_Box) ((MR_Integer) 1));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnArgs_44));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_32));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_33));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_98_98, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_40));
#line 252 "add_solver.m"
    }
#line 252 "add_solver.m"
    {
#line 252 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnForeignProc_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_solver.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_solver__ToGroundRepnForeignProc_45, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_98_98));
#line 252 "add_solver.m"
    }
#line 263 "add_solver.m"
    hlds__make_hlds__add_solver__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[1]);
#line 263 "add_solver.m"
    {
#line 263 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnForeignProc_45));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46, 3) = ((MR_Box) ((MR_Integer) -1));
#line 263 "add_solver.m"
    }
#line 265 "add_solver.m"
    {
#line 265 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnItem_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundRepnItem_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 265 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundRepnItem_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnItemPragma_46));
#line 265 "add_solver.m"
    }
#line 266 "add_solver.m"
    {
#line 266 "add_solver.m"
      hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(hlds__make_hlds__add_solver__ToGroundRepnItem_47, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_69, &hlds__make_hlds__add_solver__STATE_VARIABLE_Status_103_103, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_71, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_73, &hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_105_105, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_75, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_106_106);
    }
#line 271 "add_solver.m"
    {
#line 271 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_48 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_21);
    }
#line 272 "add_solver.m"
    {
#line 272 "add_solver.m"
      hlds__make_hlds__add_solver__V_108_108 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 272 "add_solver.m"
    {
#line 272 "add_solver.m"
      hlds__make_hlds__add_solver__XTAPragmaVar_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_49, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_29));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_49, 1) = ((MR_Box) ((MR_String) "X"));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_49, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_108_108));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_49, 3) = ((MR_Box) ((MR_Integer) 0));
#line 272 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_solver__YTAPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_50, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_31));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_50, 1) = ((MR_Box) ((MR_String) "Y"));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_50, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_26));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_50, 3) = ((MR_Box) ((MR_Integer) 0));
#line 273 "add_solver.m"
    }
#line 274 "add_solver.m"
    {
#line 274 "add_solver.m"
      hlds__make_hlds__add_solver__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTAPragmaVar_50));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "add_solver.m"
    }
#line 274 "add_solver.m"
    {
#line 274 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgs_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_51, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTAPragmaVar_49));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_51, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_112_112));
#line 274 "add_solver.m"
    }
#line 275 "add_solver.m"
    {
#line 275 "add_solver.m"
      hlds__make_hlds__add_solver__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_39));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnSymName_48));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 2) = ((MR_Box) ((MR_Integer) 1));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnArgs_51));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_32));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_33));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_114_114, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_40));
#line 275 "add_solver.m"
    }
#line 275 "add_solver.m"
    {
#line 275 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnForeignProc_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "add_solver.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_solver__ToAnyRepnForeignProc_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_114_114));
#line 275 "add_solver.m"
    }
#line 286 "add_solver.m"
    {
#line 286 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 286 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 286 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnForeignProc_52));
#line 286 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 286 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53, 3) = ((MR_Box) ((MR_Integer) -1));
#line 286 "add_solver.m"
    }
#line 288 "add_solver.m"
    {
#line 288 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnItem_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyRepnItem_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 288 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyRepnItem_54, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnItemPragma_53));
#line 288 "add_solver.m"
    }
#line 289 "add_solver.m"
    {
#line 289 "add_solver.m"
      hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(hlds__make_hlds__add_solver__ToAnyRepnItem_54, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_103_103, &hlds__make_hlds__add_solver__STATE_VARIABLE_Status_119_119, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_104_104, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_120_120, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_105_105, &hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_121_121, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_106_106, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_122_122);
    }
#line 294 "add_solver.m"
    {
#line 294 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_55 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_21);
    }
#line 295 "add_solver.m"
    {
#line 295 "add_solver.m"
      hlds__make_hlds__add_solver__XFGPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 295 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_29));
#line 295 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_56, 1) = ((MR_Box) ((MR_String) "X"));
#line 295 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_56, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_25));
#line 295 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 295 "add_solver.m"
    }
#line 296 "add_solver.m"
    {
#line 296 "add_solver.m"
      hlds__make_hlds__add_solver__V_126_126 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 296 "add_solver.m"
    {
#line 296 "add_solver.m"
      hlds__make_hlds__add_solver__YFGPragmaVar_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_31));
#line 296 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_57, 1) = ((MR_Box) ((MR_String) "Y"));
#line 296 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_57, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_126_126));
#line 296 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_57, 3) = ((MR_Box) ((MR_Integer) 0));
#line 296 "add_solver.m"
    }
#line 297 "add_solver.m"
    {
#line 297 "add_solver.m"
      hlds__make_hlds__add_solver__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFGPragmaVar_57));
#line 297 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "add_solver.m"
    }
#line 297 "add_solver.m"
    {
#line 297 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFGPragmaVar_56));
#line 297 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_58, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_128_128));
#line 297 "add_solver.m"
    }
#line 298 "add_solver.m"
    {
#line 298 "add_solver.m"
      hlds__make_hlds__add_solver__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_39));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnSymName_55));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 2) = ((MR_Box) ((MR_Integer) 1));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnArgs_58));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_32));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_33));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_130_130, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_40));
#line 298 "add_solver.m"
    }
#line 298 "add_solver.m"
    {
#line 298 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnForeignProc_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_solver.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_solver__FromGroundRepnForeignProc_59, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_130_130));
#line 298 "add_solver.m"
    }
#line 309 "add_solver.m"
    {
#line 309 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnForeignProc_59));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60, 3) = ((MR_Box) ((MR_Integer) -1));
#line 309 "add_solver.m"
    }
#line 311 "add_solver.m"
    {
#line 311 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundRepnItem_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 311 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundRepnItem_61, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnItemPragma_60));
#line 311 "add_solver.m"
    }
#line 312 "add_solver.m"
    {
#line 312 "add_solver.m"
      hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(hlds__make_hlds__add_solver__FromGroundRepnItem_61, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_119_119, &hlds__make_hlds__add_solver__STATE_VARIABLE_Status_135_135, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_120_120, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_121_121, &hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_122_122, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_138_138);
    }
#line 317 "add_solver.m"
    {
#line 317 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_62 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_21);
    }
#line 318 "add_solver.m"
    {
#line 318 "add_solver.m"
      hlds__make_hlds__add_solver__XFAPragmaVar_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 318 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_63, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_29));
#line 318 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_63, 1) = ((MR_Box) ((MR_String) "X"));
#line 318 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_63, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_24));
#line 318 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_63, 3) = ((MR_Box) ((MR_Integer) 0));
#line 318 "add_solver.m"
    }
#line 319 "add_solver.m"
    {
#line 319 "add_solver.m"
      hlds__make_hlds__add_solver__V_142_142 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 319 "add_solver.m"
    {
#line 319 "add_solver.m"
      hlds__make_hlds__add_solver__YFAPragmaVar_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_64, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_31));
#line 319 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_64, 1) = ((MR_Box) ((MR_String) "Y"));
#line 319 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_64, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_142_142));
#line 319 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_64, 3) = ((MR_Box) ((MR_Integer) 0));
#line 319 "add_solver.m"
    }
#line 320 "add_solver.m"
    {
#line 320 "add_solver.m"
      hlds__make_hlds__add_solver__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFAPragmaVar_64));
#line 320 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "add_solver.m"
    }
#line 320 "add_solver.m"
    {
#line 320 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgs_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_65, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFAPragmaVar_63));
#line 320 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_65, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_144_144));
#line 320 "add_solver.m"
    }
#line 321 "add_solver.m"
    {
#line 321 "add_solver.m"
      hlds__make_hlds__add_solver__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_39));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnSymName_62));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 2) = ((MR_Box) ((MR_Integer) 1));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnArgs_65));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_32));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_33));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__V_146_146, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_40));
#line 321 "add_solver.m"
    }
#line 321 "add_solver.m"
    {
#line 321 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnForeignProc_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "add_solver.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_solver__FromAnyRepnForeignProc_66, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_146_146));
#line 321 "add_solver.m"
    }
#line 332 "add_solver.m"
    {
#line 332 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 332 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnForeignProc_66));
#line 332 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 332 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67, 3) = ((MR_Box) ((MR_Integer) -1));
#line 332 "add_solver.m"
    }
#line 334 "add_solver.m"
    {
#line 334 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnItem_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyRepnItem_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 334 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyRepnItem_68, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnItemPragma_67));
#line 334 "add_solver.m"
    }
#line 335 "add_solver.m"
    {
#line 335 "add_solver.m"
      hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_p_0(hlds__make_hlds__add_solver__FromAnyRepnItem_68, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_135_135, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_70, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_72, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_74, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_138_138, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_76);
#line 335 "add_solver.m"
      return;
    }
#line 185 "add_solver.m"
  }
#line 49 "add_solver.m"
}

#line 44 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_decl_items_11_p_0(
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TVarSet_12,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeSymName_13,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeParams_14,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_15,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Context_16,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45,
#line 44 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Status_46,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_47,
#line 44 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_48,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_49,
#line 44 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_50)
#line 44 "add_solver.m"
{
#line 74 "add_solver.m"
  {
#line 74 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeInfo_121_121 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0];
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Args_20;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverType_21;
#line 74 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_22;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__RepnType_23;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_24;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_25;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_26;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_27;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_28;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_29;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_30;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ExistQTVars_31;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__NoMarkers_32;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_33;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgTypes_34;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_36;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_39;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgTypes_40;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_42;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_51_51;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_53_53;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_54_54;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_55_55;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_56_56;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_59_59;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_61_61;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_67_67;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_68_68;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_69_69;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_70_70;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_76_76;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_77_77;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_81_81;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_82_82;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_83_83;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_84_84;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_95_95;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_96_96;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_97_97;
#line 74 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_98_98;
#line 83 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_109_109;
#line 83 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_112_112;
#line 108 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_35_35;
#line 121 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_38_38;
#line 134 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_41_41;
#line 147 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_44_44;

#line 79 "add_solver.m"
    {
#line 79 "add_solver.m"
      hlds__make_hlds__add_solver__V_51_51 = mercury__map__init_0_f_0(hlds__make_hlds__add_solver__TypeInfo_121_121, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 79 "add_solver.m"
    {
#line 79 "add_solver.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_solver__V_51_51, hlds__make_hlds__add_solver__TypeParams_14, &hlds__make_hlds__add_solver__Args_20);
    }
#line 80 "add_solver.m"
    {
#line 80 "add_solver.m"
      hlds__make_hlds__add_solver__SolverType_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 80 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 0) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 80 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Args_20));
#line 80 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "add_solver.m"
    }
#line 81 "add_solver.m"
    {
#line 81 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_22 = mercury__list__length_1_f_0(hlds__make_hlds__add_solver__TypeInfo_121_121, hlds__make_hlds__add_solver__TypeParams_14);
    }
#line 83 "add_solver.m"
    hlds__make_hlds__add_solver__RepnType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 0)));
#line 83 "add_solver.m"
    hlds__make_hlds__add_solver__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 1)));
#line 83 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 2)));
#line 83 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 3)));
#line 83 "add_solver.m"
    hlds__make_hlds__add_solver__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 4)));
#line 87 "add_solver.m"
    {
#line 87 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_24);
    }
#line 88 "add_solver.m"
    {
#line 88 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_27 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_25);
    }
#line 90 "add_solver.m"
    {
#line 90 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_24);
    }
#line 91 "add_solver.m"
    {
#line 91 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_29 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_25);
    }
#line 93 "add_solver.m"
    {
#line 93 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 94 "add_solver.m"
    hlds__make_hlds__add_solver__ExistQTVars_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 96 "add_solver.m"
    {
#line 96 "add_solver.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_solver__NoMarkers_32);
    }
#line 104 "add_solver.m"
    {
#line 104 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_33 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_22);
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__V_54_54 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_54_54));
#line 106 "add_solver.m"
    }
#line 107 "add_solver.m"
    {
#line 107 "add_solver.m"
      hlds__make_hlds__add_solver__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_29));
#line 107 "add_solver.m"
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_56_56));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_solver.m"
    }
#line 105 "add_solver.m"
    {
#line 105 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_34, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_53_53));
#line 105 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_34, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_55_55));
#line 105 "add_solver.m"
    }
#line 108 "add_solver.m"
    hlds__make_hlds__add_solver__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]);
#line 108 "add_solver.m"
    hlds__make_hlds__add_solver__V_61_61 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1];
#line 108 "add_solver.m"
    {
#line 108 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, (MR_Integer) 1, hlds__make_hlds__add_solver__ToGroundRepnSymName_33, hlds__make_hlds__add_solver__ToGroundRepnArgTypes_34, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_32, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45, &hlds__make_hlds__add_solver__V_35_35, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_47, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_49, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63);
    }
#line 117 "add_solver.m"
    {
#line 117 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_36 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_22);
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__V_68_68 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_68_68));
#line 119 "add_solver.m"
    }
#line 120 "add_solver.m"
    {
#line 120 "add_solver.m"
      hlds__make_hlds__add_solver__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_28));
#line 120 "add_solver.m"
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_70_70));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "add_solver.m"
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_67_67));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_69_69));
#line 118 "add_solver.m"
    }
#line 121 "add_solver.m"
    {
#line 121 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, (MR_Integer) 1, hlds__make_hlds__add_solver__ToAnyRepnSymName_36, hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_32, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45, &hlds__make_hlds__add_solver__V_38_38, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_77_77);
    }
#line 130 "add_solver.m"
    {
#line 130 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_39 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_22);
    }
#line 132 "add_solver.m"
    {
#line 132 "add_solver.m"
      hlds__make_hlds__add_solver__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_27));
#line 132 "add_solver.m"
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_84_84 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_84_84));
#line 133 "add_solver.m"
    }
#line 132 "add_solver.m"
    {
#line 132 "add_solver.m"
      hlds__make_hlds__add_solver__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_83_83));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "add_solver.m"
    }
#line 131 "add_solver.m"
    {
#line 131 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_40, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_81_81));
#line 131 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_40, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_82_82));
#line 131 "add_solver.m"
    }
#line 134 "add_solver.m"
    {
#line 134 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, (MR_Integer) 1, hlds__make_hlds__add_solver__FromGroundRepnSymName_39, hlds__make_hlds__add_solver__FromGroundRepnArgTypes_40, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_32, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45, &hlds__make_hlds__add_solver__V_41_41, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_76_76, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_77_77, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91);
    }
#line 143 "add_solver.m"
    {
#line 143 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_42 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_22);
    }
#line 145 "add_solver.m"
    {
#line 145 "add_solver.m"
      hlds__make_hlds__add_solver__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
#line 145 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_26));
#line 145 "add_solver.m"
    }
#line 146 "add_solver.m"
    {
#line 146 "add_solver.m"
      hlds__make_hlds__add_solver__V_98_98 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 146 "add_solver.m"
    {
#line 146 "add_solver.m"
      hlds__make_hlds__add_solver__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
#line 146 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_98_98));
#line 146 "add_solver.m"
    }
#line 145 "add_solver.m"
    {
#line 145 "add_solver.m"
      hlds__make_hlds__add_solver__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_97_97));
#line 145 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "add_solver.m"
    }
#line 144 "add_solver.m"
    {
#line 144 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_95_95));
#line 144 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_96_96));
#line 144 "add_solver.m"
    }
#line 147 "add_solver.m"
    {
#line 147 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, (MR_Integer) 1, hlds__make_hlds__add_solver__FromAnyRepnSymName_42, hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_32, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45, &hlds__make_hlds__add_solver__V_44_44, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_50);
    }
#line 147 "add_solver.m"
    *hlds__make_hlds__add_solver__STATE_VARIABLE_Status_46 = hlds__make_hlds__add_solver__STATE_VARIABLE_Status_0_45;
#line 74 "add_solver.m"
  }
#line 44 "add_solver.m"
}

void mercury__hlds__make_hlds__add_solver__init(void)
{
}

void mercury__hlds__make_hlds__add_solver__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_solver__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_solver. */
