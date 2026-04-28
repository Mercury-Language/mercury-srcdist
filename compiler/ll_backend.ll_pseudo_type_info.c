/*
** Automatically generated from `ll_pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2026-04-28
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
#include "io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
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
#include "libs.file_util.mih"
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
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33,
  MR_Word LambdaHeadVar__3_34,
  MR_Word * LambdaHeadVar__4_35);

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
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36);

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
  { (MR_Box) ((MR_Unsigned) 0U) },
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
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_33;
  MR_Word conv3_LambdaHeadVar__4_35;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_33, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_35);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_33));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_35));
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
  MR_Word conv1_LambdaHeadVar__2_33;
  MR_Word conv0_LambdaHeadVar__4_35;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_33, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_35);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_33));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_35));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33,
  MR_Word LambdaHeadVar__3_34,
  MR_Word * LambdaHeadVar__4_35)
{
  switch (MR_tag((MR_Word) LambdaHeadVar__1_32)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiTypeCtor_36 = (MR_Word) ((MR_Word) (LambdaHeadVar__1_32));
        MR_Word DataId_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_43, 1) = ((MR_Box) (LambdaHeadVar__1_32));
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (RttiTypeCtor_36));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          DataId_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DataId_37, 0) = ((MR_Box) (Var_42));
        }
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (DataId_37));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_33 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_44));
        }
        *LambdaHeadVar__4_35 = LambdaHeadVar__3_34;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Args_38 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_32, 1))));
        MR_Word RttiTypeCtor_49 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_32, 0))));
        MR_Word TypeCtorInfoData_53;
        MR_Word TypeCtorInfoDataId_54;
        MR_Word TypeCtorInfoRval_55;
        MR_Word ArgRvals1_56;
        MR_Word ArgRvals_57;
        MR_Word DataId_58;
        MR_Word Var_59 = (MR_Word) ((MR_Word) (RttiTypeCtor_49));
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_63;

        {
          TypeCtorInfoData_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoData_53, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, TypeCtorInfoData_53, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (RttiTypeCtor_49));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (TypeCtorInfoData_53));
        }
        {
          TypeCtorInfoDataId_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_54, 0) = ((MR_Box) (Var_60));
        }
        {
          Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_61, 1) = ((MR_Box) (TypeCtorInfoDataId_54));
        }
        {
          TypeCtorInfoRval_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_55, 1) = ((MR_Box) (Var_61));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[6]), Args_38, &ArgRvals1_56, ((MR_Box) (LambdaHeadVar__3_34)), &conv2_STATE_VARIABLE_StaticCellInfo_1_63);
        STATE_VARIABLE_StaticCellInfo_1_63 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_63));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_56, &ArgRvals_57);
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (TypeCtorInfoRval_55));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (ArgRvals_57));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_64, &DataId_58, STATE_VARIABLE_StaticCellInfo_1_63, LambdaHeadVar__4_35);
        {
          Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_65, 1) = ((MR_Box) (DataId_58));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_33 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_65));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_39 = ((MR_Unsigned) ((MR_hl_field(2, LambdaHeadVar__1_32, 0))) & (MR_Integer) 3);
        MR_Integer Arity_40;
        MR_Word ArityArg_41;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word RttiTypeCtor_50;
        MR_Word Args_51 = ((MR_Word) ((MR_hl_field(2, LambdaHeadVar__1_32, 1))));
        MR_Word TypeCtorInfoData_69;
        MR_Word TypeCtorInfoDataId_70;
        MR_Word TypeCtorInfoRval_71;
        MR_Word ArgRvals1_72;
        MR_Word ArgRvals_73;
        MR_Word DataId_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_1_79;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_51, &Arity_40);
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Arity_40));
        }
        {
          ArityArg_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_41, 1) = ((MR_Box) (Var_46));
        }
        RttiTypeCtor_50 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_39);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (ArityArg_41));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_75 = (MR_Word) ((MR_Word) (RttiTypeCtor_50));
        {
          TypeCtorInfoData_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoData_69, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, TypeCtorInfoData_69, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (RttiTypeCtor_50));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (TypeCtorInfoData_69));
        }
        {
          TypeCtorInfoDataId_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_70, 0) = ((MR_Box) (Var_76));
        }
        {
          Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_77, 1) = ((MR_Box) (TypeCtorInfoDataId_70));
        }
        {
          TypeCtorInfoRval_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_71, 1) = ((MR_Box) (Var_77));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[7]), Args_51, &ArgRvals1_72, ((MR_Box) (LambdaHeadVar__3_34)), &conv5_STATE_VARIABLE_StaticCellInfo_1_79);
        STATE_VARIABLE_StaticCellInfo_1_79 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_1_79));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_47, ArgRvals1_72, &ArgRvals_73);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (TypeCtorInfoRval_71));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (ArgRvals_73));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_80, &DataId_74, STATE_VARIABLE_StaticCellInfo_1_79, LambdaHeadVar__4_35);
        {
          Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_81, 1) = ((MR_Box) (DataId_74));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LambdaHeadVar__2_33 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_81));
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
  MR_Word conv4_LambdaHeadVar__2_33;
  MR_Word conv3_LambdaHeadVar__4_35;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_33, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_35);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_33));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_35));
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
  MR_Word conv1_LambdaHeadVar__2_33;
  MR_Word conv0_LambdaHeadVar__4_35;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_33, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_35);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_33));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_35));
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34,
  MR_Word LambdaHeadVar__3_35,
  MR_Word * LambdaHeadVar__4_36)
{
  if (((MR_tag((MR_Word) LambdaHeadVar__1_33)) == (MR_Integer) 1))
  {
    MR_Word TI_22 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_33, 0))));

    switch (MR_tag((MR_Word) TI_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor_41 = (MR_Word) ((MR_Word) (TI_22));
          MR_Word DataId_42;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;

          {
            Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, Var_48, 1) = ((MR_Box) (TI_22));
          }
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_47, 0) = ((MR_Box) (RttiTypeCtor_41));
            MR_hl_field(0, Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            DataId_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DataId_42, 0) = ((MR_Box) (Var_47));
          }
          {
            Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_49, 1) = ((MR_Box) (DataId_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *LambdaHeadVar__2_34 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_49));
          }
          *LambdaHeadVar__4_36 = LambdaHeadVar__3_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_43 = ((MR_Word) ((MR_hl_field(1, TI_22, 1))));
          MR_Word RttiTypeCtor_54 = ((MR_Word) ((MR_hl_field(1, TI_22, 0))));
          MR_Word TypeCtorInfoData_58;
          MR_Word TypeCtorInfoDataId_59;
          MR_Word TypeCtorInfoRval_60;
          MR_Word ArgRvals1_61;
          MR_Word ArgRvals_62;
          MR_Word DataId_63;
          MR_Word Var_64 = (MR_Word) ((MR_Word) (RttiTypeCtor_54));
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word STATE_VARIABLE_StaticCellInfo_1_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_68;

          {
            TypeCtorInfoData_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoData_58, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, TypeCtorInfoData_58, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (RttiTypeCtor_54));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (TypeCtorInfoData_58));
          }
          {
            TypeCtorInfoDataId_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorInfoDataId_59, 0) = ((MR_Box) (Var_65));
          }
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (TypeCtorInfoDataId_59));
          }
          {
            TypeCtorInfoRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoRval_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, TypeCtorInfoRval_60, 1) = ((MR_Box) (Var_66));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[4]), Args_43, &ArgRvals1_61, ((MR_Box) (LambdaHeadVar__3_35)), &conv2_STATE_VARIABLE_StaticCellInfo_1_68);
          STATE_VARIABLE_StaticCellInfo_1_68 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_68));
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_61, &ArgRvals_62);
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (TypeCtorInfoRval_60));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (ArgRvals_62));
          }
          ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_69, &DataId_63, STATE_VARIABLE_StaticCellInfo_1_68, LambdaHeadVar__4_36);
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_70, 1) = ((MR_Box) (DataId_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *LambdaHeadVar__2_34 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_70));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarArityId_44 = ((MR_Unsigned) ((MR_hl_field(2, TI_22, 0))) & (MR_Integer) 3);
          MR_Integer Arity_45;
          MR_Word ArityArg_46;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word RttiTypeCtor_55;
          MR_Word Args_56 = ((MR_Word) ((MR_hl_field(2, TI_22, 1))));
          MR_Word TypeCtorInfoData_74;
          MR_Word TypeCtorInfoDataId_75;
          MR_Word TypeCtorInfoRval_76;
          MR_Word ArgRvals1_77;
          MR_Word ArgRvals_78;
          MR_Word DataId_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word STATE_VARIABLE_StaticCellInfo_1_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Box conv5_STATE_VARIABLE_StaticCellInfo_1_84;

          mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), Args_56, &Arity_45);
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (Arity_45));
          }
          {
            ArityArg_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ArityArg_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, ArityArg_46, 1) = ((MR_Box) (Var_51));
          }
          RttiTypeCtor_55 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_44);
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (ArityArg_46));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_80 = (MR_Word) ((MR_Word) (RttiTypeCtor_55));
          {
            TypeCtorInfoData_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoData_74, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(3, TypeCtorInfoData_74, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_81, 0) = ((MR_Box) (RttiTypeCtor_55));
            MR_hl_field(0, Var_81, 1) = ((MR_Box) (TypeCtorInfoData_74));
          }
          {
            TypeCtorInfoDataId_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorInfoDataId_75, 0) = ((MR_Box) (Var_81));
          }
          {
            Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_82, 1) = ((MR_Box) (TypeCtorInfoDataId_75));
          }
          {
            TypeCtorInfoRval_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeCtorInfoRval_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, TypeCtorInfoRval_76, 1) = ((MR_Box) (Var_82));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[5]), Args_56, &ArgRvals1_77, ((MR_Box) (LambdaHeadVar__3_35)), &conv5_STATE_VARIABLE_StaticCellInfo_1_84);
          STATE_VARIABLE_StaticCellInfo_1_84 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_1_84));
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_52, ArgRvals1_77, &ArgRvals_78);
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (TypeCtorInfoRval_76));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (ArgRvals_78));
          }
          ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_85, &DataId_79, STATE_VARIABLE_StaticCellInfo_1_84, LambdaHeadVar__4_36);
          {
            Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_86, 1) = ((MR_Box) (DataId_79));
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
  else
  {
    MR_Word PTI_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, 0))));
    MR_Word _LldsType_21;

    ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(PTI_20, LambdaHeadVar__3_35, LambdaHeadVar__4_36, LambdaHeadVar__2_34, &_LldsType_21);
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
  MR_Word conv4_LambdaHeadVar__2_34;
  MR_Word conv3_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_36));
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
  MR_Word conv1_LambdaHeadVar__2_34;
  MR_Word conv0_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_36));
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
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (DataId_12));
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
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, Pseudo_6, 1))));
        MR_Word RttiTypeCtor_30 = ((MR_Word) ((MR_hl_field(1, Pseudo_6, 0))));
        MR_Word TypeCtorInfoDataId_34;
        MR_Word TypeCtorInfoRval_35;
        MR_Word ArgRvals1_36;
        MR_Word ArgRvals_37;
        MR_Word DataId_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_43;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (RttiTypeCtor_30));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_34, 0) = ((MR_Box) (Var_39));
        }
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (TypeCtorInfoDataId_34));
        }
        {
          TypeCtorInfoRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_35, 1) = ((MR_Box) (Var_41));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[2]), Args_13, &ArgRvals1_36, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv2_STATE_VARIABLE_StaticCellInfo_1_43);
        STATE_VARIABLE_StaticCellInfo_1_43 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_43));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_36, &ArgRvals_37);
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (TypeCtorInfoRval_35));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (ArgRvals_37));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_44, &DataId_38, STATE_VARIABLE_StaticCellInfo_1_43, STATE_VARIABLE_StaticCellInfo_18);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (DataId_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_14 = ((MR_Unsigned) ((MR_hl_field(2, Pseudo_6, 0))) & (MR_Integer) 3);
        MR_Integer Arity_15;
        MR_Word ArityArg_16;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word RttiTypeCtor_31;
        MR_Word Args_32 = ((MR_Word) ((MR_hl_field(2, Pseudo_6, 1))));
        MR_Word TypeCtorInfoDataId_49;
        MR_Word TypeCtorInfoRval_50;
        MR_Word ArgRvals1_51;
        MR_Word ArgRvals_52;
        MR_Word DataId_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_1_58;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_32, &Arity_15);
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (Arity_15));
        }
        {
          ArityArg_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_16, 1) = ((MR_Box) (Var_26));
        }
        RttiTypeCtor_31 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_14);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (ArityArg_16));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (RttiTypeCtor_31));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_49, 0) = ((MR_Box) (Var_54));
        }
        {
          Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_56, 1) = ((MR_Box) (TypeCtorInfoDataId_49));
        }
        {
          TypeCtorInfoRval_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_50, 1) = ((MR_Box) (Var_56));
        }
        *LldsType_9 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[3]), Args_32, &ArgRvals1_51, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv5_STATE_VARIABLE_StaticCellInfo_1_58);
        STATE_VARIABLE_StaticCellInfo_1_58 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_1_58));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_27, ArgRvals1_51, &ArgRvals_52);
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (TypeCtorInfoRval_50));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (ArgRvals_52));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_59, &DataId_53, STATE_VARIABLE_StaticCellInfo_1_58, STATE_VARIABLE_StaticCellInfo_18);
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (DataId_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_60));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_10 = ((MR_Integer) ((MR_hl_field(3, Pseudo_6, 0))));
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
  MR_Word conv4_LambdaHeadVar__2_34;
  MR_Word conv3_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv3_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv3_LambdaHeadVar__4_36));
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
  MR_Word conv1_LambdaHeadVar__2_34;
  MR_Word conv0_LambdaHeadVar__4_36;

  ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_34, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_36));
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
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (DataId_19));
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
        MR_Word Args_20 = ((MR_Word) ((MR_hl_field(1, Pseudo_14, 1))));
        MR_Word RttiTypeCtor_33 = ((MR_Word) ((MR_hl_field(1, Pseudo_14, 0))));
        MR_Word TypeCtorInfoDataId_37;
        MR_Word TypeCtorInfoRval_38;
        MR_Word ArgRvals1_39;
        MR_Word ArgRvals_40;
        MR_Word DataId_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_46;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (RttiTypeCtor_33));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_37, 0) = ((MR_Box) (Var_42));
        }
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (TypeCtorInfoDataId_37));
        }
        {
          TypeCtorInfoRval_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_38, 1) = ((MR_Box) (Var_44));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[0]), Args_20, &ArgRvals1_39, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_15)), &conv2_STATE_VARIABLE_StaticCellInfo_1_46);
        STATE_VARIABLE_StaticCellInfo_1_46 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_46));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) ((MR_Unsigned) 0U), ArgRvals1_39, &ArgRvals_40);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (TypeCtorInfoRval_38));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (ArgRvals_40));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_47, &DataId_41, STATE_VARIABLE_StaticCellInfo_1_46, STATE_VARIABLE_StaticCellInfo_16);
        {
          Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_48, 1) = ((MR_Box) (DataId_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_48));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_21 = ((MR_Unsigned) ((MR_hl_field(2, Pseudo_14, 0))) & (MR_Integer) 3);
        MR_Integer Arity_22;
        MR_Word ArityArg_23;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word RttiTypeCtor_34;
        MR_Word Args_35 = ((MR_Word) ((MR_hl_field(2, Pseudo_14, 1))));
        MR_Word TypeCtorInfoDataId_52;
        MR_Word TypeCtorInfoRval_53;
        MR_Word ArgRvals1_54;
        MR_Word ArgRvals_55;
        MR_Word DataId_56;
        MR_Word Var_57;
        MR_Word Var_59;
        MR_Word STATE_VARIABLE_StaticCellInfo_1_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Box conv5_STATE_VARIABLE_StaticCellInfo_1_61;

        mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Args_35, &Arity_22);
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Arity_22));
        }
        {
          ArityArg_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArityArg_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ArityArg_23, 1) = ((MR_Box) (Var_30));
        }
        RttiTypeCtor_34 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_21);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (ArityArg_23));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (RttiTypeCtor_34));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 44U));
        }
        {
          TypeCtorInfoDataId_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorInfoDataId_52, 0) = ((MR_Box) (Var_57));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (TypeCtorInfoDataId_52));
        }
        {
          TypeCtorInfoRval_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeCtorInfoRval_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeCtorInfoRval_53, 1) = ((MR_Box) (Var_59));
        }
        *LldsType_13 = (MR_Word) ((MR_Unsigned) 12U);
        mercury__list__map_foldl_5_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__ll_pseudo_type_info_scalar_common_3[1]), Args_35, &ArgRvals1_54, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_15)), &conv5_STATE_VARIABLE_StaticCellInfo_1_61);
        STATE_VARIABLE_StaticCellInfo_1_61 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_1_61));
        mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_31, ArgRvals1_54, &ArgRvals_55);
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (TypeCtorInfoRval_53));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (ArgRvals_55));
        }
        ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(Var_62, &DataId_56, STATE_VARIABLE_StaticCellInfo_1_61, STATE_VARIABLE_StaticCellInfo_16);
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (DataId_56));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PseudoRval_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_63));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(3, Pseudo_14, 0))));
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
