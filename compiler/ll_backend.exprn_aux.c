/*
** Automatically generated from `exprn_aux.m'
** by the Mercury compiler,
** version rotd-2022-04-20
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
#include "term.mih"
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
#include "libs.globals.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
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
  MR_Word TypeInfo_for_T_21,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word TypeInfo_for_T_21,
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
  MR_Word TypeInfo_for_T_31,
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
  MR_Word TypeInfo_for_T_185,
  MR_Word Transform_6,
  MR_Word Uinstr0_7,
  MR_Word * Uinstr_8,
  MR_Box STATE_VARIABLE_Acc_0_97,
  MR_Box * STATE_VARIABLE_Acc_98);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word TypeInfo_for_T_19,
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
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
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
        {
          *Lval_10 = Lval0_9;
          *STATE_VARIABLE_N_13 = STATE_VARIABLE_N_0_12;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Lval_10 = Lval0_9;
          *STATE_VARIABLE_N_13 = STATE_VARIABLE_N_0_12;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 0))))) {
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
              MR_Word Rval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_20;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_19, &Rval_20, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_20));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_32;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_31, &Rval_32, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_32));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_28;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_27, &Rval_28, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_28));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_30;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_29, &Rval_30, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_30));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_34;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_33, &Rval_34, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_34));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Tag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 2))));
              MR_Word Rval2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 3))));
              MR_Word Rval3_24;
              MR_Word Rval4_25;
              MR_Integer STATE_VARIABLE_N_29_26;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval1_22, &Rval3_24, STATE_VARIABLE_N_0_12, &STATE_VARIABLE_N_29_26);
              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval2_23, &Rval4_25, STATE_VARIABLE_N_29_26, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_24));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_25));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
              MR_Word Rval_36;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_7, NewLval_8, Rval0_35, &Rval_36, STATE_VARIABLE_N_0_12, STATE_VARIABLE_N_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_36));
              }
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 0))));
  MR_Word VarType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 1))));
  MR_Word IsDummy_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 3))));
  MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 4))));
  MR_Word MaybeForeign_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Lval_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
  MR_Box conv1_Lval_17;

  func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_10)), &conv1_Lval_17, STATE_VARIABLE_Acc_0_18, STATE_VARIABLE_Acc_19);
  Lval_17 = ((MR_Word) (conv1_Lval_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Out_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarType_11));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigType_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Name_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeForeign_15));
    MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Transform_6,
  MR_Word Out0_7,
  MR_Word * Out_8,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 0))));
  MR_Word VarType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 1))));
  MR_Word IsDummy_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word OrigType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 3))));
  MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 4))));
  MR_Word MaybeForeign_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 5))));
  MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Out0_7, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Rval_17;

  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_21, Transform_6, Rval0_14, &Rval_17, STATE_VARIABLE_Acc_0_18, STATE_VARIABLE_Acc_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Out_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarType_11));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigType_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Rval_17));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeForeign_15));
    MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
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

  ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Out_8, wrapper_arg_3, wrapper_arg_4);
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

  ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Out_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Out_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
  MR_Word TypeInfo_for_T_31,
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
        MR_Word Inputs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component0_7, (MR_Integer) 0))));
        MR_Word Inputs_11;
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (TypeInfo_for_T_31));
          MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (Transform_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0), TypeInfo_for_T_31, Var_29, Inputs0_10, &Inputs_11, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Component_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inputs_11));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Outputs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component0_7, (MR_Integer) 0))));
        MR_Word Outputs_13;
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TypeInfo_for_T_31));
          MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Transform_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0), TypeInfo_for_T_31, Var_27, Outputs0_12, &Outputs_13, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Component_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Outputs_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Component_8 = Component0_7;
            *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LvalSet0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_7, (MR_Integer) 2))));
            MR_String Code_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), Component0_7, (MR_Integer) 3))));
            MR_Word LvalSet_21;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Component0_7, (MR_Integer) 1)));

            if ((LvalSet0_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              LvalSet_21 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Acc_25 = STATE_VARIABLE_Acc_0_24;
            }
            else
            {
              MR_Word LvalSet0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LvalSet0_19, (MR_Integer) 0))));
              MR_Word LvalSet_47;
              MR_Word Lvals0_48;
              MR_Word Lvals_49;

              Lvals0_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_46);
              mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_31, Transform_6, Lvals0_48, &Lvals_49, STATE_VARIABLE_Acc_0_24, STATE_VARIABLE_Acc_25);
              mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_49, &LvalSet_47);
              {
                LvalSet_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), LvalSet_21, 0) = ((MR_Box) (LvalSet_47));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Component_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LvalSet_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Code_20));
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
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Lval_3));
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
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Lval_5));
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
    MR_Word Lval_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Lvals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Word Rval_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Rvals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0))));
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
          MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_32;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word CodeAddress_11;

              succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                CodeAddress_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1))));
                {
                  CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CodeAddrs_5, 0) = ((MR_Box) (CodeAddress_11));
                  MR_hl_field(MR_mktag(1), CodeAddrs_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word DataId_12;

                succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  DataId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1))));
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    DataIds_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DataIds_6, 0) = ((MR_Box) (DataId_12));
                    MR_hl_field(MR_mktag(1), DataIds_6, 1) = ((MR_Box) (CodeAddrs_5));
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
              MR_Word SubRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_33;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_20;
              MR_Word DataIdsA_21;
              MR_Word CodeAddrsB_22;
              MR_Word DataIdsB_23;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_18, &CodeAddrsA_20, &DataIdsA_21);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_19, &CodeAddrsB_22, &DataIdsB_23);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_20, CodeAddrsB_22);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_21, DataIdsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) SubRval_29)) {
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
                    MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SubRval_29, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_36;

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
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0))))) {
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
              MR_Word Rval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_31;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_29;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3))));
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
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
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
          MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0))));
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
          MR_Word SubRval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_32;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
              DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));
              MR_Word CodeAddress_11;

              succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                CodeAddress_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1))));
                {
                  CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CodeAddrs_5, 0) = ((MR_Box) (CodeAddress_11));
                  MR_hl_field(MR_mktag(1), CodeAddrs_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word DataId_12;

                succeeded = ((((MR_tag((MR_Word) Const_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  DataId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_10, (MR_Integer) 1))));
                  CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    DataIds_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), DataIds_6, 0) = ((MR_Box) (DataId_12));
                    MR_hl_field(MR_mktag(1), DataIds_6, 1) = ((MR_Box) (CodeAddrs_5));
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
              MR_Word SubRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = SubRval_33;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
              MR_Word CodeAddrsA_20;
              MR_Word DataIdsA_21;
              MR_Word CodeAddrsB_22;
              MR_Word DataIdsB_23;

              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalA_18, &CodeAddrsA_20, &DataIdsA_21);
              ll_backend__exprn_aux__rval_addrs_3_p_0(SubRvalB_19, &CodeAddrsB_22, &DataIdsB_23);
              CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0), CodeAddrsA_20, CodeAddrsB_22);
              DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), DataIdsA_21, DataIdsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) SubRval_29)) {
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
                    MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SubRval_29, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_36;

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
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          CodeAddrs_5 = (MR_Word) ((MR_Unsigned) 0U);
          DataIds_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0))))) {
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
              MR_Word Rval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_32;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_31;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_29;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Rval_4 = Rval_28;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Rval_4 = next_value_of_tscc_proc_1_input_1_Rval_4;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3))));
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
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1))));
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
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_3, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      MaybeTag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      Rval1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 2))));
      Num_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 3))));
      succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_6, &Rval2_8);
    }
  }
  if (succeeded)
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (MaybeTag_5));
      MR_hl_field(MR_mktag(3), Var_13, 2) = ((MR_Box) (Rval2_8));
      MR_hl_field(MR_mktag(3), Var_13, 3) = ((MR_Box) (Num_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Rval_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word UnOp_9;
    MR_Word Rval2_24;
    MR_Word Rval1_14;

    succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      UnOp_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
      Rval1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
      succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_14, &Rval2_24);
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_4 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_9));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_24));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BinOp_10;
      MR_Word Rval3_11;
      MR_Word Rval2_22;
      MR_Word Rval1_15;

      succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        BinOp_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
        Rval1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
        Rval2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 3))));
        succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval1_15, &Rval3_11);
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Rval_4 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_10));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_11));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval2_22));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Rval2_16;
        MR_Word Rval1_17;
        MR_Word BinOp_19;
        MR_Word Rval3_20;

        succeeded = ((((MR_tag((MR_Word) Rval0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          BinOp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 1))));
          Rval1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 2))));
          Rval2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_3, (MR_Integer) 3))));
          succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(Rval2_16, &Rval3_20);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_19));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval1_17));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval3_20));
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
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Rval_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Rval_0_2;

      Left_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Right_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
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
    MR_Word RvalPairList_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Uniq_10;
    MR_Word RvalUniqList_11;
    MR_Word UniqRvalList_12;
    MR_Integer N1_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;

    Rval1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    Rval2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    N1_13 = (MR_Integer) ((MR_Unsigned) N0_2 - (MR_Unsigned) 1);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (N1_13));
    }
    {
      Uniq_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Uniq_10, 0) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Rval1_6));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Uniq_10));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Uniq_10));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Rval2_7));
    }
    ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(RvalPairList_8, N1_13, &RvalUniqList_11, &UniqRvalList_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalUniqList_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UniqRvalList_12));
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
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_Rval_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Rval_0_2;

      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Sub_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_7));
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
          MR_Word Lval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_7, (MR_Integer) 0))));
          MR_Word Lval_10;

          switch (MR_tag((MR_Word) Lval0_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Lval_10 = Lval0_9;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              Lval_10 = Lval0_9;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 0))))) {
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
                    MR_Word Rval0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_43;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_42, &Rval_43);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_43));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Rval0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_54;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_53, &Rval_54);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_54));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Rval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_50;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_49, &Rval_50);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_50));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Rval0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_52;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_51, &Rval_52);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_52));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Rval0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_56;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_55, &Rval_56);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_56));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Tag_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 2))));
                    MR_Word Rval2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 3))));
                    MR_Word Rval3_47;
                    MR_Word Rval4_48;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_45, &Rval3_47);
                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval2_46, &Rval4_48);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Tag_44));
                      MR_hl_field(MR_mktag(3), Lval_10, 2) = ((MR_Box) (Rval3_47));
                      MR_hl_field(MR_mktag(3), Lval_10, 3) = ((MR_Box) (Rval4_48));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Rval0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_9, (MR_Integer) 1))));
                    MR_Word Rval_58;

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_57, &Rval_58);
                    {
                      Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Rval_58));
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
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_10));
          }
        }
        break;
      case (MR_Integer) 1:
        *Rval_8 = Rval0_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Tag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 0))));
          MR_Word Rval1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 1))));
          MR_Word Rval2_14;

          ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_13, &Rval2_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_12));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval2_14));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Rval_8 = Rval0_7;
            break;
          case (MR_Integer) 1:
            *Rval_8 = Rval0_7;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
              MR_Word Rval1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_25;

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_24, &Rval2_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_25));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Unop_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
              MR_Word Rval1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_27;

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_26, &Rval2_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_27));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Binop_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
              MR_Word Rval3_20;
              MR_Word Rval4_21;
              MR_Word Rval1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
              MR_Word Rval2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 3))));

              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval1_28, &Rval3_20);
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval2_29, &Rval4_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binop_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
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
                    MR_Word Rval0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef1_22, (MR_Integer) 0))));
                    MR_Word MaybeTag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef1_22, (MR_Integer) 1))));
                    MR_Word Rval_62;
                    MR_Word N_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef1_22, (MR_Integer) 2))));

                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(OldRval_5, NewRval_6, Rval0_60, &Rval_62);
                    {
                      MemRef2_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MemRef2_23, 0) = ((MR_Box) (Rval_62));
                      MR_hl_field(MR_mktag(2), MemRef2_23, 1) = ((MR_Box) (MaybeTag_61));
                      MR_hl_field(MR_mktag(2), MemRef2_23, 2) = ((MR_Box) (N_64));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MemRef2_23));
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
        *Lval_8 = Lval0_7;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Lval_8 = Lval0_7;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 0))))) {
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
              MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_15;
              MR_Integer _SubstCount_59;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_14, &Rval_15, (MR_Integer) 0, &_SubstCount_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_15));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_27;
              MR_Integer _SubstCount_56;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_26, &Rval_27, (MR_Integer) 0, &_SubstCount_56);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_27));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_23;
              MR_Integer _SubstCount_53;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_22, &Rval_23, (MR_Integer) 0, &_SubstCount_53);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_23));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_25;
              MR_Integer _SubstCount_50;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_24, &Rval_25, (MR_Integer) 0, &_SubstCount_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_25));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_29;
              MR_Integer _SubstCount_47;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_28, &Rval_29, (MR_Integer) 0, &_SubstCount_47);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_29));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Tag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 2))));
              MR_Word Rval2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 3))));
              MR_Word Rval3_19;
              MR_Word Rval4_20;
              MR_Integer STATE_VARIABLE_N_29_21;
              MR_Integer _SubstCount_41;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval1_17, &Rval3_19, (MR_Integer) 0, &STATE_VARIABLE_N_29_21);
              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval2_18, &Rval4_20, STATE_VARIABLE_N_29_21, &_SubstCount_41);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_20));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
              MR_Word Rval_31;
              MR_Integer _SubstCount_44;

              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(OldLval_5, NewLval_6, Rval0_30, &Rval_31, (MR_Integer) 0, &_SubstCount_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_31));
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
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_7, (MR_Integer) 0))));
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
              {
                Lval_11 = Lval0_10;
                *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                Lval_11 = Lval0_10;
                *STATE_VARIABLE_Acc_26 = STATE_VARIABLE_Acc_0_25;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 0))))) {
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
                    MR_Word Rval0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_47;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_46, &Rval_47, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_47));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Rval0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_59;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_58, &Rval_59, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_59));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Rval0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_55;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_54, &Rval_55, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_55));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word Rval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_57;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_56, &Rval_57, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_57));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Rval0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_61;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_60, &Rval_61, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_61));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Tag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 2))));
                    MR_Word Rval2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 3))));
                    MR_Word Rval3_51;
                    MR_Word Rval4_52;
                    MR_Integer STATE_VARIABLE_N_29_53;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_49, &Rval3_51, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_N_29_53);
                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval2_50, &Rval4_52, STATE_VARIABLE_N_29_53, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Tag_48));
                      MR_hl_field(MR_mktag(3), Lval_11, 2) = ((MR_Box) (Rval3_51));
                      MR_hl_field(MR_mktag(3), Lval_11, 3) = ((MR_Box) (Rval4_52));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Rval0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_10, (MR_Integer) 1))));
                    MR_Word Rval_63;

                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_62, &Rval_63, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                    {
                      Lval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Lval_11, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(MR_mktag(3), Lval_11, 1) = ((MR_Box) (Rval_63));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_11));
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
        MR_Word Tag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 0))));
        MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 1))));
        MR_Word Rval2_15;

        ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_14, &Rval2_15, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_13));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval2_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 0))))) {
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
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_35;

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_34, &Rval2_35, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_37;

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_36, &Rval2_37, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_19));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval3_21;
            MR_Word Rval4_22;
            MR_Integer STATE_VARIABLE_Acc_28_28;
            MR_Word Rval1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 3))));

            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval1_38, &Rval3_21, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_28_28);
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval2_39, &Rval4_22, STATE_VARIABLE_Acc_28_28, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binop_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word MemRef_24;

            switch (MR_tag((MR_Word) MemRef0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Rval0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_72;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_71, &Rval_72, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MemRef_24, 0) = ((MR_Box) (Rval_72));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Rval0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_80;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, Rval0_79, &Rval_80, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MemRef_24, 0) = ((MR_Box) (Rval_80));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 0))));
                  MR_Word MaybeTag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 1))));
                  MR_Word FieldRval0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 2))));
                  MR_Word BaseRval_76;
                  MR_Word FieldRval_77;
                  MR_Integer STATE_VARIABLE_Acc_19_78;

                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, BaseRval0_73, &BaseRval_76, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_19_78);
                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(Var_41, Var_42, FieldRval0_75, &FieldRval_77, STATE_VARIABLE_Acc_19_78, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), MemRef_24, 0) = ((MR_Box) (BaseRval_76));
                    MR_hl_field(MR_mktag(2), MemRef_24, 1) = ((MR_Box) (MaybeTag_74));
                    MR_hl_field(MR_mktag(2), MemRef_24, 2) = ((MR_Box) (FieldRval_77));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MemRef_24));
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

  ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Lval_10, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_N_13);
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
  MR_Word Uinstr0_21;
  MR_String Comment_22;
  MR_Word Uinstr_23;
  MR_Box conv2_STATE_VARIABLE_N_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[2]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (OldLval_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (NewLval_8));
  }
  Uinstr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0))));
  Comment_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 1))));
  ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_14, Uinstr0_21, &Uinstr_23, ((MR_Box) (STATE_VARIABLE_N_0_12)), &conv2_STATE_VARIABLE_N_13);
  *STATE_VARIABLE_N_13 = ((MR_Integer) (conv2_STATE_VARIABLE_N_13));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Uinstr_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Comment_22));
  }
}

void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Transform_6,
  MR_Word Instr0_7,
  MR_Word * Instr_8,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  MR_Word Uinstr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 0))));
  MR_String Comment_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 1))));
  MR_Word Uinstr_12;

  ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(TypeInfo_for_T_16, Transform_6, Uinstr0_10, &Uinstr_12, STATE_VARIABLE_Acc_0_13, STATE_VARIABLE_Acc_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Instr_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Uinstr_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Comment_11));
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

  ll_backend__exprn_aux__transform_lval_in_component_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Component_8, wrapper_arg_3, wrapper_arg_4);
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

  ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Instr_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_Instr_8));
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
  MR_Word TypeInfo_for_T_185,
  MR_Word Transform_6,
  MR_Word Uinstr0_7,
  MR_Word * Uinstr_8,
  MR_Box STATE_VARIABLE_Acc_0_97,
  MR_Box * STATE_VARIABLE_Acc_98)
{
  switch (MR_tag((MR_Word) Uinstr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Uinstr_8 = Uinstr0_7;
        *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_0_97;
      }
      break;
    case (MR_Integer) 1:
      {
        *Uinstr_8 = Uinstr0_7;
        *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_0_97;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LvalSet0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uinstr0_7, (MR_Integer) 0))));
        MR_Word Lvals0_29;
        MR_Word Lvals_30;
        MR_Word LvalSet_31;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_28, &Lvals0_29);
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_185, Transform_6, Lvals0_29, &Lvals_30, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
        mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_30, &LvalSet_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Uinstr_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (LvalSet_31));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer TempR_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Integer TempF_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Instrs0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word Instrs_35;
            MR_Word Var_135;

            {
              Var_135 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_135, 3) = ((MR_Box) (TypeInfo_for_T_185));
              MR_hl_field(MR_mktag(0), Var_135, 4) = ((MR_Box) (Transform_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TypeInfo_for_T_185, Var_135, Instrs0_34, &Instrs_35, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TempR_32));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TempF_33));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Instrs_35));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_38;
            MR_Word Rval_39;
            MR_Box STATE_VARIABLE_Acc_133_133;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv1_Lval_38;

            func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_36)), &conv1_Lval_38, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_133_133);
            Lval_38 = ((MR_Word) (conv1_Lval_38));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_37, &Rval_39, STATE_VARIABLE_Acc_133_133, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_38));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_39));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box STATE_VARIABLE_Acc_131_131;
            MR_Word Lval0_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_140;
            MR_Word Rval_141;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv13_Lval_140;

            func_12(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_138)), &conv13_Lval_140, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_131_131);
            Lval_140 = ((MR_Word) (conv13_Lval_140));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_139, &Rval_141, STATE_VARIABLE_Acc_131_131, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_140));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_141));
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
            *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_0_97;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Labels_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Rval0_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_143;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_142, &Rval_143, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_143));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Labels_40));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word LiveLvals0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_String Code_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word LiveLvals_44;

            ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(TypeInfo_for_T_185, Transform_6, LiveLvals0_42, &LiveLvals_44, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_41));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LiveLvals_44));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Code_43));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word CodeAddr_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Rval0_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_145;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_144, &Rval_145, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_145));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CodeAddr_45));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval0_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_147;
            void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv29_Lval_147;

            func_28(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_146)), &conv29_Lval_147, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_147 = ((MR_Word) (conv29_Lval_147));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_147));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval0_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_149;
            void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv27_Lval_149;

            func_26(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_148)), &conv27_Lval_149, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_149 = ((MR_Word) (conv27_Lval_149));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_149));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word MO_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word TypeCtor_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 5))));
            MR_Word MayUseAtomic_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 7))));
            MR_Word MaybeReuse0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 8))));
            MR_Word MaybeRegionRval_52;
            MR_Word MaybeReuse_55;
            MR_Box STATE_VARIABLE_Acc_121_121;
            MR_Box STATE_VARIABLE_Acc_122_122;
            MR_Box STATE_VARIABLE_Acc_123_123;
            MR_Word Lval0_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval0_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 4))));
            MR_Word Lval_152;
            MR_Word Rval_153;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv5_Lval_152;

            func_4(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_150)), &conv5_Lval_152, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_121_121);
            Lval_152 = ((MR_Word) (conv5_Lval_152));
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_151, &Rval_153, STATE_VARIABLE_Acc_121_121, &STATE_VARIABLE_Acc_122_122);
            if ((MaybeRegionRval0_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeRegionRval_52 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Acc_123_123 = STATE_VARIABLE_Acc_122_122;
            }
            else
            {
              MR_Word RegionRval0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval0_50, (MR_Integer) 0))));
              MR_Word RegionRval_54;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, RegionRval0_53, &RegionRval_54, STATE_VARIABLE_Acc_122_122, &STATE_VARIABLE_Acc_123_123);
              {
                MaybeRegionRval_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeRegionRval_52, 0) = ((MR_Box) (RegionRval_54));
              }
            }
            if ((MaybeReuse0_51 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeReuse_55 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_123_123;
            }
            else
            {
              MR_Word ReuseRval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_51, (MR_Integer) 0))));
              MR_Word MaybeFlagLval0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse0_51, (MR_Integer) 1))));
              MR_Word ReuseRval_58;
              MR_Word MaybeFlagLval_59;
              MR_Box STATE_VARIABLE_Acc_124_124;

              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, ReuseRval0_56, &ReuseRval_58, STATE_VARIABLE_Acc_123_123, &STATE_VARIABLE_Acc_124_124);
              if ((MaybeFlagLval0_57 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeFlagLval_59 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_124_124;
              }
              else
              {
                MR_Word FlagLval0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval0_57, (MR_Integer) 0))));
                MR_Word FlagLval_61;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
                MR_Box conv7_FlagLval_61;

                func_6(((MR_Box) (Transform_6)), ((MR_Box) (FlagLval0_60)), &conv7_FlagLval_61, STATE_VARIABLE_Acc_124_124, STATE_VARIABLE_Acc_98);
                FlagLval_61 = ((MR_Word) (conv7_FlagLval_61));
                {
                  MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeFlagLval_59, 0) = ((MR_Box) (FlagLval_61));
                }
              }
              {
                MaybeReuse_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeReuse_55, 0) = ((MR_Box) (ReuseRval_58));
                MR_hl_field(MR_mktag(1), MaybeReuse_55, 1) = ((MR_Box) (MaybeFlagLval_59));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_152));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_46));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MO_47));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Rval_153));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (TypeCtor_48));
              MR_hl_field(MR_mktag(3), base, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_49));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeRegionRval_52));
              MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeReuse_55));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_155;
            void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv19_Lval_155;

            func_18(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_154)), &conv19_Lval_155, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_155 = ((MR_Word) (conv19_Lval_155));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_155));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval0_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_157;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_156, &Rval_157, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_157));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_159;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_158, &Rval_159, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_159));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            *Uinstr_8 = Uinstr0_7;
            *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_0_97;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word IdRval0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word NumLval0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 4))));
            MR_Word AddrLval0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 5))));
            MR_Word IdRval_68;
            MR_Word NumLval_69;
            MR_Word AddrLval_70;
            MR_Box STATE_VARIABLE_Acc_115_115;
            MR_Box STATE_VARIABLE_Acc_116_116;
            MR_Word EmbeddedStackFrame_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv23_NumLval_69;
            void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv25_AddrLval_70;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, IdRval0_65, &IdRval_68, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_115_115);
            func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            func_22(((MR_Box) (Transform_6)), ((MR_Box) (NumLval0_66)), &conv23_NumLval_69, STATE_VARIABLE_Acc_115_115, &STATE_VARIABLE_Acc_116_116);
            NumLval_69 = ((MR_Word) (conv23_NumLval_69));
            func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            func_24(((MR_Box) (Transform_6)), ((MR_Box) (AddrLval0_67)), &conv25_AddrLval_70, STATE_VARIABLE_Acc_116_116, STATE_VARIABLE_Acc_98);
            AddrLval_70 = ((MR_Word) (conv25_AddrLval_70));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FillOp_64));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_160));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IdRval_68));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NumLval_69));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (AddrLval_70));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ValueRval0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word ValueRval_73;
            MR_Word EmbeddedStackFrame_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, ValueRval0_72, &ValueRval_73, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (SetOp_71));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_161));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ValueRval_73));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            *Uinstr_8 = Uinstr0_7;
            *STATE_VARIABLE_Acc_98 = STATE_VARIABLE_Acc_0_97;
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval0_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_164;
            void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv31_Lval_164;

            func_30(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_163)), &conv31_Lval_164, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_164 = ((MR_Word) (conv31_Lval_164));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_164));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Reason_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Rval0_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_166;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_165, &Rval_166, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_166));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Reason_75));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval0_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_168;
            void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv21_Lval_168;

            func_20(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_167)), &conv21_Lval_168, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_168 = ((MR_Word) (conv21_Lval_168));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_168));
            }
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval0_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Rval_170;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, Rval0_169, &Rval_170, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_170));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Decls_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Components0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word MayCallMercury_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word MaybeLabel1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 4))));
            MR_Word MaybeLabel2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 5))));
            MR_Word MaybeLabel3_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 6))));
            MR_Word MaybeLabel4_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 7))));
            MR_Word MaybeLabel5_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 8))));
            MR_Word Components_86;
            MR_Word Var_108;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 9)));

            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (TypeInfo_for_T_185));
              MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (Transform_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), TypeInfo_for_T_185, Var_108, Components0_77, &Components_86, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Decls_76));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Components_86));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_78));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeLabel1_79));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeLabel2_80));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeLabel3_81));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeLabel4_82));
              MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeLabel5_83));
              MR_hl_field(MR_mktag(3), base, 9) = (MR_Box) (packed_word_2);
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer BranchCount_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Integer ConjId_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word Lval0_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_172;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv9_Lval_172;

            func_8(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_171)), &conv9_Lval_172, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_172 = ((MR_Word) (conv9_Lval_172));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_172));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BranchCount_87));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConjId_88));
            }
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Label_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval0_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval_174;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv11_Lval_174;

            func_10(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_173)), &conv11_Lval_174, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_174 = ((MR_Word) (conv11_Lval_174));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_174));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Label_89));
            }
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word Lval0_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word Lval_176;
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            MR_Box conv15_Lval_176;

            func_14(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_175)), &conv15_Lval_176, STATE_VARIABLE_Acc_0_97, STATE_VARIABLE_Acc_98);
            Lval_176 = ((MR_Word) (conv15_Lval_176));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NumSlots_90));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_176));
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCSLval0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCRval_93;
            MR_Word LCSLval_94;
            MR_Box STATE_VARIABLE_Acc_103_103;
            MR_Word Label_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv17_LCSLval_94;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, LCRval0_91, &LCRval_93, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_103_103);
            func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
            func_16(((MR_Box) (Transform_6)), ((MR_Box) (LCSLval0_92)), &conv17_LCSLval_94, STATE_VARIABLE_Acc_103_103, STATE_VARIABLE_Acc_98);
            LCSLval_94 = ((MR_Word) (conv17_LCSLval_94));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_93));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSLval_94));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_177));
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCSRval_96;
            MR_Box STATE_VARIABLE_Acc_101_101;
            MR_Word Label_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 3))));
            MR_Word LCRval0_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCRval_180;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, LCRval0_179, &LCRval_180, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_101_101);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, LCSRval0_95, &LCSRval_96, STATE_VARIABLE_Acc_101_101, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_180));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_96));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_178));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Box STATE_VARIABLE_Acc_99_99;
            MR_Word LCRval0_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 1))));
            MR_Word LCRval_182;
            MR_Word LCSRval0_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_7, (MR_Integer) 2))));
            MR_Word LCSRval_184;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, LCRval0_181, &LCRval_182, STATE_VARIABLE_Acc_0_97, &STATE_VARIABLE_Acc_99_99);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_185, Transform_6, LCSRval0_183, &LCSRval_184, STATE_VARIABLE_Acc_99_99, STATE_VARIABLE_Acc_98);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Uinstr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_182));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_184));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word TypeInfo_for_T_19,
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
    MR_Word LvalSet0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word LvalSet_12;
    MR_Word Lvals0_14;
    MR_Word Lvals_15;

    Lvals0_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_11);
    mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TypeInfo_for_T_19, Transform_1, Lvals0_14, &Lvals_15, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_15, &LvalSet_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LvalSet_12));
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
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval0_7, (MR_Integer) 0))));
        MR_Word Lval_11;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Transform_6, (MR_Integer) 1))));
        MR_Box conv1_Lval_11;

        func_0(((MR_Box) (Transform_6)), ((MR_Box) (Lval0_10)), &conv1_Lval_11, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        Lval_11 = ((MR_Word) (conv1_Lval_11));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_11));
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
        MR_Word Tag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 0))));
        MR_Word Rval1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 1))));
        MR_Word Rval2_15;

        ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_14, &Rval2_15, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_13));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval2_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 0))))) {
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
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_35;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_34, &Rval2_35, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_37;

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_36, &Rval2_37, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_19));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval2_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Rval3_21;
            MR_Word Rval4_22;
            MR_Box STATE_VARIABLE_Acc_28_28;
            MR_Word Rval1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word Rval2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 3))));

            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval1_38, &Rval3_21, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_28_28);
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval2_39, &Rval4_22, STATE_VARIABLE_Acc_28_28, STATE_VARIABLE_Acc_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binop_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval3_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rval4_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word MemRef_24;

            switch (MR_tag((MR_Word) MemRef0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Rval0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_42;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval0_41, &Rval_42, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MemRef_24, 0) = ((MR_Box) (Rval_42));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Rval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef0_23, (MR_Integer) 0))));
                  MR_Word Rval_50;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, Rval0_49, &Rval_50, STATE_VARIABLE_Acc_0_25, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MemRef_24, 0) = ((MR_Box) (Rval_50));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 0))));
                  MR_Word MaybeTag_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 1))));
                  MR_Word FieldRval0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef0_23, (MR_Integer) 2))));
                  MR_Word BaseRval_46;
                  MR_Word FieldRval_47;
                  MR_Box STATE_VARIABLE_Acc_19_48;

                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, BaseRval0_43, &BaseRval_46, STATE_VARIABLE_Acc_0_25, &STATE_VARIABLE_Acc_19_48);
                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(TypeInfo_for_T_40, Transform_6, FieldRval0_45, &FieldRval_47, STATE_VARIABLE_Acc_19_48, STATE_VARIABLE_Acc_26);
                  {
                    MemRef_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), MemRef_24, 0) = ((MR_Box) (BaseRval_46));
                    MR_hl_field(MR_mktag(2), MemRef_24, 1) = ((MR_Box) (MaybeTag_44));
                    MR_hl_field(MR_mktag(2), MemRef_24, 2) = ((MR_Box) (FieldRval_47));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MemRef_24));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Lval_3;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_22;
              MR_Word VarsB_23;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_19, &VarsA_22);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_20, &VarsB_23);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_22, VarsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_27;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_29;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_24, (MR_Integer) 0))));
                    MR_Word FieldRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_24, (MR_Integer) 2))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RvalA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_26;
              MR_Word VarsB_27;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_23, &VarsA_26);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_24, &VarsB_27);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_26, VarsB_27);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Lval_3;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RvalA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_22;
              MR_Word VarsB_23;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_19, &VarsA_22);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_20, &VarsB_23);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_22, VarsB_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_27;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_24, (MR_Integer) 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_29;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_24, (MR_Integer) 0))));
                    MR_Word FieldRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_24, (MR_Integer) 2))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
              MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_12;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_18;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_14;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_16;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Rval_20;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RvalA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word RvalB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word VarsA_26;
              MR_Word VarsB_27;

              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalA_23, &VarsA_26);
              ll_backend__exprn_aux__vars_in_rval_2_p_0(RvalB_24, &VarsB_27);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__exprn_aux_scalar_common_1[0]), VarsA_26, VarsB_27);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      *IsConst_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *IsConst_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_4, (MR_Integer) 0))))) {
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
          *IsConst_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            MR_Word SGInt64s_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExprnOpts_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

            switch (SGInt64s_23) {
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
            MR_Word SGFloats_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExprnOpts_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

            switch (SGFloats_25) {
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
            MR_Word CodeAddr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_4, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) CodeAddr_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *IsConst_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Label_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_26, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) Label_45)) == (MR_Integer) 1))
                  {
                    MR_Word EntryLabelType_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Label_45, (MR_Integer) 0))) & (MR_Integer) 3);

                    switch (EntryLabelType_60) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *IsConst_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 1:
                        {
                          MR_Word StaticCodeAddrs_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExprnOpts_5, (MR_Integer) 0))) & (MR_Integer) 1);

                          switch (StaticCodeAddrs_62) {
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
                  MR_Word StaticCodeAddrs_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExprnOpts_5, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (StaticCodeAddrs_47) {
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
              case (MR_Integer) 3:
                *IsConst_6 = (MR_Integer) 0;
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
