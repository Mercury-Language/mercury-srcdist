/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2019-05-28
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


// :- module parse_tree.prog_mutable.
// :- implementation.

/*
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#include "parse_tree.prog_mutable.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3];

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word PredKind_12,
  MR_Word Context_13);

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word PredKind_12,
  MR_Word Context_13);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][1];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][2];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0 = {
  (MR_String) "get_set_pred_std",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1 = {
  (MR_String) "get_set_pred_constant",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2 = {
  (MR_String) "get_set_pred_io",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "get_set_pred_kind",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0
};

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__io_set_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 2, Context_11);
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__io_get_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 2, Context_11);
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 1, Context_11);
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 1, Context_11);
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__std_set_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 0, Context_11);
    return HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word PredKind_12,
  MR_Word Context_13)
{
  {
    MR_Word SetPredDecl_14;
    MR_Word TypeVarSet_17;
    MR_Word InstVarSet_18;
    MR_Word MainArgTypesAndModes_20;
    MR_Word SymName_21;
    MR_Word ArgTypesAndModes_22;
    MR_Word Purity_23;
    MR_Word Var_29;
    MR_Word Var_30;

    TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    Var_30 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      MainArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainArgTypesAndModes_20, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), MainArgTypesAndModes_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    switch (PredKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_44;

          Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", Name_9);
          {
            SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SymName_21, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), SymName_21, 1) = ((MR_Box) (Var_44));
          }
          ArgTypesAndModes_22 = MainArgTypesAndModes_20;
          Purity_23 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_32;
          MR_String Var_48;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;

          Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "set_", Name_9);
          {
            SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SymName_21, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), SymName_21, 1) = ((MR_Box) (Var_48));
          }
          Var_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_52 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
          }
          Var_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_56 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_53));
          }
          ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), MainArgTypesAndModes_20, Var_32);
          Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_60;

          Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "set_", Name_9);
          {
            SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SymName_21, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), SymName_21, 1) = ((MR_Box) (Var_60));
          }
          ArgTypesAndModes_22 = MainArgTypesAndModes_20;
          Purity_23 = (MR_Integer) 2;
        }
        break;
    }
    {
      SetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 0) = ((MR_Box) (SymName_21));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 2) = ((MR_Box) (ArgTypesAndModes_22));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[1])));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 7) = ((MR_Box) (TypeVarSet_17));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 8) = ((MR_Box) (InstVarSet_18));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 10) = (MR_Box) ((MR_Unsigned) (Purity_23));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), SetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    return SetPredDecl_14;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__std_get_pred_decl_5_f_0(
  MR_Word ModuleName_7,
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(ModuleName_7, Name_8, Type_9, Inst_10, (MR_Integer) 0, Context_11);
    return HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word PredKind_12,
  MR_Word Context_13)
{
  {
    MR_Word GetPredDecl_14;
    MR_Word TypeVarSet_17;
    MR_Word InstVarSet_18;
    MR_Word SymName_20;
    MR_Word MainArgTypesAndModes_21;
    MR_Word ArgTypesAndModes_22;
    MR_Word Purity_23;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String Var_44;

    TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_9);
    {
      SymName_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_20, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), SymName_20, 1) = ((MR_Box) (Var_44));
    }
    Var_30 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      MainArgTypesAndModes_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainArgTypesAndModes_21, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), MainArgTypesAndModes_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    switch (PredKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ArgTypesAndModes_22 = MainArgTypesAndModes_21;
          Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_32;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;

          Var_47 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_48 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          Var_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_52 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_49));
          }
          ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), MainArgTypesAndModes_21, Var_32);
          Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          ArgTypesAndModes_22 = MainArgTypesAndModes_21;
          Purity_23 = (MR_Integer) 1;
        }
        break;
    }
    {
      GetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 0) = ((MR_Box) (SymName_20));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 2) = ((MR_Box) (ArgTypesAndModes_22));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[1])));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 7) = ((MR_Box) (TypeVarSet_17));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 8) = ((MR_Box) (InstVarSet_18));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 10) = (MR_Box) ((MR_Unsigned) (Purity_23));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), GetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    return GetPredDecl_14;
  }
}

MR_String MR_CALL 
parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(
  MR_String TargetMutableVarName_3)
{
  {
    MR_String MutexVarName_4;

    MutexVarName_4 = mercury__string__f_43_43_2_f_0(TargetMutableVarName_3, (MR_String) "_lock");
    return MutexVarName_4;
  }
}

MR_String MR_CALL 
parse_tree__prog_mutable__mutable_c_var_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_bool succeeded;
    MR_String MangledCVarName_6;
    MR_String RawCVarName_7;
    MR_Word QualifiedCVarName0_8;
    MR_Word QualifiedCVarName_9;

    RawCVarName_7 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", Name_5);
    {
      QualifiedCVarName0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedCVarName0_8, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), QualifiedCVarName0_8, 1) = ((MR_Box) (RawCVarName_7));
    }
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_4);
    if (succeeded)
    {
      QualifiedCVarName_9 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_8);
    }
    else
      QualifiedCVarName_9 = QualifiedCVarName0_8;
    MangledCVarName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_9);
    return MangledCVarName_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "set_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String Name_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", Name_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0);
}

void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_mutable__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_mutable.
