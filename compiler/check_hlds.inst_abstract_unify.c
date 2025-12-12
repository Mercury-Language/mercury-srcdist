/*
** Automatically generated from `inst_abstract_unify.m'
** by the Mercury compiler,
** version rotd-2025-12-12
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
#include "array.mih"
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
#include "integer.mih"
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
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_make.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_test.mih"
#include "hlds.inst_util.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_lives_10_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_lives_10_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word DuCtor_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22);

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_bound_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeCtor_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
  MR_Word ArgInsts_8);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_loop_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_lives_10_p_0(
  MR_Word Type_1,
  MR_Word Real_2,
  MR_Word HeadVar__3_3,
  MR_Word ConsIdB_4,
  MR_Word ArgInstsB_5,
  MR_Word LivesB_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Real_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_6_p_0(
  MR_Word Types_7,
  MR_Word Insts0_8,
  MR_Word Lives_9,
  MR_Word * Insts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_3_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word InstA_13,
  MR_Word InstB_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_9_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word Uniq_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word Uniq1_13,
  MR_Word Inst0_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word Uniq_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word Uniq1_13,
  MR_Word Inst0_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_9_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(
  MR_Word Type_11,
  MR_Word Live_12,
  MR_Word Real_13,
  MR_Word InstVarsA_14,
  MR_Word SubInstA_15,
  MR_Word InstB_16,
  MR_Word * Inst_17,
  MR_Word * Detism_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word BoundFunctorsA_13,
  MR_Word BoundFunctorsB_14,
  MR_Word * BoundFunctors_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26);

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

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


static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_2[1][5];




static /* final */ const MR_Box check_hlds__inst_abstract_unify_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
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



#include "array.mh"


MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(
  MR_Word Type_12,
  MR_Word Live_13,
  MR_Word Real_14,
  MR_Word InstA0_15,
  MR_Word ConsIdB_16,
  MR_Word ArgInstsB_17,
  MR_Word ArgLives_18,
  MR_Word * Inst_19,
  MR_Word * Detism_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_bool succeeded;
  MR_Word InstA_22;

  hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, InstA0_15, &InstA_22);
  switch (MR_tag((MR_Word) InstA_22)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgInsts_26;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word DuCtorB_27;

            switch (Live_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  ArgInsts_26 = ArgInstsB_17;
                  *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypes_25;

                  hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_12, ConsIdB_16, ArgInstsB_17, &ArgTypes_25);
                  succeeded = hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, ArgLives_18, ArgInstsB_17);
                  if (succeeded)
                  {
                    check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_6_p_0(ArgTypes_25, ArgInstsB_17, ArgLives_18, &ArgInsts_26, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ConsIdB_16)) == (MR_Integer) 1);
              if (succeeded)
              {
                DuCtorB_27 = (MR_Word) (MR_body((MR_Word) (ConsIdB_16), (MR_Integer) 1));
                succeeded = check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_4_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_12, DuCtorB_27, ArgInsts_26);
              }
              else
                succeeded = MR_TRUE;
              if (succeeded)
              {
                Var_43 = (MR_Integer) 1;
                Var_44 = (MR_Word) ((MR_Unsigned) 0U);
                Var_47 = (MR_Word) ((MR_Unsigned) 0U);
                *Detism_20 = (MR_Integer) 0;
                {
                  Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_46, 0) = ((MR_Box) (ConsIdB_16));
                  MR_hl_field(0, Var_46, 1) = ((MR_Box) (ArgInsts_26));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Var_43));
                  MR_hl_field(2, base, 1) = ((MR_Box) (Var_44));
                  MR_hl_field(2, base, 2) = ((MR_Box) (Var_45));
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
    case (MR_Integer) 1:
      {
        MR_Word ArgInsts0_38;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word ArgTypes_63;
        MR_Word ArgInsts_64;
        MR_Word UniqA_65 = ((MR_Unsigned) ((MR_hl_field(1, InstA_22, 0))) & (MR_Integer) 7);
        MR_Word DuCtorB_62;

        hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_12, ConsIdB_16, ArgInstsB_17, &ArgTypes_63);
        switch (Live_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_9_p_0(Live_13, Real_14, UniqA_65, ArgTypes_63, ArgInstsB_17, &ArgInsts0_38, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            break;
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_lives_10_p_0(Live_13, Real_14, UniqA_65, ArgTypes_63, ArgLives_18, ArgInstsB_17, &ArgInsts0_38, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            break;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ConsIdB_16)) == (MR_Integer) 1);
          if (succeeded)
          {
            DuCtorB_62 = (MR_Word) (MR_body((MR_Word) (ConsIdB_16), (MR_Integer) 1));
            check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_5_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_12, DuCtorB_62, ArgInsts0_38, &ArgInsts_64);
          }
          else
            ArgInsts_64 = ArgInsts0_38;
          Var_56 = (MR_Word) ((MR_Unsigned) 0U);
          Var_59 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (ConsIdB_16));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (ArgInsts_64));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_19 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (UniqA_65));
            MR_hl_field(2, base, 1) = ((MR_Box) (Var_56));
            MR_hl_field(2, base, 2) = ((MR_Box) (Var_57));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UniqA_30 = ((MR_Unsigned) ((MR_hl_field(2, InstA_22, 0))) & (MR_Integer) 7);
        MR_Word BoundFunctorsA0_32 = ((MR_Word) ((MR_hl_field(2, InstA_22, 2))));
        MR_Word BoundFunctorsA_34;
        MR_Word BoundFunctors_35;
        MR_Word Var_55;
        MR_Word TypeCtor_33;

        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_12, &TypeCtor_33);
        if (succeeded)
          check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_bound_insts_4_p_0(STATE_VARIABLE_ModuleInfo_0_23, TypeCtor_33, BoundFunctorsA0_32, &BoundFunctorsA_34);
        else
          BoundFunctorsA_34 = BoundFunctorsA0_32;
        switch (Live_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word BoundFunctorsB_36;
              MR_Word Var_52;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (ConsIdB_16));
                MR_hl_field(0, Var_52, 1) = ((MR_Box) (ArgInstsB_17));
              }
              {
                BoundFunctorsB_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, BoundFunctorsB_36, 0) = ((MR_Box) (Var_52));
                MR_hl_field(1, BoundFunctorsB_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_9_p_0(Type_12, (MR_Integer) 1, Real_14, BoundFunctorsA_34, BoundFunctorsB_36, &BoundFunctors_35, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            }
            break;
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_lives_10_p_0(Type_12, Real_14, BoundFunctorsA_34, ConsIdB_16, ArgInstsB_17, ArgLives_18, &BoundFunctors_35, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            break;
        }
        if (succeeded)
        {
          Var_55 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_19 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (UniqA_30));
            MR_hl_field(2, base, 1) = ((MR_Box) (Var_55));
            MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_35));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstA_22, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_39 = ((MR_Word) ((MR_hl_field(3, InstA_22, 1))));
            MR_Word SubInstA_40 = ((MR_Word) ((MR_hl_field(3, InstA_22, 2))));
            MR_Word Inst0_41;

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(Type_12, Live_13, Real_14, SubInstA_40, ConsIdB_16, ArgInstsB_17, ArgLives_18, &Inst0_41, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_12, Inst0_41, SubInstA_40);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_39));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Inst0_41));
                }
              else
                *Inst_19 = Inst0_41;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_28 = ((MR_Unsigned) ((MR_hl_field(3, InstA_22, 1))) & (MR_Integer) 7);
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word ArgTypes_60;
            MR_Word ArgInsts_61;

            succeeded = hlds__type_util__type_is_solver_type_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_12);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_12, ConsIdB_16, ArgInstsB_17, &ArgTypes_60);
              switch (Live_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_9_p_0(Live_13, Real_14, Uniq_28, ArgTypes_60, ArgInstsB_17, &ArgInsts_61, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  break;
                case (MR_Integer) 0:
                  succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_lives_10_p_0(Live_13, Real_14, Uniq_28, ArgTypes_60, ArgInstsB_17, ArgLives_18, &ArgInsts_61, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  break;
              }
              if (succeeded)
              {
                Var_48 = (MR_Word) ((MR_Unsigned) 0U);
                Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_50, 0) = ((MR_Box) (ConsIdB_16));
                  MR_hl_field(0, Var_50, 1) = ((MR_Box) (ArgInsts_61));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_28));
                  MR_hl_field(2, base, 1) = ((MR_Box) (Var_48));
                  MR_hl_field(2, base, 2) = ((MR_Box) (Var_49));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_lives_10_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Type_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Types_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Inst0_23;
    MR_Word Insts0_24;
    MR_Word ArgLive_25;
    MR_Word ArgLives_26;
    MR_Word Inst_27;
    MR_Word Insts_28;
    MR_Word BothLive_31;
    MR_Word Detism1_32;
    MR_Word Detism2_33;
    MR_Word STATE_VARIABLE_ModuleInfo_1_36;

    succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Inst0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      Insts0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgLive_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        ArgLives_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        succeeded = (Live_1 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ArgLive_25 == (MR_Integer) 0);
        if (succeeded)
          BothLive_31 = (MR_Integer) 0;
        else
          BothLive_31 = (MR_Integer) 1;
        succeeded = check_hlds__inst_abstract_unify__make_any_inst_9_p_0(Type_21, BothLive_31, Real_2, Uniq_3, Inst0_23, &Inst_27, &Detism1_32, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_1_36);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_lives_10_p_0(Live_1, Real_2, Uniq_3, Types_22, Insts0_24, ArgLives_26, &Insts_28, &Detism2_33, STATE_VARIABLE_ModuleInfo_1_36, STATE_VARIABLE_ModuleInfo_10);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Inst_27));
              MR_hl_field(1, base, 1) = ((MR_Box) (Insts_28));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_32, Detism2_33, HeadVar__8_8);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_lives_10_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word ArgType_21;
    MR_Word ArgTypes_22;
    MR_Word ArgLive_23;
    MR_Word ArgLives_24;
    MR_Word ArgInst0_25;
    MR_Word ArgInsts0_26;
    MR_Word ArgInst_27;
    MR_Word ArgInsts_28;
    MR_Word BothLive_31;
    MR_Word Detism1_32;
    MR_Word Detism2_33;
    MR_Word STATE_VARIABLE_ModuleInfo_1_36;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgType_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      ArgTypes_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      ArgLive_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      ArgLives_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInst0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        ArgInsts0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        succeeded = (Live_1 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ArgLive_23 == (MR_Integer) 0);
        if (succeeded)
          BothLive_31 = (MR_Integer) 0;
        else
          BothLive_31 = (MR_Integer) 1;
        succeeded = check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(ArgType_21, BothLive_31, Real_2, Uniq_3, ArgInst0_25, &ArgInst_27, &Detism1_32, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_1_36);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_lives_10_p_0(Live_1, Real_2, Uniq_3, ArgTypes_22, ArgLives_24, ArgInsts0_26, &ArgInsts_28, &Detism2_33, STATE_VARIABLE_ModuleInfo_1_36, STATE_VARIABLE_ModuleInfo_10);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ArgInst_27));
              MR_hl_field(1, base, 1) = ((MR_Box) (ArgInsts_28));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_32, Detism2_33, HeadVar__8_8);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word DuCtor_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22)
{
  MR_bool succeeded;
  MR_Word ConsArgTypes_17;
  MR_Word TypeCtor_10;
  MR_Word ConsDefn_11;
  MR_Word MaybeExistConstraints_16;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_7, &TypeCtor_10);
  if (succeeded)
  {
    succeeded = hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_6, TypeCtor_10, DuCtor_8, &ConsDefn_11);
    if (succeeded)
    {
      MaybeExistConstraints_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 4))));
      ConsArgTypes_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 5))));
      succeeded = (ConsArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeExistConstraints_16 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_loop_3_p_0(ConsArgTypes_17, STATE_VARIABLE_ArgInsts_0_21, STATE_VARIABLE_ArgInsts_22);
  else
    *STATE_VARIABLE_ArgInsts_22 = STATE_VARIABLE_ArgInsts_0_21;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_bound_insts_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeCtor_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundFunctor0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word BoundFunctors0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word BoundFunctor_11;
    MR_Word BoundFunctors_12;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_9, 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_9, 1))));
    MR_Word ConsArgTypes_22;
    MR_Word DuCtor_15;
    MR_Word ConsDefn_16;
    MR_Word MaybeExistConstraints_21;

    succeeded = ((MR_tag((MR_Word) ConsId_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      DuCtor_15 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 1));
      succeeded = hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_1, TypeCtor_2, DuCtor_15, &ConsDefn_16);
      if (succeeded)
      {
        MaybeExistConstraints_21 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 4))));
        ConsArgTypes_22 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 5))));
        succeeded = (ConsArgTypes_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word ArgInsts_26;

      check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_loop_3_p_0(ConsArgTypes_22, ArgInsts0_14, &ArgInsts_26);
      {
        BoundFunctor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundFunctor_11, 0) = ((MR_Box) (ConsId_13));
        MR_hl_field(0, BoundFunctor_11, 1) = ((MR_Box) (ArgInsts_26));
      }
    }
    else
      BoundFunctor_11 = BoundFunctor0_9;
    check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_bound_insts_4_p_0(ModuleInfo_1, TypeCtor_2, BoundFunctors0_10, &BoundFunctors_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_12));
    }
  }
}

static void MR_CALL 
check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.propagate_ho_inst_info_into_arg_insts_loop\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.propagate_ho_inst_info_into_arg_insts_loop\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Insts0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Inst_18;
      MR_Word Insts_19;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));

      check_hlds__modecheck_util__propagate_type_ho_inst_info_into_inst_3_p_0(Var_20, Inst0_16, &Inst_18);
      check_hlds__inst_abstract_unify__propagate_ho_inst_info_into_arg_insts_loop_3_p_0(Var_23, Insts0_17, &Insts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_19));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
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
    succeeded = hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_5, TypeCtor_9, DuCtor_7, &ConsDefn_10);
    if (succeeded)
    {
      MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 4))));
      ConsArgs_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 5))));
      succeeded = (ConsArgs_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    succeeded = check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_loop_3_p_0(ModuleInfo_5, ConsArgs_16, ArgInsts_8);
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__arg_insts_match_ho_inst_info_in_type_loop_3_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.arg_insts_match_ho_inst_info_in_type_loop\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.arg_insts_match_ho_inst_info_in_type_loop\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word InstHOInstInfo_21;
        MR_Word ArgType_23;
        MR_Word TypePredInst_28;
        MR_Word TypeHOInstInfo_26;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        if (((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 1))
        {
          InstHOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_18, 1))));
          succeeded = MR_TRUE;
        }
        else
        if (((((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_18, 0)))) == (MR_Integer) 2))))
        {
          InstHOInstInfo_21 = ((MR_Word) ((MR_hl_field(3, Inst_18, 2))));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ArgType_23 = ((MR_Word) ((MR_hl_field(0, Var_33, 1))));
          succeeded = ((((MR_tag((MR_Word) ArgType_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_23, 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            TypeHOInstInfo_26 = ((MR_Word) ((MR_hl_field(3, ArgType_23, 3))));
            succeeded = (TypeHOInstInfo_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TypePredInst_28 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_26), (MR_Integer) 1));
          }
        }
        if (succeeded)
        {
          MR_Word InstPredInst_29;

          succeeded = (InstHOInstInfo_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstPredInst_29 = (MR_Word) (MR_body((MR_Word) (InstHOInstInfo_21), (MR_Integer) 1));
            succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(ModuleInfo_1, ArgType_23, InstPredInst_29, TypePredInst_28);
          }
        }
        else
          succeeded = MR_TRUE;
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_32;
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
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_lives_10_p_0(
  MR_Word Type_1,
  MR_Word Real_2,
  MR_Word HeadVar__3_3,
  MR_Word ConsIdB_4,
  MR_Word ArgInstsB_5,
  MR_Word LivesB_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorA_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctorsA_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ConsIdA_29 = ((MR_Word) ((MR_hl_field(0, BoundFunctorA_21, 0))));
      MR_Word ArgInstsA_30 = ((MR_Word) ((MR_hl_field(0, BoundFunctorA_21, 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_29, ConsIdB_4);
      if (succeeded)
      {
        MR_Word ArgTypes_31;
        MR_Word ArgInsts_32;
        MR_Word Var_36;
        MR_Word Var_37;

        hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_9, Type_1, ConsIdB_4, ArgInstsB_5, &ArgTypes_31);
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_9_p_0(ArgTypes_31, Real_2, ArgInstsA_30, ArgInstsB_5, LivesB_6, &ArgInsts_32, HeadVar__8_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
        if (succeeded)
        {
          Var_37 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (ConsIdA_29));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (ArgInsts_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_37));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = BoundFunctorsA_22;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Real_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__7_7 = (MR_Integer) 0;
          *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
  {
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Types_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word InstA_17;
    MR_Word InstsA_18;
    MR_Word InstB_19;
    MR_Word InstsB_20;
    MR_Word Live_21;
    MR_Word Lives_22;
    MR_Word Inst_23;
    MR_Word Insts_24;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_1_31;

    succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      InstA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      InstsA_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstB_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        InstsB_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Live_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
          Lives_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_14, Live_21, Real_2, InstA_17, InstB_19, &Inst_23, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_31);
          if (succeeded)
          {
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_lives_9_p_0(Types_15, Real_2, InstsA_18, InstsB_20, Lives_22, &Insts_24, &Detism2_28, STATE_VARIABLE_ModuleInfo_1_31, STATE_VARIABLE_ModuleInfo_9);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Inst_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (Insts_24));
              }
              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__7_7);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_6_p_0(
  MR_Word Types_7,
  MR_Word Insts0_8,
  MR_Word Lives_9,
  MR_Word * Insts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded = (Types_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadType_12;
  MR_Word TailTypes_13;
  MR_Word HeadInst0_14;
  MR_Word TailInsts0_15;
  MR_Word HeadLive_16;
  MR_Word TailLives_17;

  if (succeeded)
  {
    HeadType_12 = ((MR_Word) ((MR_hl_field(1, Types_7, 0))));
    TailTypes_13 = ((MR_Word) ((MR_hl_field(1, Types_7, 1))));
    succeeded = (Insts0_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadInst0_14 = ((MR_Word) ((MR_hl_field(1, Insts0_8, 0))));
      TailInsts0_15 = ((MR_Word) ((MR_hl_field(1, Insts0_8, 1))));
      succeeded = (Lives_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadLive_16 = ((MR_Word) ((MR_hl_field(1, Lives_9, 0))));
        TailLives_17 = ((MR_Word) ((MR_hl_field(1, Lives_9, 1))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word HeadInst_18;
    MR_Word TailInsts_19;
    MR_Word STATE_VARIABLE_ModuleInfo_1_22;

    switch (HeadLive_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          HeadInst_18 = HeadInst0_14;
          STATE_VARIABLE_ModuleInfo_1_22 = STATE_VARIABLE_ModuleInfo_0_20;
        }
        break;
      case (MR_Integer) 0:
        check_hlds__inst_make__make_shared_inst_5_p_0(HeadType_12, HeadInst0_14, &HeadInst_18, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_1_22);
        break;
    }
    check_hlds__inst_abstract_unify__maybe_make_shared_inst_list_6_p_0(TailTypes_13, TailInsts0_15, TailLives_17, &TailInsts_19, STATE_VARIABLE_ModuleInfo_1_22, STATE_VARIABLE_ModuleInfo_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Insts_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadInst_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailInsts_19));
    }
  }
  else
  {
    succeeded = (Types_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Insts0_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Lives_9 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *Insts_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.maybe_make_shared_inst_list\'/6", (MR_String) "list length mismatch");
        return;
      }
    *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_3_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word InstA_13,
  MR_Word InstB_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_13)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (Live_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *Inst_15 = InstB_14;
                *Detism_16 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) InstB_14)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_14)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
                        *Detism_16 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word HOInstInfoB_23 = ((MR_Word) ((MR_hl_field(1, InstB_14, 1))));
                    MR_Word UniqB_112 = ((MR_Unsigned) ((MR_hl_field(1, InstB_14, 0))) & (MR_Integer) 7);
                    MR_Word Uniq_113;

                    succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_112, &Uniq_113);
                    if (succeeded)
                    {
                      *Detism_16 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_15 = base;
                        MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_113));
                        MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfoB_23));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_18 = ((MR_Unsigned) ((MR_hl_field(2, InstB_14, 0))) & (MR_Integer) 7);
                    MR_Word InstResultsB_19 = ((MR_Word) ((MR_hl_field(2, InstB_14, 1))));
                    MR_Word BoundFunctorsB_20 = ((MR_Word) ((MR_hl_field(2, InstB_14, 2))));
                    MR_Word Uniq_21;
                    MR_Word BoundFunctors_22;

                    succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_18, &Uniq_21);
                    if (succeeded)
                    {
                      succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_52, InstResultsB_19, BoundFunctorsB_20);
                      if (succeeded)
                      {
                        switch (UniqB_18) {
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
                          check_hlds__inst_make__make_shared_bound_functors_5_p_0(Type_10, BoundFunctorsB_20, &BoundFunctors_22, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                        else
                        {
                          BoundFunctors_22 = BoundFunctorsB_20;
                          *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                        }
                        *Detism_16 = (MR_Integer) 0;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_15 = base;
                          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_21));
                          MR_hl_field(2, base, 1) = ((MR_Box) (InstResultsB_19));
                          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_22));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_14, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word InstVarsB_25 = ((MR_Word) ((MR_hl_field(3, InstB_14, 1))));
                        MR_Word SubInstB_26 = ((MR_Word) ((MR_hl_field(3, InstB_14, 2))));

                        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(Type_10, Live_11, Real_12, InstVarsB_25, SubInstB_26, InstA_13, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word HOInstInfo_24 = ((MR_Word) ((MR_hl_field(3, InstB_14, 2))));
                        MR_Word UniqB_114 = ((MR_Unsigned) ((MR_hl_field(3, InstB_14, 1))) & (MR_Integer) 7);
                        MR_Word Uniq_115;

                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_114, &Uniq_115);
                        if (succeeded)
                        {
                          *Detism_16 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_15 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_115));
                            MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_24));
                          }
                          succeeded = MR_TRUE;
                        }
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
            *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_16 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HOInstInfoA_43 = ((MR_Word) ((MR_hl_field(1, InstA_13, 1))));
        MR_Word UniqA_207 = ((MR_Unsigned) ((MR_hl_field(1, InstA_13, 0))) & (MR_Integer) 7);

        if ((HOInstInfoA_43 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(Type_10, Live_11, Real_12, UniqA_207, InstB_14, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
        else
          switch (MR_tag((MR_Word) InstB_14)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Uniq_155;

                    switch (Live_11) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          Uniq_155 = UniqA_207;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 0:
                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_207, &Uniq_155);
                        break;
                    }
                    if (succeeded)
                    {
                      *Detism_16 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_15 = base;
                        MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_155));
                        MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfoA_43));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
                    *Detism_16 = (MR_Integer) 0;
                    *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word UniqB_162 = ((MR_Unsigned) ((MR_hl_field(1, InstB_14, 0))) & (MR_Integer) 7);
                MR_Word Uniq_163;

                succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, UniqA_207, UniqB_162, &Uniq_163);
                if (succeeded)
                {
                  *Detism_16 = (MR_Integer) 1;
                  *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_15 = base;
                    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_163));
                    MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfoA_43));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_97;
                MR_Word UniqB_156 = ((MR_Unsigned) ((MR_hl_field(2, InstB_14, 0))) & (MR_Integer) 7);
                MR_Word InstResultsB_157 = ((MR_Word) ((MR_hl_field(2, InstB_14, 1))));
                MR_Word BoundFunctorsB_158 = ((MR_Word) ((MR_hl_field(2, InstB_14, 2))));
                MR_Word Uniq_159;
                MR_Word BoundFunctors_160;
                MR_Word Detism1_161;

                succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, UniqA_207, UniqB_156, &Uniq_159);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, UniqA_207, BoundFunctorsB_158, &BoundFunctors_160, &Detism1_161, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                  if (succeeded)
                  {
                    Var_97 = (MR_Integer) 1;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_15 = base;
                      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_159));
                      MR_hl_field(2, base, 1) = ((MR_Box) (InstResultsB_157));
                      MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_160));
                    }
                    parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_161, Var_97, Detism_16);
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_14, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstVarsB_166 = ((MR_Word) ((MR_hl_field(3, InstB_14, 1))));
                    MR_Word SubInstB_167 = ((MR_Word) ((MR_hl_field(3, InstB_14, 2))));

                    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(Type_10, Live_11, Real_12, InstVarsB_166, SubInstB_167, InstA_13, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_99;
                    MR_Word UniqB_164 = ((MR_Unsigned) ((MR_hl_field(3, InstB_14, 1))) & (MR_Integer) 7);
                    MR_Word Uniq_165;

                    switch (Live_11) {
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
                      Var_99 = (MR_Integer) 1;
                      succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, Var_99, UniqA_207, UniqB_164, &Uniq_165);
                      if (succeeded)
                      {
                        *Detism_16 = (MR_Integer) 1;
                        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_15 = base;
                          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_165));
                          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfoA_43));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
              }
              break;
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UniqA_28 = ((MR_Unsigned) ((MR_hl_field(2, InstA_13, 0))) & (MR_Integer) 7);
        MR_Word InstResultsA_29 = ((MR_Word) ((MR_hl_field(2, InstA_13, 1))));
        MR_Word BoundFunctorsA_30 = ((MR_Word) ((MR_hl_field(2, InstA_13, 2))));

        switch (MR_tag((MR_Word) InstB_14)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstB_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Uniq_116;
                  MR_Word BoundFunctors_117;

                  switch (Live_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, UniqA_28, (MR_Integer) 1, &Uniq_116);
                        if (succeeded)
                        {
                          BoundFunctors_117 = BoundFunctorsA_30;
                          *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_28, &Uniq_116);
                        if (succeeded)
                        {
                          succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_52, InstResultsA_29, BoundFunctorsA_30);
                          if (succeeded)
                          {
                            check_hlds__inst_make__make_shared_bound_functors_5_p_0(Type_10, BoundFunctorsA_30, &BoundFunctors_117, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                  }
                  if (succeeded)
                  {
                    *Detism_16 = (MR_Integer) 0;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_15 = base;
                      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_116));
                      MR_hl_field(2, base, 1) = ((MR_Box) (InstResultsA_29));
                      MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_117));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
                  *Detism_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Detism1_33;
              MR_Word Var_85;
              MR_Word UniqB_128 = ((MR_Unsigned) ((MR_hl_field(1, InstB_14, 0))) & (MR_Integer) 7);
              MR_Word Uniq_129;

              succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, UniqA_28, UniqB_128, &Uniq_129);
              if (succeeded)
              {
                switch (MR_tag((MR_Word) InstResultsA_29)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstResultsA_29)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundFunctors_125;
                          MR_Word InstResults_126;

                          succeeded = check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, UniqB_128, BoundFunctorsA_30, &BoundFunctors_125, &Detism1_33, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                          if (succeeded)
                          {
                            InstResults_126 = (MR_Word) (MR_mkword(1, &check_hlds__inst_abstract_unify_scalar_common_2[0]));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_15 = base;
                              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_129));
                              MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_126));
                              MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_125));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *Inst_15 = InstA_13;
                          Detism1_33 = (MR_Integer) 1;
                          *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word GroundnessResultA_34 = ((((MR_Unsigned) ((MR_hl_field(1, InstResultsA_29, 0))) >> 2)) & (MR_Integer) 3);
                      MR_Word ContainsTypes_38 = ((MR_Word) ((MR_hl_field(1, InstResultsA_29, 3))));
                      MR_Word MaybeTypeCtorPropagated_39 = ((MR_Word) ((MR_hl_field(1, InstResultsA_29, 4))));

                      switch (GroundnessResultA_34) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                        case (MR_Integer) 0:
                          {
                            MR_Word InstResults_40;
                            MR_Word Var_74;
                            MR_Word Var_75;
                            MR_Word Var_76;
                            MR_Word Var_77;
                            MR_Word BoundFunctors_122;

                            succeeded = check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, UniqB_128, BoundFunctorsA_30, &BoundFunctors_122, &Detism1_33, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                            if (succeeded)
                            {
                              Var_74 = (MR_Integer) 1;
                              Var_75 = (MR_Integer) 0;
                              Var_76 = (MR_Word) ((MR_Unsigned) 0U);
                              Var_77 = (MR_Word) ((MR_Unsigned) 0U);
                              {
                                InstResults_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, InstResults_40, 0) = (MR_Box) (((((MR_Unsigned) (Var_74) << 2)) | (MR_Unsigned) (Var_75)));
                                MR_hl_field(1, InstResults_40, 1) = ((MR_Box) (Var_76));
                                MR_hl_field(1, InstResults_40, 2) = ((MR_Box) (Var_77));
                                MR_hl_field(1, InstResults_40, 3) = ((MR_Box) (ContainsTypes_38));
                                MR_hl_field(1, InstResults_40, 4) = ((MR_Box) (MaybeTypeCtorPropagated_39));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                *Inst_15 = base;
                                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_129));
                                MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_40));
                                MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_122));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *Inst_15 = InstA_13;
                            Detism1_33 = (MR_Integer) 1;
                            *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                    }
                    break;
                }
                if (succeeded)
                {
                  Var_85 = (MR_Integer) 1;
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_33, Var_85, Detism_16);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_71;
              MR_Word UniqB_118 = ((MR_Unsigned) ((MR_hl_field(2, InstB_14, 0))) & (MR_Integer) 7);
              MR_Word BoundFunctorsB_119 = ((MR_Word) ((MR_hl_field(2, InstB_14, 2))));
              MR_Word Uniq_120;
              MR_Word BoundFunctors_121;

              succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, BoundFunctorsA_30, BoundFunctorsB_119, &BoundFunctors_121, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
              if (succeeded)
              {
                succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, *Detism_16, UniqA_28, UniqB_118, &Uniq_120);
                if (succeeded)
                {
                  Var_71 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_15 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_120));
                    MR_hl_field(2, base, 1) = ((MR_Box) (Var_71));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_121));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstB_14, 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word InstVarsB_135 = ((MR_Word) ((MR_hl_field(3, InstB_14, 1))));
                  MR_Word SubInstB_136 = ((MR_Word) ((MR_hl_field(3, InstB_14, 2))));

                  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(Type_10, Live_11, Real_12, InstVarsB_135, SubInstB_136, InstA_13, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_87;
                  MR_Word Var_89;
                  MR_Word Var_90;
                  MR_Word UniqB_131 = ((MR_Unsigned) ((MR_hl_field(3, InstB_14, 1))) & (MR_Integer) 7);
                  MR_Word Uniq_132;
                  MR_Word BoundFunctors_133;
                  MR_Word Detism1_134;

                  check_hlds__inst_abstract_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                  succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, UniqA_28, UniqB_131, &Uniq_132);
                  if (succeeded)
                  {
                    Var_87 = (MR_Integer) 0;
                    succeeded = check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(Type_10, Var_87, Real_12, UniqB_131, BoundFunctorsA_30, &BoundFunctors_133, &Detism1_134, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                    if (succeeded)
                    {
                      Var_89 = (MR_Word) ((MR_Unsigned) 0U);
                      Var_90 = (MR_Integer) 1;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_15 = base;
                        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_132));
                        MR_hl_field(2, base, 1) = ((MR_Box) (Var_89));
                        MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_133));
                      }
                      parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_134, Var_90, Detism_16);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstA_13, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVarsA_49 = ((MR_Word) ((MR_hl_field(3, InstA_13, 1))));
            MR_Word SubInstA_50 = ((MR_Word) ((MR_hl_field(3, InstA_13, 2))));

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(Type_10, Live_11, Real_12, InstVarsA_49, SubInstA_50, InstB_14, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UniqA_272 = ((MR_Unsigned) ((MR_hl_field(3, InstA_13, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfoA_275 = ((MR_Word) ((MR_hl_field(3, InstA_13, 2))));

            if ((HOInstInfoA_275 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = check_hlds__inst_abstract_unify__make_any_inst_9_p_0(Type_10, Live_11, Real_12, UniqA_272, InstB_14, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
            else
              switch (MR_tag((MR_Word) InstB_14)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Uniq_210;

                        switch (Live_11) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              Uniq_210 = UniqA_272;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 0:
                            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_272, &Uniq_210);
                            break;
                        }
                        if (succeeded)
                        {
                          *Detism_16 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_15 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_210));
                            MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfoA_275));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
                        *Detism_16 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_108;
                    MR_Word UniqB_219;
                    MR_Word Uniq_220;

                    succeeded = (Real_12 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      UniqB_219 = ((MR_Unsigned) ((MR_hl_field(1, InstB_14, 0))) & (MR_Integer) 7);
                      Var_108 = (MR_Integer) 1;
                      succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, Var_108, UniqA_272, UniqB_219, &Uniq_220);
                      if (succeeded)
                      {
                        *Detism_16 = (MR_Integer) 1;
                        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_15 = base;
                          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_220));
                          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfoA_275));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_106;
                    MR_Word Var_107;
                    MR_Word UniqB_212 = ((MR_Unsigned) ((MR_hl_field(2, InstB_14, 0))) & (MR_Integer) 7);
                    MR_Word BoundFunctorsB_213 = ((MR_Word) ((MR_hl_field(2, InstB_14, 2))));
                    MR_Word Uniq_214;
                    MR_Word BoundFunctors_215;
                    MR_Word Detism1_217;

                    succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, UniqA_272, UniqB_212, &Uniq_214);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, UniqA_272, BoundFunctorsB_213, &BoundFunctors_215, &Detism1_217, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                      if (succeeded)
                      {
                        Var_106 = (MR_Word) ((MR_Unsigned) 0U);
                        Var_107 = (MR_Integer) 1;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_15 = base;
                          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_214));
                          MR_hl_field(2, base, 1) = ((MR_Box) (Var_106));
                          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_215));
                        }
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_217, Var_107, Detism_16);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_14, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word InstVarsB_226 = ((MR_Word) ((MR_hl_field(3, InstB_14, 1))));
                        MR_Word SubInstB_227 = ((MR_Word) ((MR_hl_field(3, InstB_14, 2))));

                        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(Type_10, Live_11, Real_12, InstVarsB_226, SubInstB_227, InstA_13, Inst_15, Detism_16, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_109;
                        MR_Word UniqB_223;
                        MR_Word Uniq_224;

                        switch (Live_11) {
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
                          UniqB_223 = ((MR_Unsigned) ((MR_hl_field(3, InstB_14, 1))) & (MR_Integer) 7);
                          Var_109 = (MR_Integer) 1;
                          succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, Var_109, UniqA_272, UniqB_223, &Uniq_224);
                          if (succeeded)
                          {
                            *Detism_16 = (MR_Integer) 1;
                            *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_15 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_224));
                              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfoA_275));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_list_9_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Types_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Inst0_21;
    MR_Word Insts0_22;
    MR_Word Inst_23;
    MR_Word Insts_24;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_1_31;

    succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Inst0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      Insts0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      succeeded = check_hlds__inst_abstract_unify__make_any_inst_9_p_0(Type_19, Live_1, Real_2, Uniq_3, Inst0_21, &Inst_23, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_31);
      if (succeeded)
      {
        succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_9_p_0(Live_1, Real_2, Uniq_3, Types_20, Insts0_22, &Insts_24, &Detism2_28, STATE_VARIABLE_ModuleInfo_1_31, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Inst_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (Insts_24));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__7_7);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word Uniq_4,
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
    MR_Word BoundFunctor0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word BoundFunctors0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word BoundFunctor_23;
    MR_Word BoundFunctors_24;
    MR_Word ConsId_27 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_21, 0))));
    MR_Word ArgInsts0_28 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_21, 1))));
    MR_Word ArgTypes_29;
    MR_Word ArgInsts_30;
    MR_Word Detism1_31;
    MR_Word Detism2_32;
    MR_Word STATE_VARIABLE_ModuleInfo_1_35;

    hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_8, Type_1, ConsId_27, ArgInsts0_28, &ArgTypes_29);
    succeeded = check_hlds__inst_abstract_unify__make_any_inst_list_9_p_0(Live_2, Real_3, Uniq_4, ArgTypes_29, ArgInsts0_28, &ArgInsts_30, &Detism1_31, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_35);
    if (succeeded)
    {
      {
        BoundFunctor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundFunctor_23, 0) = ((MR_Box) (ConsId_27));
        MR_hl_field(0, BoundFunctor_23, 1) = ((MR_Box) (ArgInsts_30));
      }
      succeeded = check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(Type_1, Live_2, Real_3, Uniq_4, BoundFunctors0_22, &BoundFunctors_24, &Detism2_32, STATE_VARIABLE_ModuleInfo_1_35, STATE_VARIABLE_ModuleInfo_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_24));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_31, Detism2_32, HeadVar__7_7);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_any_inst_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word Uniq1_13,
  MR_Word Inst0_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_49;
            MR_Word Uniq_64;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, (MR_Integer) 1, Uniq1_13, &Uniq_64);
            if (succeeded)
            {
              Var_49 = (MR_Word) ((MR_Unsigned) 0U);
              *Detism_16 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_15 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_64));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_49));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_16 = (MR_Integer) 6;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInst_25 = ((MR_Word) ((MR_hl_field(1, Inst0_14, 1))));
        MR_Word Uniq0_67 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_14, 0))) & (MR_Integer) 7);
        MR_Word Uniq_68;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_67, Uniq1_13, &Uniq_68);
        if (succeeded)
        {
          *Detism_16 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_15 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_68));
            MR_hl_field(1, base, 1) = ((MR_Box) (PredInst_25));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BoundFunctors0_22 = ((MR_Word) ((MR_hl_field(2, Inst0_14, 2))));
        MR_Word BoundFunctors_23;
        MR_Word Detism1_24;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Uniq0_65 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_14, 0))) & (MR_Integer) 7);
        MR_Word Uniq_66;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_65, Uniq1_13, &Uniq_66);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__make_any_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, Uniq1_13, BoundFunctors0_22, &BoundFunctors_23, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
          if (succeeded)
          {
            Var_52 = (MR_Word) ((MR_Unsigned) 0U);
            Var_53 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_15 = base;
              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_66));
              MR_hl_field(2, base, 1) = ((MR_Box) (Var_52));
              MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_23));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Var_53, Detism_16);
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_29 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 1))));
            MR_Word InstTable0_30;
            MR_Word AnyInstTable0_31;
            MR_Word AnyInstInfo_32;
            MR_Word AnyInstName_33;
            MR_Word MaybeOldMaybeInst_34;
            MR_Word AnyInstTable1_35;
            MR_Word AnyInst_37;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &InstTable0_30);
            hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable0_30, &AnyInstTable0_31);
            {
              AnyInstInfo_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AnyInstInfo_32, 0) = ((MR_Box) (InstName_29));
              MR_hl_field(0, AnyInstInfo_32, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_13) << 2)) | (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            {
              AnyInstName_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, AnyInstName_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, AnyInstName_33, 1) = ((MR_Box) (InstName_29));
              MR_hl_field(3, AnyInstName_33, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_13) << 2)) | (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            hlds__hlds_inst_mode__search_insert_unknown_any_inst_4_p_0(AnyInstInfo_32, &MaybeOldMaybeInst_34, AnyInstTable0_31, &AnyInstTable1_35);
            if ((MaybeOldMaybeInst_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_38;
              MR_Word SubInst1_39;
              MR_Word InstTable2_40;
              MR_Word AnyInstTable2_41;
              MR_Word AnyInstTable_42;
              MR_Word InstTable_43;
              MR_Word STATE_VARIABLE_ModuleInfo_3_60;
              MR_Word STATE_VARIABLE_ModuleInfo_4_61;
              MR_Word Var_62;
              MR_Word SubInst0_69;

              hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable1_35, InstTable0_30, &InstTable1_38);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_38, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_3_60);
              hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_3_60, InstName_29, &SubInst0_69);
              hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_3_60, SubInst0_69, &SubInst1_39);
              succeeded = check_hlds__inst_abstract_unify__make_any_inst_9_p_0(Type_10, Live_11, Real_12, Uniq1_13, SubInst1_39, &AnyInst_37, Detism_16, STATE_VARIABLE_ModuleInfo_3_60, &STATE_VARIABLE_ModuleInfo_4_61);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_4_61, &InstTable2_40);
                hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable2_40, &AnyInstTable2_41);
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (AnyInst_37));
                  MR_hl_field(1, Var_62, 1) = (MR_Box) ((MR_Unsigned) (*Detism_16));
                }
                hlds__hlds_inst_mode__det_update_any_inst_4_p_0(AnyInstInfo_32, Var_62, AnyInstTable2_41, &AnyInstTable_42);
                hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable_42, InstTable2_40, &InstTable_43);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_43, STATE_VARIABLE_ModuleInfo_4_61, STATE_VARIABLE_ModuleInfo_45);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word OldMaybeInst_36 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_34, 0))));

              if ((OldMaybeInst_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  AnyInst_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, AnyInst_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, AnyInst_37, 1) = ((MR_Box) (AnyInstName_33));
                }
                *Detism_16 = (MR_Integer) 0;
              }
              else
              {
                AnyInst_37 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_36, 0))));
                *Detism_16 = ((MR_Unsigned) ((MR_hl_field(1, OldMaybeInst_36, 1))) & (MR_Integer) 7);
              }
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_45, AnyInstName_33, AnyInst_37);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_15 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (AnyInstName_33));
                }
              else
                *Inst_15 = AnyInst_37;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_27 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 1))));
            MR_Word SubInst0_28 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 2))));
            MR_Word Var_57;
            MR_Word Inst0_70;

            {
              Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_57, 1) = (MR_Box) ((MR_Unsigned) (Uniq1_13));
              MR_hl_field(3, Var_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_10, Live_11, Real_12, SubInst0_28, Var_57, &Inst0_70, Detism_16, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_45, Type_10, Inst0_70, SubInst0_28);
              succeeded = !(succeeded);
              if (succeeded)
                *Inst_15 = Inst0_70;
              else
              {
                MR_Word InstVars0_71;
                MR_Word SubInst0_72;

                succeeded = ((((MR_tag((MR_Word) Inst0_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_70, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  InstVars0_71 = ((MR_Word) ((MR_hl_field(3, Inst0_70, 1))));
                  SubInst0_72 = ((MR_Word) ((MR_hl_field(3, Inst0_70, 2))));
                  {
                    MR_Word Var_73;

                    Var_73 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_71, InstVars_27);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_15 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (Var_73));
                      MR_hl_field(3, base, 2) = ((MR_Box) (SubInst0_72));
                    }
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_15 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_27));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Inst0_70));
                  }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_18 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_14, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 2))));
            MR_Word Uniq_20;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_18, Uniq1_13, &Uniq_20);
            if (succeeded)
            {
              *Detism_16 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_15 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_20));
                MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_19));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.make_any_inst\'/9", (MR_String) "free inst var");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word Uniq_4,
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
    MR_Word BoundFunctor0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word BoundFunctors0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word BoundFunctor_23;
    MR_Word BoundFunctors_24;
    MR_Word ConsId_27 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_21, 0))));
    MR_Word ArgInsts0_28 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_21, 1))));
    MR_Word ArgTypes_29;
    MR_Word ArgInsts_30;
    MR_Word Detism1_31;
    MR_Word Detism2_32;
    MR_Word STATE_VARIABLE_ModuleInfo_1_35;

    hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_8, Type_1, ConsId_27, ArgInsts0_28, &ArgTypes_29);
    succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_9_p_0(Live_2, Real_3, Uniq_4, ArgTypes_29, ArgInsts0_28, &ArgInsts_30, &Detism1_31, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_35);
    if (succeeded)
    {
      {
        BoundFunctor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundFunctor_23, 0) = ((MR_Box) (ConsId_27));
        MR_hl_field(0, BoundFunctor_23, 1) = ((MR_Box) (ArgInsts_30));
      }
      succeeded = check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(Type_1, Live_2, Real_3, Uniq_4, BoundFunctors0_22, &BoundFunctors_24, &Detism2_32, STATE_VARIABLE_ModuleInfo_1_35, STATE_VARIABLE_ModuleInfo_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_24));
        }
        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_31, Detism2_32, HeadVar__7_7);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word Uniq1_13,
  MR_Word Inst0_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_48;
            MR_Word Uniq_62;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 0, (MR_Integer) 1, Uniq1_13, &Uniq_62);
            if (succeeded)
            {
              Var_48 = (MR_Word) ((MR_Unsigned) 0U);
              *Detism_16 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_15 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_62));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_48));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
            *Detism_16 = (MR_Integer) 6;
            *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq0_65 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_14, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_66 = ((MR_Word) ((MR_hl_field(1, Inst0_14, 1))));
        MR_Word Uniq_67;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_65, Uniq1_13, &Uniq_67);
        if (succeeded)
        {
          *Detism_16 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_15 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_67));
            MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_66));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_21 = ((MR_Word) ((MR_hl_field(2, Inst0_14, 1))));
        MR_Word BoundFunctors0_22 = ((MR_Word) ((MR_hl_field(2, Inst0_14, 2))));
        MR_Word BoundFunctors_23;
        MR_Word Detism1_24;
        MR_Word Var_51;
        MR_Word Uniq0_63 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_14, 0))) & (MR_Integer) 7);
        MR_Word Uniq_64;

        succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_63, Uniq1_13, &Uniq_64);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__make_ground_bound_functor_list_9_p_0(Type_10, Live_11, Real_12, Uniq1_13, BoundFunctors0_22, &BoundFunctors_23, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44);
          if (succeeded)
          {
            Var_51 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_15 = base;
              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_64));
              MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_21));
              MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_23));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Var_51, Detism_16);
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_28 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 1))));
            MR_Word InstTable0_29;
            MR_Word GroundInstTable0_30;
            MR_Word GroundInstInfo_31;
            MR_Word GroundInstName_32;
            MR_Word MaybeOldMaybeInst_33;
            MR_Word GroundInstTable1_34;
            MR_Word GroundInst_36;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &InstTable0_29);
            hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable0_29, &GroundInstTable0_30);
            {
              GroundInstInfo_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundInstInfo_31, 0) = ((MR_Box) (InstName_28));
              MR_hl_field(0, GroundInstInfo_31, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_13) << 2)) | (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            {
              GroundInstName_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GroundInstName_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, GroundInstName_32, 1) = ((MR_Box) (InstName_28));
              MR_hl_field(3, GroundInstName_32, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_13) << 2)) | (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)))));
            }
            hlds__hlds_inst_mode__search_insert_unknown_ground_inst_4_p_0(GroundInstInfo_31, &MaybeOldMaybeInst_33, GroundInstTable0_30, &GroundInstTable1_34);
            if ((MaybeOldMaybeInst_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_37;
              MR_Word SubInst1_38;
              MR_Word InstTable2_39;
              MR_Word GroundInstTable2_40;
              MR_Word GroundInstTable_41;
              MR_Word InstTable_42;
              MR_Word STATE_VARIABLE_ModuleInfo_3_58;
              MR_Word STATE_VARIABLE_ModuleInfo_4_59;
              MR_Word Var_60;
              MR_Word SubInst0_68;

              hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable1_34, InstTable0_29, &InstTable1_37);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_37, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_3_58);
              hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_3_58, InstName_28, &SubInst0_68);
              hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_3_58, SubInst0_68, &SubInst1_38);
              succeeded = check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(Type_10, Live_11, Real_12, Uniq1_13, SubInst1_38, &GroundInst_36, Detism_16, STATE_VARIABLE_ModuleInfo_3_58, &STATE_VARIABLE_ModuleInfo_4_59);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_4_59, &InstTable2_39);
                hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable2_39, &GroundInstTable2_40);
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (GroundInst_36));
                  MR_hl_field(1, Var_60, 1) = (MR_Box) ((MR_Unsigned) (*Detism_16));
                }
                hlds__hlds_inst_mode__det_update_ground_inst_4_p_0(GroundInstInfo_31, Var_60, GroundInstTable2_40, &GroundInstTable_41);
                hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable_41, InstTable2_39, &InstTable_42);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_42, STATE_VARIABLE_ModuleInfo_4_59, STATE_VARIABLE_ModuleInfo_44);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word OldMaybeInst_35 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_33, 0))));

              if ((OldMaybeInst_35 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  GroundInst_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GroundInst_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, GroundInst_36, 1) = ((MR_Box) (GroundInstName_32));
                }
                *Detism_16 = (MR_Integer) 0;
              }
              else
              {
                GroundInst_36 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_35, 0))));
                *Detism_16 = ((MR_Unsigned) ((MR_hl_field(1, OldMaybeInst_35, 1))) & (MR_Integer) 7);
              }
              *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_44, GroundInstName_32, GroundInst_36);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_15 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (GroundInstName_32));
                }
              else
                *Inst_15 = GroundInst_36;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_26 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 1))));
            MR_Word SubInst0_27 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 2))));
            MR_Word Var_55;
            MR_Word Inst0_69;

            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = (MR_Box) ((MR_Unsigned) (Uniq1_13));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_10, Live_11, Real_12, SubInst0_27, Var_55, &Inst0_69, Detism_16, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_44, Type_10, Inst0_69, SubInst0_27);
              succeeded = !(succeeded);
              if (succeeded)
                *Inst_15 = Inst0_69;
              else
              {
                MR_Word InstVars0_70;
                MR_Word SubInst0_71;

                succeeded = ((((MR_tag((MR_Word) Inst0_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_69, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  InstVars0_70 = ((MR_Word) ((MR_hl_field(3, Inst0_69, 1))));
                  SubInst0_71 = ((MR_Word) ((MR_hl_field(3, Inst0_69, 2))));
                  {
                    MR_Word Var_72;

                    Var_72 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_70, InstVars_26);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_15 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (Var_72));
                      MR_hl_field(3, base, 2) = ((MR_Box) (SubInst0_71));
                    }
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_15 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_26));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Inst0_69));
                  }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_18 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_14, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(3, Inst0_14, 2))));
            MR_Word Uniq_20;

            succeeded = check_hlds__inst_abstract_unify__unify_uniq_6_p_0(Live_11, Real_12, (MR_Integer) 1, Uniq0_18, Uniq1_13, &Uniq_20);
            if (succeeded)
            {
              *Detism_16 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_15 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_19));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_abstract_unify.make_ground_inst\'/9", (MR_String) "free inst var");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__make_ground_inst_list_9_p_0(
  MR_Word Live_1,
  MR_Word Real_2,
  MR_Word Uniq_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word ArgType_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word ArgInst0_21;
    MR_Word ArgInsts0_22;
    MR_Word ArgInst_23;
    MR_Word ArgInsts_24;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_1_31;

    succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgInst0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      ArgInsts0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      succeeded = check_hlds__inst_abstract_unify__make_ground_inst_9_p_0(ArgType_19, Live_1, Real_2, Uniq_3, ArgInst0_21, &ArgInst_23, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_31);
      if (succeeded)
      {
        succeeded = check_hlds__inst_abstract_unify__make_ground_inst_list_9_p_0(Live_1, Real_2, Uniq_3, ArgTypes_20, ArgInsts0_22, &ArgInsts_24, &Detism2_28, STATE_VARIABLE_ModuleInfo_1_31, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ArgInst_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (ArgInsts_24));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__7_7);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_constrained_inst_vars_10_p_0(
  MR_Word Type_11,
  MR_Word Live_12,
  MR_Word Real_13,
  MR_Word InstVarsA_14,
  MR_Word SubInstA_15,
  MR_Word InstB_16,
  MR_Word * Inst_17,
  MR_Word * Detism_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_bool succeeded;
  MR_Word Inst0_20;

  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_11, Live_12, Real_13, SubInstA_15, InstB_16, &Inst0_20, Detism_18, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
  if (succeeded)
  {
    succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_11, Inst0_20, SubInstA_15);
    succeeded = !(succeeded);
    if (succeeded)
      *Inst_17 = Inst0_20;
    else
    {
      MR_Word InstVars0_21;
      MR_Word SubInst0_22;

      succeeded = ((((MR_tag((MR_Word) Inst0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_20, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        InstVars0_21 = ((MR_Word) ((MR_hl_field(3, Inst0_20, 1))));
        SubInst0_22 = ((MR_Word) ((MR_hl_field(3, Inst0_20, 2))));
        {
          MR_Word Var_26;

          Var_26 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_abstract_unify_scalar_common_1[0]), InstVars0_21, InstVarsA_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_17 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_26));
            MR_hl_field(3, base, 2) = ((MR_Box) (SubInst0_22));
          }
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_17 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (InstVarsA_14));
          MR_hl_field(3, base, 2) = ((MR_Box) (Inst0_20));
        }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(
  MR_Word Type_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 6;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    }
    else
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorB_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word BoundFunctorsB_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ConsIdA_42 = ((MR_Word) ((MR_hl_field(0, Var_69, 0))));
      MR_Word ArgInstsA_43 = ((MR_Word) ((MR_hl_field(0, Var_69, 1))));
      MR_Word ConsIdB_44 = ((MR_Word) ((MR_hl_field(0, BoundFunctorB_37, 0))));
      MR_Word ArgInstsB_45 = ((MR_Word) ((MR_hl_field(0, BoundFunctorB_37, 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_42, ConsIdB_44);
      if (succeeded)
      {
        MR_Word ArgTypes_46;
        MR_Word ArgInsts_47;
        MR_Word Detism1_48;
        MR_Word BoundFunctorsTail_49;
        MR_Word Detism2_50;
        MR_Word STATE_VARIABLE_ModuleInfo_1_54;
        MR_Word Var_56;
        MR_Word Var_66;
        MR_Word Var_51;

        hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_8, Type_1, ConsIdA_42, ArgInstsA_43, &ArgTypes_46);
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_9_p_0(ArgTypes_46, Live_2, Real_3, ArgInstsA_43, ArgInstsB_45, &ArgInsts_47, &Detism1_48, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_54);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(Type_1, Live_2, Real_3, Var_68, BoundFunctorsB_38, &BoundFunctorsTail_49, &Detism2_50, STATE_VARIABLE_ModuleInfo_1_54, STATE_VARIABLE_ModuleInfo_9);
          if (succeeded)
          {
            Var_56 = (MR_Integer) 0;
            parse_tree__prog_data__determinism_components_3_p_0(Detism1_48, &Var_51, &Var_66);
            succeeded = (Var_56 == Var_66);
            if (succeeded)
              *HeadVar__6_6 = BoundFunctorsTail_49;
            else
            {
              MR_Word Var_57;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (ConsIdA_42));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (ArgInsts_47));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
                MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctorsTail_49));
              }
            }
            parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_48, Detism2_50, HeadVar__7_7);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Var_63;
        MR_Word Detism1_64;
        MR_Word Var_67;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_67, ConsIdA_42, ConsIdB_44);
        succeeded = ((MR_Integer) 1 == Var_67);
        if (succeeded)
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(Type_1, Live_2, Real_3, Var_68, HeadVar__5_5, HeadVar__6_6, &Detism1_64, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
        else
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(Type_1, Live_2, Real_3, HeadVar__4_4, BoundFunctorsB_38, HeadVar__6_6, &Detism1_64, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          Var_63 = (MR_Integer) 7;
          parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_64, Var_63, HeadVar__7_7);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word BoundFunctorsA_13,
  MR_Word BoundFunctorsB_14,
  MR_Word * BoundFunctors_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  MR_bool succeeded = (BoundFunctorsA_13 == (MR_Word) ((MR_Unsigned) 0U));

  if (!(succeeded))
    succeeded = (BoundFunctorsB_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *BoundFunctors_15 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_16 = (MR_Integer) 6;
    *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Detism0_18;
    MR_Word ConsIdA_19;
    MR_Word ConsIdB_21;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_bound_functor_list_2_9_p_0(Type_10, Live_11, Real_12, BoundFunctorsA_13, BoundFunctorsB_14, BoundFunctors_15, &Detism0_18, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
    if (succeeded)
    {
      succeeded = (BoundFunctorsA_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsA_13, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsA_13, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsIdA_19 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
          succeeded = (BoundFunctorsB_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsB_14, 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsB_14, 1))));
            succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsIdB_21 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
              succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_19, ConsIdB_21);
            }
          }
        }
      }
      if (succeeded)
        *Detism_16 = Detism0_18;
      else
      {
        MR_Word MaxSoln_24;
        MR_Word Var_23;

        parse_tree__prog_data__determinism_components_3_p_0(Detism0_18, &Var_23, &MaxSoln_24);
        parse_tree__prog_data__determinism_components_3_p_1(Detism_16, (MR_Integer) 0, MaxSoln_24);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Types_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word InstA_19;
    MR_Word InstsA_20;
    MR_Word InstB_21;
    MR_Word InstsB_22;
    MR_Word Inst_23;
    MR_Word Insts_24;
    MR_Word Detism1_27;
    MR_Word Detism2_28;
    MR_Word STATE_VARIABLE_ModuleInfo_1_31;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      InstA_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      InstsA_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstB_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
        InstsB_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
        succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_15, Live_2, Real_3, InstA_19, InstB_21, &Inst_23, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_1_31);
        if (succeeded)
        {
          succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_list_9_p_0(Types_16, Live_2, Real_3, InstsA_20, InstsB_22, &Insts_24, &Detism2_28, STATE_VARIABLE_ModuleInfo_1_31, STATE_VARIABLE_ModuleInfo_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Inst_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (Insts_24));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__7_7);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(
  MR_Word Type_10,
  MR_Word Live_11,
  MR_Word Real_12,
  MR_Word InstA_13,
  MR_Word InstB_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded = (InstA_13 == (MR_Word) ((MR_Unsigned) 0U));

  if (!(succeeded))
    succeeded = (InstB_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word ExpandedInstA_37;
    MR_Word ExpandedInstB_38;
    MR_Word Inst0_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_40;

    hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_13, &ExpandedInstA_37);
    hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_14, &ExpandedInstB_38);
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_3_9_p_0(Type_10, Live_11, Real_12, ExpandedInstA_37, ExpandedInstB_38, &Inst0_39, Detism_16, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
    if (succeeded)
    {
      Var_41 = (MR_Integer) 0;
      parse_tree__prog_data__determinism_components_3_p_0(*Detism_16, &Var_40, &Var_42);
      succeeded = (Var_41 == Var_42);
      if (succeeded)
        *Inst_15 = (MR_Word) ((MR_Unsigned) 4U);
      else
        *Inst_15 = Inst0_39;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word InstTable0_18;
    MR_Word UnifyInstTable0_19;
    MR_Word UnifyInstInfo_20;
    MR_Word UnifyInstName_21;
    MR_Word MaybeOldMaybeInst_22;
    MR_Word UnifyInstTable1_23;
    MR_Word Inst0_25;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
    hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable0_18, &UnifyInstTable0_19);
    {
      UnifyInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyInstInfo_20, 0) = (MR_Box) (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)));
      MR_hl_field(0, UnifyInstInfo_20, 1) = ((MR_Box) (InstA_13));
      MR_hl_field(0, UnifyInstInfo_20, 2) = ((MR_Box) (InstB_14));
    }
    {
      UnifyInstName_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UnifyInstName_21, 0) = (MR_Box) (((((MR_Unsigned) (Live_11) << 1)) | (MR_Unsigned) (Real_12)));
      MR_hl_field(1, UnifyInstName_21, 1) = ((MR_Box) (InstA_13));
      MR_hl_field(1, UnifyInstName_21, 2) = ((MR_Box) (InstB_14));
    }
    hlds__hlds_inst_mode__search_insert_unknown_unify_inst_4_p_0(UnifyInstInfo_20, &MaybeOldMaybeInst_22, UnifyInstTable0_19, &UnifyInstTable1_23);
    if ((MaybeOldMaybeInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word InstTable1_26;
      MR_Word InstTable2_27;
      MR_Word UnifyInstTable2_28;
      MR_Word UnifyInstTable_29;
      MR_Word InstTable_30;
      MR_Word STATE_VARIABLE_ModuleInfo_2_34;
      MR_Word STATE_VARIABLE_ModuleInfo_3_35;
      MR_Word Var_36;
      MR_Word ExpandedInstA_43;
      MR_Word ExpandedInstB_44;
      MR_Word Inst0_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_46;

      hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable1_23, InstTable0_18, &InstTable1_26);
      hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_2_34);
      hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_2_34, InstA_13, &ExpandedInstA_43);
      hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_2_34, InstB_14, &ExpandedInstB_44);
      succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_3_9_p_0(Type_10, Live_11, Real_12, ExpandedInstA_43, ExpandedInstB_44, &Inst0_45, Detism_16, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
      if (succeeded)
      {
        Var_47 = (MR_Integer) 0;
        parse_tree__prog_data__determinism_components_3_p_0(*Detism_16, &Var_46, &Var_48);
        succeeded = (Var_47 == Var_48);
        if (succeeded)
          Inst0_25 = (MR_Word) ((MR_Unsigned) 4U);
        else
          Inst0_25 = Inst0_45;
        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_3_35, &InstTable2_27);
        hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable2_27, &UnifyInstTable2_28);
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Inst0_25));
          MR_hl_field(1, Var_36, 1) = (MR_Box) ((MR_Unsigned) (*Detism_16));
        }
        hlds__hlds_inst_mode__det_update_unify_inst_4_p_0(UnifyInstInfo_20, Var_36, UnifyInstTable2_28, &UnifyInstTable_29);
        hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable_29, InstTable2_27, &InstTable_30);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_30, STATE_VARIABLE_ModuleInfo_3_35, STATE_VARIABLE_ModuleInfo_32);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word OldMaybeInst_24 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_22, 0))));

      if ((OldMaybeInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Inst0_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Inst0_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Inst0_25, 1) = ((MR_Box) (UnifyInstName_21));
        }
        *Detism_16 = (MR_Integer) 0;
      }
      else
      {
        Inst0_25 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_24, 0))));
        *Detism_16 = ((MR_Unsigned) ((MR_hl_field(1, OldMaybeInst_24, 1))) & (MR_Integer) 7);
      }
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_32, UnifyInstName_21, Inst0_25);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_15 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (UnifyInstName_21));
        }
      else
        *Inst_15 = Inst0_25;
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
