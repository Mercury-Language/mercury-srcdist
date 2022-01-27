/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module parse_tree.prog_out. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_out__init
ENDINIT
*/

#include "parse_tree.prog_out.mih"


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
#include "term_io.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[6][1];

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[6][2];


#line 281 "prog_out.m"
/* sealed */ struct parse_tree__prog_out__vector_common_type_3_0_s {
#line 281 "prog_out.m"
  const MR_Word parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
#line 281 "prog_out.m"
  const MR_String parse_tree__prog_out__vector_common_type_3_0__vct_3_f_1;
#line 281 "prog_out.m"
};

static /* final */ const struct parse_tree__prog_out__vector_common_type_3_0_s parse_tree__prog_out_vector_common_3[4];



static /* final */ const MR_Box parse_tree__prog_out_scalar_common_1[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "promise_exclusive"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "promise_exhaustive"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "promise_exclusive_exhaustive"))
  },
};

static /* final */ const MR_Box parse_tree__prog_out_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_out_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_out_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_out_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_out_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[1])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_out_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[1])))
  },
};


static /* final */ const struct parse_tree__prog_out__vector_common_type_3_0_s parse_tree__prog_out_vector_common_3[4] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_String) "promise"
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_String) "promise_exclusive"
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_String) "promise_exhaustive"
  },
  /* row 3 */
  {
    (MR_Integer) 2,
    (MR_String) "promise_exclusive_exhaustive"
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



#line 149 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__can_fail_to_string_1_f_0(
#line 149 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 149 "prog_out.m"
{
#line 417 "prog_out.m"
  {
#line 417 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 417 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 417 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 0))
#line 417 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "can_fail";
#line 417 "prog_out.m"
    else
#line 418 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "cannot_fail";
#line 417 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 417 "prog_out.m"
  }
#line 149 "prog_out.m"
}

#line 147 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__determinism_to_string_1_f_0(
#line 147 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 147 "prog_out.m"
{
#line 408 "prog_out.m"
  {
#line 408 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 408 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 408 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 4))
#line 413 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "cc_multi";
#line 408 "prog_out.m"
    else
#line 408 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 5))
#line 412 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "cc_nondet";
#line 408 "prog_out.m"
      else
#line 408 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 0))
#line 408 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = (MR_String) "det";
#line 408 "prog_out.m"
        else
#line 408 "prog_out.m"
          if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 6))
#line 414 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "erroneous";
#line 408 "prog_out.m"
          else
#line 408 "prog_out.m"
            if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 7))
#line 415 "prog_out.m"
              parse_tree__prog_out__HeadVar__2_2 = (MR_String) "failure";
#line 408 "prog_out.m"
            else
#line 408 "prog_out.m"
              if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 2))
#line 411 "prog_out.m"
                parse_tree__prog_out__HeadVar__2_2 = (MR_String) "multi";
#line 408 "prog_out.m"
              else
#line 408 "prog_out.m"
                if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 3))
#line 410 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "nondet";
#line 408 "prog_out.m"
                else
#line 409 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "semidet";
#line 408 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 408 "prog_out.m"
  }
#line 147 "prog_out.m"
}

#line 145 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__arg_tabling_method_to_string_1_f_0(
#line 145 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 145 "prog_out.m"
{
#line 404 "prog_out.m"
  {
#line 404 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 404 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 404 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 1))
#line 405 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
#line 404 "prog_out.m"
    else
#line 404 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 2))
#line 406 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
#line 404 "prog_out.m"
      else
#line 404 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
#line 404 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 404 "prog_out.m"
  }
#line 145 "prog_out.m"
}

#line 143 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_f_0(
#line 143 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 143 "prog_out.m"
{
#line 400 "prog_out.m"
  {
#line 400 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 400 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 400 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "output";
#line 400 "prog_out.m"
    else
#line 400 "prog_out.m"
      {
#line 400 "prog_out.m"
        MR_Word parse_tree__prog_out__ArgTablingMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 404 "prog_out.m"
        if ((parse_tree__prog_out__ArgTablingMethod_3 == (MR_Integer) 1))
#line 405 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = (MR_String) "addr";
#line 404 "prog_out.m"
        else
#line 404 "prog_out.m"
          if ((parse_tree__prog_out__ArgTablingMethod_3 == (MR_Integer) 2))
#line 406 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_implied";
#line 404 "prog_out.m"
          else
#line 404 "prog_out.m"
            parse_tree__prog_out__HeadVar__2_2 = (MR_String) "value";
#line 400 "prog_out.m"
      }
#line 400 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 400 "prog_out.m"
  }
#line 143 "prog_out.m"
}

#line 141 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_eval_method_3_p_0(
#line 141 "prog_out.m"
  MR_Word parse_tree__prog_out__EvalMethod_4)
#line 141 "prog_out.m"
{
#line 397 "prog_out.m"
  {
#line 397 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 397 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8;

#line 398 "prog_out.m"
    {
#line 398 "prog_out.m"
      parse_tree__prog_out__V_8_8 = parse_tree__prog_out__eval_method_to_string_1_f_0(parse_tree__prog_out__EvalMethod_4);
    }
#line 398 "prog_out.m"
    {
#line 398 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
#line 398 "prog_out.m"
      return;
    }
#line 397 "prog_out.m"
  }
#line 141 "prog_out.m"
}

#line 140 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_string_1_f_0(
#line 140 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 140 "prog_out.m"
{
#line 363 "prog_out.m"
  {
#line 363 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 363 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 363 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 364 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
#line 363 "prog_out.m"
    else
#line 363 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 365 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
#line 363 "prog_out.m"
      else
#line 363 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = (MR_String) "normal";
#line 363 "prog_out.m"
        else
#line 363 "prog_out.m"
          if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 366 "prog_out.m"
            {
#line 366 "prog_out.m"
              MR_Word parse_tree__prog_out__MinimalMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 370 "prog_out.m"
              if ((parse_tree__prog_out__MinimalMethod_3 == (MR_Integer) 1))
#line 369 "prog_out.m"
                parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_consumer";
#line 370 "prog_out.m"
              else
#line 370 "prog_out.m"
                if ((parse_tree__prog_out__MinimalMethod_3 == (MR_Integer) 2))
#line 372 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
#line 370 "prog_out.m"
                else
#line 375 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_stack_copy";
#line 366 "prog_out.m"
            }
#line 363 "prog_out.m"
          else
#line 377 "prog_out.m"
            {
#line 377 "prog_out.m"
              MR_Word parse_tree__prog_out__EntryKind_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "prog_out.m"
              MR_Word parse_tree__prog_out__IsUnitize_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "prog_out.m"
              MR_String parse_tree__prog_out__EntryKindStr_8;
#line 377 "prog_out.m"
              MR_String parse_tree__prog_out__UnitizeStr_9;
#line 377 "prog_out.m"
              MR_String parse_tree__prog_out__V_11_11;
#line 377 "prog_out.m"
              MR_String parse_tree__prog_out__V_12_12;

#line 381 "prog_out.m"
              if ((parse_tree__prog_out__EntryKind_5 == (MR_Integer) 0))
#line 380 "prog_out.m"
                parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_outputs, ";
#line 381 "prog_out.m"
              else
#line 381 "prog_out.m"
                if ((parse_tree__prog_out__EntryKind_5 == (MR_Integer) 2))
#line 386 "prog_out.m"
                  parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_inputs_outputs, ";
#line 381 "prog_out.m"
                else
#line 383 "prog_out.m"
                  parse_tree__prog_out__EntryKindStr_8 = (MR_String) "entry_stores_procid_outputs, ";
#line 391 "prog_out.m"
              if ((parse_tree__prog_out__IsUnitize_6 == (MR_Integer) 1))
#line 393 "prog_out.m"
                parse_tree__prog_out__UnitizeStr_9 = (MR_String) "alone";
#line 391 "prog_out.m"
              else
#line 390 "prog_out.m"
                parse_tree__prog_out__UnitizeStr_9 = (MR_String) "unitize";
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__UnitizeStr_9, (MR_String) ")");
              }
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                parse_tree__prog_out__V_11_11 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__EntryKindStr_8, parse_tree__prog_out__V_12_12);
              }
#line 395 "prog_out.m"
              {
#line 395 "prog_out.m"
                return parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io(", parse_tree__prog_out__V_11_11);
              }
#line 377 "prog_out.m"
            }
#line 363 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 363 "prog_out.m"
  }
#line 140 "prog_out.m"
}

#line 136 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(
#line 136 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 136 "prog_out.m"
{
#line 341 "prog_out.m"
  {
#line 341 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 341 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 341 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 343 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "loop_check";
#line 341 "prog_out.m"
    else
#line 341 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 344 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "memo";
#line 341 "prog_out.m"
      else
#line 341 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "prog_out.m"
          {
#line 342 "prog_out.m"
            {
#line 342 "prog_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "normal");
            }
#line 341 "prog_out.m"
          }
#line 341 "prog_out.m"
        else
#line 341 "prog_out.m"
          if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 345 "prog_out.m"
            {
#line 345 "prog_out.m"
              MR_Word parse_tree__prog_out__MinimalMethod_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 353 "prog_out.m"
              if ((parse_tree__prog_out__MinimalMethod_7 == (MR_Integer) 1))
#line 352 "prog_out.m"
                parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks";
#line 353 "prog_out.m"
              else
#line 353 "prog_out.m"
                if ((parse_tree__prog_out__MinimalMethod_7 == (MR_Integer) 2))
#line 355 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model_own_stacks_generator";
#line 353 "prog_out.m"
                else
#line 358 "prog_out.m"
                  parse_tree__prog_out__HeadVar__2_2 = (MR_String) "minimal_model";
#line 345 "prog_out.m"
            }
#line 341 "prog_out.m"
          else
#line 360 "prog_out.m"
            {
#line 361 "prog_out.m"
              {
#line 361 "prog_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_out", (MR_String) "function \140parse_tree.prog_out.eval_method_to_pragma_name\'/1", (MR_String) "io");
              }
#line 360 "prog_out.m"
            }
#line 341 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 341 "prog_out.m"
  }
#line 136 "prog_out.m"
}

#line 131 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__purity_prefix_to_string_1_f_0(
#line 131 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_3)
#line 131 "prog_out.m"
{
#line 323 "prog_out.m"
  {
#line 323 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 323 "prog_out.m"
    MR_String parse_tree__prog_out__String_4;

#line 323 "prog_out.m"
    if ((parse_tree__prog_out__Purity_3 == (MR_Integer) 0))
#line 324 "prog_out.m"
      parse_tree__prog_out__String_4 = (MR_String) "";
#line 323 "prog_out.m"
    else
#line 328 "prog_out.m"
      {
#line 328 "prog_out.m"
        MR_String parse_tree__prog_out__PurityName_5;

#line 337 "prog_out.m"
        if ((parse_tree__prog_out__Purity_3 == (MR_Integer) 2))
#line 339 "prog_out.m"
          parse_tree__prog_out__PurityName_5 = (MR_String) "impure";
#line 337 "prog_out.m"
        else
#line 338 "prog_out.m"
          parse_tree__prog_out__PurityName_5 = (MR_String) "semipure";
#line 330 "prog_out.m"
        {
#line 330 "prog_out.m"
          return parse_tree__prog_out__String_4 = mercury__string__append_2_f_0(parse_tree__prog_out__PurityName_5, (MR_String) " ");
        }
#line 328 "prog_out.m"
      }
#line 323 "prog_out.m"
    return parse_tree__prog_out__String_4;
#line 323 "prog_out.m"
  }
#line 131 "prog_out.m"
}

#line 130 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_purity_prefix_3_p_0(
#line 130 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_4)
#line 130 "prog_out.m"
{
#line 312 "prog_out.m"
  {
#line 312 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 312 "prog_out.m"
    if ((parse_tree__prog_out__Purity_4 == (MR_Integer) 0))
#line 312 "prog_out.m"
      {
#line 312 "prog_out.m"
      }
#line 312 "prog_out.m"
    else
#line 316 "prog_out.m"
      {
#line 316 "prog_out.m"
        MR_String parse_tree__prog_out__String_15;

#line 337 "prog_out.m"
        if ((parse_tree__prog_out__Purity_4 == (MR_Integer) 2))
#line 339 "prog_out.m"
          parse_tree__prog_out__String_15 = (MR_String) "impure";
#line 337 "prog_out.m"
        else
#line 338 "prog_out.m"
          parse_tree__prog_out__String_15 = (MR_String) "semipure";
#line 335 "prog_out.m"
        {
#line 335 "prog_out.m"
          mercury__io__write_string_3_p_0(parse_tree__prog_out__String_15);
        }
#line 318 "prog_out.m"
        {
#line 318 "prog_out.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
#line 318 "prog_out.m"
          return;
        }
#line 316 "prog_out.m"
      }
#line 312 "prog_out.m"
  }
#line 130 "prog_out.m"
}

#line 124 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__purity_name_2_p_1(
#line 124 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 124 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 124 "prog_out.m"
{
#line 337 "prog_out.m"
  {
#line 337 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 337 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "pure") == 0))
#line 337 "prog_out.m"
      {
#line 337 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 0;
#line 337 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 337 "prog_out.m"
      }
#line 337 "prog_out.m"
    else
#line 337 "prog_out.m"
      if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "impure") == 0))
#line 339 "prog_out.m"
        {
#line 339 "prog_out.m"
          *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 2;
#line 339 "prog_out.m"
          parse_tree__prog_out__succeeded = MR_TRUE;
#line 339 "prog_out.m"
        }
#line 337 "prog_out.m"
      else
#line 337 "prog_out.m"
        if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "semipure") == 0))
#line 338 "prog_out.m"
          {
#line 338 "prog_out.m"
            *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_TRUE;
#line 338 "prog_out.m"
          }
#line 337 "prog_out.m"
        else
#line 337 "prog_out.m"
          parse_tree__prog_out__succeeded = MR_FALSE;
#line 337 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 337 "prog_out.m"
  }
#line 124 "prog_out.m"
}

#line 123 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__purity_name_2_p_0(
#line 123 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1,
#line 123 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2)
#line 123 "prog_out.m"
{
#line 337 "prog_out.m"
  {
#line 337 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 337 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 2))
#line 339 "prog_out.m"
      *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "impure";
#line 337 "prog_out.m"
    else
#line 337 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 0))
#line 337 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pure";
#line 337 "prog_out.m"
      else
#line 338 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "semipure";
#line 337 "prog_out.m"
  }
#line 123 "prog_out.m"
}

#line 118 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_purity_3_p_0(
#line 118 "prog_out.m"
  MR_Word parse_tree__prog_out__Purity_4)
#line 118 "prog_out.m"
{
#line 333 "prog_out.m"
  {
#line 333 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 333 "prog_out.m"
    MR_String parse_tree__prog_out__String_6;

#line 337 "prog_out.m"
    if ((parse_tree__prog_out__Purity_4 == (MR_Integer) 2))
#line 339 "prog_out.m"
      parse_tree__prog_out__String_6 = (MR_String) "impure";
#line 337 "prog_out.m"
    else
#line 337 "prog_out.m"
      if ((parse_tree__prog_out__Purity_4 == (MR_Integer) 0))
#line 337 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "pure";
#line 337 "prog_out.m"
      else
#line 338 "prog_out.m"
        parse_tree__prog_out__String_6 = (MR_String) "semipure";
#line 335 "prog_out.m"
    {
#line 335 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__String_6);
#line 335 "prog_out.m"
      return;
    }
#line 333 "prog_out.m"
  }
#line 118 "prog_out.m"
}

#line 114 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_str_1_f_0(
#line 114 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 114 "prog_out.m"
{
#line 307 "prog_out.m"
  {
#line 307 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 307 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 307 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 1))
#line 308 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "func";
#line 307 "prog_out.m"
    else
#line 307 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "pred";
#line 307 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 307 "prog_out.m"
  }
#line 114 "prog_out.m"
}

#line 110 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(
#line 110 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 110 "prog_out.m"
{
#line 304 "prog_out.m"
  {
#line 304 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 304 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 304 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 1))
#line 305 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "function";
#line 304 "prog_out.m"
    else
#line 304 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "predicate";
#line 304 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 304 "prog_out.m"
  }
#line 110 "prog_out.m"
}

#line 106 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_pred_or_func_3_p_0(
#line 106 "prog_out.m"
  MR_Word parse_tree__prog_out__PorF_4)
#line 106 "prog_out.m"
{
#line 301 "prog_out.m"
  {
#line 301 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 301 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8;

#line 304 "prog_out.m"
    if ((parse_tree__prog_out__PorF_4 == (MR_Integer) 1))
#line 305 "prog_out.m"
      parse_tree__prog_out__V_8_8 = (MR_String) "function";
#line 304 "prog_out.m"
    else
#line 304 "prog_out.m"
      parse_tree__prog_out__V_8_8 = (MR_String) "predicate";
#line 302 "prog_out.m"
    {
#line 302 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
#line 302 "prog_out.m"
      return;
    }
#line 301 "prog_out.m"
  }
#line 106 "prog_out.m"
}

#line 102 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_1(
#line 102 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 102 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 102 "prog_out.m"
{
#line 293 "prog_out.m"
  {
#line 293 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 293 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "int") == 0))
#line 293 "prog_out.m"
      {
#line 293 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 293 "prog_out.m"
      }
#line 293 "prog_out.m"
    else
#line 293 "prog_out.m"
      if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "float") == 0))
#line 294 "prog_out.m"
        {
#line 294 "prog_out.m"
          *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 1;
#line 294 "prog_out.m"
          parse_tree__prog_out__succeeded = MR_TRUE;
#line 294 "prog_out.m"
        }
#line 293 "prog_out.m"
      else
#line 293 "prog_out.m"
        if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "string") == 0))
#line 295 "prog_out.m"
          {
#line 295 "prog_out.m"
            *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 2;
#line 295 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_TRUE;
#line 295 "prog_out.m"
          }
#line 293 "prog_out.m"
        else
#line 293 "prog_out.m"
          if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "character") == 0))
#line 296 "prog_out.m"
            {
#line 296 "prog_out.m"
              *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 3;
#line 296 "prog_out.m"
              parse_tree__prog_out__succeeded = MR_TRUE;
#line 296 "prog_out.m"
            }
#line 293 "prog_out.m"
          else
#line 293 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_FALSE;
#line 293 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 293 "prog_out.m"
  }
#line 102 "prog_out.m"
}

#line 101 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__builtin_type_to_string_2_p_0(
#line 101 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1,
#line 101 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2)
#line 101 "prog_out.m"
{
#line 293 "prog_out.m"
  {
#line 293 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 293 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 3))
#line 296 "prog_out.m"
      *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "character";
#line 293 "prog_out.m"
    else
#line 293 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 1))
#line 294 "prog_out.m"
        *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "float";
#line 293 "prog_out.m"
      else
#line 293 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 0))
#line 293 "prog_out.m"
          *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "int";
#line 293 "prog_out.m"
        else
#line 295 "prog_out.m"
          *parse_tree__prog_out__HeadVar__2_2 = (MR_String) "string";
#line 293 "prog_out.m"
  }
#line 101 "prog_out.m"
}

#line 98 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__type_name_to_string_1_f_0(
#line 98 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 98 "prog_out.m"
{
#line 290 "prog_out.m"
  {
#line 290 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 290 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;
#line 290 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "prog_out.m"
    MR_Integer parse_tree__prog_out___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 291 "prog_out.m"
    {
#line 291 "prog_out.m"
      return parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__Name_3);
    }
#line 290 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 290 "prog_out.m"
  }
#line 98 "prog_out.m"
}

#line 96 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_type_name_3_p_0(
#line 96 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 96 "prog_out.m"
{
#line 287 "prog_out.m"
  {
#line 287 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 287 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "prog_out.m"
    MR_Integer parse_tree__prog_out___Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 288 "prog_out.m"
    {
#line 288 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
#line 288 "prog_out.m"
      return;
    }
#line 287 "prog_out.m"
  }
#line 96 "prog_out.m"
}

#line 94 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_2(
#line 94 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 94 "prog_out.m"
  MR_String * parse_tree__prog_out__HeadVar__2_2,
#line 94 "prog_out.m"
  MR_Cont parse_tree__prog_out__cont,
#line 94 "prog_out.m"
  void * parse_tree__prog_out__cont_env_ptr)
#line 94 "prog_out.m"
{
#line 281 "prog_out.m"
  {
#line 281 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 281 "prog_out.m"
    {
#line 281 "prog_out.m"
      MR_Integer parse_tree__prog_out__slot_0 = (MR_Integer) 0;

#line 281 "prog_out.m"
      do
#line 281 "prog_out.m"
        {
#line 281 "prog_out.m"
          *parse_tree__prog_out__HeadVar__1_1 = ((&parse_tree__prog_out_vector_common_3[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_0;
#line 281 "prog_out.m"
          *parse_tree__prog_out__HeadVar__2_2 = ((&parse_tree__prog_out_vector_common_3[0 + parse_tree__prog_out__slot_0]))->parse_tree__prog_out__vector_common_type_3_0__vct_3_f_1;
#line 281 "prog_out.m"
          {
#line 281 "prog_out.m"
            parse_tree__prog_out__cont(parse_tree__prog_out__cont_env_ptr);
          }
#line 281 "prog_out.m"
          parse_tree__prog_out__slot_0 = (parse_tree__prog_out__slot_0 + (MR_Integer) 1);
#line 281 "prog_out.m"
        }
#line 281 "prog_out.m"
      while ((parse_tree__prog_out__slot_0 < (MR_Integer) 4));
#line 281 "prog_out.m"
    }
#line 281 "prog_out.m"
  }
#line 94 "prog_out.m"
}

#line 93 "prog_out.m"
MR_bool MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_1(
#line 93 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__1_1,
#line 93 "prog_out.m"
  MR_String parse_tree__prog_out__HeadVar__2_2)
#line 93 "prog_out.m"
{
#line 281 "prog_out.m"
  {
#line 281 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 281 "prog_out.m"
    if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "promise") == 0))
#line 281 "prog_out.m"
      {
#line 281 "prog_out.m"
        *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 3;
#line 281 "prog_out.m"
        parse_tree__prog_out__succeeded = MR_TRUE;
#line 281 "prog_out.m"
      }
#line 281 "prog_out.m"
    else
#line 281 "prog_out.m"
      if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "promise_exclusive") == 0))
#line 282 "prog_out.m"
        {
#line 282 "prog_out.m"
          *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 0;
#line 282 "prog_out.m"
          parse_tree__prog_out__succeeded = MR_TRUE;
#line 282 "prog_out.m"
        }
#line 281 "prog_out.m"
      else
#line 281 "prog_out.m"
        if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "promise_exhaustive") == 0))
#line 283 "prog_out.m"
          {
#line 283 "prog_out.m"
            *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 1;
#line 283 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_TRUE;
#line 283 "prog_out.m"
          }
#line 281 "prog_out.m"
        else
#line 281 "prog_out.m"
          if ((strcmp(parse_tree__prog_out__HeadVar__2_2, (MR_String) "promise_exclusive_exhaustive") == 0))
#line 284 "prog_out.m"
            {
#line 284 "prog_out.m"
              *parse_tree__prog_out__HeadVar__1_1 = (MR_Integer) 2;
#line 284 "prog_out.m"
              parse_tree__prog_out__succeeded = MR_TRUE;
#line 284 "prog_out.m"
            }
#line 281 "prog_out.m"
          else
#line 281 "prog_out.m"
            parse_tree__prog_out__succeeded = MR_FALSE;
#line 281 "prog_out.m"
    return parse_tree__prog_out__succeeded;
#line 281 "prog_out.m"
  }
#line 93 "prog_out.m"
}

#line 92 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__promise_to_string_1_f_0(
#line 92 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 92 "prog_out.m"
{
#line 281 "prog_out.m"
  {
#line 281 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 281 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 281 "prog_out.m"
    if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 0))
#line 282 "prog_out.m"
      parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_exclusive";
#line 281 "prog_out.m"
    else
#line 281 "prog_out.m"
      if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 2))
#line 285 "prog_out.m"
        parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_exclusive_exhaustive";
#line 281 "prog_out.m"
      else
#line 281 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == (MR_Integer) 1))
#line 283 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise_exhaustive";
#line 281 "prog_out.m"
        else
#line 281 "prog_out.m"
          parse_tree__prog_out__HeadVar__2_2 = (MR_String) "promise";
#line 281 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 281 "prog_out.m"
  }
#line 92 "prog_out.m"
}

#line 89 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_promise_type_3_p_0(
#line 89 "prog_out.m"
  MR_Word parse_tree__prog_out__PromiseType_4)
#line 89 "prog_out.m"
{
#line 298 "prog_out.m"
  {
#line 298 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 298 "prog_out.m"
    MR_String parse_tree__prog_out__V_8_8;

#line 281 "prog_out.m"
    if ((parse_tree__prog_out__PromiseType_4 == (MR_Integer) 0))
#line 282 "prog_out.m"
      parse_tree__prog_out__V_8_8 = (MR_String) "promise_exclusive";
#line 281 "prog_out.m"
    else
#line 281 "prog_out.m"
      if ((parse_tree__prog_out__PromiseType_4 == (MR_Integer) 2))
#line 285 "prog_out.m"
        parse_tree__prog_out__V_8_8 = (MR_String) "promise_exclusive_exhaustive";
#line 281 "prog_out.m"
      else
#line 281 "prog_out.m"
        if ((parse_tree__prog_out__PromiseType_4 == (MR_Integer) 1))
#line 283 "prog_out.m"
          parse_tree__prog_out__V_8_8 = (MR_String) "promise_exhaustive";
#line 281 "prog_out.m"
        else
#line 281 "prog_out.m"
          parse_tree__prog_out__V_8_8 = (MR_String) "promise";
#line 299 "prog_out.m"
    {
#line 299 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_8_8);
#line 299 "prog_out.m"
      return;
    }
#line 298 "prog_out.m"
  }
#line 89 "prog_out.m"
}

#line 87 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_string_list_3_p_0(
#line 87 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 87 "prog_out.m"
{
#line 273 "prog_out.m"
  while (MR_TRUE)
#line 273 "prog_out.m"
    {
#line 273 "prog_out.m"
      /* tailcall optimized into a loop */
#line 273 "prog_out.m"
      {
#line 273 "prog_out.m"
        MR_bool parse_tree__prog_out__succeeded;

#line 273 "prog_out.m"
        if ((parse_tree__prog_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "prog_out.m"
          {
#line 273 "prog_out.m"
          }
#line 273 "prog_out.m"
        else
#line 273 "prog_out.m"
          {
#line 273 "prog_out.m"
            MR_Word parse_tree__prog_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "prog_out.m"
            MR_String parse_tree__prog_out__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 273 "prog_out.m"
            if ((parse_tree__prog_out__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "prog_out.m"
              {
#line 275 "prog_out.m"
                mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
#line 275 "prog_out.m"
                return;
              }
#line 273 "prog_out.m"
            else
#line 276 "prog_out.m"
              {
#line 276 "prog_out.m"
                MR_Word parse_tree__prog_out__V_48_48;
#line 276 "prog_out.m"
                MR_String parse_tree__prog_out__V_49_49;

#line 277 "prog_out.m"
                {
#line 277 "prog_out.m"
                  mercury__io__write_string_3_p_0(parse_tree__prog_out__V_26_26);
                }
#line 278 "prog_out.m"
                {
#line 278 "prog_out.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 274 "prog_out.m"
                parse_tree__prog_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 0)));
#line 274 "prog_out.m"
                parse_tree__prog_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_25_25, (MR_Integer) 1)));
#line 273 "prog_out.m"
                if ((parse_tree__prog_out__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "prog_out.m"
                  {
#line 275 "prog_out.m"
                    mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
#line 275 "prog_out.m"
                    return;
                  }
#line 273 "prog_out.m"
                else
#line 276 "prog_out.m"
                  {
#line 277 "prog_out.m"
                    {
#line 277 "prog_out.m"
                      mercury__io__write_string_3_p_0(parse_tree__prog_out__V_49_49);
                    }
#line 278 "prog_out.m"
                    {
#line 278 "prog_out.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 279 "prog_out.m"
                    /* direct tailcall eliminated */
#line 279 "prog_out.m"
                    {
#line 279 "prog_out.m"
                      MR_Word parse_tree__prog_out__HeadVar__1__tmp_copy_1 = parse_tree__prog_out__V_48_48;

#line 279 "prog_out.m"
                      parse_tree__prog_out__HeadVar__1_1 = parse_tree__prog_out__HeadVar__1__tmp_copy_1;
#line 279 "prog_out.m"
                    }
#line 279 "prog_out.m"
                    continue;
#line 276 "prog_out.m"
                  }
#line 276 "prog_out.m"
              }
#line 273 "prog_out.m"
          }
#line 273 "prog_out.m"
      }
#line 273 "prog_out.m"
      break;
#line 273 "prog_out.m"
    }
#line 87 "prog_out.m"
}

#line 85 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__module_spec_to_escaped_string_1_f_0(
#line 85 "prog_out.m"
  MR_Word parse_tree__prog_out__ModuleSpec_3)
#line 85 "prog_out.m"
{
#line 269 "prog_out.m"
  {
#line 269 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 269 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 269 "prog_out.m"
    {
#line 269 "prog_out.m"
      return parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleSpec_3);
    }
#line 269 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 269 "prog_out.m"
  }
#line 85 "prog_out.m"
}

#line 84 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_module_spec_3_p_0(
#line 84 "prog_out.m"
  MR_Word parse_tree__prog_out__ModuleSpec_4)
#line 84 "prog_out.m"
{
#line 266 "prog_out.m"
  {
#line 266 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 266 "prog_out.m"
    {
#line 266 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__ModuleSpec_4);
#line 266 "prog_out.m"
      return;
    }
#line 266 "prog_out.m"
  }
#line 84 "prog_out.m"
}

#line 79 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_p_0(
#line 79 "prog_out.m"
  MR_Word parse_tree__prog_out__SimpleCallId_3,
#line 79 "prog_out.m"
  MR_Word * parse_tree__prog_out__HeadVar__2_2)
#line 79 "prog_out.m"
{
#line 261 "prog_out.m"
  {
#line 261 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 261 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 1)));
#line 261 "prog_out.m"
    MR_Integer parse_tree__prog_out__OrigArity_5;
#line 261 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 0)));
#line 261 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__SimpleCallId_3, (MR_Integer) 2)));

#line 263 "prog_out.m"
    {
#line 263 "prog_out.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_6, &parse_tree__prog_out__OrigArity_5, parse_tree__prog_out__Arity_7);
    }
#line 261 "prog_out.m"
    {
#line 261 "prog_out.m"
      MR_Word base;
#line 261 "prog_out.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "prog_out.m"
      *parse_tree__prog_out__HeadVar__2_2 = base;
#line 261 "prog_out.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_out__SymName_4));
#line 261 "prog_out.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_5));
#line 261 "prog_out.m"
    }
#line 261 "prog_out.m"
  }
#line 79 "prog_out.m"
}

#line 77 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_3_f_0(
#line 77 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_5,
#line 77 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_6,
#line 77 "prog_out.m"
  MR_Integer parse_tree__prog_out__Arity_7)
#line 77 "prog_out.m"
{
#line 230 "prog_out.m"
  {
#line 230 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 230 "prog_out.m"
    MR_String parse_tree__prog_out__Str_8;
#line 230 "prog_out.m"
    MR_String parse_tree__prog_out__Name_9;
#line 230 "prog_out.m"
    MR_Word parse_tree__prog_out__Pieces_12;

#line 235 "prog_out.m"
    {
#line 235 "prog_out.m"
      parse_tree__prog_out__Name_9 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_out__SymName_6);
    }
#line 237 "prog_out.m"
    {
#line 237 "prog_out.m"
      parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise__");
    }
#line 1602 "parse_tree.prog_out.c"
    if (parse_tree__prog_out__succeeded)
#line 1604 "parse_tree.prog_out.c"
      {
#line 250 "prog_out.m"
        parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[2]);
#line 1608 "parse_tree.prog_out.c"
      }
#line 1610 "parse_tree.prog_out.c"
    else
#line 1612 "parse_tree.prog_out.c"
      {
#line 239 "prog_out.m"
        {
#line 239 "prog_out.m"
          parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive__");
        }
#line 1619 "parse_tree.prog_out.c"
        if (parse_tree__prog_out__succeeded)
#line 1621 "parse_tree.prog_out.c"
          {
#line 250 "prog_out.m"
            parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[3]);
#line 1625 "parse_tree.prog_out.c"
          }
#line 1627 "parse_tree.prog_out.c"
        else
#line 1629 "parse_tree.prog_out.c"
          {
#line 241 "prog_out.m"
            {
#line 241 "prog_out.m"
              parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exhaustive__");
            }
#line 1636 "parse_tree.prog_out.c"
            if (parse_tree__prog_out__succeeded)
#line 1638 "parse_tree.prog_out.c"
              {
#line 250 "prog_out.m"
                parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[4]);
#line 1642 "parse_tree.prog_out.c"
              }
#line 1644 "parse_tree.prog_out.c"
            else
#line 1646 "parse_tree.prog_out.c"
              {
#line 243 "prog_out.m"
                {
#line 243 "prog_out.m"
                  parse_tree__prog_out__succeeded = mercury__string__prefix_2_p_0(parse_tree__prog_out__Name_9, (MR_String) "promise_exclusive_exhaustive__");
                }
#line 1653 "parse_tree.prog_out.c"
                if (parse_tree__prog_out__succeeded)
#line 1655 "parse_tree.prog_out.c"
                  {
#line 250 "prog_out.m"
                    parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_out_scalar_common_2[5]);
#line 1659 "parse_tree.prog_out.c"
                  }
#line 1661 "parse_tree.prog_out.c"
                else
#line 1663 "parse_tree.prog_out.c"
                  {
#line 1665 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__AdjustedSymNameAndArity_14;
#line 1667 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_23_23;
#line 1669 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_24_24;
#line 1671 "parse_tree.prog_out.c"
                    MR_Word parse_tree__prog_out__V_25_25;
#line 1673 "parse_tree.prog_out.c"
                    MR_Integer parse_tree__prog_out__OrigArity_35;

#line 263 "prog_out.m"
                    {
#line 263 "prog_out.m"
                      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_out__PredOrFunc_5, &parse_tree__prog_out__OrigArity_35, parse_tree__prog_out__Arity_7);
                    }
#line 261 "prog_out.m"
                    {
#line 261 "prog_out.m"
                      parse_tree__prog_out__AdjustedSymNameAndArity_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "prog_out.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 0) = ((MR_Box) (parse_tree__prog_out__SymName_6));
#line 261 "prog_out.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_out__AdjustedSymNameAndArity_14, 1) = ((MR_Box) (parse_tree__prog_out__OrigArity_35));
#line 261 "prog_out.m"
                    }
#line 256 "prog_out.m"
                    {
#line 256 "prog_out.m"
                      parse_tree__prog_out__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 256 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_23_23, 1) = ((MR_Box) (parse_tree__prog_out__PredOrFunc_5));
#line 256 "prog_out.m"
                    }
#line 257 "prog_out.m"
                    {
#line 257 "prog_out.m"
                      parse_tree__prog_out__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 257 "prog_out.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_out__V_25_25, 1) = ((MR_Box) (parse_tree__prog_out__AdjustedSymNameAndArity_14));
#line 257 "prog_out.m"
                    }
#line 257 "prog_out.m"
                    {
#line 257 "prog_out.m"
                      parse_tree__prog_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 0) = ((MR_Box) (parse_tree__prog_out__V_25_25));
#line 257 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_out.m"
                    }
#line 256 "prog_out.m"
                    {
#line 256 "prog_out.m"
                      parse_tree__prog_out__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 0) = ((MR_Box) (parse_tree__prog_out__V_23_23));
#line 256 "prog_out.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_out__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_out__V_24_24));
#line 256 "prog_out.m"
                    }
#line 1731 "parse_tree.prog_out.c"
                  }
#line 1733 "parse_tree.prog_out.c"
              }
#line 1735 "parse_tree.prog_out.c"
          }
#line 1737 "parse_tree.prog_out.c"
      }
#line 259 "prog_out.m"
    {
#line 259 "prog_out.m"
      return parse_tree__prog_out__Str_8 = parse_tree__error_util__error_pieces_to_string_1_f_0(parse_tree__prog_out__Pieces_12);
    }
#line 230 "prog_out.m"
    return parse_tree__prog_out__Str_8;
#line 230 "prog_out.m"
  }
#line 77 "prog_out.m"
}

#line 75 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_5_p_0(
#line 75 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_6,
#line 75 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_7,
#line 75 "prog_out.m"
  MR_Integer parse_tree__prog_out__Arity_8)
#line 75 "prog_out.m"
{
#line 220 "prog_out.m"
  {
#line 220 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 220 "prog_out.m"
    MR_String parse_tree__prog_out__Str_10;

#line 221 "prog_out.m"
    {
#line 221 "prog_out.m"
      parse_tree__prog_out__Str_10 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_6, parse_tree__prog_out__SymName_7, parse_tree__prog_out__Arity_8);
    }
#line 222 "prog_out.m"
    {
#line 222 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_10);
#line 222 "prog_out.m"
      return;
    }
#line 220 "prog_out.m"
  }
#line 75 "prog_out.m"
}

#line 73 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_2_f_0(
#line 73 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_4,
#line 73 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2)
#line 73 "prog_out.m"
{
#line 227 "prog_out.m"
  {
#line 227 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 227 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__3_3;
#line 227 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));

#line 228 "prog_out.m"
    {
#line 228 "prog_out.m"
      return parse_tree__prog_out__HeadVar__3_3 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__SymName_5, parse_tree__prog_out__Arity_6);
    }
#line 227 "prog_out.m"
    return parse_tree__prog_out__HeadVar__3_3;
#line 227 "prog_out.m"
  }
#line 73 "prog_out.m"
}

#line 71 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_4_p_0(
#line 71 "prog_out.m"
  MR_Word parse_tree__prog_out__PredOrFunc_5,
#line 71 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__2_2)
#line 71 "prog_out.m"
{
#line 216 "prog_out.m"
  {
#line 216 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 216 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "prog_out.m"
    MR_String parse_tree__prog_out__Str_9;

#line 217 "prog_out.m"
    {
#line 217 "prog_out.m"
      parse_tree__prog_out__Str_9 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_5, parse_tree__prog_out__Name_6, parse_tree__prog_out__Arity_7);
    }
#line 218 "prog_out.m"
    {
#line 218 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_9);
#line 218 "prog_out.m"
      return;
    }
#line 216 "prog_out.m"
  }
#line 71 "prog_out.m"
}

#line 69 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__simple_call_id_to_string_1_f_0(
#line 69 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 69 "prog_out.m"
{
#line 224 "prog_out.m"
  {
#line 224 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 224 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;
#line 224 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));

#line 225 "prog_out.m"
    {
#line 225 "prog_out.m"
      return parse_tree__prog_out__HeadVar__2_2 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_3, parse_tree__prog_out__SymName_4, parse_tree__prog_out__Arity_5);
    }
#line 224 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 224 "prog_out.m"
  }
#line 69 "prog_out.m"
}

#line 68 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_simple_call_id_3_p_0(
#line 68 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 68 "prog_out.m"
{
#line 212 "prog_out.m"
  {
#line 212 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 212 "prog_out.m"
    MR_Word parse_tree__prog_out__PredOrFunc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 2)));
#line 212 "prog_out.m"
    MR_String parse_tree__prog_out__Str_8;

#line 213 "prog_out.m"
    {
#line 213 "prog_out.m"
      parse_tree__prog_out__Str_8 = parse_tree__prog_out__simple_call_id_to_string_3_f_0(parse_tree__prog_out__PredOrFunc_4, parse_tree__prog_out__Name_5, parse_tree__prog_out__Arity_6);
    }
#line 214 "prog_out.m"
    {
#line 214 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__Str_8);
#line 214 "prog_out.m"
      return;
    }
#line 212 "prog_out.m"
  }
#line 68 "prog_out.m"
}

#line 66 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(
#line 66 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 66 "prog_out.m"
{
#line 207 "prog_out.m"
  {
#line 207 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 207 "prog_out.m"
    MR_String parse_tree__prog_out__String_5;
#line 207 "prog_out.m"
    MR_Word parse_tree__prog_out__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "prog_out.m"
    MR_String parse_tree__prog_out__SymNameString_6;
#line 207 "prog_out.m"
    MR_String parse_tree__prog_out__ArityString_7;
#line 207 "prog_out.m"
    MR_Word parse_tree__prog_out__V_8_8;
#line 207 "prog_out.m"
    MR_Word parse_tree__prog_out__V_9_9;
#line 207 "prog_out.m"
    MR_Word parse_tree__prog_out__V_11_11;

#line 208 "prog_out.m"
    {
#line 208 "prog_out.m"
      parse_tree__prog_out__SymNameString_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_out__SymName_3);
    }
#line 209 "prog_out.m"
    {
#line 209 "prog_out.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_out__Arity_4, &parse_tree__prog_out__ArityString_7);
    }
#line 210 "prog_out.m"
    {
#line 210 "prog_out.m"
      parse_tree__prog_out__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 0) = ((MR_Box) (parse_tree__prog_out__ArityString_7));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "prog_out.m"
    }
#line 210 "prog_out.m"
    {
#line 210 "prog_out.m"
      parse_tree__prog_out__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_9_9, 1) = ((MR_Box) (parse_tree__prog_out__V_11_11));
#line 210 "prog_out.m"
    }
#line 210 "prog_out.m"
    {
#line 210 "prog_out.m"
      parse_tree__prog_out__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 0) = ((MR_Box) (parse_tree__prog_out__SymNameString_6));
#line 210 "prog_out.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_out__V_8_8, 1) = ((MR_Box) (parse_tree__prog_out__V_9_9));
#line 210 "prog_out.m"
    }
#line 210 "prog_out.m"
    {
#line 210 "prog_out.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_out__V_8_8, &parse_tree__prog_out__String_5);
    }
#line 207 "prog_out.m"
    return parse_tree__prog_out__String_5;
#line 207 "prog_out.m"
  }
#line 66 "prog_out.m"
}

#line 58 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_quoted_sym_name_3_p_0(
#line 58 "prog_out.m"
  MR_Word parse_tree__prog_out__SymName_4)
#line 58 "prog_out.m"
{
#line 202 "prog_out.m"
  {
#line 202 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 203 "prog_out.m"
    {
#line 203 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\'");
    }
#line 204 "prog_out.m"
    {
#line 204 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__SymName_4);
    }
#line 205 "prog_out.m"
    {
#line 205 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "\'");
#line 205 "prog_out.m"
      return;
    }
#line 202 "prog_out.m"
  }
#line 58 "prog_out.m"
}

#line 51 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_sym_name_and_arity_3_p_0(
#line 51 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 51 "prog_out.m"
{
#line 197 "prog_out.m"
  {
#line 197 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 197 "prog_out.m"
    MR_Word parse_tree__prog_out__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "prog_out.m"
    MR_Integer parse_tree__prog_out__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 198 "prog_out.m"
    {
#line 198 "prog_out.m"
      parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__prog_out__Name_4);
    }
#line 199 "prog_out.m"
    {
#line 199 "prog_out.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 200 "prog_out.m"
    {
#line 200 "prog_out.m"
      mercury__io__write_int_3_p_0(parse_tree__prog_out__Arity_5);
#line 200 "prog_out.m"
      return;
    }
#line 197 "prog_out.m"
  }
#line 51 "prog_out.m"
}

#line 49 "prog_out.m"
MR_String MR_CALL 
parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(
#line 49 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 49 "prog_out.m"
{
#line 190 "prog_out.m"
  {
#line 190 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 190 "prog_out.m"
    MR_String parse_tree__prog_out__HeadVar__2_2;

#line 190 "prog_out.m"
    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 190 "prog_out.m"
      {
#line 190 "prog_out.m"
        MR_Word parse_tree__prog_out__ModuleSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "prog_out.m"
        MR_String parse_tree__prog_out__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "prog_out.m"
        MR_String parse_tree__prog_out__V_5_5;
#line 190 "prog_out.m"
        MR_String parse_tree__prog_out__V_6_6;
#line 190 "prog_out.m"
        MR_String parse_tree__prog_out__V_8_8;

#line 191 "prog_out.m"
        {
#line 191 "prog_out.m"
          parse_tree__prog_out__V_5_5 = parse_tree__prog_out__module_spec_to_escaped_string_1_f_0(parse_tree__prog_out__ModuleSpec_3);
        }
#line 193 "prog_out.m"
        {
#line 193 "prog_out.m"
          parse_tree__prog_out__V_8_8 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_4);
        }
#line 193 "prog_out.m"
        {
#line 193 "prog_out.m"
          parse_tree__prog_out__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) ".", parse_tree__prog_out__V_8_8);
        }
#line 192 "prog_out.m"
        {
#line 192 "prog_out.m"
          return parse_tree__prog_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_5_5, parse_tree__prog_out__V_6_6);
        }
#line 190 "prog_out.m"
      }
#line 190 "prog_out.m"
    else
#line 194 "prog_out.m"
      {
#line 194 "prog_out.m"
        MR_String parse_tree__prog_out__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 195 "prog_out.m"
        {
#line 195 "prog_out.m"
          return parse_tree__prog_out__HeadVar__2_2 = mercury__term_io__escaped_string_1_f_0(parse_tree__prog_out__Name_9);
        }
#line 194 "prog_out.m"
      }
#line 190 "prog_out.m"
    return parse_tree__prog_out__HeadVar__2_2;
#line 190 "prog_out.m"
  }
#line 49 "prog_out.m"
}

#line 48 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_sym_name_3_p_0(
#line 48 "prog_out.m"
  MR_Word parse_tree__prog_out__HeadVar__1_1)
#line 48 "prog_out.m"
{
#line 183 "prog_out.m"
  {
#line 183 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;

#line 183 "prog_out.m"
    if (((MR_tag((MR_Word) parse_tree__prog_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 183 "prog_out.m"
      {
#line 183 "prog_out.m"
        MR_Word parse_tree__prog_out__ModuleSpec_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "prog_out.m"
        MR_String parse_tree__prog_out__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 1)));

#line 184 "prog_out.m"
        {
#line 184 "prog_out.m"
          parse_tree__prog_out__write_module_spec_3_p_0(parse_tree__prog_out__ModuleSpec_4);
        }
#line 185 "prog_out.m"
        {
#line 185 "prog_out.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 186 "prog_out.m"
        {
#line 186 "prog_out.m"
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_5);
#line 186 "prog_out.m"
          return;
        }
#line 183 "prog_out.m"
      }
#line 183 "prog_out.m"
    else
#line 187 "prog_out.m"
      {
#line 187 "prog_out.m"
        MR_String parse_tree__prog_out__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_out__HeadVar__1_1, (MR_Integer) 0)));

#line 188 "prog_out.m"
        {
#line 188 "prog_out.m"
          mercury__term_io__write_escaped_string_3_p_0(parse_tree__prog_out__Name_13);
#line 188 "prog_out.m"
          return;
        }
#line 187 "prog_out.m"
      }
#line 183 "prog_out.m"
  }
#line 48 "prog_out.m"
}

#line 41 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__context_to_string_2_p_0(
#line 41 "prog_out.m"
  MR_Word parse_tree__prog_out__Context_3,
#line 41 "prog_out.m"
  MR_String * parse_tree__prog_out__ContextMessage_4)
#line 41 "prog_out.m"
{
#line 171 "prog_out.m"
  {
#line 171 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 171 "prog_out.m"
    MR_String parse_tree__prog_out__FileName_5;
#line 171 "prog_out.m"
    MR_Integer parse_tree__prog_out__LineNumber_6;

#line 172 "prog_out.m"
    {
#line 172 "prog_out.m"
      mercury__term__context_file_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__FileName_5);
    }
#line 173 "prog_out.m"
    {
#line 173 "prog_out.m"
      mercury__term__context_line_2_p_0(parse_tree__prog_out__Context_3, &parse_tree__prog_out__LineNumber_6);
    }
#line 174 "prog_out.m"
    parse_tree__prog_out__succeeded = (strcmp(parse_tree__prog_out__FileName_5, (MR_String) "") == 0);
#line 176 "prog_out.m"
    if (parse_tree__prog_out__succeeded)
#line 175 "prog_out.m"
      *parse_tree__prog_out__ContextMessage_4 = (MR_String) "";
#line 176 "prog_out.m"
    else
#line 177 "prog_out.m"
      {
#line 177 "prog_out.m"
        MR_String parse_tree__prog_out__V_14_14;
#line 177 "prog_out.m"
        MR_String parse_tree__prog_out__V_22_22;
#line 177 "prog_out.m"
        MR_String parse_tree__prog_out__V_24_24;
#line 177 "prog_out.m"
        MR_String parse_tree__prog_out__V_25_25;

#line 177 "prog_out.m"
        {
#line 177 "prog_out.m"
          mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[0], (MR_Integer) 3, parse_tree__prog_out__LineNumber_6, &parse_tree__prog_out__V_14_14);
        }
#line 177 "prog_out.m"
        {
#line 177 "prog_out.m"
          parse_tree__prog_out__V_22_22 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_14_14, (MR_String) ": ");
        }
#line 177 "prog_out.m"
        {
#line 177 "prog_out.m"
          parse_tree__prog_out__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", parse_tree__prog_out__V_22_22);
        }
#line 177 "prog_out.m"
        {
#line 177 "prog_out.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_out_scalar_common_1[1], parse_tree__prog_out__FileName_5, &parse_tree__prog_out__V_25_25);
        }
#line 177 "prog_out.m"
        {
#line 177 "prog_out.m"
          *parse_tree__prog_out__ContextMessage_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_out__V_25_25, parse_tree__prog_out__V_24_24);
        }
#line 177 "prog_out.m"
      }
#line 171 "prog_out.m"
  }
#line 41 "prog_out.m"
}

#line 35 "prog_out.m"
void MR_CALL 
parse_tree__prog_out__write_context_3_p_0(
#line 35 "prog_out.m"
  MR_Word parse_tree__prog_out__Context_4)
#line 35 "prog_out.m"
{
#line 167 "prog_out.m"
  {
#line 167 "prog_out.m"
    MR_bool parse_tree__prog_out__succeeded;
#line 167 "prog_out.m"
    MR_String parse_tree__prog_out__ContextMessage_6;

#line 168 "prog_out.m"
    {
#line 168 "prog_out.m"
      parse_tree__prog_out__context_to_string_2_p_0(parse_tree__prog_out__Context_4, &parse_tree__prog_out__ContextMessage_6);
    }
#line 169 "prog_out.m"
    {
#line 169 "prog_out.m"
      mercury__io__write_string_3_p_0(parse_tree__prog_out__ContextMessage_6);
#line 169 "prog_out.m"
      return;
    }
#line 167 "prog_out.m"
  }
#line 35 "prog_out.m"
}

void mercury__parse_tree__prog_out__init(void)
{
}

void mercury__parse_tree__prog_out__init_type_tables(void)
{
}

void mercury__parse_tree__prog_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_out. */
