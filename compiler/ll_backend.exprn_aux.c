/*
** Automatically generated from `exprn_aux.m'
** by the Mercury compiler,
** version rotd-2024-12-07
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


// :- module ll_backend.exprn_aux.
// :- implementation.

/*
INIT mercury__ll_backend__exprn_aux__init
ENDINIT
*/

#include "ll_backend.exprn_aux.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
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
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_VA_PseudoTypeInfo_Struct4 ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1;

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
  MR_Word OldLval_7,
  MR_Word NewLval_8,
  MR_Word Lval0_9,
  MR_Word * Lval_10,
  MR_Integer STATE_VARIABLE_N_0_12,
  MR_Integer * STATE_VARIABLE_N_13);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word Transform_6,
  MR_Word Component0_7,
  MR_Word * Component_8,
  MR_Box STATE_VARIABLE_Acc_0_24,
  MR_Box * STATE_VARIABLE_Acc_25);

static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
  MR_Word Rval0_3,
  MR_Word * Rval_4);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rval_0_2,
  MR_Word * STATE_VARIABLE_Rval_3);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word Rval0_7,
  MR_Word * Rval_8,
  MR_Integer STATE_VARIABLE_Acc_0_25,
  MR_Integer * STATE_VARIABLE_Acc_26);

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word Transform_6,
  MR_Word Uinstr0_7,
  MR_Word * Uinstr_8,
  MR_Box STATE_VARIABLE_Acc_0_98,
  MR_Box * STATE_VARIABLE_Acc_99);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Transform_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5);

static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_1[1][2];

static /* final */ const MR_Integer ll_backend__exprn_aux_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_3[5][9];




static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Integer ll_backend__exprn_aux_scalar_common_2[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_3[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"


static const MR_VA_PseudoTypeInfo_Struct4 ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__exprn_aux__ll_backend__exprn_aux__type_ctor_info_transform_lval_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ll_backend__exprn_aux____Unify____transform_lval_1_0_10001)),
  ((MR_Box) (ll_backend__exprn_aux____Compare____transform_lval_1_0_10001)),
  (MR_String) "ll_backend.exprn_aux",
  (MR_String) "transform_lval",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
  MR_Word OldLval_7,
  MR_Word NewLval_8,
  MR_Word Lval0_9,
  MR_Word * Lval_10,
  MR_Integer STATE_VARIABLE_N_0_12,
  MR_Integer * STATE_VARIABLE_N_13)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_9, OldLval_7);
  if (succeeded)
  {
    *Lval_10 = NewLval_8;
    *STATE_VARIABLE_N_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_12 + (MR_Unsigned) 1);
  }
  else
    switch (MR_tag((MR_Word) Lval0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Lval_10 = Lval0_9;
          *STATE_VARIABLE_N_13 = STATE_VARIABLE_N_0_12;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            {
              *Lval_10 = Lval0_9;
              *STATE_VARIABLE_N_13 = STATE_VARIABLE_N_0_12;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval0_18 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_19;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_18, &Rval_19, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_19));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval0_30 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_31;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_30, &Rval_31, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_31));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval0_26 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_27;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_26, &Rval_27, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_27));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval0_28 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_29;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_28, &Rval_29, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_29));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval0_32 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_33;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_32, &Rval_33, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_33));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Tag_20 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval1_21 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 2))));
              MR_Word Rval2_22 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 3))));
              MR_Word Rval3_23;
              MR_Word Rval4_24;
              MR_Integer STATE_VARIABLE_N_33_25;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval1_21, &Rval3_23, STATE_VARIABLE_N_0_12, &STATE_VARIABLE_N_33_25);
              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval2_22, &Rval4_24, STATE_VARIABLE_N_33_25, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Tag_20));
                MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_23));
                MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_24));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval0_34 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_35;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_34, &Rval_35, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_35));
              }
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 0))));
  MR_Word VarType_11 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 1))));
  MR_Word IsDummy_12 = ((MR_Unsigned) ((MR_hl_field(0, Out0_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 3))));
  MR_String Name_14 = ((MR_String) ((MR_hl_field(0, Out0_7, (MR_Integer) 4))));
  MR_Word MaybeForeign_15 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(0, Out0_7, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Lval_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
  MR_Box conv1_Lval_17;

  func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_10)), &conv1_Lval_17, STATE_VARIABLE_Acc_0_18, STATE_VARIABLE_Acc_19);
  Lval_17 = ((MR_Word) (conv1_Lval_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Out_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Lval_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarType_11));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigType_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Name_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeForeign_15));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(0, Out0_7, (MR_Integer) 0))));
  MR_Word VarType_11 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 1))));
  MR_Word IsDummy_12 = ((MR_Unsigned) ((MR_hl_field(0, Out0_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 3))));
  MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 4))));
  MR_Word MaybeForeign_15 = ((MR_Word) ((MR_hl_field(0, Out0_7, (MR_Integer) 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(0, Out0_7, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Rval_17;

  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_20, Transform_6, Rval0_14, &Rval_17, STATE_VARIABLE_Acc_0_18, STATE_VARIABLE_Acc_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Out_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarType_11));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigType_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Rval_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeForeign_15));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Out_8;

  ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Out_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Out_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Out_8;

  ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Out_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Out_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word Transform_6,
  MR_Word Component0_7,
  MR_Word * Component_8,
  MR_Box STATE_VARIABLE_Acc_0_24,
  MR_Box * STATE_VARIABLE_Acc_25)
{
  switch (MR_tag((MR_Word) Component0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Component_8 = Component0_7;
        *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Inputs0_10 = ((MR_Word) ((MR_hl_field(1, Component0_7, (MR_Integer) 0))));
        MR_Word Inputs_11;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[3]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (TypeInfo_for_T_29));
          MR_hl_field(0, Var_26, 4) = ((MR_Box) (Transform_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), TypeInfo_for_T_29, Var_26, Inputs0_10, &Inputs_11, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Component_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Inputs_11));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs0_12 = ((MR_Word) ((MR_hl_field(2, Component0_7, (MR_Integer) 0))));
        MR_Word Outputs_13;
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[4]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeInfo_for_T_29));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (Transform_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), TypeInfo_for_T_29, Var_28, Outputs0_12, &Outputs_13, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Component_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Outputs_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Component0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Component_8 = Component0_7;
            *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LvalSet0_19 = ((MR_Word) ((MR_hl_field(3, Component0_7, (MR_Integer) 2))));
            MR_String Code_20 = ((MR_String) ((MR_hl_field(3, Component0_7, (MR_Integer) 3))));
            MR_Word LvalSet_21;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Component0_7, (MR_Integer) 1)));

            if ((LvalSet0_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              LvalSet_21 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
            }
            else
            {
              MR_Word LvalSet0_44 = ((MR_Word) ((MR_hl_field(1, LvalSet0_19, (MR_Integer) 0))));
              MR_Word LvalSet_45;
              MR_Word Lvals0_46;
              MR_Word Lvals_47;

              Lvals0_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_44);
              mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_29, Transform_6, Lvals0_46, &Lvals_47, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
              mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_47, &LvalSet_45);
              {
                LvalSet_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LvalSet_21, 0) = ((MR_Box) (LvalSet_45));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Component_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(3, base, 2) = ((MR_Box) (LvalSet_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (Code_20));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Component_8 = Component0_7;
            *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
          }
          break;
        case (MR_Integer) 3:
          {
            *Component_8 = Component0_7;
            *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
ll_backend__exprn_aux__lval_to_rval_1_f_0(
  MR_Word Lval_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Lval_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ll_backend__exprn_aux__var_lval_to_rval_2_f_0(
  MR_Word _Var_4,
  MR_Word Lval_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(Lval_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word Lval_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Lval_5));
  }
  return HeadVar__3_3;
}

void MR_CALL 
ll_backend__exprn_aux__lval_list_addrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Lval_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Lvals_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadCodeAddrs_8;
    MR_Word HeadDataIds_9;
    MR_Word TailCodeAddrs_10;
    MR_Word TailDataIds_11;

    ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_4, &HeadCodeAddrs_8, &HeadDataIds_9);
    ll_backend__exprn_aux__lval_list_addrs_3_p_0(Lvals_5, &TailCodeAddrs_10, &TailDataIds_11);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), HeadCodeAddrs_8, TailCodeAddrs_10);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), HeadDataIds_9, TailDataIds_11);
  }
}

void MR_CALL 
ll_backend__exprn_aux__rval_list_addrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Rval_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Rvals_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadCodeAddrs_8;
    MR_Word HeadDataIds_9;
    MR_Word TailCodeAddrs_10;
    MR_Word TailDataIds_11;

    ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_4, &HeadCodeAddrs_8, &HeadDataIds_9);
    ll_backend__exprn_aux__rval_list_addrs_3_p_0(Rvals_5, &TailCodeAddrs_10, &TailDataIds_11);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), HeadCodeAddrs_8, TailCodeAddrs_10);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), HeadDataIds_9, TailDataIds_11);
  }
}

void MR_CALL 
ll_backend__exprn_aux__rval_addrs_3_p_0(
  MR_Word tscc_proc_1_input_1_Rval_4,
  MR_Word * tscc_output_ptr_1_CodeAddrs_5,
  MR_Word * tscc_output_ptr_2_DataIds_6)
{
  MR_Word tscc_proc_2_input_1_Lval_4;
  MR_Word tscc_output_1_CodeAddrs_5;
  MR_Word tscc_output_2_DataIds_6;

  // The code for TSCC PROC 1: pred ll_backend.exprn_aux.rval_addrs/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.exprn_aux.rval_addrs/3-0
  ;
  // proc 2 in TSCC: pred ll_backend.exprn_aux.lval_addrs/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
    MR_Word CodeAddrs_5;
    MR_Word DataIds_6;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(0, Rval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_31 = ((MR_Word) ((MR_hl_field(2, Rval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_31;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));
              MR_Word CodeAddress_11;

              succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                CodeAddress_11 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));
                {
                  CodeAddrs_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CodeAddrs_5, 0) = ((MR_Box) (CodeAddress_11));
                  MR_hl_field(1, CodeAddrs_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word DataId_12;

                succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  DataId_12 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    DataIds_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, DataIds_6, 0) = ((MR_Box) (DataId_12));
                    MR_hl_field(1, DataIds_6, 1) = ((MR_Box) (CodeAddrs_5));
                  }
                }
                else
                {
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_19;
              MR_Word DataIdsA_20;
              MR_Word CodeAddrsB_21;
              MR_Word DataIdsB_22;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_17, &CodeAddrsA_19, &DataIdsA_20);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_18, &CodeAddrsB_21, &DataIdsB_22);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_19, CodeAddrsB_21);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_20, DataIdsB_22);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) SubRval_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                    DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                    DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval_35 = ((MR_Word) ((MR_hl_field(2, SubRval_28, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_35;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_CodeAddrs_5 = CodeAddrs_5;
    tscc_output_2_DataIds_6 = DataIds_6;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
    MR_Word CodeAddrs_5;
    MR_Word DataIds_6;

    switch (MR_tag((MR_Word) Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_32 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_31;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_29;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_17;
              MR_Word DataIdsA_18;
              MR_Word CodeAddrsB_19;
              MR_Word DataIdsB_20;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_15, &CodeAddrsA_17, &DataIdsA_18);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_16, &CodeAddrsB_19, &DataIdsB_20);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_17, CodeAddrsB_19);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_18, DataIdsB_20);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
        }
        break;
    }
    tscc_output_1_CodeAddrs_5 = CodeAddrs_5;
    tscc_output_2_DataIds_6 = DataIds_6;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_CodeAddrs_5 = tscc_output_1_CodeAddrs_5;
  *tscc_output_ptr_2_DataIds_6 = tscc_output_2_DataIds_6;
  return;
}

void MR_CALL 
ll_backend__exprn_aux__lval_addrs_3_p_0(
  MR_Word tscc_proc_2_input_1_Lval_4,
  MR_Word * tscc_output_ptr_1_CodeAddrs_5,
  MR_Word * tscc_output_ptr_2_DataIds_6)
{
  MR_Word tscc_proc_1_input_1_Rval_4;
  MR_Word tscc_output_1_CodeAddrs_5;
  MR_Word tscc_output_2_DataIds_6;

  // The code for TSCC PROC 2: pred ll_backend.exprn_aux.lval_addrs/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.exprn_aux.rval_addrs/3-0
  ;
  // proc 2 in TSCC: pred ll_backend.exprn_aux.lval_addrs/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Rval_4 = tscc_proc_1_input_1_Rval_4;
    MR_Word CodeAddrs_5;
    MR_Word DataIds_6;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(0, Rval_4, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Lval_4 = Lval_7;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Lval_4 = next_value_of_tscc_proc_2_input_1_Lval_4;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_31 = ((MR_Word) ((MR_hl_field(2, Rval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_31;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));
              MR_Word CodeAddress_11;

              succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                CodeAddress_11 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));
                {
                  CodeAddrs_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CodeAddrs_5, 0) = ((MR_Box) (CodeAddress_11));
                  MR_hl_field(1, CodeAddrs_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word DataId_12;

                succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_10, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  DataId_12 = ((MR_Word) ((MR_hl_field(3, Const_10, (MR_Integer) 1))));
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    DataIds_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, DataIds_6, 0) = ((MR_Box) (DataId_12));
                    MR_hl_field(1, DataIds_6, 1) = ((MR_Box) (CodeAddrs_5));
                  }
                }
                else
                {
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_19;
              MR_Word DataIdsA_20;
              MR_Word CodeAddrsB_21;
              MR_Word DataIdsB_22;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_17, &CodeAddrsA_19, &DataIdsA_20);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_18, &CodeAddrsB_21, &DataIdsB_22);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_19, CodeAddrsB_21);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_20, DataIdsB_22);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) SubRval_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                    DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                    DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval_35 = ((MR_Word) ((MR_hl_field(2, SubRval_28, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_35;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_CodeAddrs_5 = CodeAddrs_5;
    tscc_output_2_DataIds_6 = DataIds_6;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Lval_4 = tscc_proc_2_input_1_Lval_4;
    MR_Word CodeAddrs_5;
    MR_Word DataIds_6;

    switch (MR_tag((MR_Word) Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_32 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_31;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_29;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_17;
              MR_Word DataIdsA_18;
              MR_Word CodeAddrsB_19;
              MR_Word DataIdsB_20;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_15, &CodeAddrsA_17, &DataIdsA_18);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_16, &CodeAddrsB_19, &DataIdsB_20);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_17, CodeAddrsB_19);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_18, DataIdsB_20);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
        }
        break;
    }
    tscc_output_1_CodeAddrs_5 = CodeAddrs_5;
    tscc_output_2_DataIds_6 = DataIds_6;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_CodeAddrs_5 = tscc_output_1_CodeAddrs_5;
  *tscc_output_ptr_2_DataIds_6 = tscc_output_2_DataIds_6;
  return;
}

void MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_p_0(
  MR_Word Rval0_3,
  MR_Word * Rval_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Rval1_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval0_3, &Rval1_5);
    if (succeeded)
    {
      MR_Word next_value_of_Rval0_3 = Rval1_5;

      // direct tailcall eliminated
      ;
      Rval0_3 = next_value_of_Rval0_3;
      continue;
    }
    else
      *Rval_4 = Rval0_3;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
  MR_Word Rval0_3,
  MR_Word * Rval_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 0);
  MR_Word MaybeTag_5;
  MR_Word Num_7;
  MR_Word Rval2_8;
  MR_Word Rval1_6;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, Rval0_3, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      MaybeTag_5 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 1))));
      Rval1_6 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 2))));
      Num_7 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 3))));
      succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_6, &Rval2_8);
    }
  }
  if (succeeded)
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_13, 1) = ((MR_Box) (MaybeTag_5));
      MR_hl_field(3, Var_13, 2) = ((MR_Box) (Rval2_8));
      MR_hl_field(3, Var_13, 3) = ((MR_Box) (Num_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Rval_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word UnOp_9;
    MR_Word Rval2_24;
    MR_Word Rval1_14;

    succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      UnOp_9 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 1))));
      Rval1_14 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 2))));
      succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_14, &Rval2_24);
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_4 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_9));
        MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_24));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BinOp_10;
      MR_Word Rval3_11;
      MR_Word Rval2_22;
      MR_Word Rval1_15;

      succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        BinOp_10 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 1))));
        Rval1_15 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 2))));
        Rval2_22 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 3))));
        succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_15, &Rval3_11);
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Rval_4 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_10));
          MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_11));
          MR_hl_field(3, base, 3) = ((MR_Box) (Rval2_22));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Rval2_16;
        MR_Word Rval1_17;
        MR_Word BinOp_19;
        MR_Word Rval3_20;

        succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          BinOp_19 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 1))));
          Rval1_17 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 2))));
          Rval2_16 = ((MR_Word) ((MR_hl_field(3, Rval0_3, (MR_Integer) 3))));
          succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval2_16, &Rval3_20);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_4 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval1_17));
              MR_hl_field(3, base, 3) = ((MR_Box) (Rval3_20));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_3_p_0(
  MR_Word RvalPairs_4,
  MR_Word STATE_VARIABLE_Rval_0_8,
  MR_Word * STATE_VARIABLE_Rval_9)
{
  MR_Word RvalUniqPairs_6;
  MR_Word UniqRvalPairs_7;
  MR_Word STATE_VARIABLE_Rval_11_11;

  ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(RvalPairs_4, (MR_Integer) 0, &RvalUniqPairs_6, &UniqRvalPairs_7);
  ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(RvalUniqPairs_6, STATE_VARIABLE_Rval_0_8, &STATE_VARIABLE_Rval_11_11);
  ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(UniqRvalPairs_7, STATE_VARIABLE_Rval_11_11, STATE_VARIABLE_Rval_9);
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rval_0_2,
  MR_Word * STATE_VARIABLE_Rval_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rval_3 = STATE_VARIABLE_Rval_0_2;
    else
    {
      MR_Word Left_7;
      MR_Word Right_8;
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Rval_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Rval_0_2;

      Left_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Right_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(Left_7, Right_8, STATE_VARIABLE_Rval_0_2, &STATE_VARIABLE_Rval_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_9;
      next_value_of_STATE_VARIABLE_Rval_0_2 = STATE_VARIABLE_Rval_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Rval_0_2 = next_value_of_STATE_VARIABLE_Rval_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Rval1_6;
    MR_Word Rval2_7;
    MR_Word RvalPairList_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Uniq_10;
    MR_Word RvalUniqList_11;
    MR_Word UniqRvalList_12;
    MR_Integer N1_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;

    Rval1_6 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
    Rval2_7 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
    N1_13 = (MR_Integer) ((MR_Unsigned) N0_2 - (MR_Unsigned) 1);
    {
      Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_18, 1) = ((MR_Box) (N1_13));
    }
    {
      Uniq_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Uniq_10, 0) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Rval1_6));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (Uniq_10));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (Uniq_10));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (Rval2_7));
    }
    ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(RvalPairList_8, N1_13, &RvalUniqList_11, &UniqRvalList_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (RvalUniqList_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (UniqRvalList_12));
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_vars_in_rval_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rval_0_2,
  MR_Word * STATE_VARIABLE_Rval_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rval_3 = STATE_VARIABLE_Rval_0_2;
    else
    {
      MR_Word Var_7;
      MR_Word Sub_8;
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_Rval_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Rval_0_2;

      Var_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Sub_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_7));
      }
      ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(Var_14, Sub_8, STATE_VARIABLE_Rval_0_2, &STATE_VARIABLE_Rval_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_9;
      next_value_of_STATE_VARIABLE_Rval_0_2 = STATE_VARIABLE_Rval_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Rval_0_2 = next_value_of_STATE_VARIABLE_Rval_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(
  MR_Word OldRval_5,
  MR_Word NewRval_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____rval_0_0(Rval0_7, OldRval_5);
  if (succeeded)
    *Rval_8 = NewRval_6;
  else
    switch (MR_tag((MR_Word) Rval0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval0_9 = ((MR_Word) ((MR_hl_field(0, Rval0_7, (MR_Integer) 0))));
          MR_Word Lval_10;

          switch (MR_tag((MR_Word) Lval0_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              Lval_10 = Lval0_9;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Lval0_9, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                  Lval_10 = Lval0_9;
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Rval0_42 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_43;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_42, &Rval_43);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_43));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Rval0_53 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_54;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_53, &Rval_54);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_54));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Rval0_49 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_50;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_49, &Rval_50);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_50));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Rval0_51 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_52;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_51, &Rval_52);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_52));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Rval0_55 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_56;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_55, &Rval_56);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_56));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Tag_44 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval1_45 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 2))));
                    MR_Word Rval2_46 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 3))));
                    MR_Word Rval3_47;
                    MR_Word Rval4_48;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_45, &Rval3_47);
                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval2_46, &Rval4_48);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Tag_44));
                      MR_hl_field(3, Lval_10, 2) = ((MR_Box) (Rval3_47));
                      MR_hl_field(3, Lval_10, 3) = ((MR_Box) (Rval4_48));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Rval0_57 = ((MR_Word) ((MR_hl_field(3, Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_58;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_57, &Rval_58);
                    {
                      Lval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(3, Lval_10, 1) = ((MR_Box) (Rval_58));
                    }
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Rval_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Lval_10));
          }
        }
        break;
      case (MR_Integer) 1:
        *Rval_8 = Rval0_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Tag_12 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 0))));
          MR_Word Rval1_13 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 1))));
          MR_Word Rval2_14;

          ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_13, &Rval2_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_8 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (Tag_12));
            MR_hl_field(2, base, 1) = ((MR_Box) (Rval2_14));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Rval_8 = Rval0_7;
            break;
          case (MR_Integer) 1:
            *Rval_8 = Rval0_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_17 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
              MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_25;

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_24, &Rval2_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_17));
                MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_25));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Unop_18 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
              MR_Word Rval1_26 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_27;

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_26, &Rval2_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Unop_18));
                MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_27));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Binop_19 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
              MR_Word Rval3_20;
              MR_Word Rval4_21;
              MR_Word Rval1_28 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_29 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 3))));

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_28, &Rval3_20);
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval2_29, &Rval4_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Binop_19));
                MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_20));
                MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef1_22 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
              MR_Word MemRef2_23;

              switch (MR_tag((MR_Word) MemRef1_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MemRef2_23 = MemRef1_22;
                  break;
                case (MR_Integer) 1:
                  MemRef2_23 = MemRef1_22;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval0_60 = ((MR_Word) ((MR_hl_field(2, MemRef1_22, (MR_Integer) 0))));
                    MR_Word MaybeTag_61 = ((MR_Word) ((MR_hl_field(2, MemRef1_22, (MR_Integer) 1))));
                    MR_Word Rval_62;
                    MR_Word N_64 = ((MR_Word) ((MR_hl_field(2, MemRef1_22, (MR_Integer) 2))));

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_60, &Rval_62);
                    {
                      MemRef2_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, MemRef2_23, 0) = ((MR_Box) (Rval_62));
                      MR_hl_field(2, MemRef2_23, 1) = ((MR_Box) (MaybeTag_61));
                      MR_hl_field(2, MemRef2_23, 2) = ((MR_Box) (N_64));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (MemRef2_23));
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(
  MR_Word OldLval_5,
  MR_Word NewLval_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8)
{
  MR_Integer _SubstCount_9;

  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_7, Rval_8, (MR_Integer) 0, &_SubstCount_9);
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(
  MR_Word OldLval_5,
  MR_Word NewLval_6,
  MR_Word Lval0_7,
  MR_Word * Lval_8)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_7, OldLval_5);
  if (succeeded)
    *Lval_8 = NewLval_6;
  else
    switch (MR_tag((MR_Word) Lval0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Lval_8 = Lval0_7;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            *Lval_8 = Lval0_7;
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_15;
              MR_Integer _SubstCount_59;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_14, &Rval_15, (MR_Integer) 0, &_SubstCount_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_15));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval0_26 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_27;
              MR_Integer _SubstCount_56;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_26, &Rval_27, (MR_Integer) 0, &_SubstCount_56);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_27));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval0_22 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_23;
              MR_Integer _SubstCount_53;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_22, &Rval_23, (MR_Integer) 0, &_SubstCount_53);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_23));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval0_24 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_25;
              MR_Integer _SubstCount_50;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_24, &Rval_25, (MR_Integer) 0, &_SubstCount_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_25));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval0_28 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_29;
              MR_Integer _SubstCount_47;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_28, &Rval_29, (MR_Integer) 0, &_SubstCount_47);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_29));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Tag_16 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 2))));
              MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 3))));
              MR_Word Rval3_19;
              MR_Word Rval4_20;
              MR_Integer STATE_VARIABLE_N_33_21;
              MR_Integer _SubstCount_41;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval1_17, &Rval3_19, (MR_Integer) 0, &STATE_VARIABLE_N_33_21);
              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval2_18, &Rval4_20, STATE_VARIABLE_N_33_21, &_SubstCount_41);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Tag_16));
                MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_19));
                MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_20));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval0_30 = ((MR_Word) ((MR_hl_field(3, Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_31;
              MR_Integer _SubstCount_44;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_30, &Rval_31, (MR_Integer) 0, &_SubstCount_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Rval_31));
              }
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word Rval0_7,
  MR_Word * Rval_8,
  MR_Integer STATE_VARIABLE_Acc_0_25,
  MR_Integer * STATE_VARIABLE_Acc_26)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(0, Rval0_7, (MR_Integer) 0))));
        MR_Word Lval_11;

        succeeded = ll_backend__llds____Unify____lval_0_0(Lval0_10, Var_41);
        if (succeeded)
        {
          Lval_11 = Var_42;
          *STATE_VARIABLE_Acc_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Acc_0_25 + (MR_Unsigned) 1);
        }
        else
          switch (MR_tag((MR_Word) Lval0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                Lval_11 = Lval0_10;
                *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Lval0_10, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                  {
                    Lval_11 = Lval0_10;
                    *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Rval0_46 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_47;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_46, &Rval_47, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_47));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Rval0_58 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_59;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_58, &Rval_59, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_59));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Rval0_54 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_55;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_54, &Rval_55, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_55));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Rval0_56 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_57;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_56, &Rval_57, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_57));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Rval0_60 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_61;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_60, &Rval_61, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_61));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Tag_48 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval1_49 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 2))));
                    MR_Word Rval2_50 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 3))));
                    MR_Word Rval3_51;
                    MR_Word Rval4_52;
                    MR_Integer STATE_VARIABLE_N_33_53;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_49, &Rval3_51, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_N_33_53);
                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval2_50, &Rval4_52, STATE_VARIABLE_N_33_53, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Tag_48));
                      MR_hl_field(3, Lval_11, 2) = ((MR_Box) (Rval3_51));
                      MR_hl_field(3, Lval_11, 3) = ((MR_Box) (Rval4_52));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Rval0_62 = ((MR_Word) ((MR_hl_field(3, Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_63;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_62, &Rval_63, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(3, Lval_11, 1) = ((MR_Box) (Rval_63));
                    }
                  }
                  break;
              }
              break;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lval_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Rval_8 = Rval0_7;
        *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_13 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 0))));
        MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 1))));
        MR_Word Rval2_15;

        ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_14, &Rval2_15, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_13));
          MR_hl_field(2, base, 1) = ((MR_Box) (Rval2_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Rval_8 = Rval0_7;
            *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            *Rval_8 = Rval0_7;
            *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_34 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_35;

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_34, &Rval2_35, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_19 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_36 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_37;

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_36, &Rval2_37, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Unop_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_20 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval3_21;
            MR_Word Rval4_22;
            MR_Integer STATE_VARIABLE_Acc_31_31;
            MR_Word Rval1_38 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_39 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 3))));

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_38, &Rval3_21, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_31_31);
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval2_39, &Rval4_22, STATE_VARIABLE_Acc_31_31, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Binop_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_23 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word MemRef_24;

            switch (MR_tag((MR_Word) MemRef0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Rval0_71 = ((MR_Word) ((MR_hl_field(0, MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_72;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_71, &Rval_72, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MemRef_24, 0) = ((MR_Box) (Rval_72));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Rval0_79 = ((MR_Word) ((MR_hl_field(1, MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_80;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_79, &Rval_80, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MemRef_24, 0) = ((MR_Box) (Rval_80));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval0_73 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 0))));
                  MR_Word MaybeTag_74 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 1))));
                  MR_Word FieldRval0_75 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 2))));
                  MR_Word BaseRval_76;
                  MR_Word FieldRval_77;
                  MR_Integer STATE_VARIABLE_Acc_21_78;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, BaseRval0_73, &BaseRval_76, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_21_78);
                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, FieldRval0_75, &FieldRval_77, STATE_VARIABLE_Acc_21_78, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, MemRef_24, 0) = ((MR_Box) (BaseRval_76));
                    MR_hl_field(2, MemRef_24, 1) = ((MR_Box) (MaybeTag_74));
                    MR_hl_field(2, MemRef_24, 2) = ((MR_Box) (FieldRval_77));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MemRef_24));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Lval_10;
  MR_Integer conv0_STATE_VARIABLE_N_13;

  ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Lval_10, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_N_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_Lval_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_N_13));
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(
  MR_Word OldLval_7,
  MR_Word NewLval_8,
  MR_Word Instr0_9,
  MR_Word * Instr_10,
  MR_Integer STATE_VARIABLE_N_0_12,
  MR_Integer * STATE_VARIABLE_N_13)
{
  MR_Word Var_14;
  MR_Word Uinstr0_20;
  MR_String Comment_21;
  MR_Word Uinstr_22;
  MR_Box conv2_STATE_VARIABLE_N_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (OldLval_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (NewLval_8));
  }
  Uinstr0_20 = ((MR_Word) ((MR_hl_field(0, Instr0_9, (MR_Integer) 0))));
  Comment_21 = ((MR_String) ((MR_hl_field(0, Instr0_9, (MR_Integer) 1))));
  ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_14, Uinstr0_20, &Uinstr_22, ((MR_Box) (STATE_VARIABLE_N_0_12)), &conv2_STATE_VARIABLE_N_13);
  *STATE_VARIABLE_N_13 = ((MR_Integer) (conv2_STATE_VARIABLE_N_13));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Uinstr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (Comment_21));
  }
}

void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Transform_6,
  MR_Word Instr0_7,
  MR_Word * Instr_8,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  MR_Word Uinstr0_10 = ((MR_Word) ((MR_hl_field(0, Instr0_7, (MR_Integer) 0))));
  MR_String Comment_11 = ((MR_String) ((MR_hl_field(0, Instr0_7, (MR_Integer) 1))));
  MR_Word Uinstr_12;

  ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(TypeInfo_for_T_15, Transform_6, Uinstr0_10, &Uinstr_12, STATE_VARIABLE_Acc_0_13, STATE_VARIABLE_Acc_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Uinstr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Comment_11));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Component_8;

  ll_backend__exprn_aux__transform_lval_in_component_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Component_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_Component_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Instr_8;

  ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Instr_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_Instr_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word Transform_6,
  MR_Word Uinstr0_7,
  MR_Word * Uinstr_8,
  MR_Box STATE_VARIABLE_Acc_0_98,
  MR_Box * STATE_VARIABLE_Acc_99)
{
  switch (MR_tag((MR_Word) Uinstr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Uinstr_8 = Uinstr0_7;
        *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_0_98;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LvalSet0_28 = ((MR_Word) ((MR_hl_field(2, Uinstr0_7, (MR_Integer) 0))));
        MR_Word Lvals0_29;
        MR_Word Lvals_30;
        MR_Word LvalSet_31;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_28, &Lvals0_29);
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_186, Transform_6, Lvals0_29, &Lvals_30, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
        mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_30, &LvalSet_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Uinstr_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (LvalSet_31));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer TempR_32 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Integer TempF_33 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Instrs0_34 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word Instrs_35;
            MR_Word Var_101;

            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0]));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1));
              MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_101, 3) = ((MR_Box) (TypeInfo_for_T_186));
              MR_hl_field(0, Var_101, 4) = ((MR_Box) (Transform_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TypeInfo_for_T_186, Var_101, Instrs0_34, &Instrs_35, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TempR_32));
              MR_hl_field(3, base, 2) = ((MR_Box) (TempF_33));
              MR_hl_field(3, base, 3) = ((MR_Box) (Instrs_35));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_36 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_37 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_38;
            MR_Word Rval_39;
            MR_Box STATE_VARIABLE_Acc_103_103;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv1_Lval_38;

            func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_36)), &conv1_Lval_38, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_103_103);
            Lval_38 = ((MR_Word) (conv1_Lval_38));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_37, &Rval_39, STATE_VARIABLE_Acc_103_103, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_38));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval_39));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box STATE_VARIABLE_Acc_105_105;
            MR_Word Lval0_139 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_140 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_141;
            MR_Word Rval_142;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv13_Lval_141;

            func_12(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_139)), &conv13_Lval_141, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_105_105);
            Lval_141 = ((MR_Word) (conv13_Lval_141));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_140, &Rval_142, STATE_VARIABLE_Acc_105_105, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_141));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval_142));
            }
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 29:
          {
            *Uinstr_8 = Uinstr0_7;
            *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_0_98;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeMaxIndex_40 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Labels_41 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word Rval0_143 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_144;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_143, &Rval_144, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_144));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeMaxIndex_40));
              MR_hl_field(3, base, 3) = ((MR_Box) (Labels_41));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_42 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word LiveLvals0_43 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_String Code_44 = ((MR_String) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word LiveLvals_45;

            ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(TypeInfo_for_T_186, Transform_6, LiveLvals0_43, &LiveLvals_45, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (LiveLvals_45));
              MR_hl_field(3, base, 3) = ((MR_Box) (Code_44));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CodeAddr_46 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Rval0_145 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_146;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_145, &Rval_146, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_146));
              MR_hl_field(3, base, 2) = ((MR_Box) (CodeAddr_46));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_147 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_148;
            void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv29_Lval_148;

            func_28(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_147)), &conv29_Lval_148, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_148 = ((MR_Word) (conv29_Lval_148));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_148));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval0_149 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_150;
            void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv27_Lval_150;

            func_26(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_149)), &conv27_Lval_150, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_150 = ((MR_Word) (conv27_Lval_150));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_150));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_47 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word MO_48 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word TypeCtor_49 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 5))));
            MR_Word MayUseAtomic_50 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval0_51 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 7))));
            MR_Word MaybeReuse0_52 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 8))));
            MR_Word MaybeRegionRval_53;
            MR_Word MaybeReuse_56;
            MR_Box STATE_VARIABLE_Acc_112_112;
            MR_Box STATE_VARIABLE_Acc_113_113;
            MR_Box STATE_VARIABLE_Acc_114_114;
            MR_Word Lval0_151 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_152 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 4))));
            MR_Word Lval_153;
            MR_Word Rval_154;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv5_Lval_153;

            func_4(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_151)), &conv5_Lval_153, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_112_112);
            Lval_153 = ((MR_Word) (conv5_Lval_153));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_152, &Rval_154, STATE_VARIABLE_Acc_112_112, &STATE_VARIABLE_Acc_113_113);
            if ((MaybeRegionRval0_51 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeRegionRval_53 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Acc_114_114 = STATE_VARIABLE_Acc_113_113;
            }
            else
            {
              MR_Word RegionRval0_54 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval0_51, (MR_Integer) 0))));
              MR_Word RegionRval_55;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, RegionRval0_54, &RegionRval_55, STATE_VARIABLE_Acc_113_113, &STATE_VARIABLE_Acc_114_114);
              {
                MaybeRegionRval_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeRegionRval_53, 0) = ((MR_Box) (RegionRval_55));
              }
            }
            if ((MaybeReuse0_52 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeReuse_56 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_114_114;
            }
            else
            {
              MR_Word ReuseRval0_57 = ((MR_Word) ((MR_hl_field(1, MaybeReuse0_52, (MR_Integer) 0))));
              MR_Word MaybeFlagLval0_58 = ((MR_Word) ((MR_hl_field(1, MaybeReuse0_52, (MR_Integer) 1))));
              MR_Word ReuseRval_59;
              MR_Word MaybeFlagLval_60;
              MR_Box STATE_VARIABLE_Acc_115_115;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, ReuseRval0_57, &ReuseRval_59, STATE_VARIABLE_Acc_114_114, &STATE_VARIABLE_Acc_115_115);
              if ((MaybeFlagLval0_58 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeFlagLval_60 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_115_115;
              }
              else
              {
                MR_Word FlagLval0_61 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval0_58, (MR_Integer) 0))));
                MR_Word FlagLval_62;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
                MR_Box conv7_FlagLval_62;

                func_6(((MR_Box) (Transform_6)), ((MR_Box) (FlagLval0_61)), &conv7_FlagLval_62, STATE_VARIABLE_Acc_115_115, STATE_VARIABLE_Acc_99);
                FlagLval_62 = ((MR_Word) (conv7_FlagLval_62));
                {
                  MaybeFlagLval_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeFlagLval_60, 0) = ((MR_Box) (FlagLval_62));
                }
              }
              {
                MaybeReuse_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeReuse_56, 0) = ((MR_Box) (ReuseRval_59));
                MR_hl_field(1, MaybeReuse_56, 1) = ((MR_Box) (MaybeFlagLval_60));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_153));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeTag_47));
              MR_hl_field(3, base, 3) = ((MR_Box) (MO_48));
              MR_hl_field(3, base, 4) = ((MR_Box) (Rval_154));
              MR_hl_field(3, base, 5) = ((MR_Box) (TypeCtor_49));
              MR_hl_field(3, base, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_50));
              MR_hl_field(3, base, 7) = ((MR_Box) (MaybeRegionRval_53));
              MR_hl_field(3, base, 8) = ((MR_Box) (MaybeReuse_56));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_155 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_156;
            void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv19_Lval_156;

            func_18(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_155)), &conv19_Lval_156, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_156 = ((MR_Word) (conv19_Lval_156));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_156));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval0_157 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_158;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_157, &Rval_158, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_158));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_159 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_160;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_159, &Rval_160, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_160));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            *Uinstr_8 = Uinstr0_7;
            *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_0_98;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_65 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word IdRval0_66 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word NumLval0_67 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 4))));
            MR_Word AddrLval0_68 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 5))));
            MR_Word IdRval_69;
            MR_Word NumLval_70;
            MR_Word AddrLval_71;
            MR_Box STATE_VARIABLE_Acc_120_120;
            MR_Box STATE_VARIABLE_Acc_121_121;
            MR_Word EmbeddedStackFrame_161 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv23_NumLval_70;
            void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv25_AddrLval_71;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, IdRval0_66, &IdRval_69, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_120_120);
            func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            func_22(((MR_Box) (Transform_6)), ((MR_Box) (NumLval0_67)), &conv23_NumLval_70, STATE_VARIABLE_Acc_120_120, &STATE_VARIABLE_Acc_121_121);
            NumLval_70 = ((MR_Word) (conv23_NumLval_70));
            func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            func_24(((MR_Box) (Transform_6)), ((MR_Box) (AddrLval0_68)), &conv25_AddrLval_71, STATE_VARIABLE_Acc_121_121, STATE_VARIABLE_Acc_99);
            AddrLval_71 = ((MR_Word) (conv25_AddrLval_71));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, base, 1) = ((MR_Box) (FillOp_65));
              MR_hl_field(3, base, 2) = ((MR_Box) (EmbeddedStackFrame_161));
              MR_hl_field(3, base, 3) = ((MR_Box) (IdRval_69));
              MR_hl_field(3, base, 4) = ((MR_Box) (NumLval_70));
              MR_hl_field(3, base, 5) = ((MR_Box) (AddrLval_71));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_72 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ValueRval0_73 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word ValueRval_74;
            MR_Word EmbeddedStackFrame_162 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, ValueRval0_73, &ValueRval_74, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (SetOp_72));
              MR_hl_field(3, base, 2) = ((MR_Box) (EmbeddedStackFrame_162));
              MR_hl_field(3, base, 3) = ((MR_Box) (ValueRval_74));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            *Uinstr_8 = Uinstr0_7;
            *STATE_VARIABLE_Acc_99 = STATE_VARIABLE_Acc_0_98;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_164 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_165;
            void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv31_Lval_165;

            func_30(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_164)), &conv31_Lval_165, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_165 = ((MR_Word) (conv31_Lval_165));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_165));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_76 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Rval0_166 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_167;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_166, &Rval_167, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_167));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (Reason_76));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_168 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_169;
            void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv21_Lval_169;

            func_20(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_168)), &conv21_Lval_169, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_169 = ((MR_Word) (conv21_Lval_169));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_169));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval0_170 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_171;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, Rval0_170, &Rval_171, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_171));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Decls_77 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Components0_78 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word MayCallMercury_79 = ((MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word MaybeLabel1_80 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 4))));
            MR_Word MaybeLabel2_81 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 5))));
            MR_Word MaybeLabel3_82 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 6))));
            MR_Word MaybeLabel4_83 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 7))));
            MR_Word MaybeLabel5_84 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 8))));
            MR_Word Components_87;
            MR_Word Var_128;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 9)));

            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_128, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[1]));
              MR_hl_field(0, Var_128, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2));
              MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_128, 3) = ((MR_Box) (TypeInfo_for_T_186));
              MR_hl_field(0, Var_128, 4) = ((MR_Box) (Transform_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), TypeInfo_for_T_186, Var_128, Components0_78, &Components_87, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Decls_77));
              MR_hl_field(3, base, 2) = ((MR_Box) (Components_87));
              MR_hl_field(3, base, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_79));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybeLabel1_80));
              MR_hl_field(3, base, 5) = ((MR_Box) (MaybeLabel2_81));
              MR_hl_field(3, base, 6) = ((MR_Box) (MaybeLabel3_82));
              MR_hl_field(3, base, 7) = ((MR_Box) (MaybeLabel4_83));
              MR_hl_field(3, base, 8) = ((MR_Box) (MaybeLabel5_84));
              MR_hl_field(3, base, 9) = (MR_Box) (packed_word_2);
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer BranchCount_88 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Integer ConjId_89 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word Lval0_172 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_173;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv9_Lval_173;

            func_8(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_172)), &conv9_Lval_173, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_173 = ((MR_Word) (conv9_Lval_173));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_173));
              MR_hl_field(3, base, 2) = ((MR_Box) (BranchCount_88));
              MR_hl_field(3, base, 3) = ((MR_Box) (ConjId_89));
            }
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_90 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval0_174 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_175;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv11_Lval_175;

            func_10(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_174)), &conv11_Lval_175, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_175 = ((MR_Word) (conv11_Lval_175));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_175));
              MR_hl_field(3, base, 2) = ((MR_Box) (Label_90));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_91 = ((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval0_176 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_177;
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            MR_Box conv15_Lval_177;

            func_14(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_176)), &conv15_Lval_177, STATE_VARIABLE_Acc_0_98, STATE_VARIABLE_Acc_99);
            Lval_177 = ((MR_Word) (conv15_Lval_177));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NumSlots_91));
              MR_hl_field(3, base, 2) = ((MR_Box) (Lval_177));
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval0_92 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCSLval0_93 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCRval_94;
            MR_Word LCSLval_95;
            MR_Box STATE_VARIABLE_Acc_133_133;
            MR_Word Label_178 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv17_LCSLval_95;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, LCRval0_92, &LCRval_94, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_133_133);
            func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
            func_16(((MR_Box) (Transform_6)), ((MR_Box) (LCSLval0_93)), &conv17_LCSLval_95, STATE_VARIABLE_Acc_133_133, STATE_VARIABLE_Acc_99);
            LCSLval_95 = ((MR_Word) (conv17_LCSLval_95));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
              MR_hl_field(3, base, 1) = ((MR_Box) (LCRval_94));
              MR_hl_field(3, base, 2) = ((MR_Box) (LCSLval_95));
              MR_hl_field(3, base, 3) = ((MR_Box) (Label_178));
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval0_96 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCSRval_97;
            MR_Box STATE_VARIABLE_Acc_135_135;
            MR_Word Label_179 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 3))));
            MR_Word LCRval0_180 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCRval_181;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, LCRval0_180, &LCRval_181, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_135_135);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, LCSRval0_96, &LCSRval_97, STATE_VARIABLE_Acc_135_135, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(3, base, 1) = ((MR_Box) (LCRval_181));
              MR_hl_field(3, base, 2) = ((MR_Box) (LCSRval_97));
              MR_hl_field(3, base, 3) = ((MR_Box) (Label_179));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Box STATE_VARIABLE_Acc_137_137;
            MR_Word LCRval0_182 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCRval_183;
            MR_Word LCSRval0_184 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCSRval_185;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, LCRval0_182, &LCRval_183, STATE_VARIABLE_Acc_0_98, &STATE_VARIABLE_Acc_137_137);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_186, Transform_6, LCSRval0_184, &LCSRval_185, STATE_VARIABLE_Acc_137_137, STATE_VARIABLE_Acc_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(3, base, 1) = ((MR_Box) (LCRval_183));
              MR_hl_field(3, base, 2) = ((MR_Box) (LCSRval_185));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Transform_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
  }
  else
  {
    MR_Word LvalSet0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word LvalSet_12;
    MR_Word Lvals0_14;
    MR_Word Lvals_15;

    Lvals0_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_11);
    mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_18, Transform_1, Lvals0_14, &Lvals_15, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_15, &LvalSet_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LvalSet_12));
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word Transform_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8,
  MR_Box STATE_VARIABLE_Acc_0_25,
  MR_Box * STATE_VARIABLE_Acc_26)
{
  switch (MR_tag((MR_Word) Rval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(0, Rval0_7, (MR_Integer) 0))));
        MR_Word Lval_11;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Transform_6, (MR_Integer) 1))));
        MR_Box conv1_Lval_11;

        func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_10)), &conv1_Lval_11, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        Lval_11 = ((MR_Word) (conv1_Lval_11));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lval_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Rval_8 = Rval0_7;
        *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_13 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 0))));
        MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 1))));
        MR_Word Rval2_15;

        ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_14, &Rval2_15, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_13));
          MR_hl_field(2, base, 1) = ((MR_Box) (Rval2_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Rval_8 = Rval0_7;
            *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            *Rval_8 = Rval0_7;
            *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_34 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_35;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_34, &Rval2_35, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_19 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_36 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_37;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_36, &Rval2_37, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Unop_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval2_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_20 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Rval3_21;
            MR_Word Rval4_22;
            MR_Box STATE_VARIABLE_Acc_31_31;
            MR_Word Rval1_38 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_39 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 3))));

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_38, &Rval3_21, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_31_31);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval2_39, &Rval4_22, STATE_VARIABLE_Acc_31_31, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Binop_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (Rval3_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (Rval4_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_23 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word MemRef_24;

            switch (MR_tag((MR_Word) MemRef0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Rval0_41 = ((MR_Word) ((MR_hl_field(0, MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_42;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval0_41, &Rval_42, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MemRef_24, 0) = ((MR_Box) (Rval_42));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Rval0_49 = ((MR_Word) ((MR_hl_field(1, MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_50;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval0_49, &Rval_50, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MemRef_24, 0) = ((MR_Box) (Rval_50));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval0_43 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 0))));
                  MR_Word MaybeTag_44 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 1))));
                  MR_Word FieldRval0_45 = ((MR_Word) ((MR_hl_field(2, MemRef0_23, (MR_Integer) 2))));
                  MR_Word BaseRval_46;
                  MR_Word FieldRval_47;
                  MR_Box STATE_VARIABLE_Acc_21_48;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, BaseRval0_43, &BaseRval_46, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_21_48);
                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, FieldRval0_45, &FieldRval_47, STATE_VARIABLE_Acc_21_48, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, MemRef_24, 0) = ((MR_Box) (BaseRval_46));
                    MR_hl_field(2, MemRef_24, 1) = ((MR_Box) (MaybeTag_44));
                    MR_hl_field(2, MemRef_24, 2) = ((MR_Box) (FieldRval_47));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MemRef_24));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__exprn_aux__vars_in_rval_2_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Word tscc_output_1_HeadVar__2_2;

  // The code for TSCC PROC 1: pred ll_backend.exprn_aux.vars_in_rval/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.exprn_aux.vars_in_rval/2-0
  ;
  // proc 2 in TSCC: pred ll_backend.exprn_aux.vars_in_lval/2-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Lval_3;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_22;
              MR_Word VarsB_23;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_19, &VarsA_22);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_20, &VarsB_23);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_22, VarsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(0, MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_27;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(1, MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_29;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_31 = ((MR_Word) ((MR_hl_field(2, MemRef_24, (MR_Integer) 0))));
                    MR_Word FieldRval_33 = ((MR_Word) ((MR_hl_field(2, MemRef_24, (MR_Integer) 2))));
                    MR_Word BaseVars_34;
                    MR_Word FieldVars_35;

                    ll_backend__exprn_aux__vars_in_rval_2_p_0(BaseRval_31, &BaseVars_34);
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(FieldRval_33, &FieldVars_35);
                    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), BaseVars_34, FieldVars_35);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RvalA_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_26;
              MR_Word VarsB_27;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_23, &VarsA_26);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_24, &VarsB_27);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_26, VarsB_27);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_31));
                MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__2_2 = tscc_output_1_HeadVar__2_2;
  return;
}

void MR_CALL 
ll_backend__exprn_aux__vars_in_lval_2_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_output_1_HeadVar__2_2;

  // The code for TSCC PROC 2: pred ll_backend.exprn_aux.vars_in_lval/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.exprn_aux.vars_in_rval/2-0
  ;
  // proc 2 in TSCC: pred ll_backend.exprn_aux.vars_in_lval/2-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Lval_3;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_22;
              MR_Word VarsB_23;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_19, &VarsA_22);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_20, &VarsB_23);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_22, VarsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(0, MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_27;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(1, MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_29;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_31 = ((MR_Word) ((MR_hl_field(2, MemRef_24, (MR_Integer) 0))));
                    MR_Word FieldRval_33 = ((MR_Word) ((MR_hl_field(2, MemRef_24, (MR_Integer) 2))));
                    MR_Word BaseVars_34;
                    MR_Word FieldVars_35;

                    ll_backend__exprn_aux__vars_in_rval_2_p_0(BaseRval_31, &BaseVars_34);
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(FieldRval_33, &FieldVars_35);
                    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), BaseVars_34, FieldVars_35);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RvalA_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_26;
              MR_Word VarsB_27;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_23, &VarsA_26);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_24, &VarsB_27);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_26, VarsB_27);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_31));
                MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__2_2 = tscc_output_1_HeadVar__2_2;
  return;
}

void MR_CALL 
ll_backend__exprn_aux__const_is_constant_3_p_0(
  MR_Word Const_4,
  MR_Word ExprnOpts_5,
  MR_Word * IsConst_6)
{
  switch (MR_tag((MR_Word) Const_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *IsConst_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
          *IsConst_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            MR_Word SGInt64s_24 = ((((MR_Unsigned) ((MR_hl_field(0, ExprnOpts_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

            switch (SGInt64s_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *IsConst_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                *IsConst_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word SGFloats_26 = ((((MR_Unsigned) ((MR_hl_field(0, ExprnOpts_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

            switch (SGFloats_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *IsConst_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                *IsConst_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word CodeAddr_27 = ((MR_Word) ((MR_hl_field(3, Const_4, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) CodeAddr_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
                *IsConst_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Label_46 = ((MR_Word) ((MR_hl_field(1, CodeAddr_27, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) Label_46)) == (MR_Integer) 1))
                  {
                    MR_Word EntryLabelType_61 = ((MR_Unsigned) ((MR_hl_field(1, Label_46, (MR_Integer) 0))) & (MR_Integer) 3);

                    switch (EntryLabelType_61) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *IsConst_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 1:
                        {
                          MR_Word StaticCodeAddrs_63 = ((MR_Unsigned) ((MR_hl_field(0, ExprnOpts_5, (MR_Integer) 0))) & (MR_Integer) 1);

                          switch (StaticCodeAddrs_63) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              *IsConst_6 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 0:
                              *IsConst_6 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                    }
                  }
                  else
                    *IsConst_6 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word StaticCodeAddrs_48 = ((MR_Unsigned) ((MR_hl_field(0, ExprnOpts_5, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (StaticCodeAddrs_48) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *IsConst_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      *IsConst_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = ll_backend__exprn_aux____Unify____transform_lval_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__exprn_aux____Compare____transform_lval_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__exprn_aux__init(void)
{
}

void mercury__ll_backend__exprn_aux__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__exprn_aux__ll_backend__exprn_aux__type_ctor_info_transform_lval_1);
}

void mercury__ll_backend__exprn_aux__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__exprn_aux__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.exprn_aux.
