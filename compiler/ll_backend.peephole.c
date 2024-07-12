/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version rotd-2024-07-12
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


// :- module ll_backend.peephole.
// :- implementation.

/*
INIT mercury__ll_backend__peephole__init
ENDINIT
*/

#include "ll_backend.peephole.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0;

static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1;

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_ordinal_ordered_pattern_0[2];

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2];

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2];

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__peephole__peephole_optimize_loop_4_p_0(
  MR_Word InvalidPatterns_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__peephole__peephole_opt_window_at_instr_5_p_0(
  MR_Word InvalidPatterns_6,
  MR_Word Instr0_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
  MR_Word Lval_1,
  MR_Word Ptag_2,
  MR_Word Base_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
  MR_Word OldLval_6,
  MR_Word OldPtag_7,
  MR_Word OldBase_8,
  MR_Word Instr0_9,
  MR_Word * MaybeInstr_10);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
  MR_Word OldLval_6,
  MR_Word OldPtag_7,
  MR_Word OldBase_8,
  MR_Word Rval0_9,
  MR_Word * Rval_10);

static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
  MR_Word InvalidPatterns_5,
  MR_Word Instr0_6,
  MR_Word Instrs0_7,
  MR_Word * Instrs_8);

static MR_bool MR_CALL 
ll_backend__peephole__build_offset_mask_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned STATE_VARIABLE_Mask_0_2,
  MR_Unsigned * STATE_VARIABLE_Mask_3);

static void MR_CALL 
ll_backend__peephole__build_computed_goto_target_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_2,
  MR_Word STATE_VARIABLE_LabelMap_0_3,
  MR_Word * STATE_VARIABLE_LabelMap_4);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[19][2];

static /* final */ const MR_Box ll_backend__peephole_scalar_common_2[4][1];


struct ll_backend__peephole__vector_common_type_3_0_s {
  const MR_Word ll_backend__peephole__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ll_backend__peephole__vector_common_type_3_0_s ll_backend__peephole_vector_common_3[6];



static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[19][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[2])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[11]))),
    ((MR_Box) ((MR_String) "return from optimized away mkframe"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[16]))),
    ((MR_Box) ((MR_String) "early discard"))
  },
  /* row  18 */
  {
    ((MR_Box) (&ll_backend__peephole_scalar_common_1[17])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__peephole_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 1U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
};


static /* final */ const struct ll_backend__peephole__vector_common_type_3_0_s ll_backend__peephole_vector_common_3[6] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[0])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
  (MR_String) "pattern_incr_sp",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1 = {
  (MR_String) "pattern_mkword",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_ordinal_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__peephole____Unify____pattern_0_0_10001)),
  ((MR_Box) (ll_backend__peephole____Compare____pattern_0_0_10001)),
  (MR_String) "ll_backend.peephole",
  (MR_String) "pattern",
  { ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0 },
  { ll_backend__peephole__ll_backend__peephole__enum_ordinal_ordered_pattern_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0,

};

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__peephole__combine_decr_sp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Instrs1_6;
    MR_Integer N_7;
    MR_Word Instrs5_15;
    MR_String Comment_16;
    MR_Word Instrs2_9;
    MR_Word Instr2_10;
    MR_Word Instrs3_11;
    MR_Word Instrs4_13;
    MR_Word Instr4_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Integer Var_26;

    ll_backend__peephole__combine_decr_sp_2_p_0(Instrs0_4, &Instrs1_6);
    Var_18 = ((MR_Word) ((MR_hl_field(0, Instr0_3, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 1))));
      Var_20 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 2))));
      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            N_7 = ((MR_Integer) ((MR_hl_field(3, Var_21, (MR_Integer) 1))));
            ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs1_6, &Instrs2_9);
            succeeded = (Instrs2_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr2_10 = ((MR_Word) ((MR_hl_field(1, Instrs2_9, (MR_Integer) 0))));
              Instrs3_11 = ((MR_Word) ((MR_hl_field(1, Instrs2_9, (MR_Integer) 1))));
              Var_22 = ((MR_Word) ((MR_hl_field(0, Instr2_10, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_22, (MR_Integer) 0)))) == (MR_Integer) 25)));
              if (succeeded)
              {
                Var_26 = ((MR_Integer) ((MR_hl_field(3, Var_22, (MR_Integer) 1))));
                succeeded = (N_7 == Var_26);
                if (succeeded)
                {
                  ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs3_11, &Instrs4_13);
                  succeeded = (Instrs4_13 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Instr4_14 = ((MR_Word) ((MR_hl_field(1, Instrs4_13, (MR_Integer) 0))));
                    Instrs5_15 = ((MR_Word) ((MR_hl_field(1, Instrs4_13, (MR_Integer) 1))));
                    Var_23 = ((MR_Word) ((MR_hl_field(0, Instr4_14, (MR_Integer) 0))));
                    Comment_16 = ((MR_String) ((MR_hl_field(0, Instr4_14, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      Var_24 = ((MR_Word) ((MR_hl_field(3, Var_23, (MR_Integer) 1))));
                      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word NewInstr_17;
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 26U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (N_7));
      }
      {
        NewInstr_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewInstr_17, 0) = ((MR_Box) (Var_25));
        MR_hl_field(0, NewInstr_17, 1) = ((MR_Box) (Comment_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NewInstr_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs5_15));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_6));
      }
  }
}

void MR_CALL 
ll_backend__peephole__peephole_optimize_5_p_0(
  MR_Word GC_Method_6,
  MR_Word OptPeepMkword_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10)
{
  MR_Word InvalidPatterns_11;
  MR_Word InvalidPatterns0_12 = ((&ll_backend__peephole_vector_common_3[0 + GC_Method_6]))->ll_backend__peephole__vector_common_type_3_0__vct_3_f_0;

  switch (OptPeepMkword_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        InvalidPatterns_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InvalidPatterns_11, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(1, InvalidPatterns_11, 1) = ((MR_Box) (InvalidPatterns0_12));
      }
      break;
    case (MR_Integer) 0:
      InvalidPatterns_11 = InvalidPatterns0_12;
      break;
  }
  ll_backend__peephole__peephole_optimize_loop_4_p_0(InvalidPatterns_11, Instrs0_8, Instrs_9, Mod_10);
}

static void MR_CALL 
ll_backend__peephole__peephole_optimize_loop_4_p_0(
  MR_Word InvalidPatterns_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Instr0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Instrs0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Instrs1_11;
    MR_Word Mod0_12;
    MR_Word Mod1_13;

    ll_backend__peephole__peephole_optimize_loop_4_p_0(InvalidPatterns_1, Instrs0_8, &Instrs1_11, &Mod0_12);
    ll_backend__peephole__peephole_opt_window_at_instr_5_p_0(InvalidPatterns_1, Instr0_7, Instrs1_11, HeadVar__3_3, &Mod1_13);
    succeeded = (Mod0_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Mod1_13 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__4_4 = (MR_Integer) 0;
    else
      *HeadVar__4_4 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ll_backend__peephole__peephole_opt_window_at_instr_5_p_0(
  MR_Word InvalidPatterns_6,
  MR_Word Instr0_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10)
{
  MR_bool succeeded;
  MR_Word Instrs1_11;
  MR_Word Instrs2_12;

  ll_backend__opt_util__skip_comments_2_p_0(Instrs0_8, &Instrs1_11);
  succeeded = ll_backend__peephole__peephole_match_4_p_0(InvalidPatterns_6, Instr0_7, Instrs1_11, &Instrs2_12);
  if (succeeded)
  {
    if ((Instrs2_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *Instrs_9 = Instrs2_12;
    else
    {
      MR_Word Instr2_13 = ((MR_Word) ((MR_hl_field(1, Instrs2_12, (MR_Integer) 0))));
      MR_Word Instrs3_14 = ((MR_Word) ((MR_hl_field(1, Instrs2_12, (MR_Integer) 1))));
      MR_Word Var_15;

      ll_backend__peephole__peephole_opt_window_at_instr_5_p_0(InvalidPatterns_6, Instr2_13, Instrs3_14, Instrs_9, &Var_15);
    }
    *Mod_10 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Instrs2_16;
    MR_Word Uinstr0_17 = ((MR_Word) ((MR_hl_field(0, Instr0_7, (MR_Integer) 0))));
    MR_Word Lval_19;
    MR_Word Ptag_20;
    MR_Word Base_21;
    MR_Word Instrs1_22;
    MR_Word Var_23;
    MR_Word TypeCtorInfo_17_25;
    MR_Word Var_24;

    succeeded = ((((MR_tag((MR_Word) Uinstr0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Lval_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_17, (MR_Integer) 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_17, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
      if (succeeded)
      {
        Ptag_20 = ((MR_Word) ((MR_hl_field(2, Var_23, (MR_Integer) 0))));
        Base_21 = ((MR_Word) ((MR_hl_field(2, Var_23, (MR_Integer) 1))));
        Var_24 = (MR_Integer) 1;
        TypeCtorInfo_17_25 = (MR_Word) (&ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_17_25, ((MR_Box) (Var_24)), InvalidPatterns_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(Lval_19, Ptag_20, Base_21, Instrs1_11, &Instrs1_22);
          {
            Instrs2_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Instrs2_16, 0) = ((MR_Box) (Instr0_7));
            MR_hl_field(1, Instrs2_16, 1) = ((MR_Box) (Instrs1_22));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      *Instrs_9 = Instrs2_16;
      *Mod_10 = (MR_Integer) 1;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Instrs_9 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_7));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_8));
      }
      *Mod_10 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
  MR_Word Lval_1,
  MR_Word Ptag_2,
  MR_Word Base_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadInstr0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailInstrs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MaybeHeadInstr_16;

    ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(Lval_1, Ptag_2, Base_3, HeadInstr0_14, &MaybeHeadInstr_16);
    if ((MaybeHeadInstr_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = HeadVar__4_4;
    else
    {
      MR_Word HeadInstr_17 = ((MR_Word) ((MR_hl_field(1, MaybeHeadInstr_16, (MR_Integer) 0))));
      MR_Word TailInstrs_18;

      ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(Lval_1, Ptag_2, Base_3, TailInstrs0_15, &TailInstrs_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadInstr_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailInstrs_18));
      }
    }
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
  MR_Word OldLval_6,
  MR_Word OldPtag_7,
  MR_Word OldBase_8,
  MR_Word Instr0_9,
  MR_Word * MaybeInstr_10)
{
  MR_bool succeeded;
  MR_Word Uinstr0_11 = ((MR_Word) ((MR_hl_field(0, Instr0_9, (MR_Integer) 0))));
  MR_String Comment_12 = ((MR_String) ((MR_hl_field(0, Instr0_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) Uinstr0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstr_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 8:
        case (MR_Integer) 16:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
        case (MR_Integer) 29:
        case (MR_Integer) 30:
          *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval_13, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_13, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_16;
                MR_Word Uinstr_17;
                MR_Word Instr_18;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_14, &Rval_16);
                {
                  Uinstr_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Uinstr_17, 1) = ((MR_Box) (Lval_13));
                  MR_hl_field(3, Uinstr_17, 2) = ((MR_Box) (Rval_16));
                }
                {
                  Instr_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_18, 0) = ((MR_Box) (Uinstr_17));
                  MR_hl_field(0, Instr_18, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_18));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_103 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval0_104 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval_103, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_103, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_94;
                MR_Word Uinstr_95;
                MR_Word Instr_96;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_104, &Rval_94);
                {
                  Uinstr_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_95, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Uinstr_95, 1) = ((MR_Box) (Lval_103));
                  MR_hl_field(3, Uinstr_95, 2) = ((MR_Box) (Rval_94));
                }
                {
                  Instr_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_96, 0) = ((MR_Box) (Uinstr_95));
                  MR_hl_field(0, Instr_96, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_96));
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Targets_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word Rval0_108 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_109;
            MR_Word Uinstr_110;
            MR_Word Instr_111;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_108, &Rval_109);
            {
              Uinstr_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_110, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Uinstr_110, 1) = ((MR_Box) (Rval_109));
              MR_hl_field(3, Uinstr_110, 2) = ((MR_Box) (Targets_20));
            }
            {
              Instr_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_111, 0) = ((MR_Box) (Uinstr_110));
              MR_hl_field(0, Instr_111, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_111));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Target_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word Rval0_112 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_113;
            MR_Word Uinstr_114;
            MR_Word Instr_115;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_112, &Rval_113);
            {
              Uinstr_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_114, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Uinstr_114, 1) = ((MR_Box) (Rval_113));
              MR_hl_field(3, Uinstr_114, 2) = ((MR_Box) (Target_21));
            }
            {
              Instr_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_115, 0) = ((MR_Box) (Uinstr_114));
              MR_hl_field(0, Instr_115, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_115));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_178 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_178, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_178)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_178, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
                }
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstr_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybePtag_22 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word MaybeOffset_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 3))));
            MR_Word SizeRval0_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 4))));
            MR_Word TypeMsg_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 5))));
            MR_Word MayUseAtomicAlloc_26 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionId_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 7))));
            MR_Word MaybeReuse_28 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 8))));
            MR_Word Target_124 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Target_124, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Target_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_124, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word SizeRval_30;
                MR_Word Uinstr_116;
                MR_Word Instr_117;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, SizeRval0_24, &SizeRval_30);
                {
                  Uinstr_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_116, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(3, Uinstr_116, 1) = ((MR_Box) (Target_124));
                  MR_hl_field(3, Uinstr_116, 2) = ((MR_Box) (MaybePtag_22));
                  MR_hl_field(3, Uinstr_116, 3) = ((MR_Box) (MaybeOffset_23));
                  MR_hl_field(3, Uinstr_116, 4) = ((MR_Box) (SizeRval_30));
                  MR_hl_field(3, Uinstr_116, 5) = ((MR_Box) (TypeMsg_25));
                  MR_hl_field(3, Uinstr_116, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomicAlloc_26));
                  MR_hl_field(3, Uinstr_116, 7) = ((MR_Box) (MaybeRegionId_27));
                  MR_hl_field(3, Uinstr_116, 8) = ((MR_Box) (MaybeReuse_28));
                }
                {
                  Instr_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_117, 0) = ((MR_Box) (Uinstr_116));
                  MR_hl_field(0, Instr_117, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_117));
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_168 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_168, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_168)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_168, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
                }
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval0_125 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_126;
            MR_Word Uinstr_127;
            MR_Word Instr_128;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_125, &Rval_126);
            {
              Uinstr_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_127, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Uinstr_127, 1) = ((MR_Box) (Rval_126));
            }
            {
              Instr_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_128, 0) = ((MR_Box) (Uinstr_127));
              MR_hl_field(0, Instr_128, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_128));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_129 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_130;
            MR_Word Uinstr_131;
            MR_Word Instr_132;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_129, &Rval_130);
            {
              Uinstr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_131, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Uinstr_131, 1) = ((MR_Box) (Rval_130));
            }
            {
              Instr_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_132, 0) = ((MR_Box) (Uinstr_131));
              MR_hl_field(0, Instr_132, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_132));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_183 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_183, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_183)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_183, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
                }
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_31 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Rval0_133 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_134;
            MR_Word Uinstr_135;
            MR_Word Instr_136;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_133, &Rval_134);
            {
              Uinstr_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_135, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Uinstr_135, 1) = ((MR_Box) (Rval_134));
              MR_hl_field(3, Uinstr_135, 2) = (MR_Box) ((MR_Unsigned) (Reason_31));
            }
            {
              Instr_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_136, 0) = ((MR_Box) (Uinstr_135));
              MR_hl_field(0, Instr_136, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_136));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_173 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_173, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_173)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_173, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
                }
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval0_137 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word Rval_138;
            MR_Word Uinstr_139;
            MR_Word Instr_140;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_137, &Rval_138);
            {
              Uinstr_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_139, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(3, Uinstr_139, 1) = ((MR_Box) (Rval_138));
            }
            {
              Instr_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_140, 0) = ((MR_Box) (Uinstr_139));
              MR_hl_field(0, Instr_140, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_140));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval0_163 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_163, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_163)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_163, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_9));
                }
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Lval0_32 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word Label_33 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 3))));
            MR_Word Rval0_150 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_32, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_32, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_141;
                MR_Word Uinstr_142;
                MR_Word Instr_143;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_150, &Rval_141);
                {
                  Uinstr_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_142, 0) = ((MR_Box) ((MR_Unsigned) 32U));
                  MR_hl_field(3, Uinstr_142, 1) = ((MR_Box) (Rval_141));
                  MR_hl_field(3, Uinstr_142, 2) = ((MR_Box) (Lval0_32));
                  MR_hl_field(3, Uinstr_142, 3) = ((MR_Box) (Label_33));
                }
                {
                  Instr_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_143, 0) = ((MR_Box) (Uinstr_142));
                  MR_hl_field(0, Instr_143, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_143));
                }
              }
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval0_35 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word LCSRval0_36 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word LCRval_37;
            MR_Word LCSRval_38;
            MR_Word Uinstr_154;
            MR_Word Instr_155;
            MR_Word Label_156 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 3))));

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCRval0_35, &LCRval_37);
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCSRval0_36, &LCSRval_38);
            {
              Uinstr_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_154, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(3, Uinstr_154, 1) = ((MR_Box) (LCRval_37));
              MR_hl_field(3, Uinstr_154, 2) = ((MR_Box) (LCSRval_38));
              MR_hl_field(3, Uinstr_154, 3) = ((MR_Box) (Label_156));
            }
            {
              Instr_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_155, 0) = ((MR_Box) (Uinstr_154));
              MR_hl_field(0, Instr_155, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_155));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word Uinstr_157;
            MR_Word Instr_158;
            MR_Word LCRval0_159 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 1))));
            MR_Word LCSRval0_160 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, (MR_Integer) 2))));
            MR_Word LCRval_161;
            MR_Word LCSRval_162;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCRval0_159, &LCRval_161);
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCSRval0_160, &LCSRval_162);
            {
              Uinstr_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_157, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(3, Uinstr_157, 1) = ((MR_Box) (LCRval_161));
              MR_hl_field(3, Uinstr_157, 2) = ((MR_Box) (LCSRval_162));
            }
            {
              Instr_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_158, 0) = ((MR_Box) (Uinstr_157));
              MR_hl_field(0, Instr_158, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_158));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
  MR_Word OldLval_6,
  MR_Word OldPtag_7,
  MR_Word OldBase_8,
  MR_Word Rval0_9,
  MR_Word * Rval_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Rval_10 = Rval0_9;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(2, Rval0_9, (MR_Integer) 0))));
        MR_Word BaseRval0_21 = ((MR_Word) ((MR_hl_field(2, Rval0_9, (MR_Integer) 1))));
        MR_Word BaseRval_22;

        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, BaseRval0_21, &BaseRval_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Ptag_20));
          MR_hl_field(2, base, 1) = ((MR_Box) (BaseRval_22));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 5:
          *Rval_10 = Rval0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 1))));
            MR_Word BaseRval0_39 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 2))));
            MR_Word BaseRval_40;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, BaseRval0_39, &BaseRval_40);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_23));
              MR_hl_field(3, base, 2) = ((MR_Box) (BaseRval_40));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnOp_11 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 1))));
            MR_Word RvalA0_12 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 2))));
            MR_Word Var_41;

            succeeded = (UnOp_11 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RvalA0_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_41 = ((MR_Word) ((MR_hl_field(0, RvalA0_12, (MR_Integer) 0))));
                succeeded = ll_backend__llds____Unify____lval_0_0(OldLval_6, Var_41);
              }
            }
            if (succeeded)
            {
              uint8_t OldPtagUint8_13 = (uint8_t) (OldPtag_7);
              MR_Word Var_29;
              MR_Integer Var_30;

              Var_30 = mercury__uint8__cast_to_int_1_f_0(OldPtagUint8_13);
              {
                Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_29));
              }
            }
            else
            {
              MR_Word RvalA_14;

              ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, RvalA0_12, &RvalA_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_11));
                MR_hl_field(3, base, 2) = ((MR_Box) (RvalA_14));
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 1))));
            MR_Word RvalB0_16 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 3))));
            MR_Word RvalA0_36 = ((MR_Word) ((MR_hl_field(3, Rval0_9, (MR_Integer) 2))));
            MR_Integer RvalB0Int_17;
            MR_Word Var_31;
            uint8_t OldPtagUint8_32;
            MR_Word Var_42;
            MR_Integer Var_43;

            succeeded = (BinOp_15 == (MR_Word) ((MR_Unsigned) 8U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RvalA0_36)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_42 = ((MR_Word) ((MR_hl_field(0, RvalA0_36, (MR_Integer) 0))));
                succeeded = ll_backend__llds____Unify____lval_0_0(OldLval_6, Var_42);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) RvalB0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalB0_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(3, RvalB0_16, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      RvalB0Int_17 = ((MR_Integer) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
                      OldPtagUint8_32 = (uint8_t) (OldPtag_7);
                      Var_43 = mercury__uint8__cast_to_int_1_f_0(OldPtagUint8_32);
                      succeeded = (RvalB0Int_17 == Var_43);
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) OldBase_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldBase_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
              *Rval_10 = OldBase_8;
            else
            {
              MR_Word RvalB_19;
              MR_Word RvalA_33;

              ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, RvalA0_36, &RvalA_33);
              ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, RvalB0_16, &RvalB_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_15));
                MR_hl_field(3, base, 2) = ((MR_Box) (RvalA_33));
                MR_hl_field(3, base, 3) = ((MR_Box) (RvalB_19));
              }
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
  MR_Word InvalidPatterns_5,
  MR_Word Instr0_6,
  MR_Word Instrs0_7,
  MR_Word * Instrs_8)
{
  MR_bool succeeded;
  MR_Word Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_6, (MR_Integer) 0))));
  MR_String Comment0_10 = ((MR_String) ((MR_hl_field(0, Instr0_6, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) Uinstr0_9)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TargetLval_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word SourceRval_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
            MR_Word Base_25;
            MR_Word Var_37;
            MR_Word Redoip1_27;
            MR_Word Skipped_28;
            MR_Word Rest_29;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_41;

            succeeded = ((((MR_tag((MR_Word) TargetLval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TargetLval_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_37 = ((MR_Word) ((MR_hl_field(3, TargetLval_18, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
              if (succeeded)
              {
                Base_25 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
                Var_39 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_38, 0) = ((MR_Box) (Base_25));
                  MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
                }
                succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(Instrs0_7, Var_38, Var_39, &Redoip1_27, &Skipped_28, &Rest_29);
                if (succeeded)
                {
                  Var_41 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Skipped_28);
                  succeeded = (Var_41 == (MR_Integer) 0);
                }
                if (succeeded)
                {
                  MR_Word Instrs1_30;
                  MR_Word RedoipUinstr_31;
                  MR_Word RedoipInstr_32;
                  MR_Word Var_42;
                  MR_Word Var_43;

                  Instrs1_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Skipped_28, Rest_29);
                  {
                    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(3, Var_43, 1) = ((MR_Box) (Redoip1_27));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_42, 1) = ((MR_Box) (Var_43));
                  }
                  {
                    RedoipUinstr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, RedoipUinstr_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, RedoipUinstr_31, 1) = ((MR_Box) (TargetLval_18));
                    MR_hl_field(3, RedoipUinstr_31, 2) = ((MR_Box) (Var_42));
                  }
                  {
                    RedoipInstr_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, RedoipInstr_32, 0) = ((MR_Box) (RedoipUinstr_31));
                    MR_hl_field(0, RedoipInstr_32, 1) = ((MR_Box) (Comment0_10));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Instrs_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (RedoipInstr_32));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_30));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word TypeCtorInfo_42_52;
                  MR_Word Between_33;
                  MR_Word After_34;
                  MR_Word Var_44;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_String Var_47;
                  MR_Word Var_48;
                  MR_Word Var_49;
                  MR_Integer Var_35;

                  succeeded = (Base_25 == (MR_Word) ((MR_Unsigned) 8U));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) SourceRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SourceRval_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_44 = ((MR_Word) ((MR_hl_field(3, SourceRval_19, (MR_Integer) 1))));
                      succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_44, (MR_Integer) 0)))) == (MR_Integer) 12)));
                      if (succeeded)
                      {
                        Var_45 = ((MR_Word) ((MR_hl_field(3, Var_44, (MR_Integer) 1))));
                        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 8U));
                        if (succeeded)
                        {
                          succeeded = ll_backend__opt_util__straight_alternative_3_p_0(Instrs0_7, &Between_33, &After_34);
                          if (succeeded)
                          {
                            Var_46 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Between_33);
                            succeeded = (Var_46 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_47 = (MR_String) "curfr==maxfr";
                              succeeded = mercury__string__sub_string_search_3_p_0(Comment0_10, Var_47, &Var_35);
                              if (succeeded)
                              {
                                TypeCtorInfo_42_52 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                Var_49 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[18]));
                                Var_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_52, Var_49, After_34);
                                *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_52, Between_33, Var_48);
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word NondetFrameInfo_15 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word MaybeRedoip0_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
            MR_Word Redoip0_144;
            MR_Word Redoip1_149;
            MR_Word Skipped_150;
            MR_Word Rest_151;
            MR_Word AllowedBases_147;
            MR_Word Var_173;
            MR_Word Var_174;

            succeeded = (MaybeRedoip0_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Redoip0_144 = ((MR_Word) ((MR_hl_field(1, MaybeRedoip0_16, (MR_Integer) 0))));
              if (((MR_tag((MR_Word) NondetFrameInfo_15)) == (MR_Integer) 1))
                AllowedBases_147 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[8]));
              else
                AllowedBases_147 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[9]));
              Var_173 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(Instrs0_7, AllowedBases_147, Var_173, &Redoip1_149, &Skipped_150, &Rest_151);
              if (succeeded)
              {
                Var_174 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Skipped_150);
                succeeded = (Var_174 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Instrs1_152;
                MR_Word NewInstr_153;
                MR_Word Var_175;
                MR_Word Var_176;

                Instrs1_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Skipped_150, Rest_151);
                {
                  Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_176, 0) = ((MR_Box) (Redoip1_149));
                }
                {
                  Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, Var_175, 1) = ((MR_Box) (NondetFrameInfo_15));
                  MR_hl_field(3, Var_175, 2) = ((MR_Box) (Var_176));
                }
                {
                  NewInstr_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewInstr_153, 0) = ((MR_Box) (Var_175));
                  MR_hl_field(0, NewInstr_153, 1) = ((MR_Box) (Comment0_10));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Instrs_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewInstr_153));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_152));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word InstrsPrime_159;
                MR_Word Instr1_154;
                MR_Word Instrs2_155;
                MR_Word Test_156;
                MR_Word Target_157;
                MR_String Comment1_158;
                MR_Word Var_177;
                MR_Word Instrs1_209;

                ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs0_7, &Instrs1_209);
                succeeded = (Instrs1_209 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Instr1_154 = ((MR_Word) ((MR_hl_field(1, Instrs1_209, (MR_Integer) 0))));
                  Instrs2_155 = ((MR_Word) ((MR_hl_field(1, Instrs1_209, (MR_Integer) 1))));
                  Var_177 = ((MR_Word) ((MR_hl_field(0, Instr1_154, (MR_Integer) 0))));
                  Comment1_158 = ((MR_String) ((MR_hl_field(0, Instr1_154, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) Var_177)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_177, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    Test_156 = ((MR_Word) ((MR_hl_field(3, Var_177, (MR_Integer) 1))));
                    Target_157 = ((MR_Word) ((MR_hl_field(3, Var_177, (MR_Integer) 2))));
                    succeeded = (Redoip0_144 == (MR_Word) ((MR_Unsigned) 8U));
                    if (succeeded)
                    {
                      if ((Target_157 == (MR_Word) ((MR_Unsigned) 8U)))
                        succeeded = MR_TRUE;
                      else
                      if ((Target_157 == (MR_Word) ((MR_Unsigned) 4U)))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      MR_Word Var_178;
                      MR_Word Var_179;
                      MR_Word Var_181;
                      MR_Word Var_182;
                      MR_Word Var_183;

                      {
                        Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(3, Var_179, 1) = ((MR_Box) (Test_156));
                        MR_hl_field(3, Var_179, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      }
                      {
                        Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_178, 0) = ((MR_Box) (Var_179));
                        MR_hl_field(0, Var_178, 1) = ((MR_Box) (Comment1_158));
                      }
                      {
                        Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Var_183, 1) = ((MR_Box) (NondetFrameInfo_15));
                        MR_hl_field(3, Var_183, 2) = ((MR_Box) (MR_mkword(1, &ll_backend__peephole_scalar_common_2[3])));
                      }
                      {
                        Var_182 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_182, 0) = ((MR_Box) (Var_183));
                        MR_hl_field(0, Var_182, 1) = ((MR_Box) (Comment0_10));
                      }
                      {
                        Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
                        MR_hl_field(1, Var_181, 1) = ((MR_Box) (Instrs2_155));
                      }
                      {
                        InstrsPrime_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, InstrsPrime_159, 0) = ((MR_Box) (Var_178));
                        MR_hl_field(1, InstrsPrime_159, 1) = ((MR_Box) (Var_181));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = ((MR_tag((MR_Word) Redoip0_144)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Target_157 == (MR_Word) ((MR_Unsigned) 8U));
                        if (succeeded)
                        {
                          MR_Word Var_186;
                          MR_Word Var_187;
                          MR_Word Var_189;

                          {
                            Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                            MR_hl_field(3, Var_187, 1) = ((MR_Box) (Test_156));
                            MR_hl_field(3, Var_187, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                          }
                          {
                            Var_186 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_186, 0) = ((MR_Box) (Var_187));
                            MR_hl_field(0, Var_186, 1) = ((MR_Box) (Comment1_158));
                          }
                          {
                            Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_189, 0) = ((MR_Box) (Instr0_6));
                            MR_hl_field(1, Var_189, 1) = ((MR_Box) (Instrs2_155));
                          }
                          {
                            InstrsPrime_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, InstrsPrime_159, 0) = ((MR_Box) (Var_186));
                            MR_hl_field(1, InstrsPrime_159, 1) = ((MR_Box) (Var_189));
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word Var_190;
                          MR_Word Var_191;
                          MR_Word Var_192;

                          succeeded = (Target_157 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            {
                              Var_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_192, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                              MR_hl_field(3, Var_192, 1) = ((MR_Box) (Test_156));
                              MR_hl_field(3, Var_192, 2) = ((MR_Box) (Redoip0_144));
                            }
                            {
                              Var_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_191, 0) = ((MR_Box) (Var_192));
                              MR_hl_field(0, Var_191, 1) = ((MR_Box) (Comment1_158));
                            }
                            {
                              Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_190, 0) = ((MR_Box) (Var_191));
                              MR_hl_field(1, Var_190, 1) = ((MR_Box) (Instrs2_155));
                            }
                            {
                              InstrsPrime_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, InstrsPrime_159, 0) = ((MR_Box) (Instr0_6));
                              MR_hl_field(1, InstrsPrime_159, 1) = ((MR_Box) (Var_190));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  *Instrs_8 = InstrsPrime_159;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String Comment2_161;
                  MR_Word Instrs2_216;
                  MR_Word Var_193;
                  MR_Word Var_194;
                  MR_Word Instrs1_210;
                  MR_Word Instr1_211;

                  ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs0_7, &Instrs1_210);
                  succeeded = (Instrs1_210 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Instr1_211 = ((MR_Word) ((MR_hl_field(1, Instrs1_210, (MR_Integer) 0))));
                    Instrs2_216 = ((MR_Word) ((MR_hl_field(1, Instrs1_210, (MR_Integer) 1))));
                    Var_193 = ((MR_Word) ((MR_hl_field(0, Instr1_211, (MR_Integer) 0))));
                    Comment2_161 = ((MR_String) ((MR_hl_field(0, Instr1_211, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_193)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_193, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      Var_194 = ((MR_Word) ((MR_hl_field(3, Var_193, (MR_Integer) 1))));
                      succeeded = (Var_194 == (MR_Word) ((MR_Unsigned) 8U));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_195;

                    {
                      Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_195, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[10])));
                      MR_hl_field(0, Var_195, 1) = ((MR_Box) (Comment2_161));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_195));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs2_216));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Straight_162;
                    MR_Word Instrs2_215;
                    MR_Word Var_198;
                    MR_Word Var_199;
                    MR_Word Instrs1_212;
                    MR_Word Instr1_213;

                    succeeded = (Redoip0_144 == (MR_Word) ((MR_Unsigned) 8U));
                    if (succeeded)
                    {
                      ll_backend__opt_util__no_stack_straight_line_3_p_0(Instrs0_7, &Straight_162, &Instrs1_212);
                      succeeded = (Instrs1_212 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Instr1_213 = ((MR_Word) ((MR_hl_field(1, Instrs1_212, (MR_Integer) 0))));
                        Instrs2_215 = ((MR_Word) ((MR_hl_field(1, Instrs1_212, (MR_Integer) 1))));
                        Var_198 = ((MR_Word) ((MR_hl_field(0, Instr1_213, (MR_Integer) 0))));
                        succeeded = ((((MR_tag((MR_Word) Var_198)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_198, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          Var_199 = ((MR_Word) ((MR_hl_field(3, Var_198, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_199)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_199, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_203;

                      {
                        Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_203, 0) = ((MR_Box) (&ll_backend__peephole_scalar_common_1[12]));
                        MR_hl_field(1, Var_203, 1) = ((MR_Box) (Instrs2_215));
                      }
                      *Instrs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Straight_162, Var_203);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word TypeCtorInfo_96_219;
                      MR_Word UntilSucceed_166;
                      MR_String SucceedComment_167;
                      MR_Word DiscardUinstr_168;
                      MR_String DiscardComment_169;
                      MR_Word DiscardInstr_170;
                      MR_String Var_206;
                      MR_Word Var_207;
                      MR_Word Var_208;
                      MR_Word Instrs2_214;

                      succeeded = (Redoip0_144 == (MR_Word) ((MR_Unsigned) 8U));
                      if (succeeded)
                      {
                        succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(Instrs0_7, &UntilSucceed_166, &SucceedComment_167, &Instrs2_214);
                        if (succeeded)
                        {
                          DiscardUinstr_168 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[14]));
                          Var_206 = (MR_String) " (added discard)";
                          DiscardComment_169 = mercury__string__f_43_43_2_f_0(SucceedComment_167, Var_206);
                          TypeCtorInfo_96_219 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                          {
                            DiscardInstr_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, DiscardInstr_170, 0) = ((MR_Box) (DiscardUinstr_168));
                            MR_hl_field(0, DiscardInstr_170, 1) = ((MR_Box) (DiscardComment_169));
                          }
                          {
                            Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_207, 0) = ((MR_Box) (Instr0_6));
                            MR_hl_field(1, Var_207, 1) = ((MR_Box) (UntilSucceed_166));
                          }
                          {
                            Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_208, 0) = ((MR_Box) (DiscardInstr_170));
                            MR_hl_field(1, Var_208, 1) = ((MR_Box) (Instrs2_214));
                          }
                          *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_96_219, Var_207, Var_208);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word SelectorRval_11 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word MaybeLabels_12 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
            MR_Word LabelMap_53;
            MR_Word LabelValsList_54;
            MR_Word Var_77;
            MR_Word Label_55;
            MR_Word Var_78;
            MR_Word Var_79;

            Var_77 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
            ll_backend__peephole__build_computed_goto_target_map_4_p_0(MaybeLabels_12, (MR_Integer) 0, Var_77, &LabelMap_53);
            mercury__one_or_more_map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelMap_53, &LabelValsList_54);
            succeeded = (LabelValsList_54 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_78 = ((MR_Word) ((MR_hl_field(1, LabelValsList_54, (MR_Integer) 0))));
              Var_79 = ((MR_Word) ((MR_hl_field(1, LabelValsList_54, (MR_Integer) 1))));
              succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Label_55 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word GotoInstr_57;
              MR_Word Var_80;
              MR_Word Var_81;

              {
                Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_81, 0) = ((MR_Box) (Label_55));
              }
              {
                Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
              }
              {
                GotoInstr_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, GotoInstr_57, 0) = ((MR_Box) (Var_80));
                MR_hl_field(0, GotoInstr_57, 1) = ((MR_Box) (Comment0_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Instrs_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (GotoInstr_57));
                MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_7));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeCtorInfo_19_128;
              MR_Word LabelValsA_58;
              MR_Word LabelValsB_59;
              MR_Word FewerValsLabel_60;
              MR_Word FewerOoMVals_61;
              MR_Word OtherLabel_62;
              MR_Integer FirstVal_63;
              MR_Word LaterVals_64;
              MR_Word CondRval_65;
              MR_Word CommentInstr_72;
              MR_Word BranchUinstr_73;
              MR_Word BranchInstr_74;
              MR_Word GotoUinstr_75;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_107;
              MR_String Var_108;
              MR_Word Var_109;
              MR_String Var_110;
              MR_String Var_111;
              MR_Word Var_112;
              MR_String Var_113;
              MR_String Var_114;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word GotoInstr_117;
              MR_Word LabelA_120;
              MR_Word OoMValsA_121;
              MR_Word LabelB_122;
              MR_Word OoMValsB_123;
              MR_Word ValsA_124;
              MR_Word ValsB_125;
              MR_Integer NumValsA_126;
              MR_Integer NumValsB_127;

              succeeded = (LabelValsList_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LabelValsA_58 = ((MR_Word) ((MR_hl_field(1, LabelValsList_54, (MR_Integer) 0))));
                Var_82 = ((MR_Word) ((MR_hl_field(1, LabelValsList_54, (MR_Integer) 1))));
                succeeded = (Var_82 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LabelValsB_59 = ((MR_Word) ((MR_hl_field(1, Var_82, (MR_Integer) 0))));
                  Var_83 = ((MR_Word) ((MR_hl_field(1, Var_82, (MR_Integer) 1))));
                  succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    LabelA_120 = ((MR_Word) ((MR_hl_field(0, LabelValsA_58, (MR_Integer) 0))));
                    OoMValsA_121 = ((MR_Word) ((MR_hl_field(0, LabelValsA_58, (MR_Integer) 1))));
                    LabelB_122 = ((MR_Word) ((MR_hl_field(0, LabelValsB_59, (MR_Integer) 0))));
                    OoMValsB_123 = ((MR_Word) ((MR_hl_field(0, LabelValsB_59, (MR_Integer) 1))));
                    TypeCtorInfo_19_128 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                    ValsA_124 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_19_128, OoMValsA_121);
                    ValsB_125 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_19_128, OoMValsB_123);
                    mercury__list__length_2_p_0(TypeCtorInfo_19_128, ValsA_124, &NumValsA_126);
                    mercury__list__length_2_p_0(TypeCtorInfo_19_128, ValsB_125, &NumValsB_127);
                    succeeded = (NumValsA_126 <= NumValsB_127);
                    if (succeeded)
                    {
                      FewerValsLabel_60 = LabelA_120;
                      FewerOoMVals_61 = OoMValsA_121;
                      OtherLabel_62 = LabelB_122;
                    }
                    else
                    {
                      FewerValsLabel_60 = LabelB_122;
                      FewerOoMVals_61 = OoMValsB_123;
                      OtherLabel_62 = LabelA_120;
                    }
                    FirstVal_63 = ((MR_Integer) ((MR_hl_field(0, FewerOoMVals_61, (MR_Integer) 0))));
                    LaterVals_64 = ((MR_Word) ((MR_hl_field(0, FewerOoMVals_61, (MR_Integer) 1))));
                    if ((LaterVals_64 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_86;
                      MR_Word Var_87;

                      {
                        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_87, 0) = ((MR_Box) (FirstVal_63));
                      }
                      {
                        Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_86, 1) = ((MR_Box) (Var_87));
                      }
                      {
                        CondRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, CondRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, CondRval_65, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[1])));
                        MR_hl_field(3, CondRval_65, 2) = ((MR_Box) (SelectorRval_11));
                        MR_hl_field(3, CondRval_65, 3) = ((MR_Box) (Var_86));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Unsigned Mask_68;
                      MR_Word SelectorRvalUint_69;
                      MR_Word QueryRval_70;
                      MR_Word SelectedBitUintRval_71;
                      MR_Word Var_88;
                      MR_Word Var_90;
                      MR_Word Var_92;
                      MR_Word Var_95;
                      MR_Word Var_98;
                      MR_Word Var_100;
                      MR_Word Var_101;
                      MR_Word Var_102;
                      MR_Word Var_104;

                      {
                        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_88, 0) = ((MR_Box) (FirstVal_63));
                        MR_hl_field(1, Var_88, 1) = ((MR_Box) (LaterVals_64));
                      }
                      succeeded = ll_backend__peephole__build_offset_mask_3_p_0(Var_88, (MR_Unsigned) 0U, &Mask_68);
                      if (succeeded)
                      {
                        Var_90 = (MR_Word) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[0]));
                        Var_92 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[2]));
                        Var_95 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[3]));
                        Var_98 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[4]));
                        Var_102 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[5]));
                        Var_104 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[6]));
                        {
                          SelectorRvalUint_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, SelectorRvalUint_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(3, SelectorRvalUint_69, 1) = ((MR_Box) (Var_90));
                          MR_hl_field(3, SelectorRvalUint_69, 2) = ((MR_Box) (SelectorRval_11));
                        }
                        {
                          QueryRval_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, QueryRval_70, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(3, QueryRval_70, 1) = ((MR_Box) (Var_92));
                          MR_hl_field(3, QueryRval_70, 2) = ((MR_Box) (Var_95));
                          MR_hl_field(3, QueryRval_70, 3) = ((MR_Box) (SelectorRvalUint_69));
                        }
                        {
                          Var_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_101, 0) = ((MR_Box) (Mask_68));
                        }
                        {
                          Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
                        }
                        {
                          SelectedBitUintRval_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, SelectedBitUintRval_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(3, SelectedBitUintRval_71, 1) = ((MR_Box) (Var_98));
                          MR_hl_field(3, SelectedBitUintRval_71, 2) = ((MR_Box) (Var_100));
                          MR_hl_field(3, SelectedBitUintRval_71, 3) = ((MR_Box) (QueryRval_70));
                        }
                        {
                          CondRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, CondRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(3, CondRval_65, 1) = ((MR_Box) (Var_102));
                          MR_hl_field(3, CondRval_65, 2) = ((MR_Box) (SelectedBitUintRval_71));
                          MR_hl_field(3, CondRval_65, 3) = ((MR_Box) (Var_104));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                    {
                      Var_108 = (MR_String) "";
                      Var_111 = (MR_String) " part 1";
                      {
                        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Comment0_10));
                      }
                      {
                        CommentInstr_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CommentInstr_72, 0) = ((MR_Box) (Var_107));
                        MR_hl_field(0, CommentInstr_72, 1) = ((MR_Box) (Var_108));
                      }
                      {
                        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_109, 0) = ((MR_Box) (FewerValsLabel_60));
                      }
                      {
                        BranchUinstr_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, BranchUinstr_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(3, BranchUinstr_73, 1) = ((MR_Box) (CondRval_65));
                        MR_hl_field(3, BranchUinstr_73, 2) = ((MR_Box) (Var_109));
                      }
                      Var_110 = mercury__string__f_43_43_2_f_0(Comment0_10, Var_111);
                      Var_114 = (MR_String) " part 2";
                      {
                        BranchInstr_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, BranchInstr_74, 0) = ((MR_Box) (BranchUinstr_73));
                        MR_hl_field(0, BranchInstr_74, 1) = ((MR_Box) (Var_110));
                      }
                      {
                        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_112, 0) = ((MR_Box) (OtherLabel_62));
                      }
                      {
                        GotoUinstr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GotoUinstr_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GotoUinstr_75, 1) = ((MR_Box) (Var_112));
                      }
                      Var_113 = mercury__string__f_43_43_2_f_0(Comment0_10, Var_114);
                      {
                        GotoInstr_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, GotoInstr_117, 0) = ((MR_Box) (GotoUinstr_75));
                        MR_hl_field(0, GotoInstr_117, 1) = ((MR_Box) (Var_113));
                      }
                      {
                        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_116, 0) = ((MR_Box) (GotoInstr_117));
                        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Instrs0_7));
                      }
                      {
                        Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_115, 0) = ((MR_Box) (BranchInstr_74));
                        MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Instrs_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (CommentInstr_72));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Var_115));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word CodeAddr_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 2))));
            MR_Word Taken_129;

            succeeded = ll_backend__opt_util__is_const_condition_2_p_0(Rval_13, &Taken_129);
            if (succeeded)
            {
              switch (Taken_129) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Instrs_8 = Instrs0_7;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_136;
                    MR_Word Var_137;

                    {
                      Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_137, 1) = ((MR_Box) (CodeAddr_14));
                    }
                    {
                      Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
                      MR_hl_field(0, Var_136, 1) = ((MR_Box) (Comment0_10));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_136));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_7));
                    }
                  }
                  break;
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Instrs1_130;
              MR_Word Instr1_131;
              MR_Word Var_138;
              MR_Word Var_139;

              ll_backend__opt_util__skip_comments_2_p_0(Instrs0_7, &Instrs1_130);
              succeeded = (Instrs1_130 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Instr1_131 = ((MR_Word) ((MR_hl_field(1, Instrs1_130, (MR_Integer) 0))));
                Var_138 = ((MR_Word) ((MR_hl_field(0, Instr1_131, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Var_138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_138, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_139 = ((MR_Word) ((MR_hl_field(3, Var_138, (MR_Integer) 1))));
                  succeeded = ll_backend__llds____Unify____code_addr_0_0(CodeAddr_14, Var_139);
                }
              }
              if (succeeded)
              {
                *Instrs_8 = Instrs0_7;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Label_134;
                MR_Word Var_135;

                succeeded = ((MR_tag((MR_Word) CodeAddr_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Label_134 = ((MR_Word) ((MR_hl_field(1, CodeAddr_14, (MR_Integer) 0))));
                  succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(Label_134, Instrs0_7, &Var_135);
                  if (succeeded)
                  {
                    *Instrs_8 = Instrs0_7;
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word Instrs1_220;
            MR_Word Instr1_221;
            MR_Word Instrs2_222;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word Var_229;

            ll_backend__opt_util__skip_comments_2_p_0(Instrs0_7, &Instrs1_220);
            succeeded = (Instrs1_220 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr1_221 = ((MR_Word) ((MR_hl_field(1, Instrs1_220, (MR_Integer) 0))));
              Instrs2_222 = ((MR_Word) ((MR_hl_field(1, Instrs1_220, (MR_Integer) 1))));
              Var_226 = ((MR_Word) ((MR_hl_field(0, Instr1_221, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Var_226)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_226, (MR_Integer) 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                Var_227 = ((MR_Word) ((MR_hl_field(3, Var_226, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_227)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_229 = ((MR_Word) ((MR_hl_field(0, Var_227, (MR_Integer) 0))));
                  succeeded = ll_backend__llds____Unify____lval_0_0(Lval_17, Var_229);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_6));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs2_222));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word TypeCtorInfo_9_143;
            MR_Integer N_20 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_9, (MR_Integer) 1))));
            MR_Word Between_141;
            MR_Word Remain_142;

            succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0), ((MR_Box) ((MR_Integer) 0)), InvalidPatterns_5);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_7, N_20, &Between_141, &Remain_142);
              if (succeeded)
              {
                TypeCtorInfo_9_143 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_9_143, Between_141, Remain_142);
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
ll_backend__peephole__build_offset_mask_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned STATE_VARIABLE_Mask_0_2,
  MR_Unsigned * STATE_VARIABLE_Mask_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Mask_3 = STATE_VARIABLE_Mask_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Val_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Unsigned ValUint_10;
      MR_Unsigned STATE_VARIABLE_Mask_14_14;
      MR_Unsigned Var_15;
      MR_Unsigned Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_STATE_VARIABLE_Mask_0_2;

      ValUint_10 = mercury__uint__cast_from_int_1_f_0(Val_7);
      succeeded = (ValUint_10 < (MR_Unsigned) 32U);
      if (succeeded)
      {
        Var_16 = (MR_Unsigned) 1U;
        Var_15 = mercury__uint__f_60_60_117_2_f_0(Var_16, ValUint_10);
        STATE_VARIABLE_Mask_14_14 = (STATE_VARIABLE_Mask_0_2 | Var_15);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vals_8;
        next_value_of_STATE_VARIABLE_Mask_0_2 = STATE_VARIABLE_Mask_14_14;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Mask_0_2 = next_value_of_STATE_VARIABLE_Mask_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__peephole__build_computed_goto_target_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_2,
  MR_Word STATE_VARIABLE_LabelMap_0_3,
  MR_Word * STATE_VARIABLE_LabelMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LabelMap_4 = STATE_VARIABLE_LabelMap_0_3;
    else
    {
      MR_Word MaybeLabel_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeLabels_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_LabelMap_16_16;
      MR_Integer Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Val_2;
      MR_Word next_value_of_STATE_VARIABLE_LabelMap_0_3;

      if ((MaybeLabel_9 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_LabelMap_16_16 = STATE_VARIABLE_LabelMap_0_3;
      else
      {
        MR_Word Label_13 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_9, (MR_Integer) 0))));

        mercury__one_or_more_map__add_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Label_13)), ((MR_Box) (Val_2)), STATE_VARIABLE_LabelMap_0_3, &STATE_VARIABLE_LabelMap_16_16);
      }
      Var_17 = (MR_Integer) ((MR_Unsigned) Val_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_10;
      next_value_of_Val_2 = Var_17;
      next_value_of_STATE_VARIABLE_LabelMap_0_3 = STATE_VARIABLE_LabelMap_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Val_2 = next_value_of_Val_2;
      STATE_VARIABLE_LabelMap_0_3 = next_value_of_STATE_VARIABLE_LabelMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__peephole____Unify____pattern_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__peephole____Compare____pattern_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__peephole__init(void)
{
}

void mercury__ll_backend__peephole__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0);
}

void mercury__ll_backend__peephole__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__peephole__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.peephole.
