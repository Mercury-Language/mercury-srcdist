/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2020-10-04
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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"




static MR_Word MR_CALL 
parse_tree__prog_mutable__io_state_pair_0_f_0(void);


static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
parse_tree__prog_mutable__make_mutable_aux_pred_decl_7_p_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word Context_12,
  MR_Word Kind_13,
  MR_Word * PredDecl_14)
{
  {
    MR_Word PredSymName_15;
    MR_Word ArgTypesAndModes_16;
    MR_Word Purity_17;
    MR_Word Origin_20;
    MR_Word CompilerAttrs_21;
    MR_Word MaybeAttrs_22;
    MR_Word TypeVarSet_23;
    MR_Word InstVarSet_24;

    switch (Kind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
        {
          MR_Word Var_41;
          MR_Word Var_42;
          MR_String Var_67;

          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_67));
          }
          Var_42 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word Var_38;
          MR_Word Var_39;
          MR_String Var_71;

          Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_71));
          }
          Var_39 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_String Var_75;

          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_75));
          }
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_37;
          MR_String Var_79;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_79));
          }
          Var_35 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_82 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_83 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
          }
          Var_86 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_87 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_84));
          }
          ArgTypesAndModes_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Var_33, Var_37);
          Purity_17 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_String Var_91;

          Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "set_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_91));
          }
          Var_30 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_32 = parse_tree__prog_mutable__io_state_pair_0_f_0();
          ArgTypesAndModes_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Var_28, Var_32);
          Purity_17 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 8:
        {
          MR_String Var_95;

          Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_95));
          }
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 10:
        {
          PredSymName_15 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_47;
          MR_Word Var_48;

          PredSymName_15 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_48 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44;
          MR_Word Var_45;

          PredSymName_15 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_45 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 9:
        {
          PredSymName_15 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          Purity_17 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word Var_53;
          MR_Word Var_54;

          PredSymName_15 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_54 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word Var_50;
          MR_Word Var_51;

          PredSymName_15 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_51 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Purity_17 = (MR_Integer) 2;
        }
        break;
    }
    {
      Origin_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Origin_20, 1) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(3), Origin_20, 2) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(3), Origin_20, 3) = (MR_Box) ((MR_Unsigned) (Kind_13));
    }
    CompilerAttrs_21 = (MR_Word) (Origin_20);
    {
      MaybeAttrs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_22, 0) = ((MR_Box) (CompilerAttrs_21));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_23);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      *PredDecl_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredSymName_15));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypesAndModes_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeAttrs_22));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeVarSet_23));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_24));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_17));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[6]));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Integer) -1));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__io_state_pair_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;

    Var_3 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_4 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      Var_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(1), Var_2, 1) = ((MR_Box) (Var_4));
    }
    Var_7 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_8 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_8));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__1_1;
  }
}

void MR_CALL 
parse_tree__prog_mutable__compute_needed_public_mutable_aux_preds_2_p_0(
  MR_Word MutAttrs_3,
  MR_Word * PublicAuxPreds_4)
{
  {
    MR_Word IsConstant_5;
    MR_Word AttachToIO_6;

    IsConstant_5 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_3);
    AttachToIO_6 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(MutAttrs_3);
    switch (IsConstant_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *PublicAuxPreds_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[1]));
        break;
      case (MR_Integer) 0:
        {
          MR_Word StdGetSetPreds_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[3]));

          switch (AttachToIO_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *PublicAuxPreds_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), StdGetSetPreds_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[5])));
              break;
            case (MR_Integer) 0:
              *PublicAuxPreds_4 = StdGetSetPreds_8;
              break;
          }
        }
        break;
    }
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

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
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
