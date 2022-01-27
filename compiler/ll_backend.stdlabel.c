/*
** Automatically generated from `stdlabel.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "tree_bitset.mih"
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
#include "ll_backend.opt_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 68 "stdlabel.m"
static void MR_CALL 
ll_backend__stdlabel__build_std_map_6_p_0(
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__HeadVar__1_1,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__ProcLabel_2,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3,
#line 68 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Counter_4,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_0_5,
#line 68 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Map_6);







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



#line 35 "stdlabel.m"
void MR_CALL 
ll_backend__stdlabel__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_p_0(
#line 35 "stdlabel.m"
  MR_Word ll_backend__stdlabel__Instrs0_5,
#line 35 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__Instrs_6,
#line 35 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18)
#line 35 "stdlabel.m"
{
#line 52 "stdlabel.m"
  {
#line 52 "stdlabel.m"
    MR_bool ll_backend__stdlabel__succeeded;
#line 52 "stdlabel.m"
    MR_Word ll_backend__stdlabel__LabelInstr_9;
#line 52 "stdlabel.m"
    MR_Word ll_backend__stdlabel__Comments_10;
#line 52 "stdlabel.m"
    MR_Word ll_backend__stdlabel__Instrs1_11;
#line 62 "stdlabel.m"
    MR_Word ll_backend__stdlabel__ProcLabel_15;
#line 55 "stdlabel.m"
    MR_Word ll_backend__stdlabel__FirstLabel_12;
#line 55 "stdlabel.m"
    MR_Word ll_backend__stdlabel__V_19_19;
#line 55 "stdlabel.m"
    MR_String ll_backend__stdlabel__V_13_13;
#line 56 "stdlabel.m"
    MR_Word ll_backend__stdlabel__V_14_14;

#line 53 "stdlabel.m"
    {
#line 53 "stdlabel.m"
      ll_backend__opt_util__get_prologue_4_p_0(ll_backend__stdlabel__Instrs0_5, &ll_backend__stdlabel__LabelInstr_9, &ll_backend__stdlabel__Comments_10, &ll_backend__stdlabel__Instrs1_11);
    }
#line 55 "stdlabel.m"
    ll_backend__stdlabel__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__LabelInstr_9, (MR_Integer) 0)));
#line 55 "stdlabel.m"
    ll_backend__stdlabel__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__LabelInstr_9, (MR_Integer) 1)));
#line 55 "stdlabel.m"
    ll_backend__stdlabel__succeeded = ((((MR_tag((MR_Word) ll_backend__stdlabel__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 55 "stdlabel.m"
    if (ll_backend__stdlabel__succeeded)
#line 55 "stdlabel.m"
      {
#line 55 "stdlabel.m"
        ll_backend__stdlabel__FirstLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__V_19_19, (MR_Integer) 1)));
#line 56 "stdlabel.m"
        ll_backend__stdlabel__succeeded = ((MR_tag((MR_Word) ll_backend__stdlabel__FirstLabel_12)) == (MR_mktag((MR_Integer) 1)));
#line 56 "stdlabel.m"
        if (ll_backend__stdlabel__succeeded)
#line 56 "stdlabel.m"
          {
#line 56 "stdlabel.m"
            ll_backend__stdlabel__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__FirstLabel_12, (MR_Integer) 0)));
#line 56 "stdlabel.m"
            ll_backend__stdlabel__ProcLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__FirstLabel_12, (MR_Integer) 1)));
#line 56 "stdlabel.m"
          }
#line 55 "stdlabel.m"
      }
#line 62 "stdlabel.m"
    if (ll_backend__stdlabel__succeeded)
#line 59 "stdlabel.m"
      {
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__TypeCtorInfo_30_30;
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__Map_16;
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__Instrs2_17;
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__V_20_20;
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__V_22_22;
#line 59 "stdlabel.m"
        MR_Word ll_backend__stdlabel__V_26_26;

#line 58 "stdlabel.m"
        {
#line 58 "stdlabel.m"
          ll_backend__stdlabel__V_20_20 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 266 "ll_backend.stdlabel.c"
        ll_backend__stdlabel__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 59 "stdlabel.m"
        {
#line 59 "stdlabel.m"
          ll_backend__stdlabel__V_22_22 = mercury__map__init_0_f_0(ll_backend__stdlabel__TypeCtorInfo_30_30, ll_backend__stdlabel__TypeCtorInfo_30_30);
        }
#line 58 "stdlabel.m"
        {
#line 58 "stdlabel.m"
          ll_backend__stdlabel__build_std_map_6_p_0(ll_backend__stdlabel__Instrs1_11, ll_backend__stdlabel__ProcLabel_15, ll_backend__stdlabel__V_20_20, ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18, ll_backend__stdlabel__V_22_22, &ll_backend__stdlabel__Map_16);
        }
#line 60 "stdlabel.m"
        {
#line 60 "stdlabel.m"
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__stdlabel__Instrs1_11, &ll_backend__stdlabel__Instrs2_17, ll_backend__stdlabel__Map_16, (MR_Integer) 1, (MR_Integer) 1);
        }
#line 61 "stdlabel.m"
        {
#line 61 "stdlabel.m"
          ll_backend__stdlabel__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 61 "stdlabel.m"
          MR_hl_field(MR_mktag(1), ll_backend__stdlabel__V_26_26, 0) = ((MR_Box) (ll_backend__stdlabel__LabelInstr_9));
#line 61 "stdlabel.m"
          MR_hl_field(MR_mktag(1), ll_backend__stdlabel__V_26_26, 1) = ((MR_Box) (ll_backend__stdlabel__Comments_10));
#line 61 "stdlabel.m"
        }
#line 61 "stdlabel.m"
        {
#line 61 "stdlabel.m"
          *ll_backend__stdlabel__Instrs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__stdlabel__V_26_26, ll_backend__stdlabel__Instrs2_17);
        }
#line 59 "stdlabel.m"
      }
#line 62 "stdlabel.m"
    else
#line 63 "stdlabel.m"
      {
#line 63 "stdlabel.m"
        {
#line 63 "stdlabel.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stdlabel", (MR_String) "predicate \140ll_backend.stdlabel.standardize_labels\'/4", (MR_String) "no proc_label");
#line 63 "stdlabel.m"
          return;
        }
#line 63 "stdlabel.m"
      }
#line 52 "stdlabel.m"
  }
#line 35 "stdlabel.m"
}

#line 68 "stdlabel.m"
static void MR_CALL 
ll_backend__stdlabel__build_std_map_6_p_0(
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__HeadVar__1_1,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__ProcLabel_2,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3,
#line 68 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Counter_4,
#line 68 "stdlabel.m"
  MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_0_5,
#line 68 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_Map_6)
#line 68 "stdlabel.m"
{
#line 72 "stdlabel.m"
  while (MR_TRUE)
#line 72 "stdlabel.m"
    {
#line 72 "stdlabel.m"
      /* tailcall optimized into a loop */
#line 72 "stdlabel.m"
      {
#line 72 "stdlabel.m"
        MR_bool ll_backend__stdlabel__succeeded;

#line 72 "stdlabel.m"
        if ((ll_backend__stdlabel__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "stdlabel.m"
          {
#line 72 "stdlabel.m"
            *ll_backend__stdlabel__STATE_VARIABLE_Map_6 = ll_backend__stdlabel__STATE_VARIABLE_Map_0_5;
#line 72 "stdlabel.m"
            *ll_backend__stdlabel__STATE_VARIABLE_Counter_4 = ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3;
#line 72 "stdlabel.m"
          }
#line 72 "stdlabel.m"
        else
#line 73 "stdlabel.m"
          {
#line 73 "stdlabel.m"
            MR_Word ll_backend__stdlabel__Instr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "stdlabel.m"
            MR_Word ll_backend__stdlabel__Instrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stdlabel__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "stdlabel.m"
            MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28;
#line 73 "stdlabel.m"
            MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_29_29;
#line 78 "stdlabel.m"
            MR_Word ll_backend__stdlabel__Label_19;
#line 74 "stdlabel.m"
            MR_Word ll_backend__stdlabel__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__Instr_14, (MR_Integer) 0)));
#line 74 "stdlabel.m"
            MR_String ll_backend__stdlabel__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__stdlabel__Instr_14, (MR_Integer) 1)));

#line 74 "stdlabel.m"
            ll_backend__stdlabel__succeeded = ((((MR_tag((MR_Word) ll_backend__stdlabel__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 74 "stdlabel.m"
            if (ll_backend__stdlabel__succeeded)
#line 74 "stdlabel.m"
              {
#line 74 "stdlabel.m"
                ll_backend__stdlabel__Label_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__stdlabel__V_27_27, (MR_Integer) 1)));
#line 75 "stdlabel.m"
                {
#line 75 "stdlabel.m"
                  MR_Word ll_backend__stdlabel__TypeCtorInfo_32_32;
#line 75 "stdlabel.m"
                  MR_Integer ll_backend__stdlabel__LabelNum_21;
#line 75 "stdlabel.m"
                  MR_Word ll_backend__stdlabel__StdLabel_22;

#line 75 "stdlabel.m"
                  {
#line 75 "stdlabel.m"
                    mercury__counter__allocate_3_p_0(&ll_backend__stdlabel__LabelNum_21, ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3, &ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28);
                  }
#line 76 "stdlabel.m"
                  {
#line 76 "stdlabel.m"
                    ll_backend__stdlabel__StdLabel_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 76 "stdlabel.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stdlabel__StdLabel_22, 0) = ((MR_Box) (ll_backend__stdlabel__LabelNum_21));
#line 76 "stdlabel.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stdlabel__StdLabel_22, 1) = ((MR_Box) (ll_backend__stdlabel__ProcLabel_2));
#line 76 "stdlabel.m"
                  }
#line 407 "ll_backend.stdlabel.c"
                  ll_backend__stdlabel__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 77 "stdlabel.m"
                  {
#line 77 "stdlabel.m"
                    mercury__map__det_insert_4_p_0(ll_backend__stdlabel__TypeCtorInfo_32_32, ll_backend__stdlabel__TypeCtorInfo_32_32, ((MR_Box) (ll_backend__stdlabel__Label_19)), ((MR_Box) (ll_backend__stdlabel__StdLabel_22)), ll_backend__stdlabel__STATE_VARIABLE_Map_0_5, &ll_backend__stdlabel__STATE_VARIABLE_Map_29_29);
                  }
#line 75 "stdlabel.m"
                }
#line 74 "stdlabel.m"
              }
#line 74 "stdlabel.m"
            else
#line 79 "stdlabel.m"
              {
#line 79 "stdlabel.m"
                ll_backend__stdlabel__STATE_VARIABLE_Map_29_29 = ll_backend__stdlabel__STATE_VARIABLE_Map_0_5;
#line 79 "stdlabel.m"
                ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28 = ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3;
#line 79 "stdlabel.m"
              }
#line 81 "stdlabel.m"
            /* direct tailcall eliminated */
#line 81 "stdlabel.m"
            {
#line 81 "stdlabel.m"
              MR_Word ll_backend__stdlabel__HeadVar__1__tmp_copy_1 = ll_backend__stdlabel__Instrs_15;
#line 81 "stdlabel.m"
              MR_Word ll_backend__stdlabel__STATE_VARIABLE_Counter_0__tmp_copy_3 = ll_backend__stdlabel__STATE_VARIABLE_Counter_28_28;
#line 81 "stdlabel.m"
              MR_Word ll_backend__stdlabel__STATE_VARIABLE_Map_0__tmp_copy_5 = ll_backend__stdlabel__STATE_VARIABLE_Map_29_29;

#line 81 "stdlabel.m"
              ll_backend__stdlabel__STATE_VARIABLE_Map_0_5 = ll_backend__stdlabel__STATE_VARIABLE_Map_0__tmp_copy_5;
#line 81 "stdlabel.m"
              ll_backend__stdlabel__STATE_VARIABLE_Counter_0_3 = ll_backend__stdlabel__STATE_VARIABLE_Counter_0__tmp_copy_3;
#line 81 "stdlabel.m"
              ll_backend__stdlabel__HeadVar__1_1 = ll_backend__stdlabel__HeadVar__1__tmp_copy_1;
#line 81 "stdlabel.m"
            }
#line 81 "stdlabel.m"
            continue;
#line 73 "stdlabel.m"
          }
#line 72 "stdlabel.m"
      }
#line 72 "stdlabel.m"
      break;
#line 72 "stdlabel.m"
    }
#line 68 "stdlabel.m"
}

#line 35 "stdlabel.m"
void MR_CALL 
ll_backend__stdlabel__standardize_labels_4_p_0(
#line 35 "stdlabel.m"
  MR_Word ll_backend__stdlabel__Instrs0_5,
#line 35 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__Instrs_6,
#line 35 "stdlabel.m"
  MR_Word ll_backend__stdlabel__HeadVar__3_7,
#line 35 "stdlabel.m"
  MR_Word * ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18)
#line 35 "stdlabel.m"
{
#line 52 "stdlabel.m"
  {
#line 52 "stdlabel.m"
    MR_bool ll_backend__stdlabel__succeeded;

#line 52 "stdlabel.m"
    {
#line 52 "stdlabel.m"
      ll_backend__stdlabel__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_p_0(ll_backend__stdlabel__Instrs0_5, ll_backend__stdlabel__Instrs_6, ll_backend__stdlabel__STATE_VARIABLE_ProcCounter_18);
#line 52 "stdlabel.m"
      return;
    }
#line 52 "stdlabel.m"
  }
#line 35 "stdlabel.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.stdlabel. */
