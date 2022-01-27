/*
** Automatically generated from `builtin_lib_types.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[11][1];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[4][2];




static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_1[11][1] = {
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
    ((MR_Box) ((MR_String) "type_desc"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "stm_builtin"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "character"))
  },
  /* row 10 */
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

static /* final */ const MR_Box parse_tree__builtin_lib_types_scalar_common_3[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[7])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[8])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[9])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__builtin_lib_types_scalar_common_1[10])),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 98 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0(void)
#line 98 "builtin_lib_types.m"
{
#line 264 "builtin_lib_types.m"
  {
#line 264 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 264 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 265 "builtin_lib_types.m"
    {
#line 265 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 265 "builtin_lib_types.m"
    {
#line 265 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 265 "builtin_lib_types.m"
    }
#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 235 "builtin_lib_types.m"
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 234 "builtin_lib_types.m"
    }
#line 264 "builtin_lib_types.m"
    {
#line 264 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 264 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 264 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 264 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 264 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 264 "builtin_lib_types.m"
    }
#line 264 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 264 "builtin_lib_types.m"
  }
#line 98 "builtin_lib_types.m"
}

#line 94 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0(void)
#line 94 "builtin_lib_types.m"
{
#line 260 "builtin_lib_types.m"
  {
#line 260 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 260 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 261 "builtin_lib_types.m"
    {
#line 261 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 261 "builtin_lib_types.m"
    {
#line 261 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_retry"));
#line 261 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 233 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 232 "builtin_lib_types.m"
    }
#line 260 "builtin_lib_types.m"
    {
#line 260 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 260 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 260 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 260 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 260 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 260 "builtin_lib_types.m"
    }
#line 260 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 260 "builtin_lib_types.m"
  }
#line 94 "builtin_lib_types.m"
}

#line 93 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0(void)
#line 93 "builtin_lib_types.m"
{
#line 256 "builtin_lib_types.m"
  {
#line 256 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 256 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 257 "builtin_lib_types.m"
    {
#line 257 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 257 "builtin_lib_types.m"
    {
#line 257 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_invalid_transaction"));
#line 257 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 233 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 232 "builtin_lib_types.m"
    }
#line 256 "builtin_lib_types.m"
    {
#line 256 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 256 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 256 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 256 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 256 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 256 "builtin_lib_types.m"
    }
#line 256 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 256 "builtin_lib_types.m"
  }
#line 93 "builtin_lib_types.m"
}

#line 89 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0(void)
#line 89 "builtin_lib_types.m"
{
#line 252 "builtin_lib_types.m"
  {
#line 252 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 252 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 253 "builtin_lib_types.m"
    {
#line 253 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 253 "builtin_lib_types.m"
    {
#line 253 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_invalid"));
#line 253 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 231 "builtin_lib_types.m"
    }
#line 230 "builtin_lib_types.m"
    {
#line 230 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 230 "builtin_lib_types.m"
    }
#line 252 "builtin_lib_types.m"
    {
#line 252 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 252 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 252 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 252 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 252 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 252 "builtin_lib_types.m"
    }
#line 252 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 252 "builtin_lib_types.m"
  }
#line 89 "builtin_lib_types.m"
}

#line 88 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0(void)
#line 88 "builtin_lib_types.m"
{
#line 249 "builtin_lib_types.m"
  {
#line 249 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 249 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 250 "builtin_lib_types.m"
    {
#line 250 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 250 "builtin_lib_types.m"
    {
#line 250 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_valid"));
#line 250 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 231 "builtin_lib_types.m"
    }
#line 230 "builtin_lib_types.m"
    {
#line 230 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 230 "builtin_lib_types.m"
    }
#line 249 "builtin_lib_types.m"
    {
#line 249 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 249 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 249 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 249 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 249 "builtin_lib_types.m"
    }
#line 249 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 249 "builtin_lib_types.m"
  }
#line 88 "builtin_lib_types.m"
}

#line 84 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_exception_functor_0_f_0(void)
#line 84 "builtin_lib_types.m"
{
#line 245 "builtin_lib_types.m"
  {
#line 245 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 245 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 246 "builtin_lib_types.m"
    {
#line 246 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 246 "builtin_lib_types.m"
    {
#line 246 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception"));
#line 246 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 228 "builtin_lib_types.m"
    }
#line 227 "builtin_lib_types.m"
    {
#line 227 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 227 "builtin_lib_types.m"
    }
#line 245 "builtin_lib_types.m"
    {
#line 245 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 245 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 245 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 245 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
#line 245 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 245 "builtin_lib_types.m"
    }
#line 245 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 245 "builtin_lib_types.m"
  }
#line 84 "builtin_lib_types.m"
}

#line 83 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_failed_functor_0_f_0(void)
#line 83 "builtin_lib_types.m"
{
#line 242 "builtin_lib_types.m"
  {
#line 242 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 242 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 243 "builtin_lib_types.m"
    {
#line 243 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 243 "builtin_lib_types.m"
    {
#line 243 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "failed"));
#line 243 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 228 "builtin_lib_types.m"
    }
#line 227 "builtin_lib_types.m"
    {
#line 227 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 227 "builtin_lib_types.m"
    }
#line 242 "builtin_lib_types.m"
    {
#line 242 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 242 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 242 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 242 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 242 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 242 "builtin_lib_types.m"
    }
#line 242 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 242 "builtin_lib_types.m"
  }
#line 83 "builtin_lib_types.m"
}

#line 82 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0(void)
#line 82 "builtin_lib_types.m"
{
#line 239 "builtin_lib_types.m"
  {
#line 239 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 239 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 240 "builtin_lib_types.m"
    {
#line 240 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 240 "builtin_lib_types.m"
    {
#line 240 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "succeeded"));
#line 240 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 228 "builtin_lib_types.m"
    }
#line 227 "builtin_lib_types.m"
    {
#line 227 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 227 "builtin_lib_types.m"
    }
#line 239 "builtin_lib_types.m"
    {
#line 239 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 239 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 239 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 239 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
#line 239 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 239 "builtin_lib_types.m"
    }
#line 239 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 239 "builtin_lib_types.m"
  }
#line 82 "builtin_lib_types.m"
}

#line 73 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_f_0(void)
#line 73 "builtin_lib_types.m"
{
#line 234 "builtin_lib_types.m"
  {
#line 234 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 234 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 234 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 234 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 235 "builtin_lib_types.m"
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 234 "builtin_lib_types.m"
    }
#line 234 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 234 "builtin_lib_types.m"
  }
#line 73 "builtin_lib_types.m"
}

#line 72 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_f_0(void)
#line 72 "builtin_lib_types.m"
{
#line 232 "builtin_lib_types.m"
  {
#line 232 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 232 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 232 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 232 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 233 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 232 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 232 "builtin_lib_types.m"
  }
#line 72 "builtin_lib_types.m"
}

#line 71 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_f_0(void)
#line 71 "builtin_lib_types.m"
{
#line 230 "builtin_lib_types.m"
  {
#line 230 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 230 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 230 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 230 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 231 "builtin_lib_types.m"
    }
#line 230 "builtin_lib_types.m"
    {
#line 230 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 230 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 230 "builtin_lib_types.m"
    }
#line 230 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 230 "builtin_lib_types.m"
  }
#line 71 "builtin_lib_types.m"
}

#line 69 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_ctor_0_f_0(void)
#line 69 "builtin_lib_types.m"
{
#line 227 "builtin_lib_types.m"
  {
#line 227 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 227 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 227 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 227 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 228 "builtin_lib_types.m"
    }
#line 227 "builtin_lib_types.m"
    {
#line 227 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 227 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
#line 227 "builtin_lib_types.m"
    }
#line 227 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 227 "builtin_lib_types.m"
  }
#line 69 "builtin_lib_types.m"
}

#line 67 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__list_type_ctor_0_f_0(void)
#line 67 "builtin_lib_types.m"
{
#line 224 "builtin_lib_types.m"
  {
#line 224 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 224 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 224 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 224 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 225 "builtin_lib_types.m"
    {
#line 225 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    }
#line 225 "builtin_lib_types.m"
    {
#line 225 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 225 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "list"));
#line 225 "builtin_lib_types.m"
    }
#line 224 "builtin_lib_types.m"
    {
#line 224 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 224 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
#line 224 "builtin_lib_types.m"
    }
#line 224 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 224 "builtin_lib_types.m"
  }
#line 67 "builtin_lib_types.m"
}

#line 65 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0(void)
#line 65 "builtin_lib_types.m"
{
#line 221 "builtin_lib_types.m"
  {
#line 221 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 221 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 221 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 221 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 222 "builtin_lib_types.m"
    {
#line 222 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    }
#line 222 "builtin_lib_types.m"
    {
#line 222 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 222 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "poly_type"));
#line 222 "builtin_lib_types.m"
    }
#line 221 "builtin_lib_types.m"
    {
#line 221 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 221 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 221 "builtin_lib_types.m"
    }
#line 221 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 221 "builtin_lib_types.m"
  }
#line 65 "builtin_lib_types.m"
}

#line 63 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_ctor_0_f_0(void)
#line 63 "builtin_lib_types.m"
{
#line 218 "builtin_lib_types.m"
  {
#line 218 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 218 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[3];
#line 218 "builtin_lib_types.m"
  }
#line 63 "builtin_lib_types.m"
}

#line 62 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_ctor_0_f_0(void)
#line 62 "builtin_lib_types.m"
{
#line 216 "builtin_lib_types.m"
  {
#line 216 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 216 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[2];
#line 216 "builtin_lib_types.m"
  }
#line 62 "builtin_lib_types.m"
}

#line 61 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_ctor_0_f_0(void)
#line 61 "builtin_lib_types.m"
{
#line 214 "builtin_lib_types.m"
  {
#line 214 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 214 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[1];
#line 214 "builtin_lib_types.m"
  }
#line 61 "builtin_lib_types.m"
}

#line 60 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_ctor_0_f_0(void)
#line 60 "builtin_lib_types.m"
{
#line 212 "builtin_lib_types.m"
  {
#line 212 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 212 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[0];
#line 212 "builtin_lib_types.m"
  }
#line 60 "builtin_lib_types.m"
}

#line 53 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__future_type_1_f_0(
#line 53 "builtin_lib_types.m"
  MR_Word parse_tree__builtin_lib_types__ValueType_3)
#line 53 "builtin_lib_types.m"
{
#line 206 "builtin_lib_types.m"
  {
#line 206 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 206 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
#line 206 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_4;
#line 206 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_5;
#line 206 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_6_6;

#line 206 "builtin_lib_types.m"
    {
#line 206 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__ValueType_3));
#line 206 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "builtin_lib_types.m"
    }
#line 207 "builtin_lib_types.m"
    {
#line 207 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    }
#line 208 "builtin_lib_types.m"
    {
#line 208 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
#line 208 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "future"));
#line 208 "builtin_lib_types.m"
    }
#line 206 "builtin_lib_types.m"
    {
#line 206 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 206 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
#line 206 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__V_6_6));
#line 206 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "builtin_lib_types.m"
    }
#line 206 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__2_2;
#line 206 "builtin_lib_types.m"
  }
#line 53 "builtin_lib_types.m"
}

#line 52 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__region_type_0_f_0(void)
#line 52 "builtin_lib_types.m"
{
#line 202 "builtin_lib_types.m"
  {
#line 202 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 202 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 202 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 202 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 203 "builtin_lib_types.m"
    {
#line 203 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    }
#line 204 "builtin_lib_types.m"
    {
#line 204 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 204 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "region"));
#line 204 "builtin_lib_types.m"
    }
#line 202 "builtin_lib_types.m"
    {
#line 202 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 202 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 202 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "builtin_lib_types.m"
    }
#line 202 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 202 "builtin_lib_types.m"
  }
#line 52 "builtin_lib_types.m"
}

#line 51 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0(void)
#line 51 "builtin_lib_types.m"
{
#line 198 "builtin_lib_types.m"
  {
#line 198 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 198 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 198 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 198 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 199 "builtin_lib_types.m"
    {
#line 199 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 200 "builtin_lib_types.m"
    {
#line 200 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 200 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 200 "builtin_lib_types.m"
    }
#line 198 "builtin_lib_types.m"
    {
#line 198 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 198 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "builtin_lib_types.m"
    }
#line 198 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 198 "builtin_lib_types.m"
  }
#line 51 "builtin_lib_types.m"
}

#line 50 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0(void)
#line 50 "builtin_lib_types.m"
{
#line 194 "builtin_lib_types.m"
  {
#line 194 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 194 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 194 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 194 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 195 "builtin_lib_types.m"
    {
#line 195 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 196 "builtin_lib_types.m"
    {
#line 196 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 196 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 196 "builtin_lib_types.m"
    }
#line 194 "builtin_lib_types.m"
    {
#line 194 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 194 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 194 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "builtin_lib_types.m"
    }
#line 194 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 194 "builtin_lib_types.m"
  }
#line 50 "builtin_lib_types.m"
}

#line 49 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0(void)
#line 49 "builtin_lib_types.m"
{
#line 190 "builtin_lib_types.m"
  {
#line 190 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 190 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 190 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 190 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 191 "builtin_lib_types.m"
    {
#line 191 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 192 "builtin_lib_types.m"
    {
#line 192 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 192 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 192 "builtin_lib_types.m"
    }
#line 190 "builtin_lib_types.m"
    {
#line 190 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 190 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 190 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "builtin_lib_types.m"
    }
#line 190 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 190 "builtin_lib_types.m"
  }
#line 49 "builtin_lib_types.m"
}

#line 48 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_state_type_0_f_0(void)
#line 48 "builtin_lib_types.m"
{
#line 186 "builtin_lib_types.m"
  {
#line 186 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 186 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 186 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 186 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 187 "builtin_lib_types.m"
    {
#line 187 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 188 "builtin_lib_types.m"
    {
#line 188 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 188 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
#line 188 "builtin_lib_types.m"
    }
#line 186 "builtin_lib_types.m"
    {
#line 186 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 186 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 186 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "builtin_lib_types.m"
    }
#line 186 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 186 "builtin_lib_types.m"
  }
#line 48 "builtin_lib_types.m"
}

#line 47 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_atomic_type_0_f_0(void)
#line 47 "builtin_lib_types.m"
{
#line 182 "builtin_lib_types.m"
  {
#line 182 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 182 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 182 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 182 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 183 "builtin_lib_types.m"
    {
#line 183 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[6]);
    }
#line 184 "builtin_lib_types.m"
    {
#line 184 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 184 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
#line 184 "builtin_lib_types.m"
    }
#line 182 "builtin_lib_types.m"
    {
#line 182 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 182 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 182 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "builtin_lib_types.m"
    }
#line 182 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 182 "builtin_lib_types.m"
  }
#line 47 "builtin_lib_types.m"
}

#line 46 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_1_f_0(
#line 46 "builtin_lib_types.m"
  MR_Word parse_tree__builtin_lib_types__SubType_3)
#line 46 "builtin_lib_types.m"
{
#line 178 "builtin_lib_types.m"
  {
#line 178 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 178 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
#line 178 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_4;
#line 178 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_5;
#line 178 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_6_6;

#line 178 "builtin_lib_types.m"
    {
#line 178 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__SubType_3));
#line 178 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "builtin_lib_types.m"
    }
#line 179 "builtin_lib_types.m"
    {
#line 179 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 180 "builtin_lib_types.m"
    {
#line 180 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
#line 180 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 180 "builtin_lib_types.m"
    }
#line 178 "builtin_lib_types.m"
    {
#line 178 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 178 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
#line 178 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__V_6_6));
#line 178 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "builtin_lib_types.m"
    }
#line 178 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__2_2;
#line 178 "builtin_lib_types.m"
  }
#line 46 "builtin_lib_types.m"
}

#line 45 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__univ_type_0_f_0(void)
#line 45 "builtin_lib_types.m"
{
#line 174 "builtin_lib_types.m"
  {
#line 174 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 174 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 174 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 174 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 175 "builtin_lib_types.m"
    {
#line 175 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    }
#line 176 "builtin_lib_types.m"
    {
#line 176 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 176 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "univ"));
#line 176 "builtin_lib_types.m"
    }
#line 174 "builtin_lib_types.m"
    {
#line 174 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 174 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 174 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "builtin_lib_types.m"
    }
#line 174 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 174 "builtin_lib_types.m"
  }
#line 45 "builtin_lib_types.m"
}

#line 44 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_io_type_0_f_0(void)
#line 44 "builtin_lib_types.m"
{
#line 170 "builtin_lib_types.m"
  {
#line 170 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 170 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 170 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 170 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 171 "builtin_lib_types.m"
    {
#line 171 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 172 "builtin_lib_types.m"
    {
#line 172 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 172 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "io"));
#line 172 "builtin_lib_types.m"
    }
#line 170 "builtin_lib_types.m"
    {
#line 170 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 170 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "builtin_lib_types.m"
    }
#line 170 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 170 "builtin_lib_types.m"
  }
#line 44 "builtin_lib_types.m"
}

#line 43 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_state_type_0_f_0(void)
#line 43 "builtin_lib_types.m"
{
#line 166 "builtin_lib_types.m"
  {
#line 166 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 166 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 166 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 166 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 167 "builtin_lib_types.m"
    {
#line 167 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 168 "builtin_lib_types.m"
    {
#line 168 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 168 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "state"));
#line 168 "builtin_lib_types.m"
    }
#line 166 "builtin_lib_types.m"
    {
#line 166 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 166 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 166 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "builtin_lib_types.m"
    }
#line 166 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 166 "builtin_lib_types.m"
  }
#line 43 "builtin_lib_types.m"
}

#line 42 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__comparison_result_type_0_f_0(void)
#line 42 "builtin_lib_types.m"
{
#line 162 "builtin_lib_types.m"
  {
#line 162 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 162 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 162 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 162 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 163 "builtin_lib_types.m"
    {
#line 163 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 164 "builtin_lib_types.m"
    {
#line 164 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 164 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 164 "builtin_lib_types.m"
    }
#line 162 "builtin_lib_types.m"
    {
#line 162 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 162 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 162 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "builtin_lib_types.m"
    }
#line 162 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 162 "builtin_lib_types.m"
  }
#line 42 "builtin_lib_types.m"
}

#line 41 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0(void)
#line 41 "builtin_lib_types.m"
{
#line 158 "builtin_lib_types.m"
  {
#line 158 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 158 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 158 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 158 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 159 "builtin_lib_types.m"
    {
#line 159 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 160 "builtin_lib_types.m"
    {
#line 160 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 160 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_desc"));
#line 160 "builtin_lib_types.m"
    }
#line 158 "builtin_lib_types.m"
    {
#line 158 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 158 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 158 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "builtin_lib_types.m"
    }
#line 158 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 158 "builtin_lib_types.m"
  }
#line 41 "builtin_lib_types.m"
}

#line 40 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0(void)
#line 40 "builtin_lib_types.m"
{
#line 154 "builtin_lib_types.m"
  {
#line 154 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 154 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 154 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 154 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 155 "builtin_lib_types.m"
    {
#line 155 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 156 "builtin_lib_types.m"
    {
#line 156 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 156 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "pseudo_type_desc"));
#line 156 "builtin_lib_types.m"
    }
#line 154 "builtin_lib_types.m"
    {
#line 154 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 154 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 154 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "builtin_lib_types.m"
    }
#line 154 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 154 "builtin_lib_types.m"
  }
#line 40 "builtin_lib_types.m"
}

#line 39 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_desc_type_0_f_0(void)
#line 39 "builtin_lib_types.m"
{
#line 150 "builtin_lib_types.m"
  {
#line 150 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 150 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 150 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 150 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 151 "builtin_lib_types.m"
    {
#line 151 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 152 "builtin_lib_types.m"
    {
#line 152 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 152 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_desc"));
#line 152 "builtin_lib_types.m"
    }
#line 150 "builtin_lib_types.m"
    {
#line 150 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 150 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 150 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "builtin_lib_types.m"
    }
#line 150 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 150 "builtin_lib_types.m"
  }
#line 39 "builtin_lib_types.m"
}

#line 38 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0(void)
#line 38 "builtin_lib_types.m"
{
#line 146 "builtin_lib_types.m"
  {
#line 146 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 146 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 146 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 146 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 147 "builtin_lib_types.m"
    {
#line 147 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 148 "builtin_lib_types.m"
    {
#line 148 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 148 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_info"));
#line 148 "builtin_lib_types.m"
    }
#line 146 "builtin_lib_types.m"
    {
#line 146 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 146 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 146 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "builtin_lib_types.m"
    }
#line 146 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 146 "builtin_lib_types.m"
  }
#line 38 "builtin_lib_types.m"
}

#line 37 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_info_type_0_f_0(void)
#line 37 "builtin_lib_types.m"
{
#line 142 "builtin_lib_types.m"
  {
#line 142 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 142 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 142 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 142 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 143 "builtin_lib_types.m"
    {
#line 143 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 144 "builtin_lib_types.m"
    {
#line 144 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 144 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 144 "builtin_lib_types.m"
    }
#line 142 "builtin_lib_types.m"
    {
#line 142 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 142 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "builtin_lib_types.m"
    }
#line 142 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 142 "builtin_lib_types.m"
  }
#line 37 "builtin_lib_types.m"
}

#line 36 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0(void)
#line 36 "builtin_lib_types.m"
{
#line 138 "builtin_lib_types.m"
  {
#line 138 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 138 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 138 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 138 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 139 "builtin_lib_types.m"
    {
#line 139 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 140 "builtin_lib_types.m"
    {
#line 140 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 140 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_typeclass_info"));
#line 140 "builtin_lib_types.m"
    }
#line 138 "builtin_lib_types.m"
    {
#line 138 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 138 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 138 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 138 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 138 "builtin_lib_types.m"
    }
#line 138 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 138 "builtin_lib_types.m"
  }
#line 36 "builtin_lib_types.m"
}

#line 35 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_type_info_type_0_f_0(void)
#line 35 "builtin_lib_types.m"
{
#line 134 "builtin_lib_types.m"
  {
#line 134 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 134 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 134 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 134 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 135 "builtin_lib_types.m"
    {
#line 135 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 136 "builtin_lib_types.m"
    {
#line 136 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 136 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_type_info"));
#line 136 "builtin_lib_types.m"
    }
#line 134 "builtin_lib_types.m"
    {
#line 134 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 134 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 134 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "builtin_lib_types.m"
    }
#line 134 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 134 "builtin_lib_types.m"
  }
#line 35 "builtin_lib_types.m"
}

#line 34 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_box_type_0_f_0(void)
#line 34 "builtin_lib_types.m"
{
#line 130 "builtin_lib_types.m"
  {
#line 130 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 130 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 130 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 130 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 131 "builtin_lib_types.m"
    {
#line 131 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 132 "builtin_lib_types.m"
    {
#line 132 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 132 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "float_box"));
#line 132 "builtin_lib_types.m"
    }
#line 130 "builtin_lib_types.m"
    {
#line 130 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 130 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 130 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "builtin_lib_types.m"
    }
#line 130 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 130 "builtin_lib_types.m"
  }
#line 34 "builtin_lib_types.m"
}

#line 33 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__heap_pointer_type_0_f_0(void)
#line 33 "builtin_lib_types.m"
{
#line 126 "builtin_lib_types.m"
  {
#line 126 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 126 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 126 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 126 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 127 "builtin_lib_types.m"
    {
#line 127 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 128 "builtin_lib_types.m"
    {
#line 128 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 128 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "heap_pointer"));
#line 128 "builtin_lib_types.m"
    }
#line 126 "builtin_lib_types.m"
    {
#line 126 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 126 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 126 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "builtin_lib_types.m"
    }
#line 126 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 126 "builtin_lib_types.m"
  }
#line 33 "builtin_lib_types.m"
}

#line 32 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__c_pointer_type_0_f_0(void)
#line 32 "builtin_lib_types.m"
{
#line 122 "builtin_lib_types.m"
  {
#line 122 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 122 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 122 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 122 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 123 "builtin_lib_types.m"
    {
#line 123 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 124 "builtin_lib_types.m"
    {
#line 124 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 124 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "c_pointer"));
#line 124 "builtin_lib_types.m"
    }
#line 122 "builtin_lib_types.m"
    {
#line 122 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 122 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 122 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "builtin_lib_types.m"
    }
#line 122 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 122 "builtin_lib_types.m"
  }
#line 32 "builtin_lib_types.m"
}

#line 31 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__void_type_0_f_0(void)
#line 31 "builtin_lib_types.m"
{
#line 120 "builtin_lib_types.m"
  {
#line 120 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 120 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_2[0]);
#line 120 "builtin_lib_types.m"
  }
#line 31 "builtin_lib_types.m"
}

#line 30 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_0_f_0(void)
#line 30 "builtin_lib_types.m"
{
#line 118 "builtin_lib_types.m"
  {
#line 118 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 118 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[4]);
#line 118 "builtin_lib_types.m"
  }
#line 30 "builtin_lib_types.m"
}

#line 29 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_0_f_0(void)
#line 29 "builtin_lib_types.m"
{
#line 116 "builtin_lib_types.m"
  {
#line 116 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 116 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[3]);
#line 116 "builtin_lib_types.m"
  }
#line 29 "builtin_lib_types.m"
}

#line 28 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_0_f_0(void)
#line 28 "builtin_lib_types.m"
{
#line 114 "builtin_lib_types.m"
  {
#line 114 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 114 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[2]);
#line 114 "builtin_lib_types.m"
  }
#line 28 "builtin_lib_types.m"
}

#line 27 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_0_f_0(void)
#line 27 "builtin_lib_types.m"
{
#line 112 "builtin_lib_types.m"
  {
#line 112 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 112 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[1]);
#line 112 "builtin_lib_types.m"
  }
#line 27 "builtin_lib_types.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.builtin_lib_types. */
