/*
** Automatically generated from `ll_pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2022-11-24
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
#include "term_context.mih"
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
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Word LambdaHeadVar__3_36,
  MR_Word * LambdaHeadVar__4_37);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_2[2][7];

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_3[8][3];




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

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_3[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_2)),
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
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_2[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"



static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_34;
  MR_Word conv3_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_36));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_1(
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
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36)
{
  switch (MR_tag((MR_Word) LambdaHeadVar__1_33)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_37 = (MR_Word) ((MR_Word) (LambdaHeadVar__1_33));
        MR_Word DataId_38;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;

        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (LambdaHeadVar__1_33));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (RttiTypeCtor_37));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          DataId_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DataId_38, 0) = ((MR_Box) (Var_43));
        }
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (DataId_38));
          MR_hl_field(3, Var_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_34 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
        }
        *LambdaHeadVar__4_36 = LambdaHeadVar__3_35;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_39 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_33, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_51 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_33, (MR_Integer) 0))));
        MR_Word TypeCtorInfoData_55;
        MR_Word TypeCtorInfoDataId_56;
        MR_Word TypeCtorInfoRval_57;
        MR_Word ArgRvals1_58;
        MR_Word ArgRvals_59;
        MR_Word DataId_60;
        MR_Word Var_61 = (MR_Word) ((MR_Word) (RttiTypeCtor_51));
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word STATE_VARIABLE_StaticCellInfo_32_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_32_66;

        {
          TypeCtorInfoData_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoData_55, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, TypeCtorInfoData_55, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (RttiTypeCtor_51));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (TypeCtorInfoData_55));
        }
        {
          TypeCtorInfoDataId_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_56, 0) = ((MR_Box) (Var_62));
        }
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (TypeCtorInfoDataId_56));
          MR_hl_field(3, Var_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_57, 1) = ((MR_Box) (Var_63));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[6]), Args_39, &ArgRvals1_58, ((MR_Box) (LambdaHeadVar__3_35)), &conv2_STATE_VARIABLE_StaticCellInfo_32_66);
        STATE_VARIABLE_StaticCellInfo_32_66 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_32_66));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_58, &ArgRvals_59);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (TypeCtorInfoRval_57));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (ArgRvals_59));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_67, &DataId_60, STATE_VARIABLE_StaticCellInfo_32_66, LambdaHeadVar__4_36);
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (DataId_60));
          MR_hl_field(3, Var_68, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_34 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_40 = ((MR_Unsigned) ((MR_hl_field(2, LambdaHeadVar__1_33, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_41;
        MR_Word ArityArg_42;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word RttiTypeCtor_52;
        MR_Word Args_53 = ((MR_Word) ((MR_hl_field(2, LambdaHeadVar__1_33, (MR_Integer) 1))));
        MR_Word TypeCtorInfoData_73;
        MR_Word TypeCtorInfoDataId_74;
        MR_Word TypeCtorInfoRval_75;
        MR_Word ArgRvals1_76;
        MR_Word ArgRvals_77;
        MR_Word DataId_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word STATE_VARIABLE_StaticCellInfo_32_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_32_84;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_53, &Arity_41);
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Arity_41));
        }
        {
          ArityArg_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_42, 1) = ((MR_Box) (Var_48));
        }
        RttiTypeCtor_52 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_40);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (ArityArg_42));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_79 = (MR_Word) ((MR_Word) (RttiTypeCtor_52));
        {
          TypeCtorInfoData_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoData_73, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, TypeCtorInfoData_73, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_80, 0) = ((MR_Box) (RttiTypeCtor_52));
          MR_hl_field(0, Var_80, 1) = ((MR_Box) (TypeCtorInfoData_73));
        }
        {
          TypeCtorInfoDataId_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_74, 0) = ((MR_Box) (Var_80));
        }
        {
          Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_81, 1) = ((MR_Box) (TypeCtorInfoDataId_74));
          MR_hl_field(3, Var_81, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_75, 1) = ((MR_Box) (Var_81));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[7]), Args_53, &ArgRvals1_76, ((MR_Box) (LambdaHeadVar__3_35)), &conv5_STATE_VARIABLE_StaticCellInfo_32_84);
        STATE_VARIABLE_StaticCellInfo_32_84 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_32_84));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_49, ArgRvals1_76, &ArgRvals_77);
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (TypeCtorInfoRval_75));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (ArgRvals_77));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_85, &DataId_78, STATE_VARIABLE_StaticCellInfo_32_84, LambdaHeadVar__4_36);
        {
          Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_86, 1) = ((MR_Box) (DataId_78));
          MR_hl_field(3, Var_86, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_34 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_86));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_34;
  MR_Word conv3_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_36));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0_1(
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
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Word LambdaHeadVar__3_36,
  MR_Word * LambdaHeadVar__4_37)
{
  if (((MR_tag((MR_Word) LambdaHeadVar__1_34)) == (MR_Integer) 1))
  {
    MR_Word TI_22 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_34, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) TI_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor_43 = (MR_Word) ((MR_Word) (TI_22));
          MR_Word DataId_44;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;

          {
            Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, Var_50, 1) = ((MR_Box) (TI_22));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (RttiTypeCtor_43));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            DataId_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DataId_44, 0) = ((MR_Box) (Var_49));
          }
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (DataId_44));
            MR_hl_field(3, Var_51, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *LambdaHeadVar__2_35 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_51));
          }
          *LambdaHeadVar__4_37 = LambdaHeadVar__3_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_45 = ((MR_Word) ((MR_hl_field(1, TI_22, (MR_Integer) 1))));
          MR_Word RttiTypeCtor_57 = ((MR_Word) ((MR_hl_field(1, TI_22, (MR_Integer) 0))));
          MR_Word TypeCtorInfoData_61;
          MR_Word TypeCtorInfoDataId_62;
          MR_Word TypeCtorInfoRval_63;
          MR_Word ArgRvals1_64;
          MR_Word ArgRvals_65;
          MR_Word DataId_66;
          MR_Word Var_67 = (MR_Word) ((MR_Word) (RttiTypeCtor_57));
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word STATE_VARIABLE_StaticCellInfo_32_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Box conv2_STATE_VARIABLE_StaticCellInfo_32_72;

          {
            TypeCtorInfoData_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoData_61, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, TypeCtorInfoData_61, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_68, 0) = ((MR_Box) (RttiTypeCtor_57));
            MR_hl_field(0, Var_68, 1) = ((MR_Box) (TypeCtorInfoData_61));
          }
          {
            TypeCtorInfoDataId_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorInfoDataId_62, 0) = ((MR_Box) (Var_68));
          }
          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (TypeCtorInfoDataId_62));
            MR_hl_field(3, Var_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            TypeCtorInfoRval_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoRval_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, TypeCtorInfoRval_63, 1) = ((MR_Box) (Var_69));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[4]), Args_45, &ArgRvals1_64, ((MR_Box) (LambdaHeadVar__3_36)), &conv2_STATE_VARIABLE_StaticCellInfo_32_72);
          STATE_VARIABLE_StaticCellInfo_32_72 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_32_72));
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_64, &ArgRvals_65);
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (TypeCtorInfoRval_63));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (ArgRvals_65));
          }
          ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_73, &DataId_66, STATE_VARIABLE_StaticCellInfo_32_72, LambdaHeadVar__4_37);
          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_74, 1) = ((MR_Box) (DataId_66));
            MR_hl_field(3, Var_74, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *LambdaHeadVar__2_35 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_74));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarArityId_46 = ((MR_Unsigned) ((MR_hl_field(2, TI_22, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Integer Arity_47;
          MR_Word ArityArg_48;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word RttiTypeCtor_58;
          MR_Word Args_59 = ((MR_Word) ((MR_hl_field(2, TI_22, (MR_Integer) 1))));
          MR_Word TypeCtorInfoData_79;
          MR_Word TypeCtorInfoDataId_80;
          MR_Word TypeCtorInfoRval_81;
          MR_Word ArgRvals1_82;
          MR_Word ArgRvals_83;
          MR_Word DataId_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word STATE_VARIABLE_StaticCellInfo_32_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Box conv5_STATE_VARIABLE_StaticCellInfo_32_90;

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_59, &Arity_47);
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Arity_47));
          }
          {
            ArityArg_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ArityArg_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, ArityArg_48, 1) = ((MR_Box) (Var_54));
          }
          RttiTypeCtor_58 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_46);
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (ArityArg_48));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_85 = (MR_Word) ((MR_Word) (RttiTypeCtor_58));
          {
            TypeCtorInfoData_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoData_79, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, TypeCtorInfoData_79, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (RttiTypeCtor_58));
            MR_hl_field(0, Var_86, 1) = ((MR_Box) (TypeCtorInfoData_79));
          }
          {
            TypeCtorInfoDataId_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorInfoDataId_80, 0) = ((MR_Box) (Var_86));
          }
          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) (TypeCtorInfoDataId_80));
            MR_hl_field(3, Var_87, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            TypeCtorInfoRval_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoRval_81, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, TypeCtorInfoRval_81, 1) = ((MR_Box) (Var_87));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[5]), Args_59, &ArgRvals1_82, ((MR_Box) (LambdaHeadVar__3_36)), &conv5_STATE_VARIABLE_StaticCellInfo_32_90);
          STATE_VARIABLE_StaticCellInfo_32_90 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_32_90));
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_55, ArgRvals1_82, &ArgRvals_83);
          {
            Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_91, 0) = ((MR_Box) (TypeCtorInfoRval_81));
            MR_hl_field(1, Var_91, 1) = ((MR_Box) (ArgRvals_83));
          }
          ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_91, &DataId_84, STATE_VARIABLE_StaticCellInfo_32_90, LambdaHeadVar__4_37);
          {
            Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_92, 1) = ((MR_Box) (DataId_84));
            MR_hl_field(3, Var_92, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *LambdaHeadVar__2_35 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_92));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word PTI_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_34, (MR_Integer) 0))));
    MR_Word _LldsType_21;

    ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(PTI_20, LambdaHeadVar__3_36, LambdaHeadVar__4_37, LambdaHeadVar__2_35, &_LldsType_21);
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_35;
  MR_Word conv3_LambdaHeadVar__4_37;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_35, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_37);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_37));
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
          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Pseudo_6));
        }
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (RttiTypeCtor_11));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (Var_22));
        }
        {
          DataId_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DataId_12, 0) = ((MR_Box) (Var_21));
        }
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (DataId_12));
          MR_hl_field(3, Var_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_23));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        *STATE_VARIABLE_StaticCellInfo_18 = STATE_VARIABLE_StaticCellInfo_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, Pseudo_6, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_31 = ((MR_Word) ((MR_hl_field(1, Pseudo_6, (MR_Integer) 0))));
        MR_Word TypeCtorInfoDataId_35;
        MR_Word TypeCtorInfoRval_36;
        MR_Word ArgRvals1_37;
        MR_Word ArgRvals_38;
        MR_Word DataId_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_33_45;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (RttiTypeCtor_31));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_35, 0) = ((MR_Box) (Var_40));
        }
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (TypeCtorInfoDataId_35));
          MR_hl_field(3, Var_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_36, 1) = ((MR_Box) (Var_42));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[2]), Args_13, &ArgRvals1_37, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv2_STATE_VARIABLE_StaticCellInfo_33_45);
        STATE_VARIABLE_StaticCellInfo_33_45 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_33_45));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_37, &ArgRvals_38);
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (TypeCtorInfoRval_36));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (ArgRvals_38));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_46, &DataId_39, STATE_VARIABLE_StaticCellInfo_33_45, STATE_VARIABLE_StaticCellInfo_18);
        {
          Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_47, 1) = ((MR_Box) (DataId_39));
          MR_hl_field(3, Var_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_47));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_14 = ((MR_Unsigned) ((MR_hl_field(2, Pseudo_6, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_15;
        MR_Word ArityArg_16;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word RttiTypeCtor_32;
        MR_Word Args_33 = ((MR_Word) ((MR_hl_field(2, Pseudo_6, (MR_Integer) 1))));
        MR_Word TypeCtorInfoDataId_52;
        MR_Word TypeCtorInfoRval_53;
        MR_Word ArgRvals1_54;
        MR_Word ArgRvals_55;
        MR_Word DataId_56;
        MR_Word Var_57;
        MR_Word Var_59;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_33_62;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_33, &Arity_15);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Arity_15));
        }
        {
          ArityArg_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_16, 1) = ((MR_Box) (Var_27));
        }
        RttiTypeCtor_32 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_14);
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (ArityArg_16));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (RttiTypeCtor_32));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_52, 0) = ((MR_Box) (Var_57));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (TypeCtorInfoDataId_52));
          MR_hl_field(3, Var_59, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_53, 1) = ((MR_Box) (Var_59));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[3]), Args_33, &ArgRvals1_54, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv5_STATE_VARIABLE_StaticCellInfo_33_62);
        STATE_VARIABLE_StaticCellInfo_33_62 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_33_62));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_28, ArgRvals1_54, &ArgRvals_55);
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (TypeCtorInfoRval_53));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (ArgRvals_55));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_63, &DataId_56, STATE_VARIABLE_StaticCellInfo_33_62, STATE_VARIABLE_StaticCellInfo_18);
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (DataId_56));
          MR_hl_field(3, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_64));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_10 = ((MR_Integer) ((MR_hl_field(3, Pseudo_6, (MR_Integer) 0))));
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (Int_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_19));
        }
        *LldsType_9 = (MR_Word) (MR_mkword(2, &ll_backend__ll_pseudo_type_info_scalar_common_1[0]));
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
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_35;
  MR_Word conv3_LambdaHeadVar__4_37;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_35, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_37);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_37));
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
        MR_Word RttiTypeCtor_18 = (MR_Word) ((MR_Word) (Pseudo_14));
        MR_Word DataId_19;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;

        {
          Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_27, 1) = ((MR_Box) (Pseudo_14));
        }
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (RttiTypeCtor_18));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (Var_27));
        }
        {
          DataId_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DataId_19, 0) = ((MR_Box) (Var_26));
        }
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (DataId_19));
          MR_hl_field(3, Var_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_28));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        *STATE_VARIABLE_StaticCellInfo_16 = STATE_VARIABLE_StaticCellInfo_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_20 = ((MR_Word) ((MR_hl_field(1, Pseudo_14, (MR_Integer) 1))));
        MR_Word RttiTypeCtor_34 = ((MR_Word) ((MR_hl_field(1, Pseudo_14, (MR_Integer) 0))));
        MR_Word TypeCtorInfoDataId_38;
        MR_Word TypeCtorInfoRval_39;
        MR_Word ArgRvals1_40;
        MR_Word ArgRvals_41;
        MR_Word DataId_42;
        MR_Word Var_43;
        MR_Word Var_45;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_33_48;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (RttiTypeCtor_34));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_38, 0) = ((MR_Box) (Var_43));
        }
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (TypeCtorInfoDataId_38));
          MR_hl_field(3, Var_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_39, 1) = ((MR_Box) (Var_45));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[0]), Args_20, &ArgRvals1_40, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_15)), &conv2_STATE_VARIABLE_StaticCellInfo_33_48);
        STATE_VARIABLE_StaticCellInfo_33_48 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_33_48));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_40, &ArgRvals_41);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (TypeCtorInfoRval_39));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (ArgRvals_41));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_49, &DataId_42, STATE_VARIABLE_StaticCellInfo_33_48, STATE_VARIABLE_StaticCellInfo_16);
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (DataId_42));
          MR_hl_field(3, Var_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_50));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_21 = ((MR_Unsigned) ((MR_hl_field(2, Pseudo_14, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Arity_22;
        MR_Word ArityArg_23;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word RttiTypeCtor_35;
        MR_Word Args_36 = ((MR_Word) ((MR_hl_field(2, Pseudo_14, (MR_Integer) 1))));
        MR_Word TypeCtorInfoDataId_55;
        MR_Word TypeCtorInfoRval_56;
        MR_Word ArgRvals1_57;
        MR_Word ArgRvals_58;
        MR_Word DataId_59;
        MR_Word Var_60;
        MR_Word Var_62;
        MR_Word STATE_VARIABLE_StaticCellInfo_33_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_33_65;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_36, &Arity_22);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arity_22));
        }
        {
          ArityArg_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_23, 1) = ((MR_Box) (Var_31));
        }
        RttiTypeCtor_35 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_21);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (ArityArg_23));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (RttiTypeCtor_35));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_55, 0) = ((MR_Box) (Var_60));
        }
        {
          Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_62, 1) = ((MR_Box) (TypeCtorInfoDataId_55));
          MR_hl_field(3, Var_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorInfoRval_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_56, 1) = ((MR_Box) (Var_62));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[1]), Args_36, &ArgRvals1_57, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_15)), &conv5_STATE_VARIABLE_StaticCellInfo_33_65);
        STATE_VARIABLE_StaticCellInfo_33_65 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_33_65));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_32, ArgRvals1_57, &ArgRvals_58);
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (TypeCtorInfoRval_56));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (ArgRvals_58));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_66, &DataId_59, STATE_VARIABLE_StaticCellInfo_33_65, STATE_VARIABLE_StaticCellInfo_16);
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (DataId_59));
          MR_hl_field(3, Var_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_67));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(3, Pseudo_14, (MR_Integer) 0))));
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Int_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_24));
        }
        *LldsType_13 = (MR_Word) (MR_mkword(2, &ll_backend__ll_pseudo_type_info_scalar_common_1[0]));
        *STATE_VARIABLE_StaticCellInfo_16 = STATE_VARIABLE_StaticCellInfo_0_15;
      }
      break;
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
