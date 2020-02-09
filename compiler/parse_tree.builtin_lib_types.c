/*
** Automatically generated from `builtin_lib_types.m'
** by the Mercury compiler,
** version rotd-2020-02-09
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


// :- module parse_tree.builtin_lib_types.
// :- implementation.

/*
INIT mercury__parse_tree__builtin_lib_types__init
ENDINIT
*/

#include "parse_tree.builtin_lib_types.mih"


#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"





static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[39][1];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[13][2];




static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[39][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[1])))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[3])))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[5])))
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[7])))
  },
  /* row 9 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[9])))
  },
  /* row 11 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[11])))
  },
  /* row 13 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[13])))
  },
  /* row 15 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[15])))
  },
  /* row 17 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[17])))
  },
  /* row 19 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "type_desc"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "stm_builtin"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "int64"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "uint64"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "character"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
};

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[0])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[26])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[27])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[28])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[29])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[30])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[31])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[32])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[33])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[34])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[35])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[36])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[37])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[38])),
    ((MR_Box) ((MR_Integer) 0))
  },
};






MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "rollback_retry"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "rollback_invalid_transaction"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_invalid"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_valid"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_exception_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "exception"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_failed_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "failed"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word Name_7;
    MR_Word Var_9;

    Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "succeeded"));
    }
    Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_7, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__list_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Var_4;

    Var_4 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "poly_type"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[12]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[11]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[10]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint64_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[9]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int64_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[8]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[7]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int32_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[6]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[5]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int16_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[4]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[3]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int8_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[2]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[1]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_ctor_0_f_0(void)
{
  return (MR_Word) (&parse_tree__builtin_lib_types_scalar_common_3[0]);
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__future_type_1_f_0(
  MR_Word ValueType_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_4;
    MR_Word Module_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ValueType_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Module_5 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    {
      Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_4, 0) = ((MR_Box) (Module_5));
      MR_hl_field(MR_mktag(1), Name_4, 1) = ((MR_Box) ((MR_String) "future"));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Name_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__region_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "region"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_state_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_atomic_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&parse_tree__builtin_lib_types_scalar_common_1[25]));
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_1_f_0(
  MR_Word SubType_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_4;
    MR_Word Module_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (SubType_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Module_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_4, 0) = ((MR_Box) (Module_5));
      MR_hl_field(MR_mktag(1), Name_4, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Name_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__univ_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "univ"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_io_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "io"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_state_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "state"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__comparison_result_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&parse_tree__builtin_lib_types_scalar_common_1[24]));
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_desc"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&parse_tree__builtin_lib_types_scalar_common_1[24]));
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "pseudo_type_desc"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_desc_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word Module_3;

    Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&parse_tree__builtin_lib_types_scalar_common_1[24]));
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (Module_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "type_desc"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_info"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_info_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "type_info"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "sample_typeclass_info"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_type_info_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "sample_type_info"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_box_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "float_box"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__heap_pointer_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "heap_pointer"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__c_pointer_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Name_2;
    MR_Word BuiltinModule_3;

    BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Name_2, 0) = ((MR_Box) (BuiltinModule_3));
      MR_hl_field(MR_mktag(1), Name_2, 1) = ((MR_Box) ((MR_String) "c_pointer"));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Name_2));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__void_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_2[0]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[23]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[22]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[21]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint64_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[20]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int64_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[18]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint32_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[16]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int32_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[14]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint16_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[12]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int16_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[10]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint8_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[8]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int8_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[6]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[4]));
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[2]));
}

void mercury__parse_tree__builtin_lib_types__init(void)
{
}

void mercury__parse_tree__builtin_lib_types__init_type_tables(void)
{
}

void mercury__parse_tree__builtin_lib_types__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__builtin_lib_types__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.builtin_lib_types.
