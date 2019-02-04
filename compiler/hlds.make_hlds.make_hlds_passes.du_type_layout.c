/*
** Automatically generated from `du_type_layout.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
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
#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"




static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[1][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][5];




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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][6] = {
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7,
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6;
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_9;

    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
    {
      hlds__make_hlds__make_hlds_passes__du_type_layout__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTag_4, (MR_Integer) 1)));
      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Var_9)) == (MR_mktag((MR_Integer) 0)));
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_9, (MR_Integer) 0)));
    }
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
      mercury__int__max_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Int_6, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_0_7, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Max_8);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.du_type_layout.max_int_tag\'/3", (MR_String) "non-integer value for enumeration");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;

    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))));
    return hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor0_7, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15;
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22;
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, &hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15);
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32;

              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 258, &hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32);
              switch (hlds__make_hlds__make_hlds_passes__du_type_layout__AllowDoubleWords_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33;
                    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34;

                    libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 251, &hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33);
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 235, &hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34);
                    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__TargetWordBits_33 == (MR_Integer) 32);
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
                      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__SinglePrec_34 == (MR_Integer) 0);
                    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
                      hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20);
                    else
                      hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_12;
        break;
    }
    libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Globals_15, (MR_Integer) 257, &hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22);
    hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22 > (MR_Integer) 0);
    if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
    {
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23;
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_24;
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49;
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50;

      hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_5, hlds__make_hlds__make_hlds_passes__du_type_layout__ArgPackBits_22, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23, &hlds__make_hlds__make_hlds_passes__du_type_layout__Var_24);
      hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
      hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
      {
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41));
      }
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45, (MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "function \140hlds.make_hlds.make_hlds_passes.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42);
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49 = hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42;
      else
      {
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49 = (hlds__make_hlds__make_hlds_passes__du_type_layout__PackedLength_42 + (MR_Integer) 1);
      }
      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = mercury__int__even_1_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41);
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50 = hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41;
      else
      {
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50 = (hlds__make_hlds__make_hlds_passes__du_type_layout__UnpackedLength_41 + (MR_Integer) 1);
      }
      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49 < hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50);
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args2_23;
      else
        hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
    }
    else
      hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args1_20;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_passes__du_type_layout__Ctor_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ExistTVars_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Constraints_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arity_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2,
  MR_Integer * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_3 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
    else
    {
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 2)));
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_7, (MR_Integer) 3)));

      switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = (hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2;
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__Args_8;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__next_value_of_STATE_VARIABLE_Count_0_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_20_20;

        hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_Count_0_2 = hlds__make_hlds__make_hlds_passes__du_type_layout__next_value_of_STATE_VARIABLE_Count_0_2;
        hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__du_type_layout__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
    MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8;

    hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8);
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_STATE_VARIABLE_Max_8));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
  MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__4_4, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 2)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13, (MR_Integer) 3)));
      MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40;

      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19, &hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
      {
        hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40 = check_hlds__type_util__classify_type_defn_body_1_f_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39);
        if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_43;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_44;
          MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_56;
          MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_57;
          MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_58;
          MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_59;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_46;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_47;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_48;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_51;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_52;
          MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55;

          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_43 == (MR_Integer) 0);
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
            {
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 2)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 3)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 4)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 5)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 7)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_56 = (MR_Word) &hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[0];
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_57 = (MR_Integer) 0;
              hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
              hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
              mercury__map__foldl_values_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_13_63, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_14_64, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_15_65, hlds__make_hlds__make_hlds_passes__du_type_layout__Var_56, hlds__make_hlds__make_hlds_passes__du_type_layout__Var_44, ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_57)), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
              hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 = ((MR_Integer) hlds__make_hlds__make_hlds_passes__du_type_layout__conv1_MaxFunctor_55);
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_59 = (MR_Integer) 1;
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_58 = (hlds__make_hlds__make_hlds_passes__du_type_layout__MaxFunctor_55 + hlds__make_hlds__make_hlds_passes__du_type_layout__Var_59);
              mercury__int__log2_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Var_58, &hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
              hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_TRUE;
            }
          }
        }
        else
        if (((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 0)))) == (MR_Integer) 1))))
        {
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_41;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_42;

          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCategory_40, (MR_Integer) 1)));
            hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_41 == (MR_Integer) 2);
            if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
            {
              hlds__make_hlds__make_hlds_passes__du_type_layout__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__TypeBody_39, (MR_Integer) 1)));
              hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Var_42)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
                hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_42, (MR_Integer) 0)));
            }
          }
        }
        else
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = MR_FALSE;
      }
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
      {
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23;
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25;
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_31;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_34;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_27;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_28;
        MR_Integer hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29;

        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_31 = mercury__int__pow_2_f_0((MR_Integer) 2, hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
        hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23 = (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_31 - (MR_Integer) 1);
        hlds__make_hlds__make_hlds_passes__du_type_layout__Var_34 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__Var_34 > hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2);
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        {
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
          }
          hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
        }
        else
        {
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 == (MR_Integer) 0);
          if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
          {
            {
              hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
            }
            hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22;
          }
          else
          {
            {
              hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Mask_23));
            }
            hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25 = (hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 + hlds__make_hlds__make_hlds_passes__du_type_layout__NumBits_22);
          }
        }
        hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, hlds__make_hlds__make_hlds_passes__du_type_layout__NextShift_25, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26);
        hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
        {
          hlds__make_hlds__make_hlds_passes__du_type_layout__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24, (MR_Integer) 0)));
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_passes__du_type_layout__NextArgWidth_26, (MR_Integer) 1)));
          }
          hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = !(hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded);
        }
        if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth1_24;
        {
          hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_19));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 2) = ((MR_Box) (*hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_21));
        }
      }
      else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_30;

        hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_13;
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__6_6 = hlds__make_hlds__make_hlds_passes__du_type_layout__ArgWidth0_20;
        hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_14, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16, &hlds__make_hlds__make_hlds_passes__du_type_layout__Var_30);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_16));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded;

    if ((hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9;
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 3)));
      MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6, (MR_Integer) 2)));

      hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11);
      if (hlds__make_hlds__make_hlds_passes__du_type_layout__succeeded)
      {
        {
          hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Name_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Type_11));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Context_13));
        }
      }
      else
        hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8 = hlds__make_hlds__make_hlds_passes__du_type_layout__Arg0_6;
      hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__1_1, hlds__make_hlds__make_hlds_passes__du_type_layout__Args0_7, &hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__make_hlds_passes__du_type_layout__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Arg_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Args_9));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout__closure = hlds__make_hlds__make_hlds_passes__du_type_layout__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8;

    hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8);
    *hlds__make_hlds__make_hlds_passes__du_type_layout__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__conv0_Ctor_8));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_6,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtor_7,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8,
  MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28)
{
  {
    MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10;

    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10);
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_33_33;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 2)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 3)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 4)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 5)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 7)));
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22;
          MR_Word hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29;

          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[0]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ModuleInfo_6));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
          }
          hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
          mercury__list__map_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_33_33, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtorInfo_33_33, hlds__make_hlds__make_hlds_passes__du_type_layout__Var_29, hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors0_11, &hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20);
          {
            hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__Ctors_20));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__ConsTagValues_12));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeCheaperTagTest_13));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DuKind_14));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeUserEqComp_15));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__DirectArgFunctors_16));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 6) = ((MR_Box) ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedTag_17 | ((hlds__make_hlds__make_hlds_passes__du_type_layout__ReservedAddr_18 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, 7) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__MaybeForeign_19));
          }
          hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__Body_21, hlds__make_hlds__make_hlds_passes__du_type_layout__TypeDefn_8, &hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__make_hlds_passes__du_type_layout__TypeCtor_7, hlds__make_hlds__make_hlds_passes__du_type_layout__PackedTypeDefn_22, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27, hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28);
        }
        break;
      case (MR_Integer) 2:
        *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__du_type_layout__Body0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27;
            break;
          case (MR_Integer) 1:
            *hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_28 = hlds__make_hlds__make_hlds_passes__du_type_layout__STATE_VARIABLE_TypeTable_0_27;
            break;
        }
        break;
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.make_hlds_passes.du_type_layout. */
