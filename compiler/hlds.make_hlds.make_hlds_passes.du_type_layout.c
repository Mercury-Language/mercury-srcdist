/*
** Automatically generated from `du_type_layout.m'
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


/* :- module hlds.make_hlds.make_hlds_passes.du_type_layout. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "int.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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




#line 222 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
#line 222 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 222 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
#line 222 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3);

#line 197 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
#line 197 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
#line 197 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
#line 197 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);

#line 194 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
#line 194 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3);

#line 135 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
#line 135 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 135 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 135 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
#line 135 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
#line 135 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
#line 135 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6);

#line 121 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
#line 121 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 121 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 121 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3);

#line 211 "du_type_layout.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
#line 211 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg);

#line 55 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
#line 55 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8);

#line 40 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
#line 40 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 40 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 40 "du_type_layout.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 222 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
#line 222 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 222 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
#line 222 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3)
#line 222 "du_type_layout.m"
{
#line 224 "du_type_layout.m"
  while (MR_TRUE)
#line 224 "du_type_layout.m"
    {
#line 224 "du_type_layout.m"
      /* tailcall optimized into a loop */
#line 224 "du_type_layout.m"
      {
#line 224 "du_type_layout.m"
        MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 224 "du_type_layout.m"
        if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
#line 224 "du_type_layout.m"
        else
#line 225 "du_type_layout.m"
          {
#line 225 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 2)));
#line 225 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;
#line 226 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 0)));
#line 226 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 1)));
#line 226 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 3)));

#line 230 "du_type_layout.m"
#line 230 "du_type_layout.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10)) {
#line 230 "du_type_layout.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 230 "du_type_layout.m"
              case (MR_Integer) 0:
#line 230 "du_type_layout.m"
#line 230 "du_type_layout.m"
                switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10)) {
#line 230 "du_type_layout.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 230 "du_type_layout.m"
                  case (MR_Integer) 0:
#line 228 "du_type_layout.m"
                    {
#line 229 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
#line 228 "du_type_layout.m"
                    }
#line 230 "du_type_layout.m"
                    break;
#line 230 "du_type_layout.m"
                  case (MR_Integer) 1:
#line 231 "du_type_layout.m"
                    {
#line 232 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
#line 231 "du_type_layout.m"
                    }
#line 230 "du_type_layout.m"
                    break;
#line 230 "du_type_layout.m"
                }
#line 230 "du_type_layout.m"
                break;
#line 230 "du_type_layout.m"
              case (MR_Integer) 1:
#line 234 "du_type_layout.m"
                {
#line 235 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
#line 234 "du_type_layout.m"
                }
#line 230 "du_type_layout.m"
                break;
#line 230 "du_type_layout.m"
              case (MR_Integer) 2:
#line 237 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
#line 230 "du_type_layout.m"
                break;
#line 230 "du_type_layout.m"
            }
#line 239 "du_type_layout.m"
            /* direct tailcall eliminated */
#line 239 "du_type_layout.m"
            {
#line 239 "du_type_layout.m"
              MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8;
#line 239 "du_type_layout.m"
              MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0__tmp_copy_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;

#line 239 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0__tmp_copy_2;
#line 239 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1__tmp_copy_1;
#line 239 "du_type_layout.m"
            }
#line 239 "du_type_layout.m"
            continue;
#line 225 "du_type_layout.m"
          }
#line 224 "du_type_layout.m"
      }
#line 224 "du_type_layout.m"
      break;
#line 224 "du_type_layout.m"
    }
#line 222 "du_type_layout.m"
}

#line 197 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
#line 197 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
#line 197 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
#line 197 "du_type_layout.m"
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8)
#line 197 "du_type_layout.m"
{
#line 202 "du_type_layout.m"
  {
#line 202 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 202 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6;

#line 200 "du_type_layout.m"
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 200 "du_type_layout.m"
      {
#line 200 "du_type_layout.m"
        hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 1)));
#line 201 "du_type_layout.m"
        {
#line 201 "du_type_layout.m"
          mercury__int__max_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);
#line 201 "du_type_layout.m"
          return;
        }
#line 200 "du_type_layout.m"
      }
#line 200 "du_type_layout.m"
    else
#line 203 "du_type_layout.m"
      {
#line 203 "du_type_layout.m"
        {
#line 203 "du_type_layout.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.du_type_layout.max_int_tag\'/3", (MR_String) "non-integer value for enumeration");
#line 203 "du_type_layout.m"
          return;
        }
#line 203 "du_type_layout.m"
      }
#line 202 "du_type_layout.m"
  }
#line 197 "du_type_layout.m"
}

#line 194 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 194 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
#line 194 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3)
#line 194 "du_type_layout.m"
{
#line 194 "du_type_layout.m"
  {
#line 194 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
#line 194 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8;

#line 194 "du_type_layout.m"
    {
#line 194 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8);
    }
#line 194 "du_type_layout.m"
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8));
#line 194 "du_type_layout.m"
  }
#line 194 "du_type_layout.m"
}

#line 135 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
#line 135 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 135 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 135 "du_type_layout.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
#line 135 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
#line 135 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
#line 135 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6)
#line 135 "du_type_layout.m"
{
#line 139 "du_type_layout.m"
  {
#line 139 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 139 "du_type_layout.m"
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "du_type_layout.m"
      {
#line 139 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 139 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 139 "du_type_layout.m"
      }
#line 139 "du_type_layout.m"
    else
#line 141 "du_type_layout.m"
      {
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 0)));
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 1)));
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15;
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16;
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 0)));
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 1)));
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 2)));
#line 141 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 3)));
#line 170 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 180 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39;
#line 180 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40;

#line 181 "du_type_layout.m"
        {
#line 181 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19, &hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
        }
#line 180 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 180 "du_type_layout.m"
          {
#line 182 "du_type_layout.m"
            {
#line 182 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40 = check_hlds__type_util__classify_type_defn_body_1_f_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
            }
#line 186 "du_type_layout.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 1))))
#line 184 "du_type_layout.m"
              {
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63;
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64;
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65;
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43;
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44;
#line 184 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55;
#line 184 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56;
#line 184 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57;
#line 184 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58;
#line 184 "du_type_layout.m"
                MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_46_46;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_47_47;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_48_48;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_51_51;
#line 185 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_52_52;
#line 194 "du_type_layout.m"
                MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55;

#line 184 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 2)));
#line 184 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 184 "du_type_layout.m"
                  {
#line 184 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)));
#line 184 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_43_43 == (MR_Integer) 0);
#line 184 "du_type_layout.m"
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 184 "du_type_layout.m"
                      {
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 2)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 3)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 4)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 5)));
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 7)));
#line 194 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56 = (MR_Word) &hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[0];
#line 194 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57 = (MR_Integer) 0;
#line 678 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 680 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 682 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 194 "du_type_layout.m"
                        {
#line 194 "du_type_layout.m"
                          mercury__map__foldl_values_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65, hlds__make_hlds__make_hlds_passes__du_type_layout__V_56_56, hlds__make_hlds__make_hlds_passes__du_type_layout__V_44_44, ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__V_57_57)), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
                        }
#line 194 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 = ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
#line 195 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59 = (MR_Integer) 1;
#line 195 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58 = (hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 + hlds__make_hlds__make_hlds_passes__du_type_layout__V_59_59);
#line 195 "du_type_layout.m"
                        {
#line 195 "du_type_layout.m"
                          mercury__int__log2_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__V_58_58, &hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
                        }
#line 195 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_TRUE;
#line 184 "du_type_layout.m"
                      }
#line 184 "du_type_layout.m"
                  }
#line 184 "du_type_layout.m"
              }
#line 186 "du_type_layout.m"
            else
#line 186 "du_type_layout.m"
            if (((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 187 "du_type_layout.m"
              {
#line 187 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41;
#line 187 "du_type_layout.m"
                MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42;

#line 187 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 187 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 187 "du_type_layout.m"
                  {
#line 187 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 1)));
#line 187 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_41_41 == (MR_Integer) 2);
#line 187 "du_type_layout.m"
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 187 "du_type_layout.m"
                      {
#line 188 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
#line 188 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 188 "du_type_layout.m"
                        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 188 "du_type_layout.m"
                          hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__V_42_42, (MR_Integer) 0)));
#line 187 "du_type_layout.m"
                      }
#line 187 "du_type_layout.m"
                  }
#line 187 "du_type_layout.m"
              }
#line 186 "du_type_layout.m"
            else
#line 186 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_FALSE;
#line 180 "du_type_layout.m"
          }
#line 170 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 144 "du_type_layout.m"
          {
#line 144 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23;
#line 144 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
#line 144 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25;
#line 144 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26;
#line 144 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31;
#line 147 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34;
#line 162 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_27_27;
#line 163 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_28_28;
#line 163 "du_type_layout.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_29_29;

#line 144 "du_type_layout.m"
            {
#line 144 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31 = mercury__int__pow_2_f_0((MR_Integer) 2, hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
            }
#line 144 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23 = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_31_31 - (MR_Integer) 1);
#line 147 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
#line 147 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_34_34 > hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2);
#line 150 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 148 "du_type_layout.m"
              {
#line 148 "du_type_layout.m"
                {
#line 148 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 148 "du_type_layout.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 148 "du_type_layout.m"
                }
#line 149 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 148 "du_type_layout.m"
              }
#line 150 "du_type_layout.m"
            else
#line 153 "du_type_layout.m"
              {
#line 150 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 == (MR_Integer) 0);
#line 153 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 151 "du_type_layout.m"
                  {
#line 151 "du_type_layout.m"
                    {
#line 151 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 151 "du_type_layout.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 151 "du_type_layout.m"
                    }
#line 152 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
#line 151 "du_type_layout.m"
                  }
#line 153 "du_type_layout.m"
                else
#line 154 "du_type_layout.m"
                  {
#line 154 "du_type_layout.m"
                    {
#line 154 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "du_type_layout.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3));
#line 154 "du_type_layout.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
#line 154 "du_type_layout.m"
                    }
#line 155 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
#line 154 "du_type_layout.m"
                  }
#line 153 "du_type_layout.m"
              }
#line 157 "du_type_layout.m"
            {
#line 157 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26);
            }
#line 162 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24)) == (MR_mktag((MR_Integer) 1)));
#line 162 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 162 "du_type_layout.m"
              {
#line 162 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, (MR_Integer) 0)));
#line 163 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26)) == (MR_mktag((MR_Integer) 2)));
#line 163 "du_type_layout.m"
                if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 163 "du_type_layout.m"
                  {
#line 163 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 0)));
#line 163 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 1)));
#line 163 "du_type_layout.m"
                  }
#line 163 "du_type_layout.m"
                hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = !(hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded);
#line 162 "du_type_layout.m"
              }
#line 166 "du_type_layout.m"
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 165 "du_type_layout.m"
              *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "du_type_layout.m"
            else
#line 167 "du_type_layout.m"
              *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
#line 169 "du_type_layout.m"
            {
#line 169 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18));
#line 169 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19));
#line 169 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 2) = ((MR_Box) (*hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6));
#line 169 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21));
#line 169 "du_type_layout.m"
            }
#line 144 "du_type_layout.m"
          }
#line 170 "du_type_layout.m"
        else
#line 171 "du_type_layout.m"
          {
#line 174 "du_type_layout.m"
            MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30;

#line 171 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13;
#line 172 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20;
#line 174 "du_type_layout.m"
            {
#line 174 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30);
            }
#line 171 "du_type_layout.m"
          }
#line 141 "du_type_layout.m"
        {
#line 141 "du_type_layout.m"
          MR_Word base;
#line 141 "du_type_layout.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = base;
#line 141 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15));
#line 141 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16));
#line 141 "du_type_layout.m"
        }
#line 141 "du_type_layout.m"
      }
#line 139 "du_type_layout.m"
  }
#line 135 "du_type_layout.m"
}

#line 121 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
#line 121 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
#line 121 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
#line 121 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3)
#line 121 "du_type_layout.m"
{
#line 124 "du_type_layout.m"
  {
#line 124 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

#line 124 "du_type_layout.m"
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 124 "du_type_layout.m"
      *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 124 "du_type_layout.m"
    else
#line 125 "du_type_layout.m"
      {
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0)));
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 1)));
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8;
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9;
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 0)));
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 1)));
#line 125 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 3)));
#line 126 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 2)));

#line 127 "du_type_layout.m"
        {
#line 127 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11);
        }
#line 130 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 128 "du_type_layout.m"
          {
#line 129 "du_type_layout.m"
            {
#line 129 "du_type_layout.m"
              hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 129 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10));
#line 129 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11));
#line 129 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 129 "du_type_layout.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13));
#line 129 "du_type_layout.m"
            }
#line 128 "du_type_layout.m"
          }
#line 130 "du_type_layout.m"
        else
#line 131 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6;
#line 133 "du_type_layout.m"
        {
#line 133 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9);
        }
#line 125 "du_type_layout.m"
        {
#line 125 "du_type_layout.m"
          MR_Word base;
#line 125 "du_type_layout.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "du_type_layout.m"
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = base;
#line 125 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8));
#line 125 "du_type_layout.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9));
#line 125 "du_type_layout.m"
        }
#line 125 "du_type_layout.m"
      }
#line 124 "du_type_layout.m"
  }
#line 121 "du_type_layout.m"
}

#line 211 "du_type_layout.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
#line 211 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg)
#line 211 "du_type_layout.m"
{
#line 211 "du_type_layout.m"
  {
#line 211 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 211 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;

#line 211 "du_type_layout.m"
    {
#line 211 "du_type_layout.m"
      return hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))));
    }
#line 211 "du_type_layout.m"
    return hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 211 "du_type_layout.m"
  }
#line 211 "du_type_layout.m"
}

#line 55 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
#line 55 "du_type_layout.m"
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
#line 55 "du_type_layout.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8)
#line 55 "du_type_layout.m"
{
#line 58 "du_type_layout.m"
  {
#line 58 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 0)));
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 1)));
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 2)));
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 3)));
#line 58 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 4)));
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 5)));
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15;
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
#line 58 "du_type_layout.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22;
#line 58 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26;

#line 60 "du_type_layout.m"
    {
#line 60 "du_type_layout.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, &hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15);
    }
#line 68 "du_type_layout.m"
#line 68 "du_type_layout.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6)) {
#line 68 "du_type_layout.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 68 "du_type_layout.m"
      case (MR_Integer) 0:
#line 68 "du_type_layout.m"
#line 68 "du_type_layout.m"
        switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6)) {
#line 68 "du_type_layout.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 68 "du_type_layout.m"
          case (MR_Integer) 0:
#line 68 "du_type_layout.m"
          case (MR_Integer) 1:
#line 67 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 68 "du_type_layout.m"
            break;
#line 68 "du_type_layout.m"
          case (MR_Integer) 2:
#line 69 "du_type_layout.m"
            {
#line 69 "du_type_layout.m"
              MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32;

#line 102 "du_type_layout.m"
              {
#line 102 "du_type_layout.m"
                libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 244, &hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32);
              }
#line 1134 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
#line 1135 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
              switch (hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32) {
#line 1137 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1139 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                case (MR_Integer) 0:
#line 78 "du_type_layout.m"
                  hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 1143 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                  break;
#line 1145 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                case (MR_Integer) 1:
#line 1147 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                  {
#line 1149 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33;
#line 1151 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34;

#line 106 "du_type_layout.m"
                    {
#line 106 "du_type_layout.m"
                      libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 237, &hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33);
                    }
#line 107 "du_type_layout.m"
                    {
#line 107 "du_type_layout.m"
                      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 221, &hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34);
                    }
#line 109 "du_type_layout.m"
                    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33 == (MR_Integer) 32);
#line 109 "du_type_layout.m"
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 110 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34 == (MR_Integer) 0);
#line 1170 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 75 "du_type_layout.m"
                      {
#line 75 "du_type_layout.m"
                        hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20);
                      }
#line 1177 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                    else
#line 78 "du_type_layout.m"
                      hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 1181 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                  }
#line 1183 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
                  break;
#line 1185 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
              }
#line 69 "du_type_layout.m"
            }
#line 68 "du_type_layout.m"
            break;
#line 68 "du_type_layout.m"
        }
#line 68 "du_type_layout.m"
        break;
#line 68 "du_type_layout.m"
      case (MR_Integer) 1:
#line 68 "du_type_layout.m"
      case (MR_Integer) 2:
#line 67 "du_type_layout.m"
        hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
#line 68 "du_type_layout.m"
        break;
#line 68 "du_type_layout.m"
    }
#line 81 "du_type_layout.m"
    {
#line 81 "du_type_layout.m"
      libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 243, &hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22);
    }
#line 82 "du_type_layout.m"
    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22 > (MR_Integer) 0);
#line 92 "du_type_layout.m"
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 83 "du_type_layout.m"
      {
#line 83 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23;
#line 83 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
#line 83 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
#line 83 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45;
#line 83 "du_type_layout.m"
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_24_24;
#line 216 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49;
#line 216 "du_type_layout.m"
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50;

#line 83 "du_type_layout.m"
        {
#line 83 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23, &hlds__make_hlds__make_hlds_passes__du_type_layout__V_24_24);
        }
#line 209 "du_type_layout.m"
        {
#line 209 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
        }
#line 210 "du_type_layout.m"
        {
#line 210 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
        }
#line 211 "du_type_layout.m"
        {
#line 211 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 211 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[0]));
#line 211 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1));
#line 211 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42));
#line 211 "du_type_layout.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41));
#line 211 "du_type_layout.m"
        }
#line 211 "du_type_layout.m"
        {
#line 211 "du_type_layout.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__V_45_45, (MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "function \140hlds.make_hlds.make_hlds_passes.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
        }
#line 243 "du_type_layout.m"
        {
#line 243 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
        }
#line 243 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 243 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
#line 243 "du_type_layout.m"
        else
#line 243 "du_type_layout.m"
          {
#line 243 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 = (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42 + (MR_Integer) 1);
#line 243 "du_type_layout.m"
          }
#line 243 "du_type_layout.m"
        {
#line 243 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
        }
#line 243 "du_type_layout.m"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 243 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
#line 243 "du_type_layout.m"
        else
#line 243 "du_type_layout.m"
          {
#line 243 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50 = (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41 + (MR_Integer) 1);
#line 243 "du_type_layout.m"
          }
#line 216 "du_type_layout.m"
        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__V_49_49 < hlds__make_hlds__make_hlds_passes__du_type_layout__V_50_50);
#line 1303 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
#line 87 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23;
#line 1307 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
        else
#line 90 "du_type_layout.m"
          hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
#line 83 "du_type_layout.m"
      }
#line 92 "du_type_layout.m"
    else
#line 93 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
#line 97 "du_type_layout.m"
    {
#line 97 "du_type_layout.m"
      MR_Word base;
#line 97 "du_type_layout.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 97 "du_type_layout.m"
      *hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8 = base;
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9));
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10));
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11));
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26));
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arity_13));
#line 97 "du_type_layout.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_14));
#line 97 "du_type_layout.m"
    }
#line 58 "du_type_layout.m"
  }
#line 55 "du_type_layout.m"
}

#line 40 "du_type_layout.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
#line 40 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
#line 40 "du_type_layout.m"
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
#line 40 "du_type_layout.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2)
#line 40 "du_type_layout.m"
{
#line 40 "du_type_layout.m"
  {
#line 40 "du_type_layout.m"
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
#line 40 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8;

#line 40 "du_type_layout.m"
    {
#line 40 "du_type_layout.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8);
    }
#line 40 "du_type_layout.m"
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8));
#line 40 "du_type_layout.m"
  }
#line 40 "du_type_layout.m"
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
#line 34 "du_type_layout.m"
  {
#line 34 "du_type_layout.m"
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
#line 34 "du_type_layout.m"
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10;

#line 35 "du_type_layout.m"
    {
#line 35 "du_type_layout.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10);
    }
#line 46 "du_type_layout.m"
#line 46 "du_type_layout.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) {
#line 46 "du_type_layout.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 46 "du_type_layout.m"
      case (MR_Integer) 0:
#line 48 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 46 "du_type_layout.m"
        break;
#line 46 "du_type_layout.m"
      case (MR_Integer) 1:
#line 39 "du_type_layout.m"
        {
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34;
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 1)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 2)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 3)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 4)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 5)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 7)));
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20;
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21;
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22;
#line 39 "du_type_layout.m"
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30;

#line 40 "du_type_layout.m"
          {
#line 40 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 40 "du_type_layout.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[0]));
#line 40 "du_type_layout.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1));
#line 40 "du_type_layout.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 40 "du_type_layout.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_6));
#line 40 "du_type_layout.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
#line 40 "du_type_layout.m"
          }
#line 1461 "hlds.make_hlds.make_hlds_passes.du_type_layout.c"
          hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 40 "du_type_layout.m"
          {
#line 40 "du_type_layout.m"
            mercury__list__map_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_34_34, hlds__make_hlds__make_hlds_passes__du_type_layout__V_30_30, hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11, &hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20);
          }
#line 41 "du_type_layout.m"
          {
#line 41 "du_type_layout.m"
            hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 6) = ((MR_Box) ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 | ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 << (MR_Integer) 1)))));
#line 41 "du_type_layout.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 7) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19));
#line 41 "du_type_layout.m"
          }
#line 44 "du_type_layout.m"
          {
#line 44 "du_type_layout.m"
            hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22);
          }
#line 45 "du_type_layout.m"
          {
#line 45 "du_type_layout.m"
            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtor_7, hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29);
#line 45 "du_type_layout.m"
            return;
          }
#line 39 "du_type_layout.m"
        }
#line 46 "du_type_layout.m"
        break;
#line 46 "du_type_layout.m"
      case (MR_Integer) 2:
#line 47 "du_type_layout.m"
        *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 46 "du_type_layout.m"
        break;
#line 46 "du_type_layout.m"
      case (MR_Integer) 3:
#line 46 "du_type_layout.m"
#line 46 "du_type_layout.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)))) {
#line 46 "du_type_layout.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 46 "du_type_layout.m"
          case (MR_Integer) 0:
#line 49 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 46 "du_type_layout.m"
            break;
#line 46 "du_type_layout.m"
          case (MR_Integer) 1:
#line 50 "du_type_layout.m"
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_29 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_28;
#line 46 "du_type_layout.m"
            break;
#line 46 "du_type_layout.m"
        }
#line 46 "du_type_layout.m"
        break;
#line 46 "du_type_layout.m"
    }
#line 34 "du_type_layout.m"
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
