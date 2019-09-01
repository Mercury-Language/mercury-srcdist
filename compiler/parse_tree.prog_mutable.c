/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2019-09-01
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
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
    MR_Word AllowExport_17;
    MR_Word Purity_18;
    MR_Word MaybeIsMutable_21;
    MR_Word CompilerAttrs_22;
    MR_Word MaybeAttrs_23;
    MR_Word TypeVarSet_24;
    MR_Word InstVarSet_25;

    switch (Kind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
        {
          MR_Word Var_42;
          MR_Word Var_43;
          MR_String Var_68;

          Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_68));
          }
          Var_43 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word Var_39;
          MR_Word Var_40;
          MR_String Var_72;

          Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_72));
          }
          Var_40 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_String Var_76;

          Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_76));
          }
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_String Var_80;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;

          Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "get_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_80));
          }
          Var_36 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_83 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_84 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
          }
          Var_87 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_88 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_85));
          }
          ArgTypesAndModes_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Var_34, Var_38);
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_33;
          MR_String Var_92;

          Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "set_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_92));
          }
          Var_31 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_33 = parse_tree__prog_mutable__io_state_pair_0_f_0();
          ArgTypesAndModes_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Var_29, Var_33);
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 8:
        {
          MR_String Var_96;

          Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", Name_9);
          {
            PredSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_15, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_15, 1) = ((MR_Box) (Var_96));
          }
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 10:
        {
          PredSymName_15 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_48;
          MR_Word Var_49;

          PredSymName_15 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_49 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_45;
          MR_Word Var_46;

          PredSymName_15 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_46 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 1;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 9:
        {
          PredSymName_15 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          ArgTypesAndModes_16 = (MR_Word) ((MR_Unsigned) 0U);
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word Var_54;
          MR_Word Var_55;

          PredSymName_15 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_55 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word Var_51;
          MR_Word Var_52;

          PredSymName_15 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(ModuleName_8, Name_9);
          Var_52 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Type_10));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            ArgTypesAndModes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), ArgTypesAndModes_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllowExport_17 = (MR_Integer) 0;
          Purity_18 = (MR_Integer) 2;
        }
        break;
    }
    {
      MaybeIsMutable_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIsMutable_21, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), MaybeIsMutable_21, 1) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(1), MaybeIsMutable_21, 2) = (MR_Box) ((MR_Unsigned) (Kind_13));
    }
    {
      CompilerAttrs_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CompilerAttrs_22, 0) = (MR_Box) ((MR_Unsigned) (AllowExport_17));
      MR_hl_field(MR_mktag(0), CompilerAttrs_22, 1) = ((MR_Box) (MaybeIsMutable_21));
    }
    MaybeAttrs_23 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CompilerAttrs_22)));
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_25);
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
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeAttrs_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeVarSet_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_18));
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
              {
                *PublicAuxPreds_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), StdGetSetPreds_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[5])));
              }
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
