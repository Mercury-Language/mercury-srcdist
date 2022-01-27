/*
** Automatically generated from `make_hlds_error.m'
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


/* :- module hlds.make_hlds.make_hlds_error. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_error__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_error.mih"


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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
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





static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_1[25][2];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_error_scalar_common_1[25][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the previous definition of"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specifies non-existent mode."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 62 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(
#line 62 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_5,
#line 62 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__ItemPieces_6,
#line 62 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_11,
#line 62 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_12)
#line 62 "make_hlds_error.m"
{
#line 201 "make_hlds_error.m"
  {
#line 201 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_8;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Msg_9;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Spec_10;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
#line 201 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_29_29;

#line 202 "make_hlds_error.m"
    {
#line 202 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_17_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32, hlds__make_hlds__make_hlds_error__ItemPieces_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[17]));
    }
#line 202 "make_hlds_error.m"
    {
#line 202 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Pieces_8 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_error__TypeCtorInfo_32_32, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[24]), hlds__make_hlds__make_hlds_error__V_17_17);
    }
#line 204 "make_hlds_error.m"
    {
#line 204 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 204 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_8));
#line 204 "make_hlds_error.m"
    }
#line 204 "make_hlds_error.m"
    {
#line 204 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
#line 204 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "make_hlds_error.m"
    }
#line 204 "make_hlds_error.m"
    {
#line 204 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_5));
#line 204 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_9, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
#line 204 "make_hlds_error.m"
    }
#line 205 "make_hlds_error.m"
    {
#line 205 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_9));
#line 205 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "make_hlds_error.m"
    }
#line 205 "make_hlds_error.m"
    {
#line 205 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 205 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 205 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_29_29));
#line 205 "make_hlds_error.m"
    }
#line 206 "make_hlds_error.m"
    {
#line 206 "make_hlds_error.m"
      MR_Word base;
#line 206 "make_hlds_error.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_12 = base;
#line 206 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_10));
#line 206 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_11));
#line 206 "make_hlds_error.m"
    }
#line 201 "make_hlds_error.m"
  }
#line 62 "make_hlds_error.m"
}

#line 56 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__error_if_exported_5_p_0(
#line 56 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Status_6,
#line 56 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_7,
#line 56 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Item_8,
#line 56 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_10,
#line 56 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_11)
#line 56 "make_hlds_error.m"
{
#line 211 "make_hlds_error.m"
  {
#line 211 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 211 "make_hlds_error.m"
    if (hlds__make_hlds__make_hlds_error__succeeded)
#line 210 "make_hlds_error.m"
      {
#line 210 "make_hlds_error.m"
        hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_error__Context_7, hlds__make_hlds__make_hlds_error__Item_8, hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_10, hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_11);
#line 210 "make_hlds_error.m"
        return;
      }
#line 211 "make_hlds_error.m"
    else
#line 211 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_11 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_10;
#line 211 "make_hlds_error.m"
  }
#line 56 "make_hlds_error.m"
}

#line 48 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__maybe_undefined_pred_error_10_p_0(
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Globals_11,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Name_12,
#line 48 "make_hlds_error.m"
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_13,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__PredOrFunc_14,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Status_15,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__IsClassMethod_16,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_17,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_18,
#line 48 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26,
#line 48 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27)
#line 48 "make_hlds_error.m"
{
#line 173 "make_hlds_error.m"
  {
#line 173 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
#line 173 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__DefinedInThisModule_20;
#line 173 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__IsExported_21;
#line 173 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__InferTypes_22;

#line 181 "make_hlds_error.m"
    {
#line 181 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__DefinedInThisModule_20 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__make_hlds_error__Status_15);
    }
#line 182 "make_hlds_error.m"
    {
#line 182 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__IsExported_21 = hlds__hlds_pred__status_is_exported_1_f_0(hlds__make_hlds__make_hlds_error__Status_15);
    }
#line 183 "make_hlds_error.m"
    {
#line 183 "make_hlds_error.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__make_hlds_error__Globals_11, (MR_Integer) 166, &hlds__make_hlds__make_hlds_error__InferTypes_22);
    }
#line 185 "make_hlds_error.m"
    hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__DefinedInThisModule_20 == (MR_Integer) 1);
#line 185 "make_hlds_error.m"
    if (hlds__make_hlds__make_hlds_error__succeeded)
#line 185 "make_hlds_error.m"
      {
#line 186 "make_hlds_error.m"
        hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__IsExported_21 == (MR_Integer) 0);
#line 185 "make_hlds_error.m"
        if (hlds__make_hlds__make_hlds_error__succeeded)
#line 185 "make_hlds_error.m"
          {
#line 187 "make_hlds_error.m"
            hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__IsClassMethod_16 == (MR_Integer) 0);
#line 185 "make_hlds_error.m"
            if (hlds__make_hlds__make_hlds_error__succeeded)
#line 188 "make_hlds_error.m"
              hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__InferTypes_22 == (MR_Integer) 1);
#line 185 "make_hlds_error.m"
          }
#line 185 "make_hlds_error.m"
      }
#line 191 "make_hlds_error.m"
    if (hlds__make_hlds__make_hlds_error__succeeded)
#line 191 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26;
#line 191 "make_hlds_error.m"
    else
#line 195 "make_hlds_error.m"
      {
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Pieces_23;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Msg_24;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Spec_25;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_29_29;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_32_32;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_35_35;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_36_36;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_37_37;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_38_38;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_40_40;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_44_44;
#line 195 "make_hlds_error.m"
        MR_String hlds__make_hlds__make_hlds_error__V_45_45;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_52_52;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_53_53;
#line 195 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_57_57;

#line 192 "make_hlds_error.m"
        {
#line 192 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
#line 192 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_29_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_18));
#line 192 "make_hlds_error.m"
        }
#line 193 "make_hlds_error.m"
        {
#line 193 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__PredOrFunc_14));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_12));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_37_37, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_13));
#line 193 "make_hlds_error.m"
        }
#line 193 "make_hlds_error.m"
        {
#line 193 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_37_37));
#line 193 "make_hlds_error.m"
        }
#line 195 "make_hlds_error.m"
        {
#line 195 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_45_45 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(hlds__make_hlds__make_hlds_error__PredOrFunc_14);
        }
#line 195 "make_hlds_error.m"
        {
#line 195 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 195 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_45_45));
#line 195 "make_hlds_error.m"
        }
#line 195 "make_hlds_error.m"
        {
#line 195 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_44_44));
#line 195 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[15])));
#line 195 "make_hlds_error.m"
        }
#line 194 "make_hlds_error.m"
        {
#line 194 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[23])));
#line 194 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_43_43));
#line 194 "make_hlds_error.m"
        }
#line 193 "make_hlds_error.m"
        {
#line 193 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_40_40));
#line 193 "make_hlds_error.m"
        }
#line 193 "make_hlds_error.m"
        {
#line 193 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_36_36));
#line 193 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_38_38));
#line 193 "make_hlds_error.m"
        }
#line 192 "make_hlds_error.m"
        {
#line 192 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
#line 192 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_35_35));
#line 192 "make_hlds_error.m"
        }
#line 192 "make_hlds_error.m"
        {
#line 192 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_error__V_29_29, hlds__make_hlds__make_hlds_error__V_32_32);
        }
#line 196 "make_hlds_error.m"
        {
#line 196 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 196 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_23));
#line 196 "make_hlds_error.m"
        }
#line 196 "make_hlds_error.m"
        {
#line 196 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_53_53));
#line 196 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "make_hlds_error.m"
        }
#line 196 "make_hlds_error.m"
        {
#line 196 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_17));
#line 196 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_52_52));
#line 196 "make_hlds_error.m"
        }
#line 197 "make_hlds_error.m"
        {
#line 197 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_24));
#line 197 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "make_hlds_error.m"
        }
#line 197 "make_hlds_error.m"
        {
#line 197 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 197 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 197 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_57_57));
#line 197 "make_hlds_error.m"
        }
#line 198 "make_hlds_error.m"
        {
#line 198 "make_hlds_error.m"
          MR_Word base;
#line 198 "make_hlds_error.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "make_hlds_error.m"
          *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = base;
#line 198 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_25));
#line 198 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26));
#line 198 "make_hlds_error.m"
        }
#line 195 "make_hlds_error.m"
      }
#line 173 "make_hlds_error.m"
  }
#line 48 "make_hlds_error.m"
}

#line 44 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__undefined_mode_error_6_p_0(
#line 44 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Name_7,
#line 44 "make_hlds_error.m"
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_8,
#line 44 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_9,
#line 44 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_10,
#line 44 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15,
#line 44 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16)
#line 44 "make_hlds_error.m"
{
#line 117 "make_hlds_error.m"
  {
#line 117 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_12;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Msg_13;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Spec_14;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_20_20;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_23_23;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_30_30;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_31_31;
#line 117 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_35_35;

#line 118 "make_hlds_error.m"
    {
#line 118 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
#line 118 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_10));
#line 118 "make_hlds_error.m"
    }
#line 119 "make_hlds_error.m"
    {
#line 119 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_7));
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_8));
#line 119 "make_hlds_error.m"
    }
#line 119 "make_hlds_error.m"
    {
#line 119 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
#line 119 "make_hlds_error.m"
    }
#line 119 "make_hlds_error.m"
    {
#line 119 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
#line 119 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[22])));
#line 119 "make_hlds_error.m"
    }
#line 118 "make_hlds_error.m"
    {
#line 118 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
#line 118 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_23_23));
#line 118 "make_hlds_error.m"
    }
#line 118 "make_hlds_error.m"
    {
#line 118 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_error__V_17_17, hlds__make_hlds__make_hlds_error__V_20_20);
    }
#line 121 "make_hlds_error.m"
    {
#line 121 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_12));
#line 121 "make_hlds_error.m"
    }
#line 121 "make_hlds_error.m"
    {
#line 121 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
#line 121 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "make_hlds_error.m"
    }
#line 121 "make_hlds_error.m"
    {
#line 121 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_9));
#line 121 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_30_30));
#line 121 "make_hlds_error.m"
    }
#line 122 "make_hlds_error.m"
    {
#line 122 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_13));
#line 122 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "make_hlds_error.m"
    }
#line 122 "make_hlds_error.m"
    {
#line 122 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 122 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 122 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_35_35));
#line 122 "make_hlds_error.m"
    }
#line 123 "make_hlds_error.m"
    {
#line 123 "make_hlds_error.m"
      MR_Word base;
#line 123 "make_hlds_error.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16 = base;
#line 123 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_14));
#line 123 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15));
#line 123 "make_hlds_error.m"
    }
#line 117 "make_hlds_error.m"
  }
#line 44 "make_hlds_error.m"
}

#line 36 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(
#line 36 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Name_7,
#line 36 "make_hlds_error.m"
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_8,
#line 36 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_9,
#line 36 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__DescPieces_10,
#line 36 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15,
#line 36 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16)
#line 36 "make_hlds_error.m"
{
#line 108 "make_hlds_error.m"
  {
#line 108 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Pieces_12;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Msg_13;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__Spec_14;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_17_17;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_20_20;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_23_23;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_24_24;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_25_25;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_42_42;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
#line 108 "make_hlds_error.m"
    MR_Word hlds__make_hlds__make_hlds_error__V_47_47;

#line 109 "make_hlds_error.m"
    {
#line 109 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
#line 109 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DescPieces_10));
#line 109 "make_hlds_error.m"
    }
#line 110 "make_hlds_error.m"
    {
#line 110 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_7));
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_8));
#line 110 "make_hlds_error.m"
    }
#line 110 "make_hlds_error.m"
    {
#line 110 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_25_25));
#line 110 "make_hlds_error.m"
    }
#line 110 "make_hlds_error.m"
    {
#line 110 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_24_24));
#line 110 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[14])));
#line 110 "make_hlds_error.m"
    }
#line 109 "make_hlds_error.m"
    {
#line 109 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[20])));
#line 109 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_23_23));
#line 109 "make_hlds_error.m"
    }
#line 109 "make_hlds_error.m"
    {
#line 109 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_error__V_17_17, hlds__make_hlds__make_hlds_error__V_20_20);
    }
#line 113 "make_hlds_error.m"
    {
#line 113 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 113 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces_12));
#line 113 "make_hlds_error.m"
    }
#line 113 "make_hlds_error.m"
    {
#line 113 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_43_43));
#line 113 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "make_hlds_error.m"
    }
#line 113 "make_hlds_error.m"
    {
#line 113 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_9));
#line 113 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_42_42));
#line 113 "make_hlds_error.m"
    }
#line 114 "make_hlds_error.m"
    {
#line 114 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg_13));
#line 114 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "make_hlds_error.m"
    }
#line 114 "make_hlds_error.m"
    {
#line 114 "make_hlds_error.m"
      hlds__make_hlds__make_hlds_error__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 114 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 114 "make_hlds_error.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_47_47));
#line 114 "make_hlds_error.m"
    }
#line 115 "make_hlds_error.m"
    {
#line 115 "make_hlds_error.m"
      MR_Word base;
#line 115 "make_hlds_error.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_16 = base;
#line 115 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_14));
#line 115 "make_hlds_error.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_15));
#line 115 "make_hlds_error.m"
    }
#line 108 "make_hlds_error.m"
  }
#line 36 "make_hlds_error.m"
}

#line 32 "make_hlds_error.m"
void MR_CALL 
hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Status_10,
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Name_11,
#line 32 "make_hlds_error.m"
  MR_Integer hlds__make_hlds__make_hlds_error__Arity_12,
#line 32 "make_hlds_error.m"
  MR_String hlds__make_hlds__make_hlds_error__DefType_13,
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__Context_14,
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__OrigContext_15,
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__ExtraPieces_16,
#line 32 "make_hlds_error.m"
  MR_Word hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26,
#line 32 "make_hlds_error.m"
  MR_Word * hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27)
#line 32 "make_hlds_error.m"
{
#line 88 "make_hlds_error.m"
  {
#line 88 "make_hlds_error.m"
    MR_bool hlds__make_hlds__make_hlds_error__succeeded = (hlds__make_hlds__make_hlds_error__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 88 "make_hlds_error.m"
    if (hlds__make_hlds__make_hlds_error__succeeded)
#line 88 "make_hlds_error.m"
      *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26;
#line 88 "make_hlds_error.m"
    else
#line 90 "make_hlds_error.m"
      {
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Pieces1_18;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Pieces2_19;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Msg1_20;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Msg2_21;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__ExtraMsgs_22;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__Spec_25;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_30_30;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_31_31;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_32_32;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_33_33;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_34_34;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_43_43;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_45_45;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_54_54;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_55_55;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_57_57;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_60_60;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_61_61;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_70_70;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_71_71;
#line 90 "make_hlds_error.m"
        MR_Word hlds__make_hlds__make_hlds_error__V_72_72;

#line 89 "make_hlds_error.m"
        {
#line 89 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__DefType_13));
#line 89 "make_hlds_error.m"
        }
#line 90 "make_hlds_error.m"
        {
#line 90 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Name_11));
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Arity_12));
#line 90 "make_hlds_error.m"
        }
#line 90 "make_hlds_error.m"
        {
#line 90 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_error__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_34_34));
#line 90 "make_hlds_error.m"
        }
#line 90 "make_hlds_error.m"
        {
#line 90 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_33_33));
#line 90 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[2])));
#line 90 "make_hlds_error.m"
        }
#line 89 "make_hlds_error.m"
        {
#line 89 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 89 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
#line 89 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_32_32));
#line 89 "make_hlds_error.m"
        }
#line 89 "make_hlds_error.m"
        {
#line 89 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 89 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[18])));
#line 89 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces1_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_30_30));
#line 89 "make_hlds_error.m"
        }
#line 92 "make_hlds_error.m"
        {
#line 92 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_33_33));
#line 92 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_error_scalar_common_1[4])));
#line 92 "make_hlds_error.m"
        }
#line 92 "make_hlds_error.m"
        {
#line 92 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_31_31));
#line 92 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_45_45));
#line 92 "make_hlds_error.m"
        }
#line 91 "make_hlds_error.m"
        {
#line 91 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_error_scalar_common_1[19])));
#line 91 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Pieces2_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_43_43));
#line 91 "make_hlds_error.m"
        }
#line 93 "make_hlds_error.m"
        {
#line 93 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces1_18));
#line 93 "make_hlds_error.m"
        }
#line 93 "make_hlds_error.m"
        {
#line 93 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_55_55));
#line 93 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 93 "make_hlds_error.m"
        }
#line 93 "make_hlds_error.m"
        {
#line 93 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Msg1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 93 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg1_20, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_14));
#line 93 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Msg1_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_54_54));
#line 93 "make_hlds_error.m"
        }
#line 94 "make_hlds_error.m"
        {
#line 94 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 94 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__OrigContext_15));
#line 94 "make_hlds_error.m"
        }
#line 95 "make_hlds_error.m"
        {
#line 95 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 95 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Pieces2_19));
#line 95 "make_hlds_error.m"
        }
#line 95 "make_hlds_error.m"
        {
#line 95 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 95 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_61_61));
#line 95 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 95 "make_hlds_error.m"
        }
#line 94 "make_hlds_error.m"
        {
#line 94 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Msg2_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 94 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_57_57));
#line 94 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 94 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 2) = ((MR_Box) ((MR_Integer) 0));
#line 94 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__Msg2_21, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_60_60));
#line 94 "make_hlds_error.m"
        }
#line 99 "make_hlds_error.m"
        if ((hlds__make_hlds__make_hlds_error__ExtraPieces_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__ExtraMsgs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 99 "make_hlds_error.m"
        else
#line 100 "make_hlds_error.m"
          {
#line 100 "make_hlds_error.m"
            MR_Word hlds__make_hlds__make_hlds_error__V_63_63;
#line 100 "make_hlds_error.m"
            MR_Word hlds__make_hlds__make_hlds_error__V_64_64;
#line 100 "make_hlds_error.m"
            MR_Word hlds__make_hlds__make_hlds_error__V_65_65;

#line 101 "make_hlds_error.m"
            {
#line 101 "make_hlds_error.m"
              hlds__make_hlds__make_hlds_error__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__ExtraPieces_16));
#line 101 "make_hlds_error.m"
            }
#line 101 "make_hlds_error.m"
            {
#line 101 "make_hlds_error.m"
              hlds__make_hlds__make_hlds_error__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_65_65));
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 101 "make_hlds_error.m"
            }
#line 101 "make_hlds_error.m"
            {
#line 101 "make_hlds_error.m"
              hlds__make_hlds__make_hlds_error__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Context_14));
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_64_64));
#line 101 "make_hlds_error.m"
            }
#line 101 "make_hlds_error.m"
            {
#line 101 "make_hlds_error.m"
              hlds__make_hlds__make_hlds_error__ExtraMsgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__ExtraMsgs_22, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_63_63));
#line 101 "make_hlds_error.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__ExtraMsgs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 101 "make_hlds_error.m"
            }
#line 100 "make_hlds_error.m"
          }
#line 104 "make_hlds_error.m"
        {
#line 104 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg2_21));
#line 104 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "make_hlds_error.m"
        }
#line 104 "make_hlds_error.m"
        {
#line 104 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Msg1_20));
#line 104 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_error__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_72_72));
#line 104 "make_hlds_error.m"
        }
#line 104 "make_hlds_error.m"
        {
#line 104 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, hlds__make_hlds__make_hlds_error__V_71_71, hlds__make_hlds__make_hlds_error__ExtraMsgs_22);
        }
#line 103 "make_hlds_error.m"
        {
#line 103 "make_hlds_error.m"
          hlds__make_hlds__make_hlds_error__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 103 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 103 "make_hlds_error.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_error__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_error__V_70_70));
#line 103 "make_hlds_error.m"
        }
#line 105 "make_hlds_error.m"
        {
#line 105 "make_hlds_error.m"
          MR_Word base;
#line 105 "make_hlds_error.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "make_hlds_error.m"
          *hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_27 = base;
#line 105 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_error__Spec_25));
#line 105 "make_hlds_error.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_error__STATE_VARIABLE_Specs_0_26));
#line 105 "make_hlds_error.m"
        }
#line 90 "make_hlds_error.m"
      }
#line 88 "make_hlds_error.m"
  }
#line 32 "make_hlds_error.m"
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
