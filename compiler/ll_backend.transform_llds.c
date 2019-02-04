/*
** Automatically generated from `transform_llds.m'
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


/* :- module ll_backend.transform_llds. */
/* :- implementation. */

/*
INIT mercury__ll_backend__transform_llds__init
ENDINIT
*/

#include "ll_backend.transform_llds.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
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
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
  MR_Word ll_backend__transform_llds__Rval_10,
  MR_Word ll_backend__transform_llds__Targets_11,
  MR_String ll_backend__transform_llds__Comment_12,
  MR_Word * ll_backend__transform_llds__Instrs_13,
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_29,
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_30,
  MR_Integer ll_backend__transform_llds__MaxSize_15,
  MR_Integer ll_backend__transform_llds__NumTargets_16,
  MR_Word ll_backend__transform_llds__ProcLabel_17);

static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_3,
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_4,
  MR_Word ll_backend__transform_llds__ProcLabel_5,
  MR_Integer ll_backend__transform_llds__MaxSize_6);

static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Integer ll_backend__transform_llds__HeadVar__3_3);

static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Integer ll_backend__transform_llds__HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
  MR_Word ll_backend__transform_llds__ModuleName_4,
  MR_String ll_backend__transform_llds__LastModule_5);


static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
  MR_Word ll_backend__transform_llds__Rval_10,
  MR_Word ll_backend__transform_llds__Targets_11,
  MR_String ll_backend__transform_llds__Comment_12,
  MR_Word * ll_backend__transform_llds__Instrs_13,
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_29,
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_30,
  MR_Integer ll_backend__transform_llds__MaxSize_15,
  MR_Integer ll_backend__transform_llds__NumTargets_16,
  MR_Word ll_backend__transform_llds__ProcLabel_17)
{
  {
    MR_bool ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__NumTargets_16 <= ll_backend__transform_llds__MaxSize_15);

    if (ll_backend__transform_llds__succeeded)
      {
        MR_Word ll_backend__transform_llds__Var_31;
        MR_Word ll_backend__transform_llds__Var_32;

        {
          ll_backend__transform_llds__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_32, 1) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_32, 2) = ((MR_Box) (ll_backend__transform_llds__Targets_11));
        }
        {
          ll_backend__transform_llds__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_31, 0) = ((MR_Box) (ll_backend__transform_llds__Var_32));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_31, 1) = ((MR_Box) (ll_backend__transform_llds__Comment_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__transform_llds__Instrs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Var_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *ll_backend__transform_llds__STATE_VARIABLE_C_30 = ll_backend__transform_llds__STATE_VARIABLE_C_0_29;
      }
    else
      {
        MR_Integer ll_backend__transform_llds__LabelNum_18;
        MR_Integer ll_backend__transform_llds__Mid_19;
        MR_Word ll_backend__transform_llds__StartTargets_20;
        MR_Word ll_backend__transform_llds__EndTargets_21;
        MR_Word ll_backend__transform_llds__Index_22;
        MR_Word ll_backend__transform_llds__Test_23;
        MR_Word ll_backend__transform_llds__ElseAddr_24;
        MR_Word ll_backend__transform_llds__IfInstr_25;
        MR_Word ll_backend__transform_llds__ElseInstr_26;
        MR_Word ll_backend__transform_llds__ThenInstrs_27;
        MR_Word ll_backend__transform_llds__ElseInstrs_28;
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_34_34;
        MR_Word ll_backend__transform_llds__Var_37;
        MR_Word ll_backend__transform_llds__Var_38;
        MR_Word ll_backend__transform_llds__Var_42;
        MR_Word ll_backend__transform_llds__Var_43;
        MR_Word ll_backend__transform_llds__Var_45;
        MR_String ll_backend__transform_llds__Var_48;
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_49_49;
        MR_String ll_backend__transform_llds__Var_51;
        MR_Integer ll_backend__transform_llds__Var_53;
        MR_Word ll_backend__transform_llds__Var_55;
        MR_Word ll_backend__transform_llds__Var_56;

        {
          mercury__counter__allocate_3_p_0(&ll_backend__transform_llds__LabelNum_18, ll_backend__transform_llds__STATE_VARIABLE_C_0_29, &ll_backend__transform_llds__STATE_VARIABLE_C_34_34);
        }
        {
          ll_backend__transform_llds__Mid_19 = mercury__int__f_47_47_2_f_0(ll_backend__transform_llds__NumTargets_16, (MR_Integer) 2);
        }
        {
          mercury__list__det_split_list_4_p_0((MR_Word) &ll_backend__transform_llds_scalar_common_1[0], ll_backend__transform_llds__Mid_19, ll_backend__transform_llds__Targets_11, &ll_backend__transform_llds__StartTargets_20, &ll_backend__transform_llds__EndTargets_21);
        }
        {
          ll_backend__transform_llds__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_38, 0) = ((MR_Box) (ll_backend__transform_llds__Mid_19));
        }
        {
          ll_backend__transform_llds__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_37, 1) = ((MR_Box) (ll_backend__transform_llds__Var_38));
        }
        {
          ll_backend__transform_llds__Index_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 2) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 3) = ((MR_Box) (ll_backend__transform_llds__Var_37));
        }
        {
          ll_backend__transform_llds__Test_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 2) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 3) = ((MR_Box) (ll_backend__transform_llds__Var_37));
        }
        {
          ll_backend__transform_llds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_42, 0) = ((MR_Box) (ll_backend__transform_llds__LabelNum_18));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_42, 1) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_17));
        }
        {
          ll_backend__transform_llds__ElseAddr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__ElseAddr_24, 0) = ((MR_Box) (ll_backend__transform_llds__Var_42));
        }
        {
          ll_backend__transform_llds__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_43, 1) = ((MR_Box) (ll_backend__transform_llds__Test_23));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_43, 2) = ((MR_Box) (ll_backend__transform_llds__ElseAddr_24));
        }
        {
          ll_backend__transform_llds__IfInstr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__IfInstr_25, 0) = ((MR_Box) (ll_backend__transform_llds__Var_43));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__IfInstr_25, 1) = ((MR_Box) ((MR_String) "binary search"));
        }
        {
          ll_backend__transform_llds__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_45, 1) = ((MR_Box) (ll_backend__transform_llds__Var_42));
        }
        {
          ll_backend__transform_llds__ElseInstr_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ElseInstr_26, 0) = ((MR_Box) (ll_backend__transform_llds__Var_45));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ElseInstr_26, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__transform_llds__Var_48 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__Comment_12, (MR_String) " then");
        }
        {
          ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Rval_10, ll_backend__transform_llds__StartTargets_20, ll_backend__transform_llds__Var_48, &ll_backend__transform_llds__ThenInstrs_27, ll_backend__transform_llds__STATE_VARIABLE_C_34_34, &ll_backend__transform_llds__STATE_VARIABLE_C_49_49, ll_backend__transform_llds__MaxSize_15, ll_backend__transform_llds__Mid_19, ll_backend__transform_llds__ProcLabel_17);
        }
        {
          ll_backend__transform_llds__Var_51 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__Comment_12, (MR_String) " else");
        }
        ll_backend__transform_llds__Var_53 = (ll_backend__transform_llds__NumTargets_16 - ll_backend__transform_llds__Mid_19);
        {
          ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Index_22, ll_backend__transform_llds__EndTargets_21, ll_backend__transform_llds__Var_51, &ll_backend__transform_llds__ElseInstrs_28, ll_backend__transform_llds__STATE_VARIABLE_C_49_49, ll_backend__transform_llds__STATE_VARIABLE_C_30, ll_backend__transform_llds__MaxSize_15, ll_backend__transform_llds__Var_53, ll_backend__transform_llds__ProcLabel_17);
        }
        {
          ll_backend__transform_llds__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_55, 0) = ((MR_Box) (ll_backend__transform_llds__IfInstr_25));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_55, 1) = ((MR_Box) (ll_backend__transform_llds__ThenInstrs_27));
        }
        {
          ll_backend__transform_llds__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_56, 0) = ((MR_Box) (ll_backend__transform_llds__ElseInstr_26));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_56, 1) = ((MR_Box) (ll_backend__transform_llds__ElseInstrs_28));
        }
        {
          *ll_backend__transform_llds__Instrs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__transform_llds__Var_55, ll_backend__transform_llds__Var_56);
        }
      }
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_3,
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_4,
  MR_Word ll_backend__transform_llds__ProcLabel_5,
  MR_Integer ll_backend__transform_llds__MaxSize_6)
{
  {
    MR_bool ll_backend__transform_llds__succeeded;

    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__transform_llds__STATE_VARIABLE_C_4 = ll_backend__transform_llds__STATE_VARIABLE_C_0_3;
      }
    else
      {
        MR_Word ll_backend__transform_llds__Instr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__transform_llds__Instrs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__transform_llds__InstrsTail_18;
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_26_26;
        MR_Word ll_backend__transform_llds__Rval_19;
        MR_Word ll_backend__transform_llds__Targets_20;
        MR_String ll_backend__transform_llds__Comment_21;
        MR_Integer ll_backend__transform_llds__NumTargets_22;
        MR_Word ll_backend__transform_llds__TypeInfo_29_29;
        MR_Word ll_backend__transform_llds__Var_27;

        {
          ll_backend__transform_llds__transform_instructions_6_p_0(ll_backend__transform_llds__Instrs0_13, &ll_backend__transform_llds__InstrsTail_18, ll_backend__transform_llds__STATE_VARIABLE_C_0_3, &ll_backend__transform_llds__STATE_VARIABLE_C_26_26, ll_backend__transform_llds__ProcLabel_5, ll_backend__transform_llds__MaxSize_6);
        }
        ll_backend__transform_llds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Instr0_12, (MR_Integer) 0)));
        ll_backend__transform_llds__Comment_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Instr0_12, (MR_Integer) 1)));
        ll_backend__transform_llds__succeeded = ((((MR_tag((MR_Word) ll_backend__transform_llds__Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_27, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ll_backend__transform_llds__succeeded)
          {
            ll_backend__transform_llds__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_27, (MR_Integer) 1)));
            ll_backend__transform_llds__Targets_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_27, (MR_Integer) 2)));
            ll_backend__transform_llds__TypeInfo_29_29 = (MR_Word) &ll_backend__transform_llds_scalar_common_1[0];
            {
              mercury__list__length_2_p_0(ll_backend__transform_llds__TypeInfo_29_29, ll_backend__transform_llds__Targets_20, &ll_backend__transform_llds__NumTargets_22);
            }
            ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__NumTargets_22 > ll_backend__transform_llds__MaxSize_6);
          }
        if (ll_backend__transform_llds__succeeded)
          {
            MR_Word ll_backend__transform_llds__InstrsHead_23;

            {
              ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Rval_19, ll_backend__transform_llds__Targets_20, ll_backend__transform_llds__Comment_21, &ll_backend__transform_llds__InstrsHead_23, ll_backend__transform_llds__STATE_VARIABLE_C_26_26, ll_backend__transform_llds__STATE_VARIABLE_C_4, ll_backend__transform_llds__MaxSize_6, ll_backend__transform_llds__NumTargets_22, ll_backend__transform_llds__ProcLabel_5);
            }
            {
              mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__transform_llds__InstrsHead_23, ll_backend__transform_llds__InstrsTail_18, ll_backend__transform_llds__HeadVar__2_2);
            }
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__transform_llds__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Instr0_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__InstrsTail_18));
            }
            *ll_backend__transform_llds__STATE_VARIABLE_C_4 = ll_backend__transform_llds__STATE_VARIABLE_C_26_26;
          }
      }
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Integer ll_backend__transform_llds__HeadVar__3_3)
{
  {
    MR_bool ll_backend__transform_llds__succeeded;

    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__transform_llds__Proc0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__transform_llds__Proc0s_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__transform_llds__Proc_7;
        MR_Word ll_backend__transform_llds__Procs_8;
        MR_Word ll_backend__transform_llds__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 3)));
        MR_Word ll_backend__transform_llds__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 5)));
        MR_Word ll_backend__transform_llds__C0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 6)));
        MR_Word ll_backend__transform_llds__Instrs_17;
        MR_Word ll_backend__transform_llds__C_18;
        MR_String ll_backend__transform_llds__Var_45;
        MR_Integer ll_backend__transform_llds__Var_46;
        MR_Word ll_backend__transform_llds__Var_47;
        MR_Word ll_backend__transform_llds__Var_48;
        MR_Word ll_backend__transform_llds__Var_49;
        MR_Word ll_backend__transform_llds__Var_52;
        MR_Word ll_backend__transform_llds__Var_53;
        MR_String ll_backend__transform_llds__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 0)));
        MR_Integer ll_backend__transform_llds__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 1)));
        MR_Word ll_backend__transform_llds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 2)));
        MR_Word ll_backend__transform_llds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 4)));
        MR_Word ll_backend__transform_llds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 7)));
        MR_Word ll_backend__transform_llds__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 8)));
        MR_Word ll_backend__transform_llds__Var_50;
        MR_Word ll_backend__transform_llds__Var_51;

        {
          ll_backend__transform_llds__transform_instructions_6_p_0(ll_backend__transform_llds__Instrs0_15, &ll_backend__transform_llds__Instrs_17, ll_backend__transform_llds__C0_16, &ll_backend__transform_llds__C_18, ll_backend__transform_llds__ProcLabel_14, ll_backend__transform_llds__HeadVar__3_3);
        }
        ll_backend__transform_llds__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 0)));
        ll_backend__transform_llds__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 1)));
        ll_backend__transform_llds__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 2)));
        ll_backend__transform_llds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 3)));
        ll_backend__transform_llds__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 4)));
        ll_backend__transform_llds__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 5)));
        ll_backend__transform_llds__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 6)));
        ll_backend__transform_llds__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 7)));
        ll_backend__transform_llds__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 8)));
        {
          ll_backend__transform_llds__Proc_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 0) = ((MR_Box) (ll_backend__transform_llds__Var_45));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 1) = ((MR_Box) (ll_backend__transform_llds__Var_46));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 2) = ((MR_Box) (ll_backend__transform_llds__Var_47));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 3) = ((MR_Box) (ll_backend__transform_llds__Var_48));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 4) = ((MR_Box) (ll_backend__transform_llds__Var_49));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 5) = ((MR_Box) (ll_backend__transform_llds__Instrs_17));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 6) = ((MR_Box) (ll_backend__transform_llds__C_18));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 7) = ((MR_Box) (ll_backend__transform_llds__Var_52));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 8) = ((MR_Box) (ll_backend__transform_llds__Var_53));
        }
        {
          ll_backend__transform_llds__transform_c_procedure_list_3_p_0(ll_backend__transform_llds__Proc0s_6, &ll_backend__transform_llds__Procs_8, ll_backend__transform_llds__HeadVar__3_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__transform_llds__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Proc_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__Procs_8));
        }
      }
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
  MR_Integer ll_backend__transform_llds__HeadVar__3_3)
{
  {
    MR_bool ll_backend__transform_llds__succeeded;

    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__transform_llds__Module0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__transform_llds__Module0s_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__transform_llds__Module_7;
        MR_Word ll_backend__transform_llds__Modules_8;
        MR_String ll_backend__transform_llds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module0_5, (MR_Integer) 0)));
        MR_Word ll_backend__transform_llds__Procedures0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module0_5, (MR_Integer) 1)));
        MR_Word ll_backend__transform_llds__Procedures_15;

        {
          ll_backend__transform_llds__transform_c_procedure_list_3_p_0(ll_backend__transform_llds__Procedures0_14, &ll_backend__transform_llds__Procedures_15, ll_backend__transform_llds__HeadVar__3_3);
        }
        {
          ll_backend__transform_llds__Module_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module_7, 0) = ((MR_Box) (ll_backend__transform_llds__Name_13));
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module_7, 1) = ((MR_Box) (ll_backend__transform_llds__Procedures_15));
        }
        {
          ll_backend__transform_llds__transform_c_module_list_3_p_0(ll_backend__transform_llds__Module0s_6, &ll_backend__transform_llds__Modules_8, ll_backend__transform_llds__HeadVar__3_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__transform_llds__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Module_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__Modules_8));
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
  MR_Word ll_backend__transform_llds__ModuleName_4,
  MR_String ll_backend__transform_llds__LastModule_5)
{
  {
    MR_bool ll_backend__transform_llds__succeeded;
    MR_Word ll_backend__transform_llds__EndLabelModule_6;
    MR_Integer ll_backend__transform_llds__ProcId_8;
    MR_Word ll_backend__transform_llds__PredId_9;
    MR_Word ll_backend__transform_llds__ProcLabel_11;
    MR_Word ll_backend__transform_llds__Instrs_12;
    MR_Word ll_backend__transform_llds__DummyProc_13;
    MR_Integer ll_backend__transform_llds__Var_16;
    MR_Word ll_backend__transform_llds__Var_17;
    MR_Word ll_backend__transform_llds__Var_18;
    MR_Word ll_backend__transform_llds__Var_19;
    MR_Word ll_backend__transform_llds__Var_23;
    MR_Word ll_backend__transform_llds__Var_25;
    MR_Word ll_backend__transform_llds__Var_28;
    MR_String ll_backend__transform_llds__Var_29;
    MR_Word ll_backend__transform_llds__Var_31;

    {
      ll_backend__transform_llds__ProcId_8 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
    {
      ll_backend__transform_llds__PredId_9 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
    {
      ll_backend__transform_llds__Var_16 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__transform_llds__ProcId_8);
    }
    {
      ll_backend__transform_llds__ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 0) = ((MR_Box) (ll_backend__transform_llds__ModuleName_4));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 2) = ((MR_Box) (ll_backend__transform_llds__ModuleName_4));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 3) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 5) = ((MR_Box) (ll_backend__transform_llds__Var_16));
    }
    {
      ll_backend__transform_llds__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_19, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_19, 1) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_11));
    }
    {
      ll_backend__transform_llds__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Var_18, 1) = ((MR_Box) (ll_backend__transform_llds__Var_19));
    }
    {
      ll_backend__transform_llds__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_17, 0) = ((MR_Box) (ll_backend__transform_llds__Var_18));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_17, 1) = ((MR_Box) ((MR_String) "label to indicate end of previous procedure"));
    }
    {
      ll_backend__transform_llds__Instrs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Instrs_12, 0) = ((MR_Box) (ll_backend__transform_llds__Var_17));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Instrs_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__transform_llds__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_23, 0) = ((MR_Box) (ll_backend__transform_llds__PredId_9));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Var_23, 1) = ((MR_Box) (ll_backend__transform_llds__ProcId_8));
    }
    {
      ll_backend__transform_llds__Var_25 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ll_backend__transform_llds__Var_28 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ll_backend__transform_llds__DummyProc_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 0) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 2) = ((MR_Box) (ll_backend__transform_llds__Var_23));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 3) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_11));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 5) = ((MR_Box) (ll_backend__transform_llds__Instrs_12));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 6) = ((MR_Box) (ll_backend__transform_llds__Var_25));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 7) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 8) = ((MR_Box) (ll_backend__transform_llds__Var_28));
    }
    {
      ll_backend__transform_llds__Var_29 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__LastModule_5, (MR_String) "_END");
    }
    {
      ll_backend__transform_llds__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_31, 0) = ((MR_Box) (ll_backend__transform_llds__DummyProc_13));
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__transform_llds__EndLabelModule_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__EndLabelModule_6, 0) = ((MR_Box) (ll_backend__transform_llds__Var_29));
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__EndLabelModule_6, 1) = ((MR_Box) (ll_backend__transform_llds__Var_31));
    }
    return ll_backend__transform_llds__EndLabelModule_6;
  }
}

void MR_CALL 
ll_backend__transform_llds__transform_llds_3_p_0(
  MR_Word ll_backend__transform_llds__Globals_4,
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17,
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_CFile_18)
{
  {
    MR_bool ll_backend__transform_llds__succeeded;
    MR_Word ll_backend__transform_llds__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 0)));
    MR_Word ll_backend__transform_llds__Modules0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 35)));
    MR_Integer ll_backend__transform_llds__MaxSize_8;
    MR_Word ll_backend__transform_llds__Modules1_9;
    MR_Word ll_backend__transform_llds__GC_10;
    MR_Word ll_backend__transform_llds__Modules_16;
    MR_Word ll_backend__transform_llds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 1)));
    MR_Word ll_backend__transform_llds__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 2)));
    MR_Word ll_backend__transform_llds__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 3)));
    MR_Word ll_backend__transform_llds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 4)));
    MR_Word ll_backend__transform_llds__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 5)));
    MR_Word ll_backend__transform_llds__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 6)));
    MR_Word ll_backend__transform_llds__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 7)));
    MR_Word ll_backend__transform_llds__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 8)));
    MR_Word ll_backend__transform_llds__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 9)));
    MR_Word ll_backend__transform_llds__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 10)));
    MR_Word ll_backend__transform_llds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 11)));
    MR_Word ll_backend__transform_llds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 12)));
    MR_Word ll_backend__transform_llds__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 13)));
    MR_Word ll_backend__transform_llds__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 14)));
    MR_Word ll_backend__transform_llds__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 15)));
    MR_Word ll_backend__transform_llds__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 16)));
    MR_Word ll_backend__transform_llds__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 17)));
    MR_Word ll_backend__transform_llds__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 18)));
    MR_Word ll_backend__transform_llds__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 19)));
    MR_Word ll_backend__transform_llds__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 20)));
    MR_Word ll_backend__transform_llds__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 21)));
    MR_Word ll_backend__transform_llds__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 22)));
    MR_Word ll_backend__transform_llds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 23)));
    MR_Word ll_backend__transform_llds__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 24)));
    MR_Word ll_backend__transform_llds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 25)));
    MR_Word ll_backend__transform_llds__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 26)));
    MR_Word ll_backend__transform_llds__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 27)));
    MR_Word ll_backend__transform_llds__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 28)));
    MR_Word ll_backend__transform_llds__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 29)));
    MR_Word ll_backend__transform_llds__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 30)));
    MR_Word ll_backend__transform_llds__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 31)));
    MR_Word ll_backend__transform_llds__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 32)));
    MR_Word ll_backend__transform_llds__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 33)));
    MR_Word ll_backend__transform_llds__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 34)));
    MR_Word ll_backend__transform_llds__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 36)));
    MR_Word ll_backend__transform_llds__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 37)));
    MR_Word ll_backend__transform_llds__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 38)));
    MR_Word ll_backend__transform_llds__Var_11;
    MR_Word ll_backend__transform_llds__Var_12;
    MR_Word ll_backend__transform_llds__Var_100;
    MR_Word ll_backend__transform_llds__Var_101;
    MR_Word ll_backend__transform_llds__Var_102;
    MR_Word ll_backend__transform_llds__Var_103;
    MR_Word ll_backend__transform_llds__Var_104;
    MR_Word ll_backend__transform_llds__Var_105;
    MR_Word ll_backend__transform_llds__Var_106;
    MR_Word ll_backend__transform_llds__Var_107;
    MR_Word ll_backend__transform_llds__Var_108;
    MR_Word ll_backend__transform_llds__Var_109;
    MR_Word ll_backend__transform_llds__Var_110;
    MR_Word ll_backend__transform_llds__Var_111;
    MR_Word ll_backend__transform_llds__Var_112;
    MR_Word ll_backend__transform_llds__Var_113;
    MR_Word ll_backend__transform_llds__Var_114;
    MR_Word ll_backend__transform_llds__Var_115;
    MR_Word ll_backend__transform_llds__Var_116;
    MR_Word ll_backend__transform_llds__Var_117;
    MR_Word ll_backend__transform_llds__Var_118;
    MR_Word ll_backend__transform_llds__Var_119;
    MR_Word ll_backend__transform_llds__Var_120;
    MR_Word ll_backend__transform_llds__Var_121;
    MR_Word ll_backend__transform_llds__Var_122;
    MR_Word ll_backend__transform_llds__Var_123;
    MR_Word ll_backend__transform_llds__Var_124;
    MR_Word ll_backend__transform_llds__Var_125;
    MR_Word ll_backend__transform_llds__Var_126;
    MR_Word ll_backend__transform_llds__Var_127;
    MR_Word ll_backend__transform_llds__Var_128;
    MR_Word ll_backend__transform_llds__Var_129;
    MR_Word ll_backend__transform_llds__Var_130;
    MR_Word ll_backend__transform_llds__Var_131;
    MR_Word ll_backend__transform_llds__Var_132;
    MR_Word ll_backend__transform_llds__Var_133;
    MR_Word ll_backend__transform_llds__Var_134;
    MR_Word ll_backend__transform_llds__Var_136;
    MR_Word ll_backend__transform_llds__Var_137;
    MR_Word ll_backend__transform_llds__Var_138;
    MR_Word ll_backend__transform_llds__Var_135;

    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__transform_llds__Globals_4, (MR_Integer) 317, &ll_backend__transform_llds__MaxSize_8);
    }
    ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__MaxSize_8 == (MR_Integer) 0);
    if (ll_backend__transform_llds__succeeded)
      ll_backend__transform_llds__Modules1_9 = ll_backend__transform_llds__Modules0_7;
    else
      {
        ll_backend__transform_llds__transform_c_module_list_3_p_0(ll_backend__transform_llds__Modules0_7, &ll_backend__transform_llds__Modules1_9, ll_backend__transform_llds__MaxSize_8);
      }
    {
      libs__globals__get_gc_method_2_p_0(ll_backend__transform_llds__Globals_4, &ll_backend__transform_llds__GC_10);
    }
    ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__GC_10 == (MR_Integer) 5);
    if (ll_backend__transform_llds__succeeded)
      {
        ll_backend__transform_llds__succeeded = ((MR_tag((MR_Word) ll_backend__transform_llds__Modules1_9)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__transform_llds__succeeded)
          {
            ll_backend__transform_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Modules1_9, (MR_Integer) 0)));
            ll_backend__transform_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Modules1_9, (MR_Integer) 1)));
          }
      }
    if (ll_backend__transform_llds__succeeded)
      {
        MR_Word ll_backend__transform_llds__TypeCtorInfo_139_139 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0;
        MR_Word ll_backend__transform_llds__LastModule_13;
        MR_String ll_backend__transform_llds__LastModuleName_14;
        MR_Word ll_backend__transform_llds__Var_20;
        MR_Word ll_backend__transform_llds__Var_21;
        MR_Box ll_backend__transform_llds__conv0_LastModule_13;
        MR_Word ll_backend__transform_llds__Var_15;

        {
          mercury__list__det_last_2_p_0(ll_backend__transform_llds__TypeCtorInfo_139_139, ll_backend__transform_llds__Modules1_9, &ll_backend__transform_llds__conv0_LastModule_13);
        }
        ll_backend__transform_llds__LastModule_13 = ((MR_Word) ll_backend__transform_llds__conv0_LastModule_13);
        ll_backend__transform_llds__LastModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__LastModule_13, (MR_Integer) 0)));
        ll_backend__transform_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__LastModule_13, (MR_Integer) 1)));
        {
          ll_backend__transform_llds__Var_21 = ll_backend__transform_llds__gen_end_label_module_2_f_0(ll_backend__transform_llds__ModuleName_6, ll_backend__transform_llds__LastModuleName_14);
        }
        {
          ll_backend__transform_llds__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_20, 0) = ((MR_Box) (ll_backend__transform_llds__Var_21));
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__transform_llds__Modules_16 = mercury__list__f_43_43_2_f_0(ll_backend__transform_llds__TypeCtorInfo_139_139, ll_backend__transform_llds__Modules1_9, ll_backend__transform_llds__Var_20);
        }
      }
    else
      ll_backend__transform_llds__Modules_16 = ll_backend__transform_llds__Modules1_9;
    ll_backend__transform_llds__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 0)));
    ll_backend__transform_llds__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 1)));
    ll_backend__transform_llds__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 2)));
    ll_backend__transform_llds__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 3)));
    ll_backend__transform_llds__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 4)));
    ll_backend__transform_llds__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 5)));
    ll_backend__transform_llds__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 6)));
    ll_backend__transform_llds__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 7)));
    ll_backend__transform_llds__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 8)));
    ll_backend__transform_llds__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 9)));
    ll_backend__transform_llds__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 10)));
    ll_backend__transform_llds__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 11)));
    ll_backend__transform_llds__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 12)));
    ll_backend__transform_llds__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 13)));
    ll_backend__transform_llds__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 14)));
    ll_backend__transform_llds__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 15)));
    ll_backend__transform_llds__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 16)));
    ll_backend__transform_llds__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 17)));
    ll_backend__transform_llds__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 18)));
    ll_backend__transform_llds__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 19)));
    ll_backend__transform_llds__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 20)));
    ll_backend__transform_llds__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 21)));
    ll_backend__transform_llds__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 22)));
    ll_backend__transform_llds__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 23)));
    ll_backend__transform_llds__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 24)));
    ll_backend__transform_llds__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 25)));
    ll_backend__transform_llds__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 26)));
    ll_backend__transform_llds__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 27)));
    ll_backend__transform_llds__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 28)));
    ll_backend__transform_llds__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 29)));
    ll_backend__transform_llds__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 30)));
    ll_backend__transform_llds__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 31)));
    ll_backend__transform_llds__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 32)));
    ll_backend__transform_llds__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 33)));
    ll_backend__transform_llds__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 34)));
    ll_backend__transform_llds__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 35)));
    ll_backend__transform_llds__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 36)));
    ll_backend__transform_llds__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 37)));
    ll_backend__transform_llds__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 38)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__transform_llds__STATE_VARIABLE_CFile_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__transform_llds__Var_100));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__transform_llds__Var_101));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__transform_llds__Var_102));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__transform_llds__Var_103));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__transform_llds__Var_104));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__transform_llds__Var_105));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__transform_llds__Var_106));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__transform_llds__Var_107));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__transform_llds__Var_108));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__transform_llds__Var_109));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__transform_llds__Var_110));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__transform_llds__Var_111));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__transform_llds__Var_112));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ll_backend__transform_llds__Var_113));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ll_backend__transform_llds__Var_114));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ll_backend__transform_llds__Var_115));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ll_backend__transform_llds__Var_116));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (ll_backend__transform_llds__Var_117));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (ll_backend__transform_llds__Var_118));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (ll_backend__transform_llds__Var_119));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (ll_backend__transform_llds__Var_120));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ll_backend__transform_llds__Var_121));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ll_backend__transform_llds__Var_122));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ll_backend__transform_llds__Var_123));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ll_backend__transform_llds__Var_124));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ll_backend__transform_llds__Var_125));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ll_backend__transform_llds__Var_126));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ll_backend__transform_llds__Var_127));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ll_backend__transform_llds__Var_128));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ll_backend__transform_llds__Var_129));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ll_backend__transform_llds__Var_130));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ll_backend__transform_llds__Var_131));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ll_backend__transform_llds__Var_132));
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ll_backend__transform_llds__Var_133));
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ll_backend__transform_llds__Var_134));
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ll_backend__transform_llds__Modules_16));
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ll_backend__transform_llds__Var_136));
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ll_backend__transform_llds__Var_137));
      MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (ll_backend__transform_llds__Var_138));
    }
  }
}

void mercury__ll_backend__transform_llds__init(void)
{
}

void mercury__ll_backend__transform_llds__init_type_tables(void)
{
}

void mercury__ll_backend__transform_llds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__transform_llds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.transform_llds. */
