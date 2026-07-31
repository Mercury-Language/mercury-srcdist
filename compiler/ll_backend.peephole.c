/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version rotd-2026-07-31
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
#include "integer.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_DuFunctorDesc ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_0;

static const MR_PseudoTypeInfo ll_backend__peephole__ll_backend__peephole__field_types_computed_goto_method_0_1[1];

static const MR_DuFunctorDesc ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_1;

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_1[1];

static const MR_DuPtagLayout ll_backend__peephole__ll_backend__peephole__du_ptag_ordered_computed_goto_method_0[2];

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_name_ordered_computed_goto_method_0[2];

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_computed_goto_method_0[2];

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
ll_backend__peephole____Compare____computed_goto_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____computed_goto_method_0_0(
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
ll_backend__peephole__peephole_pick_fewer_vals_label_5_p_0(
  MR_Word LabelValsA_6,
  MR_Word LabelValsB_7,
  MR_Word * FewerValsLabel_8,
  MR_Word * FewerOoMVals_9,
  MR_Word * OtherLabel_10);

static void MR_CALL 
ll_backend__peephole__build_computed_goto_target_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_2,
  MR_Word STATE_VARIABLE_LabelMap_0_3,
  MR_Word * STATE_VARIABLE_LabelMap_4);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____computed_goto_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__peephole____Compare____computed_goto_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[18][2];

static /* final */ const MR_Box ll_backend__peephole_scalar_common_2[5][1];


struct ll_backend__peephole__vector_common_type_3_0_s {
  const MR_Word ll_backend__peephole__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ll_backend__peephole__vector_common_type_3_0_s ll_backend__peephole_vector_common_3[6];



static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[2])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (MR_Unsigned) 1U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[3])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[10]))),
    ((MR_Box) ((MR_String) "return from optimized away mkframe"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[15]))),
    ((MR_Box) ((MR_String) "early discard"))
  },
  /* row  17 */
  {
    ((MR_Box) (&ll_backend__peephole_scalar_common_1[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__peephole_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 1U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
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


static const MR_DuFunctorDesc ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_0 = {
  (MR_String) "method_bitmap",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__peephole__ll_backend__peephole__field_types_computed_goto_method_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_1 = {
  (MR_String) "method_or",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__peephole__ll_backend__peephole__field_types_computed_goto_method_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_0[1] = { &ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_0 };

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_1[1] = { &ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_1 };

static const MR_DuPtagLayout ll_backend__peephole__ll_backend__peephole__du_ptag_ordered_computed_goto_method_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__peephole__ll_backend__peephole__du_stag_ordered_computed_goto_method_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__peephole__ll_backend__peephole__du_name_ordered_computed_goto_method_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_0,
  &ll_backend__peephole__ll_backend__peephole__du_functor_desc_computed_goto_method_0_1
};

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_computed_goto_method_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__peephole__ll_backend__peephole__type_ctor_info_computed_goto_method_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__peephole____Unify____computed_goto_method_0_0_10001)),
  ((MR_Box) (ll_backend__peephole____Compare____computed_goto_method_0_0_10001)),
  (MR_String) "ll_backend.peephole",
  (MR_String) "computed_goto_method",
  { ll_backend__peephole__ll_backend__peephole__du_name_ordered_computed_goto_method_0 },
  { ll_backend__peephole__ll_backend__peephole__du_ptag_ordered_computed_goto_method_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__peephole__ll_backend__peephole__functor_number_map_computed_goto_method_0,

};

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

static void MR_CALL 
ll_backend__peephole____Compare____computed_goto_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__peephole____Unify____computed_goto_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
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
    MR_Word Instr0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Instr0_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(3, Var_18, 1))));
      Var_20 = ((MR_Word) ((MR_hl_field(3, Var_18, 2))));
      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_21, 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            N_7 = ((MR_Integer) ((MR_hl_field(3, Var_21, 1))));
            ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs1_6, &Instrs2_9);
            succeeded = (Instrs2_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr2_10 = ((MR_Word) ((MR_hl_field(1, Instrs2_9, 0))));
              Instrs3_11 = ((MR_Word) ((MR_hl_field(1, Instrs2_9, 1))));
              Var_22 = ((MR_Word) ((MR_hl_field(0, Instr2_10, 0))));
              succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_22, 0)))) == (MR_Integer) 25)));
              if (succeeded)
              {
                Var_26 = ((MR_Integer) ((MR_hl_field(3, Var_22, 1))));
                succeeded = (N_7 == Var_26);
                if (succeeded)
                {
                  ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs3_11, &Instrs4_13);
                  succeeded = (Instrs4_13 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Instr4_14 = ((MR_Word) ((MR_hl_field(1, Instrs4_13, 0))));
                    Instrs5_15 = ((MR_Word) ((MR_hl_field(1, Instrs4_13, 1))));
                    Var_23 = ((MR_Word) ((MR_hl_field(0, Instr4_14, 0))));
                    Comment_16 = ((MR_String) ((MR_hl_field(0, Instr4_14, 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      Var_24 = ((MR_Word) ((MR_hl_field(3, Var_23, 1))));
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
    MR_Word Instr0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Instrs0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
      MR_Word Instr2_13 = ((MR_Word) ((MR_hl_field(1, Instrs2_12, 0))));
      MR_Word Instrs3_14 = ((MR_Word) ((MR_hl_field(1, Instrs2_12, 1))));
      MR_Word Var_15;

      ll_backend__peephole__peephole_opt_window_at_instr_5_p_0(InvalidPatterns_6, Instr2_13, Instrs3_14, Instrs_9, &Var_15);
    }
    *Mod_10 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Instrs2_16;
    MR_Word Uinstr0_17 = ((MR_Word) ((MR_hl_field(0, Instr0_7, 0))));
    MR_Word Lval_19;
    MR_Word Ptag_20;
    MR_Word Base_21;
    MR_Word Instrs1_22;
    MR_Word Var_23;
    MR_Word TypeCtorInfo_17_25;
    MR_Word Var_24;

    succeeded = ((((MR_tag((MR_Word) Uinstr0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_17, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Lval_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_17, 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_17, 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
      if (succeeded)
      {
        Ptag_20 = ((MR_Word) ((MR_hl_field(2, Var_23, 0))));
        Base_21 = ((MR_Word) ((MR_hl_field(2, Var_23, 1))));
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
    MR_Word HeadInstr0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word TailInstrs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word MaybeHeadInstr_16;

    ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(Lval_1, Ptag_2, Base_3, HeadInstr0_14, &MaybeHeadInstr_16);
    if ((MaybeHeadInstr_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = HeadVar__4_4;
    else
    {
      MR_Word HeadInstr_17 = ((MR_Word) ((MR_hl_field(1, MaybeHeadInstr_16, 0))));
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
  MR_Word Uinstr0_11 = ((MR_Word) ((MR_hl_field(0, Instr0_9, 0))));
  MR_String Comment_12 = ((MR_String) ((MR_hl_field(0, Instr0_9, 1))));

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
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_11, 0))))) {
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
            MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval_13, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_13, 0)))) == (MR_Integer) 10)));
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
            MR_Word Lval_104 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval0_105 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval_104, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval_104)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_104, 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_95;
                MR_Word Uinstr_96;
                MR_Word Instr_97;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_105, &Rval_95);
                {
                  Uinstr_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_96, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Uinstr_96, 1) = ((MR_Box) (Lval_104));
                  MR_hl_field(3, Uinstr_96, 2) = ((MR_Box) (Rval_95));
                }
                {
                  Instr_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_97, 0) = ((MR_Box) (Uinstr_96));
                  MR_hl_field(0, Instr_97, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_97));
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeMaxIndex_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word Targets_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 3))));
            MR_Word Rval0_109 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_110;
            MR_Word Uinstr_111;
            MR_Word Instr_112;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_109, &Rval_110);
            {
              Uinstr_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_111, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Uinstr_111, 1) = ((MR_Box) (Rval_110));
              MR_hl_field(3, Uinstr_111, 2) = ((MR_Box) (MaybeMaxIndex_20));
              MR_hl_field(3, Uinstr_111, 3) = ((MR_Box) (Targets_21));
            }
            {
              Instr_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_112, 0) = ((MR_Box) (Uinstr_111));
              MR_hl_field(0, Instr_112, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_112));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Target_22 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word Rval0_113 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_114;
            MR_Word Uinstr_115;
            MR_Word Instr_116;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_113, &Rval_114);
            {
              Uinstr_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_115, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Uinstr_115, 1) = ((MR_Box) (Rval_114));
              MR_hl_field(3, Uinstr_115, 2) = ((MR_Box) (Target_22));
            }
            {
              Instr_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_116, 0) = ((MR_Box) (Uinstr_115));
              MR_hl_field(0, Instr_116, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_116));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_192 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_192, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_192)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_192, 0)))) == (MR_Integer) 10)));
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
            MR_Word MaybePtag_23 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word MaybeOffset_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 3))));
            MR_Word SizeRval0_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 4))));
            MR_Word TypeMsg_26 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 5))));
            MR_Word MayUseAtomicAlloc_27 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_11, 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionId_28 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 7))));
            MR_Word MaybeReuse_29 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 8))));
            MR_Word Target_125 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Target_125, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Target_125)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Target_125, 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word SizeRval_31;
                MR_Word Uinstr_117;
                MR_Word Instr_118;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, SizeRval0_25, &SizeRval_31);
                {
                  Uinstr_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_117, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(3, Uinstr_117, 1) = ((MR_Box) (Target_125));
                  MR_hl_field(3, Uinstr_117, 2) = ((MR_Box) (MaybePtag_23));
                  MR_hl_field(3, Uinstr_117, 3) = ((MR_Box) (MaybeOffset_24));
                  MR_hl_field(3, Uinstr_117, 4) = ((MR_Box) (SizeRval_31));
                  MR_hl_field(3, Uinstr_117, 5) = ((MR_Box) (TypeMsg_26));
                  MR_hl_field(3, Uinstr_117, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomicAlloc_27));
                  MR_hl_field(3, Uinstr_117, 7) = ((MR_Box) (MaybeRegionId_28));
                  MR_hl_field(3, Uinstr_117, 8) = ((MR_Box) (MaybeReuse_29));
                }
                {
                  Instr_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_118, 0) = ((MR_Box) (Uinstr_117));
                  MR_hl_field(0, Instr_118, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_118));
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_176 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_176, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_176)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_176, 0)))) == (MR_Integer) 10)));
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
            MR_Word Rval0_126 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_127;
            MR_Word Uinstr_128;
            MR_Word Instr_129;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_126, &Rval_127);
            {
              Uinstr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_128, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Uinstr_128, 1) = ((MR_Box) (Rval_127));
            }
            {
              Instr_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_129, 0) = ((MR_Box) (Uinstr_128));
              MR_hl_field(0, Instr_129, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_129));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_130 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_131;
            MR_Word Uinstr_132;
            MR_Word Instr_133;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_130, &Rval_131);
            {
              Uinstr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_132, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Uinstr_132, 1) = ((MR_Box) (Rval_131));
            }
            {
              Instr_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_133, 0) = ((MR_Box) (Uinstr_132));
              MR_hl_field(0, Instr_133, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_133));
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_200 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_200, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_200)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_200, 0)))) == (MR_Integer) 10)));
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
            MR_Word Reason_32 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_11, 2))) & (MR_Integer) 7);
            MR_Word Rval0_134 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_135;
            MR_Word Uinstr_136;
            MR_Word Instr_137;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_134, &Rval_135);
            {
              Uinstr_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_136, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Uinstr_136, 1) = ((MR_Box) (Rval_135));
              MR_hl_field(3, Uinstr_136, 2) = (MR_Box) ((MR_Unsigned) (Reason_32));
            }
            {
              Instr_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_137, 0) = ((MR_Box) (Uinstr_136));
              MR_hl_field(0, Instr_137, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_137));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_184 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_184, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_184)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_184, 0)))) == (MR_Integer) 10)));
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
            MR_Word Rval0_138 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word Rval_139;
            MR_Word Uinstr_140;
            MR_Word Instr_141;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_138, &Rval_139);
            {
              Uinstr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_140, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(3, Uinstr_140, 1) = ((MR_Box) (Rval_139));
            }
            {
              Instr_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_141, 0) = ((MR_Box) (Uinstr_140));
              MR_hl_field(0, Instr_141, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_141));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval0_164 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_164, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_164)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_164, 0)))) == (MR_Integer) 10)));
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
            MR_Word Lval0_33 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word Label_34 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 3))));
            MR_Word Rval0_151 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));

            succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_33, OldLval_6);
            if (succeeded)
              *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              succeeded = ((((MR_tag((MR_Word) Lval0_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_33, 0)))) == (MR_Integer) 10)));
              if (succeeded)
                *MaybeInstr_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_142;
                MR_Word Uinstr_143;
                MR_Word Instr_144;

                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, Rval0_151, &Rval_142);
                {
                  Uinstr_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Uinstr_143, 0) = ((MR_Box) ((MR_Unsigned) 32U));
                  MR_hl_field(3, Uinstr_143, 1) = ((MR_Box) (Rval_142));
                  MR_hl_field(3, Uinstr_143, 2) = ((MR_Box) (Lval0_33));
                  MR_hl_field(3, Uinstr_143, 3) = ((MR_Box) (Label_34));
                }
                {
                  Instr_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Instr_144, 0) = ((MR_Box) (Uinstr_143));
                  MR_hl_field(0, Instr_144, 1) = ((MR_Box) (Comment_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeInstr_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Instr_144));
                }
              }
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval0_36 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word LCSRval0_37 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word LCRval_38;
            MR_Word LCSRval_39;
            MR_Word Uinstr_155;
            MR_Word Instr_156;
            MR_Word Label_157 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 3))));

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCRval0_36, &LCRval_38);
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCSRval0_37, &LCSRval_39);
            {
              Uinstr_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_155, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(3, Uinstr_155, 1) = ((MR_Box) (LCRval_38));
              MR_hl_field(3, Uinstr_155, 2) = ((MR_Box) (LCSRval_39));
              MR_hl_field(3, Uinstr_155, 3) = ((MR_Box) (Label_157));
            }
            {
              Instr_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_156, 0) = ((MR_Box) (Uinstr_155));
              MR_hl_field(0, Instr_156, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_156));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word Uinstr_158;
            MR_Word Instr_159;
            MR_Word LCRval0_160 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 1))));
            MR_Word LCSRval0_161 = ((MR_Word) ((MR_hl_field(3, Uinstr0_11, 2))));
            MR_Word LCRval_162;
            MR_Word LCSRval_163;

            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCRval0_160, &LCRval_162);
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(OldLval_6, OldPtag_7, OldBase_8, LCSRval0_161, &LCSRval_163);
            {
              Uinstr_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Uinstr_158, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(3, Uinstr_158, 1) = ((MR_Box) (LCRval_162));
              MR_hl_field(3, Uinstr_158, 2) = ((MR_Box) (LCSRval_163));
            }
            {
              Instr_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Instr_159, 0) = ((MR_Box) (Uinstr_158));
              MR_hl_field(0, Instr_159, 1) = ((MR_Box) (Comment_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstr_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Instr_159));
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
        MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(2, Rval0_9, 0))));
        MR_Word BaseRval0_21 = ((MR_Word) ((MR_hl_field(2, Rval0_9, 1))));
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
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 5:
          *Rval_10 = Rval0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 1))));
            MR_Word BaseRval0_39 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 2))));
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
            MR_Word UnOp_11 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 1))));
            MR_Word RvalA0_12 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 2))));
            MR_Word Var_41;

            succeeded = (UnOp_11 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RvalA0_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_41 = ((MR_Word) ((MR_hl_field(0, RvalA0_12, 0))));
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
            MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 1))));
            MR_Word RvalB0_16 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 3))));
            MR_Word RvalA0_36 = ((MR_Word) ((MR_hl_field(3, Rval0_9, 2))));
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
                Var_42 = ((MR_Word) ((MR_hl_field(0, RvalA0_36, 0))));
                succeeded = ll_backend__llds____Unify____lval_0_0(OldLval_6, Var_42);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) RvalB0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalB0_16, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(3, RvalB0_16, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      RvalB0Int_17 = ((MR_Integer) ((MR_hl_field(1, Var_31, 0))));
                      OldPtagUint8_32 = (uint8_t) (OldPtag_7);
                      Var_43 = mercury__uint8__cast_to_int_1_f_0(OldPtagUint8_32);
                      succeeded = (RvalB0Int_17 == Var_43);
                      if (succeeded)
                        succeeded = ((((MR_tag((MR_Word) OldBase_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OldBase_8, 0)))) == (MR_Integer) 1)));
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
  MR_Word Uinstr0_9 = ((MR_Word) ((MR_hl_field(0, Instr0_6, 0))));
  MR_String Comment0_10 = ((MR_String) ((MR_hl_field(0, Instr0_6, 1))));

  switch (MR_tag((MR_Word) Uinstr0_9)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_9, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TargetLval_19 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word SourceRval_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 2))));
            MR_Word Base_26;
            MR_Word Var_38;
            MR_Word Redoip1_28;
            MR_Word Skipped_29;
            MR_Word Rest_30;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_42;

            succeeded = ((((MR_tag((MR_Word) TargetLval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TargetLval_19, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_38 = ((MR_Word) ((MR_hl_field(3, TargetLval_19, 1))));
              succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
              if (succeeded)
              {
                Base_26 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
                Var_40 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_39, 0) = ((MR_Box) (Base_26));
                  MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
                }
                succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(Instrs0_7, Var_39, Var_40, &Redoip1_28, &Skipped_29, &Rest_30);
                if (succeeded)
                {
                  Var_42 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Skipped_29);
                  succeeded = (Var_42 == (MR_Integer) 0);
                }
                if (succeeded)
                {
                  MR_Word Instrs1_31;
                  MR_Word RedoipUinstr_32;
                  MR_Word RedoipInstr_33;
                  MR_Word Var_43;
                  MR_Word Var_44;

                  Instrs1_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Skipped_29, Rest_30);
                  {
                    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(3, Var_44, 1) = ((MR_Box) (Redoip1_28));
                  }
                  {
                    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_43, 1) = ((MR_Box) (Var_44));
                  }
                  {
                    RedoipUinstr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, RedoipUinstr_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, RedoipUinstr_32, 1) = ((MR_Box) (TargetLval_19));
                    MR_hl_field(3, RedoipUinstr_32, 2) = ((MR_Box) (Var_43));
                  }
                  {
                    RedoipInstr_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, RedoipInstr_33, 0) = ((MR_Box) (RedoipUinstr_32));
                    MR_hl_field(0, RedoipInstr_33, 1) = ((MR_Box) (Comment0_10));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Instrs_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (RedoipInstr_33));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_31));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word TypeCtorInfo_42_53;
                  MR_Word Between_34;
                  MR_Word After_35;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word Var_47;
                  MR_String Var_48;
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_Integer Var_36;

                  succeeded = (Base_26 == (MR_Word) ((MR_Unsigned) 8U));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) SourceRval_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SourceRval_20, 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_45 = ((MR_Word) ((MR_hl_field(3, SourceRval_20, 1))));
                      succeeded = ((((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_45, 0)))) == (MR_Integer) 12)));
                      if (succeeded)
                      {
                        Var_46 = ((MR_Word) ((MR_hl_field(3, Var_45, 1))));
                        succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 8U));
                        if (succeeded)
                        {
                          succeeded = ll_backend__opt_util__straight_alternative_3_p_0(Instrs0_7, &Between_34, &After_35);
                          if (succeeded)
                          {
                            Var_47 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Between_34);
                            succeeded = (Var_47 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_48 = (MR_String) "curfr==maxfr";
                              succeeded = mercury__string__sub_string_search_3_p_0(Comment0_10, Var_48, &Var_36);
                              if (succeeded)
                              {
                                TypeCtorInfo_42_53 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                Var_50 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[17]));
                                Var_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_53, Var_50, After_35);
                                *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_53, Between_34, Var_49);
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
            MR_Word NondetFrameInfo_16 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word MaybeRedoip0_17 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 2))));
            MR_Word Redoip0_157;
            MR_Word Redoip1_162;
            MR_Word Skipped_163;
            MR_Word Rest_164;
            MR_Word AllowedBases_160;
            MR_Word Var_186;
            MR_Word Var_187;

            succeeded = (MaybeRedoip0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Redoip0_157 = ((MR_Word) ((MR_hl_field(1, MaybeRedoip0_17, 0))));
              if (((MR_tag((MR_Word) NondetFrameInfo_16)) == (MR_Integer) 1))
                AllowedBases_160 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[7]));
              else
                AllowedBases_160 = (MR_Word) (MR_mkword(1, &ll_backend__peephole_scalar_common_1[8]));
              Var_186 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(Instrs0_7, AllowedBases_160, Var_186, &Redoip1_162, &Skipped_163, &Rest_164);
              if (succeeded)
              {
                Var_187 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(Skipped_163);
                succeeded = (Var_187 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Instrs1_165;
                MR_Word NewInstr_166;
                MR_Word Var_188;
                MR_Word Var_189;

                Instrs1_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Skipped_163, Rest_164);
                {
                  Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_189, 0) = ((MR_Box) (Redoip1_162));
                }
                {
                  Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, Var_188, 1) = ((MR_Box) (NondetFrameInfo_16));
                  MR_hl_field(3, Var_188, 2) = ((MR_Box) (Var_189));
                }
                {
                  NewInstr_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewInstr_166, 0) = ((MR_Box) (Var_188));
                  MR_hl_field(0, NewInstr_166, 1) = ((MR_Box) (Comment0_10));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Instrs_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewInstr_166));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_165));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word InstrsPrime_172;
                MR_Word Instr1_167;
                MR_Word Instrs2_168;
                MR_Word Test_169;
                MR_Word Target_170;
                MR_String Comment1_171;
                MR_Word Var_190;
                MR_Word Instrs1_222;

                ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs0_7, &Instrs1_222);
                succeeded = (Instrs1_222 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Instr1_167 = ((MR_Word) ((MR_hl_field(1, Instrs1_222, 0))));
                  Instrs2_168 = ((MR_Word) ((MR_hl_field(1, Instrs1_222, 1))));
                  Var_190 = ((MR_Word) ((MR_hl_field(0, Instr1_167, 0))));
                  Comment1_171 = ((MR_String) ((MR_hl_field(0, Instr1_167, 1))));
                  succeeded = ((((MR_tag((MR_Word) Var_190)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_190, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    Test_169 = ((MR_Word) ((MR_hl_field(3, Var_190, 1))));
                    Target_170 = ((MR_Word) ((MR_hl_field(3, Var_190, 2))));
                    succeeded = (Redoip0_157 == (MR_Word) ((MR_Unsigned) 8U));
                    if (succeeded)
                    {
                      if ((Target_170 == (MR_Word) ((MR_Unsigned) 8U)))
                        succeeded = MR_TRUE;
                      else
                      if ((Target_170 == (MR_Word) ((MR_Unsigned) 4U)))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      MR_Word Var_191;
                      MR_Word Var_192;
                      MR_Word Var_194;
                      MR_Word Var_195;
                      MR_Word Var_196;

                      {
                        Var_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_192, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(3, Var_192, 1) = ((MR_Box) (Test_169));
                        MR_hl_field(3, Var_192, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      }
                      {
                        Var_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_191, 0) = ((MR_Box) (Var_192));
                        MR_hl_field(0, Var_191, 1) = ((MR_Box) (Comment1_171));
                      }
                      {
                        Var_196 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_196, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Var_196, 1) = ((MR_Box) (NondetFrameInfo_16));
                        MR_hl_field(3, Var_196, 2) = ((MR_Box) (MR_mkword(1, &ll_backend__peephole_scalar_common_2[4])));
                      }
                      {
                        Var_195 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_195, 0) = ((MR_Box) (Var_196));
                        MR_hl_field(0, Var_195, 1) = ((MR_Box) (Comment0_10));
                      }
                      {
                        Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_194, 0) = ((MR_Box) (Var_195));
                        MR_hl_field(1, Var_194, 1) = ((MR_Box) (Instrs2_168));
                      }
                      {
                        InstrsPrime_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, InstrsPrime_172, 0) = ((MR_Box) (Var_191));
                        MR_hl_field(1, InstrsPrime_172, 1) = ((MR_Box) (Var_194));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = ((MR_tag((MR_Word) Redoip0_157)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Target_170 == (MR_Word) ((MR_Unsigned) 8U));
                        if (succeeded)
                        {
                          MR_Word Var_199;
                          MR_Word Var_200;
                          MR_Word Var_202;

                          {
                            Var_200 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_200, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                            MR_hl_field(3, Var_200, 1) = ((MR_Box) (Test_169));
                            MR_hl_field(3, Var_200, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                          }
                          {
                            Var_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_199, 0) = ((MR_Box) (Var_200));
                            MR_hl_field(0, Var_199, 1) = ((MR_Box) (Comment1_171));
                          }
                          {
                            Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_202, 0) = ((MR_Box) (Instr0_6));
                            MR_hl_field(1, Var_202, 1) = ((MR_Box) (Instrs2_168));
                          }
                          {
                            InstrsPrime_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, InstrsPrime_172, 0) = ((MR_Box) (Var_199));
                            MR_hl_field(1, InstrsPrime_172, 1) = ((MR_Box) (Var_202));
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word Var_203;
                          MR_Word Var_204;
                          MR_Word Var_205;

                          succeeded = (Target_170 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            {
                              Var_205 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_205, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                              MR_hl_field(3, Var_205, 1) = ((MR_Box) (Test_169));
                              MR_hl_field(3, Var_205, 2) = ((MR_Box) (Redoip0_157));
                            }
                            {
                              Var_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_204, 0) = ((MR_Box) (Var_205));
                              MR_hl_field(0, Var_204, 1) = ((MR_Box) (Comment1_171));
                            }
                            {
                              Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_203, 0) = ((MR_Box) (Var_204));
                              MR_hl_field(1, Var_203, 1) = ((MR_Box) (Instrs2_168));
                            }
                            {
                              InstrsPrime_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, InstrsPrime_172, 0) = ((MR_Box) (Instr0_6));
                              MR_hl_field(1, InstrsPrime_172, 1) = ((MR_Box) (Var_203));
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
                  *Instrs_8 = InstrsPrime_172;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String Comment2_174;
                  MR_Word Instrs2_229;
                  MR_Word Var_206;
                  MR_Word Var_207;
                  MR_Word Instrs1_223;
                  MR_Word Instr1_224;

                  ll_backend__opt_util__skip_comments_livevals_2_p_0(Instrs0_7, &Instrs1_223);
                  succeeded = (Instrs1_223 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Instr1_224 = ((MR_Word) ((MR_hl_field(1, Instrs1_223, 0))));
                    Instrs2_229 = ((MR_Word) ((MR_hl_field(1, Instrs1_223, 1))));
                    Var_206 = ((MR_Word) ((MR_hl_field(0, Instr1_224, 0))));
                    Comment2_174 = ((MR_String) ((MR_hl_field(0, Instr1_224, 1))));
                    succeeded = ((((MR_tag((MR_Word) Var_206)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_206, 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      Var_207 = ((MR_Word) ((MR_hl_field(3, Var_206, 1))));
                      succeeded = (Var_207 == (MR_Word) ((MR_Unsigned) 8U));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_208;

                    {
                      Var_208 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_208, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[9])));
                      MR_hl_field(0, Var_208, 1) = ((MR_Box) (Comment2_174));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_208));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs2_229));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Straight_175;
                    MR_Word Instrs2_228;
                    MR_Word Var_211;
                    MR_Word Var_212;
                    MR_Word Instrs1_225;
                    MR_Word Instr1_226;

                    succeeded = (Redoip0_157 == (MR_Word) ((MR_Unsigned) 8U));
                    if (succeeded)
                    {
                      ll_backend__opt_util__no_stack_straight_line_3_p_0(Instrs0_7, &Straight_175, &Instrs1_225);
                      succeeded = (Instrs1_225 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Instr1_226 = ((MR_Word) ((MR_hl_field(1, Instrs1_225, 0))));
                        Instrs2_228 = ((MR_Word) ((MR_hl_field(1, Instrs1_225, 1))));
                        Var_211 = ((MR_Word) ((MR_hl_field(0, Instr1_226, 0))));
                        succeeded = ((((MR_tag((MR_Word) Var_211)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_211, 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          Var_212 = ((MR_Word) ((MR_hl_field(3, Var_211, 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_212)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_212, 0)))) == (MR_Integer) 0)));
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_216;

                      {
                        Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_216, 0) = ((MR_Box) (&ll_backend__peephole_scalar_common_1[11]));
                        MR_hl_field(1, Var_216, 1) = ((MR_Box) (Instrs2_228));
                      }
                      *Instrs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Straight_175, Var_216);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word TypeCtorInfo_96_232;
                      MR_Word UntilSucceed_179;
                      MR_String SucceedComment_180;
                      MR_Word DiscardUinstr_181;
                      MR_String DiscardComment_182;
                      MR_Word DiscardInstr_183;
                      MR_String Var_219;
                      MR_Word Var_220;
                      MR_Word Var_221;
                      MR_Word Instrs2_227;

                      succeeded = (Redoip0_157 == (MR_Word) ((MR_Unsigned) 8U));
                      if (succeeded)
                      {
                        succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(Instrs0_7, &UntilSucceed_179, &SucceedComment_180, &Instrs2_227);
                        if (succeeded)
                        {
                          DiscardUinstr_181 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[13]));
                          Var_219 = (MR_String) " (added discard)";
                          DiscardComment_182 = mercury__string__f_43_43_2_f_0(SucceedComment_180, Var_219);
                          TypeCtorInfo_96_232 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                          {
                            DiscardInstr_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, DiscardInstr_183, 0) = ((MR_Box) (DiscardUinstr_181));
                            MR_hl_field(0, DiscardInstr_183, 1) = ((MR_Box) (DiscardComment_182));
                          }
                          {
                            Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_220, 0) = ((MR_Box) (Instr0_6));
                            MR_hl_field(1, Var_220, 1) = ((MR_Box) (UntilSucceed_179));
                          }
                          {
                            Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_221, 0) = ((MR_Box) (DiscardInstr_183));
                            MR_hl_field(1, Var_221, 1) = ((MR_Box) (Instrs2_227));
                          }
                          *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_96_232, Var_220, Var_221);
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
            MR_Word SelectorRval_11 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word MaybeMaxIndex_12 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 2))));
            MR_Word MaybeLabels_13 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 3))));
            MR_Word LabelMap_54;
            MR_Word LabelValsList_55;
            MR_Word Var_84;
            MR_Word Label_56;
            MR_Word Var_85;
            MR_Word Var_86;

            Var_84 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
            ll_backend__peephole__build_computed_goto_target_map_4_p_0(MaybeLabels_13, (MR_Integer) 0, Var_84, &LabelMap_54);
            mercury__one_or_more_map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelMap_54, &LabelValsList_55);
            succeeded = (LabelValsList_55 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_85 = ((MR_Word) ((MR_hl_field(1, LabelValsList_55, 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(1, LabelValsList_55, 1))));
              succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Label_56 = ((MR_Word) ((MR_hl_field(0, Var_85, 0))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word GotoInstr_58;
              MR_Word Var_87;
              MR_Word Var_88;

              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (Label_56));
              }
              {
                Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_87, 1) = ((MR_Box) (Var_88));
              }
              {
                GotoInstr_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, GotoInstr_58, 0) = ((MR_Box) (Var_87));
                MR_hl_field(0, GotoInstr_58, 1) = ((MR_Box) (Comment0_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Instrs_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (GotoInstr_58));
                MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_7));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word LabelValsA_59;
              MR_Word LabelValsB_60;
              MR_Word FewerValsLabel_61;
              MR_Word FewerOoMVals_62;
              MR_Word OtherLabel_63;
              MR_Integer FirstVal_64;
              MR_Word LaterVals_65;
              MR_Word CondRval_69;
              MR_Word CommentInstr_79;
              MR_Word BranchUinstr_80;
              MR_Word BranchInstr_81;
              MR_Word GotoUinstr_82;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_129;
              MR_String Var_130;
              MR_Word Var_131;
              MR_String Var_132;
              MR_String Var_133;
              MR_Word Var_134;
              MR_String Var_135;
              MR_String Var_136;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word GotoInstr_139;
              MR_Integer MaxIndex_66;
              MR_Integer Var_91;

              succeeded = (LabelValsList_55 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LabelValsA_59 = ((MR_Word) ((MR_hl_field(1, LabelValsList_55, 0))));
                Var_89 = ((MR_Word) ((MR_hl_field(1, LabelValsList_55, 1))));
                succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LabelValsB_60 = ((MR_Word) ((MR_hl_field(1, Var_89, 0))));
                  Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, 1))));
                  succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ll_backend__peephole__peephole_pick_fewer_vals_label_5_p_0(LabelValsA_59, LabelValsB_60, &FewerValsLabel_61, &FewerOoMVals_62, &OtherLabel_63);
                    FirstVal_64 = ((MR_Integer) ((MR_hl_field(0, FewerOoMVals_62, 0))));
                    LaterVals_65 = ((MR_Word) ((MR_hl_field(0, FewerOoMVals_62, 1))));
                    succeeded = (MaybeMaxIndex_12 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MaxIndex_66 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxIndex_12, 0))));
                      Var_91 = (MR_Integer) 32;
                      succeeded = (MaxIndex_66 < Var_91);
                    }
                    if (succeeded)
                      if ((LaterVals_65 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Var_96;
                        MR_Word Var_97;

                        {
                          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_97, 0) = ((MR_Box) (FirstVal_64));
                        }
                        {
                          Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_97));
                        }
                        {
                          CondRval_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, CondRval_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(3, CondRval_69, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[1])));
                          MR_hl_field(3, CondRval_69, 2) = ((MR_Box) (SelectorRval_11));
                          MR_hl_field(3, CondRval_69, 3) = ((MR_Box) (Var_96));
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Unsigned Mask_72;
                        MR_Word SelectorRvalUint_73;
                        MR_Word QueryRval_74;
                        MR_Word SelectedBitUintRval_75;
                        MR_Word Var_98;
                        MR_Word Var_100;
                        MR_Word Var_102;
                        MR_Word Var_105;
                        MR_Word Var_108;
                        MR_Word Var_110;
                        MR_Word Var_111;
                        MR_Word Var_112;
                        MR_Word Var_115;

                        {
                          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_98, 0) = ((MR_Box) (FirstVal_64));
                          MR_hl_field(1, Var_98, 1) = ((MR_Box) (LaterVals_65));
                        }
                        succeeded = ll_backend__peephole__build_offset_mask_3_p_0(Var_98, (MR_Unsigned) 0U, &Mask_72);
                        if (succeeded)
                        {
                          Var_100 = (MR_Word) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[0]));
                          Var_102 = (MR_Word) (MR_mkword(2, &ll_backend__peephole_scalar_common_2[1]));
                          Var_105 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[2]));
                          Var_108 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[3]));
                          Var_112 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[4]));
                          Var_115 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[5]));
                          {
                            SelectorRvalUint_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, SelectorRvalUint_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, SelectorRvalUint_73, 1) = ((MR_Box) (Var_100));
                            MR_hl_field(3, SelectorRvalUint_73, 2) = ((MR_Box) (SelectorRval_11));
                          }
                          {
                            QueryRval_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, QueryRval_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, QueryRval_74, 1) = ((MR_Box) (Var_102));
                            MR_hl_field(3, QueryRval_74, 2) = ((MR_Box) (Var_105));
                            MR_hl_field(3, QueryRval_74, 3) = ((MR_Box) (SelectorRvalUint_73));
                          }
                          {
                            Var_111 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_111, 0) = ((MR_Box) (Mask_72));
                          }
                          {
                            Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, Var_110, 1) = ((MR_Box) (Var_111));
                          }
                          {
                            SelectedBitUintRval_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, SelectedBitUintRval_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, SelectedBitUintRval_75, 1) = ((MR_Box) (Var_108));
                            MR_hl_field(3, SelectedBitUintRval_75, 2) = ((MR_Box) (Var_110));
                            MR_hl_field(3, SelectedBitUintRval_75, 3) = ((MR_Box) (QueryRval_74));
                          }
                          {
                            CondRval_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CondRval_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, CondRval_69, 1) = ((MR_Box) (Var_112));
                            MR_hl_field(3, CondRval_69, 2) = ((MR_Box) (SelectedBitUintRval_75));
                            MR_hl_field(3, CondRval_69, 3) = ((MR_Box) (Var_115));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    else
                    {
                      MR_Integer LaterVal_76;
                      MR_Word CondRvalA_77;
                      MR_Word CondRvalB_78;
                      MR_Word Var_92;
                      MR_Word Var_118;
                      MR_Word Var_121;
                      MR_Word Var_122;
                      MR_Word Var_126;
                      MR_Word Var_127;
                      MR_Word Var_128;

                      succeeded = (LaterVals_65 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        LaterVal_76 = ((MR_Integer) ((MR_hl_field(1, LaterVals_65, 0))));
                        Var_92 = ((MR_Word) ((MR_hl_field(1, LaterVals_65, 1))));
                        succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_118 = (MR_Word) (MR_mkword(3, &ll_backend__peephole_scalar_common_1[1]));
                          Var_128 = (MR_Word) ((MR_Unsigned) 4U);
                          {
                            Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_122, 0) = ((MR_Box) (FirstVal_64));
                          }
                          {
                            Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, Var_121, 1) = ((MR_Box) (Var_122));
                          }
                          {
                            CondRvalA_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CondRvalA_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, CondRvalA_77, 1) = ((MR_Box) (Var_118));
                            MR_hl_field(3, CondRvalA_77, 2) = ((MR_Box) (SelectorRval_11));
                            MR_hl_field(3, CondRvalA_77, 3) = ((MR_Box) (Var_121));
                          }
                          {
                            Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_127, 0) = ((MR_Box) (LaterVal_76));
                          }
                          {
                            Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, Var_126, 1) = ((MR_Box) (Var_127));
                          }
                          {
                            CondRvalB_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CondRvalB_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, CondRvalB_78, 1) = ((MR_Box) (Var_118));
                            MR_hl_field(3, CondRvalB_78, 2) = ((MR_Box) (SelectorRval_11));
                            MR_hl_field(3, CondRvalB_78, 3) = ((MR_Box) (Var_126));
                          }
                          {
                            CondRval_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, CondRval_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, CondRval_69, 1) = ((MR_Box) (Var_128));
                            MR_hl_field(3, CondRval_69, 2) = ((MR_Box) (CondRvalA_77));
                            MR_hl_field(3, CondRval_69, 3) = ((MR_Box) (CondRvalB_78));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                    {
                      Var_130 = (MR_String) "";
                      Var_133 = (MR_String) " part 1";
                      {
                        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_129, 0) = ((MR_Box) (Comment0_10));
                      }
                      {
                        CommentInstr_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CommentInstr_79, 0) = ((MR_Box) (Var_129));
                        MR_hl_field(0, CommentInstr_79, 1) = ((MR_Box) (Var_130));
                      }
                      {
                        Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_131, 0) = ((MR_Box) (FewerValsLabel_61));
                      }
                      {
                        BranchUinstr_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, BranchUinstr_80, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(3, BranchUinstr_80, 1) = ((MR_Box) (CondRval_69));
                        MR_hl_field(3, BranchUinstr_80, 2) = ((MR_Box) (Var_131));
                      }
                      Var_132 = mercury__string__f_43_43_2_f_0(Comment0_10, Var_133);
                      Var_136 = (MR_String) " part 2";
                      {
                        BranchInstr_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, BranchInstr_81, 0) = ((MR_Box) (BranchUinstr_80));
                        MR_hl_field(0, BranchInstr_81, 1) = ((MR_Box) (Var_132));
                      }
                      {
                        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_134, 0) = ((MR_Box) (OtherLabel_63));
                      }
                      {
                        GotoUinstr_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GotoUinstr_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GotoUinstr_82, 1) = ((MR_Box) (Var_134));
                      }
                      Var_135 = mercury__string__f_43_43_2_f_0(Comment0_10, Var_136);
                      {
                        GotoInstr_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, GotoInstr_139, 0) = ((MR_Box) (GotoUinstr_82));
                        MR_hl_field(0, GotoInstr_139, 1) = ((MR_Box) (Var_135));
                      }
                      {
                        Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_138, 0) = ((MR_Box) (GotoInstr_139));
                        MR_hl_field(1, Var_138, 1) = ((MR_Box) (Instrs0_7));
                      }
                      {
                        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_137, 0) = ((MR_Box) (BranchInstr_81));
                        MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Instrs_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (CommentInstr_79));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Var_137));
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
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word CodeAddr_15 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 2))));
            MR_Word Taken_142;

            succeeded = ll_backend__opt_util__is_const_condition_2_p_0(Rval_14, &Taken_142);
            if (succeeded)
            {
              switch (Taken_142) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Instrs_8 = Instrs0_7;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_149;
                    MR_Word Var_150;

                    {
                      Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_150, 1) = ((MR_Box) (CodeAddr_15));
                    }
                    {
                      Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_150));
                      MR_hl_field(0, Var_149, 1) = ((MR_Box) (Comment0_10));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_149));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs0_7));
                    }
                  }
                  break;
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Instrs1_143;
              MR_Word Instr1_144;
              MR_Word Var_151;
              MR_Word Var_152;

              ll_backend__opt_util__skip_comments_2_p_0(Instrs0_7, &Instrs1_143);
              succeeded = (Instrs1_143 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Instr1_144 = ((MR_Word) ((MR_hl_field(1, Instrs1_143, 0))));
                Var_151 = ((MR_Word) ((MR_hl_field(0, Instr1_144, 0))));
                succeeded = ((((MR_tag((MR_Word) Var_151)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_151, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_152 = ((MR_Word) ((MR_hl_field(3, Var_151, 1))));
                  succeeded = ll_backend__llds____Unify____code_addr_0_0(CodeAddr_15, Var_152);
                }
              }
              if (succeeded)
              {
                *Instrs_8 = Instrs0_7;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Label_147;
                MR_Word Var_148;

                succeeded = ((MR_tag((MR_Word) CodeAddr_15)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Label_147 = ((MR_Word) ((MR_hl_field(1, CodeAddr_15, 0))));
                  succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(Label_147, Instrs0_7, &Var_148);
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
            MR_Word Lval_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word Instrs1_233;
            MR_Word Instr1_234;
            MR_Word Instrs2_235;
            MR_Word Var_239;
            MR_Word Var_240;
            MR_Word Var_242;

            ll_backend__opt_util__skip_comments_2_p_0(Instrs0_7, &Instrs1_233);
            succeeded = (Instrs1_233 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr1_234 = ((MR_Word) ((MR_hl_field(1, Instrs1_233, 0))));
              Instrs2_235 = ((MR_Word) ((MR_hl_field(1, Instrs1_233, 1))));
              Var_239 = ((MR_Word) ((MR_hl_field(0, Instr1_234, 0))));
              succeeded = ((((MR_tag((MR_Word) Var_239)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_239, 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                Var_240 = ((MR_Word) ((MR_hl_field(3, Var_239, 1))));
                succeeded = ((MR_tag((MR_Word) Var_240)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_242 = ((MR_Word) ((MR_hl_field(0, Var_240, 0))));
                  succeeded = ll_backend__llds____Unify____lval_0_0(Lval_18, Var_242);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Instrs_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_6));
                      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs2_235));
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
            MR_Word TypeCtorInfo_9_156;
            MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_9, 1))));
            MR_Word Between_154;
            MR_Word Remain_155;

            succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0), ((MR_Box) ((MR_Integer) 0)), InvalidPatterns_5);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(Instrs0_7, N_21, &Between_154, &Remain_155);
              if (succeeded)
              {
                TypeCtorInfo_9_156 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                *Instrs_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_9_156, Between_154, Remain_155);
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
      MR_Integer Val_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Unsigned ValUint_10;
      MR_Unsigned STATE_VARIABLE_Mask_1_14;
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
        STATE_VARIABLE_Mask_1_14 = (STATE_VARIABLE_Mask_0_2 | Var_15);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vals_8;
        next_value_of_STATE_VARIABLE_Mask_0_2 = STATE_VARIABLE_Mask_1_14;
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
ll_backend__peephole__peephole_pick_fewer_vals_label_5_p_0(
  MR_Word LabelValsA_6,
  MR_Word LabelValsB_7,
  MR_Word * FewerValsLabel_8,
  MR_Word * FewerOoMVals_9,
  MR_Word * OtherLabel_10)
{
  MR_bool succeeded;
  MR_Word LabelA_11 = ((MR_Word) ((MR_hl_field(0, LabelValsA_6, 0))));
  MR_Word OoMValsA_12 = ((MR_Word) ((MR_hl_field(0, LabelValsA_6, 1))));
  MR_Word LabelB_13 = ((MR_Word) ((MR_hl_field(0, LabelValsB_7, 0))));
  MR_Word OoMValsB_14 = ((MR_Word) ((MR_hl_field(0, LabelValsB_7, 1))));
  MR_Word ValsA_15;
  MR_Word ValsB_16;
  MR_Integer NumValsA_17;
  MR_Integer NumValsB_18;

  ValsA_15 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OoMValsA_12);
  ValsB_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OoMValsB_14);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ValsA_15, &NumValsA_17);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ValsB_16, &NumValsB_18);
  succeeded = (NumValsA_17 <= NumValsB_18);
  if (succeeded)
  {
    *FewerValsLabel_8 = LabelA_11;
    *FewerOoMVals_9 = OoMValsA_12;
    *OtherLabel_10 = LabelB_13;
  }
  else
  {
    *FewerValsLabel_8 = LabelB_13;
    *FewerOoMVals_9 = OoMValsB_14;
    *OtherLabel_10 = LabelA_11;
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
      MR_Word MaybeLabel_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word MaybeLabels_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_LabelMap_1_16;
      MR_Integer Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Val_2;
      MR_Word next_value_of_STATE_VARIABLE_LabelMap_0_3;

      if ((MaybeLabel_9 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_LabelMap_1_16 = STATE_VARIABLE_LabelMap_0_3;
      else
      {
        MR_Word Label_13 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_9, 0))));

        mercury__one_or_more_map__add_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Label_13)), ((MR_Box) (Val_2)), STATE_VARIABLE_LabelMap_0_3, &STATE_VARIABLE_LabelMap_1_16);
      }
      Var_17 = (MR_Integer) ((MR_Unsigned) Val_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_10;
      next_value_of_Val_2 = Var_17;
      next_value_of_STATE_VARIABLE_LabelMap_0_3 = STATE_VARIABLE_LabelMap_1_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Val_2 = next_value_of_Val_2;
      STATE_VARIABLE_LabelMap_0_3 = next_value_of_STATE_VARIABLE_LabelMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole____Unify____computed_goto_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__peephole____Unify____computed_goto_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__peephole____Compare____computed_goto_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__peephole____Compare____computed_goto_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

  MR_register_type_ctor_info(&ll_backend__peephole__ll_backend__peephole__type_ctor_info_computed_goto_method_0);
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
