/*
** Automatically generated from `inst_abstract_unify.m'
** by the Mercury compiler,
** version rotd-2022-04-23
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.inst_abstract_unify.
// :- implementation.

/*
INIT mercury__check_hlds__inst_abstract_unify__init
ENDINIT
*/

#include "check_hlds.inst_abstract_unify.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"




static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word HeadVar__3_3,
  MR_Word Uniq_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_lives_9_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22);

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word ArgInsts_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsIdB_2,
  MR_Word ArgsB_3,
  MR_Word LivesB_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_3_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_8_p_0(
  MR_Word Inst0_9,
  MR_Word Live_10,
  MR_Word Uniq1_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(
  MR_Word Live_9,
  MR_Word Uniq1_10,
  MR_Word Real_11,
  MR_Word Inst0_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word Live_10,
  MR_Word InstVarsA_11,
  MR_Word SubInstA_12,
  MR_Word InstB_13,
  MR_Word Real_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word Live_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word Live_9,
  MR_Word BoundInstsA_10,
  MR_Word BoundInstsB_11,
  MR_Word Real_12,
  MR_Word * BoundInsts_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Live_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
check_hlds__inst_abstract_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__unify_uniq_6_p_0(
  MR_Word Live_7,
  MR_Word Real_8,
  MR_Word Detism_9,
  MR_Word UniqA_10,
  MR_Word UniqB_11,
  MR_Word * Uniq_12);


static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_2[1][5] = {
  /* row   0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};






MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(
  MR_Word Live_12,
  MR_Word InstA0_13,
  MR_Word ConsIdB_14,
  MR_Word ArgInstsB_15,
  MR_Word ArgLives_16,
  MR_Word Real_17,
  MR_Word Type_18,
  MR_Word * Inst_19,
  MR_Word * Detism_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_bool succeeded;
  MR_Word InstA_22;

  check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, InstA0_13, &InstA_22);
  switch (MR_tag((MR_Word) InstA_22)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgInsts_25;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;

            switch (Live_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  ArgInsts_25 = ArgInstsB_15;
                  *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, ArgLives_16, ArgInstsB_15);
                  if (succeeded)
                  {
                    check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_5_p_0(ArgInstsB_15, ArgLives_16, &ArgInsts_25, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              succeeded = check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_4_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_18, ConsIdB_14, ArgInsts_25);
              if (succeeded)
              {
                Var_55 = (MR_Integer) 1;
                Var_56 = (MR_Word) ((MR_Unsigned) 0U);
                Var_59 = (MR_Word) ((MR_Unsigned) 0U);
                *Detism_20 = (MR_Integer) 0;
                {
                  Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ConsIdB_14));
                  MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ArgInsts_25));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
                  MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_55));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_57));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_19 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_20 = (MR_Integer) 6;
            *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_22, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word ArgInsts_60;

        succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_18);
        succeeded = !(succeeded);
        if (succeeded)
        {
          switch (Live_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_8_p_0(ArgInstsB_15, Live_12, Uniq_26, Real_17, &ArgInsts_60, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
              break;
            case (MR_Integer) 0:
              succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_lives_9_p_0(ArgInstsB_15, Live_12, ArgLives_16, Uniq_26, Real_17, &ArgInsts_60, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
              break;
          }
          if (succeeded)
          {
            Var_51 = (MR_Word) ((MR_Unsigned) 0U);
            Var_54 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ConsIdB_14));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ArgInsts_60));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_19 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_52));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word UniqA_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word BoundInstsA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 3))));
            MR_Word BoundInsts_31;
            MR_Word Var_50;

            switch (Live_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word BoundInstsB_32;
                  MR_Word Var_47;

                  {
                    Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ConsIdB_14));
                    MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ArgInstsB_15));
                  }
                  {
                    BoundInstsB_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), BoundInstsB_32, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(MR_mktag(1), BoundInstsB_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_8_p_0((MR_Integer) 1, BoundInstsA_30, BoundInstsB_32, Real_17, &BoundInsts_31, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                }
                break;
              case (MR_Integer) 0:
                succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_lives_9_p_0(BoundInstsA_30, ConsIdB_14, ArgInstsB_15, ArgLives_16, Real_17, &BoundInsts_31, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                break;
            }
            if (succeeded)
            {
              Var_50 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_19 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqA_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_31));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgInsts0_34;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word ArgInsts_61;
            MR_Word UniqA_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (Live_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_8_p_0(Live_12, UniqA_62, Real_17, ArgInstsB_15, &ArgInsts0_34, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                break;
              case (MR_Integer) 0:
                succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_lives_9_p_0(Live_12, UniqA_62, Real_17, ArgLives_16, ArgInstsB_15, &ArgInsts0_34, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                break;
            }
            if (succeeded)
            {
              check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_5_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_18, ConsIdB_14, ArgInsts0_34, &ArgInsts_61);
              Var_43 = (MR_Word) ((MR_Unsigned) 0U);
              Var_46 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (ConsIdB_14));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ArgInsts_61));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_19 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqA_62));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_44));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))));
            MR_Word SubInstA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 2))));
            MR_Word Inst0_37;

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Live_12, SubInstA_36, ConsIdB_14, ArgInstsB_15, ArgLives_16, Real_17, Type_18, &Inst0_37, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_24, Inst0_37, SubInstA_36);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_35));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_37));
                }
              else
                *Inst_19 = Inst0_37;
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word HeadVar__3_3,
  MR_Word Uniq_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Inst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgLive_20;
    MR_Word ArgLives_21;
    MR_Word Inst_24;
    MR_Word Insts_25;
    MR_Word BothLive_28;
    MR_Word Detism1_29;
    MR_Word Detism2_30;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;

    succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgLive_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      ArgLives_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      succeeded = (Live_2 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ArgLive_20 == (MR_Integer) 0);
      if (succeeded)
        BothLive_28 = (MR_Integer) 0;
      else
        BothLive_28 = (MR_Integer) 1;
      succeeded = check_hlds__inst_abstract_unify__make_any_inst_8_p_0(Inst0_17, BothLive_28, Uniq_4, Real_5, &Inst_24, &Detism1_29, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_33_33);
      if (succeeded)
      {
        succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_lives_9_p_0(Insts0_18, Live_2, ArgLives_21, Uniq_4, Real_5, &Insts_25, &Detism2_30, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_25));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_29, Detism2_30, HeadVar__7_7);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_lives_9_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word ArgLive_20;
    MR_Word ArgLives_21;
    MR_Word Inst0_22;
    MR_Word Insts0_23;
    MR_Word Inst_24;
    MR_Word Insts_25;
    MR_Word BothLive_28;
    MR_Word Detism1_29;
    MR_Word Detism2_30;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgLive_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      ArgLives_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      Inst0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      Insts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      succeeded = (Live_1 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ArgLive_20 == (MR_Integer) 0);
      if (succeeded)
        BothLive_28 = (MR_Integer) 0;
      else
        BothLive_28 = (MR_Integer) 1;
      succeeded = check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(BothLive_28, Uniq_2, Real_3, Inst0_22, &Inst_24, &Detism1_29, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_33_33);
      if (succeeded)
      {
        succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_lives_9_p_0(Live_1, Uniq_2, Real_3, ArgLives_21, Insts0_23, &Insts_25, &Detism2_30, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_25));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_29, Detism2_30, HeadVar__7_7);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22)
{
  MR_bool succeeded;
  MR_Word ConsArgs_17;
  MR_Word TypeCtor_10;
  MR_Word ConsDefn_11;
  MR_Word MaybeExistConstraints_16;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_7, &TypeCtor_10);
  if (succeeded)
  {
    succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_6, TypeCtor_10, ConsId_8, &ConsDefn_11);
    if (succeeded)
    {
      MaybeExistConstraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 4))));
      ConsArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 5))));
      succeeded = (ConsArgs_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeExistConstraints_16 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(ConsArgs_17, STATE_VARIABLE_ArgInsts_0_21, STATE_VARIABLE_ArgInsts_22);
  else
    *STATE_VARIABLE_ArgInsts_22 = STATE_VARIABLE_ArgInsts_0_21;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_18;
      MR_Word Insts_19;
      MR_Word Inst1_28;
      MR_Word TypeHOInstInfo_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));

      succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        TypeHOInstInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 3))));
        succeeded = (TypeHOInstInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if (((MR_tag((MR_Word) Inst0_16)) == (MR_Integer) 2))
          {
            MR_Word Uniq_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_16, (MR_Integer) 0))) & (MR_Integer) 7);

            {
              Inst1_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Inst1_28, 0) = (MR_Box) ((MR_Unsigned) (Uniq_31));
              MR_hl_field(MR_mktag(2), Inst1_28, 1) = ((MR_Box) (TypeHOInstInfo_22));
            }
            succeeded = MR_TRUE;
          }
          else
          if (((((MR_tag((MR_Word) Inst0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
          {
            MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_16, (MR_Integer) 1))) & (MR_Integer) 7);

            {
              Inst1_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst1_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Inst1_28, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
              MR_hl_field(MR_mktag(3), Inst1_28, 2) = ((MR_Box) (TypeHOInstInfo_22));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
        Inst_18 = Inst1_28;
      else
        Inst_18 = Inst0_16;
      check_hlds__inst_abstract_unify__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(Var_34, Insts0_17, &Insts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_19));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word ArgInsts_8)
{
  MR_bool succeeded;
  MR_Word ConsArgs_16;
  MR_Word TypeCtor_9;
  MR_Word ConsDefn_10;
  MR_Word MaybeExistConstraints_15;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_9);
  if (succeeded)
  {
    succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_5, TypeCtor_9, ConsId_7, &ConsDefn_10);
    if (succeeded)
    {
      MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 4))));
      ConsArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 5))));
      succeeded = (ConsArgs_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    succeeded = check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_2_3_p_0(ModuleInfo_5, ConsArgs_16, ArgInsts_8);
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word HOInstInfo_21;
        MR_Word TypePredInst_28;
        MR_Word TypeHOInstInfo_25;
        MR_Word Var_30;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        if (((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 2))
        {
          HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_18, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        if (((((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
        {
          HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_18, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            TypeHOInstInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 3))));
            succeeded = (TypeHOInstInfo_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TypePredInst_28 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_25), (MR_Integer) 1));
          }
        }
        if (succeeded)
        {
          MR_Word PredInst_29;

          succeeded = (HOInstInfo_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PredInst_29 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(ModuleInfo_1, PredInst_29, TypePredInst_28);
          }
        }
        else
          succeeded = MR_TRUE;
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_33;
          next_value_of_HeadVar__3_3 = Insts_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsIdB_2,
  MR_Word ArgsB_3,
  MR_Word LivesB_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInstA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInstsA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsIdA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstA_17, (MR_Integer) 0))));
      MR_Word ArgsA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstA_17, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_26, ConsIdB_2);
      if (succeeded)
      {
        MR_Word Args_28;
        MR_Word Var_32;
        MR_Word Var_33;

        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_8_p_0(ArgsA_27, ArgsB_3, LivesB_4, Real_5, &Args_28, HeadVar__7_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          Var_33 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (ConsIdA_26));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Args_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundInstsA_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word InstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstsA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InstB_15;
    MR_Word InstsB_16;
    MR_Word Live_17;
    MR_Word Lives_18;
    MR_Word Inst_20;
    MR_Word Insts_21;
    MR_Word Detism1_24;
    MR_Word Detism2_25;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      InstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      InstsB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Live_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Lives_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(Live_17, InstA_13, InstB_15, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_8_p_0(InstsA_14, InstsB_16, Lives_18, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Live_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Lives_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_27;
      MR_Word Insts_28;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;

      switch (Live_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Inst_27 = Var_35;
            STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_0_4;
          }
          break;
        case (MR_Integer) 0:
          check_hlds__inst_util__make_shared_inst_4_p_0(Var_35, &Inst_27, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_32_32);
          break;
      }
      check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_5_p_0(Var_34, Lives_26, &Insts_28, STATE_VARIABLE_ModuleInfo_32_32, STATE_VARIABLE_ModuleInfo_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_28));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_3_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_10)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (Live_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *Inst_13 = InstB_11;
                *Detism_14 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) InstB_11)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_11)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                        *Detism_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HOInstInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 1))));
                    MR_Word UniqB_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word Uniq_127;

                    succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_126, &Uniq_127);
                    if (succeeded)
                    {
                      *Detism_14 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_13 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_127));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_22));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word UniqB_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word InstResultsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                        MR_Word BoundInstsB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                        MR_Word Uniq_19;
                        MR_Word BoundInsts_20;

                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_16, &Uniq_19);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, InstResultsB_17, BoundInstsB_18);
                          if (succeeded)
                          {
                            switch (UniqB_16) {
                              default:
                                succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 2:
                                succeeded = MR_TRUE;
                                break;
                              case (MR_Integer) 1:
                                succeeded = MR_TRUE;
                                break;
                            }
                            if (succeeded)
                              check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInstsB_18, &BoundInsts_20, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                            else
                            {
                              BoundInsts_20 = BoundInstsB_18;
                              *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                            }
                            *Detism_14 = (MR_Integer) 0;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsB_17));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_20));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word HOInstInfoB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                        MR_Word UniqB_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Uniq_125;

                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_124, &Uniq_125);
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_125));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoB_21));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word InstVarsB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                        MR_Word SubInstB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_23, SubInstB_24, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      }
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_14 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UniqA_310 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_10, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfoA_315 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_10, (MR_Integer) 1))));

        if ((HOInstInfoA_315 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = check_hlds__inst_abstract_unify__make_any_inst_8_p_0(InstB_11, Live_9, UniqA_310, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
        else
          switch (MR_tag((MR_Word) InstB_11)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Uniq_236;

                    switch (Live_9) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          Uniq_236 = UniqA_310;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 0:
                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_310, &Uniq_236);
                        break;
                    }
                    if (succeeded)
                    {
                      *Detism_14 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_13 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_236));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfoA_315));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                    *Detism_14 = (MR_Integer) 0;
                    *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_68;
                MR_Word UniqB_249;
                MR_Word Uniq_250;

                switch (Live_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    succeeded = (Real_12 == (MR_Integer) 1);
                    break;
                }
                if (succeeded)
                {
                  UniqB_249 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                  Var_68 = (MR_Integer) 1;
                  succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, Var_68, UniqA_310, UniqB_249, &Uniq_250);
                  if (succeeded)
                  {
                    *Detism_14 = (MR_Integer) 1;
                    *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_13 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_250));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfoA_315));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word UniqB_238 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word BoundInstsB_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                    MR_Word Uniq_240;
                    MR_Word BoundInsts_241;
                    MR_Word Detism1_243;

                    succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_310, UniqB_238, &Uniq_240);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(BoundInstsB_239, Live_9, UniqA_310, Real_12, &BoundInsts_241, &Detism1_243, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      if (succeeded)
                      {
                        Var_72 = (MR_Word) ((MR_Unsigned) 0U);
                        Var_73 = (MR_Integer) 1;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_240));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_72));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_241));
                        }
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_243, Var_73, Detism_14);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_69;
                    MR_Word UniqB_245;
                    MR_Word Uniq_246;

                    succeeded = (Real_12 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      UniqB_245 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                      Var_69 = (MR_Integer) 1;
                      succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, Var_69, UniqA_310, UniqB_245, &Uniq_246);
                      if (succeeded)
                      {
                        *Detism_14 = (MR_Integer) 1;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_246));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_315));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word InstVarsB_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                    MR_Word SubInstB_253 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_252, SubInstB_253, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                  }
                  break;
              }
              break;
          }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word UniqA_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word InstResultsA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
            MR_Word BoundInstsA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) InstB_11)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstB_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Uniq_128;
                      MR_Word BoundInsts_129;

                      switch (Live_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, UniqA_30, (MR_Integer) 1, &Uniq_128);
                            if (succeeded)
                            {
                              BoundInsts_129 = BoundInstsA_32;
                              *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_30, &Uniq_128);
                            if (succeeded)
                            {
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, InstResultsA_31, BoundInstsA_32);
                              if (succeeded)
                              {
                                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInstsA_32, &BoundInsts_129, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          break;
                      }
                      if (succeeded)
                      {
                        *Detism_14 = (MR_Integer) 0;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_128));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsA_31));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_129));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                      *Detism_14 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_88;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word UniqB_143 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word Uniq_144;
                  MR_Word BoundInsts_145;
                  MR_Word Detism1_146;

                  check_hlds__inst_abstract_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                  succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_30, UniqB_143, &Uniq_144);
                  if (succeeded)
                  {
                    Var_88 = (MR_Integer) 0;
                    succeeded = check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(BoundInstsA_32, Var_88, UniqB_143, Real_12, &BoundInsts_145, &Detism1_146, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                    if (succeeded)
                    {
                      Var_90 = (MR_Word) ((MR_Unsigned) 0U);
                      Var_91 = (MR_Integer) 1;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_13 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_144));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_90));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_145));
                      }
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_146, Var_91, Detism_14);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_107;
                      MR_Word UniqB_130 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word BoundInstsB_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                      MR_Word Uniq_132;
                      MR_Word BoundInsts_133;

                      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_8_p_0(Live_9, BoundInstsA_32, BoundInstsB_131, Real_12, &BoundInsts_133, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, *Detism_14, UniqA_30, UniqB_130, &Uniq_132);
                        if (succeeded)
                        {
                          Var_107 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_132));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_107));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_133));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Detism1_35;
                      MR_Word Var_105;
                      MR_Word UniqB_140 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word Uniq_141;

                      succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_30, UniqB_140, &Uniq_141);
                      if (succeeded)
                      {
                        switch (MR_tag((MR_Word) InstResultsA_31)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(InstResultsA_31)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word BoundInsts_137;
                                  MR_Word InstResults_138;

                                  succeeded = check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(Live_9, UniqB_140, Real_12, BoundInstsA_32, &BoundInsts_137, &Detism1_35, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                  if (succeeded)
                                  {
                                    InstResults_138 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_abstract_unify_scalar_common_2[0]));
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                      *Inst_13 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_138));
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_137));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *Inst_13 = InstA_10;
                                  Detism1_35 = (MR_Integer) 1;
                                  *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word GroundnessResultA_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
                              MR_Word ContainsTypes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 3))));
                              MR_Word MaybeTypeCtorPropagated_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 4))));

                              switch (GroundnessResultA_36) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 2:
                                case (MR_Integer) 0:
                                  {
                                    MR_Word InstResults_42;
                                    MR_Word Var_101;
                                    MR_Word Var_102;
                                    MR_Word Var_103;
                                    MR_Word Var_104;
                                    MR_Word BoundInsts_134;

                                    succeeded = check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(Live_9, UniqB_140, Real_12, BoundInstsA_32, &BoundInsts_134, &Detism1_35, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                    if (succeeded)
                                    {
                                      Var_101 = (MR_Integer) 1;
                                      Var_102 = (MR_Integer) 0;
                                      Var_103 = (MR_Word) ((MR_Unsigned) 0U);
                                      Var_104 = (MR_Word) ((MR_Unsigned) 0U);
                                      {
                                        InstResults_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), InstResults_42, 0) = (MR_Box) (((((MR_Unsigned) (Var_101) << 2)) | (MR_Unsigned) (Var_102)));
                                        MR_hl_field(MR_mktag(1), InstResults_42, 1) = ((MR_Box) (Var_103));
                                        MR_hl_field(MR_mktag(1), InstResults_42, 2) = ((MR_Box) (Var_104));
                                        MR_hl_field(MR_mktag(1), InstResults_42, 3) = ((MR_Box) (ContainsTypes_40));
                                        MR_hl_field(MR_mktag(1), InstResults_42, 4) = ((MR_Box) (MaybeTypeCtorPropagated_41));
                                      }
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                        *Inst_13 = base;
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_42));
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_134));
                                      }
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    *Inst_13 = InstA_10;
                                    Detism1_35 = (MR_Integer) 1;
                                    *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                        if (succeeded)
                        {
                          Var_105 = (MR_Integer) 1;
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_35, Var_105, Detism_14);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word InstVarsB_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                      MR_Word SubInstB_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_147, SubInstB_148, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word HOInstInfoA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
            MR_Word UniqA_231 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))) & (MR_Integer) 7);

            if ((HOInstInfoA_49 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(Live_9, UniqA_231, Real_12, InstB_11, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
            else
              switch (MR_tag((MR_Word) InstB_11)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Uniq_167;

                        switch (Live_9) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              Uniq_167 = UniqA_231;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 0:
                            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_231, &Uniq_167);
                            break;
                        }
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_167));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                        *Detism_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_78;
                    MR_Word UniqB_176 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word Uniq_177;

                    switch (Live_9) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          check_hlds__inst_abstract_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 0:
                        succeeded = (Real_12 == (MR_Integer) 1);
                        break;
                    }
                    if (succeeded)
                    {
                      Var_78 = (MR_Integer) 1;
                      succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, Var_78, UniqA_231, UniqB_176, &Uniq_177);
                      if (succeeded)
                      {
                        *Detism_14 = (MR_Integer) 1;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_177));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_82;
                        MR_Word UniqB_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word InstResultsB_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                        MR_Word BoundInstsB_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                        MR_Word Uniq_171;
                        MR_Word BoundInsts_172;
                        MR_Word Detism1_173;

                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_231, UniqB_168, &Uniq_171);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(Live_9, UniqA_231, Real_12, BoundInstsB_170, &BoundInsts_172, &Detism1_173, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                          if (succeeded)
                          {
                            Var_82 = (MR_Integer) 1;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_171));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsB_169));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_172));
                            }
                            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_173, Var_82, Detism_14);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word UniqB_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Uniq_175;

                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_231, UniqB_174, &Uniq_175);
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 1;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_175));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word InstVarsB_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                        MR_Word SubInstB_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_178, SubInstB_179, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      }
                      break;
                  }
                  break;
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVarsA_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))));
            MR_Word SubInstA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsA_59, SubInstA_60, InstB_11, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Inst0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_20;
    MR_Word Insts_21;
    MR_Word Detism1_24;
    MR_Word Detism2_25;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;

    succeeded = check_hlds__inst_abstract_unify__make_any_inst_8_p_0(Inst0_15, Live_2, Uniq_3, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
    if (succeeded)
    {
      succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_8_p_0(Insts0_16, Live_2, Uniq_3, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Bound0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_20;
    MR_Word Bounds_21;
    MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_15, (MR_Integer) 0))));
    MR_Word ArgInsts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_15, (MR_Integer) 1))));
    MR_Word ArgInsts_26;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;

    succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_8_p_0(ArgInsts0_25, Live_2, Uniq_3, Real_4, &ArgInsts_26, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_31_31);
    if (succeeded)
    {
      {
        Bound_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Bound_20, 0) = ((MR_Box) (ConsId_24));
        MR_hl_field(MR_mktag(0), Bound_20, 1) = ((MR_Box) (ArgInsts_26));
      }
      succeeded = check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(Bounds0_16, Live_2, Uniq_3, Real_4, &Bounds_21, &Detism2_28, STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_ModuleInfo_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_21));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__6_6);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_8_p_0(
  MR_Word Inst0_9,
  MR_Word Live_10,
  MR_Word Uniq1_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_70;
            MR_Word Uniq_72;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 0, (MR_Integer) 1, Uniq1_11, &Uniq_72);
            if (succeeded)
            {
              Var_70 = (MR_Word) ((MR_Unsigned) 0U);
              *Detism_14 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_13 = base;
                MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_72));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_70));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_14 = (MR_Integer) 6;
            *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word T_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst0_9, (MR_Integer) 0))));
        MR_Word Any_20;
        MR_Word TypedAny_21;
        MR_Word Var_66;

        {
          Any_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Any_20, 0) = (MR_Box) ((MR_Unsigned) (Uniq1_11));
          MR_hl_field(MR_mktag(2), Any_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = (MR_Box) (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_66, 2) = ((MR_Box) (Any_20));
        }
        {
          TypedAny_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypedAny_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), TypedAny_21, 1) = ((MR_Box) (T_19));
          MR_hl_field(MR_mktag(3), TypedAny_21, 2) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypedAny_21));
        }
        *Detism_14 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));
        MR_Word Uniq_18;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_16, Uniq1_11, &Uniq_18);
        if (succeeded)
        {
          *Detism_14 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_13 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_18));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_17));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BoundInsts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 3))));
            MR_Word BoundInsts_24;
            MR_Word Detism1_25;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Uniq0_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_74;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_73, Uniq1_11, &Uniq_74);
            if (succeeded)
            {
              succeeded = check_hlds__inst_abstract_unify__make_any_bound_inst_list_8_p_0(BoundInsts0_23, Live_10, Uniq1_11, Real_12, &BoundInsts_24, &Detism1_25, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48);
              if (succeeded)
              {
                Var_63 = (MR_Word) ((MR_Unsigned) 0U);
                Var_64 = (MR_Integer) 1;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_74));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_63));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_24));
                }
                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_25, Var_64, Detism_14);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
            MR_Word Uniq0_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_76;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_75, Uniq1_11, &Uniq_76);
            if (succeeded)
            {
              *Detism_14 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_76));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_26));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.make_any_inst\'/8", (MR_String) "free inst var");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
            MR_Word SubInst0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
            MR_Word Var_55;
            MR_Word Inst0_78;

            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_55, 0) = (MR_Box) ((MR_Unsigned) (Uniq1_11));
              MR_hl_field(MR_mktag(2), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(Live_10, SubInst0_29, Var_55, Real_12, &Inst0_78, Detism_14, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_48, Inst0_78, SubInst0_29);
              succeeded = !(succeeded);
              if (succeeded)
                *Inst_13 = Inst0_78;
              else
              {
                MR_Word InstVars0_79;
                MR_Word SubInst0_80;

                succeeded = ((((MR_tag((MR_Word) Inst0_78)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_78, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  InstVars0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_78, (MR_Integer) 1))));
                  SubInst0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_78, (MR_Integer) 2))));
                  {
                    MR_Word Var_81;

                    Var_81 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_79, InstVars_28);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_13 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_81));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst0_80));
                    }
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_28));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_78));
                  }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
            MR_Word InstTable0_33;
            MR_Word AnyInstTable0_34;
            MR_Word AnyInstInfo_35;
            MR_Word AnyInstName_36;
            MR_Word MaybeMaybeInst_37;
            MR_Word AnyInstTable1_38;
            MR_Word AnyInst_40;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &InstTable0_33);
            hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable0_33, &AnyInstTable0_34);
            {
              AnyInstInfo_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), AnyInstInfo_35, 0) = ((MR_Box) (InstName_32));
              MR_hl_field(MR_mktag(0), AnyInstInfo_35, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_11) << 2)) | (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            {
              AnyInstName_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), AnyInstName_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), AnyInstName_36, 1) = ((MR_Box) (InstName_32));
              MR_hl_field(MR_mktag(3), AnyInstName_36, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_11) << 2)) | (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            hlds__hlds_inst_mode__search_insert_any_inst_4_p_0(AnyInstInfo_35, &MaybeMaybeInst_37, AnyInstTable0_34, &AnyInstTable1_38);
            if ((MaybeMaybeInst_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_41;
              MR_Word SubInst1_42;
              MR_Word InstTable2_43;
              MR_Word AnyInstTable2_44;
              MR_Word AnyInstTable_45;
              MR_Word InstTable_46;
              MR_Word STATE_VARIABLE_ModuleInfo_49_49;
              MR_Word STATE_VARIABLE_ModuleInfo_50_50;
              MR_Word Var_51;
              MR_Word SubInst0_77;

              hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable1_38, InstTable0_33, &InstTable1_41);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_41, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_49_49);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_49_49, InstName_32, &SubInst0_77);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_49_49, SubInst0_77, &SubInst1_42);
              succeeded = check_hlds__inst_abstract_unify__make_any_inst_8_p_0(SubInst1_42, Live_10, Uniq1_11, Real_12, &AnyInst_40, Detism_14, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_50_50);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_50_50, &InstTable2_43);
                hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable2_43, &AnyInstTable2_44);
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (AnyInst_40));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
                }
                hlds__hlds_inst_mode__det_update_any_inst_4_p_0(AnyInstInfo_35, Var_51, AnyInstTable2_44, &AnyInstTable_45);
                hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable_45, InstTable2_43, &InstTable_46);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_46, STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_ModuleInfo_48);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word MaybeInst_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_37, (MR_Integer) 0))));

              if ((MaybeInst_39 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  AnyInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), AnyInst_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), AnyInst_40, 1) = ((MR_Box) (AnyInstName_36));
                }
                *Detism_14 = (MR_Integer) 0;
              }
              else
              {
                AnyInst_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_39, (MR_Integer) 0))));
                *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_39, (MR_Integer) 1))) & (MR_Integer) 7);
              }
              *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_48, AnyInstName_36, AnyInst_40);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AnyInstName_36));
                }
              else
                *Inst_13 = AnyInst_40;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Inst_13 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__inst_abstract_unify_scalar_common_1[1]));
            *Detism_14 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word BoundInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word BoundInsts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word BoundInst_20;
    MR_Word BoundInsts_21;
    MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 0))));
    MR_Word ArgInsts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 1))));
    MR_Word ArgInsts_26;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;

    succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_8_p_0(Live_1, Uniq_2, Real_3, ArgInsts0_25, &ArgInsts_26, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_31_31);
    if (succeeded)
    {
      {
        BoundInst_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_24));
        MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts_26));
      }
      succeeded = check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(Live_1, Uniq_2, Real_3, BoundInsts0_19, &BoundInsts_21, &Detism2_28, STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_ModuleInfo_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_21));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__6_6);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(
  MR_Word Live_9,
  MR_Word Uniq1_10,
  MR_Word Real_11,
  MR_Word Inst0_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_66;
            MR_Word Uniq_68;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 0, (MR_Integer) 1, Uniq1_10, &Uniq_68);
            if (succeeded)
            {
              Var_66 = (MR_Word) ((MR_Unsigned) 0U);
              *Detism_14 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_66));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_14 = (MR_Integer) 6;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word T_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst0_12, (MR_Integer) 0))));
        MR_Word Var_63;
        MR_Word Uniq_69;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 0, (MR_Integer) 1, Uniq1_10, &Uniq_69);
        if (succeeded)
        {
          *Detism_14 = (MR_Integer) 0;
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_63, 1) = (MR_Box) ((MR_Unsigned) (Uniq_69));
            MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (T_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_63));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_12, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_12, (MR_Integer) 1))));
        MR_Word Uniq_18;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_16, Uniq1_10, &Uniq_18);
        if (succeeded)
        {
          *Detism_14 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_17));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
            MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 3))));
            MR_Word BoundInsts_22;
            MR_Word Detism1_23;
            MR_Word Var_60;
            MR_Word Uniq0_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_71;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_70, Uniq1_10, &Uniq_71);
            if (succeeded)
            {
              succeeded = check_hlds__inst_abstract_unify__make_ground_bound_inst_list_8_p_0(Live_9, Uniq1_10, Real_11, BoundInsts0_21, &BoundInsts_22, &Detism1_23, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
              if (succeeded)
              {
                Var_60 = (MR_Integer) 1;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_71));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_20));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_22));
                }
                parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_23, Var_60, Detism_14);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq0_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
            MR_Word Uniq_74;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_72, Uniq1_10, &Uniq_74);
            if (succeeded)
            {
              *Detism_14 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_74));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_73));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.make_ground_inst\'/8", (MR_String) "free inst var");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))));
            MR_Word SubInst0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
            MR_Word Var_52;
            MR_Word Inst0_76;

            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_52, 1) = (MR_Box) ((MR_Unsigned) (Uniq1_10));
              MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(Live_9, SubInst0_26, Var_52, Real_11, &Inst0_76, Detism_14, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_45, Inst0_76, SubInst0_26);
              succeeded = !(succeeded);
              if (succeeded)
                *Inst_13 = Inst0_76;
              else
              {
                MR_Word InstVars0_77;
                MR_Word SubInst0_78;

                succeeded = ((((MR_tag((MR_Word) Inst0_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_76, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  InstVars0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_76, (MR_Integer) 1))));
                  SubInst0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_76, (MR_Integer) 2))));
                  {
                    MR_Word Var_79;

                    Var_79 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_77, InstVars_25);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_13 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_79));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst0_78));
                    }
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_25));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_76));
                  }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))));
            MR_Word InstTable0_30;
            MR_Word GroundInstTable0_31;
            MR_Word GroundInstInfo_32;
            MR_Word GroundInstName_33;
            MR_Word MaybeMaybeInst_34;
            MR_Word GroundInstTable1_35;
            MR_Word GroundInst_37;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &InstTable0_30);
            hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable0_30, &GroundInstTable0_31);
            {
              GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), GroundInstInfo_32, 0) = ((MR_Box) (InstName_29));
              MR_hl_field(MR_mktag(0), GroundInstInfo_32, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_10) << 2)) | (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_11)))));
            }
            {
              GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GroundInstName_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), GroundInstName_33, 1) = ((MR_Box) (InstName_29));
              MR_hl_field(MR_mktag(3), GroundInstName_33, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_10) << 2)) | (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_11)))));
            }
            hlds__hlds_inst_mode__search_insert_ground_inst_4_p_0(GroundInstInfo_32, &MaybeMaybeInst_34, GroundInstTable0_31, &GroundInstTable1_35);
            if ((MaybeMaybeInst_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_38;
              MR_Word SubInst1_39;
              MR_Word InstTable2_40;
              MR_Word GroundInstTable2_41;
              MR_Word GroundInstTable_42;
              MR_Word InstTable_43;
              MR_Word STATE_VARIABLE_ModuleInfo_46_46;
              MR_Word STATE_VARIABLE_ModuleInfo_47_47;
              MR_Word Var_48;
              MR_Word SubInst0_75;

              hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable1_35, InstTable0_30, &InstTable1_38);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_38, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_46_46);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_46_46, InstName_29, &SubInst0_75);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_46_46, SubInst0_75, &SubInst1_39);
              succeeded = check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(Live_9, Uniq1_10, Real_11, SubInst1_39, &GroundInst_37, Detism_14, STATE_VARIABLE_ModuleInfo_46_46, &STATE_VARIABLE_ModuleInfo_47_47);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_47_47, &InstTable2_40);
                hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable2_40, &GroundInstTable2_41);
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (GroundInst_37));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
                }
                hlds__hlds_inst_mode__det_update_ground_inst_4_p_0(GroundInstInfo_32, Var_48, GroundInstTable2_41, &GroundInstTable_42);
                hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable_42, InstTable2_40, &InstTable_43);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_43, STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_ModuleInfo_45);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word MaybeInst_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_34, (MR_Integer) 0))));

              if ((MaybeInst_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GroundInst_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), GroundInst_37, 1) = ((MR_Box) (GroundInstName_33));
                }
                *Detism_14 = (MR_Integer) 0;
              }
              else
              {
                GroundInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 0))));
                *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 1))) & (MR_Integer) 7);
              }
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_45, GroundInstName_33, GroundInst_37);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GroundInstName_33));
                }
              else
                *Inst_13 = GroundInst_37;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Inst_13 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__inst_abstract_unify_scalar_common_3[0]));
            *Detism_14 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Inst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Insts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Inst_20;
    MR_Word Insts_21;
    MR_Word Detism1_24;
    MR_Word Detism2_25;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;

    succeeded = check_hlds__inst_abstract_unify__make_ground_inst_8_p_0(Live_1, Uniq_2, Real_3, Inst0_18, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
    if (succeeded)
    {
      succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_8_p_0(Live_1, Uniq_2, Real_3, Insts0_19, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word Live_10,
  MR_Word InstVarsA_11,
  MR_Word SubInstA_12,
  MR_Word InstB_13,
  MR_Word Real_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  MR_bool succeeded;
  MR_Word Inst0_18;

  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(Live_10, SubInstA_12, InstB_13, Real_14, &Inst0_18, Detism_16, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
  if (succeeded)
  {
    succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_22, Inst0_18, SubInstA_12);
    succeeded = !(succeeded);
    if (succeeded)
      *Inst_15 = Inst0_18;
    else
    {
      MR_Word InstVars0_19;
      MR_Word SubInst0_20;

      succeeded = ((((MR_tag((MR_Word) Inst0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        InstVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 1))));
        SubInst0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 2))));
        {
          MR_Word Var_24;

          Var_24 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_19, InstVarsA_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_15 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst0_20));
          }
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_15 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVarsA_11));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_18));
        }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word Live_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 6;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    }
    else
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInstB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInstsB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsIdA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
      MR_Word ArgsA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 1))));
      MR_Word ConsIdB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_31, (MR_Integer) 0))));
      MR_Word ArgsB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_31, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_37, ConsIdB_39);
      if (succeeded)
      {
        MR_Word Args_41;
        MR_Word Detism1_42;
        MR_Word BoundInstsTail_43;
        MR_Word Detism2_44;
        MR_Word STATE_VARIABLE_ModuleInfo_48_48;
        MR_Word Var_50;
        MR_Word Var_60;
        MR_Word Var_45;

        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_8_p_0(ArgsA_38, ArgsB_40, Live_1, Real_4, &Args_41, &Detism1_42, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_48_48);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, Var_62, BoundInstsB_32, Real_4, &BoundInstsTail_43, &Detism2_44, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_8);
          if (succeeded)
          {
            Var_50 = (MR_Integer) 0;
            parse_tree__prog_data__determinism_components_3_p_0(Detism1_42, &Var_45, &Var_60);
            succeeded = (Var_50 == Var_60);
            if (succeeded)
              *HeadVar__5_5 = BoundInstsTail_43;
            else
            {
              MR_Word Var_51;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (ConsIdA_37));
                MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Args_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_43));
              }
            }
            parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_42, Detism2_44, HeadVar__6_6);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Var_57;
        MR_Word Detism1_58;
        MR_Word Var_61;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_61, ConsIdA_37, ConsIdB_39);
        succeeded = ((MR_Integer) 1 == Var_61);
        if (succeeded)
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, Var_62, HeadVar__3_3, Real_4, HeadVar__5_5, &Detism1_58, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
        else
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, HeadVar__2_2, BoundInstsB_32, Real_4, HeadVar__5_5, &Detism1_58, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          Var_57 = (MR_Integer) 7;
          parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_58, Var_57, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word Live_9,
  MR_Word BoundInstsA_10,
  MR_Word BoundInstsB_11,
  MR_Word Real_12,
  MR_Word * BoundInsts_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_bool succeeded = (BoundInstsA_10 == (MR_Word) ((MR_Unsigned) 0U));

  if (!(succeeded))
    succeeded = (BoundInstsB_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *BoundInsts_13 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_14 = (MR_Integer) 6;
    *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Detism0_16;
    MR_Word ConsIdA_17;
    MR_Word ConsIdB_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_inst_list_2_8_p_0(Live_9, BoundInstsA_10, BoundInstsB_11, Real_12, BoundInsts_13, &Detism0_16, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    if (succeeded)
    {
      succeeded = (BoundInstsA_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_10, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_10, (MR_Integer) 1))));
        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsIdA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
          succeeded = (BoundInstsB_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_11, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_11, (MR_Integer) 1))));
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsIdB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_17, ConsIdB_19);
            }
          }
        }
      }
      if (succeeded)
        *Detism_14 = Detism0_16;
      else
      {
        MR_Word MaxSoln_22;
        MR_Word Var_21;

        parse_tree__prog_data__determinism_components_3_p_0(Detism0_16, &Var_21, &MaxSoln_22);
        parse_tree__prog_data__determinism_components_3_p_1(Detism_14, (MR_Integer) 0, MaxSoln_22);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Live_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstsA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InstB_16;
    MR_Word InstsB_17;
    MR_Word Inst_20;
    MR_Word Insts_21;
    MR_Word Detism1_24;
    MR_Word Detism2_25;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      InstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      InstsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(Live_3, InstA_14, InstB_16, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
      if (succeeded)
      {
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_8_p_0(InstsA_15, InstsB_17, Live_3, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded = (InstA_10 == (MR_Word) ((MR_Unsigned) 0U));

  if (!(succeeded))
    succeeded = (InstB_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word ExpandedInstA_35;
    MR_Word ExpandedInstB_36;
    MR_Word Inst0_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_38;

    check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, InstA_10, &ExpandedInstA_35);
    check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, InstB_11, &ExpandedInstB_36);
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_3_8_p_0(Live_9, ExpandedInstA_35, ExpandedInstB_36, Real_12, &Inst0_37, Detism_14, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 0;
      parse_tree__prog_data__determinism_components_3_p_0(*Detism_14, &Var_38, &Var_40);
      succeeded = (Var_39 == Var_40);
      if (succeeded)
        *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
      else
        *Inst_13 = Inst0_37;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word InstTable0_16;
    MR_Word UnifyInstTable0_17;
    MR_Word UnifyInstInfo_18;
    MR_Word UnifyInstName_19;
    MR_Word MaybeMaybeInst_20;
    MR_Word UnifyInstTable1_21;
    MR_Word Inst0_23;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &InstTable0_16);
    hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable0_16, &UnifyInstTable0_17);
    {
      UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 0) = (MR_Box) (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_12)));
      MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 1) = ((MR_Box) (InstA_10));
      MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 2) = ((MR_Box) (InstB_11));
    }
    {
      UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnifyInstName_19, 0) = (MR_Box) (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_12)));
      MR_hl_field(MR_mktag(1), UnifyInstName_19, 1) = ((MR_Box) (InstA_10));
      MR_hl_field(MR_mktag(1), UnifyInstName_19, 2) = ((MR_Box) (InstB_11));
    }
    hlds__hlds_inst_mode__search_insert_unify_inst_4_p_0(UnifyInstInfo_18, &MaybeMaybeInst_20, UnifyInstTable0_17, &UnifyInstTable1_21);
    if ((MaybeMaybeInst_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word InstTable1_24;
      MR_Word InstTable2_25;
      MR_Word UnifyInstTable2_26;
      MR_Word UnifyInstTable_27;
      MR_Word InstTable_28;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word STATE_VARIABLE_ModuleInfo_33_33;
      MR_Word Var_34;
      MR_Word ExpandedInstA_41;
      MR_Word ExpandedInstB_42;
      MR_Word Inst0_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_44;

      hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable1_21, InstTable0_16, &InstTable1_24);
      hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_24, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_32_32);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, InstA_10, &ExpandedInstA_41);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, InstB_11, &ExpandedInstB_42);
      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_3_8_p_0(Live_9, ExpandedInstA_41, ExpandedInstB_42, Real_12, &Inst0_43, Detism_14, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_33_33);
      if (succeeded)
      {
        Var_45 = (MR_Integer) 0;
        parse_tree__prog_data__determinism_components_3_p_0(*Detism_14, &Var_44, &Var_46);
        succeeded = (Var_45 == Var_46);
        if (succeeded)
          Inst0_23 = (MR_Word) ((MR_Unsigned) 4U);
        else
          Inst0_23 = Inst0_43;
        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_33_33, &InstTable2_25);
        hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable2_25, &UnifyInstTable2_26);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Inst0_23));
          MR_hl_field(MR_mktag(1), Var_34, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
        }
        hlds__hlds_inst_mode__det_update_unify_inst_4_p_0(UnifyInstInfo_18, Var_34, UnifyInstTable2_26, &UnifyInstTable_27);
        hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable_27, InstTable2_25, &InstTable_28);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_28, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_30);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word MaybeInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_20, (MR_Integer) 0))));

      if ((MaybeInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Inst0_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Inst0_23, 1) = ((MR_Box) (UnifyInstName_19));
        }
        *Detism_14 = (MR_Integer) 0;
      }
      else
      {
        Inst0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_22, (MR_Integer) 0))));
        *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_22, (MR_Integer) 1))) & (MR_Integer) 7);
      }
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_30, UnifyInstName_19, Inst0_23);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnifyInstName_19));
        }
      else
        *Inst_13 = Inst0_23;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
{
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__unify_uniq_6_p_0(
  MR_Word Live_7,
  MR_Word Real_8,
  MR_Word Detism_9,
  MR_Word UniqA_10,
  MR_Word UniqB_11,
  MR_Word * Uniq_12)
{
  MR_bool succeeded;

  switch (UniqA_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        switch (Live_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              succeeded = (Real_8 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (Detism_9 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              succeeded = MR_TRUE;
            }
            break;
        }
        if (succeeded)
        {
          *Uniq_12 = (MR_Integer) 3;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 4:
      {
        switch (Live_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              succeeded = (Real_8 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (Detism_9 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
              succeeded = MR_TRUE;
            }
            break;
        }
        if (succeeded)
        {
          succeeded = (UniqB_11 == (MR_Integer) 3);
          if (succeeded)
            *Uniq_12 = (MR_Integer) 3;
          else
            *Uniq_12 = (MR_Integer) 4;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      switch (UniqB_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 3;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 4;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Uniq_12 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                *Uniq_12 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            *Uniq_12 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Uniq_12 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                *Uniq_12 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (UniqB_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 3;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 4;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Uniq_12 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (UniqB_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 3;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = (Real_8 == (MR_Integer) 1);
                  if (!(succeeded))
                    succeeded = (Detism_9 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              *Uniq_12 = (MR_Integer) 4;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Uniq_12 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                *Uniq_12 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            *Uniq_12 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            switch (Live_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Uniq_12 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                *Uniq_12 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

void mercury__check_hlds__inst_abstract_unify__init(void)
{
}

void mercury__check_hlds__inst_abstract_unify__init_type_tables(void)
{
}

void mercury__check_hlds__inst_abstract_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_abstract_unify__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_abstract_unify.
