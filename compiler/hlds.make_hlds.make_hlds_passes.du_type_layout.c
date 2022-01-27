/*
** Automatically generated from `du_type_layout.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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


/* :- module hlds.make_hlds.make_hlds_passes.du_type_layout. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"


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
#include "int.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 216 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
#line 216 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 216 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
#line 216 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3);

#line 191 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
#line 191 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
#line 191 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
#line 191 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);

#line 188 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
#line 188 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3);

#line 129 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
#line 129 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 129 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 129 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
#line 129 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
#line 129 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
#line 129 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6);

#line 115 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
#line 115 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 115 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 115 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3);

#line 205 "du_type_layout.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
#line 205 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg);

#line 54 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
#line 54 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8);

#line 39 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
#line 39 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 39 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 39 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[1][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][3];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 216 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
#line 216 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 216 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
#line 216 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3)
#line 216 "du_type_layout.m"
{
#line 218 "du_type_layout.m"
  while (MR_TRUE)
#line 218 "du_type_layout.m"
    {
#line 218 "du_type_layout.m"
      /* tailcall optimized into a loop */
#line 218 "du_type_layout.m"
      {
#line 218 "du_type_layout.m"
        MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 218 "du_type_layout.m"
        if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
#line 218 "du_type_layout.m"
        else
#line 219 "du_type_layout.m"
          {
#line 219 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 2)));
#line 219 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;
#line 220 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 0)));
#line 220 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 1)));
#line 220 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 3)));

#line 224 "du_type_layout.m"
            if ((hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 225 "du_type_layout.m"
              {
#line 226 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
#line 225 "du_type_layout.m"
              }
#line 224 "du_type_layout.m"
            else
#line 224 "du_type_layout.m"
              if ((hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "du_type_layout.m"
                {
#line 223 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
#line 222 "du_type_layout.m"
                }
#line 224 "du_type_layout.m"
              else
#line 224 "du_type_layout.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10)) == (MR_mktag((MR_Integer) 1))))
#line 228 "du_type_layout.m"
                  {
#line 229 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
#line 228 "du_type_layout.m"
                  }
#line 224 "du_type_layout.m"
                else
#line 231 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
#line 233 "du_type_layout.m"
            /* direct tailcall eliminated */
#line 233 "du_type_layout.m"
            {
#line 233 "du_type_layout.m"
              MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8;
#line 233 "du_type_layout.m"
              MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;

#line 233 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0__tmp_copy_2;
#line 233 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1__tmp_copy_1;
#line 233 "du_type_layout.m"
            }
#line 233 "du_type_layout.m"
            continue;
#line 219 "du_type_layout.m"
          }
#line 218 "du_type_layout.m"
      }
#line 218 "du_type_layout.m"
      break;
#line 218 "du_type_layout.m"
    }
#line 216 "du_type_layout.m"
}

#line 191 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
#line 191 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
#line 191 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
#line 191 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8)
#line 191 "du_type_layout.m"
{
#line 196 "du_type_layout.m"
  {
#line 196 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 196 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6;

#line 194 "du_type_layout.m"
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 194 "du_type_layout.m"
      {
#line 194 "du_type_layout.m"
        hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 1)));
#line 195 "du_type_layout.m"
        {
#line 195 "du_type_layout.m"
          mercury__int__max_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);
#line 195 "du_type_layout.m"
          return;
        }
#line 194 "du_type_layout.m"
      }
#line 194 "du_type_layout.m"
    else
#line 197 "du_type_layout.m"
      {
#line 197 "du_type_layout.m"
        {
#line 197 "du_type_layout.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.du_type_layout.max_int_tag\'/3", (MR_String) "non-integer value for enumeration");
#line 197 "du_type_layout.m"
          return;
        }
#line 197 "du_type_layout.m"
      }
#line 196 "du_type_layout.m"
  }
#line 191 "du_type_layout.m"
}

#line 188 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 188 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
#line 188 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3)
#line 188 "du_type_layout.m"
{
#line 188 "du_type_layout.m"
  {
#line 188 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
#line 188 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8;

#line 188 "du_type_layout.m"
    {
#line 188 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8);
    }
#line 188 "du_type_layout.m"
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8));
#line 188 "du_type_layout.m"
  }
#line 188 "du_type_layout.m"
}

#line 129 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
#line 129 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 129 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 129 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
#line 129 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
#line 129 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
#line 129 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6)
#line 129 "du_type_layout.m"
{
#line 133 "du_type_layout.m"
  {
#line 133 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 133 "du_type_layout.m"
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 133 "du_type_layout.m"
      {
#line 133 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "du_type_layout.m"
      }
#line 133 "du_type_layout.m"
    else
#line 135 "du_type_layout.m"
      {
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 0)));
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 1)));
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15;
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16;
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 0)));
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 1)));
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 2)));
#line 135 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 3)));
#line 164 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 174 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39;
#line 174 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40;

#line 175 "du_type_layout.m"
        {
#line 175 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19, &hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
        }
#line 174 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 174 "du_type_layout.m"
          {
#line 176 "du_type_layout.m"
            {
#line 176 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40 = check_hlds__type_util__classify_type_defn_body_1_f_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
            }
#line 180 "du_type_layout.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 1))))
#line 178 "du_type_layout.m"
              {
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63;
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64;
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65;
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43;
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44;
#line 178 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55;
#line 178 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56;
#line 178 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57;
#line 178 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58;
#line 178 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_46_46;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_47_47;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_48_48;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_51_51;
#line 179 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_52_52;
#line 188 "du_type_layout.m"
                MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55;

#line 178 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 2)));
#line 178 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 178 "du_type_layout.m"
                  {
#line 178 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)));
#line 178 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43 == (MR_Integer) 0);
#line 178 "du_type_layout.m"
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 178 "du_type_layout.m"
                      {
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 2)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 3)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 4)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 5)));
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 179 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 7)));
#line 188 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56 = (MR_Word) &hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[0];
#line 188 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57 = (MR_Integer) 0;
#line 660 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 662 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 664 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 188 "du_type_layout.m"
                        {
#line 188 "du_type_layout.m"
                          mercury__map__foldl_values_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65, hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56, hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44, ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57)), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
                        }
#line 188 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 = ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
#line 189 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59 = (MR_Integer) 1;
#line 189 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58 = (hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 + hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59);
#line 189 "du_type_layout.m"
                        {
#line 189 "du_type_layout.m"
                          mercury__int__log2_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58, &hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
                        }
#line 189 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_TRUE;
#line 178 "du_type_layout.m"
                      }
#line 178 "du_type_layout.m"
                  }
#line 178 "du_type_layout.m"
              }
#line 180 "du_type_layout.m"
            else
#line 180 "du_type_layout.m"
              if (((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 181 "du_type_layout.m"
                {
#line 181 "du_type_layout.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41;
#line 181 "du_type_layout.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42;

#line 181 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 181 "du_type_layout.m"
                  if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 181 "du_type_layout.m"
                    {
#line 181 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 1)));
#line 181 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41 == (MR_Integer) 2);
#line 181 "du_type_layout.m"
                      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 181 "du_type_layout.m"
                        {
#line 182 "du_type_layout.m"
                          hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
#line 182 "du_type_layout.m"
                          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 182 "du_type_layout.m"
                          if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 182 "du_type_layout.m"
                            hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42, (MR_Integer) 0)));
#line 181 "du_type_layout.m"
                        }
#line 181 "du_type_layout.m"
                    }
#line 181 "du_type_layout.m"
                }
#line 180 "du_type_layout.m"
              else
#line 180 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_FALSE;
#line 174 "du_type_layout.m"
          }
#line 164 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 138 "du_type_layout.m"
          {
#line 138 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23;
#line 138 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
#line 138 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25;
#line 138 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26;
#line 138 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31;
#line 141 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34;
#line 156 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_27_27;
#line 157 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_28_28;
#line 157 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_29_29;

#line 138 "du_type_layout.m"
            {
#line 138 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31 = mercury__int__pow_2_f_0((MR_Integer) 2, hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
            }
#line 138 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23 = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31 - (MR_Integer) 1);
#line 141 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
#line 141 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34 > hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2);
#line 144 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 142 "du_type_layout.m"
              {
#line 142 "du_type_layout.m"
                {
#line 142 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "du_type_layout.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 142 "du_type_layout.m"
                }
#line 143 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 142 "du_type_layout.m"
              }
#line 144 "du_type_layout.m"
            else
#line 147 "du_type_layout.m"
              {
#line 144 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 == (MR_Integer) 0);
#line 147 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 145 "du_type_layout.m"
                  {
#line 145 "du_type_layout.m"
                    {
#line 145 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "du_type_layout.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 145 "du_type_layout.m"
                    }
#line 146 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 145 "du_type_layout.m"
                  }
#line 147 "du_type_layout.m"
                else
#line 148 "du_type_layout.m"
                  {
#line 148 "du_type_layout.m"
                    {
#line 148 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "du_type_layout.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3));
#line 148 "du_type_layout.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 148 "du_type_layout.m"
                    }
#line 149 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
#line 148 "du_type_layout.m"
                  }
#line 147 "du_type_layout.m"
              }
#line 151 "du_type_layout.m"
            {
#line 151 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26);
            }
#line 156 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24)) == (MR_mktag((MR_Integer) 1)));
#line 156 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 156 "du_type_layout.m"
              {
#line 156 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, (MR_Integer) 0)));
#line 157 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26)) == (MR_mktag((MR_Integer) 2)));
#line 157 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 157 "du_type_layout.m"
                  {
#line 157 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 0)));
#line 157 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 1)));
#line 157 "du_type_layout.m"
                  }
#line 157 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = !(hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded);
#line 156 "du_type_layout.m"
              }
#line 160 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 159 "du_type_layout.m"
              *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "du_type_layout.m"
            else
#line 161 "du_type_layout.m"
              *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
#line 163 "du_type_layout.m"
            {
#line 163 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18));
#line 163 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19));
#line 163 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 2) = ((MR_Box) (*hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6));
#line 163 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21));
#line 163 "du_type_layout.m"
            }
#line 138 "du_type_layout.m"
          }
#line 164 "du_type_layout.m"
        else
#line 165 "du_type_layout.m"
          {
#line 168 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30;

#line 165 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13;
#line 166 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20;
#line 168 "du_type_layout.m"
            {
#line 168 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30);
            }
#line 165 "du_type_layout.m"
          }
#line 135 "du_type_layout.m"
        {
#line 135 "du_type_layout.m"
          MR_Word base;
#line 135 "du_type_layout.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = base;
#line 135 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15));
#line 135 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16));
#line 135 "du_type_layout.m"
        }
#line 135 "du_type_layout.m"
      }
#line 133 "du_type_layout.m"
  }
#line 129 "du_type_layout.m"
}

#line 115 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
#line 115 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 115 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 115 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3)
#line 115 "du_type_layout.m"
{
#line 118 "du_type_layout.m"
  {
#line 118 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 118 "du_type_layout.m"
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "du_type_layout.m"
      *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 118 "du_type_layout.m"
    else
#line 119 "du_type_layout.m"
      {
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8;
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9;
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 0)));
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 1)));
#line 119 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 3)));
#line 120 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 2)));

#line 121 "du_type_layout.m"
        {
#line 121 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11);
        }
#line 124 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 122 "du_type_layout.m"
          {
#line 123 "du_type_layout.m"
            {
#line 123 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 123 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10));
#line 123 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11));
#line 123 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 123 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13));
#line 123 "du_type_layout.m"
            }
#line 122 "du_type_layout.m"
          }
#line 124 "du_type_layout.m"
        else
#line 125 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6;
#line 127 "du_type_layout.m"
        {
#line 127 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9);
        }
#line 119 "du_type_layout.m"
        {
#line 119 "du_type_layout.m"
          MR_Word base;
#line 119 "du_type_layout.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = base;
#line 119 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8));
#line 119 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9));
#line 119 "du_type_layout.m"
        }
#line 119 "du_type_layout.m"
      }
#line 118 "du_type_layout.m"
  }
#line 115 "du_type_layout.m"
}

#line 205 "du_type_layout.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
#line 205 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg)
#line 205 "du_type_layout.m"
{
#line 205 "du_type_layout.m"
  {
#line 205 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 205 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;

#line 205 "du_type_layout.m"
    {
#line 205 "du_type_layout.m"
      return hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))));
    }
#line 205 "du_type_layout.m"
    return hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 205 "du_type_layout.m"
  }
#line 205 "du_type_layout.m"
}

#line 54 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
#line 54 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
#line 54 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8)
#line 54 "du_type_layout.m"
{
#line 57 "du_type_layout.m"
  {
#line 57 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 0)));
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 1)));
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 2)));
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 3)));
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 4)));
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14;
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19;
#line 57 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_20;
#line 57 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_24;

#line 59 "du_type_layout.m"
    {
#line 59 "du_type_layout.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, &hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14);
    }
#line 67 "du_type_layout.m"
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "du_type_layout.m"
      {
#line 71 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32;

#line 96 "du_type_layout.m"
        {
#line 96 "du_type_layout.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14, (MR_Integer) 245, &hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32);
        }
#line 110 "du_type_layout.m"
        if ((hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32 == (MR_Integer) 0))
#line 112 "du_type_layout.m"
          {
#line 71 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 112 "du_type_layout.m"
          }
#line 110 "du_type_layout.m"
        else
#line 99 "du_type_layout.m"
          {
#line 99 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33;
#line 99 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34;

#line 100 "du_type_layout.m"
            {
#line 100 "du_type_layout.m"
              libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14, (MR_Integer) 238, &hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33);
            }
#line 101 "du_type_layout.m"
            {
#line 101 "du_type_layout.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14, (MR_Integer) 222, &hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34);
            }
#line 103 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33 == (MR_Integer) 32);
#line 103 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 104 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34 == (MR_Integer) 0);
#line 107 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 106 "du_type_layout.m"
              {
#line 71 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 106 "du_type_layout.m"
              }
#line 107 "du_type_layout.m"
            else
#line 108 "du_type_layout.m"
              {
#line 71 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 108 "du_type_layout.m"
              }
#line 99 "du_type_layout.m"
          }
#line 73 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 72 "du_type_layout.m"
          {
#line 72 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19);
          }
#line 73 "du_type_layout.m"
        else
#line 74 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 73 "du_type_layout.m"
      }
#line 67 "du_type_layout.m"
    else
#line 66 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 77 "du_type_layout.m"
    {
#line 77 "du_type_layout.m"
      libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_14, (MR_Integer) 244, &hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_20);
    }
#line 78 "du_type_layout.m"
    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_20 > (MR_Integer) 0);
#line 88 "du_type_layout.m"
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 79 "du_type_layout.m"
      {
#line 79 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_21;
#line 79 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
#line 79 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
#line 79 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45;
#line 79 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_22_22;
#line 210 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49;
#line 210 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50;

#line 79 "du_type_layout.m"
        {
#line 79 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_20, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_21, &hlds__make_hlds__make_hlds_passes__du_type_layout__V_22_22);
        }
#line 203 "du_type_layout.m"
        {
#line 203 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
        }
#line 204 "du_type_layout.m"
        {
#line 204 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_21, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
        }
#line 205 "du_type_layout.m"
        {
#line 205 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 205 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[0]));
#line 205 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1));
#line 205 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 205 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42));
#line 205 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41));
#line 205 "du_type_layout.m"
        }
#line 205 "du_type_layout.m"
        {
#line 205 "du_type_layout.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, (MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "function \140hlds.make_hlds.make_hlds_passes.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
        }
#line 237 "du_type_layout.m"
        {
#line 237 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
        }
#line 237 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 237 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
#line 237 "du_type_layout.m"
        else
#line 237 "du_type_layout.m"
          {
#line 237 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42 + (MR_Integer) 1);
#line 237 "du_type_layout.m"
          }
#line 237 "du_type_layout.m"
        {
#line 237 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
        }
#line 237 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 237 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
#line 237 "du_type_layout.m"
        else
#line 237 "du_type_layout.m"
          {
#line 237 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41 + (MR_Integer) 1);
#line 237 "du_type_layout.m"
          }
#line 210 "du_type_layout.m"
        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 < hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50);
#line 1260 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 83 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Args_24 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_21;
#line 1264 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
        else
#line 86 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Args_24 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19;
#line 79 "du_type_layout.m"
      }
#line 88 "du_type_layout.m"
    else
#line 89 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__Args_24 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_19;
#line 91 "du_type_layout.m"
    {
#line 91 "du_type_layout.m"
      MR_Word base;
#line 91 "du_type_layout.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 91 "du_type_layout.m"
      *hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8 = base;
#line 91 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9));
#line 91 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10));
#line 91 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11));
#line 91 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_24));
#line 91 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13));
#line 91 "du_type_layout.m"
    }
#line 57 "du_type_layout.m"
  }
#line 54 "du_type_layout.m"
}

#line 39 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
#line 39 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 39 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 39 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2)
#line 39 "du_type_layout.m"
{
#line 39 "du_type_layout.m"
  {
#line 39 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
#line 39 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8;

#line 39 "du_type_layout.m"
    {
#line 39 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8);
    }
#line 39 "du_type_layout.m"
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8));
#line 39 "du_type_layout.m"
  }
#line 39 "du_type_layout.m"
}

#line 15 "du_type_layout.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(
#line 15 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_6,
#line 15 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtor_7,
#line 15 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8,
#line 15 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28,
#line 15 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29)
#line 15 "du_type_layout.m"
{
#line 33 "du_type_layout.m"
  {
#line 33 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 33 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10;

#line 34 "du_type_layout.m"
    {
#line 34 "du_type_layout.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10);
    }
#line 45 "du_type_layout.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) == (MR_mktag((MR_Integer) 1))))
#line 38 "du_type_layout.m"
      {
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34;
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 1)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 2)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 3)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 4)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 5)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 7)));
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20;
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21;
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22;
#line 38 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30;

#line 39 "du_type_layout.m"
        {
#line 39 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 39 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[0]));
#line 39 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1));
#line 39 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 39 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_6));
#line 39 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
#line 39 "du_type_layout.m"
        }
#line 1405 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 39 "du_type_layout.m"
        {
#line 39 "du_type_layout.m"
          mercury__list__map_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34, hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11, &hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20);
        }
#line 40 "du_type_layout.m"
        {
#line 40 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 6) = ((MR_Box) ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 | ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 << (MR_Integer) 1)))));
#line 40 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 7) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19));
#line 40 "du_type_layout.m"
        }
#line 43 "du_type_layout.m"
        {
#line 43 "du_type_layout.m"
          hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22);
        }
#line 44 "du_type_layout.m"
        {
#line 44 "du_type_layout.m"
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtor_7, hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29);
#line 44 "du_type_layout.m"
          return;
        }
#line 38 "du_type_layout.m"
      }
#line 45 "du_type_layout.m"
    else
#line 45 "du_type_layout.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) == (MR_mktag((MR_Integer) 2))))
#line 46 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 45 "du_type_layout.m"
      else
#line 45 "du_type_layout.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) == (MR_mktag((MR_Integer) 0))))
#line 47 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 45 "du_type_layout.m"
        else
#line 45 "du_type_layout.m"
          if (((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 49 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 45 "du_type_layout.m"
          else
#line 48 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 33 "du_type_layout.m"
  }
#line 15 "du_type_layout.m"
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_passes.du_type_layout. */
