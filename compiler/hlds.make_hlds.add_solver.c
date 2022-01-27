/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 306 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 306 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 306 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 301 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 301 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 301 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 296 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 296 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 296 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 291 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 291 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 291 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);


static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1];


#line 182 "add_solver.m"
/* sealed */ struct hlds__make_hlds__add_solver__vector_common_type_3_0_s {
#line 182 "add_solver.m"
  const MR_Word hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
#line 182 "add_solver.m"
};

static /* final */ const struct hlds__make_hlds__add_solver__vector_common_type_3_0_s hlds__make_hlds__add_solver_vector_common_3[4];



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


static /* final */ const struct hlds__make_hlds__add_solver__vector_common_type_3_0_s hlds__make_hlds__add_solver_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 306 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 306 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 306 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 306 "add_solver.m"
{
#line 308 "add_solver.m"
  {
#line 308 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 308 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 313 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 315 "add_solver.m"
      {
#line 315 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 316 "add_solver.m"
        }
#line 315 "add_solver.m"
      }
#line 313 "add_solver.m"
    else
#line 313 "add_solver.m"
      {
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 314 "add_solver.m"
        }
#line 313 "add_solver.m"
      }
#line 308 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 308 "add_solver.m"
  }
#line 306 "add_solver.m"
}

#line 301 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 301 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 301 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 301 "add_solver.m"
{
#line 303 "add_solver.m"
  {
#line 303 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 303 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 313 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 315 "add_solver.m"
      {
#line 315 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 316 "add_solver.m"
        }
#line 315 "add_solver.m"
      }
#line 313 "add_solver.m"
    else
#line 313 "add_solver.m"
      {
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 314 "add_solver.m"
        }
#line 313 "add_solver.m"
      }
#line 303 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 303 "add_solver.m"
  }
#line 301 "add_solver.m"
}

#line 296 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 296 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 296 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 296 "add_solver.m"
{
#line 298 "add_solver.m"
  {
#line 298 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 298 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 313 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 315 "add_solver.m"
      {
#line 315 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 316 "add_solver.m"
        }
#line 315 "add_solver.m"
      }
#line 313 "add_solver.m"
    else
#line 313 "add_solver.m"
      {
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 314 "add_solver.m"
        }
#line 313 "add_solver.m"
      }
#line 298 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 298 "add_solver.m"
  }
#line 296 "add_solver.m"
}

#line 291 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 291 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 291 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 291 "add_solver.m"
{
#line 293 "add_solver.m"
  {
#line 293 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 293 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 313 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 315 "add_solver.m"
      {
#line 315 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 315 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 316 "add_solver.m"
        {
#line 316 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 316 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 316 "add_solver.m"
        }
#line 315 "add_solver.m"
      }
#line 313 "add_solver.m"
    else
#line 313 "add_solver.m"
      {
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 313 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 314 "add_solver.m"
        {
#line 314 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 314 "add_solver.m"
        }
#line 313 "add_solver.m"
      }
#line 293 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 293 "add_solver.m"
  }
#line 291 "add_solver.m"
}

#line 49 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_11_p_0(
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeSymName_12,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__TypeParams_13,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_14,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__Context_15,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__PredStatus_16,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62,
#line 49 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63,
#line 49 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64)
#line 49 "add_solver.m"
{
#line 159 "add_solver.m"
  {
#line 159 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeCtorInfo_131_131;
#line 159 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_20;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_21;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_22;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_23;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_24;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_25;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_26;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet0_27;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__X_28;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet1_29;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Y_30;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet_31;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_32;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Globals_33;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Target_34;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Lang_35;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Attrs_37;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Impl_38;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_39;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTGPragmaVar_40;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTGPragmaVar_41;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgs_42;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_44;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTAPragmaVar_45;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTAPragmaVar_46;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgs_47;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_49;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFGPragmaVar_50;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFGPragmaVar_51;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgs_52;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_54;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFAPragmaVar_55;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFAPragmaVar_56;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgs_57;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_79_79;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_83_83;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_90_90;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_94_94;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_103_103;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_105_105;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_114_114;
#line 159 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_116_116;
#line 162 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_122_122;
#line 162 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_123_123;
#line 162 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_125_125;

#line 160 "add_solver.m"
    {
#line 160 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_20 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0], hlds__make_hlds__add_solver__TypeParams_13);
    }
#line 162 "add_solver.m"
    hlds__make_hlds__add_solver__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 0)));
#line 162 "add_solver.m"
    hlds__make_hlds__add_solver__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 1)));
#line 162 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 2)));
#line 162 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 3)));
#line 162 "add_solver.m"
    hlds__make_hlds__add_solver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_14, (MR_Integer) 4)));
#line 165 "add_solver.m"
    {
#line 165 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 166 "add_solver.m"
    {
#line 166 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 168 "add_solver.m"
    {
#line 168 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 169 "add_solver.m"
    {
#line 169 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 887 "hlds.make_hlds.add_solver.c"
    hlds__make_hlds__add_solver__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 171 "add_solver.m"
    {
#line 171 "add_solver.m"
      hlds__make_hlds__add_solver__ProgVarSet0_27 = mercury__varset__init_0_f_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131);
    }
#line 172 "add_solver.m"
    {
#line 172 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131, &hlds__make_hlds__add_solver__X_28, hlds__make_hlds__add_solver__ProgVarSet0_27, &hlds__make_hlds__add_solver__ProgVarSet1_29);
    }
#line 173 "add_solver.m"
    {
#line 173 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131, &hlds__make_hlds__add_solver__Y_30, hlds__make_hlds__add_solver__ProgVarSet1_29, &hlds__make_hlds__add_solver__ProgVarSet_31);
    }
#line 175 "add_solver.m"
    {
#line 175 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 177 "add_solver.m"
    {
#line 177 "add_solver.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__Globals_33);
    }
#line 178 "add_solver.m"
    {
#line 178 "add_solver.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_solver__Globals_33, &hlds__make_hlds__add_solver__Target_34);
    }
#line 182 "add_solver.m"
    hlds__make_hlds__add_solver__Lang_35 = ((&hlds__make_hlds__add_solver_vector_common_3[0 + hlds__make_hlds__add_solver__Target_34]))->hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
#line 193 "add_solver.m"
    {
#line 193 "add_solver.m"
      hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_solver__Lang_35);
    }
#line 196 "add_solver.m"
    {
#line 196 "add_solver.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67);
    }
#line 197 "add_solver.m"
    {
#line 197 "add_solver.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69);
    }
#line 198 "add_solver.m"
    {
#line 198 "add_solver.m"
      parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71);
    }
#line 199 "add_solver.m"
    {
#line 199 "add_solver.m"
      parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71, &hlds__make_hlds__add_solver__Attrs_37);
    }
#line 209 "add_solver.m"
#line 209 "add_solver.m"
    switch (hlds__make_hlds__add_solver__Lang_35) {
#line 209 "add_solver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 209 "add_solver.m"
      case (MR_Integer) 0:
#line 209 "add_solver.m"
      case (MR_Integer) 1:
#line 209 "add_solver.m"
      case (MR_Integer) 2:
#line 207 "add_solver.m"
        {
#line 207 "add_solver.m"
          MR_Word hlds__make_hlds__add_solver__V_77_77;

#line 208 "add_solver.m"
          {
#line 208 "add_solver.m"
            hlds__make_hlds__add_solver__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "add_solver.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_15));
#line 208 "add_solver.m"
          }
#line 208 "add_solver.m"
          {
#line 208 "add_solver.m"
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X;"));
#line 208 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_77_77));
#line 208 "add_solver.m"
          }
#line 207 "add_solver.m"
        }
#line 209 "add_solver.m"
        break;
#line 209 "add_solver.m"
      case (MR_Integer) 3:
#line 210 "add_solver.m"
        {
#line 210 "add_solver.m"
          MR_Word hlds__make_hlds__add_solver__V_75_75;

#line 211 "add_solver.m"
          {
#line 211 "add_solver.m"
            hlds__make_hlds__add_solver__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "add_solver.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_15));
#line 211 "add_solver.m"
          }
#line 211 "add_solver.m"
          {
#line 211 "add_solver.m"
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X"));
#line 211 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_75_75));
#line 211 "add_solver.m"
          }
#line 210 "add_solver.m"
        }
#line 209 "add_solver.m"
        break;
#line 209 "add_solver.m"
    }
#line 216 "add_solver.m"
    {
#line 216 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_39 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 217 "add_solver.m"
    {
#line 217 "add_solver.m"
      hlds__make_hlds__add_solver__V_79_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 217 "add_solver.m"
    {
#line 217 "add_solver.m"
      hlds__make_hlds__add_solver__XTGPragmaVar_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 217 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 217 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 1) = ((MR_Box) ((MR_String) "X"));
#line 217 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_79_79));
#line 217 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 3) = ((MR_Box) ((MR_Integer) 0));
#line 217 "add_solver.m"
    }
#line 218 "add_solver.m"
    {
#line 218 "add_solver.m"
      hlds__make_hlds__add_solver__YTGPragmaVar_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 218 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 218 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 1) = ((MR_Box) ((MR_String) "Y"));
#line 218 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_26));
#line 218 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 3) = ((MR_Box) ((MR_Integer) 0));
#line 218 "add_solver.m"
    }
#line 219 "add_solver.m"
    {
#line 219 "add_solver.m"
      hlds__make_hlds__add_solver__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTGPragmaVar_41));
#line 219 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "add_solver.m"
    }
#line 219 "add_solver.m"
    {
#line 219 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgs_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTGPragmaVar_40));
#line 219 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_83_83));
#line 219 "add_solver.m"
    }
#line 220 "add_solver.m"
    {
#line 220 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnSymName_39));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 2) = ((MR_Box) ((MR_Integer) 1));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnArgs_42));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 220 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 220 "add_solver.m"
    }
#line 229 "add_solver.m"
    {
#line 229 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88);
    }
#line 234 "add_solver.m"
    {
#line 234 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_44 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 235 "add_solver.m"
    {
#line 235 "add_solver.m"
      hlds__make_hlds__add_solver__V_90_90 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 235 "add_solver.m"
    {
#line 235 "add_solver.m"
      hlds__make_hlds__add_solver__XTAPragmaVar_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 235 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 235 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 1) = ((MR_Box) ((MR_String) "X"));
#line 235 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_90_90));
#line 235 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 235 "add_solver.m"
    }
#line 236 "add_solver.m"
    {
#line 236 "add_solver.m"
      hlds__make_hlds__add_solver__YTAPragmaVar_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 236 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 236 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 1) = ((MR_Box) ((MR_String) "Y"));
#line 236 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_25));
#line 236 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 3) = ((MR_Box) ((MR_Integer) 0));
#line 236 "add_solver.m"
    }
#line 237 "add_solver.m"
    {
#line 237 "add_solver.m"
      hlds__make_hlds__add_solver__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTAPragmaVar_46));
#line 237 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "add_solver.m"
    }
#line 237 "add_solver.m"
    {
#line 237 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTAPragmaVar_45));
#line 237 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_94_94));
#line 237 "add_solver.m"
    }
#line 238 "add_solver.m"
    {
#line 238 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnSymName_44));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 2) = ((MR_Box) ((MR_Integer) 1));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnArgs_47));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 238 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 238 "add_solver.m"
    }
#line 247 "add_solver.m"
    {
#line 247 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99);
    }
#line 252 "add_solver.m"
    {
#line 252 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_49 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 253 "add_solver.m"
    {
#line 253 "add_solver.m"
      hlds__make_hlds__add_solver__XFGPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 1) = ((MR_Box) ((MR_String) "X"));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_24));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 3) = ((MR_Box) ((MR_Integer) 0));
#line 253 "add_solver.m"
    }
#line 254 "add_solver.m"
    {
#line 254 "add_solver.m"
      hlds__make_hlds__add_solver__V_103_103 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 254 "add_solver.m"
    {
#line 254 "add_solver.m"
      hlds__make_hlds__add_solver__YFGPragmaVar_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 1) = ((MR_Box) ((MR_String) "Y"));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_103_103));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 3) = ((MR_Box) ((MR_Integer) 0));
#line 254 "add_solver.m"
    }
#line 255 "add_solver.m"
    {
#line 255 "add_solver.m"
      hlds__make_hlds__add_solver__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFGPragmaVar_51));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_solver.m"
    }
#line 255 "add_solver.m"
    {
#line 255 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFGPragmaVar_50));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_105_105));
#line 255 "add_solver.m"
    }
#line 256 "add_solver.m"
    {
#line 256 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnSymName_49));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 2) = ((MR_Box) ((MR_Integer) 1));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnArgs_52));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 256 "add_solver.m"
    }
#line 265 "add_solver.m"
    {
#line 265 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110);
    }
#line 270 "add_solver.m"
    {
#line 270 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_54 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 271 "add_solver.m"
    {
#line 271 "add_solver.m"
      hlds__make_hlds__add_solver__XFAPragmaVar_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 1) = ((MR_Box) ((MR_String) "X"));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_23));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 3) = ((MR_Box) ((MR_Integer) 0));
#line 271 "add_solver.m"
    }
#line 272 "add_solver.m"
    {
#line 272 "add_solver.m"
      hlds__make_hlds__add_solver__V_114_114 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 272 "add_solver.m"
    {
#line 272 "add_solver.m"
      hlds__make_hlds__add_solver__YFAPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 1) = ((MR_Box) ((MR_String) "Y"));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_114_114));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 272 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_solver__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFAPragmaVar_56));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFAPragmaVar_55));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_116_116));
#line 273 "add_solver.m"
    }
#line 274 "add_solver.m"
    {
#line 274 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnSymName_54));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 2) = ((MR_Box) ((MR_Integer) 1));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnArgs_57));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 274 "add_solver.m"
    }
#line 283 "add_solver.m"
    {
#line 283 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64);
    }
#line 159 "add_solver.m"
    *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61;
#line 159 "add_solver.m"
  }
#line 49 "add_solver.m"
}

#line 44 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_11_p_0(
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
  MR_Word hlds__make_hlds__add_solver__PredStatus_17,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__NeedQual_18,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_50,
#line 44 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_51,
#line 44 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_52,
#line 44 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_53)
#line 44 "add_solver.m"
{
#line 73 "add_solver.m"
  {
#line 73 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeInfo_128_128 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0];
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Args_21;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverType_22;
#line 73 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_23;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__RepnType_24;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_25;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_26;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_27;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_28;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_29;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_30;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_31;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ExistQTVars_32;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__NoMarkers_33;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_34;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgTypes_35;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundOrigin_36;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_38;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgTypes_39;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyOrigin_40;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_42;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgTypes_43;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundOrigin_44;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_46;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgTypes_47;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyOrigin_48;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_54_54;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_56_56;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_57_57;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_58_58;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_59_59;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_63_63;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_65_65;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_71_71;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_72_72;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_73_73;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_74_74;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_81_81;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_82_82;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_86_86;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_87_87;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_88_88;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_89_89;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_96_96;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_97_97;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_101_101;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_102_102;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_103_103;
#line 73 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_104_104;
#line 81 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_116_116;
#line 81 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_119_119;
#line 106 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_37_37;
#line 121 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_41_41;
#line 136 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_45_45;
#line 151 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_49_49;

#line 77 "add_solver.m"
    {
#line 77 "add_solver.m"
      hlds__make_hlds__add_solver__V_54_54 = mercury__map__init_0_f_0(hlds__make_hlds__add_solver__TypeInfo_128_128, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 77 "add_solver.m"
    {
#line 77 "add_solver.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_solver__V_54_54, hlds__make_hlds__add_solver__TypeParams_14, &hlds__make_hlds__add_solver__Args_21);
    }
#line 78 "add_solver.m"
    {
#line 78 "add_solver.m"
      hlds__make_hlds__add_solver__SolverType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 78 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_22, 0) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 78 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_22, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Args_21));
#line 78 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 78 "add_solver.m"
    }
#line 79 "add_solver.m"
    {
#line 79 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_23 = mercury__list__length_1_f_0(hlds__make_hlds__add_solver__TypeInfo_128_128, hlds__make_hlds__add_solver__TypeParams_14);
    }
#line 81 "add_solver.m"
    hlds__make_hlds__add_solver__RepnType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 0)));
#line 81 "add_solver.m"
    hlds__make_hlds__add_solver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 1)));
#line 81 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 2)));
#line 81 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 3)));
#line 81 "add_solver.m"
    hlds__make_hlds__add_solver__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 4)));
#line 85 "add_solver.m"
    {
#line 85 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_27 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_25);
    }
#line 86 "add_solver.m"
    {
#line 86 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_28 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_26);
    }
#line 88 "add_solver.m"
    {
#line 88 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_29 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_25);
    }
#line 89 "add_solver.m"
    {
#line 89 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_30 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_26);
    }
#line 91 "add_solver.m"
    {
#line 91 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_31 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 92 "add_solver.m"
    hlds__make_hlds__add_solver__ExistQTVars_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 94 "add_solver.m"
    {
#line 94 "add_solver.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_solver__NoMarkers_33);
    }
#line 100 "add_solver.m"
    {
#line 100 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_34 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_23);
    }
#line 102 "add_solver.m"
    {
#line 102 "add_solver.m"
      hlds__make_hlds__add_solver__V_57_57 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 102 "add_solver.m"
    {
#line 102 "add_solver.m"
      hlds__make_hlds__add_solver__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_22));
#line 102 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_57_57));
#line 102 "add_solver.m"
    }
#line 103 "add_solver.m"
    {
#line 103 "add_solver.m"
      hlds__make_hlds__add_solver__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_24));
#line 103 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_30));
#line 103 "add_solver.m"
    }
#line 103 "add_solver.m"
    {
#line 103 "add_solver.m"
      hlds__make_hlds__add_solver__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_59_59));
#line 103 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "add_solver.m"
    }
#line 102 "add_solver.m"
    {
#line 102 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgTypes_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_35, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_56_56));
#line 102 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_35, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_58_58));
#line 102 "add_solver.m"
    }
#line 104 "add_solver.m"
    {
#line 104 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundOrigin_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 104 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 104 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_36, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 104 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_36, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_23));
#line 104 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_36, 3) = ((MR_Box) ((MR_Integer) 0));
#line 104 "add_solver.m"
    }
#line 108 "add_solver.m"
    hlds__make_hlds__add_solver__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]);
#line 108 "add_solver.m"
    hlds__make_hlds__add_solver__V_65_65 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1];
#line 106 "add_solver.m"
    {
#line 106 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__ToGroundOrigin_36, hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_31, hlds__make_hlds__add_solver__ExistQTVars_32, (MR_Integer) 1, hlds__make_hlds__add_solver__ToGroundRepnSymName_34, hlds__make_hlds__add_solver__ToGroundRepnArgTypes_35, hlds__make_hlds__add_solver__V_63_63, (MR_Integer) 2, hlds__make_hlds__add_solver__V_65_65, hlds__make_hlds__add_solver__NoMarkers_33, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__PredStatus_17, hlds__make_hlds__add_solver__NeedQual_18, &hlds__make_hlds__add_solver__V_37_37, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_50, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_52, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67);
    }
#line 115 "add_solver.m"
    {
#line 115 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_38 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_23);
    }
#line 117 "add_solver.m"
    {
#line 117 "add_solver.m"
      hlds__make_hlds__add_solver__V_72_72 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 117 "add_solver.m"
    {
#line 117 "add_solver.m"
      hlds__make_hlds__add_solver__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_22));
#line 117 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_72_72));
#line 117 "add_solver.m"
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_24));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_29));
#line 118 "add_solver.m"
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_74_74));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "add_solver.m"
    }
#line 117 "add_solver.m"
    {
#line 117 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_39, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_71_71));
#line 117 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_39, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_73_73));
#line 117 "add_solver.m"
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyOrigin_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_40, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_40, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_23));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_40, 3) = ((MR_Box) ((MR_Integer) 1));
#line 119 "add_solver.m"
    }
#line 121 "add_solver.m"
    {
#line 121 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__ToAnyOrigin_40, hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_31, hlds__make_hlds__add_solver__ExistQTVars_32, (MR_Integer) 1, hlds__make_hlds__add_solver__ToAnyRepnSymName_38, hlds__make_hlds__add_solver__ToAnyRepnArgTypes_39, hlds__make_hlds__add_solver__V_63_63, (MR_Integer) 2, hlds__make_hlds__add_solver__V_65_65, hlds__make_hlds__add_solver__NoMarkers_33, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__PredStatus_17, hlds__make_hlds__add_solver__NeedQual_18, &hlds__make_hlds__add_solver__V_41_41, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_81_81, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_82_82);
    }
#line 130 "add_solver.m"
    {
#line 130 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_42 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_23);
    }
#line 132 "add_solver.m"
    {
#line 132 "add_solver.m"
      hlds__make_hlds__add_solver__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_24));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_28));
#line 132 "add_solver.m"
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_89_89 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_22));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_89_89));
#line 133 "add_solver.m"
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_88_88));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_solver.m"
    }
#line 132 "add_solver.m"
    {
#line 132 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_86_86));
#line 132 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_87_87));
#line 132 "add_solver.m"
    }
#line 134 "add_solver.m"
    {
#line 134 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundOrigin_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_44, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_44, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_23));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_44, 3) = ((MR_Box) ((MR_Integer) 2));
#line 134 "add_solver.m"
    }
#line 136 "add_solver.m"
    {
#line 136 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__FromGroundOrigin_44, hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_31, hlds__make_hlds__add_solver__ExistQTVars_32, (MR_Integer) 1, hlds__make_hlds__add_solver__FromGroundRepnSymName_42, hlds__make_hlds__add_solver__FromGroundRepnArgTypes_43, hlds__make_hlds__add_solver__V_63_63, (MR_Integer) 2, hlds__make_hlds__add_solver__V_65_65, hlds__make_hlds__add_solver__NoMarkers_33, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__PredStatus_17, hlds__make_hlds__add_solver__NeedQual_18, &hlds__make_hlds__add_solver__V_45_45, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_81_81, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_96_96, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_82_82, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_97_97);
    }
#line 145 "add_solver.m"
    {
#line 145 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_46 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_13, hlds__make_hlds__add_solver__Arity_23);
    }
#line 147 "add_solver.m"
    {
#line 147 "add_solver.m"
      hlds__make_hlds__add_solver__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_24));
#line 147 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_27));
#line 147 "add_solver.m"
    }
#line 148 "add_solver.m"
    {
#line 148 "add_solver.m"
      hlds__make_hlds__add_solver__V_104_104 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 148 "add_solver.m"
    {
#line 148 "add_solver.m"
      hlds__make_hlds__add_solver__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_22));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_104_104));
#line 148 "add_solver.m"
    }
#line 148 "add_solver.m"
    {
#line 148 "add_solver.m"
      hlds__make_hlds__add_solver__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_103_103));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_solver.m"
    }
#line 147 "add_solver.m"
    {
#line 147 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgTypes_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_47, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_101_101));
#line 147 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_102_102));
#line 147 "add_solver.m"
    }
#line 149 "add_solver.m"
    {
#line 149 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyOrigin_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_48, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_13));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_48, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_23));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_48, 3) = ((MR_Box) ((MR_Integer) 3));
#line 149 "add_solver.m"
    }
#line 151 "add_solver.m"
    {
#line 151 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__FromAnyOrigin_48, hlds__make_hlds__add_solver__TVarSet_12, hlds__make_hlds__add_solver__InstVarSet_31, hlds__make_hlds__add_solver__ExistQTVars_32, (MR_Integer) 1, hlds__make_hlds__add_solver__FromAnyRepnSymName_46, hlds__make_hlds__add_solver__FromAnyRepnArgTypes_47, hlds__make_hlds__add_solver__V_63_63, (MR_Integer) 2, hlds__make_hlds__add_solver__V_65_65, hlds__make_hlds__add_solver__NoMarkers_33, hlds__make_hlds__add_solver__Context_16, hlds__make_hlds__add_solver__PredStatus_17, hlds__make_hlds__add_solver__NeedQual_18, &hlds__make_hlds__add_solver__V_49_49, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_96_96, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_51, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_97_97, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_53);
    }
#line 73 "add_solver.m"
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
