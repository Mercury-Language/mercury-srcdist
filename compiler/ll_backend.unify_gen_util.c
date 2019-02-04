/*
** Automatically generated from `unify_gen_util.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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


// :- module ll_backend.unify_gen_util.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_util__init
ENDINIT
*/

#include "ll_backend.unify_gen_util.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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




static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1;

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_value_ordered_assign_dir_0[3];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0[3];

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0[3];

static MR_bool MR_CALL 
ll_backend__unify_gen_util__IntroducedFrom__pred__get_cons_arg_widths__154__1_2_p_0(
  MR_Word AddedBy_22,
  MR_Word HeadVar__2_33);

static MR_Word MR_CALL 
ll_backend__unify_gen_util__IntroducedFrom__func__get_cons_arg_widths__143__1_1_f_0(
  MR_Word LambdaHeadVar__1_27);

static void MR_CALL 
ll_backend__unify_gen_util__or_packed_rvals_lag_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6);

static MR_bool MR_CALL 
ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_1[2][5];

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_3[4][2];

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_4[7][1];




static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_1[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_util_scalar_common_1[0])),
    ((MR_Box) (ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_3[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_util_scalar_common_4[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_util_scalar_common_4[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0 = {
  (MR_String) "assign_left",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1 = {
  (MR_String) "assign_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2 = {
  (MR_String) "assign_unused",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_value_ordered_assign_dir_0[3] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0[3] = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_0,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_1,
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_functor_desc_assign_dir_0_2
};

static const MR_Integer ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_assign_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_util",
  (MR_String) "assign_dir",
  {     ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_name_ordered_assign_dir_0 },
  {     ll_backend__unify_gen_util__ll_backend__unify_gen_util__enum_value_ordered_assign_dir_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__unify_gen_util__ll_backend__unify_gen_util__functor_number_map_assign_dir_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen_util__IntroducedFrom__pred__get_cons_arg_widths__154__1_2_p_0(
  MR_Word AddedBy_22,
  MR_Word HeadVar__2_33)
{
  {
    MR_bool succeeded = (AddedBy_22 == HeadVar__2_33);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen_util__IntroducedFrom__func__get_cons_arg_widths__143__1_1_f_0(
  MR_Word LambdaHeadVar__1_27)
{
  {
    MR_Word LambdaHeadVar__2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 2))));

    return LambdaHeadVar__2_28;
  }
}

void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____assign_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_util__compute_assign_direction_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgMode_6,
  MR_Word ArgType_7,
  MR_Word * Dir_8)
{
  {
    MR_Word LeftFromToInsts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_6, (MR_Integer) 0))));
    MR_Word RightFromToInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_6, (MR_Integer) 1))));
    MR_Word LeftTopMode_11;
    MR_Word RightTopMode_12;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_5, LeftFromToInsts_9, ArgType_7, &LeftTopMode_11);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_5, RightFromToInsts_10, ArgType_7, &RightTopMode_12);
    switch (LeftTopMode_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RightTopMode_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "test in arg of [de]construction");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            *Dir_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (RightTopMode_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Dir_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (RightTopMode_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.compute_assign_direction\'/4", (MR_String) "some strange unify");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            *Dir_8 = (MR_Integer) 2;
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(
  MR_Word Fill_4,
  MR_Word MaskedRval0_5,
  MR_Word * MaskedRval_6)
{
  switch (Fill_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaskedRval_6 = MaskedRval0_5;
      break;
    case (MR_Integer) 2:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[4])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[5])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[6])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
    case (MR_Integer) 5:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[1])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
    case (MR_Integer) 6:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[2])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
    case (MR_Integer) 4:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *MaskedRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[3])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval0_5));
        }
      }
      break;
  }
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5)
{
  {
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ShiftInt_7));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      ShiftedRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_util_scalar_common_3[3])));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 3) = ((MR_Box) (Var_10));
    }
    return ShiftedRval_6;
  }
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__left_shift_rval_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7)
{
  {
    MR_bool succeeded;
    MR_Word ShiftedRval_8;
    MR_Integer ShiftInt_9 = (MR_Integer) (Shift_6);
    MR_Word CastRval_10;

    ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(Fill_7, Rval_5, &CastRval_10);
    succeeded = (ShiftInt_9 == (MR_Integer) 0);
    if (succeeded)
      ShiftedRval_8 = CastRval_10;
    else
    {
      MR_Word Var_11;
      MR_Integer Var_12;

      succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
          succeeded = (Var_12 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        ShiftedRval_8 = CastRval_10;
      else
      {
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (ShiftInt_9));
        }
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Var_16));
        }
        {
          ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_util_scalar_common_3[2])));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (CastRval_10));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 3) = ((MR_Box) (Var_15));
        }
      }
    }
    return ShiftedRval_8;
  }
}

void MR_CALL 
ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  switch (Fill_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 6:
    case (MR_Integer) 4:
      *Rval_6 = Rval0_5;
      break;
    case (MR_Integer) 2:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[1])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[2])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_util_scalar_common_4[3])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__unify_gen_util__or_packed_rvals_2_p_0(
  MR_Word Rvals_3,
  MR_Word * OrAllRval_4)
{
  if ((Rvals_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *OrAllRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_util_scalar_common_3[1]));
  else
  {
    MR_Word HeadRval_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 0))));
    MR_Word TailRvals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 1))));

    ll_backend__unify_gen_util__or_packed_rvals_lag_3_p_0(HeadRval_5, TailRvals_6, OrAllRval_4);
  }
}

static void MR_CALL 
ll_backend__unify_gen_util__or_packed_rvals_lag_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6)
{
  if ((TailRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *OrAllRval_6 = HeadRval_4;
  else
  {
    MR_Word HeadTailRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 0))));
    MR_Word TailTailRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 1))));
    MR_Word TailOrAllRval_9;

    ll_backend__unify_gen_util__or_packed_rvals_lag_3_p_0(HeadTailRval_7, TailTailRvals_8, &TailOrAllRval_9);
    *OrAllRval_6 = ll_backend__unify_gen_util__or_two_rvals_2_f_0(HeadRval_4, TailOrAllRval_9);
  }
}

MR_Word MR_CALL 
ll_backend__unify_gen_util__or_two_rvals_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word OrRval_6;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1))
      {
        MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));

        succeeded = (Var_10 == (MR_Integer) 0);
      }
      else
      if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 2))
      {
        MR_Unsigned Var_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Var_17, (MR_Integer) 0))));

        succeeded = (Var_8 == (MR_Unsigned) 0U);
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      OrRval_6 = RvalB_5;
    else
    {
      MR_Word Var_18;

      succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
        {
          MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));

          succeeded = (Var_14 == (MR_Integer) 0);
        }
        else
        if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2))
        {
          MR_Unsigned Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));

          succeeded = (Var_12 == (MR_Unsigned) 0U);
        }
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
        OrRval_6 = RvalA_4;
      else
      {
        {
          OrRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OrRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), OrRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_util_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), OrRval_6, 2) = ((MR_Box) (RvalA_4));
          MR_hl_field(MR_mktag(3), OrRval_6, 3) = ((MR_Box) (RvalB_5));
        }
      }
    }
    return OrRval_6;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_util__IntroducedFrom__pred__get_cons_arg_widths__154__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    conv0_LambdaHeadVar__2_28 = ll_backend__unify_gen_util__IntroducedFrom__func__get_cons_arg_widths__143__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_53,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsPosWidths_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsRepnDefn_9;

    succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_5, ConsId_6, &ConsRepnDefn_9);
    if (succeeded)
    {
      MR_Word ConsArgRepns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 4))));
      MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 3))));
      MR_Word ArgPosWidths_12;
      MR_Integer NumAllArgs_14;
      MR_Integer NumConsArgs_15;
      MR_Integer NumExtraArgs_16;

      ArgPosWidths_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), (MR_Word) (&ll_backend__unify_gen_util_scalar_common_2[0]), ConsArgRepns_10);
      mercury__list__length_2_p_0(TypeInfo_for_T_53, AllArgs_7, &NumAllArgs_14);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_10, &NumConsArgs_15);
      NumExtraArgs_16 = (MR_Integer) ((MR_Unsigned) NumAllArgs_14 - (MR_Unsigned) NumConsArgs_15);
      succeeded = (NumExtraArgs_16 == (MR_Integer) 0);
      if (succeeded)
        mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_53, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), AllArgs_7, ArgPosWidths_12, AllArgsPosWidths_8);
      else
      {
        succeeded = (NumExtraArgs_16 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word TypeInfo_58_58;
          MR_Word ExtraArgs_17;
          MR_Word ConsArgs_18;
          MR_Integer InitOffset_23;
          MR_Word ExtraArgsPosWidths_24;
          MR_Word ConsArgsPosWidths_25;
          MR_Word RemoteSecTag_20;
          MR_Word conv1_AllArgsPosWidths_8;

          mercury__list__det_split_list_4_p_0(TypeInfo_for_T_53, NumExtraArgs_16, AllArgs_7, &ExtraArgs_17, &ConsArgs_18);
          succeeded = ((((MR_tag((MR_Word) ConsTag_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 0))) == (MR_Integer) 15)));
          if (succeeded)
          {
            RemoteSecTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2))));
            {
              MR_Word AddedBy_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSecTag_20, (MR_Integer) 1))));
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__unify_gen_util_scalar_common_1[1]));
                MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0_2));
                MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (AddedBy_22));
                MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140ll_backend.unify_gen_util.get_cons_arg_widths\'/4", (MR_String) "AddedBy != sectag_added_by_unify");
              InitOffset_23 = (MR_Integer) 1;
            }
          }
          else
            InitOffset_23 = (MR_Integer) 0;
          ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(InitOffset_23, ExtraArgs_17, &ExtraArgsPosWidths_24);
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_53, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), ConsArgs_18, ArgPosWidths_12, &ConsArgsPosWidths_25);
          {
            TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_58_58, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
            MR_hl_field(MR_mktag(0), TypeInfo_58_58, 1) = ((MR_Box) (TypeInfo_for_T_53));
            MR_hl_field(MR_mktag(0), TypeInfo_58_58, 2) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0));
          }
          conv1_AllArgsPosWidths_8 = mercury__list__f_43_43_2_f_0(TypeInfo_58_58, (MR_Word) (ExtraArgsPosWidths_24), (MR_Word) (ConsArgsPosWidths_25));
          *AllArgsPosWidths_8 = (MR_Word) (conv1_AllArgsPosWidths_8);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_util.get_cons_arg_widths\'/4", (MR_String) "too few arguments");
            return;
          }
        }
      }
    }
    else
    {
      ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0((MR_Integer) 0, AllArgs_7, AllArgsPosWidths_8);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Arg_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgPosWidth_8;
    MR_Word ArgsPosWidths_9;
    MR_Word PosWidth_10;
    MR_Word Var_11 = (MR_Word) (CurOffset_1);
    MR_Word Var_12 = (MR_Word) (CurOffset_1);
    MR_Integer Var_13;

    {
      PosWidth_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PosWidth_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), PosWidth_10, 1) = ((MR_Box) (Var_12));
    }
    {
      ArgPosWidth_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgPosWidth_8, 0) = Arg_6;
      MR_hl_field(MR_mktag(0), ArgPosWidth_8, 1) = ((MR_Box) (PosWidth_10));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) CurOffset_1 + (MR_Unsigned) (MR_Integer) 1);
    ll_backend__unify_gen_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(Var_13, Args_7, &ArgsPosWidths_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosWidth_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsPosWidths_9));
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(
  MR_Word IntTag_4,
  MR_Word * Const_5,
  MR_Word * Type_6)
{
  switch (MR_tag((MR_Word) IntTag_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Int_7));
        }
        *Type_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (UInt_8));
        }
        *Type_6 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_4, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8_9));
        }
        *Type_6 = (MR_Integer) 2;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8_10));
            }
            *Type_6 = (MR_Integer) 3;
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_11 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16_11));
            }
            *Type_6 = (MR_Integer) 4;
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_12 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16_12));
            }
            *Type_6 = (MR_Integer) 5;
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_13 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32_13));
            }
            *Type_6 = (MR_Integer) 6;
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32_14));
            }
            *Type_6 = (MR_Integer) 7;
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_15 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64_15);
            }
            *Type_6 = (MR_Integer) 8;
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64_16);
            }
            *Type_6 = (MR_Integer) 9;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_util____Unify____assign_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_util____Unify____assign_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_util____Compare____assign_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_util____Compare____assign_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__unify_gen_util__init(void)
{
}

void mercury__ll_backend__unify_gen_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_assign_dir_0);
}

void mercury__ll_backend__unify_gen_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_util.
