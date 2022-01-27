/*
** Automatically generated from `ml_commit_gen.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ml_backend.ml_commit_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_commit_gen__init
ENDINIT
*/

#include "ml_backend.ml_commit_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "ml_backend.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 522 "ml_commit_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(
#line 522 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_4,
#line 522 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__VarName_5);

#line 465 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__HeadVar__1_1,
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_2,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__HeadVar__3_3,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__HeadVar__4_4,
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_5,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_6);

#line 439 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_p_0(
#line 439 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__GoalInfo_7,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__LocalVarDecls_8,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_9,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__OrigVarLvalMap_10,
#line 439 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_19);

#line 385 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_p_0(
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__CommitFuncLocalDecls_8,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__TryCommitStatements_9,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_10,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Decls_11,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Statements_12,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_28,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29);


static /* final */ const MR_Box ml_backend__ml_commit_gen_scalar_common_1[3][2];




static /* final */ const MR_Box ml_backend__ml_commit_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 522 "ml_commit_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(
#line 522 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_4,
#line 522 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__VarName_5)
#line 522 "ml_commit_gen.m"
{
#line 524 "ml_commit_gen.m"
  {
#line 524 "ml_commit_gen.m"
    MR_bool ml_backend__ml_commit_gen__succeeded;
#line 524 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__HeadVar__3_3;
#line 524 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_commit_gen__VarName_5);

#line 525 "ml_commit_gen.m"
    {
#line 525 "ml_commit_gen.m"
      return ml_backend__ml_commit_gen__HeadVar__3_3 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_commit_gen__V_6_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_commit_gen__Context_4);
    }
#line 524 "ml_commit_gen.m"
    return ml_backend__ml_commit_gen__HeadVar__3_3;
#line 524 "ml_commit_gen.m"
  }
#line 522 "ml_commit_gen.m"
}

#line 465 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__HeadVar__1_1,
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_2,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__HeadVar__3_3,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__HeadVar__4_4,
#line 465 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_5,
#line 465 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_6)
#line 465 "ml_commit_gen.m"
{
#line 469 "ml_commit_gen.m"
  {
#line 469 "ml_commit_gen.m"
    MR_bool ml_backend__ml_commit_gen__succeeded;

#line 469 "ml_commit_gen.m"
    if ((ml_backend__ml_commit_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "ml_commit_gen.m"
      {
#line 469 "ml_commit_gen.m"
        *ml_backend__ml_commit_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "ml_commit_gen.m"
        *ml_backend__ml_commit_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "ml_commit_gen.m"
        *ml_backend__ml_commit_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_5;
#line 469 "ml_commit_gen.m"
      }
#line 469 "ml_commit_gen.m"
    else
#line 471 "ml_commit_gen.m"
      {
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__LocalDefns0_17;
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__Assigns0_18;
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__ModuleInfo_19;
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__Type_20;
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__IsDummy_21;
#line 471 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26;

#line 472 "ml_commit_gen.m"
        {
#line 472 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(ml_backend__ml_commit_gen__Vars_12, ml_backend__ml_commit_gen__Context_2, &ml_backend__ml_commit_gen__LocalDefns0_17, &ml_backend__ml_commit_gen__Assigns0_18, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_5, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26);
        }
#line 474 "ml_commit_gen.m"
        {
#line 474 "ml_commit_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26, &ml_backend__ml_commit_gen__ModuleInfo_19);
        }
#line 475 "ml_commit_gen.m"
        {
#line 475 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26, ml_backend__ml_commit_gen__Var_11, &ml_backend__ml_commit_gen__Type_20);
        }
#line 476 "ml_commit_gen.m"
        {
#line 476 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__IsDummy_21 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_commit_gen__ModuleInfo_19, ml_backend__ml_commit_gen__Type_20);
        }
#line 481 "ml_commit_gen.m"
#line 481 "ml_commit_gen.m"
        switch (ml_backend__ml_commit_gen__IsDummy_21) {
#line 481 "ml_commit_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 481 "ml_commit_gen.m"
          case (MR_Integer) 0:
#line 478 "ml_commit_gen.m"
            {
#line 479 "ml_commit_gen.m"
              *ml_backend__ml_commit_gen__HeadVar__3_3 = ml_backend__ml_commit_gen__LocalDefns0_17;
#line 480 "ml_commit_gen.m"
              *ml_backend__ml_commit_gen__HeadVar__4_4 = ml_backend__ml_commit_gen__Assigns0_18;
#line 478 "ml_commit_gen.m"
              *ml_backend__ml_commit_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26;
#line 478 "ml_commit_gen.m"
            }
#line 481 "ml_commit_gen.m"
            break;
#line 481 "ml_commit_gen.m"
          case (MR_Integer) 1:
#line 482 "ml_commit_gen.m"
            {
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__LocalDefn_22;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__Assign_23;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__VarSet_36;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__OutputVarName_37;
#line 482 "ml_commit_gen.m"
              MR_String ml_backend__ml_commit_gen__OutputVarNameStr_38;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__MaybeNum_39;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__LocalVarName_40;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__MLDS_Type_41;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__GCStatement_42;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__OutputVarLval_43;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__LocalVarLval_44;
#line 482 "ml_commit_gen.m"
              MR_String ml_backend__ml_commit_gen__V_45_45;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_27_47;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__V_48_48;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__V_49_49;
#line 482 "ml_commit_gen.m"
              MR_Word ml_backend__ml_commit_gen__V_50_50;

#line 496 "ml_commit_gen.m"
              {
#line 496 "ml_commit_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26, &ml_backend__ml_commit_gen__VarSet_36);
              }
#line 497 "ml_commit_gen.m"
              {
#line 497 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__OutputVarName_37 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_commit_gen__VarSet_36, ml_backend__ml_commit_gen__Var_11);
              }
#line 500 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__OutputVarNameStr_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__OutputVarName_37, (MR_Integer) 0)));
#line 500 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__MaybeNum_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__OutputVarName_37, (MR_Integer) 1)));
#line 502 "ml_commit_gen.m"
              {
#line 502 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__V_45_45 = mercury__string__append_2_f_0((MR_String) "local_", ml_backend__ml_commit_gen__OutputVarNameStr_38);
              }
#line 501 "ml_commit_gen.m"
              {
#line 501 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__LocalVarName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__LocalVarName_40, 0) = ((MR_Box) (ml_backend__ml_commit_gen__V_45_45));
#line 501 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__LocalVarName_40, 1) = ((MR_Box) (ml_backend__ml_commit_gen__MaybeNum_39));
#line 501 "ml_commit_gen.m"
              }
#line 503 "ml_commit_gen.m"
              {
#line 503 "ml_commit_gen.m"
                ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26, ml_backend__ml_commit_gen__Type_20, &ml_backend__ml_commit_gen__MLDS_Type_41);
              }
#line 504 "ml_commit_gen.m"
              {
#line 504 "ml_commit_gen.m"
                ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(ml_backend__ml_commit_gen__LocalVarName_40, ml_backend__ml_commit_gen__Type_20, ml_backend__ml_commit_gen__Context_2, &ml_backend__ml_commit_gen__GCStatement_42, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_26_26, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_27_47);
              }
#line 506 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_commit_gen__LocalVarName_40);
#line 507 "ml_commit_gen.m"
              {
#line 507 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__V_49_49 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_commit_gen__Context_2);
              }
#line 506 "ml_commit_gen.m"
              {
#line 506 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__LocalDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_commit_gen__V_48_48, ml_backend__ml_commit_gen__MLDS_Type_41, ml_backend__ml_commit_gen__GCStatement_42, ml_backend__ml_commit_gen__V_49_49);
              }
#line 510 "ml_commit_gen.m"
              {
#line 510 "ml_commit_gen.m"
                ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_27_47, ml_backend__ml_commit_gen__Var_11, &ml_backend__ml_commit_gen__OutputVarLval_43);
              }
#line 511 "ml_commit_gen.m"
              {
#line 511 "ml_commit_gen.m"
                ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_27_47, ml_backend__ml_commit_gen__LocalVarName_40, ml_backend__ml_commit_gen__MLDS_Type_41, &ml_backend__ml_commit_gen__LocalVarLval_44);
              }
#line 512 "ml_commit_gen.m"
              {
#line 512 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_commit_gen__LocalVarLval_44));
#line 512 "ml_commit_gen.m"
              }
#line 512 "ml_commit_gen.m"
              {
#line 512 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__Assign_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_commit_gen__OutputVarLval_43, ml_backend__ml_commit_gen__V_50_50, ml_backend__ml_commit_gen__Context_2);
              }
#line 518 "ml_commit_gen.m"
              {
#line 518 "ml_commit_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(ml_backend__ml_commit_gen__Var_11, ml_backend__ml_commit_gen__LocalVarLval_44, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_27_47, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_6);
              }
#line 485 "ml_commit_gen.m"
              {
#line 485 "ml_commit_gen.m"
                MR_Word base;
#line 485 "ml_commit_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_commit_gen.m"
                *ml_backend__ml_commit_gen__HeadVar__3_3 = base;
#line 485 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_commit_gen__LocalDefn_22));
#line 485 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_commit_gen__LocalDefns0_17));
#line 485 "ml_commit_gen.m"
              }
#line 486 "ml_commit_gen.m"
              {
#line 486 "ml_commit_gen.m"
                MR_Word base;
#line 486 "ml_commit_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_commit_gen.m"
                *ml_backend__ml_commit_gen__HeadVar__4_4 = base;
#line 486 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_commit_gen__Assign_23));
#line 486 "ml_commit_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_commit_gen__Assigns0_18));
#line 486 "ml_commit_gen.m"
              }
#line 482 "ml_commit_gen.m"
            }
#line 481 "ml_commit_gen.m"
            break;
#line 481 "ml_commit_gen.m"
        }
#line 471 "ml_commit_gen.m"
      }
#line 469 "ml_commit_gen.m"
  }
#line 465 "ml_commit_gen.m"
}

#line 439 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_p_0(
#line 439 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__GoalInfo_7,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__LocalVarDecls_8,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_9,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__OrigVarLvalMap_10,
#line 439 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18,
#line 439 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_19)
#line 439 "ml_commit_gen.m"
{
#line 445 "ml_commit_gen.m"
  {
#line 445 "ml_commit_gen.m"
    MR_bool ml_backend__ml_commit_gen__succeeded;
#line 445 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__Globals_12;
#line 445 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__NondetCopyOut_13;

#line 446 "ml_commit_gen.m"
    {
#line 446 "ml_commit_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18, ml_backend__ml_commit_gen__OrigVarLvalMap_10);
    }
#line 447 "ml_commit_gen.m"
    {
#line 447 "ml_commit_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18, &ml_backend__ml_commit_gen__Globals_12);
    }
#line 448 "ml_commit_gen.m"
    {
#line 448 "ml_commit_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_commit_gen__Globals_12, (MR_Integer) 259, &ml_backend__ml_commit_gen__NondetCopyOut_13);
    }
#line 459 "ml_commit_gen.m"
#line 459 "ml_commit_gen.m"
    switch (ml_backend__ml_commit_gen__NondetCopyOut_13) {
#line 459 "ml_commit_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "ml_commit_gen.m"
      case (MR_Integer) 0:
#line 460 "ml_commit_gen.m"
        {
#line 461 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__LocalVarDecls_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__STATE_VARIABLE_Info_19 = ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18;
#line 460 "ml_commit_gen.m"
        }
#line 459 "ml_commit_gen.m"
        break;
#line 459 "ml_commit_gen.m"
      case (MR_Integer) 1:
#line 450 "ml_commit_gen.m"
        {
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__TypeCtorInfo_24_24;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__Context_14;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__NonLocals_15;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__ByRefOutputVars_16;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__VarsToCopy_17;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__V_21_21;
#line 450 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__V_22_22;

#line 451 "ml_commit_gen.m"
          {
#line 451 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_commit_gen__GoalInfo_7);
          }
#line 452 "ml_commit_gen.m"
          {
#line 452 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_commit_gen__GoalInfo_7);
          }
#line 453 "ml_commit_gen.m"
          {
#line 453 "ml_commit_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18, &ml_backend__ml_commit_gen__ByRefOutputVars_16);
          }
#line 617 "ml_backend.ml_commit_gen.c"
          ml_backend__ml_commit_gen__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 455 "ml_commit_gen.m"
          {
#line 455 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__V_21_21 = parse_tree__set_of_var__list_to_set_1_f_0(ml_backend__ml_commit_gen__TypeCtorInfo_24_24, ml_backend__ml_commit_gen__ByRefOutputVars_16);
          }
#line 454 "ml_commit_gen.m"
          {
#line 454 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__VarsToCopy_17 = parse_tree__set_of_var__intersect_2_f_0(ml_backend__ml_commit_gen__TypeCtorInfo_24_24, ml_backend__ml_commit_gen__V_21_21, ml_backend__ml_commit_gen__NonLocals_15);
          }
#line 457 "ml_commit_gen.m"
          {
#line 457 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__V_22_22 = parse_tree__set_of_var__to_sorted_list_1_f_0(ml_backend__ml_commit_gen__TypeCtorInfo_24_24, ml_backend__ml_commit_gen__VarsToCopy_17);
          }
#line 456 "ml_commit_gen.m"
          {
#line 456 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(ml_backend__ml_commit_gen__V_22_22, ml_backend__ml_commit_gen__Context_14, ml_backend__ml_commit_gen__LocalVarDecls_8, ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_9, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_18, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_19);
#line 456 "ml_commit_gen.m"
            return;
          }
#line 450 "ml_commit_gen.m"
        }
#line 459 "ml_commit_gen.m"
        break;
#line 459 "ml_commit_gen.m"
    }
#line 445 "ml_commit_gen.m"
  }
#line 439 "ml_commit_gen.m"
}

#line 385 "ml_commit_gen.m"
static void MR_CALL 
ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_p_0(
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__CommitFuncLocalDecls_8,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__TryCommitStatements_9,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_10,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Decls_11,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Statements_12,
#line 385 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_28,
#line 385 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29)
#line 385 "ml_commit_gen.m"
{
#line 390 "ml_commit_gen.m"
  {
#line 390 "ml_commit_gen.m"
    MR_bool ml_backend__ml_commit_gen__succeeded;
#line 390 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__PutCommitInOwnFunc_14;

#line 391 "ml_commit_gen.m"
    {
#line 391 "ml_commit_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_28, &ml_backend__ml_commit_gen__PutCommitInOwnFunc_14);
    }
#line 426 "ml_commit_gen.m"
#line 426 "ml_commit_gen.m"
    switch (ml_backend__ml_commit_gen__PutCommitInOwnFunc_14) {
#line 426 "ml_commit_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 426 "ml_commit_gen.m"
      case (MR_Integer) 0:
#line 427 "ml_commit_gen.m"
        {
#line 428 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__Statements_12 = ml_backend__ml_commit_gen__TryCommitStatements_9;
#line 429 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__Decls_11 = ml_backend__ml_commit_gen__CommitFuncLocalDecls_8;
#line 427 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_28;
#line 427 "ml_commit_gen.m"
        }
#line 426 "ml_commit_gen.m"
        break;
#line 426 "ml_commit_gen.m"
      case (MR_Integer) 1:
#line 393 "ml_commit_gen.m"
        {
#line 393 "ml_commit_gen.m"
          MR_Integer ml_backend__ml_commit_gen__CommitFuncLabel_15;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__CommitFuncLabelRval_16;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__CommitFuncBody_17;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__CommitFunc_18;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__UseNestedFuncs_19;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__ArgRvals_20;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__ArgTypes_21;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__Signature_24;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__CallStmt_26;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__CallStatement_27;
#line 393 "ml_commit_gen.m"
          MR_Word ml_backend__ml_commit_gen__V_37_37;

#line 397 "ml_commit_gen.m"
          {
#line 397 "ml_commit_gen.m"
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_commit_gen__CommitFuncLabel_15, &ml_backend__ml_commit_gen__CommitFuncLabelRval_16, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29);
          }
#line 399 "ml_commit_gen.m"
          {
#line 399 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__CommitFuncBody_17 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_commit_gen__CommitFuncLocalDecls_8, ml_backend__ml_commit_gen__TryCommitStatements_9, ml_backend__ml_commit_gen__Context_10);
          }
#line 402 "ml_commit_gen.m"
          {
#line 402 "ml_commit_gen.m"
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(*ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29, ml_backend__ml_commit_gen__CommitFuncLabel_15, ml_backend__ml_commit_gen__Context_10, ml_backend__ml_commit_gen__CommitFuncBody_17, &ml_backend__ml_commit_gen__CommitFunc_18);
          }
#line 406 "ml_commit_gen.m"
          {
#line 406 "ml_commit_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29, &ml_backend__ml_commit_gen__UseNestedFuncs_19);
          }
#line 411 "ml_commit_gen.m"
#line 411 "ml_commit_gen.m"
          switch (ml_backend__ml_commit_gen__UseNestedFuncs_19) {
#line 411 "ml_commit_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 411 "ml_commit_gen.m"
            case (MR_Integer) 0:
#line 412 "ml_commit_gen.m"
              {
#line 412 "ml_commit_gen.m"
                MR_Word ml_backend__ml_commit_gen__EnvPtrRval_22;

#line 413 "ml_commit_gen.m"
                {
#line 413 "ml_commit_gen.m"
                  ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(*ml_backend__ml_commit_gen__STATE_VARIABLE_Info_29, &ml_backend__ml_commit_gen__EnvPtrRval_22);
                }
#line 414 "ml_commit_gen.m"
                {
#line 414 "ml_commit_gen.m"
                  ml_backend__ml_commit_gen__ArgRvals_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "ml_commit_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__ArgRvals_20, 0) = ((MR_Box) (ml_backend__ml_commit_gen__EnvPtrRval_22));
#line 414 "ml_commit_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__ArgRvals_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "ml_commit_gen.m"
                }
#line 415 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__ArgTypes_21 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_commit_gen_scalar_common_1[2]);
#line 412 "ml_commit_gen.m"
              }
#line 411 "ml_commit_gen.m"
              break;
#line 411 "ml_commit_gen.m"
            case (MR_Integer) 1:
#line 408 "ml_commit_gen.m"
              {
#line 409 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__ArgRvals_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "ml_commit_gen.m"
                ml_backend__ml_commit_gen__ArgTypes_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 408 "ml_commit_gen.m"
              }
#line 411 "ml_commit_gen.m"
              break;
#line 411 "ml_commit_gen.m"
          }
#line 418 "ml_commit_gen.m"
          {
#line 418 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__Signature_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__Signature_24, 0) = ((MR_Box) (ml_backend__ml_commit_gen__ArgTypes_21));
#line 418 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__Signature_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "ml_commit_gen.m"
          }
#line 420 "ml_commit_gen.m"
          {
#line 420 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__CallStmt_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 1) = ((MR_Box) (ml_backend__ml_commit_gen__Signature_24));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 2) = ((MR_Box) (ml_backend__ml_commit_gen__CommitFuncLabelRval_16));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 4) = ((MR_Box) (ml_backend__ml_commit_gen__ArgRvals_20));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__CallStmt_26, 6) = ((MR_Box) ((MR_Integer) 2));
#line 420 "ml_commit_gen.m"
          }
#line 422 "ml_commit_gen.m"
          {
#line 422 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__V_37_37 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_commit_gen__Context_10);
          }
#line 422 "ml_commit_gen.m"
          {
#line 422 "ml_commit_gen.m"
            ml_backend__ml_commit_gen__CallStatement_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__CallStatement_27, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CallStmt_26));
#line 422 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__CallStatement_27, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_37_37));
#line 422 "ml_commit_gen.m"
          }
#line 424 "ml_commit_gen.m"
          {
#line 424 "ml_commit_gen.m"
            MR_Word base;
#line 424 "ml_commit_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "ml_commit_gen.m"
            *ml_backend__ml_commit_gen__Statements_12 = base;
#line 424 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CallStatement_27));
#line 424 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "ml_commit_gen.m"
          }
#line 425 "ml_commit_gen.m"
          {
#line 425 "ml_commit_gen.m"
            MR_Word base;
#line 425 "ml_commit_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "ml_commit_gen.m"
            *ml_backend__ml_commit_gen__Decls_11 = base;
#line 425 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CommitFunc_18));
#line 425 "ml_commit_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "ml_commit_gen.m"
          }
#line 393 "ml_commit_gen.m"
        }
#line 426 "ml_commit_gen.m"
        break;
#line 426 "ml_commit_gen.m"
    }
#line 390 "ml_commit_gen.m"
  }
#line 385 "ml_commit_gen.m"
}

#line 170 "ml_commit_gen.m"
void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_7_p_0(
#line 170 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Goal_8,
#line 170 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__CodeModel_9,
#line 170 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__Context_10,
#line 170 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Decls_11,
#line 170 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__Statements_12,
#line 170 "ml_commit_gen.m"
  MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_41,
#line 170 "ml_commit_gen.m"
  MR_Word * ml_backend__ml_commit_gen__STATE_VARIABLE_Info_42)
#line 170 "ml_commit_gen.m"
{
#line 195 "ml_commit_gen.m"
  {
#line 195 "ml_commit_gen.m"
    MR_bool ml_backend__ml_commit_gen__succeeded;
#line 195 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__Goal_8, (MR_Integer) 1)));
#line 195 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__GoalCodeModel_16;
#line 195 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__GoalContext_17;
#line 196 "ml_commit_gen.m"
    MR_Word ml_backend__ml_commit_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__Goal_8, (MR_Integer) 0)));

#line 197 "ml_commit_gen.m"
    {
#line 197 "ml_commit_gen.m"
      ml_backend__ml_commit_gen__GoalCodeModel_16 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_commit_gen__GoalInfo_15);
    }
#line 198 "ml_commit_gen.m"
    {
#line 198 "ml_commit_gen.m"
      ml_backend__ml_commit_gen__GoalContext_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_commit_gen__GoalInfo_15);
    }
#line 201 "ml_commit_gen.m"
    ml_backend__ml_commit_gen__succeeded = (ml_backend__ml_commit_gen__GoalCodeModel_16 == (MR_Integer) 2);
#line 201 "ml_commit_gen.m"
    if (ml_backend__ml_commit_gen__succeeded)
#line 202 "ml_commit_gen.m"
      ml_backend__ml_commit_gen__succeeded = (ml_backend__ml_commit_gen__CodeModel_9 == (MR_Integer) 1);
#line 280 "ml_commit_gen.m"
    if (ml_backend__ml_commit_gen__succeeded)
#line 242 "ml_commit_gen.m"
      {
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__LocalVarDecls_18;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_19;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__OrigVarLvalMap_20;
#line 242 "ml_commit_gen.m"
        MR_Integer ml_backend__ml_commit_gen__SuccessFuncLabel_21;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__SuccessFuncLabelRval_22;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__MLDS_Context_23;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CommitRef_24;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CommitRefLval_25;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CommitRefDecl_26;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__DoCommitStmt_27;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__DoCommitStatement_28;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__SuccessFunc_29;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__EnvPtrRval_30;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__SuccessCont_31;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__GoalDecls_32;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__GoalStatements_33;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__GoalStatement_34;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__SetSuccessFalse_35;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__SetSuccessTrue_36;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__TryCommitStmt_37;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__TryCommitStatement_38;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CommitFuncLocalDecls_39;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__CommitFuncDecls_40;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_43_43;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_45_45;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_49_49;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_52_52;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_54_54;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_55_55;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_60_60;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_62_62;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_63_63;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_65_65;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_67_67;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_68_68;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_70_70;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__V_72_72;
#line 242 "ml_commit_gen.m"
        MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_73_73;

#line 241 "ml_commit_gen.m"
        {
#line 241 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_p_0(ml_backend__ml_commit_gen__GoalInfo_15, &ml_backend__ml_commit_gen__LocalVarDecls_18, &ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_19, &ml_backend__ml_commit_gen__OrigVarLvalMap_20, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_41, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_43_43);
        }
#line 245 "ml_commit_gen.m"
        {
#line 245 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_commit_gen__SuccessFuncLabel_21, &ml_backend__ml_commit_gen__SuccessFuncLabelRval_22, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_43_43, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_45_45);
        }
#line 248 "ml_commit_gen.m"
        {
#line 248 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__MLDS_Context_23 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_commit_gen__Context_10);
        }
#line 249 "ml_commit_gen.m"
        {
#line 249 "ml_commit_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "commit", &ml_backend__ml_commit_gen__CommitRef_24, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_45_45, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47);
        }
#line 250 "ml_commit_gen.m"
        {
#line 250 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_commit_gen__CommitRef_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_commit_gen__CommitRefLval_25);
        }
#line 251 "ml_commit_gen.m"
        {
#line 251 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__CommitRefDecl_26 = ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(ml_backend__ml_commit_gen__MLDS_Context_23, ml_backend__ml_commit_gen__CommitRef_24);
        }
#line 252 "ml_commit_gen.m"
        {
#line 252 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefLval_25));
#line 252 "ml_commit_gen.m"
        }
#line 252 "ml_commit_gen.m"
        {
#line 252 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__DoCommitStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__DoCommitStmt_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 252 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__DoCommitStmt_27, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_49_49));
#line 252 "ml_commit_gen.m"
        }
#line 253 "ml_commit_gen.m"
        {
#line 253 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__DoCommitStatement_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__DoCommitStatement_28, 0) = ((MR_Box) (ml_backend__ml_commit_gen__DoCommitStmt_27));
#line 253 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__DoCommitStatement_28, 1) = ((MR_Box) (ml_backend__ml_commit_gen__MLDS_Context_23));
#line 253 "ml_commit_gen.m"
        }
#line 255 "ml_commit_gen.m"
        {
#line 255 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_commit_gen__SuccessFuncLabel_21, ml_backend__ml_commit_gen__Context_10, ml_backend__ml_commit_gen__DoCommitStatement_28, &ml_backend__ml_commit_gen__SuccessFunc_29);
        }
#line 258 "ml_commit_gen.m"
        {
#line 258 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_commit_gen__EnvPtrRval_30);
        }
#line 259 "ml_commit_gen.m"
        {
#line 259 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__SuccessCont_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 259 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_31, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SuccessFuncLabelRval_22));
#line 259 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_31, 1) = ((MR_Box) (ml_backend__ml_commit_gen__EnvPtrRval_30));
#line 259 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "ml_commit_gen.m"
        }
#line 260 "ml_commit_gen.m"
        {
#line 260 "ml_commit_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_commit_gen__SuccessCont_31, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_52_52);
        }
#line 261 "ml_commit_gen.m"
        {
#line 261 "ml_commit_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 2, ml_backend__ml_commit_gen__Goal_8, &ml_backend__ml_commit_gen__GoalDecls_32, &ml_backend__ml_commit_gen__GoalStatements_33, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_52_52, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_54_54);
        }
#line 262 "ml_commit_gen.m"
        {
#line 262 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__GoalStatement_34 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_commit_gen__GoalDecls_32, ml_backend__ml_commit_gen__GoalStatements_33, ml_backend__ml_commit_gen__GoalContext_17);
        }
#line 263 "ml_commit_gen.m"
        {
#line 263 "ml_commit_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_54_54, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_55_55);
        }
#line 264 "ml_commit_gen.m"
        {
#line 264 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_commit_gen_scalar_common_1[0]), ml_backend__ml_commit_gen__Context_10, &ml_backend__ml_commit_gen__SetSuccessFalse_35);
        }
#line 266 "ml_commit_gen.m"
        {
#line 266 "ml_commit_gen.m"
          ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_commit_gen_scalar_common_1[1]), ml_backend__ml_commit_gen__Context_10, &ml_backend__ml_commit_gen__SetSuccessTrue_36);
        }
#line 269 "ml_commit_gen.m"
        {
#line 269 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SetSuccessFalse_35));
#line 269 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "ml_commit_gen.m"
        }
#line 269 "ml_commit_gen.m"
        {
#line 269 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_commit_gen__GoalStatement_34));
#line 269 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_62_62, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_63_63));
#line 269 "ml_commit_gen.m"
        }
#line 269 "ml_commit_gen.m"
        {
#line 269 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_60_60 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_commit_gen__V_62_62, ml_backend__ml_commit_gen__Context_10);
        }
#line 270 "ml_commit_gen.m"
        {
#line 270 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SetSuccessTrue_36));
#line 270 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "ml_commit_gen.m"
        }
#line 270 "ml_commit_gen.m"
        {
#line 270 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_19, ml_backend__ml_commit_gen__V_68_68);
        }
#line 270 "ml_commit_gen.m"
        {
#line 270 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_65_65 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_commit_gen__V_67_67, ml_backend__ml_commit_gen__Context_10);
        }
#line 268 "ml_commit_gen.m"
        {
#line 268 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__TryCommitStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 268 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 268 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_37, 1) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefLval_25));
#line 268 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_37, 2) = ((MR_Box) (ml_backend__ml_commit_gen__V_60_60));
#line 268 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_37, 3) = ((MR_Box) (ml_backend__ml_commit_gen__V_65_65));
#line 268 "ml_commit_gen.m"
        }
#line 273 "ml_commit_gen.m"
        {
#line 273 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__TryCommitStatement_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__TryCommitStatement_38, 0) = ((MR_Box) (ml_backend__ml_commit_gen__TryCommitStmt_37));
#line 273 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__TryCommitStatement_38, 1) = ((MR_Box) (ml_backend__ml_commit_gen__MLDS_Context_23));
#line 273 "ml_commit_gen.m"
        }
#line 274 "ml_commit_gen.m"
        {
#line 274 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SuccessFunc_29));
#line 274 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "ml_commit_gen.m"
        }
#line 274 "ml_commit_gen.m"
        {
#line 274 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__CommitFuncLocalDecls_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__CommitFuncLocalDecls_39, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefDecl_26));
#line 274 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__CommitFuncLocalDecls_39, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_70_70));
#line 274 "ml_commit_gen.m"
        }
#line 276 "ml_commit_gen.m"
        {
#line 276 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_commit_gen__TryCommitStatement_38));
#line 276 "ml_commit_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "ml_commit_gen.m"
        }
#line 275 "ml_commit_gen.m"
        {
#line 275 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_p_0(ml_backend__ml_commit_gen__CommitFuncLocalDecls_39, ml_backend__ml_commit_gen__V_72_72, ml_backend__ml_commit_gen__Context_10, &ml_backend__ml_commit_gen__CommitFuncDecls_40, ml_backend__ml_commit_gen__Statements_12, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_55_55, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_73_73);
        }
#line 277 "ml_commit_gen.m"
        {
#line 277 "ml_commit_gen.m"
          *ml_backend__ml_commit_gen__Decls_11 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_commit_gen__LocalVarDecls_18, ml_backend__ml_commit_gen__CommitFuncDecls_40);
        }
#line 279 "ml_commit_gen.m"
        {
#line 279 "ml_commit_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(ml_backend__ml_commit_gen__OrigVarLvalMap_20, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_73_73, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_42);
#line 279 "ml_commit_gen.m"
          return;
        }
#line 242 "ml_commit_gen.m"
      }
#line 280 "ml_commit_gen.m"
    else
#line 348 "ml_commit_gen.m"
      {
#line 281 "ml_commit_gen.m"
        ml_backend__ml_commit_gen__succeeded = (ml_backend__ml_commit_gen__GoalCodeModel_16 == (MR_Integer) 2);
#line 281 "ml_commit_gen.m"
        if (ml_backend__ml_commit_gen__succeeded)
#line 282 "ml_commit_gen.m"
          ml_backend__ml_commit_gen__succeeded = (ml_backend__ml_commit_gen__CodeModel_9 == (MR_Integer) 0);
#line 348 "ml_commit_gen.m"
        if (ml_backend__ml_commit_gen__succeeded)
#line 316 "ml_commit_gen.m"
          {
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_76_76;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_78_78;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__V_82_82;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_85_85;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_87_87;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_88_88;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__V_89_89;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__V_91_91;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__V_93_93;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__STATE_VARIABLE_Info_94_94;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__LocalVarDecls_98;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_99;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__OrigVarLvalMap_100;
#line 316 "ml_commit_gen.m"
            MR_Integer ml_backend__ml_commit_gen__SuccessFuncLabel_101;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__SuccessFuncLabelRval_102;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__MLDS_Context_103;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CommitRef_104;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CommitRefLval_105;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CommitRefDecl_106;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__DoCommitStmt_107;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__DoCommitStatement_108;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__SuccessFunc_109;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__EnvPtrRval_110;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__SuccessCont_111;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__GoalDecls_112;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__GoalStatements_113;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__GoalStatement_114;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__TryCommitStmt_115;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__TryCommitStatement_116;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CommitFuncLocalDecls_117;
#line 316 "ml_commit_gen.m"
            MR_Word ml_backend__ml_commit_gen__CommitFuncDecls_118;

#line 315 "ml_commit_gen.m"
            {
#line 315 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_p_0(ml_backend__ml_commit_gen__GoalInfo_15, &ml_backend__ml_commit_gen__LocalVarDecls_98, &ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_99, &ml_backend__ml_commit_gen__OrigVarLvalMap_100, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_41, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_76_76);
            }
#line 319 "ml_commit_gen.m"
            {
#line 319 "ml_commit_gen.m"
              ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_commit_gen__SuccessFuncLabel_101, &ml_backend__ml_commit_gen__SuccessFuncLabelRval_102, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_76_76, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_78_78);
            }
#line 322 "ml_commit_gen.m"
            {
#line 322 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__MLDS_Context_103 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_commit_gen__Context_10);
            }
#line 323 "ml_commit_gen.m"
            {
#line 323 "ml_commit_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "commit", &ml_backend__ml_commit_gen__CommitRef_104, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_78_78, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80);
            }
#line 324 "ml_commit_gen.m"
            {
#line 324 "ml_commit_gen.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80, ml_backend__ml_commit_gen__CommitRef_104, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_commit_gen__CommitRefLval_105);
            }
#line 325 "ml_commit_gen.m"
            {
#line 325 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__CommitRefDecl_106 = ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(ml_backend__ml_commit_gen__MLDS_Context_103, ml_backend__ml_commit_gen__CommitRef_104);
            }
#line 326 "ml_commit_gen.m"
            {
#line 326 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefLval_105));
#line 326 "ml_commit_gen.m"
            }
#line 326 "ml_commit_gen.m"
            {
#line 326 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__DoCommitStmt_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__DoCommitStmt_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 326 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__DoCommitStmt_107, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_82_82));
#line 326 "ml_commit_gen.m"
            }
#line 327 "ml_commit_gen.m"
            {
#line 327 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__DoCommitStatement_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__DoCommitStatement_108, 0) = ((MR_Box) (ml_backend__ml_commit_gen__DoCommitStmt_107));
#line 327 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__DoCommitStatement_108, 1) = ((MR_Box) (ml_backend__ml_commit_gen__MLDS_Context_103));
#line 327 "ml_commit_gen.m"
            }
#line 329 "ml_commit_gen.m"
            {
#line 329 "ml_commit_gen.m"
              ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80, ml_backend__ml_commit_gen__SuccessFuncLabel_101, ml_backend__ml_commit_gen__Context_10, ml_backend__ml_commit_gen__DoCommitStatement_108, &ml_backend__ml_commit_gen__SuccessFunc_109);
            }
#line 332 "ml_commit_gen.m"
            {
#line 332 "ml_commit_gen.m"
              ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80, &ml_backend__ml_commit_gen__EnvPtrRval_110);
            }
#line 333 "ml_commit_gen.m"
            {
#line 333 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__SuccessCont_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_111, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SuccessFuncLabelRval_102));
#line 333 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_111, 1) = ((MR_Box) (ml_backend__ml_commit_gen__EnvPtrRval_110));
#line 333 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_111, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__SuccessCont_111, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "ml_commit_gen.m"
            }
#line 334 "ml_commit_gen.m"
            {
#line 334 "ml_commit_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_commit_gen__SuccessCont_111, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_80_80, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_85_85);
            }
#line 335 "ml_commit_gen.m"
            {
#line 335 "ml_commit_gen.m"
              ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 2, ml_backend__ml_commit_gen__Goal_8, &ml_backend__ml_commit_gen__GoalDecls_112, &ml_backend__ml_commit_gen__GoalStatements_113, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_85_85, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_87_87);
            }
#line 337 "ml_commit_gen.m"
            {
#line 337 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__GoalStatement_114 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_commit_gen__GoalDecls_112, ml_backend__ml_commit_gen__GoalStatements_113, ml_backend__ml_commit_gen__GoalContext_17);
            }
#line 338 "ml_commit_gen.m"
            {
#line 338 "ml_commit_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_commit_gen__STATE_VARIABLE_Info_87_87, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_88_88);
            }
#line 341 "ml_commit_gen.m"
            {
#line 341 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__V_89_89 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_commit_gen__CopyLocalsToOutputArgs_99, ml_backend__ml_commit_gen__Context_10);
            }
#line 340 "ml_commit_gen.m"
            {
#line 340 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__TryCommitStmt_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 340 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_115, 1) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefLval_105));
#line 340 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_115, 2) = ((MR_Box) (ml_backend__ml_commit_gen__GoalStatement_114));
#line 340 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_commit_gen__TryCommitStmt_115, 3) = ((MR_Box) (ml_backend__ml_commit_gen__V_89_89));
#line 340 "ml_commit_gen.m"
            }
#line 342 "ml_commit_gen.m"
            {
#line 342 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__TryCommitStatement_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__TryCommitStatement_116, 0) = ((MR_Box) (ml_backend__ml_commit_gen__TryCommitStmt_115));
#line 342 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_commit_gen__TryCommitStatement_116, 1) = ((MR_Box) (ml_backend__ml_commit_gen__MLDS_Context_103));
#line 342 "ml_commit_gen.m"
            }
#line 343 "ml_commit_gen.m"
            {
#line 343 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_91_91, 0) = ((MR_Box) (ml_backend__ml_commit_gen__SuccessFunc_109));
#line 343 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "ml_commit_gen.m"
            }
#line 343 "ml_commit_gen.m"
            {
#line 343 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__CommitFuncLocalDecls_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__CommitFuncLocalDecls_117, 0) = ((MR_Box) (ml_backend__ml_commit_gen__CommitRefDecl_106));
#line 343 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__CommitFuncLocalDecls_117, 1) = ((MR_Box) (ml_backend__ml_commit_gen__V_91_91));
#line 343 "ml_commit_gen.m"
            }
#line 345 "ml_commit_gen.m"
            {
#line 345 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_93_93, 0) = ((MR_Box) (ml_backend__ml_commit_gen__TryCommitStatement_116));
#line 345 "ml_commit_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_commit_gen__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "ml_commit_gen.m"
            }
#line 344 "ml_commit_gen.m"
            {
#line 344 "ml_commit_gen.m"
              ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_p_0(ml_backend__ml_commit_gen__CommitFuncLocalDecls_117, ml_backend__ml_commit_gen__V_93_93, ml_backend__ml_commit_gen__Context_10, &ml_backend__ml_commit_gen__CommitFuncDecls_118, ml_backend__ml_commit_gen__Statements_12, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_88_88, &ml_backend__ml_commit_gen__STATE_VARIABLE_Info_94_94);
            }
#line 346 "ml_commit_gen.m"
            {
#line 346 "ml_commit_gen.m"
              *ml_backend__ml_commit_gen__Decls_11 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_commit_gen__LocalVarDecls_98, ml_backend__ml_commit_gen__CommitFuncDecls_118);
            }
#line 347 "ml_commit_gen.m"
            {
#line 347 "ml_commit_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(ml_backend__ml_commit_gen__OrigVarLvalMap_100, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_94_94, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_42);
#line 347 "ml_commit_gen.m"
              return;
            }
#line 316 "ml_commit_gen.m"
          }
#line 348 "ml_commit_gen.m"
        else
#line 350 "ml_commit_gen.m"
          {
#line 350 "ml_commit_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_commit_gen__CodeModel_9, ml_backend__ml_commit_gen__Goal_8, ml_backend__ml_commit_gen__Decls_11, ml_backend__ml_commit_gen__Statements_12, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_0_41, ml_backend__ml_commit_gen__STATE_VARIABLE_Info_42);
#line 350 "ml_commit_gen.m"
            return;
          }
#line 348 "ml_commit_gen.m"
      }
#line 195 "ml_commit_gen.m"
  }
#line 170 "ml_commit_gen.m"
}

void mercury__ml_backend__ml_commit_gen__init(void)
{
}

void mercury__ml_backend__ml_commit_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_commit_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_commit_gen. */
