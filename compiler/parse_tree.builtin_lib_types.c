/*
** Automatically generated from `builtin_lib_types.m'
** by the Mercury compiler,
** version rotd-2017-07-11
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.builtin_lib_types. */
/* :- implementation. */

/*
INIT mercury__parse_tree__builtin_lib_types__init
ENDINIT
*/

#include "parse_tree.builtin_lib_types.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[13][1];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[5][2];




static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "type_desc"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "stm_builtin"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "character"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
};

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[8])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[9])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[10])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[11])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[12])),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_retry"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_invalid_transaction"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_invalid"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_valid"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_exception_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_failed_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "failed"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
    MR_Word parse_tree__builtin_lib_types__Var_5;
    MR_Word parse_tree__builtin_lib_types__Name_7;
    MR_Word parse_tree__builtin_lib_types__Var_9;

    {
      parse_tree__builtin_lib_types__Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "succeeded"));
    }
    {
      parse_tree__builtin_lib_types__Var_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_9));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__list_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "list"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Var_4;

    {
      parse_tree__builtin_lib_types__Var_4 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Var_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "poly_type"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[4];
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[3];
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[2];
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[1];
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_ctor_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[0];
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__future_type_1_f_0(
  MR_Word parse_tree__builtin_lib_types__ValueType_3)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
    MR_Word parse_tree__builtin_lib_types__Name_4;
    MR_Word parse_tree__builtin_lib_types__Module_5;
    MR_Word parse_tree__builtin_lib_types__Var_6;

    {
      parse_tree__builtin_lib_types__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Var_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__ValueType_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "future"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Var_6));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__region_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "region"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_state_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_atomic_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[7]);
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_1_f_0(
  MR_Word parse_tree__builtin_lib_types__SubType_3)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
    MR_Word parse_tree__builtin_lib_types__Name_4;
    MR_Word parse_tree__builtin_lib_types__Module_5;
    MR_Word parse_tree__builtin_lib_types__Var_6;

    {
      parse_tree__builtin_lib_types__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Var_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__SubType_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Var_6));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__univ_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "univ"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_io_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "io"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_state_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "state"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__comparison_result_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[6]);
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_desc"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[6]);
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "pseudo_type_desc"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_desc_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__Module_3;

    {
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[6]);
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_desc"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_info"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_info_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_info"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_typeclass_info"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_type_info_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_type_info"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_box_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "float_box"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__heap_pointer_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "heap_pointer"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__c_pointer_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
    MR_Word parse_tree__builtin_lib_types__Name_2;
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

    {
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "c_pointer"));
    }
    {
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return parse_tree__builtin_lib_types__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__void_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_2[0]);
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[5]);
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[4]);
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[3]);
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__uint_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[2]);
  }
}

MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_0_f_0(void)
{
  {
    MR_bool parse_tree__builtin_lib_types__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[1]);
  }
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

/* :- end_module parse_tree.builtin_lib_types. */
