/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module hlds.arg_info. */
/* :- implementation. */

/*
INIT mercury__hlds__arg_info__init
ENDINIT
*/

#include "hlds.arg_info.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0_5,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Inputs_6,
  MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0_7,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Outputs_8,
  MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0_9,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Unuseds_10);

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__HeadVar__5_5,
  MR_Word * hlds__arg_info__HeadVar__6_6,
  MR_Word * hlds__arg_info__HeadVar__7_7,
  MR_Word * hlds__arg_info__HeadVar__8_8,
  MR_Word * hlds__arg_info__HeadVar__9_9);

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__STATE_VARIABLE_InVars_0_5,
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_6,
  MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_0_7,
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_8);

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word hlds__arg_info__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_0_4,
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_0_5,
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_0_6,
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_0_7,
  MR_Word hlds__arg_info__ModuleInfo_8,
  MR_Word * hlds__arg_info__HeadVar__9_9);

static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
  MR_Word hlds__arg_info__FloatRegType_4,
  MR_Word hlds__arg_info__Type_5,
  MR_Word * hlds__arg_info__RegType_6);

static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
  MR_Word hlds__arg_info__RegR_HeadVars_5,
  MR_Word hlds__arg_info__HeadVar_6,
  MR_Word hlds__arg_info__Type_7,
  MR_Word * hlds__arg_info__RegType_8);

static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1,
  MR_Box * hlds__arg_info__wrapper_arg_2);

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1,
  MR_Box hlds__arg_info__wrapper_arg_2,
  MR_Box * hlds__arg_info__wrapper_arg_3);


static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__arg_info_scalar_common_5[1][5];




static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__arg_info_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__arg_info_scalar_common_5[0])),
    ((MR_Box) (hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1)
{
  {
    MR_Box hlds__arg_info__wrapper_arg_2;
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
    MR_Word hlds__arg_info__conv0_HeadVar__2_2;

    {
      hlds__arg_info__conv0_HeadVar__2_2 = hlds__arg_info__arg_reg_to_reg_type_1_f_0(((MR_Word) hlds__arg_info__wrapper_arg_1));
    }
    hlds__arg_info__wrapper_arg_2 = ((MR_Box) (hlds__arg_info__conv0_HeadVar__2_2));
    return hlds__arg_info__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word hlds__arg_info__ModuleInfo_7,
  MR_Word hlds__arg_info__GenericCall_9,
  MR_Word hlds__arg_info__ArgVars_10,
  MR_Word hlds__arg_info__MaybeArgRegs_11,
  MR_Word * hlds__arg_info__ArgRegTypes_12)
{
  {
    MR_bool hlds__arg_info__succeeded;

    switch (MR_tag((MR_Word) hlds__arg_info__GenericCall_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__arg_info__Globals_17;
          MR_Word hlds__arg_info__UseFloatRegs_18;

          {
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_7, &hlds__arg_info__Globals_17);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_17, (MR_Integer) 261, &hlds__arg_info__UseFloatRegs_18);
          }
          switch (hlds__arg_info__UseFloatRegs_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__arg_info__V_33_33;

                {
                  hlds__arg_info__V_33_33 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__ArgVars_10);
                }
                {
                  mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_33_33, ((MR_Box) ((MR_Integer) 0)), hlds__arg_info__ArgRegTypes_12);
                }
              }
              break;
            case (MR_Integer) 1:
              if ((hlds__arg_info__MaybeArgRegs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.generic_call_arg_reg_types\'/6", (MR_String) "missing ho_arg_regs");
                    return;
                  }
                }
              else
                {
                  MR_Word hlds__arg_info__ArgRegs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__MaybeArgRegs_11, (MR_Integer) 0)));

                  {
                    *hlds__arg_info__ArgRegTypes_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, (MR_Word) &hlds__arg_info_scalar_common_2[1], hlds__arg_info__ArgRegs_19);
                  }
                }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Integer hlds__arg_info__V_26_26;

          {
            hlds__arg_info__V_26_26 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__ArgVars_10);
          }
          {
            mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_26_26, ((MR_Box) ((MR_Integer) 0)), hlds__arg_info__ArgRegTypes_12);
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0_5,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Inputs_6,
  MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0_7,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Outputs_8,
  MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0_9,
  MR_Word * hlds__arg_info__STATE_VARIABLE_Unuseds_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__arg_info__succeeded;

        if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__arg_info__succeeded)
                  {
                    *hlds__arg_info__STATE_VARIABLE_Unuseds_10 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
                    *hlds__arg_info__STATE_VARIABLE_Outputs_8 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
                    *hlds__arg_info__STATE_VARIABLE_Inputs_6 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
                    hlds__arg_info__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word hlds__arg_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__arg_info__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__arg_info__Type_23;
            MR_Word hlds__arg_info__Types_24;
            MR_Word hlds__arg_info__Mode_25;
            MR_Word hlds__arg_info__Modes_26;
            MR_Word hlds__arg_info__TopFunctorMode_31;
            MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_38_38;
            MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_39_39;
            MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_40_40;

            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
                hlds__arg_info__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
                hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__arg_info__succeeded)
                  {
                    hlds__arg_info__Mode_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
                    hlds__arg_info__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
                    {
                      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__arg_info__HeadVar__4_4, hlds__arg_info__Mode_25, hlds__arg_info__Type_23, &hlds__arg_info__TopFunctorMode_31);
                    }
                    switch (hlds__arg_info__TopFunctorMode_31) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Inputs_0_5, &hlds__arg_info__STATE_VARIABLE_Inputs_40_40);
                          }
                          hlds__arg_info__STATE_VARIABLE_Outputs_39_39 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
                          hlds__arg_info__STATE_VARIABLE_Unuseds_38_38 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Outputs_0_7, &hlds__arg_info__STATE_VARIABLE_Outputs_39_39);
                          }
                          hlds__arg_info__STATE_VARIABLE_Inputs_40_40 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
                          hlds__arg_info__STATE_VARIABLE_Unuseds_38_38 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Unuseds_0_9, &hlds__arg_info__STATE_VARIABLE_Unuseds_38_38);
                          }
                          hlds__arg_info__STATE_VARIABLE_Inputs_40_40 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
                          hlds__arg_info__STATE_VARIABLE_Outputs_39_39 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
                        }
                        break;
                    }
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__arg_info__HeadVar__1__tmp_copy_1 = hlds__arg_info__Vars_22;
                        MR_Word hlds__arg_info__HeadVar__2__tmp_copy_2 = hlds__arg_info__Types_24;
                        MR_Word hlds__arg_info__HeadVar__3__tmp_copy_3 = hlds__arg_info__Modes_26;
                        MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0__tmp_copy_5 = hlds__arg_info__STATE_VARIABLE_Inputs_40_40;
                        MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0__tmp_copy_7 = hlds__arg_info__STATE_VARIABLE_Outputs_39_39;
                        MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0__tmp_copy_9 = hlds__arg_info__STATE_VARIABLE_Unuseds_38_38;

                        hlds__arg_info__STATE_VARIABLE_Unuseds_0_9 = hlds__arg_info__STATE_VARIABLE_Unuseds_0__tmp_copy_9;
                        hlds__arg_info__STATE_VARIABLE_Outputs_0_7 = hlds__arg_info__STATE_VARIABLE_Outputs_0__tmp_copy_7;
                        hlds__arg_info__STATE_VARIABLE_Inputs_0_5 = hlds__arg_info__STATE_VARIABLE_Inputs_0__tmp_copy_5;
                        hlds__arg_info__HeadVar__3_3 = hlds__arg_info__HeadVar__3__tmp_copy_3;
                        hlds__arg_info__HeadVar__2_2 = hlds__arg_info__HeadVar__2__tmp_copy_2;
                        hlds__arg_info__HeadVar__1_1 = hlds__arg_info__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                  }
              }
          }
        return hlds__arg_info__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__HeadVar__5_5,
  MR_Word * hlds__arg_info__HeadVar__6_6,
  MR_Word * hlds__arg_info__HeadVar__7_7,
  MR_Word * hlds__arg_info__HeadVar__8_8,
  MR_Word * hlds__arg_info__HeadVar__9_9)
{
  {
    MR_bool hlds__arg_info__succeeded;

    if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__arg_info__succeeded)
                  {
                    *hlds__arg_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *hlds__arg_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *hlds__arg_info__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *hlds__arg_info__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    hlds__arg_info__succeeded = MR_TRUE;
                  }
              }
          }
      }
    else
      {
        MR_Word hlds__arg_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__arg_info__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__arg_info__Mode_14;
        MR_Word hlds__arg_info__Modes_15;
        MR_Word hlds__arg_info__Type_16;
        MR_Word hlds__arg_info__Types_17;
        MR_Word hlds__arg_info__RegType_18;
        MR_Word hlds__arg_info__RegTypes_19;
        MR_Word hlds__arg_info__TopFunctorMode_24;
        MR_Word hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
        MR_Word hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;

        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
            hlds__arg_info__Modes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 0)));
                hlds__arg_info__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 1)));
                hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__arg_info__succeeded)
                  {
                    hlds__arg_info__RegType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__5_5, (MR_Integer) 0)));
                    hlds__arg_info__RegTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__5_5, (MR_Integer) 1)));
                    {
                      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Vars_13, hlds__arg_info__Modes_15, hlds__arg_info__Types_17, hlds__arg_info__RegTypes_19, &hlds__arg_info__STATE_VARIABLE_InVarsR_29_29, &hlds__arg_info__STATE_VARIABLE_InVarsF_30_30, &hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31, &hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32);
                    }
                    if (hlds__arg_info__succeeded)
                      {
                        {
                          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Mode_14, hlds__arg_info__Type_16, &hlds__arg_info__TopFunctorMode_24);
                        }
                        switch (hlds__arg_info__TopFunctorMode_24) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              switch (hlds__arg_info__RegType_18) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *hlds__arg_info__HeadVar__7_7 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVarsF_30_30));
                                    }
                                    *hlds__arg_info__HeadVar__6_6 = hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *hlds__arg_info__HeadVar__6_6 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVarsR_29_29));
                                    }
                                    *hlds__arg_info__HeadVar__7_7 = hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
                                  }
                                  break;
                              }
                              *hlds__arg_info__HeadVar__8_8 = hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
                              *hlds__arg_info__HeadVar__9_9 = hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              switch (hlds__arg_info__RegType_18) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *hlds__arg_info__HeadVar__9_9 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32));
                                    }
                                    *hlds__arg_info__HeadVar__8_8 = hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *hlds__arg_info__HeadVar__8_8 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31));
                                    }
                                    *hlds__arg_info__HeadVar__9_9 = hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;
                                  }
                                  break;
                              }
                              *hlds__arg_info__HeadVar__6_6 = hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
                              *hlds__arg_info__HeadVar__7_7 = hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
                            }
                            break;
                        }
                        hlds__arg_info__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return hlds__arg_info__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Word hlds__arg_info__HeadVar__4_4,
  MR_Word hlds__arg_info__STATE_VARIABLE_InVars_0_5,
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_6,
  MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_0_7,
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_8)
{
  {
    MR_bool hlds__arg_info__succeeded;

    if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__arg_info__succeeded)
              {
                *hlds__arg_info__STATE_VARIABLE_OutVars_8 = hlds__arg_info__STATE_VARIABLE_OutVars_0_7;
                *hlds__arg_info__STATE_VARIABLE_InVars_6 = hlds__arg_info__STATE_VARIABLE_InVars_0_5;
                hlds__arg_info__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word hlds__arg_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__arg_info__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__arg_info__Mode_19;
        MR_Word hlds__arg_info__Modes_20;
        MR_Word hlds__arg_info__Type_21;
        MR_Word hlds__arg_info__Types_22;
        MR_Word hlds__arg_info__TopFunctorMode_25;
        MR_Word hlds__arg_info__STATE_VARIABLE_InVars_30_30;
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_31_31;

        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
            hlds__arg_info__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 0)));
                hlds__arg_info__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 1)));
                {
                  hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Vars_18, hlds__arg_info__Modes_20, hlds__arg_info__Types_22, hlds__arg_info__STATE_VARIABLE_InVars_0_5, &hlds__arg_info__STATE_VARIABLE_InVars_30_30, hlds__arg_info__STATE_VARIABLE_OutVars_0_7, &hlds__arg_info__STATE_VARIABLE_OutVars_31_31);
                }
                if (hlds__arg_info__succeeded)
                  {
                    {
                      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Mode_19, hlds__arg_info__Type_21, &hlds__arg_info__TopFunctorMode_25);
                    }
                    switch (hlds__arg_info__TopFunctorMode_25) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__arg_info__STATE_VARIABLE_InVars_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_17));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVars_30_30));
                          }
                          *hlds__arg_info__STATE_VARIABLE_OutVars_8 = hlds__arg_info__STATE_VARIABLE_OutVars_31_31;
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__arg_info__STATE_VARIABLE_OutVars_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_17));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVars_31_31));
                          }
                          *hlds__arg_info__STATE_VARIABLE_InVars_6 = hlds__arg_info__STATE_VARIABLE_InVars_30_30;
                        }
                        break;
                    }
                    hlds__arg_info__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__arg_info__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word hlds__arg_info__HeadVar__1_1)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__HeadVar__2_2;

    switch (hlds__arg_info__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__arg_info__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        hlds__arg_info__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__arg_info__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__HeadVar__3_3,
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_0_4,
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_0_5,
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_0_6,
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_0_7,
  MR_Word hlds__arg_info__ModuleInfo_8,
  MR_Word * hlds__arg_info__HeadVar__9_9)
{
  {
    MR_bool hlds__arg_info__succeeded;

    if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__arg_info__succeeded)
              {
                *hlds__arg_info__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__arg_info__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word hlds__arg_info__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__arg_info__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__arg_info__Type_17;
        MR_Word hlds__arg_info__Types_18;
        MR_Word hlds__arg_info__RegType_19;
        MR_Word hlds__arg_info__RegTypes_20;
        MR_Word hlds__arg_info__ArgInfo_26;
        MR_Word hlds__arg_info__ArgInfos_27;
        MR_Word hlds__arg_info__TopFunctorMode_28;
        MR_Word hlds__arg_info__ArgLoc_29;
        MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_34_34;
        MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_35_35;
        MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_36_36;
        MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_37_37;

        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__arg_info__succeeded)
          {
            hlds__arg_info__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
            hlds__arg_info__Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__arg_info__succeeded)
              {
                hlds__arg_info__RegType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
                hlds__arg_info__RegTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
                {
                  check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(hlds__arg_info__ModuleInfo_8, hlds__arg_info__Mode_15, hlds__arg_info__Type_17, &hlds__arg_info__TopFunctorMode_28);
                }
                switch (hlds__arg_info__TopFunctorMode_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      switch (hlds__arg_info__RegType_19) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InRegF_0_5));
                            }
                            hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = (hlds__arg_info__STATE_VARIABLE_InRegF_0_5 + (MR_Integer) 1);
                            hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = hlds__arg_info__STATE_VARIABLE_InRegR_0_4;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InRegR_0_4));
                            }
                            hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = (hlds__arg_info__STATE_VARIABLE_InRegR_0_4 + (MR_Integer) 1);
                            hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = hlds__arg_info__STATE_VARIABLE_InRegF_0_5;
                          }
                          break;
                      }
                      hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = hlds__arg_info__STATE_VARIABLE_OutRegR_0_6;
                      hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = hlds__arg_info__STATE_VARIABLE_OutRegF_0_7;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      switch (hlds__arg_info__RegType_19) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutRegF_0_7));
                            }
                            hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = (hlds__arg_info__STATE_VARIABLE_OutRegF_0_7 + (MR_Integer) 1);
                            hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = hlds__arg_info__STATE_VARIABLE_OutRegR_0_6;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutRegR_0_6));
                            }
                            hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = (hlds__arg_info__STATE_VARIABLE_OutRegR_0_6 + (MR_Integer) 1);
                            hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = hlds__arg_info__STATE_VARIABLE_OutRegF_0_7;
                          }
                          break;
                      }
                      hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = hlds__arg_info__STATE_VARIABLE_InRegR_0_4;
                      hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = hlds__arg_info__STATE_VARIABLE_InRegF_0_5;
                    }
                    break;
                }
                {
                  hlds__arg_info__ArgInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_26, 0) = ((MR_Box) (hlds__arg_info__ArgLoc_29));
                  MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_26, 1) = ((MR_Box) (hlds__arg_info__TopFunctorMode_28));
                }
                {
                  hlds__arg_info__succeeded = hlds__arg_info__make_arg_infos_9_p_0(hlds__arg_info__Modes_16, hlds__arg_info__Types_18, hlds__arg_info__RegTypes_20, hlds__arg_info__STATE_VARIABLE_InRegR_36_36, hlds__arg_info__STATE_VARIABLE_InRegF_37_37, hlds__arg_info__STATE_VARIABLE_OutRegR_34_34, hlds__arg_info__STATE_VARIABLE_OutRegF_35_35, hlds__arg_info__ModuleInfo_8, &hlds__arg_info__ArgInfos_27);
                }
                if (hlds__arg_info__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__arg_info__HeadVar__9_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__ArgInfo_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__ArgInfos_27));
                    }
                    hlds__arg_info__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__arg_info__succeeded;
  }
}

static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
  MR_Word hlds__arg_info__FloatRegType_4,
  MR_Word hlds__arg_info__Type_5,
  MR_Word * hlds__arg_info__RegType_6)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__V_7_7;

    {
      hlds__arg_info__V_7_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
    {
      hlds__arg_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__arg_info__Type_5, hlds__arg_info__V_7_7);
    }
    if (hlds__arg_info__succeeded)
      *hlds__arg_info__RegType_6 = hlds__arg_info__FloatRegType_4;
    else
      *hlds__arg_info__RegType_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
  MR_Word hlds__arg_info__RegR_HeadVars_5,
  MR_Word hlds__arg_info__HeadVar_6,
  MR_Word hlds__arg_info__Type_7,
  MR_Word * hlds__arg_info__RegType_8)
{
  {
    MR_bool hlds__arg_info__succeeded;

    {
      hlds__arg_info__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__arg_info__RegR_HeadVars_5, hlds__arg_info__HeadVar_6);
    }
    if (hlds__arg_info__succeeded)
      *hlds__arg_info__RegType_8 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__arg_info__V_10_10;

        {
          hlds__arg_info__V_10_10 = parse_tree__builtin_lib_types__float_type_0_f_0();
        }
        {
          hlds__arg_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__arg_info__Type_7, hlds__arg_info__V_10_10);
        }
        if (hlds__arg_info__succeeded)
          *hlds__arg_info__RegType_8 = (MR_Integer) 1;
        else
          *hlds__arg_info__RegType_8 = (MR_Integer) 0;
      }
  }
}

static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__HeadVar__2_2,
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__arg_info__succeeded;

        if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__arg_info__STATE_VARIABLE_ModuleInfo_4 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word hlds__arg_info__TypeCtorInfo_27_27;
            MR_Word hlds__arg_info__TypeCtorInfo_28_28;
            MR_Word hlds__arg_info__TypeCtorInfo_30_30;
            MR_Integer hlds__arg_info__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__arg_info__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__arg_info__PredTable0_13;
            MR_Word hlds__arg_info__PredInfo0_14;
            MR_Word hlds__arg_info__ProcTable0_15;
            MR_Word hlds__arg_info__Markers_16;
            MR_Word hlds__arg_info__ArgTypes_17;
            MR_Word hlds__arg_info__ProcInfo0_18;
            MR_Word hlds__arg_info__ProcInfo_19;
            MR_Word hlds__arg_info__ProcTable_20;
            MR_Word hlds__arg_info__PredInfo_21;
            MR_Word hlds__arg_info__PredTable_22;
            MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25;
            MR_Box hlds__arg_info__conv0_PredInfo0_14;
            MR_Box hlds__arg_info__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, &hlds__arg_info__PredTable0_13);
            }
            hlds__arg_info__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            hlds__arg_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(hlds__arg_info__TypeCtorInfo_27_27, hlds__arg_info__TypeCtorInfo_28_28, hlds__arg_info__PredTable0_13, ((MR_Box) (hlds__arg_info__HeadVar__1_1)), &hlds__arg_info__conv0_PredInfo0_14);
            }
            hlds__arg_info__PredInfo0_14 = ((MR_Word) hlds__arg_info__conv0_PredInfo0_14);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__ProcTable0_15);
            }
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__Markers_16);
            }
            {
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__ArgTypes_17);
            }
            hlds__arg_info__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__arg_info__TypeCtorInfo_30_30, hlds__arg_info__ProcTable0_15, hlds__arg_info__ProcId_10, &hlds__arg_info__conv1_ProcInfo0_18);
            }
            hlds__arg_info__ProcInfo0_18 = ((MR_Word) hlds__arg_info__conv1_ProcInfo0_18);
            {
              hlds__arg_info__generate_proc_arg_info_5_p_0(hlds__arg_info__Markers_16, hlds__arg_info__ArgTypes_17, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, hlds__arg_info__ProcInfo0_18, &hlds__arg_info__ProcInfo_19);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__arg_info__TypeCtorInfo_30_30, hlds__arg_info__ProcId_10, ((MR_Box) (hlds__arg_info__ProcInfo_19)), hlds__arg_info__ProcTable0_15, &hlds__arg_info__ProcTable_20);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__arg_info__ProcTable_20, hlds__arg_info__PredInfo0_14, &hlds__arg_info__PredInfo_21);
            }
            {
              mercury__map__det_update_4_p_0(hlds__arg_info__TypeCtorInfo_27_27, hlds__arg_info__TypeCtorInfo_28_28, ((MR_Box) (hlds__arg_info__HeadVar__1_1)), ((MR_Box) (hlds__arg_info__PredInfo_21)), hlds__arg_info__PredTable0_13, &hlds__arg_info__PredTable_22);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__arg_info__PredTable_22, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, &hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__arg_info__HeadVar__2__tmp_copy_2 = hlds__arg_info__ProcIds_11;
              MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25;

              hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
              hlds__arg_info__HeadVar__2_2 = hlds__arg_info__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__arg_info__succeeded;

        if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__arg_info__STATE_VARIABLE_ModuleInfo_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2;
        else
          {
            MR_Word hlds__arg_info__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__arg_info__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__arg_info__PredTable_10;
            MR_Word hlds__arg_info__PredInfo_11;
            MR_Word hlds__arg_info__V_14_14;
            MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15;
            MR_Box hlds__arg_info__conv0_PredInfo_11;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2, &hlds__arg_info__PredTable_10);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__arg_info__PredTable_10, ((MR_Box) (hlds__arg_info__PredId_7)), &hlds__arg_info__conv0_PredInfo_11);
            }
            hlds__arg_info__PredInfo_11 = ((MR_Word) hlds__arg_info__conv0_PredInfo_11);
            {
              hlds__arg_info__V_14_14 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__arg_info__PredInfo_11);
            }
            {
              hlds__arg_info__generate_proc_list_arg_info_4_p_0(hlds__arg_info__PredId_7, hlds__arg_info__V_14_14, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2, &hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__arg_info__HeadVar__1__tmp_copy_1 = hlds__arg_info__PredIds_8;
              MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15;

              hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
              hlds__arg_info__HeadVar__1_1 = hlds__arg_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__arg_info__partition_generic_call_args_7_p_0(
  MR_Word hlds__arg_info__ModuleInfo_8,
  MR_Word hlds__arg_info__Vars_9,
  MR_Word hlds__arg_info__Types_10,
  MR_Word hlds__arg_info__Modes_11,
  MR_Word * hlds__arg_info__Inputs_12,
  MR_Word * hlds__arg_info__Outputs_13,
  MR_Word * hlds__arg_info__Unuseds_14)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
    MR_Word hlds__arg_info__TypeInfo_30_37 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
    MR_Word hlds__arg_info__V_25_25;
    MR_Word hlds__arg_info__V_27_27;
    MR_Word hlds__arg_info__V_29_29;

    {
      hlds__arg_info__V_25_25 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_9, hlds__arg_info__Types_10, hlds__arg_info__Modes_11, hlds__arg_info__ModuleInfo_8, hlds__arg_info__V_25_25, &hlds__arg_info__STATE_VARIABLE_Inputs_19_26, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Outputs_21_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_30);
    }
    if (hlds__arg_info__succeeded)
      {
        *hlds__arg_info__Unuseds_14 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
        *hlds__arg_info__Outputs_13 = hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
        *hlds__arg_info__Inputs_12 = hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__partition_proc_call_args_7_p_0(
  MR_Word hlds__arg_info__ProcInfo_8,
  MR_Word hlds__arg_info__VarTypes_9,
  MR_Word hlds__arg_info__ModuleInfo_10,
  MR_Word hlds__arg_info__Vars_11,
  MR_Word * hlds__arg_info__Inputs_12,
  MR_Word * hlds__arg_info__Outputs_13,
  MR_Word * hlds__arg_info__Unuseds_14)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Modes_15;
    MR_Word hlds__arg_info__Types_16;
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_28;
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_30;
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_32;
    MR_Word hlds__arg_info__TypeInfo_30_39;
    MR_Word hlds__arg_info__V_27_27;
    MR_Word hlds__arg_info__V_29_29;
    MR_Word hlds__arg_info__V_31_31;

    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__ProcInfo_8, &hlds__arg_info__Modes_15);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(hlds__arg_info__VarTypes_9, hlds__arg_info__Vars_11, &hlds__arg_info__Types_16);
    }
    hlds__arg_info__TypeInfo_30_39 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
    {
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
    {
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
    {
      hlds__arg_info__V_31_31 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
    {
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_11, hlds__arg_info__Types_16, hlds__arg_info__Modes_15, hlds__arg_info__ModuleInfo_10, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Inputs_19_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Outputs_21_30, hlds__arg_info__V_31_31, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_32);
    }
    if (hlds__arg_info__succeeded)
      {
        *hlds__arg_info__Unuseds_14 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_32;
        *hlds__arg_info__Outputs_13 = hlds__arg_info__STATE_VARIABLE_Outputs_21_30;
        *hlds__arg_info__Inputs_12 = hlds__arg_info__STATE_VARIABLE_Inputs_19_28;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__partition_proc_args_5_p_0(
  MR_Word hlds__arg_info__ProcInfo_6,
  MR_Word hlds__arg_info__ModuleInfo_7,
  MR_Word * hlds__arg_info__Inputs_8,
  MR_Word * hlds__arg_info__Outputs_9,
  MR_Word * hlds__arg_info__Unuseds_10)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Vars_11;
    MR_Word hlds__arg_info__Modes_12;
    MR_Word hlds__arg_info__VarTypes_13;
    MR_Word hlds__arg_info__Types_14;
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
    MR_Word hlds__arg_info__TypeInfo_30_37;
    MR_Word hlds__arg_info__V_25_25;
    MR_Word hlds__arg_info__V_27_27;
    MR_Word hlds__arg_info__V_29_29;

    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__Vars_11);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__Modes_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__VarTypes_13);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(hlds__arg_info__VarTypes_13, hlds__arg_info__Vars_11, &hlds__arg_info__Types_14);
    }
    hlds__arg_info__TypeInfo_30_37 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
    {
      hlds__arg_info__V_25_25 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
    {
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_11, hlds__arg_info__Types_14, hlds__arg_info__Modes_12, hlds__arg_info__ModuleInfo_7, hlds__arg_info__V_25_25, &hlds__arg_info__STATE_VARIABLE_Inputs_19_26, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Outputs_21_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_30);
    }
    if (hlds__arg_info__succeeded)
      {
        *hlds__arg_info__Unuseds_10 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
        *hlds__arg_info__Outputs_9 = hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
        *hlds__arg_info__Inputs_8 = hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__partition_args_3_p_0(
  MR_Word hlds__arg_info__Args_4,
  MR_Word * hlds__arg_info__Ins_5,
  MR_Word * hlds__arg_info__Outs_6)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Outs0_7;
    MR_Word hlds__arg_info__Unuseds_8;

    {
      hlds__arg_info__partition_args_4_p_0(hlds__arg_info__Args_4, hlds__arg_info__Ins_5, &hlds__arg_info__Outs0_7, &hlds__arg_info__Unuseds_8);
    }
    {
      mercury__list__append_3_p_1((MR_Word) &hlds__arg_info_scalar_common_2[0], hlds__arg_info__Outs0_7, hlds__arg_info__Unuseds_8, hlds__arg_info__Outs_6);
    }
  }
}

void MR_CALL 
hlds__arg_info__partition_args_4_p_0(
  MR_Word hlds__arg_info__HeadVar__1_1,
  MR_Word * hlds__arg_info__HeadVar__2_2,
  MR_Word * hlds__arg_info__HeadVar__3_3,
  MR_Word * hlds__arg_info__HeadVar__4_4)
{
  {
    MR_bool hlds__arg_info__succeeded;

    if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__arg_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__arg_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__arg_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word hlds__arg_info__ArgInfo_6;
        MR_Word hlds__arg_info__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__arg_info__ArgMode_12;
        MR_Word hlds__arg_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__arg_info__STATE_VARIABLE_Ins_17_17;
        MR_Word hlds__arg_info__STATE_VARIABLE_Outs_18_18;
        MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
        MR_Word hlds__arg_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, (MR_Integer) 0)));
        MR_Word hlds__arg_info__V_11_11;

        hlds__arg_info__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, (MR_Integer) 1)));
        {
          hlds__arg_info__partition_args_4_p_0(hlds__arg_info__Rest_7, &hlds__arg_info__STATE_VARIABLE_Ins_17_17, &hlds__arg_info__STATE_VARIABLE_Outs_18_18, &hlds__arg_info__STATE_VARIABLE_Unuseds_19_19);
        }
        hlds__arg_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_6, (MR_Integer) 0)));
        hlds__arg_info__ArgMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_6, (MR_Integer) 1)));
        switch (hlds__arg_info__ArgMode_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__arg_info__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Ins_17_17));
              }
              *hlds__arg_info__HeadVar__3_3 = hlds__arg_info__STATE_VARIABLE_Outs_18_18;
              *hlds__arg_info__HeadVar__4_4 = hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__arg_info__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Outs_18_18));
              }
              *hlds__arg_info__HeadVar__2_2 = hlds__arg_info__STATE_VARIABLE_Ins_17_17;
              *hlds__arg_info__HeadVar__4_4 = hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__arg_info__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Unuseds_19_19));
              }
              *hlds__arg_info__HeadVar__2_2 = hlds__arg_info__STATE_VARIABLE_Ins_17_17;
              *hlds__arg_info__HeadVar__3_3 = hlds__arg_info__STATE_VARIABLE_Outs_18_18;
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(
  MR_Word hlds__arg_info__ModuleInfo_10,
  MR_Word hlds__arg_info__Vars_11,
  MR_Word hlds__arg_info__Modes_12,
  MR_Word hlds__arg_info__Types_13,
  MR_Word hlds__arg_info__ArgRegTypes_14,
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVarsR_19,
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVarsF_20,
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVarsR_21,
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVarsF_22)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__STATE_VARIABLE_InVarsR_23_23;
    MR_Word hlds__arg_info__STATE_VARIABLE_InVarsF_24_24;
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25;
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26;

    {
      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(hlds__arg_info__ModuleInfo_10, hlds__arg_info__Vars_11, hlds__arg_info__Modes_12, hlds__arg_info__Types_13, hlds__arg_info__ArgRegTypes_14, &hlds__arg_info__STATE_VARIABLE_InVarsR_23_23, &hlds__arg_info__STATE_VARIABLE_InVarsF_24_24, &hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25, &hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26);
    }
    if (hlds__arg_info__succeeded)
      {
        *hlds__arg_info__STATE_VARIABLE_OutVarsF_22 = hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26;
        *hlds__arg_info__STATE_VARIABLE_OutVarsR_21 = hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25;
        *hlds__arg_info__STATE_VARIABLE_InVarsF_20 = hlds__arg_info__STATE_VARIABLE_InVarsF_24_24;
        *hlds__arg_info__STATE_VARIABLE_InVarsR_19 = hlds__arg_info__STATE_VARIABLE_InVarsR_23_23;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars_sep_regs\'/9", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_6_p_0(
  MR_Word hlds__arg_info__ModuleInfo_7,
  MR_Word hlds__arg_info__Vars_8,
  MR_Word hlds__arg_info__Modes_9,
  MR_Word hlds__arg_info__Types_10,
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_13,
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_14)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__STATE_VARIABLE_InVars_16_16;
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_18_18;

    {
      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(hlds__arg_info__ModuleInfo_7, hlds__arg_info__Vars_8, hlds__arg_info__Modes_9, hlds__arg_info__Types_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__arg_info__STATE_VARIABLE_InVars_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__arg_info__STATE_VARIABLE_OutVars_18_18);
    }
    if (hlds__arg_info__succeeded)
      {
        *hlds__arg_info__STATE_VARIABLE_OutVars_14 = hlds__arg_info__STATE_VARIABLE_OutVars_18_18;
        *hlds__arg_info__STATE_VARIABLE_InVars_13 = hlds__arg_info__STATE_VARIABLE_InVars_16_16;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

void MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_6_p_0(
  MR_Word hlds__arg_info__ModuleInfo_7,
  MR_Word hlds__arg_info___VarTypes_8,
  MR_Word hlds__arg_info__GenericCall_9,
  MR_Word hlds__arg_info__ArgVars_10,
  MR_Word hlds__arg_info__MaybeArgRegs_11,
  MR_Word * hlds__arg_info__ArgRegTypes_12)
{
  {
    MR_bool hlds__arg_info__succeeded;

    {
      hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(hlds__arg_info__ModuleInfo_7, hlds__arg_info__GenericCall_9, hlds__arg_info__ArgVars_10, hlds__arg_info__MaybeArgRegs_11, hlds__arg_info__ArgRegTypes_12);
    }
  }
}

void MR_CALL 
hlds__arg_info__make_arg_infos_6_p_0(
  MR_Word hlds__arg_info__ArgTypes_7,
  MR_Word hlds__arg_info__ArgModes_8,
  MR_Word hlds__arg_info__ArgRegTypes_9,
  MR_Word hlds__arg_info__CodeModel_10,
  MR_Word hlds__arg_info__ModuleInfo_11,
  MR_Word * hlds__arg_info__ArgInfo_12)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Integer hlds__arg_info__FirstOutRegR_13;
    MR_Word hlds__arg_info__ArgInfoPrime_17;

    switch (hlds__arg_info__CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        hlds__arg_info__FirstOutRegR_13 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        hlds__arg_info__FirstOutRegR_13 = (MR_Integer) 2;
        break;
    }
    {
      hlds__arg_info__succeeded = hlds__arg_info__make_arg_infos_9_p_0(hlds__arg_info__ArgModes_8, hlds__arg_info__ArgTypes_7, hlds__arg_info__ArgRegTypes_9, (MR_Integer) 1, (MR_Integer) 1, hlds__arg_info__FirstOutRegR_13, (MR_Integer) 1, hlds__arg_info__ModuleInfo_11, &hlds__arg_info__ArgInfoPrime_17);
    }
    if (hlds__arg_info__succeeded)
      *hlds__arg_info__ArgInfo_12 = hlds__arg_info__ArgInfoPrime_17;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.make_arg_infos\'/6", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1,
  MR_Box * hlds__arg_info__wrapper_arg_2)
{
  {
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
    MR_Word hlds__arg_info__conv0_RegType_6;

    {
      hlds__arg_info__standard_reg_type_for_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__closure, (MR_Integer) 3))), ((MR_Word) hlds__arg_info__wrapper_arg_1), &hlds__arg_info__conv0_RegType_6);
    }
    *hlds__arg_info__wrapper_arg_2 = ((MR_Box) (hlds__arg_info__conv0_RegType_6));
  }
}

void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0(
  MR_Word hlds__arg_info__ArgTypes_6,
  MR_Word hlds__arg_info__ArgModes_7,
  MR_Word hlds__arg_info__CodeModel_8,
  MR_Word hlds__arg_info__ModuleInfo_9,
  MR_Word * hlds__arg_info__ArgInfo_10)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Globals_11;
    MR_Word hlds__arg_info__FloatRegs_12;
    MR_Word hlds__arg_info__FloatRegType_13;
    MR_Word hlds__arg_info__RegTypes_14;
    MR_Word hlds__arg_info__V_16_16;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_9, &hlds__arg_info__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_11, (MR_Integer) 261, &hlds__arg_info__FloatRegs_12);
    }
    switch (hlds__arg_info__FloatRegs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__arg_info__FloatRegType_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        hlds__arg_info__FloatRegType_13 = (MR_Integer) 1;
        break;
    }
    {
      hlds__arg_info__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 1) = ((MR_Box) (hlds__arg_info__make_standard_arg_infos_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 3) = ((MR_Box) (hlds__arg_info__FloatRegType_13));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_16_16, hlds__arg_info__ArgTypes_6, &hlds__arg_info__RegTypes_14);
    }
    {
      hlds__arg_info__make_arg_infos_6_p_0(hlds__arg_info__ArgTypes_6, hlds__arg_info__ArgModes_7, hlds__arg_info__RegTypes_14, hlds__arg_info__CodeModel_8, hlds__arg_info__ModuleInfo_9, hlds__arg_info__ArgInfo_10);
    }
  }
}

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box hlds__arg_info__closure_arg,
  MR_Box hlds__arg_info__wrapper_arg_1,
  MR_Box hlds__arg_info__wrapper_arg_2,
  MR_Box * hlds__arg_info__wrapper_arg_3)
{
  {
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
    MR_Word hlds__arg_info__conv0_RegType_8;

    {
      hlds__arg_info__reg_type_for_headvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__closure, (MR_Integer) 3))), ((MR_Word) hlds__arg_info__wrapper_arg_1), ((MR_Word) hlds__arg_info__wrapper_arg_2), &hlds__arg_info__conv0_RegType_8);
    }
    *hlds__arg_info__wrapper_arg_3 = ((MR_Box) (hlds__arg_info__conv0_RegType_8));
  }
}

void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0(
  MR_Word hlds__arg_info__Markers_6,
  MR_Word hlds__arg_info__ArgTypes_7,
  MR_Word hlds__arg_info__ModuleInfo_8,
  MR_Word hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * hlds__arg_info__STATE_VARIABLE_ProcInfo_19)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Globals_10;
    MR_Word hlds__arg_info__UseFloatRegs_11;
    MR_Word hlds__arg_info__HeadVars_12;
    MR_Word hlds__arg_info__ArgRegTypes_14;
    MR_Word hlds__arg_info__ArgModes_15;
    MR_Word hlds__arg_info__CodeModel_16;
    MR_Word hlds__arg_info__ArgInfo_17;
    MR_Word hlds__arg_info__V_21_21;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_8, &hlds__arg_info__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_10, (MR_Integer) 261, &hlds__arg_info__UseFloatRegs_11);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__HeadVars_12);
    }
    hlds__arg_info__succeeded = (hlds__arg_info__UseFloatRegs_11 == (MR_Integer) 1);
    if (hlds__arg_info__succeeded)
      {
        hlds__arg_info__V_21_21 = (MR_Integer) 11;
        {
          hlds__arg_info__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__arg_info__Markers_6, hlds__arg_info__V_21_21);
        }
        hlds__arg_info__succeeded = !(hlds__arg_info__succeeded);
      }
    if (hlds__arg_info__succeeded)
      {
        MR_Word hlds__arg_info__RegR_HeadVars_13;
        MR_Word hlds__arg_info__V_22_22;

        {
          hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__RegR_HeadVars_13);
        }
        {
          hlds__arg_info__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 1) = ((MR_Box) (hlds__arg_info__generate_proc_arg_info_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 3) = ((MR_Box) (hlds__arg_info__RegR_HeadVars_13));
        }
        {
          mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_22_22, hlds__arg_info__HeadVars_12, hlds__arg_info__ArgTypes_7, &hlds__arg_info__ArgRegTypes_14);
        }
      }
    else
      {
        MR_Integer hlds__arg_info__V_23_23;

        {
          hlds__arg_info__V_23_23 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__HeadVars_12);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_23_23, ((MR_Box) ((MR_Integer) 0)), &hlds__arg_info__ArgRegTypes_14);
        }
      }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__ArgModes_15);
    }
    {
      hlds__arg_info__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18);
    }
    {
      hlds__arg_info__make_arg_infos_6_p_0(hlds__arg_info__ArgTypes_7, hlds__arg_info__ArgModes_15, hlds__arg_info__ArgRegTypes_14, hlds__arg_info__CodeModel_16, hlds__arg_info__ModuleInfo_8, &hlds__arg_info__ArgInfo_17);
    }
    {
      hlds__hlds_pred__proc_info_set_arg_info_3_p_0(hlds__arg_info__ArgInfo_17, hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, hlds__arg_info__STATE_VARIABLE_ProcInfo_19);
    }
  }
}

void MR_CALL 
hlds__arg_info__generate_arg_info_2_p_0(
  MR_Word hlds__arg_info__ModuleInfo0_3,
  MR_Word * hlds__arg_info__ModuleInfo_4)
{
  {
    MR_bool hlds__arg_info__succeeded;
    MR_Word hlds__arg_info__Preds_5;
    MR_Word hlds__arg_info__PredIds_6;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__ModuleInfo0_3, &hlds__arg_info__Preds_5);
    }
    {
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__arg_info__Preds_5, &hlds__arg_info__PredIds_6);
    }
    {
      hlds__arg_info__generate_pred_arg_info_3_p_0(hlds__arg_info__PredIds_6, hlds__arg_info__ModuleInfo0_3, hlds__arg_info__ModuleInfo_4);
    }
  }
}

void mercury__hlds__arg_info__init(void)
{
}

void mercury__hlds__arg_info__init_type_tables(void)
{
}

void mercury__hlds__arg_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__arg_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.arg_info. */
