/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module hlds.make_hlds.make_hlds_error. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_error__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_error.mih"


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
#include "hlds.hlds_error_util.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer hlds__make_hlds__make_hlds_error__N_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__3_3,
  MR_Word * hlds__make_hlds__make_hlds_error__HeadVar__4_4);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_error__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_error__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_1[31][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_3[1][3];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the previous definition of"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specifies non-existent mode."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, a"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that name"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does exist with arity"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that name do exist with arities"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_error_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer hlds__make_hlds__make_hlds_error__N_3)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
    MR_Word hlds__make_hlds__make_hlds_error__HeadVar__2_2;

    {
      hlds__make_hlds__make_hlds_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__N_3));
    }
    return hlds__make_hlds__make_hlds_error__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_error__HeadVar__3_3,
  MR_Word * hlds__make_hlds__make_hlds_error__HeadVar__4_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;

    if ((hlds__make_hlds__make_hlds_error__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *hlds__make_hlds__make_hlds_error__HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_error__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_error__PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_error__PredInfo_12;
        MR_Word hlds__make_hlds__make_hlds_error__PorF_13;
        MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_PorFArities_17_17;

        {
          hlds__make_hlds__make_hlds_error__gather_porf_arities_4_p_0(hlds__make_hlds__make_hlds_error__HeadVar__1_1, hlds__make_hlds__make_hlds_error__PredIds_9, hlds__make_hlds__make_hlds_error__HeadVar__3_3, &hlds__make_hlds__make_hlds_error__STATE_VARIABLE_PorFArities_17_17);
        }
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_error__HeadVar__1_1, hlds__make_hlds__make_hlds_error__PredId_8, &hlds__make_hlds__make_hlds_error__PredInfo_12);
        }
        {
          hlds__make_hlds__make_hlds_error__PorF_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__make_hlds_error__PredInfo_12);
        }
        hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__PorF_13 == hlds__make_hlds__make_hlds_error__HeadVar__3_3);
        if (hlds__make_hlds__make_hlds_error__succeeded)
          {
            MR_Integer hlds__make_hlds__make_hlds_error__OrigArity_14;
            MR_Integer hlds__make_hlds__make_hlds_error__Arity_15;

            {
              hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(hlds__make_hlds__make_hlds_error__PredInfo_12, &hlds__make_hlds__make_hlds_error__OrigArity_14);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__make_hlds_error__PorF_13, hlds__make_hlds__make_hlds_error__OrigArity_14, &hlds__make_hlds__make_hlds_error__Arity_15);
            }
            {
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_15)), hlds__make_hlds__make_hlds_error__STATE_VARIABLE_PorFArities_17_17, hlds__make_hlds__make_hlds_error__HeadVar__4_4);
            }
          }
        else
          *hlds__make_hlds__make_hlds_error__HeadVar__4_4 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_PorFArities_17_17;
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__Context_5,
  MR_Word hlds__make_hlds__make_hlds_error__ItemPieces_6,
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_12)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
    MR_Word hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_8;
    MR_Word hlds__make_hlds__make_hlds_error__Msg_9;
    MR_Word hlds__make_hlds__make_hlds_error__Spec_10;
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
    MR_Word hlds__make_hlds__make_hlds_error__V_29_29;

    {
      hlds__make_hlds__make_hlds_error__V_17_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32, hlds__make_hlds__make_hlds_error__ItemPieces_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[17]));
    }
    {
      hlds__make_hlds__make_hlds_error__Pieces_8 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[30]), hlds__make_hlds__make_hlds_error__V_17_17);
    }
    {
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_8));
    }
    {
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_5));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_9, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
    }
    {
      hlds__make_hlds__make_hlds_error__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_9));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_29_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_11));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_error__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_error__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__make_hlds_error__wrapper_arg_2;
    MR_Box hlds__make_hlds__make_hlds_error__closure = hlds__make_hlds__make_hlds_error__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_error__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__make_hlds_error__conv0_HeadVar__2_2 = hlds__make_hlds__make_hlds_error__wrap_int_fixed_1_f_0(((MR_Integer) hlds__make_hlds__make_hlds_error__wrapper_arg_1));
    }
    hlds__make_hlds__make_hlds_error__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_error__conv0_HeadVar__2_2));
    return hlds__make_hlds__make_hlds_error__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__ModuleInfo_11,
  MR_Word hlds__make_hlds__make_hlds_error__Name_12,
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_13,
  MR_Word hlds__make_hlds__make_hlds_error__PredOrFunc_14,
  MR_Word hlds__make_hlds__make_hlds_error__Status_15,
  MR_Word hlds__make_hlds__make_hlds_error__IsClassMethod_16,
  MR_Word hlds__make_hlds__make_hlds_error__Context_17,
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_18,
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_40,
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_41)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
    MR_Word hlds__make_hlds__make_hlds_error__DefinedInThisModule_20;
    MR_Word hlds__make_hlds__make_hlds_error__IsExported_21;
    MR_Word hlds__make_hlds__make_hlds_error__Globals_22;
    MR_Word hlds__make_hlds__make_hlds_error__InferTypes_23;

    {
      hlds__make_hlds__make_hlds_error__DefinedInThisModule_20 = hlds__status__pred_status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_error__Status_15);
    }
    {
      hlds__make_hlds__make_hlds_error__IsExported_21 = hlds__status__pred_status_is_exported_1_f_0(hlds__make_hlds__make_hlds_error__Status_15);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_error__ModuleInfo_11, &hlds__make_hlds__make_hlds_error__Globals_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_error__Globals_22, (MR_Integer) 170, &hlds__make_hlds__make_hlds_error__InferTypes_23);
    }
    hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__DefinedInThisModule_20 == (MR_Integer) 1);
    if (hlds__make_hlds__make_hlds_error__succeeded)
      {
        hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__IsExported_21 == (MR_Integer) 0);
        if (hlds__make_hlds__make_hlds_error__succeeded)
          {
            hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__IsClassMethod_16 == (MR_Integer) 0);
            if (hlds__make_hlds__make_hlds_error__succeeded)
              hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__InferTypes_23 == (MR_Integer) 1);
          }
      }
    if (hlds__make_hlds__make_hlds_error__succeeded)
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_41 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_40;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_error__TypeCtorInfo_122_122;
        MR_Word hlds__make_hlds__make_hlds_error__TypeCtorInfo_123_123;
        MR_String hlds__make_hlds__make_hlds_error__PredOrFuncStr_24;
        MR_Word hlds__make_hlds__make_hlds_error__MainPieces_25;
        MR_Word hlds__make_hlds__make_hlds_error__MainMsg_26;
        MR_Word hlds__make_hlds__make_hlds_error__PredicateTable_27;
        MR_Word hlds__make_hlds__make_hlds_error__AllArityPredIds_28;
        MR_Word hlds__make_hlds__make_hlds_error__PorFArities_29;
        MR_Word hlds__make_hlds__make_hlds_error__OtherArities_30;
        MR_Word hlds__make_hlds__make_hlds_error__OtherAritiesList_31;
        MR_String hlds__make_hlds__make_hlds_error__FullPredOrFuncStr_32;
        MR_Word hlds__make_hlds__make_hlds_error__Spec_33;
        MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
        MR_Word hlds__make_hlds__make_hlds_error__V_46_46;
        MR_Word hlds__make_hlds__make_hlds_error__V_49_49;
        MR_Word hlds__make_hlds__make_hlds_error__V_50_50;
        MR_Word hlds__make_hlds__make_hlds_error__V_51_51;
        MR_Word hlds__make_hlds__make_hlds_error__V_52_52;
        MR_Word hlds__make_hlds__make_hlds_error__V_54_54;
        MR_Word hlds__make_hlds__make_hlds_error__V_57_57;
        MR_Word hlds__make_hlds__make_hlds_error__V_58_58;
        MR_Word hlds__make_hlds__make_hlds_error__V_65_65;
        MR_Word hlds__make_hlds__make_hlds_error__V_66_66;

        {
          hlds__make_hlds__make_hlds_error__PredOrFuncStr_24 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__make_hlds_error__PredOrFunc_14);
        }
        hlds__make_hlds__make_hlds_error__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_18));
        }
        {
          hlds__make_hlds__make_hlds_error__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__PredOrFunc_14));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_51_51, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_13));
        }
        {
          hlds__make_hlds__make_hlds_error__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_51_51));
        }
        {
          hlds__make_hlds__make_hlds_error__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__PredOrFuncStr_24));
        }
        {
          hlds__make_hlds__make_hlds_error__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_58_58));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[15])));
        }
        {
          hlds__make_hlds__make_hlds_error__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_57_57));
        }
        {
          hlds__make_hlds__make_hlds_error__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_54_54));
        }
        {
          hlds__make_hlds__make_hlds_error__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_50_50));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_52_52));
        }
        {
          hlds__make_hlds__make_hlds_error__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_49_49));
        }
        {
          hlds__make_hlds__make_hlds_error__MainPieces_25 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_122_122, hlds__make_hlds__make_hlds_error__V_43_43, hlds__make_hlds__make_hlds_error__V_46_46);
        }
        {
          hlds__make_hlds__make_hlds_error__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__MainPieces_25));
        }
        {
          hlds__make_hlds__make_hlds_error__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_66_66));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_error__MainMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__MainMsg_26, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__MainMsg_26, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_65_65));
        }
        {
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_error__ModuleInfo_11, &hlds__make_hlds__make_hlds_error__PredicateTable_27);
        }
        {
          hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(hlds__make_hlds__make_hlds_error__PredicateTable_27, (MR_Integer) 0, hlds__make_hlds__make_hlds_error__PredOrFunc_14, hlds__make_hlds__make_hlds_error__Name_12, &hlds__make_hlds__make_hlds_error__AllArityPredIds_28);
        }
        {
          hlds__make_hlds__make_hlds_error__gather_porf_arities_4_p_0(hlds__make_hlds__make_hlds_error__ModuleInfo_11, hlds__make_hlds__make_hlds_error__AllArityPredIds_28, hlds__make_hlds__make_hlds_error__PredOrFunc_14, &hlds__make_hlds__make_hlds_error__PorFArities_29);
        }
        hlds__make_hlds__make_hlds_error__TypeCtorInfo_123_123 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__set__delete_3_p_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_123_123, ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_13)), hlds__make_hlds__make_hlds_error__PorFArities_29, &hlds__make_hlds__make_hlds_error__OtherArities_30);
        }
        {
          mercury__set__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_123_123, hlds__make_hlds__make_hlds_error__OtherArities_30, &hlds__make_hlds__make_hlds_error__OtherAritiesList_31);
        }
        {
          hlds__make_hlds__make_hlds_error__FullPredOrFuncStr_32 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__make_hlds__make_hlds_error__PredOrFunc_14);
        }
        if ((hlds__make_hlds__make_hlds_error__OtherAritiesList_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__make_hlds_error__V_119_119;

            {
              hlds__make_hlds__make_hlds_error__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__MainMsg_26));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__make_hlds_error__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_119_119));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_error__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__OtherAritiesList_31, (MR_Integer) 1)));
            MR_Integer hlds__make_hlds__make_hlds_error__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__OtherAritiesList_31, (MR_Integer) 0)));

            if ((hlds__make_hlds__make_hlds_error__V_136_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__make_hlds__make_hlds_error__OtherAritiesPieces_35;
                MR_Word hlds__make_hlds__make_hlds_error__OtherAritiesMsg_39;
                MR_Word hlds__make_hlds__make_hlds_error__V_93_93;
                MR_Word hlds__make_hlds__make_hlds_error__V_94_94;
                MR_Word hlds__make_hlds__make_hlds_error__V_95_95;
                MR_Word hlds__make_hlds__make_hlds_error__V_98_98;
                MR_Word hlds__make_hlds__make_hlds_error__V_101_101;
                MR_Word hlds__make_hlds__make_hlds_error__V_102_102;
                MR_Word hlds__make_hlds__make_hlds_error__V_109_109;
                MR_Word hlds__make_hlds__make_hlds_error__V_110_110;
                MR_Word hlds__make_hlds__make_hlds_error__V_114_114;
                MR_Word hlds__make_hlds__make_hlds_error__V_115_115;

                {
                  hlds__make_hlds__make_hlds_error__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__FullPredOrFuncStr_32));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_102_102, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_137_137));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_102_102));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[4])));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_98_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[26])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_101_101));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_95_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[25])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_98_98));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_94_94));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_93_93, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_95_95));
                }
                {
                  hlds__make_hlds__make_hlds_error__OtherAritiesPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__OtherAritiesPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[24])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__OtherAritiesPieces_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_93_93));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OtherAritiesPieces_35));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_110_110));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__make_hlds_error__OtherAritiesMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__OtherAritiesMsg_39, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_17));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__OtherAritiesMsg_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_109_109));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OtherAritiesMsg_39));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__MainMsg_26));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_115_115));
                }
                {
                  hlds__make_hlds__make_hlds_error__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_114_114));
                }
              }
            else
              {
                MR_Word hlds__make_hlds__make_hlds_error__V_70_70;
                MR_Word hlds__make_hlds__make_hlds_error__V_73_73;
                MR_Word hlds__make_hlds__make_hlds_error__V_74_74;
                MR_Word hlds__make_hlds__make_hlds_error__V_75_75;
                MR_Word hlds__make_hlds__make_hlds_error__V_78_78;
                MR_Word hlds__make_hlds__make_hlds_error__V_81_81;
                MR_Word hlds__make_hlds__make_hlds_error__V_82_82;
                MR_Word hlds__make_hlds__make_hlds_error__OtherAritiesPieces_126;
                MR_Word hlds__make_hlds__make_hlds_error__OtherAritiesMsg_127;
                MR_Word hlds__make_hlds__make_hlds_error__V_128_128;
                MR_Word hlds__make_hlds__make_hlds_error__V_129_129;
                MR_Word hlds__make_hlds__make_hlds_error__V_133_133;
                MR_Word hlds__make_hlds__make_hlds_error__V_134_134;

                {
                  hlds__make_hlds__make_hlds_error__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__FullPredOrFuncStr_32));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_82_82 = mercury__list__map_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_123_123, hlds__make_hlds__make_hlds_error__TypeCtorInfo_122_122, (MR_Word) &hlds__make_hlds__make_hlds_error_scalar_common_3[0], hlds__make_hlds__make_hlds_error__OtherAritiesList_31);
                }
                {
                  hlds__make_hlds__make_hlds_error__V_81_81 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__make_hlds_error__V_82_82);
                }
                {
                  hlds__make_hlds__make_hlds_error__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[29])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_81_81));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[28])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_78_78));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_74_74));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_75_75));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_73_73));
                }
                {
                  hlds__make_hlds__make_hlds_error__OtherAritiesPieces_126 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_122_122, hlds__make_hlds__make_hlds_error__V_70_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[4]));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_129_129, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OtherAritiesPieces_126));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_129_129));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__make_hlds_error__OtherAritiesMsg_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__OtherAritiesMsg_127, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_17));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__OtherAritiesMsg_127, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_128_128));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OtherAritiesMsg_127));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__make_hlds_error__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__MainMsg_26));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_133_133, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_134_134));
                }
                {
                  hlds__make_hlds__make_hlds_error__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_33, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_133_133));
                }
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_40));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_error__undefined_mode_error_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__Name_7,
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_8,
  MR_Word hlds__make_hlds__make_hlds_error__Context_9,
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_10,
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_12;
    MR_Word hlds__make_hlds__make_hlds_error__Msg_13;
    MR_Word hlds__make_hlds__make_hlds_error__Spec_14;
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
    MR_Word hlds__make_hlds__make_hlds_error__V_20_20;
    MR_Word hlds__make_hlds__make_hlds_error__V_23_23;
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
    MR_Word hlds__make_hlds__make_hlds_error__V_30_30;
    MR_Word hlds__make_hlds__make_hlds_error__V_31_31;
    MR_Word hlds__make_hlds__make_hlds_error__V_35_35;

    {
      hlds__make_hlds__make_hlds_error__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_10));
    }
    {
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_8));
    }
    {
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
    }
    {
      hlds__make_hlds__make_hlds_error__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[22])));
    }
    {
      hlds__make_hlds__make_hlds_error__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_23_23));
    }
    {
      hlds__make_hlds__make_hlds_error__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_error__V_17_17, hlds__make_hlds__make_hlds_error__V_20_20);
    }
    {
      hlds__make_hlds__make_hlds_error__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_12));
    }
    {
      hlds__make_hlds__make_hlds_error__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_30_30));
    }
    {
      hlds__make_hlds__make_hlds_error__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_35_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__Name_7,
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_8,
  MR_Word hlds__make_hlds__make_hlds_error__Context_9,
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_10,
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_12;
    MR_Word hlds__make_hlds__make_hlds_error__Msg_13;
    MR_Word hlds__make_hlds__make_hlds_error__Spec_14;
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
    MR_Word hlds__make_hlds__make_hlds_error__V_20_20;
    MR_Word hlds__make_hlds__make_hlds_error__V_23_23;
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
    MR_Word hlds__make_hlds__make_hlds_error__V_42_42;
    MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
    MR_Word hlds__make_hlds__make_hlds_error__V_47_47;

    {
      hlds__make_hlds__make_hlds_error__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_10));
    }
    {
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_8));
    }
    {
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
    }
    {
      hlds__make_hlds__make_hlds_error__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[14])));
    }
    {
      hlds__make_hlds__make_hlds_error__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_23_23));
    }
    {
      hlds__make_hlds__make_hlds_error__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_error__V_17_17, hlds__make_hlds__make_hlds_error__V_20_20);
    }
    {
      hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_12));
    }
    {
      hlds__make_hlds__make_hlds_error__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_43_43));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_42_42));
    }
    {
      hlds__make_hlds__make_hlds_error__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_error__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_47_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(
  MR_Word hlds__make_hlds__make_hlds_error__IsOptImported_10,
  MR_Word hlds__make_hlds__make_hlds_error__Name_11,
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_12,
  MR_String hlds__make_hlds__make_hlds_error__DefType_13,
  MR_Word hlds__make_hlds__make_hlds_error__Context_14,
  MR_Word hlds__make_hlds__make_hlds_error__OrigContext_15,
  MR_Word hlds__make_hlds__make_hlds_error__ExtraPieces_16,
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26,
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;

    switch (hlds__make_hlds__make_hlds_error__IsOptImported_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__make_hlds_error__Pieces1_18;
          MR_Word hlds__make_hlds__make_hlds_error__Pieces2_19;
          MR_Word hlds__make_hlds__make_hlds_error__Msg1_20;
          MR_Word hlds__make_hlds__make_hlds_error__Msg2_21;
          MR_Word hlds__make_hlds__make_hlds_error__ExtraMsgs_22;
          MR_Word hlds__make_hlds__make_hlds_error__Spec_25;
          MR_Word hlds__make_hlds__make_hlds_error__V_30_30;
          MR_Word hlds__make_hlds__make_hlds_error__V_31_31;
          MR_Word hlds__make_hlds__make_hlds_error__V_32_32;
          MR_Word hlds__make_hlds__make_hlds_error__V_33_33;
          MR_Word hlds__make_hlds__make_hlds_error__V_34_34;
          MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
          MR_Word hlds__make_hlds__make_hlds_error__V_45_45;
          MR_Word hlds__make_hlds__make_hlds_error__V_54_54;
          MR_Word hlds__make_hlds__make_hlds_error__V_55_55;
          MR_Word hlds__make_hlds__make_hlds_error__V_57_57;
          MR_Word hlds__make_hlds__make_hlds_error__V_60_60;
          MR_Word hlds__make_hlds__make_hlds_error__V_61_61;
          MR_Word hlds__make_hlds__make_hlds_error__V_70_70;
          MR_Word hlds__make_hlds__make_hlds_error__V_71_71;
          MR_Word hlds__make_hlds__make_hlds_error__V_72_72;

          {
            hlds__make_hlds__make_hlds_error__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_error__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DefType_13));
          }
          {
            hlds__make_hlds__make_hlds_error__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_11));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_12));
          }
          {
            hlds__make_hlds__make_hlds_error__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_34_34));
          }
          {
            hlds__make_hlds__make_hlds_error__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_33_33));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[2])));
          }
          {
            hlds__make_hlds__make_hlds_error__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_32_32));
          }
          {
            hlds__make_hlds__make_hlds_error__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces1_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_30_30));
          }
          {
            hlds__make_hlds__make_hlds_error__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_33_33));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[4])));
          }
          {
            hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_45_45));
          }
          {
            hlds__make_hlds__make_hlds_error__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[19])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces2_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_43_43));
          }
          {
            hlds__make_hlds__make_hlds_error__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces1_18));
          }
          {
            hlds__make_hlds__make_hlds_error__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_55_55));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_error__Msg1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg1_20, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_14));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg1_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_54_54));
          }
          {
            hlds__make_hlds__make_hlds_error__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OrigContext_15));
          }
          {
            hlds__make_hlds__make_hlds_error__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces2_19));
          }
          {
            hlds__make_hlds__make_hlds_error__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_61_61));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_error__Msg2_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_57_57));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_60_60));
          }
          if ((hlds__make_hlds__make_hlds_error__ExtraPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            hlds__make_hlds__make_hlds_error__ExtraMsgs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word hlds__make_hlds__make_hlds_error__V_63_63;
              MR_Word hlds__make_hlds__make_hlds_error__V_64_64;
              MR_Word hlds__make_hlds__make_hlds_error__V_65_65;

              {
                hlds__make_hlds__make_hlds_error__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__ExtraPieces_16));
              }
              {
                hlds__make_hlds__make_hlds_error__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_65_65));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__make_hlds_error__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_14));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_64_64));
              }
              {
                hlds__make_hlds__make_hlds_error__ExtraMsgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__ExtraMsgs_22, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_63_63));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__ExtraMsgs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          {
            hlds__make_hlds__make_hlds_error__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg2_21));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_error__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg1_20));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_72_72));
          }
          {
            hlds__make_hlds__make_hlds_error__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, hlds__make_hlds__make_hlds_error__V_71_71, hlds__make_hlds__make_hlds_error__ExtraMsgs_22);
          }
          {
            hlds__make_hlds__make_hlds_error__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_70_70));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26));
          }
        }
        break;
      case (MR_Integer) 1:
        *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26;
        break;
    }
  }
}

void mercury__hlds__make_hlds__make_hlds_error__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_error__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__make_hlds_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_error. */
