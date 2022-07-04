/*
** Automatically generated from `ll_pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2022-07-04
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


// :- module ll_backend.ll_pseudo_type_info.
// :- implementation.

/*
INIT mercury__ll_backend__ll_pseudo_type_info__init
ENDINIT
*/

#include "ll_backend.ll_pseudo_type_info.mih"


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
#include "set_tree234.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
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




static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Word LambdaHeadVar__3_36,
  MR_Word * LambdaHeadVar__4_37);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0(
  MR_Word TypeInfo_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_16,
  MR_Word * STATE_VARIABLE_StaticCellInfo_17,
  MR_Word * Rval_8,
  MR_Word * LldsType_9);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
  MR_Word RttiTypeCtor_8,
  MR_Word ArgRvals0_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26,
  MR_Word * Rval_12,
  MR_Word * LldsType_13);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
  MR_Word Pseudo_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_17,
  MR_Word * STATE_VARIABLE_StaticCellInfo_18,
  MR_Word * Rval_8,
  MR_Word * LldsType_9);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
  MR_Word RttiTypeCtor_8,
  MR_Word ArgRvals0_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * STATE_VARIABLE_StaticCellInfo_27,
  MR_Word * Rval_12,
  MR_Word * LldsType_13);


static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_2[2][7];

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_3[5][3];




static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_2[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"



static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36)
{
  MR_Word _LldsType_21;

  ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0(LambdaHeadVar__1_33, LambdaHeadVar__3_35, LambdaHeadVar__4_36, LambdaHeadVar__2_34, &_LldsType_21);
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Word LambdaHeadVar__3_36,
  MR_Word * LambdaHeadVar__4_37)
{
  if (((MR_tag((MR_Word) LambdaHeadVar__1_34)) == (MR_Integer) 1))
  {
    MR_Word TI_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_34, (MR_Integer) 0))));
    MR_Word _LldsType_42;

    ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0(TI_22, LambdaHeadVar__3_36, LambdaHeadVar__4_37, LambdaHeadVar__2_35, &_LldsType_42);
  }
  else
  {
    MR_Word PTI_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_34, (MR_Integer) 0))));
    MR_Word _LldsType_21;

    ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(PTI_20, LambdaHeadVar__3_36, LambdaHeadVar__4_37, LambdaHeadVar__2_35, &_LldsType_21);
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_34;
  MR_Word conv0_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_36));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_plain_type_info_5_p_0(
  MR_Word TypeInfo_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_16,
  MR_Word * STATE_VARIABLE_StaticCellInfo_17,
  MR_Word * Rval_8,
  MR_Word * LldsType_9)
{
  switch (MR_tag((MR_Word) TypeInfo_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_10 = (MR_Word) ((MR_Word) (TypeInfo_6));
        MR_Word DataId_11;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_20;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (TypeInfo_6));
        }
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (RttiTypeCtor_10));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_19));
        }
        {
          DataId_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DataId_11, 0) = ((MR_Box) (Var_18));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (DataId_11));
          MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        *STATE_VARIABLE_StaticCellInfo_17 = STATE_VARIABLE_StaticCellInfo_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfo_6, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfo_6, (MR_Integer) 0))));
        MR_Word TypeCtorInfoData_40;
        MR_Word TypeCtorInfoDataId_41;
        MR_Word TypeCtorInfoRval_42;
        MR_Word ArgRvals1_48;
        MR_Word ArgRvals_49;
        MR_Word DataId_50;
        MR_Word Var_51 = (MR_Word) ((MR_Word) (RttiTypeCtor_28));
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_StaticCellInfo_32_56;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_32_56;

        {
          TypeCtorInfoData_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeCtorInfoData_40, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), TypeCtorInfoData_40, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (RttiTypeCtor_28));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (TypeCtorInfoData_40));
        }
        {
          TypeCtorInfoDataId_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorInfoDataId_41, 0) = ((MR_Box) (Var_52));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (TypeCtorInfoDataId_41));
          MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_42, 1) = ((MR_Box) (Var_53));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[4]), Args_12, &ArgRvals1_48, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_16)), &conv2_STATE_VARIABLE_StaticCellInfo_32_56);
        STATE_VARIABLE_StaticCellInfo_32_56 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_32_56));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_48, &ArgRvals_49);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (TypeCtorInfoRval_42));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (ArgRvals_49));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_61, &DataId_50, STATE_VARIABLE_StaticCellInfo_32_56, STATE_VARIABLE_StaticCellInfo_17);
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (DataId_50));
          MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_63));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TypeInfo_6, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_14;
        MR_Word ArityArg_15;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word RttiTypeCtor_29;
        MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeInfo_6, (MR_Integer) 1))));

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_30, &Arity_14);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Arity_14));
        }
        {
          ArityArg_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArityArg_15, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ArityArg_15, 1) = ((MR_Box) (Var_24));
        }
        RttiTypeCtor_29 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_13);
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ArityArg_15));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(RttiTypeCtor_29, Var_25, Args_30, STATE_VARIABLE_StaticCellInfo_0_16, STATE_VARIABLE_StaticCellInfo_17, Rval_8, LldsType_9);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_34;
  MR_Word conv0_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_36));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
  MR_Word RttiTypeCtor_8,
  MR_Word ArgRvals0_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26,
  MR_Word * Rval_12,
  MR_Word * LldsType_13)
{
  MR_Word TypeCtorInfoData_14;
  MR_Word TypeCtorInfoDataId_15;
  MR_Word TypeCtorInfoRval_16;
  MR_Word ArgRvals1_22;
  MR_Word ArgRvals_23;
  MR_Word DataId_24;
  MR_Word Var_27 = (MR_Word) ((MR_Word) (RttiTypeCtor_8));
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_StaticCellInfo_32_32;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Box conv2_STATE_VARIABLE_StaticCellInfo_32_32;

  {
    TypeCtorInfoData_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeCtorInfoData_14, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(MR_mktag(3), TypeCtorInfoData_14, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (RttiTypeCtor_8));
    MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (TypeCtorInfoData_14));
  }
  {
    TypeCtorInfoDataId_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtorInfoDataId_15, 0) = ((MR_Box) (Var_28));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TypeCtorInfoDataId_15));
    MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeCtorInfoRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeCtorInfoRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), TypeCtorInfoRval_16, 1) = ((MR_Box) (Var_29));
  }
  *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
  mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[3]), Args_10, &ArgRvals1_22, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_25)), &conv2_STATE_VARIABLE_StaticCellInfo_32_32);
  STATE_VARIABLE_StaticCellInfo_32_32 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_32_32));
  mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgRvals0_9, ArgRvals1_22, &ArgRvals_23);
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (TypeCtorInfoRval_16));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (ArgRvals_23));
  }
  ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_37, &DataId_24, STATE_VARIABLE_StaticCellInfo_32_32, STATE_VARIABLE_StaticCellInfo_26);
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (DataId_24));
    MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Rval_12 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_39));
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_35;
  MR_Word conv0_LambdaHeadVar__4_37;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_35, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_37);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_37));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
  MR_Word Pseudo_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_17,
  MR_Word * STATE_VARIABLE_StaticCellInfo_18,
  MR_Word * Rval_8,
  MR_Word * LldsType_9)
{
  switch (MR_tag((MR_Word) Pseudo_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_11 = (MR_Word) ((MR_Word) (Pseudo_6));
        MR_Word DataId_12;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;

        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Pseudo_6));
        }
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (RttiTypeCtor_11));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Var_22));
        }
        {
          DataId_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DataId_12, 0) = ((MR_Box) (Var_21));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (DataId_12));
          MR_hl_field(MR_mktag(3), Var_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_23));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        *STATE_VARIABLE_StaticCellInfo_18 = STATE_VARIABLE_StaticCellInfo_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pseudo_6, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pseudo_6, (MR_Integer) 0))));
        MR_Word TypeCtorInfoDataId_43;
        MR_Word TypeCtorInfoRval_44;
        MR_Word ArgRvals1_52;
        MR_Word ArgRvals_53;
        MR_Word DataId_54;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_60;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_33_60;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (RttiTypeCtor_31));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorInfoDataId_43, 0) = ((MR_Box) (Var_55));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (TypeCtorInfoDataId_43));
          MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_44, 1) = ((MR_Box) (Var_57));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[2]), Args_13, &ArgRvals1_52, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv2_STATE_VARIABLE_StaticCellInfo_33_60);
        STATE_VARIABLE_StaticCellInfo_33_60 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_33_60));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_52, &ArgRvals_53);
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TypeCtorInfoRval_44));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (ArgRvals_53));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_65, &DataId_54, STATE_VARIABLE_StaticCellInfo_33_60, STATE_VARIABLE_StaticCellInfo_18);
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (DataId_54));
          MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_67));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Pseudo_6, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_15;
        MR_Word ArityArg_16;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word RttiTypeCtor_32;
        MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Pseudo_6, (MR_Integer) 1))));

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_33, &Arity_15);
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Arity_15));
        }
        {
          ArityArg_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArityArg_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ArityArg_16, 1) = ((MR_Box) (Var_27));
        }
        RttiTypeCtor_32 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_14);
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ArityArg_16));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(RttiTypeCtor_32, Var_28, Args_33, STATE_VARIABLE_StaticCellInfo_0_17, STATE_VARIABLE_StaticCellInfo_18, Rval_8, LldsType_9);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Pseudo_6, (MR_Integer) 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Int_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_19));
        }
        *LldsType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__ll_pseudo_type_info_scalar_common_1[0]));
        *STATE_VARIABLE_StaticCellInfo_18 = STATE_VARIABLE_StaticCellInfo_0_17;
      }
      break;
  }
}

void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(
  MR_Word Type_7,
  MR_Integer NumUnivQTvars_8,
  MR_Word ExistQTvars_9,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14,
  MR_Word * Pseudo_11)
{
  MR_Word _LldsType_12;

  ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_7, NumUnivQTvars_8, ExistQTvars_9, STATE_VARIABLE_StaticCellInfo_0_13, STATE_VARIABLE_StaticCellInfo_14, Pseudo_11, &_LldsType_12);
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_35;
  MR_Word conv0_LambdaHeadVar__4_37;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_35, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_37);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_37));
}

void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(
  MR_Word Type_8,
  MR_Integer NumUnivQTvars_9,
  MR_Word ExistQTvars_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_15,
  MR_Word * STATE_VARIABLE_StaticCellInfo_16,
  MR_Word * PseudoRval_12,
  MR_Word * LldsType_13)
{
  MR_Word Pseudo_14;

  backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(Type_8, NumUnivQTvars_9, ExistQTvars_10, &Pseudo_14);
  switch (MR_tag((MR_Word) Pseudo_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_24 = (MR_Word) ((MR_Word) (Pseudo_14));
        MR_Word DataId_25;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;

        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Pseudo_14));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (RttiTypeCtor_24));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          DataId_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DataId_25, 0) = ((MR_Box) (Var_32));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (DataId_25));
          MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_34));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        *STATE_VARIABLE_StaticCellInfo_16 = STATE_VARIABLE_StaticCellInfo_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pseudo_14, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pseudo_14, (MR_Integer) 0))));
        MR_Word TypeCtorInfoDataId_54;
        MR_Word TypeCtorInfoRval_55;
        MR_Word ArgRvals1_63;
        MR_Word ArgRvals_64;
        MR_Word DataId_65;
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_71;
        MR_Word Var_76;
        MR_Word Var_78;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_33_71;

        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (RttiTypeCtor_42));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorInfoDataId_54, 0) = ((MR_Box) (Var_66));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (TypeCtorInfoDataId_54));
          MR_hl_field(MR_mktag(3), Var_68, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), TypeCtorInfoRval_55, 1) = ((MR_Box) (Var_68));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[1]), Args_26, &ArgRvals1_63, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_15)), &conv2_STATE_VARIABLE_StaticCellInfo_33_71);
        STATE_VARIABLE_StaticCellInfo_33_71 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_33_71));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_63, &ArgRvals_64);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (TypeCtorInfoRval_55));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (ArgRvals_64));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_76, &DataId_65, STATE_VARIABLE_StaticCellInfo_33_71, STATE_VARIABLE_StaticCellInfo_16);
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (DataId_65));
          MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_78));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Pseudo_14, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_28;
        MR_Word ArityArg_29;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word RttiTypeCtor_43;
        MR_Word Args_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Pseudo_14, (MR_Integer) 1))));

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_44, &Arity_28);
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Arity_28));
        }
        {
          ArityArg_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArityArg_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ArityArg_29, 1) = ((MR_Box) (Var_38));
        }
        RttiTypeCtor_43 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_27);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ArityArg_29));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(RttiTypeCtor_43, Var_39, Args_44, STATE_VARIABLE_StaticCellInfo_0_15, STATE_VARIABLE_StaticCellInfo_16, PseudoRval_12, LldsType_13);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Pseudo_14, (MR_Integer) 0))));
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Int_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_30));
        }
        *LldsType_13 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__ll_pseudo_type_info_scalar_common_1[0]));
        *STATE_VARIABLE_StaticCellInfo_16 = STATE_VARIABLE_StaticCellInfo_0_15;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_35;
  MR_Word conv0_LambdaHeadVar__4_37;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_35, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_37);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_37));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
  MR_Word RttiTypeCtor_8,
  MR_Word ArgRvals0_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * STATE_VARIABLE_StaticCellInfo_27,
  MR_Word * Rval_12,
  MR_Word * LldsType_13)
{
  MR_Word TypeCtorInfoDataId_14;
  MR_Word TypeCtorInfoRval_15;
  MR_Word ArgRvals1_23;
  MR_Word ArgRvals_24;
  MR_Word DataId_25;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_StaticCellInfo_33_33;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Box conv2_STATE_VARIABLE_StaticCellInfo_33_33;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (RttiTypeCtor_8));
    MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 44U));
  }
  {
    TypeCtorInfoDataId_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtorInfoDataId_14, 0) = ((MR_Box) (Var_28));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (TypeCtorInfoDataId_14));
    MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeCtorInfoRval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeCtorInfoRval_15, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), TypeCtorInfoRval_15, 1) = ((MR_Box) (Var_30));
  }
  *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
  mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[0]), Args_10, &ArgRvals1_23, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_26)), &conv2_STATE_VARIABLE_StaticCellInfo_33_33);
  STATE_VARIABLE_StaticCellInfo_33_33 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_33_33));
  mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgRvals0_9, ArgRvals1_23, &ArgRvals_24);
  {
    Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (TypeCtorInfoRval_15));
    MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (ArgRvals_24));
  }
  ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_38, &DataId_25, STATE_VARIABLE_StaticCellInfo_33_33, STATE_VARIABLE_StaticCellInfo_27);
  {
    Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (DataId_25));
    MR_hl_field(MR_mktag(3), Var_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Rval_12 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_40));
  }
}

void mercury__ll_backend__ll_pseudo_type_info__init(void)
{
}

void mercury__ll_backend__ll_pseudo_type_info__init_type_tables(void)
{
}

void mercury__ll_backend__ll_pseudo_type_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__ll_pseudo_type_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.ll_pseudo_type_info.
