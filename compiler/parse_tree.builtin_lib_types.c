/*
** Automatically generated from `builtin_lib_types.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 98 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0(void)
#line 98 "builtin_lib_types.m"
{
#line 265 "builtin_lib_types.m"
  {
#line 265 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 265 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 266 "builtin_lib_types.m"
    {
#line 266 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 266 "builtin_lib_types.m"
    {
#line 266 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 266 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 266 "builtin_lib_types.m"
    }
#line 236 "builtin_lib_types.m"
    {
#line 236 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 236 "builtin_lib_types.m"
    {
#line 236 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 236 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 236 "builtin_lib_types.m"
    }
#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 235 "builtin_lib_types.m"
    }
#line 265 "builtin_lib_types.m"
    {
#line 265 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 265 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 265 "builtin_lib_types.m"
    }
#line 265 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 265 "builtin_lib_types.m"
  }
#line 98 "builtin_lib_types.m"
}

#line 94 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0(void)
#line 94 "builtin_lib_types.m"
{
#line 261 "builtin_lib_types.m"
  {
#line 261 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 261 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 262 "builtin_lib_types.m"
    {
#line 262 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 262 "builtin_lib_types.m"
    {
#line 262 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 262 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_retry"));
#line 262 "builtin_lib_types.m"
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 234 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 233 "builtin_lib_types.m"
    }
#line 261 "builtin_lib_types.m"
    {
#line 261 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 261 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 261 "builtin_lib_types.m"
    }
#line 261 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 261 "builtin_lib_types.m"
  }
#line 94 "builtin_lib_types.m"
}

#line 93 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0(void)
#line 93 "builtin_lib_types.m"
{
#line 257 "builtin_lib_types.m"
  {
#line 257 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 257 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 258 "builtin_lib_types.m"
    {
#line 258 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 258 "builtin_lib_types.m"
    {
#line 258 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 258 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_invalid_transaction"));
#line 258 "builtin_lib_types.m"
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 234 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 233 "builtin_lib_types.m"
    }
#line 257 "builtin_lib_types.m"
    {
#line 257 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 257 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 257 "builtin_lib_types.m"
    }
#line 257 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 257 "builtin_lib_types.m"
  }
#line 93 "builtin_lib_types.m"
}

#line 89 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0(void)
#line 89 "builtin_lib_types.m"
{
#line 253 "builtin_lib_types.m"
  {
#line 253 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 253 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 254 "builtin_lib_types.m"
    {
#line 254 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 254 "builtin_lib_types.m"
    {
#line 254 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 254 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_invalid"));
#line 254 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 232 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 231 "builtin_lib_types.m"
    }
#line 253 "builtin_lib_types.m"
    {
#line 253 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 253 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 253 "builtin_lib_types.m"
    }
#line 253 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 253 "builtin_lib_types.m"
  }
#line 89 "builtin_lib_types.m"
}

#line 88 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0(void)
#line 88 "builtin_lib_types.m"
{
#line 250 "builtin_lib_types.m"
  {
#line 250 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 250 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 251 "builtin_lib_types.m"
    {
#line 251 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 251 "builtin_lib_types.m"
    {
#line 251 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 251 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_transaction_valid"));
#line 251 "builtin_lib_types.m"
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 232 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
#line 231 "builtin_lib_types.m"
    }
#line 250 "builtin_lib_types.m"
    {
#line 250 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 250 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 250 "builtin_lib_types.m"
    }
#line 250 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 250 "builtin_lib_types.m"
  }
#line 88 "builtin_lib_types.m"
}

#line 84 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_exception_functor_0_f_0(void)
#line 84 "builtin_lib_types.m"
{
#line 246 "builtin_lib_types.m"
  {
#line 246 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 246 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 247 "builtin_lib_types.m"
    {
#line 247 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 247 "builtin_lib_types.m"
    {
#line 247 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 247 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception"));
#line 247 "builtin_lib_types.m"
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 229 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 228 "builtin_lib_types.m"
    }
#line 246 "builtin_lib_types.m"
    {
#line 246 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
#line 246 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 246 "builtin_lib_types.m"
    }
#line 246 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 246 "builtin_lib_types.m"
  }
#line 84 "builtin_lib_types.m"
}

#line 83 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_failed_functor_0_f_0(void)
#line 83 "builtin_lib_types.m"
{
#line 243 "builtin_lib_types.m"
  {
#line 243 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 243 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 244 "builtin_lib_types.m"
    {
#line 244 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 244 "builtin_lib_types.m"
    {
#line 244 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 244 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "failed"));
#line 244 "builtin_lib_types.m"
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 229 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 228 "builtin_lib_types.m"
    }
#line 243 "builtin_lib_types.m"
    {
#line 243 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 243 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 243 "builtin_lib_types.m"
    }
#line 243 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 243 "builtin_lib_types.m"
  }
#line 83 "builtin_lib_types.m"
}

#line 82 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0(void)
#line 82 "builtin_lib_types.m"
{
#line 240 "builtin_lib_types.m"
  {
#line 240 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__TypeCtor_3;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_5_5;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_7;
#line 240 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_9_9;

#line 241 "builtin_lib_types.m"
    {
#line 241 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 241 "builtin_lib_types.m"
    {
#line 241 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_5_5));
#line 241 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "succeeded"));
#line 241 "builtin_lib_types.m"
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_9_9 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_9_9));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_7, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 229 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_7));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 1));
#line 228 "builtin_lib_types.m"
    }
#line 240 "builtin_lib_types.m"
    {
#line 240 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 1));
#line 240 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(3), parse_tree__builtin_lib_types__HeadVar__1_1, 3) = ((MR_Box) (parse_tree__builtin_lib_types__TypeCtor_3));
#line 240 "builtin_lib_types.m"
    }
#line 240 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 240 "builtin_lib_types.m"
  }
#line 82 "builtin_lib_types.m"
}

#line 73 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_ctor_0_f_0(void)
#line 73 "builtin_lib_types.m"
{
#line 235 "builtin_lib_types.m"
  {
#line 235 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 235 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 235 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 235 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 236 "builtin_lib_types.m"
    {
#line 236 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 236 "builtin_lib_types.m"
    {
#line 236 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 236 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 236 "builtin_lib_types.m"
    }
#line 235 "builtin_lib_types.m"
    {
#line 235 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 235 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 235 "builtin_lib_types.m"
    }
#line 235 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 235 "builtin_lib_types.m"
  }
#line 73 "builtin_lib_types.m"
}

#line 72 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_ctor_0_f_0(void)
#line 72 "builtin_lib_types.m"
{
#line 233 "builtin_lib_types.m"
  {
#line 233 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 233 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 233 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 233 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 234 "builtin_lib_types.m"
    {
#line 234 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 234 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 234 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    {
#line 233 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 233 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 233 "builtin_lib_types.m"
    }
#line 233 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 233 "builtin_lib_types.m"
  }
#line 72 "builtin_lib_types.m"
}

#line 71 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_ctor_0_f_0(void)
#line 71 "builtin_lib_types.m"
{
#line 231 "builtin_lib_types.m"
  {
#line 231 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 231 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 231 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 231 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 232 "builtin_lib_types.m"
    {
#line 232 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 232 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 232 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    {
#line 231 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 231 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 231 "builtin_lib_types.m"
    }
#line 231 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 231 "builtin_lib_types.m"
  }
#line 71 "builtin_lib_types.m"
}

#line 69 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__exception_result_type_ctor_0_f_0(void)
#line 69 "builtin_lib_types.m"
{
#line 228 "builtin_lib_types.m"
  {
#line 228 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 228 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 228 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 228 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 229 "builtin_lib_types.m"
    {
#line 229 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 229 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 229 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    {
#line 228 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 228 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
#line 228 "builtin_lib_types.m"
    }
#line 228 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 228 "builtin_lib_types.m"
  }
#line 69 "builtin_lib_types.m"
}

#line 67 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__list_type_ctor_0_f_0(void)
#line 67 "builtin_lib_types.m"
{
#line 225 "builtin_lib_types.m"
  {
#line 225 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 225 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 225 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 225 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 226 "builtin_lib_types.m"
    {
#line 226 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    }
#line 226 "builtin_lib_types.m"
    {
#line 226 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 226 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "list"));
#line 226 "builtin_lib_types.m"
    }
#line 225 "builtin_lib_types.m"
    {
#line 225 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 225 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 1));
#line 225 "builtin_lib_types.m"
    }
#line 225 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 225 "builtin_lib_types.m"
  }
#line 67 "builtin_lib_types.m"
}

#line 65 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0(void)
#line 65 "builtin_lib_types.m"
{
#line 222 "builtin_lib_types.m"
  {
#line 222 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 222 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 222 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 222 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_4_4;

#line 223 "builtin_lib_types.m"
    {
#line 223 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_4_4 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    }
#line 223 "builtin_lib_types.m"
    {
#line 223 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__V_4_4));
#line 223 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "poly_type"));
#line 223 "builtin_lib_types.m"
    }
#line 222 "builtin_lib_types.m"
    {
#line 222 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 222 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(0), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) ((MR_Integer) 0));
#line 222 "builtin_lib_types.m"
    }
#line 222 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 222 "builtin_lib_types.m"
  }
#line 65 "builtin_lib_types.m"
}

#line 63 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_ctor_0_f_0(void)
#line 63 "builtin_lib_types.m"
{
#line 219 "builtin_lib_types.m"
  {
#line 219 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 219 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[3];
#line 219 "builtin_lib_types.m"
  }
#line 63 "builtin_lib_types.m"
}

#line 62 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_ctor_0_f_0(void)
#line 62 "builtin_lib_types.m"
{
#line 217 "builtin_lib_types.m"
  {
#line 217 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 217 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[2];
#line 217 "builtin_lib_types.m"
  }
#line 62 "builtin_lib_types.m"
}

#line 61 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_ctor_0_f_0(void)
#line 61 "builtin_lib_types.m"
{
#line 215 "builtin_lib_types.m"
  {
#line 215 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 215 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[1];
#line 215 "builtin_lib_types.m"
  }
#line 61 "builtin_lib_types.m"
}

#line 60 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_ctor_0_f_0(void)
#line 60 "builtin_lib_types.m"
{
#line 213 "builtin_lib_types.m"
  {
#line 213 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 213 "builtin_lib_types.m"
    return (MR_Word) &parse_tree__builtin_lib_types_scalar_common_3[0];
#line 213 "builtin_lib_types.m"
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
#line 207 "builtin_lib_types.m"
  {
#line 207 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 207 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
#line 207 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_4;
#line 207 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_5;
#line 207 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_6_6;

#line 207 "builtin_lib_types.m"
    {
#line 207 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__ValueType_3));
#line 207 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "builtin_lib_types.m"
    }
#line 208 "builtin_lib_types.m"
    {
#line 208 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    }
#line 209 "builtin_lib_types.m"
    {
#line 209 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
#line 209 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "future"));
#line 209 "builtin_lib_types.m"
    }
#line 207 "builtin_lib_types.m"
    {
#line 207 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 207 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
#line 207 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__V_6_6));
#line 207 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "builtin_lib_types.m"
    }
#line 207 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__2_2;
#line 207 "builtin_lib_types.m"
  }
#line 53 "builtin_lib_types.m"
}

#line 52 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__region_type_0_f_0(void)
#line 52 "builtin_lib_types.m"
{
#line 203 "builtin_lib_types.m"
  {
#line 203 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 203 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 203 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 203 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 204 "builtin_lib_types.m"
    {
#line 204 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
    }
#line 205 "builtin_lib_types.m"
    {
#line 205 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 205 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "region"));
#line 205 "builtin_lib_types.m"
    }
#line 203 "builtin_lib_types.m"
    {
#line 203 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 203 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "builtin_lib_types.m"
    }
#line 203 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 203 "builtin_lib_types.m"
  }
#line 52 "builtin_lib_types.m"
}

#line 51 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0(void)
#line 51 "builtin_lib_types.m"
{
#line 199 "builtin_lib_types.m"
  {
#line 199 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 199 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 199 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 199 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 200 "builtin_lib_types.m"
    {
#line 200 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 201 "builtin_lib_types.m"
    {
#line 201 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 201 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_dummy_output"));
#line 201 "builtin_lib_types.m"
    }
#line 199 "builtin_lib_types.m"
    {
#line 199 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 199 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 199 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "builtin_lib_types.m"
    }
#line 199 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 199 "builtin_lib_types.m"
  }
#line 51 "builtin_lib_types.m"
}

#line 50 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0(void)
#line 50 "builtin_lib_types.m"
{
#line 195 "builtin_lib_types.m"
  {
#line 195 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 195 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 195 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 195 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 196 "builtin_lib_types.m"
    {
#line 196 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 197 "builtin_lib_types.m"
    {
#line 197 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 197 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "rollback_exception"));
#line 197 "builtin_lib_types.m"
    }
#line 195 "builtin_lib_types.m"
    {
#line 195 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 195 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "builtin_lib_types.m"
    }
#line 195 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 195 "builtin_lib_types.m"
  }
#line 50 "builtin_lib_types.m"
}

#line 49 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0(void)
#line 49 "builtin_lib_types.m"
{
#line 191 "builtin_lib_types.m"
  {
#line 191 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 191 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 191 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 191 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 192 "builtin_lib_types.m"
    {
#line 192 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 193 "builtin_lib_types.m"
    {
#line 193 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 193 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm_validation_result"));
#line 193 "builtin_lib_types.m"
    }
#line 191 "builtin_lib_types.m"
    {
#line 191 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 191 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "builtin_lib_types.m"
    }
#line 191 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 191 "builtin_lib_types.m"
  }
#line 49 "builtin_lib_types.m"
}

#line 48 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_state_type_0_f_0(void)
#line 48 "builtin_lib_types.m"
{
#line 187 "builtin_lib_types.m"
  {
#line 187 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 187 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 187 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 187 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 188 "builtin_lib_types.m"
    {
#line 188 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 189 "builtin_lib_types.m"
    {
#line 189 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 189 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
#line 189 "builtin_lib_types.m"
    }
#line 187 "builtin_lib_types.m"
    {
#line 187 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 187 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "builtin_lib_types.m"
    }
#line 187 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 187 "builtin_lib_types.m"
  }
#line 48 "builtin_lib_types.m"
}

#line 47 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__stm_atomic_type_0_f_0(void)
#line 47 "builtin_lib_types.m"
{
#line 183 "builtin_lib_types.m"
  {
#line 183 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 183 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 183 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 183 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 184 "builtin_lib_types.m"
    {
#line 184 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[6]);
    }
#line 185 "builtin_lib_types.m"
    {
#line 185 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 185 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "stm"));
#line 185 "builtin_lib_types.m"
    }
#line 183 "builtin_lib_types.m"
    {
#line 183 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 183 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "builtin_lib_types.m"
    }
#line 183 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 183 "builtin_lib_types.m"
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
#line 179 "builtin_lib_types.m"
  {
#line 179 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 179 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__2_2;
#line 179 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_4;
#line 179 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_5;
#line 179 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__V_6_6;

#line 179 "builtin_lib_types.m"
    {
#line 179 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 0) = ((MR_Box) (parse_tree__builtin_lib_types__SubType_3));
#line 179 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "builtin_lib_types.m"
    }
#line 180 "builtin_lib_types.m"
    {
#line 180 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 181 "builtin_lib_types.m"
    {
#line 181 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_5));
#line 181 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_4, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 181 "builtin_lib_types.m"
    }
#line 179 "builtin_lib_types.m"
    {
#line 179 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 179 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_4));
#line 179 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__builtin_lib_types__V_6_6));
#line 179 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "builtin_lib_types.m"
    }
#line 179 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__2_2;
#line 179 "builtin_lib_types.m"
  }
#line 46 "builtin_lib_types.m"
}

#line 45 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__univ_type_0_f_0(void)
#line 45 "builtin_lib_types.m"
{
#line 175 "builtin_lib_types.m"
  {
#line 175 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 175 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 175 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 175 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 176 "builtin_lib_types.m"
    {
#line 176 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    }
#line 177 "builtin_lib_types.m"
    {
#line 177 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 177 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "univ"));
#line 177 "builtin_lib_types.m"
    }
#line 175 "builtin_lib_types.m"
    {
#line 175 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 175 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "builtin_lib_types.m"
    }
#line 175 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 175 "builtin_lib_types.m"
  }
#line 45 "builtin_lib_types.m"
}

#line 44 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_io_type_0_f_0(void)
#line 44 "builtin_lib_types.m"
{
#line 171 "builtin_lib_types.m"
  {
#line 171 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 171 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 171 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 171 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 172 "builtin_lib_types.m"
    {
#line 172 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 173 "builtin_lib_types.m"
    {
#line 173 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 173 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "io"));
#line 173 "builtin_lib_types.m"
    }
#line 171 "builtin_lib_types.m"
    {
#line 171 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 171 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "builtin_lib_types.m"
    }
#line 171 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 171 "builtin_lib_types.m"
  }
#line 44 "builtin_lib_types.m"
}

#line 43 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__io_state_type_0_f_0(void)
#line 43 "builtin_lib_types.m"
{
#line 167 "builtin_lib_types.m"
  {
#line 167 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 167 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 167 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 167 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 168 "builtin_lib_types.m"
    {
#line 168 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 169 "builtin_lib_types.m"
    {
#line 169 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 169 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "state"));
#line 169 "builtin_lib_types.m"
    }
#line 167 "builtin_lib_types.m"
    {
#line 167 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 167 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "builtin_lib_types.m"
    }
#line 167 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 167 "builtin_lib_types.m"
  }
#line 43 "builtin_lib_types.m"
}

#line 42 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__comparison_result_type_0_f_0(void)
#line 42 "builtin_lib_types.m"
{
#line 163 "builtin_lib_types.m"
  {
#line 163 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 163 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 163 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 163 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 164 "builtin_lib_types.m"
    {
#line 164 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 165 "builtin_lib_types.m"
    {
#line 165 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 165 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 165 "builtin_lib_types.m"
    }
#line 163 "builtin_lib_types.m"
    {
#line 163 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 163 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 163 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "builtin_lib_types.m"
    }
#line 163 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 163 "builtin_lib_types.m"
  }
#line 42 "builtin_lib_types.m"
}

#line 41 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0(void)
#line 41 "builtin_lib_types.m"
{
#line 159 "builtin_lib_types.m"
  {
#line 159 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 159 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 159 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 159 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 160 "builtin_lib_types.m"
    {
#line 160 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 161 "builtin_lib_types.m"
    {
#line 161 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 161 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_desc"));
#line 161 "builtin_lib_types.m"
    }
#line 159 "builtin_lib_types.m"
    {
#line 159 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 159 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 159 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "builtin_lib_types.m"
    }
#line 159 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 159 "builtin_lib_types.m"
  }
#line 41 "builtin_lib_types.m"
}

#line 40 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0(void)
#line 40 "builtin_lib_types.m"
{
#line 155 "builtin_lib_types.m"
  {
#line 155 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 155 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 155 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 155 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 156 "builtin_lib_types.m"
    {
#line 156 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 157 "builtin_lib_types.m"
    {
#line 157 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 157 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "pseudo_type_desc"));
#line 157 "builtin_lib_types.m"
    }
#line 155 "builtin_lib_types.m"
    {
#line 155 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 155 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 155 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "builtin_lib_types.m"
    }
#line 155 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 155 "builtin_lib_types.m"
  }
#line 40 "builtin_lib_types.m"
}

#line 39 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_desc_type_0_f_0(void)
#line 39 "builtin_lib_types.m"
{
#line 151 "builtin_lib_types.m"
  {
#line 151 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 151 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 151 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 151 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Module_3;

#line 152 "builtin_lib_types.m"
    {
#line 152 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Module_3 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &parse_tree__builtin_lib_types_scalar_common_1[5]);
    }
#line 153 "builtin_lib_types.m"
    {
#line 153 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Module_3));
#line 153 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_desc"));
#line 153 "builtin_lib_types.m"
    }
#line 151 "builtin_lib_types.m"
    {
#line 151 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 151 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 151 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "builtin_lib_types.m"
    }
#line 151 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 151 "builtin_lib_types.m"
  }
#line 39 "builtin_lib_types.m"
}

#line 38 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0(void)
#line 38 "builtin_lib_types.m"
{
#line 147 "builtin_lib_types.m"
  {
#line 147 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 147 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 147 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 147 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 148 "builtin_lib_types.m"
    {
#line 148 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 149 "builtin_lib_types.m"
    {
#line 149 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 149 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_ctor_info"));
#line 149 "builtin_lib_types.m"
    }
#line 147 "builtin_lib_types.m"
    {
#line 147 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 147 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 147 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "builtin_lib_types.m"
    }
#line 147 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 147 "builtin_lib_types.m"
  }
#line 38 "builtin_lib_types.m"
}

#line 37 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__type_info_type_0_f_0(void)
#line 37 "builtin_lib_types.m"
{
#line 143 "builtin_lib_types.m"
  {
#line 143 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 143 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 143 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 143 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 144 "builtin_lib_types.m"
    {
#line 144 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 145 "builtin_lib_types.m"
    {
#line 145 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 145 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "type_info"));
#line 145 "builtin_lib_types.m"
    }
#line 143 "builtin_lib_types.m"
    {
#line 143 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 143 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 143 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "builtin_lib_types.m"
    }
#line 143 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 143 "builtin_lib_types.m"
  }
#line 37 "builtin_lib_types.m"
}

#line 36 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0(void)
#line 36 "builtin_lib_types.m"
{
#line 139 "builtin_lib_types.m"
  {
#line 139 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 139 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 139 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 139 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 140 "builtin_lib_types.m"
    {
#line 140 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 141 "builtin_lib_types.m"
    {
#line 141 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 141 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_typeclass_info"));
#line 141 "builtin_lib_types.m"
    }
#line 139 "builtin_lib_types.m"
    {
#line 139 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 139 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 139 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "builtin_lib_types.m"
    }
#line 139 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 139 "builtin_lib_types.m"
  }
#line 36 "builtin_lib_types.m"
}

#line 35 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__sample_type_info_type_0_f_0(void)
#line 35 "builtin_lib_types.m"
{
#line 135 "builtin_lib_types.m"
  {
#line 135 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 135 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 135 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 135 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 136 "builtin_lib_types.m"
    {
#line 136 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 137 "builtin_lib_types.m"
    {
#line 137 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 137 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "sample_type_info"));
#line 137 "builtin_lib_types.m"
    }
#line 135 "builtin_lib_types.m"
    {
#line 135 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 135 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 135 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "builtin_lib_types.m"
    }
#line 135 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 135 "builtin_lib_types.m"
  }
#line 35 "builtin_lib_types.m"
}

#line 34 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_box_type_0_f_0(void)
#line 34 "builtin_lib_types.m"
{
#line 131 "builtin_lib_types.m"
  {
#line 131 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 131 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 131 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 131 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 132 "builtin_lib_types.m"
    {
#line 132 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 133 "builtin_lib_types.m"
    {
#line 133 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 133 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "float_box"));
#line 133 "builtin_lib_types.m"
    }
#line 131 "builtin_lib_types.m"
    {
#line 131 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 131 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 131 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "builtin_lib_types.m"
    }
#line 131 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 131 "builtin_lib_types.m"
  }
#line 34 "builtin_lib_types.m"
}

#line 33 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__heap_pointer_type_0_f_0(void)
#line 33 "builtin_lib_types.m"
{
#line 127 "builtin_lib_types.m"
  {
#line 127 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 127 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 127 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 127 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 128 "builtin_lib_types.m"
    {
#line 128 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 129 "builtin_lib_types.m"
    {
#line 129 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 129 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "heap_pointer"));
#line 129 "builtin_lib_types.m"
    }
#line 127 "builtin_lib_types.m"
    {
#line 127 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 127 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 127 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "builtin_lib_types.m"
    }
#line 127 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 127 "builtin_lib_types.m"
  }
#line 33 "builtin_lib_types.m"
}

#line 32 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__c_pointer_type_0_f_0(void)
#line 32 "builtin_lib_types.m"
{
#line 123 "builtin_lib_types.m"
  {
#line 123 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;
#line 123 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__HeadVar__1_1;
#line 123 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__Name_2;
#line 123 "builtin_lib_types.m"
    MR_Word parse_tree__builtin_lib_types__BuiltinModule_3;

#line 124 "builtin_lib_types.m"
    {
#line 124 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__BuiltinModule_3 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 125 "builtin_lib_types.m"
    {
#line 125 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__Name_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 0) = ((MR_Box) (parse_tree__builtin_lib_types__BuiltinModule_3));
#line 125 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__Name_2, 1) = ((MR_Box) ((MR_String) "c_pointer"));
#line 125 "builtin_lib_types.m"
    }
#line 123 "builtin_lib_types.m"
    {
#line 123 "builtin_lib_types.m"
      parse_tree__builtin_lib_types__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 123 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 0) = ((MR_Box) (parse_tree__builtin_lib_types__Name_2));
#line 123 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "builtin_lib_types.m"
      MR_hl_field(MR_mktag(1), parse_tree__builtin_lib_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "builtin_lib_types.m"
    }
#line 123 "builtin_lib_types.m"
    return parse_tree__builtin_lib_types__HeadVar__1_1;
#line 123 "builtin_lib_types.m"
  }
#line 32 "builtin_lib_types.m"
}

#line 31 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__void_type_0_f_0(void)
#line 31 "builtin_lib_types.m"
{
#line 121 "builtin_lib_types.m"
  {
#line 121 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 121 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__builtin_lib_types_scalar_common_2[0]);
#line 121 "builtin_lib_types.m"
  }
#line 31 "builtin_lib_types.m"
}

#line 30 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__char_type_0_f_0(void)
#line 30 "builtin_lib_types.m"
{
#line 119 "builtin_lib_types.m"
  {
#line 119 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 119 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[4]);
#line 119 "builtin_lib_types.m"
  }
#line 30 "builtin_lib_types.m"
}

#line 29 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__string_type_0_f_0(void)
#line 29 "builtin_lib_types.m"
{
#line 117 "builtin_lib_types.m"
  {
#line 117 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 117 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[3]);
#line 117 "builtin_lib_types.m"
  }
#line 29 "builtin_lib_types.m"
}

#line 28 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__float_type_0_f_0(void)
#line 28 "builtin_lib_types.m"
{
#line 115 "builtin_lib_types.m"
  {
#line 115 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 115 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[2]);
#line 115 "builtin_lib_types.m"
  }
#line 28 "builtin_lib_types.m"
}

#line 27 "builtin_lib_types.m"
MR_Word MR_CALL 
parse_tree__builtin_lib_types__int_type_0_f_0(void)
#line 27 "builtin_lib_types.m"
{
#line 113 "builtin_lib_types.m"
  {
#line 113 "builtin_lib_types.m"
    MR_bool parse_tree__builtin_lib_types__succeeded;

#line 113 "builtin_lib_types.m"
    return (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__builtin_lib_types_scalar_common_1[1]);
#line 113 "builtin_lib_types.m"
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
