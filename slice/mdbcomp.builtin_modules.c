/*
** Automatically generated from `mdbcomp.builtin_modules.m'
** by the Mercury compiler,
** version rotd-2018-09-10
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


// :- module mdbcomp.builtin_modules.
// :- implementation.

/*
INIT mercury__mdbcomp__builtin_modules__init
ENDINIT
*/

#include "mdbcomp.builtin_modules.mih"


#include "mdbcomp.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"





static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_1[18][1];

static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_2[13][2];




static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_1[18][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "private_builtin"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "region_builtin"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "stm_builtin"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "table_builtin"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "table_statistics"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "profiling_builtin"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "term_size_prof_builtin"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "par_builtin"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "rtti_implementation"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "ssdb"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "exception"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "stream"))
  },
};

static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_2[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[14])),
    ((MR_Box) ((MR_String) "format"))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[14])),
    ((MR_Box) ((MR_String) "parse_util"))
  },
};



#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"



MR_bool MR_CALL 
mdbcomp__builtin_modules__is_mdbcomp_module_name_1_p_0(
  MR_Word ModuleName_2)
{
  {
    MR_bool succeeded;
    MR_String Name_3;

    Name_3 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_2);
    succeeded = mdbcomp__mercury_mdbcomp_module_1_p_0(Name_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(
  MR_Word ModuleName_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded;

    *Name_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
    succeeded = mercury__library__mercury_std_library_module_1_p_0(*Name_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(
  MR_Word Module_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[4]));
    if (!(succeeded))
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[6]));
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[7]));
        if (!(succeeded))
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[8]));
          if (!(succeeded))
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[10]));
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(
  MR_Word Module_2)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[0]));
    if (!(succeeded))
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[1]));
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[2]));
        if (!(succeeded))
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[4]));
          if (!(succeeded))
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[6]));
            if (!(succeeded))
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[7]));
              if (!(succeeded))
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[8]));
                if (!(succeeded))
                {
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_2, (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[10]));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word ModuleName_2 = ModuleName_3;

    return ModuleName_2;
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_stream_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[17]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_io_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[16]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_int_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[15]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[12]));
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_format_module_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[11]));
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[14]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_list_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[13]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[10]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_rtti_implementation_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[9]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[8]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[7]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[6]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[5]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[4]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_univ_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[12]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_exception_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[11]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[3]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[2]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[1]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0(void)
{
  {
    return (MR_Word) (&mdbcomp__builtin_modules_scalar_common_1[0]);
  }
}

MR_Word MR_CALL 
mdbcomp__builtin_modules__all_builtin_modules_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[10]));
  }
}

void mercury__mdbcomp__builtin_modules__init(void)
{
}

void mercury__mdbcomp__builtin_modules__init_type_tables(void)
{
}

void mercury__mdbcomp__builtin_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__builtin_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.builtin_modules.
