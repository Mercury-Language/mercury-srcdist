/*
** Automatically generated from `stdlabel.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module ll_backend.stdlabel. */
/* :- implementation. */

/*
INIT mercury__ll_backend__stdlabel__init
ENDINIT
*/

#include "ll_backend.stdlabel.mih"


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
#include "ll_backend.opt_util.mih"
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
ll_backend__stdlabel__build_std_map_6_p_0(
  MR_Word ll_backend__stdlabel__HeadVar__1_1,
  MR_Word ll_backend__stdlabel__ProcLabel_2,
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Counter_4,
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_0_5,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Map_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__stdlabel__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word ll_backend__stdlabel__Instrs0_5,
  MR_Word * ll_backend__stdlabel__Instrs_6,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18)
{
  {
    MR_bool ll_backend__stdlabel__succeeded;
    MR_Word ll_backend__stdlabel__LabelInstr_9;
    MR_Word ll_backend__stdlabel__Comments_10;
    MR_Word ll_backend__stdlabel__Instrs1_11;
    MR_Word ll_backend__stdlabel__ProcLabel_15;
    MR_Word ll_backend__stdlabel__FirstLabel_12;
    MR_Word ll_backend__stdlabel__Var_19;
    MR_String ll_backend__stdlabel__Var_13;
    MR_Word ll_backend__stdlabel__Var_14;

    {
      ll_backend__opt_util__get_prologue_4_p_0(ll_backend__stdlabel__Instrs0_5, &ll_backend__stdlabel__LabelInstr_9, &ll_backend__stdlabel__Comments_10, &ll_backend__stdlabel__Instrs1_11);
    }
    ll_backend__stdlabel__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__LabelInstr_9, (MR_Integer) 0)));
    ll_backend__stdlabel__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__LabelInstr_9, (MR_Integer) 1)));
    ll_backend__stdlabel__succeeded = ((((MR_tag((MR_Word) ll_backend__stdlabel__Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__Var_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (ll_backend__stdlabel__succeeded)
      {
        ll_backend__stdlabel__FirstLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__Var_19, (MR_Integer) 1)));
        ll_backend__stdlabel__succeeded = ((MR_tag((MR_Word) ll_backend__stdlabel__FirstLabel_12)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__stdlabel__succeeded)
          {
            ll_backend__stdlabel__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__FirstLabel_12, (MR_Integer) 0)));
            ll_backend__stdlabel__ProcLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__FirstLabel_12, (MR_Integer) 1)));
          }
      }
    if (ll_backend__stdlabel__succeeded)
      {
        MR_Word ll_backend__stdlabel__TypeCtorInfo_30_30;
        MR_Word ll_backend__stdlabel__Map_16;
        MR_Word ll_backend__stdlabel__Instrs2_17;
        MR_Word ll_backend__stdlabel__Var_20;
        MR_Word ll_backend__stdlabel__Var_22;
        MR_Word ll_backend__stdlabel__Var_26;

        {
          ll_backend__stdlabel__Var_20 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
        ll_backend__stdlabel__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
        {
          ll_backend__stdlabel__Var_22 = mercury__map__init_0_f_0(ll_backend__stdlabel__TypeCtorInfo_30_30, ll_backend__stdlabel__TypeCtorInfo_30_30);
        }
        {
          ll_backend__stdlabel__build_std_map_6_p_0(ll_backend__stdlabel__Instrs1_11, ll_backend__stdlabel__ProcLabel_15, ll_backend__stdlabel__Var_20, ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18, ll_backend__stdlabel__Var_22, &ll_backend__stdlabel__Map_16);
        }
        {
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__stdlabel__Instrs1_11, &ll_backend__stdlabel__Instrs2_17, ll_backend__stdlabel__Map_16, (MR_Integer) 1, (MR_Integer) 1);
        }
        {
          ll_backend__stdlabel__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__stdlabel__Var_26, 0) = ((MR_Box) (ll_backend__stdlabel__LabelInstr_9));
          MR_hl_field(MR_mktag(1), ll_backend__stdlabel__Var_26, 1) = ((MR_Box) (ll_backend__stdlabel__Comments_10));
        }
        {
          *ll_backend__stdlabel__Instrs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__stdlabel__Var_26, ll_backend__stdlabel__Instrs2_17);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stdlabel", (MR_String) "predicate \140ll_backend.stdlabel.standardize_labels\'/4", (MR_String) "no proc_label");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__stdlabel__build_std_map_6_p_0(
  MR_Word ll_backend__stdlabel__HeadVar__1_1,
  MR_Word ll_backend__stdlabel__ProcLabel_2,
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Counter_4,
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_0_5,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Map_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__stdlabel__succeeded;

        if ((ll_backend__stdlabel__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__stdlabel__STATE_VARIABLE_Map_6 = ll_backend__stdlabel__STATE_VARIABLE_Map_0_5;
            *ll_backend__stdlabel__STATE_VARIABLE_Counter_4 = ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3;
          }
        else
          {
            MR_Word ll_backend__stdlabel__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__stdlabel__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28;
            MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_29_29;
            MR_Word ll_backend__stdlabel__Label_19;
            MR_Word ll_backend__stdlabel__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__Instr_14, (MR_Integer) 0)));
            MR_String ll_backend__stdlabel__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__Instr_14, (MR_Integer) 1)));

            ll_backend__stdlabel__succeeded = ((((MR_tag((MR_Word) ll_backend__stdlabel__Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__Var_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__stdlabel__succeeded)
              {
                ll_backend__stdlabel__Label_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__Var_27, (MR_Integer) 1)));
                {
                  MR_Word ll_backend__stdlabel__TypeCtorInfo_32_32;
                  MR_Integer ll_backend__stdlabel__LabelNum_21;
                  MR_Word ll_backend__stdlabel__StdLabel_22;

                  {
                    mercury__counter__allocate_3_p_0(&ll_backend__stdlabel__LabelNum_21, ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3, &ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28);
                  }
                  {
                    ll_backend__stdlabel__StdLabel_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__stdlabel__StdLabel_22, 0) = ((MR_Box) (ll_backend__stdlabel__LabelNum_21));
                    MR_hl_field(MR_mktag(0), ll_backend__stdlabel__StdLabel_22, 1) = ((MR_Box) (ll_backend__stdlabel__ProcLabel_2));
                  }
                  ll_backend__stdlabel__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                  {
                    mercury__map__det_insert_4_p_0(ll_backend__stdlabel__TypeCtorInfo_32_32, ll_backend__stdlabel__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__stdlabel__Label_19)), ((MR_Box) (ll_backend__stdlabel__StdLabel_22)), ll_backend__stdlabel__STATE_VARIABLE_Map_0_5, &ll_backend__stdlabel__STATE_VARIABLE_Map_29_29);
                  }
                }
              }
            else
              {
                ll_backend__stdlabel__STATE_VARIABLE_Map_29_29 = ll_backend__stdlabel__STATE_VARIABLE_Map_0_5;
                ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28 = ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__stdlabel__next_value_of_HeadVar__1_1 = ll_backend__stdlabel__Instrs_15;
              MR_Word ll_backend__stdlabel__next_value_of_STATE_VARIABLE_Counter_0_3 = ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28;
              MR_Word ll_backend__stdlabel__next_value_of_STATE_VARIABLE_Map_0_5 = ll_backend__stdlabel__STATE_VARIABLE_Map_29_29;

              ll_backend__stdlabel__STATE_VARIABLE_Map_0_5 = ll_backend__stdlabel__next_value_of_STATE_VARIABLE_Map_0_5;
              ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3 = ll_backend__stdlabel__next_value_of_STATE_VARIABLE_Counter_0_3;
              ll_backend__stdlabel__HeadVar__1_1 = ll_backend__stdlabel__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__stdlabel__standardize_labels_4_p_0(
  MR_Word ll_backend__stdlabel__Instrs0_5,
  MR_Word * ll_backend__stdlabel__Instrs_6,
  MR_Word ll_backend__stdlabel__HeadVar__3_7,
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18)
{
  {
    MR_bool ll_backend__stdlabel__succeeded;

    {
      ll_backend__stdlabel__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_p_0(ll_backend__stdlabel__Instrs0_5, ll_backend__stdlabel__Instrs_6, ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18);
    }
  }
}

void mercury__ll_backend__stdlabel__init(void)
{
}

void mercury__ll_backend__stdlabel__init_type_tables(void)
{
}

void mercury__ll_backend__stdlabel__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__stdlabel__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.stdlabel. */
