/*
** Automatically generated from `mercury_profile.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module mercury_profile. */
/* :- implementation. */

/*
INIT mercury__mercury_profile__init
ENDINIT
*/

#include "mercury_profile.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "call_graph.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "generate_output.mih"
#include "getopt.mih"
#include "globals.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "output.mih"
#include "output_prof_info.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "process_file.mih"
#include "prof_info.mih"
#include "propagate.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "snapshots.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"



#line 53 "mercury_profile.m"
struct mercury_profile__main_2_p_0_4_env_0_s {
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1;
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2;
#line 53 "mercury_profile.m"
  MR_Cont mercury_profile__main_2_p_0_4_env_0__cont;
#line 53 "mercury_profile.m"
  void * mercury_profile__main_2_p_0_4_env_0__cont_env_ptr;
#line 53 "mercury_profile.m"
  MR_Word mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 53 "mercury_profile.m"
  MR_Word mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 53 "mercury_profile.m"
};


#line 93 "mercury_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

#line 96 "mercury_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0;

#line 148 "mercury_profile.m"
static void MR_CALL 
mercury_profile__main_2_3_p_0(
#line 148 "mercury_profile.m"
  MR_Word mercury_profile__Args_4);

#line 117 "mercury_profile.m"
static void MR_CALL 
mercury_profile__long_usage_2_p_0(void);

#line 92 "mercury_profile.m"
static void MR_CALL 
mercury_profile__usage_error_3_p_0(
#line 92 "mercury_profile.m"
  MR_String mercury_profile__ErrorMessage_4);

#line 54 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_5(
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_2,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_3,
#line 54 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_4);

#line 53 "mercury_profile.m"
static void MR_CALL 
main_2_p_0_3(
#line 53 "mercury_profile.m"
  void * mercury_profile__env_ptr_arg);

#line 53 "mercury_profile.m"
static void MR_CALL 
main_2_p_0_4(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2,
#line 53 "mercury_profile.m"
  MR_Cont mercury_profile__cont,
#line 53 "mercury_profile.m"
  void * mercury_profile__cont_env_ptr);

#line 53 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2);

#line 53 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2);


static /* final */ const MR_Box mercury_profile_scalar_common_1[19][2];

static /* final */ const MR_Box mercury_profile_scalar_common_2[3][5];

static /* final */ const MR_Box mercury_profile_scalar_common_3[4][3];

static /* final */ const MR_Box mercury_profile_scalar_common_4[1][7];

static /* final */ const MR_Box mercury_profile_scalar_common_5[1][4];

static /* final */ const MR_Box mercury_profile_scalar_common_6[1][1];




static /* final */ const MR_Box mercury_profile_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Options:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\tprogram\'s static call graph.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\tgenerated automatically by the Mercury compiler, contain the\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\tfor every module in the program.  The \140.prof\' files, which are\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\tOtherwise, the <files> specified should be the \140.prof\' file\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\tis implied: the call graph will be built dynamically.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tIf no <files> are specified, then the \140--use-dynamic\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "Arguments:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\texecution.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\t(call graph based) profile based on data collected during program\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\tIt outputs a flat profile and optionally also a hierarchical\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\t\140mprof\' produces execution profiles for Mercury programs.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "Description:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "[<options>] [<files>]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) " --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&options__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&options__options__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_special_data_0)),
    ((MR_Box) (&mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_5[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_3[0])),
    ((MR_Box) (&mercury_profile_scalar_common_3[1])),
    ((MR_Box) (&mercury_profile_scalar_common_3[2])),
    ((MR_Box) (&mercury_profile_scalar_common_3[3]))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 380 "mercury_profile.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &options__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 389 "mercury_profile.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &options__options__type_ctor_info_option_0
  }
};

#line 148 "mercury_profile.m"
static void MR_CALL 
mercury_profile__main_2_3_p_0(
#line 148 "mercury_profile.m"
  MR_Word mercury_profile__Args_4)
#line 148 "mercury_profile.m"
{
#line 150 "mercury_profile.m"
  {
#line 150 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 150 "mercury_profile.m"
    MR_Word mercury_profile__Globals_6;
#line 150 "mercury_profile.m"
    MR_Word mercury_profile__Help_7;

#line 151 "mercury_profile.m"
    {
#line 151 "mercury_profile.m"
      globals__io_get_globals_3_p_0(&mercury_profile__Globals_6);
    }
#line 152 "mercury_profile.m"
    {
#line 152 "mercury_profile.m"
      globals__lookup_bool_option_3_p_0(mercury_profile__Globals_6, (MR_Integer) 19, &mercury_profile__Help_7);
    }
#line 156 "mercury_profile.m"
    if ((mercury_profile__Help_7 == (MR_Integer) 0))
#line 157 "mercury_profile.m"
      {
#line 157 "mercury_profile.m"
        MR_Word mercury_profile__Snapshots_8;

#line 158 "mercury_profile.m"
        {
#line 158 "mercury_profile.m"
          globals__lookup_bool_option_3_p_0(mercury_profile__Globals_6, (MR_Integer) 13, &mercury_profile__Snapshots_8);
        }
#line 162 "mercury_profile.m"
        if ((mercury_profile__Snapshots_8 == (MR_Integer) 0))
#line 170 "mercury_profile.m"
          {
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__StdErr_21;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__StdOut_22;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__Verbose_23;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__Prof0_24;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__CallGraph0_25;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__CallGraphOpt_26;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__Prof_28;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__IndexMap_29;
#line 170 "mercury_profile.m"
            MR_Word mercury_profile__OutputProf_30;
#line 198 "mercury_profile.m"
            MR_Word mercury_profile__V_31_31;

#line 171 "mercury_profile.m"
            {
#line 171 "mercury_profile.m"
              mercury__io__stderr_stream_3_p_0(&mercury_profile__StdErr_21);
            }
#line 172 "mercury_profile.m"
            {
#line 172 "mercury_profile.m"
              mercury__io__set_output_stream_4_p_0(mercury_profile__StdErr_21, &mercury_profile__StdOut_22);
            }
#line 173 "mercury_profile.m"
            {
#line 173 "mercury_profile.m"
              globals__io_lookup_bool_option_4_p_0((MR_Integer) 0, &mercury_profile__Verbose_23);
            }
#line 175 "mercury_profile.m"
            {
#line 175 "mercury_profile.m"
              options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) "% Processing input files...");
            }
#line 176 "mercury_profile.m"
            {
#line 176 "mercury_profile.m"
              process_file__process_profiling_data_files_4_p_0(&mercury_profile__Prof0_24, &mercury_profile__CallGraph0_25);
            }
#line 177 "mercury_profile.m"
            {
#line 177 "mercury_profile.m"
              options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) " done\n");
            }
#line 179 "mercury_profile.m"
            {
#line 179 "mercury_profile.m"
              globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &mercury_profile__CallGraphOpt_26);
            }
#line 189 "mercury_profile.m"
            if ((mercury_profile__CallGraphOpt_26 == (MR_Integer) 0))
#line 191 "mercury_profile.m"
              mercury_profile__Prof_28 = mercury_profile__Prof0_24;
#line 189 "mercury_profile.m"
            else
#line 181 "mercury_profile.m"
              {
#line 181 "mercury_profile.m"
                MR_Word mercury_profile__CallGraph_27;

#line 182 "mercury_profile.m"
                {
#line 182 "mercury_profile.m"
                  options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) "% Building call graph...");
                }
#line 183 "mercury_profile.m"
                {
#line 183 "mercury_profile.m"
                  call_graph__build_call_graph_5_p_0(mercury_profile__Args_4, mercury_profile__CallGraph0_25, &mercury_profile__CallGraph_27);
                }
#line 184 "mercury_profile.m"
                {
#line 184 "mercury_profile.m"
                  options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) " done\n");
                }
#line 186 "mercury_profile.m"
                {
#line 186 "mercury_profile.m"
                  options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) "% Propagating counts...");
                }
#line 187 "mercury_profile.m"
                {
#line 187 "mercury_profile.m"
                  propagate__propagate_counts_5_p_0(mercury_profile__CallGraph_27, mercury_profile__Prof0_24, &mercury_profile__Prof_28);
                }
#line 188 "mercury_profile.m"
                {
#line 188 "mercury_profile.m"
                  options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) " done\n");
                }
#line 181 "mercury_profile.m"
              }
#line 194 "mercury_profile.m"
            {
#line 194 "mercury_profile.m"
              options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) "% Generating output...");
            }
#line 195 "mercury_profile.m"
            {
#line 195 "mercury_profile.m"
              generate_output__generate_prof_output_5_p_0(mercury_profile__Prof_28, &mercury_profile__IndexMap_29, &mercury_profile__OutputProf_30);
            }
#line 196 "mercury_profile.m"
            {
#line 196 "mercury_profile.m"
              options__maybe_write_string_4_p_0(mercury_profile__Verbose_23, (MR_String) " done\n");
            }
#line 198 "mercury_profile.m"
            {
#line 198 "mercury_profile.m"
              mercury__io__set_output_stream_4_p_0(mercury_profile__StdOut_22, &mercury_profile__V_31_31);
            }
#line 199 "mercury_profile.m"
            {
#line 199 "mercury_profile.m"
              output__output_profile_4_p_0(mercury_profile__OutputProf_30, mercury_profile__IndexMap_29);
            }
#line 200 "mercury_profile.m"
            {
#line 200 "mercury_profile.m"
              mercury__io__nl_2_p_0();
#line 200 "mercury_profile.m"
              return;
            }
#line 170 "mercury_profile.m"
          }
#line 162 "mercury_profile.m"
        else
#line 161 "mercury_profile.m"
          {
#line 161 "mercury_profile.m"
            snapshots__show_snapshots_2_p_0();
#line 161 "mercury_profile.m"
            return;
          }
#line 157 "mercury_profile.m"
      }
#line 156 "mercury_profile.m"
    else
#line 155 "mercury_profile.m"
      {
#line 155 "mercury_profile.m"
        mercury_profile__long_usage_2_p_0();
#line 155 "mercury_profile.m"
        return;
      }
#line 150 "mercury_profile.m"
  }
#line 148 "mercury_profile.m"
}

#line 117 "mercury_profile.m"
static void MR_CALL 
mercury_profile__long_usage_2_p_0(void)
#line 117 "mercury_profile.m"
{
#line 119 "mercury_profile.m"
  {
#line 119 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 119 "mercury_profile.m"
    MR_String mercury_profile__ProgName_4;
#line 119 "mercury_profile.m"
    MR_String mercury_profile__Version_5;
#line 119 "mercury_profile.m"
    MR_String mercury_profile__Fullarch_6;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_11_11;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_14_14;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_15_15;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_17_17;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_18_18;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_20_20;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_22_22;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_24_24;
#line 119 "mercury_profile.m"
    MR_Word mercury_profile__V_26_26;

#line 120 "mercury_profile.m"
    {
#line 120 "mercury_profile.m"
      mercury__io__progname_base_4_p_0((MR_String) "mprof", &mercury_profile__ProgName_4);
    }
#line 121 "mercury_profile.m"
    {
#line 121 "mercury_profile.m"
      mercury__library__version_2_p_0(&mercury_profile__Version_5, &mercury_profile__Fullarch_6);
    }
#line 126 "mercury_profile.m"
    {
#line 126 "mercury_profile.m"
      mercury_profile__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_26_26, 0) = ((MR_Box) (mercury_profile__ProgName_4));
#line 126 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[16])));
#line 126 "mercury_profile.m"
    }
#line 126 "mercury_profile.m"
    {
#line 126 "mercury_profile.m"
      mercury_profile__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_24_24, 0) = ((MR_Box) ((MR_String) "Usage: "));
#line 126 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_24_24, 1) = ((MR_Box) (mercury_profile__V_26_26));
#line 126 "mercury_profile.m"
    }
#line 125 "mercury_profile.m"
    {
#line 125 "mercury_profile.m"
      mercury_profile__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_22_22, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2013-2015 The Mercury team\n\n"));
#line 125 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_22_22, 1) = ((MR_Box) (mercury_profile__V_24_24));
#line 125 "mercury_profile.m"
    }
#line 124 "mercury_profile.m"
    {
#line 124 "mercury_profile.m"
      mercury_profile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_20_20, 0) = ((MR_Box) ((MR_String) "Copyright (C) 1995-2012 The University of Melbourne\n"));
#line 124 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_20_20, 1) = ((MR_Box) (mercury_profile__V_22_22));
#line 124 "mercury_profile.m"
    }
#line 123 "mercury_profile.m"
    {
#line 123 "mercury_profile.m"
      mercury_profile__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_18_18, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_18_18, 1) = ((MR_Box) (mercury_profile__V_20_20));
#line 123 "mercury_profile.m"
    }
#line 123 "mercury_profile.m"
    {
#line 123 "mercury_profile.m"
      mercury_profile__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_17_17, 0) = ((MR_Box) (mercury_profile__Fullarch_6));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_17_17, 1) = ((MR_Box) (mercury_profile__V_18_18));
#line 123 "mercury_profile.m"
    }
#line 123 "mercury_profile.m"
    {
#line 123 "mercury_profile.m"
      mercury_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_15_15, 0) = ((MR_Box) ((MR_String) ", on "));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_15_15, 1) = ((MR_Box) (mercury_profile__V_17_17));
#line 123 "mercury_profile.m"
    }
#line 123 "mercury_profile.m"
    {
#line 123 "mercury_profile.m"
      mercury_profile__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_14_14, 0) = ((MR_Box) (mercury_profile__Version_5));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_14_14, 1) = ((MR_Box) (mercury_profile__V_15_15));
#line 123 "mercury_profile.m"
    }
#line 123 "mercury_profile.m"
    {
#line 123 "mercury_profile.m"
      mercury_profile__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_11_11, 0) = ((MR_Box) ((MR_String) "Mercury Profiler, version "));
#line 123 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_11_11, 1) = ((MR_Box) (mercury_profile__V_14_14));
#line 123 "mercury_profile.m"
    }
#line 122 "mercury_profile.m"
    {
#line 122 "mercury_profile.m"
      mercury__io__write_strings_3_p_0(mercury_profile__V_11_11);
    }
#line 144 "mercury_profile.m"
    {
#line 144 "mercury_profile.m"
      options__options_help_2_p_0();
#line 144 "mercury_profile.m"
      return;
    }
#line 119 "mercury_profile.m"
  }
#line 117 "mercury_profile.m"
}

#line 92 "mercury_profile.m"
static void MR_CALL 
mercury_profile__usage_error_3_p_0(
#line 92 "mercury_profile.m"
  MR_String mercury_profile__ErrorMessage_4)
#line 92 "mercury_profile.m"
{
#line 94 "mercury_profile.m"
  {
#line 94 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 94 "mercury_profile.m"
    MR_String mercury_profile__ProgName_6;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__StdErr_7;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_13_13;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_15_15;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_17_17;
#line 94 "mercury_profile.m"
    MR_String mercury_profile__ProgName_27;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__StdErr_28;
#line 94 "mercury_profile.m"
    MR_String mercury_profile__Version_29;
#line 94 "mercury_profile.m"
    MR_String mercury_profile__Fullarch_30;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_34_34;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_37_37;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_38_38;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_40_40;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_41_41;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_43_43;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_45_45;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_47_47;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_49_49;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_50_50;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_52_52;
#line 94 "mercury_profile.m"
    MR_Word mercury_profile__V_54_54;

#line 95 "mercury_profile.m"
    {
#line 95 "mercury_profile.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_profile", &mercury_profile__ProgName_6);
    }
#line 96 "mercury_profile.m"
    {
#line 96 "mercury_profile.m"
      mercury__io__stderr_stream_3_p_0(&mercury_profile__StdErr_7);
    }
#line 97 "mercury_profile.m"
    {
#line 97 "mercury_profile.m"
      mercury_profile__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_17_17, 0) = ((MR_Box) (mercury_profile__ErrorMessage_4));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[17])));
#line 97 "mercury_profile.m"
    }
#line 97 "mercury_profile.m"
    {
#line 97 "mercury_profile.m"
      mercury_profile__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_15_15, 0) = ((MR_Box) ((MR_String) ": "));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_15_15, 1) = ((MR_Box) (mercury_profile__V_17_17));
#line 97 "mercury_profile.m"
    }
#line 97 "mercury_profile.m"
    {
#line 97 "mercury_profile.m"
      mercury_profile__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_13_13, 0) = ((MR_Box) (mercury_profile__ProgName_6));
#line 97 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_13_13, 1) = ((MR_Box) (mercury_profile__V_15_15));
#line 97 "mercury_profile.m"
    }
#line 97 "mercury_profile.m"
    {
#line 97 "mercury_profile.m"
      mercury__io__write_strings_4_p_0(mercury_profile__StdErr_7, mercury_profile__V_13_13);
    }
#line 98 "mercury_profile.m"
    {
#line 98 "mercury_profile.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 106 "mercury_profile.m"
    {
#line 106 "mercury_profile.m"
      mercury__io__progname_base_4_p_0((MR_String) "mprof", &mercury_profile__ProgName_27);
    }
#line 107 "mercury_profile.m"
    {
#line 107 "mercury_profile.m"
      mercury__io__stderr_stream_3_p_0(&mercury_profile__StdErr_28);
    }
#line 108 "mercury_profile.m"
    {
#line 108 "mercury_profile.m"
      mercury__library__version_2_p_0(&mercury_profile__Version_29, &mercury_profile__Fullarch_30);
    }
#line 114 "mercury_profile.m"
    {
#line 114 "mercury_profile.m"
      mercury_profile__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_54_54, 0) = ((MR_Box) (mercury_profile__ProgName_27));
#line 114 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[18])));
#line 114 "mercury_profile.m"
    }
#line 114 "mercury_profile.m"
    {
#line 114 "mercury_profile.m"
      mercury_profile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_52_52, 0) = ((MR_Box) ((MR_String) "Use \140"));
#line 114 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_52_52, 1) = ((MR_Box) (mercury_profile__V_54_54));
#line 114 "mercury_profile.m"
    }
#line 113 "mercury_profile.m"
    {
#line 113 "mercury_profile.m"
      mercury_profile__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_50_50, 0) = ((MR_Box) ((MR_String) " [<options>] [<files>]\n"));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_50_50, 1) = ((MR_Box) (mercury_profile__V_52_52));
#line 113 "mercury_profile.m"
    }
#line 113 "mercury_profile.m"
    {
#line 113 "mercury_profile.m"
      mercury_profile__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_49_49, 0) = ((MR_Box) (mercury_profile__ProgName_27));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_49_49, 1) = ((MR_Box) (mercury_profile__V_50_50));
#line 113 "mercury_profile.m"
    }
#line 113 "mercury_profile.m"
    {
#line 113 "mercury_profile.m"
      mercury_profile__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_47_47, 0) = ((MR_Box) ((MR_String) "Usage: "));
#line 113 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_47_47, 1) = ((MR_Box) (mercury_profile__V_49_49));
#line 113 "mercury_profile.m"
    }
#line 112 "mercury_profile.m"
    {
#line 112 "mercury_profile.m"
      mercury_profile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_45_45, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2013-2015 The Mercury team\n"));
#line 112 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_45_45, 1) = ((MR_Box) (mercury_profile__V_47_47));
#line 112 "mercury_profile.m"
    }
#line 111 "mercury_profile.m"
    {
#line 111 "mercury_profile.m"
      mercury_profile__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_43_43, 0) = ((MR_Box) ((MR_String) "Copyright (C) 1995-2012 The University of Melbourne\n"));
#line 111 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_43_43, 1) = ((MR_Box) (mercury_profile__V_45_45));
#line 111 "mercury_profile.m"
    }
#line 110 "mercury_profile.m"
    {
#line 110 "mercury_profile.m"
      mercury_profile__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_41_41, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_41_41, 1) = ((MR_Box) (mercury_profile__V_43_43));
#line 110 "mercury_profile.m"
    }
#line 110 "mercury_profile.m"
    {
#line 110 "mercury_profile.m"
      mercury_profile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_40_40, 0) = ((MR_Box) (mercury_profile__Fullarch_30));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_40_40, 1) = ((MR_Box) (mercury_profile__V_41_41));
#line 110 "mercury_profile.m"
    }
#line 110 "mercury_profile.m"
    {
#line 110 "mercury_profile.m"
      mercury_profile__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_38_38, 0) = ((MR_Box) ((MR_String) ", on "));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_38_38, 1) = ((MR_Box) (mercury_profile__V_40_40));
#line 110 "mercury_profile.m"
    }
#line 110 "mercury_profile.m"
    {
#line 110 "mercury_profile.m"
      mercury_profile__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_37_37, 0) = ((MR_Box) (mercury_profile__Version_29));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_37_37, 1) = ((MR_Box) (mercury_profile__V_38_38));
#line 110 "mercury_profile.m"
    }
#line 110 "mercury_profile.m"
    {
#line 110 "mercury_profile.m"
      mercury_profile__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_34_34, 0) = ((MR_Box) ((MR_String) "Mercury Profiler, version "));
#line 110 "mercury_profile.m"
      MR_hl_field(MR_mktag(1), mercury_profile__V_34_34, 1) = ((MR_Box) (mercury_profile__V_37_37));
#line 110 "mercury_profile.m"
    }
#line 109 "mercury_profile.m"
    {
#line 109 "mercury_profile.m"
      mercury__io__write_strings_4_p_0(mercury_profile__StdErr_28, mercury_profile__V_34_34);
#line 109 "mercury_profile.m"
      return;
    }
#line 94 "mercury_profile.m"
  }
#line 92 "mercury_profile.m"
}

#line 54 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_5(
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_2,
#line 54 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_3,
#line 54 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_4)
#line 54 "mercury_profile.m"
{
#line 54 "mercury_profile.m"
  {
#line 54 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 54 "mercury_profile.m"
    MR_Box mercury_profile__closure = mercury_profile__closure_arg;
#line 54 "mercury_profile.m"
    MR_Word mercury_profile__conv4_HeadVar__4_4;

#line 54 "mercury_profile.m"
    {
#line 54 "mercury_profile.m"
      mercury_profile__succeeded = options__special_handler_4_p_0(((MR_Word) mercury_profile__wrapper_arg_1), ((MR_Word) mercury_profile__wrapper_arg_2), ((MR_Word) mercury_profile__wrapper_arg_3), &mercury_profile__conv4_HeadVar__4_4);
    }
#line 54 "mercury_profile.m"
    if (mercury_profile__succeeded)
#line 54 "mercury_profile.m"
      {
#line 54 "mercury_profile.m"
        *mercury_profile__wrapper_arg_4 = ((MR_Box) (mercury_profile__conv4_HeadVar__4_4));
#line 54 "mercury_profile.m"
        mercury_profile__succeeded = MR_TRUE;
#line 54 "mercury_profile.m"
      }
#line 54 "mercury_profile.m"
    return mercury_profile__succeeded;
#line 54 "mercury_profile.m"
  }
#line 54 "mercury_profile.m"
}

#line 53 "mercury_profile.m"
static void MR_CALL 
main_2_p_0_3(
#line 53 "mercury_profile.m"
  void * mercury_profile__env_ptr_arg)
#line 53 "mercury_profile.m"
{
#line 53 "mercury_profile.m"
  {
#line 53 "mercury_profile.m"
    struct mercury_profile__main_2_p_0_4_env_0_s * mercury_profile__env_ptr = (struct mercury_profile__main_2_p_0_4_env_0_s *) mercury_profile__env_ptr_arg;

#line 53 "mercury_profile.m"
    *((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 53 "mercury_profile.m"
    *((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 53 "mercury_profile.m"
    {
#line 53 "mercury_profile.m"
      ((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__cont)((mercury_profile__env_ptr)->mercury_profile__main_2_p_0_4_env_0__cont_env_ptr);
#line 53 "mercury_profile.m"
      return;
    }
#line 53 "mercury_profile.m"
  }
#line 53 "mercury_profile.m"
}

#line 53 "mercury_profile.m"
static void MR_CALL 
main_2_p_0_4(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2,
#line 53 "mercury_profile.m"
  MR_Cont mercury_profile__cont,
#line 53 "mercury_profile.m"
  void * mercury_profile__cont_env_ptr)
#line 53 "mercury_profile.m"
{
#line 53 "mercury_profile.m"
  {
#line 53 "mercury_profile.m"
    struct mercury_profile__main_2_p_0_4_env_0_s mercury_profile__env;

#line 53 "mercury_profile.m"
    (mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1 = mercury_profile__wrapper_arg_1;
#line 53 "mercury_profile.m"
    (mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2 = mercury_profile__wrapper_arg_2;
#line 53 "mercury_profile.m"
    (mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__cont = mercury_profile__cont;
#line 53 "mercury_profile.m"
    (mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__cont_env_ptr = mercury_profile__cont_env_ptr;
#line 53 "mercury_profile.m"
    {
#line 53 "mercury_profile.m"
      MR_Box mercury_profile__closure = mercury_profile__closure_arg;

#line 53 "mercury_profile.m"
      {
#line 53 "mercury_profile.m"
        options__option_default_2_p_0(&(mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mercury_profile__env).mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mercury_profile__env);
      }
#line 53 "mercury_profile.m"
    }
#line 53 "mercury_profile.m"
  }
#line 53 "mercury_profile.m"
}

#line 53 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2)
#line 53 "mercury_profile.m"
{
#line 53 "mercury_profile.m"
  {
#line 53 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 53 "mercury_profile.m"
    MR_Box mercury_profile__closure = mercury_profile__closure_arg;
#line 53 "mercury_profile.m"
    MR_Word mercury_profile__conv1_HeadVar__2_2;

#line 53 "mercury_profile.m"
    {
#line 53 "mercury_profile.m"
      mercury_profile__succeeded = options__long_option_2_p_0(((MR_String) mercury_profile__wrapper_arg_1), &mercury_profile__conv1_HeadVar__2_2);
    }
#line 53 "mercury_profile.m"
    if (mercury_profile__succeeded)
#line 53 "mercury_profile.m"
      {
#line 53 "mercury_profile.m"
        *mercury_profile__wrapper_arg_2 = ((MR_Box) (mercury_profile__conv1_HeadVar__2_2));
#line 53 "mercury_profile.m"
        mercury_profile__succeeded = MR_TRUE;
#line 53 "mercury_profile.m"
      }
#line 53 "mercury_profile.m"
    return mercury_profile__succeeded;
#line 53 "mercury_profile.m"
  }
#line 53 "mercury_profile.m"
}

#line 53 "mercury_profile.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__closure_arg,
#line 53 "mercury_profile.m"
  MR_Box mercury_profile__wrapper_arg_1,
#line 53 "mercury_profile.m"
  MR_Box * mercury_profile__wrapper_arg_2)
#line 53 "mercury_profile.m"
{
#line 53 "mercury_profile.m"
  {
#line 53 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 53 "mercury_profile.m"
    MR_Box mercury_profile__closure = mercury_profile__closure_arg;
#line 53 "mercury_profile.m"
    MR_Word mercury_profile__conv0_HeadVar__2_2;

#line 53 "mercury_profile.m"
    {
#line 53 "mercury_profile.m"
      mercury_profile__succeeded = options__short_option_2_p_0(((MR_Char) (MR_Word) mercury_profile__wrapper_arg_1), &mercury_profile__conv0_HeadVar__2_2);
    }
#line 53 "mercury_profile.m"
    if (mercury_profile__succeeded)
#line 53 "mercury_profile.m"
      {
#line 53 "mercury_profile.m"
        *mercury_profile__wrapper_arg_2 = ((MR_Box) (mercury_profile__conv0_HeadVar__2_2));
#line 53 "mercury_profile.m"
        mercury_profile__succeeded = MR_TRUE;
#line 53 "mercury_profile.m"
      }
#line 53 "mercury_profile.m"
    return mercury_profile__succeeded;
#line 53 "mercury_profile.m"
  }
#line 53 "mercury_profile.m"
}

#line 27 "mercury_profile.m"
void MR_CALL 
main_2_p_0(void)
#line 27 "mercury_profile.m"
{
#line 51 "mercury_profile.m"
  {
#line 51 "mercury_profile.m"
    MR_bool mercury_profile__succeeded;
#line 51 "mercury_profile.m"
    MR_Word mercury_profile__Args0_4;
#line 51 "mercury_profile.m"
    MR_Word mercury_profile__Args_6;
#line 51 "mercury_profile.m"
    MR_Word mercury_profile__Result0_7;
#line 51 "mercury_profile.m"
    MR_Word mercury_profile__Result_8;

#line 52 "mercury_profile.m"
    {
#line 52 "mercury_profile.m"
      mercury__io__command_line_arguments_3_p_0(&mercury_profile__Args0_4);
    }
#line 55 "mercury_profile.m"
    {
#line 55 "mercury_profile.m"
      mercury__getopt__process_options_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(3), &mercury_profile_scalar_common_5[0]), mercury_profile__Args0_4, &mercury_profile__Args_6, &mercury_profile__Result0_7);
    }
#line 68 "mercury_profile.m"
    if (((MR_tag((MR_Word) mercury_profile__Result0_7)) == (MR_mktag((MR_Integer) 1))))
#line 68 "mercury_profile.m"
      {
#line 68 "mercury_profile.m"
        MR_String mercury_profile__ErrorMessage_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury_profile__Result0_7, (MR_Integer) 0)));

#line 68 "mercury_profile.m"
        {
#line 68 "mercury_profile.m"
          mercury_profile__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 68 "mercury_profile.m"
          MR_hl_field(MR_mktag(1), mercury_profile__Result_8, 0) = ((MR_Box) (mercury_profile__ErrorMessage_31));
#line 68 "mercury_profile.m"
        }
#line 68 "mercury_profile.m"
      }
#line 68 "mercury_profile.m"
    else
#line 69 "mercury_profile.m"
      {
#line 69 "mercury_profile.m"
        MR_Word mercury_profile__OptionTable_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury_profile__Result0_7, (MR_Integer) 0)));
#line 69 "mercury_profile.m"
        MR_Word mercury_profile__VeryVerbose_39;

#line 69 "mercury_profile.m"
        mercury_profile__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "mercury_profile.m"
        {
#line 70 "mercury_profile.m"
          globals__io_init_3_p_0(mercury_profile__OptionTable_36);
        }
#line 73 "mercury_profile.m"
        {
#line 73 "mercury_profile.m"
          globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &mercury_profile__VeryVerbose_39);
        }
#line 74 "mercury_profile.m"
        mercury_profile__succeeded = (mercury_profile__VeryVerbose_39 == (MR_Integer) 1);
#line 76 "mercury_profile.m"
        if (mercury_profile__succeeded)
#line 75 "mercury_profile.m"
          {
#line 75 "mercury_profile.m"
            {
#line 75 "mercury_profile.m"
              globals__io_set_option_4_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_6[0]));
            }
#line 75 "mercury_profile.m"
          }
#line 76 "mercury_profile.m"
        else
#line 76 "mercury_profile.m"
          {
#line 76 "mercury_profile.m"
          }
#line 86 "mercury_profile.m"
        if ((mercury_profile__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "mercury_profile.m"
          {
#line 85 "mercury_profile.m"
            {
#line 85 "mercury_profile.m"
              globals__io_set_option_4_p_0((MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_6[0]));
            }
#line 84 "mercury_profile.m"
          }
#line 86 "mercury_profile.m"
        else
#line 87 "mercury_profile.m"
          {
#line 87 "mercury_profile.m"
          }
#line 69 "mercury_profile.m"
      }
#line 60 "mercury_profile.m"
    if ((mercury_profile__Result_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 62 "mercury_profile.m"
      {
#line 62 "mercury_profile.m"
        mercury_profile__main_2_3_p_0(mercury_profile__Args_6);
#line 62 "mercury_profile.m"
        return;
      }
#line 60 "mercury_profile.m"
    else
#line 58 "mercury_profile.m"
      {
#line 58 "mercury_profile.m"
        MR_String mercury_profile__ErrorMessage_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury_profile__Result_8, (MR_Integer) 0)));

#line 59 "mercury_profile.m"
        {
#line 59 "mercury_profile.m"
          mercury_profile__usage_error_3_p_0(mercury_profile__ErrorMessage_9);
#line 59 "mercury_profile.m"
          return;
        }
#line 58 "mercury_profile.m"
      }
#line 51 "mercury_profile.m"
  }
#line 27 "mercury_profile.m"
}

void mercury__mercury_profile__init(void)
{
}

void mercury__mercury_profile__init_type_tables(void)
{
}

void mercury__mercury_profile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mercury_profile. */
