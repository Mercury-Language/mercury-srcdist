/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "mdbcomp.sym_name.mih"
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
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 314 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 314 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 314 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 309 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 309 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 309 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 304 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 304 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 304 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 299 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 299 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 299 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);


static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1];




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

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
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



#line 314 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 314 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 314 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 314 "add_solver.m"
{
#line 316 "add_solver.m"
  {
#line 316 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 316 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 321 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 323 "add_solver.m"
      {
#line 323 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 324 "add_solver.m"
        }
#line 323 "add_solver.m"
      }
#line 321 "add_solver.m"
    else
#line 321 "add_solver.m"
      {
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 322 "add_solver.m"
        }
#line 321 "add_solver.m"
      }
#line 316 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 316 "add_solver.m"
  }
#line 314 "add_solver.m"
}

#line 309 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 309 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 309 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 309 "add_solver.m"
{
#line 311 "add_solver.m"
  {
#line 311 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 311 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 321 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 323 "add_solver.m"
      {
#line 323 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 324 "add_solver.m"
        }
#line 323 "add_solver.m"
      }
#line 321 "add_solver.m"
    else
#line 321 "add_solver.m"
      {
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 322 "add_solver.m"
        }
#line 321 "add_solver.m"
      }
#line 311 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 311 "add_solver.m"
  }
#line 309 "add_solver.m"
}

#line 304 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 304 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 304 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 304 "add_solver.m"
{
#line 306 "add_solver.m"
  {
#line 306 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 306 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 321 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 323 "add_solver.m"
      {
#line 323 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 324 "add_solver.m"
        }
#line 323 "add_solver.m"
      }
#line 321 "add_solver.m"
    else
#line 321 "add_solver.m"
      {
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 322 "add_solver.m"
        }
#line 321 "add_solver.m"
      }
#line 306 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 306 "add_solver.m"
  }
#line 304 "add_solver.m"
}

#line 299 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 299 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 299 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 299 "add_solver.m"
{
#line 301 "add_solver.m"
  {
#line 301 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 301 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 321 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 323 "add_solver.m"
      {
#line 323 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 323 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 324 "add_solver.m"
        {
#line 324 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 324 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 324 "add_solver.m"
        }
#line 323 "add_solver.m"
      }
#line 321 "add_solver.m"
    else
#line 321 "add_solver.m"
      {
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 321 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 322 "add_solver.m"
        {
#line 322 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 322 "add_solver.m"
        }
#line 321 "add_solver.m"
      }
#line 301 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 301 "add_solver.m"
  }
#line 299 "add_solver.m"
}

#line 50 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_11_p_0(
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeSymName_12,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeParams_13,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_14,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Context_15,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Status_16,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_60,
#line 50 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_61,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_62,
#line 50 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_63,
#line 50 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_64,
#line 50 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_65)
#line 50 "add_solver.m"
{
#line 163 "add_solver.m"
  {
#line 163 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeCtorInfo_133_133;
#line 163 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_20;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_21;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_22;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_23;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_24;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_25;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_26;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet0_27;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__X_28;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet1_29;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Y_30;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet_31;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_32;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Globals_33;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Target_34;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Lang_35;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Attrs_38;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Impl_39;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_40;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTGPragmaVar_41;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTGPragmaVar_42;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgs_43;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_45;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTAPragmaVar_46;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTAPragmaVar_47;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgs_48;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_50;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFGPragmaVar_51;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFGPragmaVar_52;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgs_53;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_55;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFAPragmaVar_56;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFAPragmaVar_57;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgs_58;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_73_73;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_81_81;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_85_85;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_89_89;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_90_90;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_92_92;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_96_96;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_100_100;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_101_101;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_105_105;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_107_107;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_111_111;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_112_112;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_116_116;
#line 163 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_118_118;
#line 166 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_124_124;
#line 166 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_125_125;
#line 166 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_127_127;

#line 164 "add_solver.m"
    {
#line 164 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_20 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0], hlds__make_hlds__add_solver__TypeParams_13);
    }
#line 166 "add_solver.m"
    hlds__make_hlds__add_solver__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 0)));
#line 166 "add_solver.m"
    hlds__make_hlds__add_solver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 1)));
#line 166 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 2)));
#line 166 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 3)));
#line 166 "add_solver.m"
    hlds__make_hlds__add_solver__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 4)));
#line 169 "add_solver.m"
    {
#line 169 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 170 "add_solver.m"
    {
#line 170 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 172 "add_solver.m"
    {
#line 172 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 173 "add_solver.m"
    {
#line 173 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 877 "hlds.make_hlds.add_solver.c"
    hlds__make_hlds__add_solver__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 175 "add_solver.m"
    {
#line 175 "add_solver.m"
      hlds__make_hlds__add_solver__ProgVarSet0_27 = mercury__varset__init_0_f_0(hlds__make_hlds__add_solver__TypeCtorInfo_133_133);
    }
#line 176 "add_solver.m"
    {
#line 176 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_133_133, &hlds__make_hlds__add_solver__X_28, hlds__make_hlds__add_solver__ProgVarSet0_27, &hlds__make_hlds__add_solver__ProgVarSet1_29);
    }
#line 177 "add_solver.m"
    {
#line 177 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_133_133, &hlds__make_hlds__add_solver__Y_30, hlds__make_hlds__add_solver__ProgVarSet1_29, &hlds__make_hlds__add_solver__ProgVarSet_31);
    }
#line 179 "add_solver.m"
    {
#line 179 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 181 "add_solver.m"
    {
#line 181 "add_solver.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_solver__Globals_33);
    }
#line 182 "add_solver.m"
    {
#line 182 "add_solver.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_solver__Globals_33, &hlds__make_hlds__add_solver__Target_34);
    }
#line 186 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Target_34 == (MR_Integer) 0))
#line 185 "add_solver.m"
      hlds__make_hlds__add_solver__Lang_35 = (MR_Integer) 0;
#line 186 "add_solver.m"
    else
#line 186 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Target_34 == (MR_Integer) 2))
#line 188 "add_solver.m"
      hlds__make_hlds__add_solver__Lang_35 = (MR_Integer) 1;
#line 186 "add_solver.m"
    else
#line 186 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Target_34 == (MR_Integer) 4))
#line 194 "add_solver.m"
      hlds__make_hlds__add_solver__Lang_35 = (MR_Integer) 4;
#line 186 "add_solver.m"
    else
#line 186 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Target_34 == (MR_Integer) 1))
#line 196 "add_solver.m"
      {
#line 198 "add_solver.m"
        {
#line 198 "add_solver.m"
          mercury__require__sorry_2_p_0((MR_String) "hlds.make_hlds.add_solver", (MR_String) "solver type conversion functions for this backend");
#line 198 "add_solver.m"
          return;
        }
#line 196 "add_solver.m"
      }
#line 186 "add_solver.m"
    else
#line 191 "add_solver.m"
      hlds__make_hlds__add_solver__Lang_35 = (MR_Integer) 2;
#line 201 "add_solver.m"
    {
#line 201 "add_solver.m"
      hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_solver__Lang_35);
    }
#line 204 "add_solver.m"
    {
#line 204 "add_solver.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69);
    }
#line 205 "add_solver.m"
    {
#line 205 "add_solver.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71);
    }
#line 206 "add_solver.m"
    {
#line 206 "add_solver.m"
      parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_73_73);
    }
#line 207 "add_solver.m"
    {
#line 207 "add_solver.m"
      parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_73_73, &hlds__make_hlds__add_solver__Attrs_38);
    }
#line 217 "add_solver.m"
    if ((hlds__make_hlds__add_solver__Lang_35 == (MR_Integer) 4))
#line 218 "add_solver.m"
      {
#line 218 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_77_77;

#line 219 "add_solver.m"
        {
#line 219 "add_solver.m"
          hlds__make_hlds__add_solver__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 219 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_15));
#line 219 "add_solver.m"
        }
#line 219 "add_solver.m"
        {
#line 219 "add_solver.m"
          hlds__make_hlds__add_solver__Impl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_39, 0) = ((MR_Box) ((MR_String) "Y = X"));
#line 219 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_39, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_77_77));
#line 219 "add_solver.m"
        }
#line 218 "add_solver.m"
      }
#line 217 "add_solver.m"
    else
#line 215 "add_solver.m"
      {
#line 215 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_79_79;

#line 216 "add_solver.m"
        {
#line 216 "add_solver.m"
          hlds__make_hlds__add_solver__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_15));
#line 216 "add_solver.m"
        }
#line 216 "add_solver.m"
        {
#line 216 "add_solver.m"
          hlds__make_hlds__add_solver__Impl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_39, 0) = ((MR_Box) ((MR_String) "Y = X;"));
#line 216 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_39, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_79_79));
#line 216 "add_solver.m"
        }
#line 215 "add_solver.m"
      }
#line 224 "add_solver.m"
    {
#line 224 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_40 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 225 "add_solver.m"
    {
#line 225 "add_solver.m"
      hlds__make_hlds__add_solver__V_81_81 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 225 "add_solver.m"
    {
#line 225 "add_solver.m"
      hlds__make_hlds__add_solver__XTGPragmaVar_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_41, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 225 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_41, 1) = ((MR_Box) ((MR_String) "X"));
#line 225 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_41, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_81_81));
#line 225 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_41, 3) = ((MR_Box) ((MR_Integer) 0));
#line 225 "add_solver.m"
    }
#line 226 "add_solver.m"
    {
#line 226 "add_solver.m"
      hlds__make_hlds__add_solver__YTGPragmaVar_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 226 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_42, 1) = ((MR_Box) ((MR_String) "Y"));
#line 226 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_42, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_26));
#line 226 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_42, 3) = ((MR_Box) ((MR_Integer) 0));
#line 226 "add_solver.m"
    }
#line 227 "add_solver.m"
    {
#line 227 "add_solver.m"
      hlds__make_hlds__add_solver__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTGPragmaVar_42));
#line 227 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "add_solver.m"
    }
#line 227 "add_solver.m"
    {
#line 227 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTGPragmaVar_41));
#line 227 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_85_85));
#line 227 "add_solver.m"
    }
#line 228 "add_solver.m"
    {
#line 228 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_38));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnSymName_40));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 2) = ((MR_Box) ((MR_Integer) 1));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnArgs_43));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 228 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_39));
#line 228 "add_solver.m"
    }
#line 237 "add_solver.m"
    {
#line 237 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToGroundRepnFPInfo_44, hlds__make_hlds__add_solver__Status_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_89_89, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_64, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_90_90);
    }
#line 242 "add_solver.m"
    {
#line 242 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_45 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 243 "add_solver.m"
    {
#line 243 "add_solver.m"
      hlds__make_hlds__add_solver__V_92_92 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 243 "add_solver.m"
    {
#line 243 "add_solver.m"
      hlds__make_hlds__add_solver__XTAPragmaVar_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 243 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 243 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_46, 1) = ((MR_Box) ((MR_String) "X"));
#line 243 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_92_92));
#line 243 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_46, 3) = ((MR_Box) ((MR_Integer) 0));
#line 243 "add_solver.m"
    }
#line 244 "add_solver.m"
    {
#line 244 "add_solver.m"
      hlds__make_hlds__add_solver__YTAPragmaVar_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_47, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 244 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_47, 1) = ((MR_Box) ((MR_String) "Y"));
#line 244 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_47, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_25));
#line 244 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_47, 3) = ((MR_Box) ((MR_Integer) 0));
#line 244 "add_solver.m"
    }
#line 245 "add_solver.m"
    {
#line 245 "add_solver.m"
      hlds__make_hlds__add_solver__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTAPragmaVar_47));
#line 245 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_solver.m"
    }
#line 245 "add_solver.m"
    {
#line 245 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_48, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTAPragmaVar_46));
#line 245 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_48, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_96_96));
#line 245 "add_solver.m"
    }
#line 246 "add_solver.m"
    {
#line 246 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_38));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnSymName_45));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 2) = ((MR_Box) ((MR_Integer) 1));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnArgs_48));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 246 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_39));
#line 246 "add_solver.m"
    }
#line 255 "add_solver.m"
    {
#line 255 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToAnyRepnFPInfo_49, hlds__make_hlds__add_solver__Status_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_89_89, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_100_100, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_90_90, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_101_101);
    }
#line 260 "add_solver.m"
    {
#line 260 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_50 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 261 "add_solver.m"
    {
#line 261 "add_solver.m"
      hlds__make_hlds__add_solver__XFGPragmaVar_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 261 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_51, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 261 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_51, 1) = ((MR_Box) ((MR_String) "X"));
#line 261 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_51, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_24));
#line 261 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_51, 3) = ((MR_Box) ((MR_Integer) 0));
#line 261 "add_solver.m"
    }
#line 262 "add_solver.m"
    {
#line 262 "add_solver.m"
      hlds__make_hlds__add_solver__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 262 "add_solver.m"
    {
#line 262 "add_solver.m"
      hlds__make_hlds__add_solver__YFGPragmaVar_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 262 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 262 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_52, 1) = ((MR_Box) ((MR_String) "Y"));
#line 262 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_52, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_105_105));
#line 262 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_52, 3) = ((MR_Box) ((MR_Integer) 0));
#line 262 "add_solver.m"
    }
#line 263 "add_solver.m"
    {
#line 263 "add_solver.m"
      hlds__make_hlds__add_solver__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFGPragmaVar_52));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "add_solver.m"
    }
#line 263 "add_solver.m"
    {
#line 263 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFGPragmaVar_51));
#line 263 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_107_107));
#line 263 "add_solver.m"
    }
#line 264 "add_solver.m"
    {
#line 264 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_38));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnSymName_50));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 2) = ((MR_Box) ((MR_Integer) 1));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnArgs_53));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 264 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_39));
#line 264 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromGroundRepnFPInfo_54, hlds__make_hlds__add_solver__Status_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_100_100, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_101_101, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_112_112);
    }
#line 278 "add_solver.m"
    {
#line 278 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_55 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 279 "add_solver.m"
    {
#line 279 "add_solver.m"
      hlds__make_hlds__add_solver__XFAPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 279 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 279 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_56, 1) = ((MR_Box) ((MR_String) "X"));
#line 279 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_56, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_23));
#line 279 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 279 "add_solver.m"
    }
#line 280 "add_solver.m"
    {
#line 280 "add_solver.m"
      hlds__make_hlds__add_solver__V_116_116 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 280 "add_solver.m"
    {
#line 280 "add_solver.m"
      hlds__make_hlds__add_solver__YFAPragmaVar_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 280 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_57, 1) = ((MR_Box) ((MR_String) "Y"));
#line 280 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_57, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_116_116));
#line 280 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_57, 3) = ((MR_Box) ((MR_Integer) 0));
#line 280 "add_solver.m"
    }
#line 281 "add_solver.m"
    {
#line 281 "add_solver.m"
      hlds__make_hlds__add_solver__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFAPragmaVar_57));
#line 281 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_solver.m"
    }
#line 281 "add_solver.m"
    {
#line 281 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFAPragmaVar_56));
#line 281 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_58, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_118_118));
#line 281 "add_solver.m"
    }
#line 282 "add_solver.m"
    {
#line 282 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_38));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnSymName_55));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 2) = ((MR_Box) ((MR_Integer) 1));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnArgs_58));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 282 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_39));
#line 282 "add_solver.m"
    }
#line 291 "add_solver.m"
    {
#line 291 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromAnyRepnFPInfo_59, hlds__make_hlds__add_solver__Status_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_61, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_112_112, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_65);
    }
#line 163 "add_solver.m"
    *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_63 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_62;
#line 163 "add_solver.m"
  }
#line 50 "add_solver.m"
}

#line 45 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_10_p_0(
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TVarSet_11,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeSymName_12,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeParams_13,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_14,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Context_15,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Status_16,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_48,
#line 45 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_49,
#line 45 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_50,
#line 45 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_51)
#line 45 "add_solver.m"
{
#line 77 "add_solver.m"
  {
#line 77 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeInfo_126_126 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0];
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Args_19;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverType_20;
#line 77 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_21;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__RepnType_22;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_23;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_24;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_25;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_26;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_27;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_28;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_29;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ExistQTVars_30;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__NoMarkers_31;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_32;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgTypes_33;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundOrigin_34;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_36;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyOrigin_38;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_40;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgTypes_41;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundOrigin_42;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_44;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgTypes_45;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyOrigin_46;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_52_52;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_54_54;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_55_55;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_56_56;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_57_57;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_61_61;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_63_63;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_64_64;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_65_65;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_69_69;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_70_70;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_71_71;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_72_72;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_79_79;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_80_80;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_84_84;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_85_85;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_86_86;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_87_87;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_94_94;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_95_95;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_99_99;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_100_100;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_101_101;
#line 77 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_102_102;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_114_114;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_117_117;
#line 110 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_35_35;
#line 125 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_39_39;
#line 140 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_43_43;
#line 155 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_47_47;

#line 81 "add_solver.m"
    {
#line 81 "add_solver.m"
      hlds__make_hlds__add_solver__V_52_52 = mercury__map__init_0_f_0(hlds__make_hlds__add_solver__TypeInfo_126_126, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 81 "add_solver.m"
    {
#line 81 "add_solver.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_solver__V_52_52, hlds__make_hlds__add_solver__TypeParams_13, &hlds__make_hlds__add_solver__Args_19);
    }
#line 82 "add_solver.m"
    {
#line 82 "add_solver.m"
      hlds__make_hlds__add_solver__SolverType_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 82 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_20, 0) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_12));
#line 82 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_20, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Args_19));
#line 82 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "add_solver.m"
    }
#line 83 "add_solver.m"
    {
#line 83 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_21 = mercury__list__length_1_f_0(hlds__make_hlds__add_solver__TypeInfo_126_126, hlds__make_hlds__add_solver__TypeParams_13);
    }
#line 85 "add_solver.m"
    hlds__make_hlds__add_solver__RepnType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 0)));
#line 85 "add_solver.m"
    hlds__make_hlds__add_solver__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 1)));
#line 85 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 2)));
#line 85 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 3)));
#line 85 "add_solver.m"
    hlds__make_hlds__add_solver__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 4)));
#line 89 "add_solver.m"
    {
#line 89 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_25 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_23);
    }
#line 90 "add_solver.m"
    {
#line 90 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_24);
    }
#line 92 "add_solver.m"
    {
#line 92 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_27 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_23);
    }
#line 93 "add_solver.m"
    {
#line 93 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_24);
    }
#line 95 "add_solver.m"
    {
#line 95 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_29 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 96 "add_solver.m"
    hlds__make_hlds__add_solver__ExistQTVars_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 98 "add_solver.m"
    {
#line 98 "add_solver.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_solver__NoMarkers_31);
    }
#line 104 "add_solver.m"
    {
#line 104 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_32 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_21);
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__V_55_55 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_20));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_55_55));
#line 106 "add_solver.m"
    }
#line 107 "add_solver.m"
    {
#line 107 "add_solver.m"
      hlds__make_hlds__add_solver__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_22));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_28));
#line 107 "add_solver.m"
    }
#line 107 "add_solver.m"
    {
#line 107 "add_solver.m"
      hlds__make_hlds__add_solver__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_57_57));
#line 107 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "add_solver.m"
    }
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_33, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_54_54));
#line 106 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_33, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_56_56));
#line 106 "add_solver.m"
    }
#line 108 "add_solver.m"
    {
#line 108 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundOrigin_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 108 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 108 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_34, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_12));
#line 108 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_34, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_21));
#line 108 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_34, 3) = ((MR_Box) ((MR_Integer) 0));
#line 108 "add_solver.m"
    }
#line 112 "add_solver.m"
    hlds__make_hlds__add_solver__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]);
#line 112 "add_solver.m"
    hlds__make_hlds__add_solver__V_63_63 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1];
#line 110 "add_solver.m"
    {
#line 110 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_solver__ToGroundOrigin_34, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_29, hlds__make_hlds__add_solver__ExistQTVars_30, (MR_Integer) 1, hlds__make_hlds__add_solver__ToGroundRepnSymName_32, hlds__make_hlds__add_solver__ToGroundRepnArgTypes_33, hlds__make_hlds__add_solver__V_61_61, (MR_Integer) 2, hlds__make_hlds__add_solver__V_63_63, hlds__make_hlds__add_solver__NoMarkers_31, hlds__make_hlds__add_solver__Context_15, hlds__make_hlds__add_solver__Status_16, &hlds__make_hlds__add_solver__V_35_35, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_64_64, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_65_65);
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_36 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_21);
    }
#line 121 "add_solver.m"
    {
#line 121 "add_solver.m"
      hlds__make_hlds__add_solver__V_70_70 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 121 "add_solver.m"
    {
#line 121 "add_solver.m"
      hlds__make_hlds__add_solver__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_20));
#line 121 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_70_70));
#line 121 "add_solver.m"
    }
#line 122 "add_solver.m"
    {
#line 122 "add_solver.m"
      hlds__make_hlds__add_solver__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_22));
#line 122 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_27));
#line 122 "add_solver.m"
    }
#line 122 "add_solver.m"
    {
#line 122 "add_solver.m"
      hlds__make_hlds__add_solver__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_72_72));
#line 122 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "add_solver.m"
    }
#line 121 "add_solver.m"
    {
#line 121 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_69_69));
#line 121 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_71_71));
#line 121 "add_solver.m"
    }
#line 123 "add_solver.m"
    {
#line 123 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyOrigin_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 123 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 123 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_12));
#line 123 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_38, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_21));
#line 123 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_38, 3) = ((MR_Box) ((MR_Integer) 1));
#line 123 "add_solver.m"
    }
#line 125 "add_solver.m"
    {
#line 125 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_solver__ToAnyOrigin_38, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_29, hlds__make_hlds__add_solver__ExistQTVars_30, (MR_Integer) 1, hlds__make_hlds__add_solver__ToAnyRepnSymName_36, hlds__make_hlds__add_solver__ToAnyRepnArgTypes_37, hlds__make_hlds__add_solver__V_61_61, (MR_Integer) 2, hlds__make_hlds__add_solver__V_63_63, hlds__make_hlds__add_solver__NoMarkers_31, hlds__make_hlds__add_solver__Context_15, hlds__make_hlds__add_solver__Status_16, &hlds__make_hlds__add_solver__V_39_39, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_64_64, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_65_65, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_80_80);
    }
#line 134 "add_solver.m"
    {
#line 134 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_40 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_21);
    }
#line 136 "add_solver.m"
    {
#line 136 "add_solver.m"
      hlds__make_hlds__add_solver__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_22));
#line 136 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_26));
#line 136 "add_solver.m"
    }
#line 137 "add_solver.m"
    {
#line 137 "add_solver.m"
      hlds__make_hlds__add_solver__V_87_87 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 137 "add_solver.m"
    {
#line 137 "add_solver.m"
      hlds__make_hlds__add_solver__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_20));
#line 137 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_87_87));
#line 137 "add_solver.m"
    }
#line 137 "add_solver.m"
    {
#line 137 "add_solver.m"
      hlds__make_hlds__add_solver__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_86_86));
#line 137 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "add_solver.m"
    }
#line 136 "add_solver.m"
    {
#line 136 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgTypes_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_41, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_84_84));
#line 136 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_41, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_85_85));
#line 136 "add_solver.m"
    }
#line 138 "add_solver.m"
    {
#line 138 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundOrigin_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 138 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 138 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_42, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_12));
#line 138 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_42, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_21));
#line 138 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_42, 3) = ((MR_Box) ((MR_Integer) 2));
#line 138 "add_solver.m"
    }
#line 140 "add_solver.m"
    {
#line 140 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_solver__FromGroundOrigin_42, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_29, hlds__make_hlds__add_solver__ExistQTVars_30, (MR_Integer) 1, hlds__make_hlds__add_solver__FromGroundRepnSymName_40, hlds__make_hlds__add_solver__FromGroundRepnArgTypes_41, hlds__make_hlds__add_solver__V_61_61, (MR_Integer) 2, hlds__make_hlds__add_solver__V_63_63, hlds__make_hlds__add_solver__NoMarkers_31, hlds__make_hlds__add_solver__Context_15, hlds__make_hlds__add_solver__Status_16, &hlds__make_hlds__add_solver__V_43_43, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_79_79, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_94_94, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_80_80, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_95_95);
    }
#line 149 "add_solver.m"
    {
#line 149 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_44 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_21);
    }
#line 151 "add_solver.m"
    {
#line 151 "add_solver.m"
      hlds__make_hlds__add_solver__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_22));
#line 151 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_25));
#line 151 "add_solver.m"
    }
#line 152 "add_solver.m"
    {
#line 152 "add_solver.m"
      hlds__make_hlds__add_solver__V_102_102 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 152 "add_solver.m"
    {
#line 152 "add_solver.m"
      hlds__make_hlds__add_solver__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_20));
#line 152 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_102_102));
#line 152 "add_solver.m"
    }
#line 152 "add_solver.m"
    {
#line 152 "add_solver.m"
      hlds__make_hlds__add_solver__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_101_101));
#line 152 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "add_solver.m"
    }
#line 151 "add_solver.m"
    {
#line 151 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgTypes_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_45, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_99_99));
#line 151 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_45, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 151 "add_solver.m"
    }
#line 153 "add_solver.m"
    {
#line 153 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyOrigin_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 153 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 153 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_46, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_12));
#line 153 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_21));
#line 153 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_46, 3) = ((MR_Box) ((MR_Integer) 3));
#line 153 "add_solver.m"
    }
#line 155 "add_solver.m"
    {
#line 155 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_solver__FromAnyOrigin_46, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_29, hlds__make_hlds__add_solver__ExistQTVars_30, (MR_Integer) 1, hlds__make_hlds__add_solver__FromAnyRepnSymName_44, hlds__make_hlds__add_solver__FromAnyRepnArgTypes_45, hlds__make_hlds__add_solver__V_61_61, (MR_Integer) 2, hlds__make_hlds__add_solver__V_63_63, hlds__make_hlds__add_solver__NoMarkers_31, hlds__make_hlds__add_solver__Context_15, hlds__make_hlds__add_solver__Status_16, &hlds__make_hlds__add_solver__V_47_47, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_94_94, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_95_95, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_51);
    }
#line 77 "add_solver.m"
  }
#line 45 "add_solver.m"
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
