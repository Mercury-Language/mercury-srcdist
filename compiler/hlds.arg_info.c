/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 144 "hlds.arg_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.arg_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.arg_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 354 "arg_info.m"
static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
#line 354 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 354 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1);

#line 519 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0_5,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Inputs_6,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0_7,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Outputs_8,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0_9,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Unuseds_10);

#line 423 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__5_5,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__6_6,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__7_7,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__8_8,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__9_9);

#line 387 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_InVars_0_5,
#line 387 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_6,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_0_7,
#line 387 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_8);

#line 370 "arg_info.m"
static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
#line 370 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1);

#line 302 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_0_4,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_0_5,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_0_6,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_0_7,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_8,
#line 302 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__9_9);

#line 268 "arg_info.m"
static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
#line 268 "arg_info.m"
  MR_Word hlds__arg_info__FloatRegType_4,
#line 268 "arg_info.m"
  MR_Word hlds__arg_info__Type_5,
#line 268 "arg_info.m"
  MR_Word * hlds__arg_info__RegType_6);

#line 218 "arg_info.m"
static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__RegR_HeadVars_5,
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar_6,
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__Type_7,
#line 218 "arg_info.m"
  MR_Word * hlds__arg_info__RegType_8);

#line 176 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3,
#line 176 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_4);

#line 165 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
#line 165 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 165 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2,
#line 165 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_3);

#line 264 "arg_info.m"
static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
#line 264 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 264 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1,
#line 264 "arg_info.m"
  MR_Box * hlds__arg_info__wrapper_arg_2);

#line 207 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1,
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_2,
#line 207 "arg_info.m"
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



#line 403 "hlds.arg_info.c"
static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 411 "hlds.arg_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 419 "hlds.arg_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 354 "arg_info.m"
static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
#line 354 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 354 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1)
#line 354 "arg_info.m"
{
#line 354 "arg_info.m"
  {
#line 354 "arg_info.m"
    MR_Box hlds__arg_info__wrapper_arg_2;
#line 354 "arg_info.m"
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
#line 354 "arg_info.m"
    MR_Word hlds__arg_info__conv0_HeadVar__2_2;

#line 354 "arg_info.m"
    {
#line 354 "arg_info.m"
      hlds__arg_info__conv0_HeadVar__2_2 = hlds__arg_info__arg_reg_to_reg_type_1_f_0(((MR_Word) hlds__arg_info__wrapper_arg_1));
    }
#line 354 "arg_info.m"
    hlds__arg_info__wrapper_arg_2 = ((MR_Box) (hlds__arg_info__conv0_HeadVar__2_2));
#line 354 "arg_info.m"
    return hlds__arg_info__wrapper_arg_2;
#line 354 "arg_info.m"
  }
#line 354 "arg_info.m"
}

#line 73 "arg_info.m"
void MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_7,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__GenericCall_9,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__ArgVars_10,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__MaybeArgRegs_11,
#line 73 "arg_info.m"
  MR_Word * hlds__arg_info__ArgRegTypes_12)
#line 73 "arg_info.m"
{
#line 345 "arg_info.m"
  {
#line 345 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 345 "arg_info.m"
#line 345 "arg_info.m"
    switch (MR_tag((MR_Word) hlds__arg_info__GenericCall_9)) {
#line 345 "arg_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 345 "arg_info.m"
      case (MR_Integer) 0:
#line 345 "arg_info.m"
        {
#line 345 "arg_info.m"
          MR_Word hlds__arg_info__Globals_17;
#line 345 "arg_info.m"
          MR_Word hlds__arg_info__UseFloatRegs_18;

#line 346 "arg_info.m"
          {
#line 346 "arg_info.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_7, &hlds__arg_info__Globals_17);
          }
#line 347 "arg_info.m"
          {
#line 347 "arg_info.m"
            libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_17, (MR_Integer) 251, &hlds__arg_info__UseFloatRegs_18);
          }
#line 351 "arg_info.m"
#line 351 "arg_info.m"
          switch (hlds__arg_info__UseFloatRegs_18) {
#line 351 "arg_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 351 "arg_info.m"
            case (MR_Integer) 0:
#line 349 "arg_info.m"
              {
#line 349 "arg_info.m"
                MR_Integer hlds__arg_info__V_33_33;

#line 350 "arg_info.m"
                {
#line 350 "arg_info.m"
                  hlds__arg_info__V_33_33 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__ArgVars_10);
                }
#line 350 "arg_info.m"
                {
#line 350 "arg_info.m"
                  mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_33_33, ((MR_Box) ((MR_Integer) 0)), hlds__arg_info__ArgRegTypes_12);
                }
#line 349 "arg_info.m"
              }
#line 351 "arg_info.m"
              break;
#line 351 "arg_info.m"
            case (MR_Integer) 1:
#line 351 "arg_info.m"
              if ((hlds__arg_info__MaybeArgRegs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "arg_info.m"
                {
#line 359 "arg_info.m"
                  {
#line 359 "arg_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.generic_call_arg_reg_types\'/6", (MR_String) "missing ho_arg_regs");
#line 359 "arg_info.m"
                    return;
                  }
#line 356 "arg_info.m"
                }
#line 351 "arg_info.m"
              else
#line 352 "arg_info.m"
                {
#line 352 "arg_info.m"
                  MR_Word hlds__arg_info__ArgRegs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__MaybeArgRegs_11, (MR_Integer) 0)));

#line 354 "arg_info.m"
                  {
#line 354 "arg_info.m"
                    *hlds__arg_info__ArgRegTypes_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, (MR_Word) &hlds__arg_info_scalar_common_2[1], hlds__arg_info__ArgRegs_19);
                  }
#line 352 "arg_info.m"
                }
#line 351 "arg_info.m"
              break;
#line 351 "arg_info.m"
          }
#line 345 "arg_info.m"
        }
#line 345 "arg_info.m"
        break;
#line 345 "arg_info.m"
      case (MR_Integer) 1:
#line 345 "arg_info.m"
      case (MR_Integer) 2:
#line 345 "arg_info.m"
      case (MR_Integer) 3:
#line 366 "arg_info.m"
        {
#line 366 "arg_info.m"
          MR_Integer hlds__arg_info__V_26_26;

#line 367 "arg_info.m"
          {
#line 367 "arg_info.m"
            hlds__arg_info__V_26_26 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__ArgVars_10);
          }
#line 367 "arg_info.m"
          {
#line 367 "arg_info.m"
            mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_26_26, ((MR_Box) ((MR_Integer) 0)), hlds__arg_info__ArgRegTypes_12);
          }
#line 366 "arg_info.m"
        }
#line 345 "arg_info.m"
        break;
#line 345 "arg_info.m"
    }
#line 345 "arg_info.m"
  }
#line 73 "arg_info.m"
}

#line 519 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0_5,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Inputs_6,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0_7,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Outputs_8,
#line 519 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0_9,
#line 519 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_Unuseds_10)
#line 519 "arg_info.m"
{
#line 525 "arg_info.m"
  while (MR_TRUE)
#line 525 "arg_info.m"
    {
#line 525 "arg_info.m"
      /* tailcall optimized into a loop */
#line 525 "arg_info.m"
      {
#line 525 "arg_info.m"
        MR_bool hlds__arg_info__succeeded;

#line 525 "arg_info.m"
        if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "arg_info.m"
          {
#line 525 "arg_info.m"
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 525 "arg_info.m"
              {
#line 525 "arg_info.m"
                hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 525 "arg_info.m"
                  {
#line 526 "arg_info.m"
                    *hlds__arg_info__STATE_VARIABLE_Unuseds_10 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
#line 526 "arg_info.m"
                    *hlds__arg_info__STATE_VARIABLE_Outputs_8 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
#line 526 "arg_info.m"
                    *hlds__arg_info__STATE_VARIABLE_Inputs_6 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
#line 526 "arg_info.m"
                    hlds__arg_info__succeeded = MR_TRUE;
#line 525 "arg_info.m"
                  }
#line 525 "arg_info.m"
              }
#line 525 "arg_info.m"
          }
#line 525 "arg_info.m"
        else
#line 528 "arg_info.m"
          {
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Type_23;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Types_24;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Mode_25;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__Modes_26;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__ArgMode_31;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_38_38;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_39_39;
#line 528 "arg_info.m"
            MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_40_40;

#line 527 "arg_info.m"
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 527 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 527 "arg_info.m"
              {
#line 527 "arg_info.m"
                hlds__arg_info__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
#line 527 "arg_info.m"
                hlds__arg_info__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
#line 527 "arg_info.m"
                hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 527 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 527 "arg_info.m"
                  {
#line 527 "arg_info.m"
                    hlds__arg_info__Mode_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
#line 527 "arg_info.m"
                    hlds__arg_info__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
#line 530 "arg_info.m"
                    {
#line 530 "arg_info.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__arg_info__HeadVar__4_4, hlds__arg_info__Mode_25, hlds__arg_info__Type_23, &hlds__arg_info__ArgMode_31);
                    }
#line 534 "arg_info.m"
#line 534 "arg_info.m"
                    switch (hlds__arg_info__ArgMode_31) {
#line 534 "arg_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "arg_info.m"
                      case (MR_Integer) 0:
#line 532 "arg_info.m"
                        {
#line 533 "arg_info.m"
                          {
#line 533 "arg_info.m"
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Inputs_0_5, &hlds__arg_info__STATE_VARIABLE_Inputs_40_40);
                          }
#line 532 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Outputs_39_39 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
#line 532 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Unuseds_38_38 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
#line 532 "arg_info.m"
                        }
#line 534 "arg_info.m"
                        break;
#line 534 "arg_info.m"
                      case (MR_Integer) 1:
#line 535 "arg_info.m"
                        {
#line 536 "arg_info.m"
                          {
#line 536 "arg_info.m"
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Outputs_0_7, &hlds__arg_info__STATE_VARIABLE_Outputs_39_39);
                          }
#line 535 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Inputs_40_40 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
#line 535 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Unuseds_38_38 = hlds__arg_info__STATE_VARIABLE_Unuseds_0_9;
#line 535 "arg_info.m"
                        }
#line 534 "arg_info.m"
                        break;
#line 534 "arg_info.m"
                      case (MR_Integer) 2:
#line 538 "arg_info.m"
                        {
#line 539 "arg_info.m"
                          {
#line 539 "arg_info.m"
                            mercury__set__insert_3_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], ((MR_Box) (hlds__arg_info__Var_21)), hlds__arg_info__STATE_VARIABLE_Unuseds_0_9, &hlds__arg_info__STATE_VARIABLE_Unuseds_38_38);
                          }
#line 538 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Inputs_40_40 = hlds__arg_info__STATE_VARIABLE_Inputs_0_5;
#line 538 "arg_info.m"
                          hlds__arg_info__STATE_VARIABLE_Outputs_39_39 = hlds__arg_info__STATE_VARIABLE_Outputs_0_7;
#line 538 "arg_info.m"
                        }
#line 534 "arg_info.m"
                        break;
#line 534 "arg_info.m"
                    }
#line 542 "arg_info.m"
                    {
#line 542 "arg_info.m"
                      /* direct tailcall eliminated */
#line 542 "arg_info.m"
                      {
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__HeadVar__1__tmp_copy_1 = hlds__arg_info__Vars_22;
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__HeadVar__2__tmp_copy_2 = hlds__arg_info__Types_24;
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__HeadVar__3__tmp_copy_3 = hlds__arg_info__Modes_26;
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_0__tmp_copy_5 = hlds__arg_info__STATE_VARIABLE_Inputs_40_40;
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_0__tmp_copy_7 = hlds__arg_info__STATE_VARIABLE_Outputs_39_39;
#line 542 "arg_info.m"
                        MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_0__tmp_copy_9 = hlds__arg_info__STATE_VARIABLE_Unuseds_38_38;

#line 542 "arg_info.m"
                        hlds__arg_info__STATE_VARIABLE_Unuseds_0_9 = hlds__arg_info__STATE_VARIABLE_Unuseds_0__tmp_copy_9;
#line 542 "arg_info.m"
                        hlds__arg_info__STATE_VARIABLE_Outputs_0_7 = hlds__arg_info__STATE_VARIABLE_Outputs_0__tmp_copy_7;
#line 542 "arg_info.m"
                        hlds__arg_info__STATE_VARIABLE_Inputs_0_5 = hlds__arg_info__STATE_VARIABLE_Inputs_0__tmp_copy_5;
#line 542 "arg_info.m"
                        hlds__arg_info__HeadVar__3_3 = hlds__arg_info__HeadVar__3__tmp_copy_3;
#line 542 "arg_info.m"
                        hlds__arg_info__HeadVar__2_2 = hlds__arg_info__HeadVar__2__tmp_copy_2;
#line 542 "arg_info.m"
                        hlds__arg_info__HeadVar__1_1 = hlds__arg_info__HeadVar__1__tmp_copy_1;
#line 542 "arg_info.m"
                      }
#line 542 "arg_info.m"
                      continue;
#line 542 "arg_info.m"
                    }
#line 527 "arg_info.m"
                  }
#line 527 "arg_info.m"
              }
#line 528 "arg_info.m"
          }
#line 525 "arg_info.m"
        return hlds__arg_info__succeeded;
#line 525 "arg_info.m"
      }
#line 525 "arg_info.m"
      break;
#line 525 "arg_info.m"
    }
#line 519 "arg_info.m"
}

#line 423 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 423 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__5_5,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__6_6,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__7_7,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__8_8,
#line 423 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__9_9)
#line 423 "arg_info.m"
{
#line 428 "arg_info.m"
  {
#line 428 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 428 "arg_info.m"
    if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "arg_info.m"
      {
#line 429 "arg_info.m"
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 428 "arg_info.m"
          {
#line 429 "arg_info.m"
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 428 "arg_info.m"
              {
#line 429 "arg_info.m"
                hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 428 "arg_info.m"
                  {
#line 429 "arg_info.m"
                    *hlds__arg_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "arg_info.m"
                    *hlds__arg_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "arg_info.m"
                    *hlds__arg_info__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "arg_info.m"
                    *hlds__arg_info__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "arg_info.m"
                    hlds__arg_info__succeeded = MR_TRUE;
#line 428 "arg_info.m"
                  }
#line 428 "arg_info.m"
              }
#line 428 "arg_info.m"
          }
#line 428 "arg_info.m"
      }
#line 428 "arg_info.m"
    else
#line 432 "arg_info.m"
      {
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Mode_14;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Modes_15;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Type_16;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__Types_17;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__RegType_18;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__RegTypes_19;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__ArgMode_24;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
#line 432 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;

#line 431 "arg_info.m"
        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 431 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 431 "arg_info.m"
          {
#line 431 "arg_info.m"
            hlds__arg_info__Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
#line 431 "arg_info.m"
            hlds__arg_info__Modes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
#line 431 "arg_info.m"
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 431 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 431 "arg_info.m"
              {
#line 431 "arg_info.m"
                hlds__arg_info__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 0)));
#line 431 "arg_info.m"
                hlds__arg_info__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 1)));
#line 431 "arg_info.m"
                hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 431 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 431 "arg_info.m"
                  {
#line 431 "arg_info.m"
                    hlds__arg_info__RegType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__5_5, (MR_Integer) 0)));
#line 431 "arg_info.m"
                    hlds__arg_info__RegTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__5_5, (MR_Integer) 1)));
#line 433 "arg_info.m"
                    {
#line 433 "arg_info.m"
                      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Vars_13, hlds__arg_info__Modes_15, hlds__arg_info__Types_17, hlds__arg_info__RegTypes_19, &hlds__arg_info__STATE_VARIABLE_InVarsR_29_29, &hlds__arg_info__STATE_VARIABLE_InVarsF_30_30, &hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31, &hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32);
                    }
#line 432 "arg_info.m"
                    if (hlds__arg_info__succeeded)
#line 432 "arg_info.m"
                      {
#line 436 "arg_info.m"
                        {
#line 436 "arg_info.m"
                          check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Mode_14, hlds__arg_info__Type_16, &hlds__arg_info__ArgMode_24);
                        }
#line 446 "arg_info.m"
#line 446 "arg_info.m"
                        switch (hlds__arg_info__ArgMode_24) {
#line 446 "arg_info.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 446 "arg_info.m"
                          case (MR_Integer) 0:
#line 438 "arg_info.m"
                            {
#line 442 "arg_info.m"
#line 442 "arg_info.m"
                              switch (hlds__arg_info__RegType_18) {
#line 442 "arg_info.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 442 "arg_info.m"
                                case (MR_Integer) 1:
#line 443 "arg_info.m"
                                  {
#line 444 "arg_info.m"
                                    {
#line 444 "arg_info.m"
                                      MR_Word base;
#line 444 "arg_info.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "arg_info.m"
                                      *hlds__arg_info__HeadVar__7_7 = base;
#line 444 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
#line 444 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVarsF_30_30));
#line 444 "arg_info.m"
                                    }
#line 443 "arg_info.m"
                                    *hlds__arg_info__HeadVar__6_6 = hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
#line 443 "arg_info.m"
                                  }
#line 442 "arg_info.m"
                                  break;
#line 442 "arg_info.m"
                                case (MR_Integer) 0:
#line 440 "arg_info.m"
                                  {
#line 441 "arg_info.m"
                                    {
#line 441 "arg_info.m"
                                      MR_Word base;
#line 441 "arg_info.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "arg_info.m"
                                      *hlds__arg_info__HeadVar__6_6 = base;
#line 441 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
#line 441 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVarsR_29_29));
#line 441 "arg_info.m"
                                    }
#line 440 "arg_info.m"
                                    *hlds__arg_info__HeadVar__7_7 = hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
#line 440 "arg_info.m"
                                  }
#line 442 "arg_info.m"
                                  break;
#line 442 "arg_info.m"
                              }
#line 438 "arg_info.m"
                              *hlds__arg_info__HeadVar__8_8 = hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
#line 438 "arg_info.m"
                              *hlds__arg_info__HeadVar__9_9 = hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;
#line 438 "arg_info.m"
                            }
#line 446 "arg_info.m"
                            break;
#line 446 "arg_info.m"
                          case (MR_Integer) 1:
#line 446 "arg_info.m"
                          case (MR_Integer) 2:
#line 449 "arg_info.m"
                            {
#line 453 "arg_info.m"
#line 453 "arg_info.m"
                              switch (hlds__arg_info__RegType_18) {
#line 453 "arg_info.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 453 "arg_info.m"
                                case (MR_Integer) 1:
#line 454 "arg_info.m"
                                  {
#line 455 "arg_info.m"
                                    {
#line 455 "arg_info.m"
                                      MR_Word base;
#line 455 "arg_info.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "arg_info.m"
                                      *hlds__arg_info__HeadVar__9_9 = base;
#line 455 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
#line 455 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32));
#line 455 "arg_info.m"
                                    }
#line 454 "arg_info.m"
                                    *hlds__arg_info__HeadVar__8_8 = hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31;
#line 454 "arg_info.m"
                                  }
#line 453 "arg_info.m"
                                  break;
#line 453 "arg_info.m"
                                case (MR_Integer) 0:
#line 451 "arg_info.m"
                                  {
#line 452 "arg_info.m"
                                    {
#line 452 "arg_info.m"
                                      MR_Word base;
#line 452 "arg_info.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "arg_info.m"
                                      *hlds__arg_info__HeadVar__8_8 = base;
#line 452 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_12));
#line 452 "arg_info.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVarsR_31_31));
#line 452 "arg_info.m"
                                    }
#line 451 "arg_info.m"
                                    *hlds__arg_info__HeadVar__9_9 = hlds__arg_info__STATE_VARIABLE_OutVarsF_32_32;
#line 451 "arg_info.m"
                                  }
#line 453 "arg_info.m"
                                  break;
#line 453 "arg_info.m"
                              }
#line 449 "arg_info.m"
                              *hlds__arg_info__HeadVar__6_6 = hlds__arg_info__STATE_VARIABLE_InVarsR_29_29;
#line 449 "arg_info.m"
                              *hlds__arg_info__HeadVar__7_7 = hlds__arg_info__STATE_VARIABLE_InVarsF_30_30;
#line 449 "arg_info.m"
                            }
#line 446 "arg_info.m"
                            break;
#line 446 "arg_info.m"
                        }
#line 446 "arg_info.m"
                        hlds__arg_info__succeeded = MR_TRUE;
#line 432 "arg_info.m"
                      }
#line 431 "arg_info.m"
                  }
#line 431 "arg_info.m"
              }
#line 431 "arg_info.m"
          }
#line 432 "arg_info.m"
      }
#line 428 "arg_info.m"
    return hlds__arg_info__succeeded;
#line 428 "arg_info.m"
  }
#line 423 "arg_info.m"
}

#line 387 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__4_4,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_InVars_0_5,
#line 387 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_6,
#line 387 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_0_7,
#line 387 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_8)
#line 387 "arg_info.m"
{
#line 392 "arg_info.m"
  {
#line 392 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 392 "arg_info.m"
    if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "arg_info.m"
      {
#line 392 "arg_info.m"
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 392 "arg_info.m"
          {
#line 392 "arg_info.m"
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 392 "arg_info.m"
              {
#line 392 "arg_info.m"
                *hlds__arg_info__STATE_VARIABLE_OutVars_8 = hlds__arg_info__STATE_VARIABLE_OutVars_0_7;
#line 392 "arg_info.m"
                *hlds__arg_info__STATE_VARIABLE_InVars_6 = hlds__arg_info__STATE_VARIABLE_InVars_0_5;
#line 392 "arg_info.m"
                hlds__arg_info__succeeded = MR_TRUE;
#line 392 "arg_info.m"
              }
#line 392 "arg_info.m"
          }
#line 392 "arg_info.m"
      }
#line 392 "arg_info.m"
    else
#line 394 "arg_info.m"
      {
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Mode_19;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Modes_20;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Type_21;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__Types_22;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__ArgMode_25;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_InVars_30_30;
#line 394 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_31_31;

#line 393 "arg_info.m"
        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 393 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 393 "arg_info.m"
          {
#line 393 "arg_info.m"
            hlds__arg_info__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
#line 393 "arg_info.m"
            hlds__arg_info__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
#line 394 "arg_info.m"
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 394 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 394 "arg_info.m"
              {
#line 394 "arg_info.m"
                hlds__arg_info__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 0)));
#line 394 "arg_info.m"
                hlds__arg_info__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__4_4, (MR_Integer) 1)));
#line 395 "arg_info.m"
                {
#line 395 "arg_info.m"
                  hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Vars_18, hlds__arg_info__Modes_20, hlds__arg_info__Types_22, hlds__arg_info__STATE_VARIABLE_InVars_0_5, &hlds__arg_info__STATE_VARIABLE_InVars_30_30, hlds__arg_info__STATE_VARIABLE_OutVars_0_7, &hlds__arg_info__STATE_VARIABLE_OutVars_31_31);
                }
#line 394 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 394 "arg_info.m"
                  {
#line 398 "arg_info.m"
                    {
#line 398 "arg_info.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__arg_info__HeadVar__1_1, hlds__arg_info__Mode_19, hlds__arg_info__Type_21, &hlds__arg_info__ArgMode_25);
                    }
#line 402 "arg_info.m"
#line 402 "arg_info.m"
                    switch (hlds__arg_info__ArgMode_25) {
#line 402 "arg_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "arg_info.m"
                      case (MR_Integer) 0:
#line 400 "arg_info.m"
                        {
#line 401 "arg_info.m"
                          {
#line 401 "arg_info.m"
                            MR_Word base;
#line 401 "arg_info.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "arg_info.m"
                            *hlds__arg_info__STATE_VARIABLE_InVars_6 = base;
#line 401 "arg_info.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_17));
#line 401 "arg_info.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InVars_30_30));
#line 401 "arg_info.m"
                          }
#line 400 "arg_info.m"
                          *hlds__arg_info__STATE_VARIABLE_OutVars_8 = hlds__arg_info__STATE_VARIABLE_OutVars_31_31;
#line 400 "arg_info.m"
                        }
#line 402 "arg_info.m"
                        break;
#line 402 "arg_info.m"
                      case (MR_Integer) 1:
#line 402 "arg_info.m"
                      case (MR_Integer) 2:
#line 405 "arg_info.m"
                        {
#line 406 "arg_info.m"
                          {
#line 406 "arg_info.m"
                            MR_Word base;
#line 406 "arg_info.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "arg_info.m"
                            *hlds__arg_info__STATE_VARIABLE_OutVars_8 = base;
#line 406 "arg_info.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__Var_17));
#line 406 "arg_info.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutVars_31_31));
#line 406 "arg_info.m"
                          }
#line 405 "arg_info.m"
                          *hlds__arg_info__STATE_VARIABLE_InVars_6 = hlds__arg_info__STATE_VARIABLE_InVars_30_30;
#line 405 "arg_info.m"
                        }
#line 402 "arg_info.m"
                        break;
#line 402 "arg_info.m"
                    }
#line 402 "arg_info.m"
                    hlds__arg_info__succeeded = MR_TRUE;
#line 394 "arg_info.m"
                  }
#line 394 "arg_info.m"
              }
#line 393 "arg_info.m"
          }
#line 394 "arg_info.m"
      }
#line 392 "arg_info.m"
    return hlds__arg_info__succeeded;
#line 392 "arg_info.m"
  }
#line 387 "arg_info.m"
}

#line 370 "arg_info.m"
static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
#line 370 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1)
#line 370 "arg_info.m"
{
#line 372 "arg_info.m"
  {
#line 372 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 372 "arg_info.m"
    MR_Word hlds__arg_info__HeadVar__2_2;

#line 372 "arg_info.m"
#line 372 "arg_info.m"
    switch (hlds__arg_info__HeadVar__1_1) {
#line 372 "arg_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "arg_info.m"
      case (MR_Integer) 1:
#line 373 "arg_info.m"
        hlds__arg_info__HeadVar__2_2 = (MR_Integer) 1;
#line 372 "arg_info.m"
        break;
#line 372 "arg_info.m"
      case (MR_Integer) 0:
#line 372 "arg_info.m"
        hlds__arg_info__HeadVar__2_2 = (MR_Integer) 0;
#line 372 "arg_info.m"
        break;
#line 372 "arg_info.m"
    }
#line 372 "arg_info.m"
    return hlds__arg_info__HeadVar__2_2;
#line 372 "arg_info.m"
  }
#line 370 "arg_info.m"
}

#line 302 "arg_info.m"
static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__3_3,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_0_4,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_0_5,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_0_6,
#line 302 "arg_info.m"
  MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_0_7,
#line 302 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_8,
#line 302 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__9_9)
#line 302 "arg_info.m"
{
#line 306 "arg_info.m"
  {
#line 306 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 306 "arg_info.m"
    if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "arg_info.m"
      {
#line 306 "arg_info.m"
        hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 306 "arg_info.m"
          {
#line 306 "arg_info.m"
            hlds__arg_info__succeeded = (hlds__arg_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 306 "arg_info.m"
              {
#line 306 "arg_info.m"
                *hlds__arg_info__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "arg_info.m"
                hlds__arg_info__succeeded = MR_TRUE;
#line 306 "arg_info.m"
              }
#line 306 "arg_info.m"
          }
#line 306 "arg_info.m"
      }
#line 306 "arg_info.m"
    else
#line 309 "arg_info.m"
      {
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__Type_17;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__Types_18;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__RegType_19;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__RegTypes_20;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__ArgInfo_26;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__ArgInfos_27;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__ArgMode_28;
#line 309 "arg_info.m"
        MR_Word hlds__arg_info__ArgLoc_29;
#line 309 "arg_info.m"
        MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegR_34_34;
#line 309 "arg_info.m"
        MR_Integer hlds__arg_info__STATE_VARIABLE_OutRegF_35_35;
#line 309 "arg_info.m"
        MR_Integer hlds__arg_info__STATE_VARIABLE_InRegR_36_36;
#line 309 "arg_info.m"
        MR_Integer hlds__arg_info__STATE_VARIABLE_InRegF_37_37;

#line 307 "arg_info.m"
        hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 307 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 307 "arg_info.m"
          {
#line 307 "arg_info.m"
            hlds__arg_info__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
#line 307 "arg_info.m"
            hlds__arg_info__Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
#line 307 "arg_info.m"
            hlds__arg_info__succeeded = ((MR_tag((MR_Word) hlds__arg_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 307 "arg_info.m"
            if (hlds__arg_info__succeeded)
#line 307 "arg_info.m"
              {
#line 307 "arg_info.m"
                hlds__arg_info__RegType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 0)));
#line 307 "arg_info.m"
                hlds__arg_info__RegTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__3_3, (MR_Integer) 1)));
#line 311 "arg_info.m"
                {
#line 311 "arg_info.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(hlds__arg_info__ModuleInfo_8, hlds__arg_info__Mode_15, hlds__arg_info__Type_17, &hlds__arg_info__ArgMode_28);
                }
#line 315 "arg_info.m"
#line 315 "arg_info.m"
                switch (hlds__arg_info__ArgMode_28) {
#line 315 "arg_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 315 "arg_info.m"
                  case (MR_Integer) 0:
#line 313 "arg_info.m"
                    {
#line 331 "arg_info.m"
#line 331 "arg_info.m"
                      switch (hlds__arg_info__RegType_19) {
#line 331 "arg_info.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 331 "arg_info.m"
                        case (MR_Integer) 1:
#line 335 "arg_info.m"
                          {
#line 336 "arg_info.m"
                            {
#line 336 "arg_info.m"
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 1));
#line 336 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InRegF_0_5));
#line 336 "arg_info.m"
                            }
#line 337 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = (hlds__arg_info__STATE_VARIABLE_InRegF_0_5 + (MR_Integer) 1);
#line 335 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = hlds__arg_info__STATE_VARIABLE_InRegR_0_4;
#line 335 "arg_info.m"
                          }
#line 331 "arg_info.m"
                          break;
#line 331 "arg_info.m"
                        case (MR_Integer) 0:
#line 331 "arg_info.m"
                          {
#line 332 "arg_info.m"
                            {
#line 332 "arg_info.m"
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 0));
#line 332 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_InRegR_0_4));
#line 332 "arg_info.m"
                            }
#line 333 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = (hlds__arg_info__STATE_VARIABLE_InRegR_0_4 + (MR_Integer) 1);
#line 331 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = hlds__arg_info__STATE_VARIABLE_InRegF_0_5;
#line 331 "arg_info.m"
                          }
#line 331 "arg_info.m"
                          break;
#line 331 "arg_info.m"
                      }
#line 313 "arg_info.m"
                      hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = hlds__arg_info__STATE_VARIABLE_OutRegR_0_6;
#line 313 "arg_info.m"
                      hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = hlds__arg_info__STATE_VARIABLE_OutRegF_0_7;
#line 313 "arg_info.m"
                    }
#line 315 "arg_info.m"
                    break;
#line 315 "arg_info.m"
                  case (MR_Integer) 1:
#line 315 "arg_info.m"
                  case (MR_Integer) 2:
#line 318 "arg_info.m"
                    {
#line 331 "arg_info.m"
#line 331 "arg_info.m"
                      switch (hlds__arg_info__RegType_19) {
#line 331 "arg_info.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 331 "arg_info.m"
                        case (MR_Integer) 1:
#line 335 "arg_info.m"
                          {
#line 336 "arg_info.m"
                            {
#line 336 "arg_info.m"
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 1));
#line 336 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutRegF_0_7));
#line 336 "arg_info.m"
                            }
#line 337 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = (hlds__arg_info__STATE_VARIABLE_OutRegF_0_7 + (MR_Integer) 1);
#line 335 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = hlds__arg_info__STATE_VARIABLE_OutRegR_0_6;
#line 335 "arg_info.m"
                          }
#line 331 "arg_info.m"
                          break;
#line 331 "arg_info.m"
                        case (MR_Integer) 0:
#line 331 "arg_info.m"
                          {
#line 332 "arg_info.m"
                            {
#line 332 "arg_info.m"
                              hlds__arg_info__ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 0) = ((MR_Box) ((MR_Integer) 0));
#line 332 "arg_info.m"
                              MR_hl_field(MR_mktag(0), hlds__arg_info__ArgLoc_29, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_OutRegR_0_6));
#line 332 "arg_info.m"
                            }
#line 333 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_OutRegR_34_34 = (hlds__arg_info__STATE_VARIABLE_OutRegR_0_6 + (MR_Integer) 1);
#line 331 "arg_info.m"
                            hlds__arg_info__STATE_VARIABLE_OutRegF_35_35 = hlds__arg_info__STATE_VARIABLE_OutRegF_0_7;
#line 331 "arg_info.m"
                          }
#line 331 "arg_info.m"
                          break;
#line 331 "arg_info.m"
                      }
#line 318 "arg_info.m"
                      hlds__arg_info__STATE_VARIABLE_InRegR_36_36 = hlds__arg_info__STATE_VARIABLE_InRegR_0_4;
#line 318 "arg_info.m"
                      hlds__arg_info__STATE_VARIABLE_InRegF_37_37 = hlds__arg_info__STATE_VARIABLE_InRegF_0_5;
#line 318 "arg_info.m"
                    }
#line 315 "arg_info.m"
                    break;
#line 315 "arg_info.m"
                }
#line 321 "arg_info.m"
                {
#line 321 "arg_info.m"
                  hlds__arg_info__ArgInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "arg_info.m"
                  MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_26, 0) = ((MR_Box) (hlds__arg_info__ArgLoc_29));
#line 321 "arg_info.m"
                  MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_26, 1) = ((MR_Box) (hlds__arg_info__ArgMode_28));
#line 321 "arg_info.m"
                }
#line 323 "arg_info.m"
                {
#line 323 "arg_info.m"
                  hlds__arg_info__succeeded = hlds__arg_info__make_arg_infos_9_p_0(hlds__arg_info__Modes_16, hlds__arg_info__Types_18, hlds__arg_info__RegTypes_20, hlds__arg_info__STATE_VARIABLE_InRegR_36_36, hlds__arg_info__STATE_VARIABLE_InRegF_37_37, hlds__arg_info__STATE_VARIABLE_OutRegR_34_34, hlds__arg_info__STATE_VARIABLE_OutRegF_35_35, hlds__arg_info__ModuleInfo_8, &hlds__arg_info__ArgInfos_27);
                }
#line 309 "arg_info.m"
                if (hlds__arg_info__succeeded)
#line 309 "arg_info.m"
                  {
#line 309 "arg_info.m"
                    {
#line 309 "arg_info.m"
                      MR_Word base;
#line 309 "arg_info.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "arg_info.m"
                      *hlds__arg_info__HeadVar__9_9 = base;
#line 309 "arg_info.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__ArgInfo_26));
#line 309 "arg_info.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__ArgInfos_27));
#line 309 "arg_info.m"
                    }
#line 309 "arg_info.m"
                    hlds__arg_info__succeeded = MR_TRUE;
#line 309 "arg_info.m"
                  }
#line 307 "arg_info.m"
              }
#line 307 "arg_info.m"
          }
#line 309 "arg_info.m"
      }
#line 306 "arg_info.m"
    return hlds__arg_info__succeeded;
#line 306 "arg_info.m"
  }
#line 302 "arg_info.m"
}

#line 268 "arg_info.m"
static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
#line 268 "arg_info.m"
  MR_Word hlds__arg_info__FloatRegType_4,
#line 268 "arg_info.m"
  MR_Word hlds__arg_info__Type_5,
#line 268 "arg_info.m"
  MR_Word * hlds__arg_info__RegType_6)
#line 268 "arg_info.m"
{
#line 274 "arg_info.m"
  {
#line 274 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 272 "arg_info.m"
    MR_Word hlds__arg_info__V_7_7;

#line 272 "arg_info.m"
    {
#line 272 "arg_info.m"
      hlds__arg_info__V_7_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 272 "arg_info.m"
    {
#line 272 "arg_info.m"
      hlds__arg_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__arg_info__Type_5, hlds__arg_info__V_7_7);
    }
#line 274 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 273 "arg_info.m"
      *hlds__arg_info__RegType_6 = hlds__arg_info__FloatRegType_4;
#line 274 "arg_info.m"
    else
#line 275 "arg_info.m"
      *hlds__arg_info__RegType_6 = (MR_Integer) 0;
#line 274 "arg_info.m"
  }
#line 268 "arg_info.m"
}

#line 218 "arg_info.m"
static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__RegR_HeadVars_5,
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar_6,
#line 218 "arg_info.m"
  MR_Word hlds__arg_info__Type_7,
#line 218 "arg_info.m"
  MR_Word * hlds__arg_info__RegType_8)
#line 218 "arg_info.m"
{
#line 224 "arg_info.m"
  {
#line 224 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 222 "arg_info.m"
    {
#line 222 "arg_info.m"
      hlds__arg_info__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__arg_info__RegR_HeadVars_5, hlds__arg_info__HeadVar_6);
    }
#line 224 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 223 "arg_info.m"
      *hlds__arg_info__RegType_8 = (MR_Integer) 0;
#line 224 "arg_info.m"
    else
#line 227 "arg_info.m"
      {
#line 225 "arg_info.m"
        MR_Word hlds__arg_info__V_10_10;

#line 225 "arg_info.m"
        {
#line 225 "arg_info.m"
          hlds__arg_info__V_10_10 = parse_tree__builtin_lib_types__float_type_0_f_0();
        }
#line 225 "arg_info.m"
        {
#line 225 "arg_info.m"
          hlds__arg_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__arg_info__Type_7, hlds__arg_info__V_10_10);
        }
#line 227 "arg_info.m"
        if (hlds__arg_info__succeeded)
#line 226 "arg_info.m"
          *hlds__arg_info__RegType_8 = (MR_Integer) 1;
#line 227 "arg_info.m"
        else
#line 228 "arg_info.m"
          *hlds__arg_info__RegType_8 = (MR_Integer) 0;
#line 227 "arg_info.m"
      }
#line 224 "arg_info.m"
  }
#line 218 "arg_info.m"
}

#line 176 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__2_2,
#line 176 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3,
#line 176 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_4)
#line 176 "arg_info.m"
{
#line 179 "arg_info.m"
  while (MR_TRUE)
#line 179 "arg_info.m"
    {
#line 179 "arg_info.m"
      /* tailcall optimized into a loop */
#line 179 "arg_info.m"
      {
#line 179 "arg_info.m"
        MR_bool hlds__arg_info__succeeded;

#line 179 "arg_info.m"
        if ((hlds__arg_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "arg_info.m"
          *hlds__arg_info__STATE_VARIABLE_ModuleInfo_4 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3;
#line 179 "arg_info.m"
        else
#line 180 "arg_info.m"
          {
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__TypeCtorInfo_27_27;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__TypeCtorInfo_28_28;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__TypeCtorInfo_30_30;
#line 180 "arg_info.m"
            MR_Integer hlds__arg_info__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 0)));
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__2_2, (MR_Integer) 1)));
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__PredTable0_13;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__PredInfo0_14;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ProcTable0_15;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__Markers_16;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ArgTypes_17;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ProcInfo0_18;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ProcInfo_19;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__ProcTable_20;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__PredInfo_21;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__PredTable_22;
#line 180 "arg_info.m"
            MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25;
#line 182 "arg_info.m"
            MR_Box hlds__arg_info__conv0_PredInfo0_14;
#line 186 "arg_info.m"
            MR_Box hlds__arg_info__conv1_ProcInfo0_18;

#line 181 "arg_info.m"
            {
#line 181 "arg_info.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, &hlds__arg_info__PredTable0_13);
            }
#line 1827 "hlds.arg_info.c"
            hlds__arg_info__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1829 "hlds.arg_info.c"
            hlds__arg_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 182 "arg_info.m"
            {
#line 182 "arg_info.m"
              mercury__map__lookup_3_p_0(hlds__arg_info__TypeCtorInfo_27_27, hlds__arg_info__TypeCtorInfo_28_28, hlds__arg_info__PredTable0_13, ((MR_Box) (hlds__arg_info__HeadVar__1_1)), &hlds__arg_info__conv0_PredInfo0_14);
            }
#line 182 "arg_info.m"
            hlds__arg_info__PredInfo0_14 = ((MR_Word) hlds__arg_info__conv0_PredInfo0_14);
#line 183 "arg_info.m"
            {
#line 183 "arg_info.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__ProcTable0_15);
            }
#line 184 "arg_info.m"
            {
#line 184 "arg_info.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__Markers_16);
            }
#line 185 "arg_info.m"
            {
#line 185 "arg_info.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__arg_info__PredInfo0_14, &hlds__arg_info__ArgTypes_17);
            }
#line 1853 "hlds.arg_info.c"
            hlds__arg_info__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 186 "arg_info.m"
            {
#line 186 "arg_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__arg_info__TypeCtorInfo_30_30, hlds__arg_info__ProcTable0_15, hlds__arg_info__ProcId_10, &hlds__arg_info__conv1_ProcInfo0_18);
            }
#line 186 "arg_info.m"
            hlds__arg_info__ProcInfo0_18 = ((MR_Word) hlds__arg_info__conv1_ProcInfo0_18);
#line 188 "arg_info.m"
            {
#line 188 "arg_info.m"
              hlds__arg_info__generate_proc_arg_info_5_p_0(hlds__arg_info__Markers_16, hlds__arg_info__ArgTypes_17, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, hlds__arg_info__ProcInfo0_18, &hlds__arg_info__ProcInfo_19);
            }
#line 191 "arg_info.m"
            {
#line 191 "arg_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__arg_info__TypeCtorInfo_30_30, hlds__arg_info__ProcId_10, ((MR_Box) (hlds__arg_info__ProcInfo_19)), hlds__arg_info__ProcTable0_15, &hlds__arg_info__ProcTable_20);
            }
#line 192 "arg_info.m"
            {
#line 192 "arg_info.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__arg_info__ProcTable_20, hlds__arg_info__PredInfo0_14, &hlds__arg_info__PredInfo_21);
            }
#line 193 "arg_info.m"
            {
#line 193 "arg_info.m"
              mercury__map__det_update_4_p_0(hlds__arg_info__TypeCtorInfo_27_27, hlds__arg_info__TypeCtorInfo_28_28, ((MR_Box) (hlds__arg_info__HeadVar__1_1)), ((MR_Box) (hlds__arg_info__PredInfo_21)), hlds__arg_info__PredTable0_13, &hlds__arg_info__PredTable_22);
            }
#line 194 "arg_info.m"
            {
#line 194 "arg_info.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(hlds__arg_info__PredTable_22, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3, &hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25);
            }
#line 195 "arg_info.m"
            /* direct tailcall eliminated */
#line 195 "arg_info.m"
            {
#line 195 "arg_info.m"
              MR_Word hlds__arg_info__HeadVar__2__tmp_copy_2 = hlds__arg_info__ProcIds_11;
#line 195 "arg_info.m"
              MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_25_25;

#line 195 "arg_info.m"
              hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 195 "arg_info.m"
              hlds__arg_info__HeadVar__2_2 = hlds__arg_info__HeadVar__2__tmp_copy_2;
#line 195 "arg_info.m"
            }
#line 195 "arg_info.m"
            continue;
#line 180 "arg_info.m"
          }
#line 179 "arg_info.m"
      }
#line 179 "arg_info.m"
      break;
#line 179 "arg_info.m"
    }
#line 176 "arg_info.m"
}

#line 165 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
#line 165 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 165 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2,
#line 165 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_ModuleInfo_3)
#line 165 "arg_info.m"
{
#line 168 "arg_info.m"
  while (MR_TRUE)
#line 168 "arg_info.m"
    {
#line 168 "arg_info.m"
      /* tailcall optimized into a loop */
#line 168 "arg_info.m"
      {
#line 168 "arg_info.m"
        MR_bool hlds__arg_info__succeeded;

#line 168 "arg_info.m"
        if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "arg_info.m"
          *hlds__arg_info__STATE_VARIABLE_ModuleInfo_3 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2;
#line 168 "arg_info.m"
        else
#line 169 "arg_info.m"
          {
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__PredTable_10;
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__PredInfo_11;
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__V_14_14;
#line 169 "arg_info.m"
            MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15;
#line 171 "arg_info.m"
            MR_Box hlds__arg_info__conv0_PredInfo_11;

#line 170 "arg_info.m"
            {
#line 170 "arg_info.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2, &hlds__arg_info__PredTable_10);
            }
#line 171 "arg_info.m"
            {
#line 171 "arg_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__arg_info__PredTable_10, ((MR_Box) (hlds__arg_info__PredId_7)), &hlds__arg_info__conv0_PredInfo_11);
            }
#line 171 "arg_info.m"
            hlds__arg_info__PredInfo_11 = ((MR_Word) hlds__arg_info__conv0_PredInfo_11);
#line 172 "arg_info.m"
            {
#line 172 "arg_info.m"
              hlds__arg_info__V_14_14 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__arg_info__PredInfo_11);
            }
#line 172 "arg_info.m"
            {
#line 172 "arg_info.m"
              hlds__arg_info__generate_proc_list_arg_info_4_p_0(hlds__arg_info__PredId_7, hlds__arg_info__V_14_14, hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2, &hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 174 "arg_info.m"
            /* direct tailcall eliminated */
#line 174 "arg_info.m"
            {
#line 174 "arg_info.m"
              MR_Word hlds__arg_info__HeadVar__1__tmp_copy_1 = hlds__arg_info__PredIds_8;
#line 174 "arg_info.m"
              MR_Word hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_15_15;

#line 174 "arg_info.m"
              hlds__arg_info__STATE_VARIABLE_ModuleInfo_0_2 = hlds__arg_info__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 174 "arg_info.m"
              hlds__arg_info__HeadVar__1_1 = hlds__arg_info__HeadVar__1__tmp_copy_1;
#line 174 "arg_info.m"
            }
#line 174 "arg_info.m"
            continue;
#line 169 "arg_info.m"
          }
#line 168 "arg_info.m"
      }
#line 168 "arg_info.m"
      break;
#line 168 "arg_info.m"
    }
#line 165 "arg_info.m"
}

#line 132 "arg_info.m"
void MR_CALL 
hlds__arg_info__partition_generic_call_args_7_p_0(
#line 132 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_8,
#line 132 "arg_info.m"
  MR_Word hlds__arg_info__Vars_9,
#line 132 "arg_info.m"
  MR_Word hlds__arg_info__Types_10,
#line 132 "arg_info.m"
  MR_Word hlds__arg_info__Modes_11,
#line 132 "arg_info.m"
  MR_Word * hlds__arg_info__Inputs_12,
#line 132 "arg_info.m"
  MR_Word * hlds__arg_info__Outputs_13,
#line 132 "arg_info.m"
  MR_Word * hlds__arg_info__Unuseds_14)
#line 132 "arg_info.m"
{
#line 515 "arg_info.m"
  {
#line 515 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__TypeInfo_30_37 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_25_25;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_27_27;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_29_29;

#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_25_25 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 512 "arg_info.m"
    {
#line 512 "arg_info.m"
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 510 "arg_info.m"
    {
#line 510 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_9, hlds__arg_info__Types_10, hlds__arg_info__Modes_11, hlds__arg_info__ModuleInfo_8, hlds__arg_info__V_25_25, &hlds__arg_info__STATE_VARIABLE_Inputs_19_26, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Outputs_21_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_30);
    }
#line 515 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 514 "arg_info.m"
      {
#line 514 "arg_info.m"
        *hlds__arg_info__Unuseds_14 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
#line 514 "arg_info.m"
        *hlds__arg_info__Outputs_13 = hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
#line 514 "arg_info.m"
        *hlds__arg_info__Inputs_12 = hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
#line 514 "arg_info.m"
      }
#line 515 "arg_info.m"
    else
#line 516 "arg_info.m"
      {
#line 516 "arg_info.m"
        {
#line 516 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
#line 516 "arg_info.m"
          return;
        }
#line 516 "arg_info.m"
      }
#line 515 "arg_info.m"
  }
#line 132 "arg_info.m"
}

#line 124 "arg_info.m"
void MR_CALL 
hlds__arg_info__partition_proc_call_args_7_p_0(
#line 124 "arg_info.m"
  MR_Word hlds__arg_info__ProcInfo_8,
#line 124 "arg_info.m"
  MR_Word hlds__arg_info__VarTypes_9,
#line 124 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_10,
#line 124 "arg_info.m"
  MR_Word hlds__arg_info__Vars_11,
#line 124 "arg_info.m"
  MR_Word * hlds__arg_info__Inputs_12,
#line 124 "arg_info.m"
  MR_Word * hlds__arg_info__Outputs_13,
#line 124 "arg_info.m"
  MR_Word * hlds__arg_info__Unuseds_14)
#line 124 "arg_info.m"
{
#line 492 "arg_info.m"
  {
#line 492 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 492 "arg_info.m"
    MR_Word hlds__arg_info__Modes_15;
#line 492 "arg_info.m"
    MR_Word hlds__arg_info__Types_16;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_28;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_30;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_32;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__TypeInfo_30_39;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_27_27;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_29_29;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_31_31;

#line 493 "arg_info.m"
    {
#line 493 "arg_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__ProcInfo_8, &hlds__arg_info__Modes_15);
    }
#line 494 "arg_info.m"
    {
#line 494 "arg_info.m"
      hlds__vartypes__lookup_var_types_3_p_0(hlds__arg_info__VarTypes_9, hlds__arg_info__Vars_11, &hlds__arg_info__Types_16);
    }
#line 2150 "hlds.arg_info.c"
    hlds__arg_info__TypeInfo_30_39 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
#line 512 "arg_info.m"
    {
#line 512 "arg_info.m"
      hlds__arg_info__V_31_31 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_39);
    }
#line 510 "arg_info.m"
    {
#line 510 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_11, hlds__arg_info__Types_16, hlds__arg_info__Modes_15, hlds__arg_info__ModuleInfo_10, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Inputs_19_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Outputs_21_30, hlds__arg_info__V_31_31, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_32);
    }
#line 515 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 514 "arg_info.m"
      {
#line 514 "arg_info.m"
        *hlds__arg_info__Unuseds_14 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_32;
#line 514 "arg_info.m"
        *hlds__arg_info__Outputs_13 = hlds__arg_info__STATE_VARIABLE_Outputs_21_30;
#line 514 "arg_info.m"
        *hlds__arg_info__Inputs_12 = hlds__arg_info__STATE_VARIABLE_Inputs_19_28;
#line 514 "arg_info.m"
      }
#line 515 "arg_info.m"
    else
#line 516 "arg_info.m"
      {
#line 516 "arg_info.m"
        {
#line 516 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
#line 516 "arg_info.m"
          return;
        }
#line 516 "arg_info.m"
      }
#line 492 "arg_info.m"
  }
#line 124 "arg_info.m"
}

#line 115 "arg_info.m"
void MR_CALL 
hlds__arg_info__partition_proc_args_5_p_0(
#line 115 "arg_info.m"
  MR_Word hlds__arg_info__ProcInfo_6,
#line 115 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_7,
#line 115 "arg_info.m"
  MR_Word * hlds__arg_info__Inputs_8,
#line 115 "arg_info.m"
  MR_Word * hlds__arg_info__Outputs_9,
#line 115 "arg_info.m"
  MR_Word * hlds__arg_info__Unuseds_10)
#line 115 "arg_info.m"
{
#line 483 "arg_info.m"
  {
#line 483 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 483 "arg_info.m"
    MR_Word hlds__arg_info__Vars_11;
#line 483 "arg_info.m"
    MR_Word hlds__arg_info__Modes_12;
#line 483 "arg_info.m"
    MR_Word hlds__arg_info__VarTypes_13;
#line 483 "arg_info.m"
    MR_Word hlds__arg_info__Types_14;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
#line 515 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__TypeInfo_30_37;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_25_25;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_27_27;
#line 510 "arg_info.m"
    MR_Word hlds__arg_info__V_29_29;

#line 484 "arg_info.m"
    {
#line 484 "arg_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__Vars_11);
    }
#line 485 "arg_info.m"
    {
#line 485 "arg_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__Modes_12);
    }
#line 486 "arg_info.m"
    {
#line 486 "arg_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__arg_info__ProcInfo_6, &hlds__arg_info__VarTypes_13);
    }
#line 487 "arg_info.m"
    {
#line 487 "arg_info.m"
      hlds__vartypes__lookup_var_types_3_p_0(hlds__arg_info__VarTypes_13, hlds__arg_info__Vars_11, &hlds__arg_info__Types_14);
    }
#line 2264 "hlds.arg_info.c"
    hlds__arg_info__TypeInfo_30_37 = (MR_Word) &hlds__arg_info_scalar_common_1[0];
#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_25_25 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 511 "arg_info.m"
    {
#line 511 "arg_info.m"
      hlds__arg_info__V_27_27 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 512 "arg_info.m"
    {
#line 512 "arg_info.m"
      hlds__arg_info__V_29_29 = mercury__set__init_0_f_0(hlds__arg_info__TypeInfo_30_37);
    }
#line 510 "arg_info.m"
    {
#line 510 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(hlds__arg_info__Vars_11, hlds__arg_info__Types_14, hlds__arg_info__Modes_12, hlds__arg_info__ModuleInfo_7, hlds__arg_info__V_25_25, &hlds__arg_info__STATE_VARIABLE_Inputs_19_26, hlds__arg_info__V_27_27, &hlds__arg_info__STATE_VARIABLE_Outputs_21_28, hlds__arg_info__V_29_29, &hlds__arg_info__STATE_VARIABLE_Unuseds_23_30);
    }
#line 515 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 514 "arg_info.m"
      {
#line 514 "arg_info.m"
        *hlds__arg_info__Unuseds_10 = hlds__arg_info__STATE_VARIABLE_Unuseds_23_30;
#line 514 "arg_info.m"
        *hlds__arg_info__Outputs_9 = hlds__arg_info__STATE_VARIABLE_Outputs_21_28;
#line 514 "arg_info.m"
        *hlds__arg_info__Inputs_8 = hlds__arg_info__STATE_VARIABLE_Inputs_19_26;
#line 514 "arg_info.m"
      }
#line 515 "arg_info.m"
    else
#line 516 "arg_info.m"
      {
#line 516 "arg_info.m"
        {
#line 516 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
#line 516 "arg_info.m"
          return;
        }
#line 516 "arg_info.m"
      }
#line 483 "arg_info.m"
  }
#line 115 "arg_info.m"
}

#line 106 "arg_info.m"
void MR_CALL 
hlds__arg_info__partition_args_3_p_0(
#line 106 "arg_info.m"
  MR_Word hlds__arg_info__Args_4,
#line 106 "arg_info.m"
  MR_Word * hlds__arg_info__Ins_5,
#line 106 "arg_info.m"
  MR_Word * hlds__arg_info__Outs_6)
#line 106 "arg_info.m"
{
#line 462 "arg_info.m"
  {
#line 462 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 462 "arg_info.m"
    MR_Word hlds__arg_info__Outs0_7;
#line 462 "arg_info.m"
    MR_Word hlds__arg_info__Unuseds_8;

#line 463 "arg_info.m"
    {
#line 463 "arg_info.m"
      hlds__arg_info__partition_args_4_p_0(hlds__arg_info__Args_4, hlds__arg_info__Ins_5, &hlds__arg_info__Outs0_7, &hlds__arg_info__Unuseds_8);
    }
#line 464 "arg_info.m"
    {
#line 464 "arg_info.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__arg_info_scalar_common_2[0], hlds__arg_info__Outs0_7, hlds__arg_info__Unuseds_8, hlds__arg_info__Outs_6);
    }
#line 462 "arg_info.m"
  }
#line 106 "arg_info.m"
}

#line 97 "arg_info.m"
void MR_CALL 
hlds__arg_info__partition_args_4_p_0(
#line 97 "arg_info.m"
  MR_Word hlds__arg_info__HeadVar__1_1,
#line 97 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__2_2,
#line 97 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__3_3,
#line 97 "arg_info.m"
  MR_Word * hlds__arg_info__HeadVar__4_4)
#line 97 "arg_info.m"
{
#line 466 "arg_info.m"
  {
#line 466 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 466 "arg_info.m"
    if ((hlds__arg_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "arg_info.m"
      {
#line 466 "arg_info.m"
        *hlds__arg_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "arg_info.m"
        *hlds__arg_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "arg_info.m"
        *hlds__arg_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "arg_info.m"
      }
#line 466 "arg_info.m"
    else
#line 467 "arg_info.m"
      {
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__ArgInfo_6;
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 1)));
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__ArgMode_12;
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__arg_info__HeadVar__1_1, (MR_Integer) 0)));
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_Ins_17_17;
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_Outs_18_18;
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
#line 467 "arg_info.m"
        MR_Word hlds__arg_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, (MR_Integer) 0)));
#line 469 "arg_info.m"
        MR_Word hlds__arg_info__V_11_11;

#line 467 "arg_info.m"
        hlds__arg_info__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, (MR_Integer) 1)));
#line 468 "arg_info.m"
        {
#line 468 "arg_info.m"
          hlds__arg_info__partition_args_4_p_0(hlds__arg_info__Rest_7, &hlds__arg_info__STATE_VARIABLE_Ins_17_17, &hlds__arg_info__STATE_VARIABLE_Outs_18_18, &hlds__arg_info__STATE_VARIABLE_Unuseds_19_19);
        }
#line 469 "arg_info.m"
        hlds__arg_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_6, (MR_Integer) 0)));
#line 469 "arg_info.m"
        hlds__arg_info__ArgMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__ArgInfo_6, (MR_Integer) 1)));
#line 473 "arg_info.m"
#line 473 "arg_info.m"
        switch (hlds__arg_info__ArgMode_12) {
#line 473 "arg_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 473 "arg_info.m"
          case (MR_Integer) 0:
#line 471 "arg_info.m"
            {
#line 472 "arg_info.m"
              {
#line 472 "arg_info.m"
                MR_Word base;
#line 472 "arg_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "arg_info.m"
                *hlds__arg_info__HeadVar__2_2 = base;
#line 472 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
#line 472 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Ins_17_17));
#line 472 "arg_info.m"
              }
#line 471 "arg_info.m"
              *hlds__arg_info__HeadVar__3_3 = hlds__arg_info__STATE_VARIABLE_Outs_18_18;
#line 471 "arg_info.m"
              *hlds__arg_info__HeadVar__4_4 = hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
#line 471 "arg_info.m"
            }
#line 473 "arg_info.m"
            break;
#line 473 "arg_info.m"
          case (MR_Integer) 1:
#line 474 "arg_info.m"
            {
#line 475 "arg_info.m"
              {
#line 475 "arg_info.m"
                MR_Word base;
#line 475 "arg_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "arg_info.m"
                *hlds__arg_info__HeadVar__3_3 = base;
#line 475 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
#line 475 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Outs_18_18));
#line 475 "arg_info.m"
              }
#line 474 "arg_info.m"
              *hlds__arg_info__HeadVar__2_2 = hlds__arg_info__STATE_VARIABLE_Ins_17_17;
#line 474 "arg_info.m"
              *hlds__arg_info__HeadVar__4_4 = hlds__arg_info__STATE_VARIABLE_Unuseds_19_19;
#line 474 "arg_info.m"
            }
#line 473 "arg_info.m"
            break;
#line 473 "arg_info.m"
          case (MR_Integer) 2:
#line 477 "arg_info.m"
            {
#line 478 "arg_info.m"
              {
#line 478 "arg_info.m"
                MR_Word base;
#line 478 "arg_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "arg_info.m"
                *hlds__arg_info__HeadVar__4_4 = base;
#line 478 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__arg_info__V_16_16));
#line 478 "arg_info.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__arg_info__STATE_VARIABLE_Unuseds_19_19));
#line 478 "arg_info.m"
              }
#line 477 "arg_info.m"
              *hlds__arg_info__HeadVar__2_2 = hlds__arg_info__STATE_VARIABLE_Ins_17_17;
#line 477 "arg_info.m"
              *hlds__arg_info__HeadVar__3_3 = hlds__arg_info__STATE_VARIABLE_Outs_18_18;
#line 477 "arg_info.m"
            }
#line 473 "arg_info.m"
            break;
#line 473 "arg_info.m"
        }
#line 467 "arg_info.m"
      }
#line 466 "arg_info.m"
  }
#line 97 "arg_info.m"
}

#line 89 "arg_info.m"
void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(
#line 89 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_10,
#line 89 "arg_info.m"
  MR_Word hlds__arg_info__Vars_11,
#line 89 "arg_info.m"
  MR_Word hlds__arg_info__Modes_12,
#line 89 "arg_info.m"
  MR_Word hlds__arg_info__Types_13,
#line 89 "arg_info.m"
  MR_Word hlds__arg_info__ArgRegTypes_14,
#line 89 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVarsR_19,
#line 89 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVarsF_20,
#line 89 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVarsR_21,
#line 89 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVarsF_22)
#line 89 "arg_info.m"
{
#line 419 "arg_info.m"
  {
#line 419 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 419 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_InVarsR_23_23;
#line 419 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_InVarsF_24_24;
#line 419 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25;
#line 419 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26;

#line 415 "arg_info.m"
    {
#line 415 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(hlds__arg_info__ModuleInfo_10, hlds__arg_info__Vars_11, hlds__arg_info__Modes_12, hlds__arg_info__Types_13, hlds__arg_info__ArgRegTypes_14, &hlds__arg_info__STATE_VARIABLE_InVarsR_23_23, &hlds__arg_info__STATE_VARIABLE_InVarsF_24_24, &hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25, &hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26);
    }
#line 419 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 418 "arg_info.m"
      {
#line 418 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_OutVarsF_22 = hlds__arg_info__STATE_VARIABLE_OutVarsF_26_26;
#line 418 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_OutVarsR_21 = hlds__arg_info__STATE_VARIABLE_OutVarsR_25_25;
#line 418 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_InVarsF_20 = hlds__arg_info__STATE_VARIABLE_InVarsF_24_24;
#line 418 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_InVarsR_19 = hlds__arg_info__STATE_VARIABLE_InVarsR_23_23;
#line 418 "arg_info.m"
      }
#line 419 "arg_info.m"
    else
#line 420 "arg_info.m"
      {
#line 420 "arg_info.m"
        {
#line 420 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars_sep_regs\'/9", (MR_String) "length mismatch");
#line 420 "arg_info.m"
          return;
        }
#line 420 "arg_info.m"
      }
#line 419 "arg_info.m"
  }
#line 89 "arg_info.m"
}

#line 80 "arg_info.m"
void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_6_p_0(
#line 80 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_7,
#line 80 "arg_info.m"
  MR_Word hlds__arg_info__Vars_8,
#line 80 "arg_info.m"
  MR_Word hlds__arg_info__Modes_9,
#line 80 "arg_info.m"
  MR_Word hlds__arg_info__Types_10,
#line 80 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_InVars_13,
#line 80 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_OutVars_14)
#line 80 "arg_info.m"
{
#line 383 "arg_info.m"
  {
#line 383 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 383 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_InVars_16_16;
#line 383 "arg_info.m"
    MR_Word hlds__arg_info__STATE_VARIABLE_OutVars_18_18;

#line 379 "arg_info.m"
    {
#line 379 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(hlds__arg_info__ModuleInfo_7, hlds__arg_info__Vars_8, hlds__arg_info__Modes_9, hlds__arg_info__Types_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__arg_info__STATE_VARIABLE_InVars_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__arg_info__STATE_VARIABLE_OutVars_18_18);
    }
#line 383 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 382 "arg_info.m"
      {
#line 382 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_OutVars_14 = hlds__arg_info__STATE_VARIABLE_OutVars_18_18;
#line 382 "arg_info.m"
        *hlds__arg_info__STATE_VARIABLE_InVars_13 = hlds__arg_info__STATE_VARIABLE_InVars_16_16;
#line 382 "arg_info.m"
      }
#line 383 "arg_info.m"
    else
#line 384 "arg_info.m"
      {
#line 384 "arg_info.m"
        {
#line 384 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", (MR_String) "length mismatch");
#line 384 "arg_info.m"
          return;
        }
#line 384 "arg_info.m"
      }
#line 383 "arg_info.m"
  }
#line 80 "arg_info.m"
}

#line 73 "arg_info.m"
void MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_6_p_0(
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_7,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info___VarTypes_8,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__GenericCall_9,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__ArgVars_10,
#line 73 "arg_info.m"
  MR_Word hlds__arg_info__MaybeArgRegs_11,
#line 73 "arg_info.m"
  MR_Word * hlds__arg_info__ArgRegTypes_12)
#line 73 "arg_info.m"
{
#line 345 "arg_info.m"
  {
#line 345 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;

#line 345 "arg_info.m"
    {
#line 345 "arg_info.m"
      hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(hlds__arg_info__ModuleInfo_7, hlds__arg_info__GenericCall_9, hlds__arg_info__ArgVars_10, hlds__arg_info__MaybeArgRegs_11, hlds__arg_info__ArgRegTypes_12);
    }
#line 345 "arg_info.m"
  }
#line 73 "arg_info.m"
}

#line 67 "arg_info.m"
void MR_CALL 
hlds__arg_info__make_arg_infos_6_p_0(
#line 67 "arg_info.m"
  MR_Word hlds__arg_info__ArgTypes_7,
#line 67 "arg_info.m"
  MR_Word hlds__arg_info__ArgModes_8,
#line 67 "arg_info.m"
  MR_Word hlds__arg_info__ArgRegTypes_9,
#line 67 "arg_info.m"
  MR_Word hlds__arg_info__CodeModel_10,
#line 67 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_11,
#line 67 "arg_info.m"
  MR_Word * hlds__arg_info__ArgInfo_12)
#line 67 "arg_info.m"
{
#line 279 "arg_info.m"
  {
#line 279 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 279 "arg_info.m"
    MR_Integer hlds__arg_info__FirstOutRegR_13;
#line 298 "arg_info.m"
    MR_Word hlds__arg_info__ArgInfoPrime_17;

#line 283 "arg_info.m"
#line 283 "arg_info.m"
    switch (hlds__arg_info__CodeModel_10) {
#line 283 "arg_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 283 "arg_info.m"
      case (MR_Integer) 0:
#line 283 "arg_info.m"
      case (MR_Integer) 2:
#line 287 "arg_info.m"
        hlds__arg_info__FirstOutRegR_13 = (MR_Integer) 1;
#line 283 "arg_info.m"
        break;
#line 283 "arg_info.m"
      case (MR_Integer) 1:
#line 282 "arg_info.m"
        hlds__arg_info__FirstOutRegR_13 = (MR_Integer) 2;
#line 283 "arg_info.m"
        break;
#line 283 "arg_info.m"
    }
#line 293 "arg_info.m"
    {
#line 293 "arg_info.m"
      hlds__arg_info__succeeded = hlds__arg_info__make_arg_infos_9_p_0(hlds__arg_info__ArgModes_8, hlds__arg_info__ArgTypes_7, hlds__arg_info__ArgRegTypes_9, (MR_Integer) 1, (MR_Integer) 1, hlds__arg_info__FirstOutRegR_13, (MR_Integer) 1, hlds__arg_info__ModuleInfo_11, &hlds__arg_info__ArgInfoPrime_17);
    }
#line 298 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 297 "arg_info.m"
      *hlds__arg_info__ArgInfo_12 = hlds__arg_info__ArgInfoPrime_17;
#line 298 "arg_info.m"
    else
#line 299 "arg_info.m"
      {
#line 299 "arg_info.m"
        {
#line 299 "arg_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.arg_info", (MR_String) "predicate \140hlds.arg_info.make_arg_infos\'/6", (MR_String) "length mismatch");
#line 299 "arg_info.m"
          return;
        }
#line 299 "arg_info.m"
      }
#line 279 "arg_info.m"
  }
#line 67 "arg_info.m"
}

#line 264 "arg_info.m"
static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
#line 264 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 264 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1,
#line 264 "arg_info.m"
  MR_Box * hlds__arg_info__wrapper_arg_2)
#line 264 "arg_info.m"
{
#line 264 "arg_info.m"
  {
#line 264 "arg_info.m"
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
#line 264 "arg_info.m"
    MR_Word hlds__arg_info__conv0_RegType_6;

#line 264 "arg_info.m"
    {
#line 264 "arg_info.m"
      hlds__arg_info__standard_reg_type_for_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__closure, (MR_Integer) 3))), ((MR_Word) hlds__arg_info__wrapper_arg_1), &hlds__arg_info__conv0_RegType_6);
    }
#line 264 "arg_info.m"
    *hlds__arg_info__wrapper_arg_2 = ((MR_Box) (hlds__arg_info__conv0_RegType_6));
#line 264 "arg_info.m"
  }
#line 264 "arg_info.m"
}

#line 60 "arg_info.m"
void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0(
#line 60 "arg_info.m"
  MR_Word hlds__arg_info__ArgTypes_6,
#line 60 "arg_info.m"
  MR_Word hlds__arg_info__ArgModes_7,
#line 60 "arg_info.m"
  MR_Word hlds__arg_info__CodeModel_8,
#line 60 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_9,
#line 60 "arg_info.m"
  MR_Word * hlds__arg_info__ArgInfo_10)
#line 60 "arg_info.m"
{
#line 254 "arg_info.m"
  {
#line 254 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 254 "arg_info.m"
    MR_Word hlds__arg_info__Globals_11;
#line 254 "arg_info.m"
    MR_Word hlds__arg_info__FloatRegs_12;
#line 254 "arg_info.m"
    MR_Word hlds__arg_info__FloatRegType_13;
#line 254 "arg_info.m"
    MR_Word hlds__arg_info__RegTypes_14;
#line 254 "arg_info.m"
    MR_Word hlds__arg_info__V_16_16;

#line 255 "arg_info.m"
    {
#line 255 "arg_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_9, &hlds__arg_info__Globals_11);
    }
#line 256 "arg_info.m"
    {
#line 256 "arg_info.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_11, (MR_Integer) 251, &hlds__arg_info__FloatRegs_12);
    }
#line 260 "arg_info.m"
#line 260 "arg_info.m"
    switch (hlds__arg_info__FloatRegs_12) {
#line 260 "arg_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 260 "arg_info.m"
      case (MR_Integer) 0:
#line 262 "arg_info.m"
        hlds__arg_info__FloatRegType_13 = (MR_Integer) 0;
#line 260 "arg_info.m"
        break;
#line 260 "arg_info.m"
      case (MR_Integer) 1:
#line 259 "arg_info.m"
        hlds__arg_info__FloatRegType_13 = (MR_Integer) 1;
#line 260 "arg_info.m"
        break;
#line 260 "arg_info.m"
    }
#line 264 "arg_info.m"
    {
#line 264 "arg_info.m"
      hlds__arg_info__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 264 "arg_info.m"
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_4[0]));
#line 264 "arg_info.m"
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 1) = ((MR_Box) (hlds__arg_info__make_standard_arg_infos_5_p_0_1));
#line 264 "arg_info.m"
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 264 "arg_info.m"
      MR_hl_field(MR_mktag(0), hlds__arg_info__V_16_16, 3) = ((MR_Box) (hlds__arg_info__FloatRegType_13));
#line 264 "arg_info.m"
    }
#line 264 "arg_info.m"
    {
#line 264 "arg_info.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_16_16, hlds__arg_info__ArgTypes_6, &hlds__arg_info__RegTypes_14);
    }
#line 265 "arg_info.m"
    {
#line 265 "arg_info.m"
      hlds__arg_info__make_arg_infos_6_p_0(hlds__arg_info__ArgTypes_6, hlds__arg_info__ArgModes_7, hlds__arg_info__RegTypes_14, hlds__arg_info__CodeModel_8, hlds__arg_info__ModuleInfo_9, hlds__arg_info__ArgInfo_10);
    }
#line 254 "arg_info.m"
  }
#line 60 "arg_info.m"
}

#line 207 "arg_info.m"
static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__closure_arg,
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_1,
#line 207 "arg_info.m"
  MR_Box hlds__arg_info__wrapper_arg_2,
#line 207 "arg_info.m"
  MR_Box * hlds__arg_info__wrapper_arg_3)
#line 207 "arg_info.m"
{
#line 207 "arg_info.m"
  {
#line 207 "arg_info.m"
    MR_Box hlds__arg_info__closure = hlds__arg_info__closure_arg;
#line 207 "arg_info.m"
    MR_Word hlds__arg_info__conv0_RegType_8;

#line 207 "arg_info.m"
    {
#line 207 "arg_info.m"
      hlds__arg_info__reg_type_for_headvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__arg_info__closure, (MR_Integer) 3))), ((MR_Word) hlds__arg_info__wrapper_arg_1), ((MR_Word) hlds__arg_info__wrapper_arg_2), &hlds__arg_info__conv0_RegType_8);
    }
#line 207 "arg_info.m"
    *hlds__arg_info__wrapper_arg_3 = ((MR_Box) (hlds__arg_info__conv0_RegType_8));
#line 207 "arg_info.m"
  }
#line 207 "arg_info.m"
}

#line 52 "arg_info.m"
void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0(
#line 52 "arg_info.m"
  MR_Word hlds__arg_info__Markers_6,
#line 52 "arg_info.m"
  MR_Word hlds__arg_info__ArgTypes_7,
#line 52 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo_8,
#line 52 "arg_info.m"
  MR_Word hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18,
#line 52 "arg_info.m"
  MR_Word * hlds__arg_info__STATE_VARIABLE_ProcInfo_19)
#line 52 "arg_info.m"
{
#line 197 "arg_info.m"
  {
#line 197 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__Globals_10;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__UseFloatRegs_11;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__HeadVars_12;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__ArgRegTypes_14;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__ArgModes_15;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__CodeModel_16;
#line 197 "arg_info.m"
    MR_Word hlds__arg_info__ArgInfo_17;
#line 204 "arg_info.m"
    MR_Word hlds__arg_info__V_21_21;

#line 198 "arg_info.m"
    {
#line 198 "arg_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__arg_info__ModuleInfo_8, &hlds__arg_info__Globals_10);
    }
#line 199 "arg_info.m"
    {
#line 199 "arg_info.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__arg_info__Globals_10, (MR_Integer) 251, &hlds__arg_info__UseFloatRegs_11);
    }
#line 200 "arg_info.m"
    {
#line 200 "arg_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__HeadVars_12);
    }
#line 202 "arg_info.m"
    hlds__arg_info__succeeded = (hlds__arg_info__UseFloatRegs_11 == (MR_Integer) 1);
#line 202 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 202 "arg_info.m"
      {
#line 204 "arg_info.m"
        hlds__arg_info__V_21_21 = (MR_Integer) 10;
#line 204 "arg_info.m"
        {
#line 204 "arg_info.m"
          hlds__arg_info__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__arg_info__Markers_6, hlds__arg_info__V_21_21);
        }
#line 204 "arg_info.m"
        hlds__arg_info__succeeded = !(hlds__arg_info__succeeded);
#line 202 "arg_info.m"
      }
#line 209 "arg_info.m"
    if (hlds__arg_info__succeeded)
#line 206 "arg_info.m"
      {
#line 206 "arg_info.m"
        MR_Word hlds__arg_info__RegR_HeadVars_13;
#line 206 "arg_info.m"
        MR_Word hlds__arg_info__V_22_22;

#line 206 "arg_info.m"
        {
#line 206 "arg_info.m"
          hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__RegR_HeadVars_13);
        }
#line 207 "arg_info.m"
        {
#line 207 "arg_info.m"
          hlds__arg_info__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "arg_info.m"
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_3[0]));
#line 207 "arg_info.m"
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 1) = ((MR_Box) (hlds__arg_info__generate_proc_arg_info_5_p_0_1));
#line 207 "arg_info.m"
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "arg_info.m"
          MR_hl_field(MR_mktag(0), hlds__arg_info__V_22_22, 3) = ((MR_Box) (hlds__arg_info__RegR_HeadVars_13));
#line 207 "arg_info.m"
        }
#line 207 "arg_info.m"
        {
#line 207 "arg_info.m"
          mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__arg_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_22_22, hlds__arg_info__HeadVars_12, hlds__arg_info__ArgTypes_7, &hlds__arg_info__ArgRegTypes_14);
        }
#line 206 "arg_info.m"
      }
#line 209 "arg_info.m"
    else
#line 210 "arg_info.m"
      {
#line 210 "arg_info.m"
        MR_Integer hlds__arg_info__V_23_23;

#line 210 "arg_info.m"
        {
#line 210 "arg_info.m"
          hlds__arg_info__V_23_23 = mercury__list__length_1_f_0((MR_Word) &hlds__arg_info_scalar_common_1[0], hlds__arg_info__HeadVars_12);
        }
#line 210 "arg_info.m"
        {
#line 210 "arg_info.m"
          mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0, hlds__arg_info__V_23_23, ((MR_Box) ((MR_Integer) 0)), &hlds__arg_info__ArgRegTypes_14);
        }
#line 210 "arg_info.m"
      }
#line 212 "arg_info.m"
    {
#line 212 "arg_info.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, &hlds__arg_info__ArgModes_15);
    }
#line 213 "arg_info.m"
    {
#line 213 "arg_info.m"
      hlds__arg_info__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18);
    }
#line 214 "arg_info.m"
    {
#line 214 "arg_info.m"
      hlds__arg_info__make_arg_infos_6_p_0(hlds__arg_info__ArgTypes_7, hlds__arg_info__ArgModes_15, hlds__arg_info__ArgRegTypes_14, hlds__arg_info__CodeModel_16, hlds__arg_info__ModuleInfo_8, &hlds__arg_info__ArgInfo_17);
    }
#line 216 "arg_info.m"
    {
#line 216 "arg_info.m"
      hlds__hlds_pred__proc_info_set_arg_info_3_p_0(hlds__arg_info__ArgInfo_17, hlds__arg_info__STATE_VARIABLE_ProcInfo_0_18, hlds__arg_info__STATE_VARIABLE_ProcInfo_19);
    }
#line 197 "arg_info.m"
  }
#line 52 "arg_info.m"
}

#line 47 "arg_info.m"
void MR_CALL 
hlds__arg_info__generate_arg_info_2_p_0(
#line 47 "arg_info.m"
  MR_Word hlds__arg_info__ModuleInfo0_3,
#line 47 "arg_info.m"
  MR_Word * hlds__arg_info__ModuleInfo_4)
#line 47 "arg_info.m"
{
#line 160 "arg_info.m"
  {
#line 160 "arg_info.m"
    MR_bool hlds__arg_info__succeeded;
#line 160 "arg_info.m"
    MR_Word hlds__arg_info__Preds_5;
#line 160 "arg_info.m"
    MR_Word hlds__arg_info__PredIds_6;

#line 161 "arg_info.m"
    {
#line 161 "arg_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__arg_info__ModuleInfo0_3, &hlds__arg_info__Preds_5);
    }
#line 162 "arg_info.m"
    {
#line 162 "arg_info.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__arg_info__Preds_5, &hlds__arg_info__PredIds_6);
    }
#line 163 "arg_info.m"
    {
#line 163 "arg_info.m"
      hlds__arg_info__generate_pred_arg_info_3_p_0(hlds__arg_info__PredIds_6, hlds__arg_info__ModuleInfo0_3, hlds__arg_info__ModuleInfo_4);
    }
#line 160 "arg_info.m"
  }
#line 47 "arg_info.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.arg_info. */
