/*
** Automatically generated from `mdbcomp.builtin_modules.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module mdbcomp.builtin_modules. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__builtin_modules__init
ENDINIT
*/

#include "mdbcomp.builtin_modules.mih"


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
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "mdbcomp.sym_name.mih"





static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_1[17][1];

static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_2[13][2];




static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_1[17][1] = {
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
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "stream"))
  },
};

static /* final */ const MR_Box mdbcomp__builtin_modules_scalar_common_2[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__builtin_modules_scalar_common_1[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 145 "builtin_modules.m"
MR_bool MR_CALL 
mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(
#line 145 "builtin_modules.m"
  MR_Word mdbcomp__builtin_modules__Module_2)
#line 145 "builtin_modules.m"
{
#line 223 "builtin_modules.m"
  {
#line 223 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 223 "builtin_modules.m"
    {
#line 223 "builtin_modules.m"
      mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[4]);
    }
#line 223 "builtin_modules.m"
    if (!(mdbcomp__builtin_modules__succeeded))
#line 223 "builtin_modules.m"
      {
#line 224 "builtin_modules.m"
        {
#line 224 "builtin_modules.m"
          mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[6]);
        }
#line 223 "builtin_modules.m"
        if (!(mdbcomp__builtin_modules__succeeded))
#line 223 "builtin_modules.m"
          {
#line 225 "builtin_modules.m"
            {
#line 225 "builtin_modules.m"
              mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[7]);
            }
#line 223 "builtin_modules.m"
            if (!(mdbcomp__builtin_modules__succeeded))
#line 223 "builtin_modules.m"
              {
#line 226 "builtin_modules.m"
                {
#line 226 "builtin_modules.m"
                  mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[8]);
                }
#line 223 "builtin_modules.m"
                if (!(mdbcomp__builtin_modules__succeeded))
#line 227 "builtin_modules.m"
                  {
#line 227 "builtin_modules.m"
                    {
#line 227 "builtin_modules.m"
                      return mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[10]);
                    }
#line 227 "builtin_modules.m"
                  }
#line 223 "builtin_modules.m"
              }
#line 223 "builtin_modules.m"
          }
#line 223 "builtin_modules.m"
      }
#line 223 "builtin_modules.m"
    return mdbcomp__builtin_modules__succeeded;
#line 223 "builtin_modules.m"
  }
#line 145 "builtin_modules.m"
}

#line 141 "builtin_modules.m"
MR_bool MR_CALL 
mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(
#line 141 "builtin_modules.m"
  MR_Word mdbcomp__builtin_modules__Module_2)
#line 141 "builtin_modules.m"
{
#line 212 "builtin_modules.m"
  {
#line 212 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 212 "builtin_modules.m"
    {
#line 212 "builtin_modules.m"
      mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[0]);
    }
#line 212 "builtin_modules.m"
    if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
      {
#line 213 "builtin_modules.m"
        {
#line 213 "builtin_modules.m"
          mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[1]);
        }
#line 212 "builtin_modules.m"
        if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
          {
#line 214 "builtin_modules.m"
            {
#line 214 "builtin_modules.m"
              mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[2]);
            }
#line 212 "builtin_modules.m"
            if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
              {
#line 215 "builtin_modules.m"
                {
#line 215 "builtin_modules.m"
                  mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[4]);
                }
#line 212 "builtin_modules.m"
                if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
                  {
#line 216 "builtin_modules.m"
                    {
#line 216 "builtin_modules.m"
                      mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[6]);
                    }
#line 212 "builtin_modules.m"
                    if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
                      {
#line 217 "builtin_modules.m"
                        {
#line 217 "builtin_modules.m"
                          mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[7]);
                        }
#line 212 "builtin_modules.m"
                        if (!(mdbcomp__builtin_modules__succeeded))
#line 212 "builtin_modules.m"
                          {
#line 218 "builtin_modules.m"
                            {
#line 218 "builtin_modules.m"
                              mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[8]);
                            }
#line 212 "builtin_modules.m"
                            if (!(mdbcomp__builtin_modules__succeeded))
#line 219 "builtin_modules.m"
                              {
#line 219 "builtin_modules.m"
                                {
#line 219 "builtin_modules.m"
                                  return mdbcomp__builtin_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__builtin_modules__Module_2, (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[10]);
                                }
#line 219 "builtin_modules.m"
                              }
#line 212 "builtin_modules.m"
                          }
#line 212 "builtin_modules.m"
                      }
#line 212 "builtin_modules.m"
                  }
#line 212 "builtin_modules.m"
              }
#line 212 "builtin_modules.m"
          }
#line 212 "builtin_modules.m"
      }
#line 212 "builtin_modules.m"
    return mdbcomp__builtin_modules__succeeded;
#line 212 "builtin_modules.m"
  }
#line 141 "builtin_modules.m"
}

#line 136 "builtin_modules.m"
MR_bool MR_CALL 
mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(
#line 136 "builtin_modules.m"
  MR_Word mdbcomp__builtin_modules__ModuleName_3,
#line 136 "builtin_modules.m"
  MR_String * mdbcomp__builtin_modules__Name_4)
#line 136 "builtin_modules.m"
{
#line 201 "builtin_modules.m"
  {
#line 201 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 204 "builtin_modules.m"
    {
#line 204 "builtin_modules.m"
      *mdbcomp__builtin_modules__Name_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__builtin_modules__ModuleName_3);
    }
#line 205 "builtin_modules.m"
    {
#line 205 "builtin_modules.m"
      return mdbcomp__builtin_modules__succeeded = mercury__library__mercury_std_library_module_1_p_0(*mdbcomp__builtin_modules__Name_4);
    }
#line 201 "builtin_modules.m"
    return mdbcomp__builtin_modules__succeeded;
#line 201 "builtin_modules.m"
  }
#line 136 "builtin_modules.m"
}

#line 134 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(
#line 134 "builtin_modules.m"
  MR_Word mdbcomp__builtin_modules__ModuleName_3)
#line 134 "builtin_modules.m"
{
#line 207 "builtin_modules.m"
  {
#line 207 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;
#line 207 "builtin_modules.m"
    MR_Word mdbcomp__builtin_modules__ModuleName_2 = mdbcomp__builtin_modules__ModuleName_3;

#line 207 "builtin_modules.m"
    return mdbcomp__builtin_modules__ModuleName_2;
#line 207 "builtin_modules.m"
  }
#line 134 "builtin_modules.m"
}

#line 129 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_stream_module_0_f_0(void)
#line 129 "builtin_modules.m"
{
#line 199 "builtin_modules.m"
  {
#line 199 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 199 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[16];
#line 199 "builtin_modules.m"
  }
#line 129 "builtin_modules.m"
}

#line 125 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_io_module_0_f_0(void)
#line 125 "builtin_modules.m"
{
#line 198 "builtin_modules.m"
  {
#line 198 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 198 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[15];
#line 198 "builtin_modules.m"
  }
#line 125 "builtin_modules.m"
}

#line 121 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0(void)
#line 121 "builtin_modules.m"
{
#line 196 "builtin_modules.m"
  {
#line 196 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 196 "builtin_modules.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[12]);
#line 196 "builtin_modules.m"
  }
#line 121 "builtin_modules.m"
}

#line 117 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_format_module_0_f_0(void)
#line 117 "builtin_modules.m"
{
#line 195 "builtin_modules.m"
  {
#line 195 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 195 "builtin_modules.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[11]);
#line 195 "builtin_modules.m"
  }
#line 117 "builtin_modules.m"
}

#line 113 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_string_module_0_f_0(void)
#line 113 "builtin_modules.m"
{
#line 191 "builtin_modules.m"
  {
#line 191 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 191 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[14];
#line 191 "builtin_modules.m"
  }
#line 113 "builtin_modules.m"
}

#line 109 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_list_module_0_f_0(void)
#line 109 "builtin_modules.m"
{
#line 190 "builtin_modules.m"
  {
#line 190 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 190 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[13];
#line 190 "builtin_modules.m"
  }
#line 109 "builtin_modules.m"
}

#line 105 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0(void)
#line 105 "builtin_modules.m"
{
#line 189 "builtin_modules.m"
  {
#line 189 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 189 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[10];
#line 189 "builtin_modules.m"
  }
#line 105 "builtin_modules.m"
}

#line 100 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_rtti_implementation_builtin_module_0_f_0(void)
#line 100 "builtin_modules.m"
{
#line 187 "builtin_modules.m"
  {
#line 187 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 187 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[9];
#line 187 "builtin_modules.m"
  }
#line 100 "builtin_modules.m"
}

#line 95 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0(void)
#line 95 "builtin_modules.m"
{
#line 186 "builtin_modules.m"
  {
#line 186 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 186 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[8];
#line 186 "builtin_modules.m"
  }
#line 95 "builtin_modules.m"
}

#line 90 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0(void)
#line 90 "builtin_modules.m"
{
#line 185 "builtin_modules.m"
  {
#line 185 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 185 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[7];
#line 185 "builtin_modules.m"
  }
#line 90 "builtin_modules.m"
}

#line 84 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0(void)
#line 84 "builtin_modules.m"
{
#line 184 "builtin_modules.m"
  {
#line 184 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 184 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[6];
#line 184 "builtin_modules.m"
  }
#line 84 "builtin_modules.m"
}

#line 78 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0(void)
#line 78 "builtin_modules.m"
{
#line 183 "builtin_modules.m"
  {
#line 183 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 183 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[5];
#line 183 "builtin_modules.m"
  }
#line 78 "builtin_modules.m"
}

#line 70 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0(void)
#line 70 "builtin_modules.m"
{
#line 182 "builtin_modules.m"
  {
#line 182 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 182 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[4];
#line 182 "builtin_modules.m"
  }
#line 70 "builtin_modules.m"
}

#line 63 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_univ_module_0_f_0(void)
#line 63 "builtin_modules.m"
{
#line 181 "builtin_modules.m"
  {
#line 181 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 181 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[12];
#line 181 "builtin_modules.m"
  }
#line 63 "builtin_modules.m"
}

#line 58 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_exception_module_0_f_0(void)
#line 58 "builtin_modules.m"
{
#line 179 "builtin_modules.m"
  {
#line 179 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 179 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[11];
#line 179 "builtin_modules.m"
  }
#line 58 "builtin_modules.m"
}

#line 53 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0(void)
#line 53 "builtin_modules.m"
{
#line 177 "builtin_modules.m"
  {
#line 177 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 177 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[3];
#line 177 "builtin_modules.m"
  }
#line 53 "builtin_modules.m"
}

#line 47 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0(void)
#line 47 "builtin_modules.m"
{
#line 176 "builtin_modules.m"
  {
#line 176 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 176 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[2];
#line 176 "builtin_modules.m"
  }
#line 47 "builtin_modules.m"
}

#line 41 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0(void)
#line 41 "builtin_modules.m"
{
#line 175 "builtin_modules.m"
  {
#line 175 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 175 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[1];
#line 175 "builtin_modules.m"
  }
#line 41 "builtin_modules.m"
}

#line 33 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0(void)
#line 33 "builtin_modules.m"
{
#line 174 "builtin_modules.m"
  {
#line 174 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 174 "builtin_modules.m"
    return (MR_Word) &mdbcomp__builtin_modules_scalar_common_1[0];
#line 174 "builtin_modules.m"
  }
#line 33 "builtin_modules.m"
}

#line 26 "builtin_modules.m"
MR_Word MR_CALL 
mdbcomp__builtin_modules__all_builtin_modules_0_f_0(void)
#line 26 "builtin_modules.m"
{
#line 156 "builtin_modules.m"
  {
#line 156 "builtin_modules.m"
    MR_bool mdbcomp__builtin_modules__succeeded;

#line 156 "builtin_modules.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__builtin_modules_scalar_common_2[10]);
#line 156 "builtin_modules.m"
  }
#line 26 "builtin_modules.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.builtin_modules. */
