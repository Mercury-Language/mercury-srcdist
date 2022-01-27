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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




#line 184 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__Rval_10,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__Targets_11,
#line 184 "transform_llds.m"
  MR_String ll_backend__transform_llds__Comment_12,
#line 184 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__Instrs_13,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_29,
#line 184 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_30,
#line 184 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__MaxSize_15,
#line 184 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__NumTargets_16,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ProcLabel_17);

#line 160 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 160 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_3,
#line 160 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_4,
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ProcLabel_5,
#line 160 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__MaxSize_6);

#line 139 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
#line 139 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 139 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 139 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__HeadVar__3_3);

#line 119 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
#line 119 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 119 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 119 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__HeadVar__3_3);

#line 102 "transform_llds.m"
static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
#line 102 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ModuleName_4,
#line 102 "transform_llds.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 184 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__Rval_10,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__Targets_11,
#line 184 "transform_llds.m"
  MR_String ll_backend__transform_llds__Comment_12,
#line 184 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__Instrs_13,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_29,
#line 184 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_30,
#line 184 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__MaxSize_15,
#line 184 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__NumTargets_16,
#line 184 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ProcLabel_17)
#line 184 "transform_llds.m"
{
#line 192 "transform_llds.m"
  {
#line 192 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__NumTargets_16 <= ll_backend__transform_llds__MaxSize_15);

#line 192 "transform_llds.m"
    if (ll_backend__transform_llds__succeeded)
#line 191 "transform_llds.m"
      {
#line 191 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_31_31;
#line 191 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_32_32;

#line 191 "transform_llds.m"
        {
#line 191 "transform_llds.m"
          ll_backend__transform_llds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_32_32, 1) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_32_32, 2) = ((MR_Box) (ll_backend__transform_llds__Targets_11));
#line 191 "transform_llds.m"
        }
#line 191 "transform_llds.m"
        {
#line 191 "transform_llds.m"
          ll_backend__transform_llds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_31_31, 0) = ((MR_Box) (ll_backend__transform_llds__V_32_32));
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_31_31, 1) = ((MR_Box) (ll_backend__transform_llds__Comment_12));
#line 191 "transform_llds.m"
        }
#line 191 "transform_llds.m"
        {
#line 191 "transform_llds.m"
          MR_Word base;
#line 191 "transform_llds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "transform_llds.m"
          *ll_backend__transform_llds__Instrs_13 = base;
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__V_31_31));
#line 191 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "transform_llds.m"
        }
#line 191 "transform_llds.m"
        *ll_backend__transform_llds__STATE_VARIABLE_C_30 = ll_backend__transform_llds__STATE_VARIABLE_C_0_29;
#line 191 "transform_llds.m"
      }
#line 192 "transform_llds.m"
    else
#line 193 "transform_llds.m"
      {
#line 193 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__LabelNum_18;
#line 193 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__Mid_19;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__StartTargets_20;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__EndTargets_21;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Index_22;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Test_23;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__ElseAddr_24;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__IfInstr_25;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__ElseInstr_26;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__ThenInstrs_27;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__ElseInstrs_28;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_34_34;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_37_37;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_38_38;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_42_42;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_43_43;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_45_45;
#line 193 "transform_llds.m"
        MR_String ll_backend__transform_llds__V_48_48;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_49_49;
#line 193 "transform_llds.m"
        MR_String ll_backend__transform_llds__V_51_51;
#line 193 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__V_53_53;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_55_55;
#line 193 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_56_56;

#line 193 "transform_llds.m"
        {
#line 193 "transform_llds.m"
          mercury__counter__allocate_3_p_0(&ll_backend__transform_llds__LabelNum_18, ll_backend__transform_llds__STATE_VARIABLE_C_0_29, &ll_backend__transform_llds__STATE_VARIABLE_C_34_34);
        }
#line 194 "transform_llds.m"
        {
#line 194 "transform_llds.m"
          ll_backend__transform_llds__Mid_19 = mercury__int__f_47_47_2_f_0(ll_backend__transform_llds__NumTargets_16, (MR_Integer) 2);
        }
#line 195 "transform_llds.m"
        {
#line 195 "transform_llds.m"
          mercury__list__det_split_list_4_p_0((MR_Word) &ll_backend__transform_llds_scalar_common_1[0], ll_backend__transform_llds__Mid_19, ll_backend__transform_llds__Targets_11, &ll_backend__transform_llds__StartTargets_20, &ll_backend__transform_llds__EndTargets_21);
        }
#line 196 "transform_llds.m"
        {
#line 196 "transform_llds.m"
          ll_backend__transform_llds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_38_38, 0) = ((MR_Box) (ll_backend__transform_llds__Mid_19));
#line 196 "transform_llds.m"
        }
#line 196 "transform_llds.m"
        {
#line 196 "transform_llds.m"
          ll_backend__transform_llds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_37_37, 1) = ((MR_Box) (ll_backend__transform_llds__V_38_38));
#line 196 "transform_llds.m"
        }
#line 196 "transform_llds.m"
        {
#line 196 "transform_llds.m"
          ll_backend__transform_llds__Index_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 2) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
#line 196 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Index_22, 3) = ((MR_Box) (ll_backend__transform_llds__V_37_37));
#line 196 "transform_llds.m"
        }
#line 197 "transform_llds.m"
        {
#line 197 "transform_llds.m"
          ll_backend__transform_llds__Test_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 197 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 197 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 197 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 2) = ((MR_Box) (ll_backend__transform_llds__Rval_10));
#line 197 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__Test_23, 3) = ((MR_Box) (ll_backend__transform_llds__V_37_37));
#line 197 "transform_llds.m"
        }
#line 198 "transform_llds.m"
        {
#line 198 "transform_llds.m"
          ll_backend__transform_llds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_42_42, 0) = ((MR_Box) (ll_backend__transform_llds__LabelNum_18));
#line 198 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_42_42, 1) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_17));
#line 198 "transform_llds.m"
        }
#line 198 "transform_llds.m"
        {
#line 198 "transform_llds.m"
          ll_backend__transform_llds__ElseAddr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__ElseAddr_24, 0) = ((MR_Box) (ll_backend__transform_llds__V_42_42));
#line 198 "transform_llds.m"
        }
#line 199 "transform_llds.m"
        {
#line 199 "transform_llds.m"
          ll_backend__transform_llds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 199 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 199 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_43_43, 1) = ((MR_Box) (ll_backend__transform_llds__Test_23));
#line 199 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_43_43, 2) = ((MR_Box) (ll_backend__transform_llds__ElseAddr_24));
#line 199 "transform_llds.m"
        }
#line 199 "transform_llds.m"
        {
#line 199 "transform_llds.m"
          ll_backend__transform_llds__IfInstr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__IfInstr_25, 0) = ((MR_Box) (ll_backend__transform_llds__V_43_43));
#line 199 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__IfInstr_25, 1) = ((MR_Box) ((MR_String) "binary search"));
#line 199 "transform_llds.m"
        }
#line 200 "transform_llds.m"
        {
#line 200 "transform_llds.m"
          ll_backend__transform_llds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 200 "transform_llds.m"
          MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_45_45, 1) = ((MR_Box) (ll_backend__transform_llds__V_42_42));
#line 200 "transform_llds.m"
        }
#line 200 "transform_llds.m"
        {
#line 200 "transform_llds.m"
          ll_backend__transform_llds__ElseInstr_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ElseInstr_26, 0) = ((MR_Box) (ll_backend__transform_llds__V_45_45));
#line 200 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ElseInstr_26, 1) = ((MR_Box) ((MR_String) ""));
#line 200 "transform_llds.m"
        }
#line 202 "transform_llds.m"
        {
#line 202 "transform_llds.m"
          ll_backend__transform_llds__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__Comment_12, (MR_String) " then");
        }
#line 202 "transform_llds.m"
        {
#line 202 "transform_llds.m"
          ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Rval_10, ll_backend__transform_llds__StartTargets_20, ll_backend__transform_llds__V_48_48, &ll_backend__transform_llds__ThenInstrs_27, ll_backend__transform_llds__STATE_VARIABLE_C_34_34, &ll_backend__transform_llds__STATE_VARIABLE_C_49_49, ll_backend__transform_llds__MaxSize_15, ll_backend__transform_llds__Mid_19, ll_backend__transform_llds__ProcLabel_17);
        }
#line 204 "transform_llds.m"
        {
#line 204 "transform_llds.m"
          ll_backend__transform_llds__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__Comment_12, (MR_String) " else");
        }
#line 205 "transform_llds.m"
        ll_backend__transform_llds__V_53_53 = (ll_backend__transform_llds__NumTargets_16 - ll_backend__transform_llds__Mid_19);
#line 204 "transform_llds.m"
        {
#line 204 "transform_llds.m"
          ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Index_22, ll_backend__transform_llds__EndTargets_21, ll_backend__transform_llds__V_51_51, &ll_backend__transform_llds__ElseInstrs_28, ll_backend__transform_llds__STATE_VARIABLE_C_49_49, ll_backend__transform_llds__STATE_VARIABLE_C_30, ll_backend__transform_llds__MaxSize_15, ll_backend__transform_llds__V_53_53, ll_backend__transform_llds__ProcLabel_17);
        }
#line 207 "transform_llds.m"
        {
#line 207 "transform_llds.m"
          ll_backend__transform_llds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_55_55, 0) = ((MR_Box) (ll_backend__transform_llds__IfInstr_25));
#line 207 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_55_55, 1) = ((MR_Box) (ll_backend__transform_llds__ThenInstrs_27));
#line 207 "transform_llds.m"
        }
#line 207 "transform_llds.m"
        {
#line 207 "transform_llds.m"
          ll_backend__transform_llds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_56_56, 0) = ((MR_Box) (ll_backend__transform_llds__ElseInstr_26));
#line 207 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_56_56, 1) = ((MR_Box) (ll_backend__transform_llds__ElseInstrs_28));
#line 207 "transform_llds.m"
        }
#line 207 "transform_llds.m"
        {
#line 207 "transform_llds.m"
          *ll_backend__transform_llds__Instrs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__transform_llds__V_55_55, ll_backend__transform_llds__V_56_56);
        }
#line 193 "transform_llds.m"
      }
#line 192 "transform_llds.m"
  }
#line 184 "transform_llds.m"
}

#line 160 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 160 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_0_3,
#line 160 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_C_4,
#line 160 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ProcLabel_5,
#line 160 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__MaxSize_6)
#line 160 "transform_llds.m"
{
#line 163 "transform_llds.m"
  {
#line 163 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded;

#line 163 "transform_llds.m"
    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "transform_llds.m"
      {
#line 163 "transform_llds.m"
        *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 163 "transform_llds.m"
        *ll_backend__transform_llds__STATE_VARIABLE_C_4 = ll_backend__transform_llds__STATE_VARIABLE_C_0_3;
#line 163 "transform_llds.m"
      }
#line 163 "transform_llds.m"
    else
#line 164 "transform_llds.m"
      {
#line 164 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Instr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Instrs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "transform_llds.m"
        MR_Word ll_backend__transform_llds__InstrsTail_18;
#line 164 "transform_llds.m"
        MR_Word ll_backend__transform_llds__STATE_VARIABLE_C_26_26;
#line 174 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Rval_19;
#line 174 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Targets_20;
#line 174 "transform_llds.m"
        MR_String ll_backend__transform_llds__Comment_21;
#line 174 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__NumTargets_22;
#line 167 "transform_llds.m"
        MR_Word ll_backend__transform_llds__TypeInfo_29_29;
#line 167 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_27_27;

#line 165 "transform_llds.m"
        {
#line 165 "transform_llds.m"
          ll_backend__transform_llds__transform_instructions_6_p_0(ll_backend__transform_llds__Instrs0_13, &ll_backend__transform_llds__InstrsTail_18, ll_backend__transform_llds__STATE_VARIABLE_C_0_3, &ll_backend__transform_llds__STATE_VARIABLE_C_26_26, ll_backend__transform_llds__ProcLabel_5, ll_backend__transform_llds__MaxSize_6);
        }
#line 167 "transform_llds.m"
        ll_backend__transform_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Instr0_12, (MR_Integer) 0)));
#line 167 "transform_llds.m"
        ll_backend__transform_llds__Comment_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Instr0_12, (MR_Integer) 1)));
#line 167 "transform_llds.m"
        ll_backend__transform_llds__succeeded = ((((MR_tag((MR_Word) ll_backend__transform_llds__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 167 "transform_llds.m"
        if (ll_backend__transform_llds__succeeded)
#line 167 "transform_llds.m"
          {
#line 167 "transform_llds.m"
            ll_backend__transform_llds__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_27_27, (MR_Integer) 1)));
#line 167 "transform_llds.m"
            ll_backend__transform_llds__Targets_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_27_27, (MR_Integer) 2)));
#line 616 "ll_backend.transform_llds.c"
            ll_backend__transform_llds__TypeInfo_29_29 = (MR_Word) &ll_backend__transform_llds_scalar_common_1[0];
#line 168 "transform_llds.m"
            {
#line 168 "transform_llds.m"
              mercury__list__length_2_p_0(ll_backend__transform_llds__TypeInfo_29_29, ll_backend__transform_llds__Targets_20, &ll_backend__transform_llds__NumTargets_22);
            }
#line 169 "transform_llds.m"
            ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__NumTargets_22 > ll_backend__transform_llds__MaxSize_6);
#line 167 "transform_llds.m"
          }
#line 174 "transform_llds.m"
        if (ll_backend__transform_llds__succeeded)
#line 172 "transform_llds.m"
          {
#line 172 "transform_llds.m"
            MR_Word ll_backend__transform_llds__InstrsHead_23;

#line 171 "transform_llds.m"
            {
#line 171 "transform_llds.m"
              ll_backend__transform_llds__split_computed_goto_9_p_0(ll_backend__transform_llds__Rval_19, ll_backend__transform_llds__Targets_20, ll_backend__transform_llds__Comment_21, &ll_backend__transform_llds__InstrsHead_23, ll_backend__transform_llds__STATE_VARIABLE_C_26_26, ll_backend__transform_llds__STATE_VARIABLE_C_4, ll_backend__transform_llds__MaxSize_6, ll_backend__transform_llds__NumTargets_22, ll_backend__transform_llds__ProcLabel_5);
            }
#line 173 "transform_llds.m"
            {
#line 173 "transform_llds.m"
              mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__transform_llds__InstrsHead_23, ll_backend__transform_llds__InstrsTail_18, ll_backend__transform_llds__HeadVar__2_2);
#line 173 "transform_llds.m"
              return;
            }
#line 172 "transform_llds.m"
          }
#line 174 "transform_llds.m"
        else
#line 175 "transform_llds.m"
          {
#line 175 "transform_llds.m"
            {
#line 175 "transform_llds.m"
              MR_Word base;
#line 175 "transform_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "transform_llds.m"
              *ll_backend__transform_llds__HeadVar__2_2 = base;
#line 175 "transform_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Instr0_12));
#line 175 "transform_llds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__InstrsTail_18));
#line 175 "transform_llds.m"
            }
#line 175 "transform_llds.m"
            *ll_backend__transform_llds__STATE_VARIABLE_C_4 = ll_backend__transform_llds__STATE_VARIABLE_C_26_26;
#line 175 "transform_llds.m"
          }
#line 164 "transform_llds.m"
      }
#line 163 "transform_llds.m"
  }
#line 160 "transform_llds.m"
}

#line 139 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
#line 139 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 139 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 139 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__HeadVar__3_3)
#line 139 "transform_llds.m"
{
#line 142 "transform_llds.m"
  {
#line 142 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded;

#line 142 "transform_llds.m"
    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "transform_llds.m"
      *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 142 "transform_llds.m"
    else
#line 143 "transform_llds.m"
      {
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Proc0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Proc0s_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Proc_7;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Procs_8;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 5)));
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 4)));
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__C0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 6)));
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Instrs_17;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__C_18;
#line 143 "transform_llds.m"
        MR_String ll_backend__transform_llds__V_45_45;
#line 143 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__V_46_46;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_47_47;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_48_48;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_50_50;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_52_52;
#line 143 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_53_53;
#line 153 "transform_llds.m"
        MR_String ll_backend__transform_llds__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 0)));
#line 153 "transform_llds.m"
        MR_Integer ll_backend__transform_llds__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 1)));
#line 153 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 2)));
#line 153 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 3)));
#line 153 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 7)));
#line 153 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 8)));
#line 157 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_49_49;
#line 157 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_51_51;

#line 156 "transform_llds.m"
        {
#line 156 "transform_llds.m"
          ll_backend__transform_llds__transform_instructions_6_p_0(ll_backend__transform_llds__Instrs0_15, &ll_backend__transform_llds__Instrs_17, ll_backend__transform_llds__C0_16, &ll_backend__transform_llds__C_18, ll_backend__transform_llds__ProcLabel_14, ll_backend__transform_llds__HeadVar__3_3);
        }
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 0)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 1)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 2)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 3)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 4)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 5)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 6)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 7)));
#line 157 "transform_llds.m"
        ll_backend__transform_llds__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc0_5, (MR_Integer) 8)));
#line 158 "transform_llds.m"
        {
#line 158 "transform_llds.m"
          ll_backend__transform_llds__Proc_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 0) = ((MR_Box) (ll_backend__transform_llds__V_45_45));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 1) = ((MR_Box) (ll_backend__transform_llds__V_46_46));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 2) = ((MR_Box) (ll_backend__transform_llds__V_47_47));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 3) = ((MR_Box) (ll_backend__transform_llds__V_48_48));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 4) = ((MR_Box) (ll_backend__transform_llds__Instrs_17));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 5) = ((MR_Box) (ll_backend__transform_llds__V_50_50));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 6) = ((MR_Box) (ll_backend__transform_llds__C_18));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 7) = ((MR_Box) (ll_backend__transform_llds__V_52_52));
#line 158 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Proc_7, 8) = ((MR_Box) (ll_backend__transform_llds__V_53_53));
#line 158 "transform_llds.m"
        }
#line 145 "transform_llds.m"
        {
#line 145 "transform_llds.m"
          ll_backend__transform_llds__transform_c_procedure_list_3_p_0(ll_backend__transform_llds__Proc0s_6, &ll_backend__transform_llds__Procs_8, ll_backend__transform_llds__HeadVar__3_3);
        }
#line 143 "transform_llds.m"
        {
#line 143 "transform_llds.m"
          MR_Word base;
#line 143 "transform_llds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "transform_llds.m"
          *ll_backend__transform_llds__HeadVar__2_2 = base;
#line 143 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Proc_7));
#line 143 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__Procs_8));
#line 143 "transform_llds.m"
        }
#line 143 "transform_llds.m"
      }
#line 142 "transform_llds.m"
  }
#line 139 "transform_llds.m"
}

#line 119 "transform_llds.m"
static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
#line 119 "transform_llds.m"
  MR_Word ll_backend__transform_llds__HeadVar__1_1,
#line 119 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__HeadVar__2_2,
#line 119 "transform_llds.m"
  MR_Integer ll_backend__transform_llds__HeadVar__3_3)
#line 119 "transform_llds.m"
{
#line 122 "transform_llds.m"
  {
#line 122 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded;

#line 122 "transform_llds.m"
    if ((ll_backend__transform_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "transform_llds.m"
      *ll_backend__transform_llds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 122 "transform_llds.m"
    else
#line 123 "transform_llds.m"
      {
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Module0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Module0s_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Module_7;
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Modules_8;
#line 123 "transform_llds.m"
        MR_String ll_backend__transform_llds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module0_5, (MR_Integer) 0)));
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Procedures0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module0_5, (MR_Integer) 1)));
#line 123 "transform_llds.m"
        MR_Word ll_backend__transform_llds__Procedures_15;

#line 134 "transform_llds.m"
        {
#line 134 "transform_llds.m"
          ll_backend__transform_llds__transform_c_procedure_list_3_p_0(ll_backend__transform_llds__Procedures0_14, &ll_backend__transform_llds__Procedures_15, ll_backend__transform_llds__HeadVar__3_3);
        }
#line 135 "transform_llds.m"
        {
#line 135 "transform_llds.m"
          ll_backend__transform_llds__Module_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module_7, 0) = ((MR_Box) (ll_backend__transform_llds__Name_13));
#line 135 "transform_llds.m"
          MR_hl_field(MR_mktag(0), ll_backend__transform_llds__Module_7, 1) = ((MR_Box) (ll_backend__transform_llds__Procedures_15));
#line 135 "transform_llds.m"
        }
#line 125 "transform_llds.m"
        {
#line 125 "transform_llds.m"
          ll_backend__transform_llds__transform_c_module_list_3_p_0(ll_backend__transform_llds__Module0s_6, &ll_backend__transform_llds__Modules_8, ll_backend__transform_llds__HeadVar__3_3);
        }
#line 123 "transform_llds.m"
        {
#line 123 "transform_llds.m"
          MR_Word base;
#line 123 "transform_llds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "transform_llds.m"
          *ll_backend__transform_llds__HeadVar__2_2 = base;
#line 123 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__transform_llds__Module_7));
#line 123 "transform_llds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__transform_llds__Modules_8));
#line 123 "transform_llds.m"
        }
#line 123 "transform_llds.m"
      }
#line 122 "transform_llds.m"
  }
#line 119 "transform_llds.m"
}

#line 102 "transform_llds.m"
static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
#line 102 "transform_llds.m"
  MR_Word ll_backend__transform_llds__ModuleName_4,
#line 102 "transform_llds.m"
  MR_String ll_backend__transform_llds__LastModule_5)
#line 102 "transform_llds.m"
{
#line 104 "transform_llds.m"
  {
#line 104 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__EndLabelModule_6;
#line 104 "transform_llds.m"
    MR_Integer ll_backend__transform_llds__ProcId_8;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__PredId_9;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__ProcLabel_11;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__Instrs_12;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__DummyProc_13;
#line 104 "transform_llds.m"
    MR_Integer ll_backend__transform_llds__V_16_16;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_17_17;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_18_18;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_19_19;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_23_23;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_25_25;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_28_28;
#line 104 "transform_llds.m"
    MR_String ll_backend__transform_llds__V_29_29;
#line 104 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_31_31;

#line 106 "transform_llds.m"
    {
#line 106 "transform_llds.m"
      ll_backend__transform_llds__ProcId_8 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
#line 107 "transform_llds.m"
    {
#line 107 "transform_llds.m"
      ll_backend__transform_llds__PredId_9 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
#line 110 "transform_llds.m"
    {
#line 110 "transform_llds.m"
      ll_backend__transform_llds__V_16_16 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__transform_llds__ProcId_8);
    }
#line 109 "transform_llds.m"
    {
#line 109 "transform_llds.m"
      ll_backend__transform_llds__ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 0) = ((MR_Box) (ll_backend__transform_llds__ModuleName_4));
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 1) = ((MR_Box) ((MR_Integer) 0));
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 2) = ((MR_Box) (ll_backend__transform_llds__ModuleName_4));
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 3) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
#line 109 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__ProcLabel_11, 5) = ((MR_Box) (ll_backend__transform_llds__V_16_16));
#line 109 "transform_llds.m"
    }
#line 111 "transform_llds.m"
    {
#line 111 "transform_llds.m"
      ll_backend__transform_llds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_19_19, 0) = ((MR_Box) ((MR_Integer) 1));
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_19_19, 1) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_11));
#line 111 "transform_llds.m"
    }
#line 111 "transform_llds.m"
    {
#line 111 "transform_llds.m"
      ll_backend__transform_llds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(3), ll_backend__transform_llds__V_18_18, 1) = ((MR_Box) (ll_backend__transform_llds__V_19_19));
#line 111 "transform_llds.m"
    }
#line 111 "transform_llds.m"
    {
#line 111 "transform_llds.m"
      ll_backend__transform_llds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_17_17, 0) = ((MR_Box) (ll_backend__transform_llds__V_18_18));
#line 111 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_17_17, 1) = ((MR_Box) ((MR_String) "label to indicate end of previous procedure"));
#line 111 "transform_llds.m"
    }
#line 112 "transform_llds.m"
    {
#line 112 "transform_llds.m"
      ll_backend__transform_llds__Instrs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Instrs_12, 0) = ((MR_Box) (ll_backend__transform_llds__V_17_17));
#line 112 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Instrs_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "transform_llds.m"
    }
#line 113 "transform_llds.m"
    {
#line 113 "transform_llds.m"
      ll_backend__transform_llds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_23_23, 0) = ((MR_Box) (ll_backend__transform_llds__PredId_9));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__V_23_23, 1) = ((MR_Box) (ll_backend__transform_llds__ProcId_8));
#line 113 "transform_llds.m"
    }
#line 114 "transform_llds.m"
    {
#line 114 "transform_llds.m"
      ll_backend__transform_llds__V_25_25 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 114 "transform_llds.m"
    {
#line 114 "transform_llds.m"
      ll_backend__transform_llds__V_28_28 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 113 "transform_llds.m"
    {
#line 113 "transform_llds.m"
      ll_backend__transform_llds__DummyProc_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 0) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 2) = ((MR_Box) (ll_backend__transform_llds__V_23_23));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 3) = ((MR_Box) ((MR_Integer) 0));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 4) = ((MR_Box) (ll_backend__transform_llds__Instrs_12));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 5) = ((MR_Box) (ll_backend__transform_llds__ProcLabel_11));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 6) = ((MR_Box) (ll_backend__transform_llds__V_25_25));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 7) = ((MR_Box) ((MR_Integer) 1));
#line 113 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__DummyProc_13, 8) = ((MR_Box) (ll_backend__transform_llds__V_28_28));
#line 113 "transform_llds.m"
    }
#line 115 "transform_llds.m"
    {
#line 115 "transform_llds.m"
      ll_backend__transform_llds__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__transform_llds__LastModule_5, (MR_String) "_END");
    }
#line 115 "transform_llds.m"
    {
#line 115 "transform_llds.m"
      ll_backend__transform_llds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_31_31, 0) = ((MR_Box) (ll_backend__transform_llds__DummyProc_13));
#line 115 "transform_llds.m"
      MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 115 "transform_llds.m"
    }
#line 115 "transform_llds.m"
    {
#line 115 "transform_llds.m"
      ll_backend__transform_llds__EndLabelModule_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__EndLabelModule_6, 0) = ((MR_Box) (ll_backend__transform_llds__V_29_29));
#line 115 "transform_llds.m"
      MR_hl_field(MR_mktag(0), ll_backend__transform_llds__EndLabelModule_6, 1) = ((MR_Box) (ll_backend__transform_llds__V_31_31));
#line 115 "transform_llds.m"
    }
#line 104 "transform_llds.m"
    return ll_backend__transform_llds__EndLabelModule_6;
#line 104 "transform_llds.m"
  }
#line 102 "transform_llds.m"
}

#line 31 "transform_llds.m"
void MR_CALL 
ll_backend__transform_llds__transform_llds_3_p_0(
#line 31 "transform_llds.m"
  MR_Word ll_backend__transform_llds__Globals_4,
#line 31 "transform_llds.m"
  MR_Word ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17,
#line 31 "transform_llds.m"
  MR_Word * ll_backend__transform_llds__STATE_VARIABLE_CFile_18)
#line 31 "transform_llds.m"
{
#line 56 "transform_llds.m"
  {
#line 56 "transform_llds.m"
    MR_bool ll_backend__transform_llds__succeeded;
#line 56 "transform_llds.m"
    MR_Word ll_backend__transform_llds__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 0)));
#line 56 "transform_llds.m"
    MR_Word ll_backend__transform_llds__Modules0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 35)));
#line 56 "transform_llds.m"
    MR_Integer ll_backend__transform_llds__MaxSize_8;
#line 56 "transform_llds.m"
    MR_Word ll_backend__transform_llds__Modules1_9;
#line 56 "transform_llds.m"
    MR_Word ll_backend__transform_llds__GC_10;
#line 56 "transform_llds.m"
    MR_Word ll_backend__transform_llds__Modules_16;
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 1)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 2)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 3)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 4)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 5)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 6)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 7)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 8)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 9)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 10)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 11)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 12)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 13)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 14)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 15)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 16)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 17)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 18)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 19)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 20)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 21)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 22)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 23)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 24)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 25)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 26)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 27)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 28)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 29)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 30)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 31)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 32)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 33)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 34)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 36)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 37)));
#line 57 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 38)));
#line 70 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_11_11;
#line 70 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_12_12;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_100_100;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_101_101;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_102_102;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_103_103;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_104_104;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_105_105;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_106_106;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_107_107;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_108_108;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_109_109;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_110_110;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_111_111;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_112_112;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_113_113;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_114_114;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_115_115;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_116_116;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_117_117;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_118_118;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_119_119;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_120_120;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_121_121;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_122_122;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_123_123;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_124_124;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_125_125;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_126_126;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_127_127;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_128_128;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_129_129;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_130_130;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_131_131;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_132_132;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_133_133;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_134_134;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_136_136;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_137_137;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_138_138;
#line 79 "transform_llds.m"
    MR_Word ll_backend__transform_llds__V_135_135;

#line 60 "transform_llds.m"
    {
#line 60 "transform_llds.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__transform_llds__Globals_4, (MR_Integer) 316, &ll_backend__transform_llds__MaxSize_8);
    }
#line 61 "transform_llds.m"
    ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__MaxSize_8 == (MR_Integer) 0);
#line 63 "transform_llds.m"
    if (ll_backend__transform_llds__succeeded)
#line 62 "transform_llds.m"
      ll_backend__transform_llds__Modules1_9 = ll_backend__transform_llds__Modules0_7;
#line 63 "transform_llds.m"
    else
#line 64 "transform_llds.m"
      {
#line 64 "transform_llds.m"
        ll_backend__transform_llds__transform_c_module_list_3_p_0(ll_backend__transform_llds__Modules0_7, &ll_backend__transform_llds__Modules1_9, ll_backend__transform_llds__MaxSize_8);
      }
#line 67 "transform_llds.m"
    {
#line 67 "transform_llds.m"
      libs__globals__get_gc_method_2_p_0(ll_backend__transform_llds__Globals_4, &ll_backend__transform_llds__GC_10);
    }
#line 69 "transform_llds.m"
    ll_backend__transform_llds__succeeded = (ll_backend__transform_llds__GC_10 == (MR_Integer) 5);
#line 69 "transform_llds.m"
    if (ll_backend__transform_llds__succeeded)
#line 69 "transform_llds.m"
      {
#line 70 "transform_llds.m"
        ll_backend__transform_llds__succeeded = ((MR_tag((MR_Word) ll_backend__transform_llds__Modules1_9)) == (MR_mktag((MR_Integer) 1)));
#line 70 "transform_llds.m"
        if (ll_backend__transform_llds__succeeded)
#line 70 "transform_llds.m"
          {
#line 70 "transform_llds.m"
            ll_backend__transform_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Modules1_9, (MR_Integer) 0)));
#line 70 "transform_llds.m"
            ll_backend__transform_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__transform_llds__Modules1_9, (MR_Integer) 1)));
#line 70 "transform_llds.m"
          }
#line 69 "transform_llds.m"
      }
#line 76 "transform_llds.m"
    if (ll_backend__transform_llds__succeeded)
#line 72 "transform_llds.m"
      {
#line 72 "transform_llds.m"
        MR_Word ll_backend__transform_llds__TypeCtorInfo_139_139 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0;
#line 72 "transform_llds.m"
        MR_Word ll_backend__transform_llds__LastModule_13;
#line 72 "transform_llds.m"
        MR_String ll_backend__transform_llds__LastModuleName_14;
#line 72 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_20_20;
#line 72 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_21_21;
#line 72 "transform_llds.m"
        MR_Box ll_backend__transform_llds__conv0_LastModule_13;
#line 73 "transform_llds.m"
        MR_Word ll_backend__transform_llds__V_15_15;

#line 72 "transform_llds.m"
        {
#line 72 "transform_llds.m"
          mercury__list__det_last_2_p_0(ll_backend__transform_llds__TypeCtorInfo_139_139, ll_backend__transform_llds__Modules1_9, &ll_backend__transform_llds__conv0_LastModule_13);
        }
#line 72 "transform_llds.m"
        ll_backend__transform_llds__LastModule_13 = ((MR_Word) ll_backend__transform_llds__conv0_LastModule_13);
#line 73 "transform_llds.m"
        ll_backend__transform_llds__LastModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__LastModule_13, (MR_Integer) 0)));
#line 73 "transform_llds.m"
        ll_backend__transform_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__LastModule_13, (MR_Integer) 1)));
#line 75 "transform_llds.m"
        {
#line 75 "transform_llds.m"
          ll_backend__transform_llds__V_21_21 = ll_backend__transform_llds__gen_end_label_module_2_f_0(ll_backend__transform_llds__ModuleName_6, ll_backend__transform_llds__LastModuleName_14);
        }
#line 75 "transform_llds.m"
        {
#line 75 "transform_llds.m"
          ll_backend__transform_llds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_20_20, 0) = ((MR_Box) (ll_backend__transform_llds__V_21_21));
#line 75 "transform_llds.m"
          MR_hl_field(MR_mktag(1), ll_backend__transform_llds__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "transform_llds.m"
        }
#line 74 "transform_llds.m"
        {
#line 74 "transform_llds.m"
          ll_backend__transform_llds__Modules_16 = mercury__list__f_43_43_2_f_0(ll_backend__transform_llds__TypeCtorInfo_139_139, ll_backend__transform_llds__Modules1_9, ll_backend__transform_llds__V_20_20);
        }
#line 72 "transform_llds.m"
      }
#line 76 "transform_llds.m"
    else
#line 77 "transform_llds.m"
      ll_backend__transform_llds__Modules_16 = ll_backend__transform_llds__Modules1_9;
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 0)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 1)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 2)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 3)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 4)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 5)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 6)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 7)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 8)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 9)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 10)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 11)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 12)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 13)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 14)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 15)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 16)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 17)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 18)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 19)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 20)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 21)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 22)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 23)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 24)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 25)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 26)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 27)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 28)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 29)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 30)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 31)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 32)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 33)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 34)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 35)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 36)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 37)));
#line 79 "transform_llds.m"
    ll_backend__transform_llds__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__transform_llds__STATE_VARIABLE_CFile_0_17, (MR_Integer) 38)));
#line 79 "transform_llds.m"
    {
#line 79 "transform_llds.m"
      MR_Word base;
#line 79 "transform_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
#line 79 "transform_llds.m"
      *ll_backend__transform_llds__STATE_VARIABLE_CFile_18 = base;
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__transform_llds__V_100_100));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__transform_llds__V_101_101));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__transform_llds__V_102_102));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__transform_llds__V_103_103));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__transform_llds__V_104_104));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__transform_llds__V_105_105));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__transform_llds__V_106_106));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__transform_llds__V_107_107));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__transform_llds__V_108_108));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__transform_llds__V_109_109));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__transform_llds__V_110_110));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__transform_llds__V_111_111));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__transform_llds__V_112_112));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ll_backend__transform_llds__V_113_113));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ll_backend__transform_llds__V_114_114));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ll_backend__transform_llds__V_115_115));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ll_backend__transform_llds__V_116_116));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (ll_backend__transform_llds__V_117_117));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (ll_backend__transform_llds__V_118_118));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (ll_backend__transform_llds__V_119_119));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (ll_backend__transform_llds__V_120_120));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ll_backend__transform_llds__V_121_121));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ll_backend__transform_llds__V_122_122));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ll_backend__transform_llds__V_123_123));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ll_backend__transform_llds__V_124_124));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ll_backend__transform_llds__V_125_125));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ll_backend__transform_llds__V_126_126));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ll_backend__transform_llds__V_127_127));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ll_backend__transform_llds__V_128_128));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ll_backend__transform_llds__V_129_129));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ll_backend__transform_llds__V_130_130));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ll_backend__transform_llds__V_131_131));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ll_backend__transform_llds__V_132_132));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ll_backend__transform_llds__V_133_133));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ll_backend__transform_llds__V_134_134));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ll_backend__transform_llds__Modules_16));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ll_backend__transform_llds__V_136_136));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ll_backend__transform_llds__V_137_137));
#line 79 "transform_llds.m"
      MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (ll_backend__transform_llds__V_138_138));
#line 79 "transform_llds.m"
    }
#line 56 "transform_llds.m"
  }
#line 31 "transform_llds.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.transform_llds. */
