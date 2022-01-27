/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module parse_tree.source_file_map. */
/* :- implementation. */

/*
INIT mercury__parse_tree__source_file_map__init
ENDINIT
*/

#include "parse_tree.source_file_map.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_find.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "parse_tree.source_file_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 113 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
#line 113 "source_file_map.m"
  MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_0_17,
#line 113 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__STATE_VARIABLE_Map_18);

#line 195 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__Globals_8,
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__MapStream_9,
#line 195 "source_file_map.m"
  MR_String parse_tree__source_file_map__FileName_10,
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__SeenModules0_11,
#line 195 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__SeenModules_12);

#line 152 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
#line 152 "source_file_map.m"
  MR_Char parse_tree__source_file_map__EndChar_6,
#line 152 "source_file_map.m"
  MR_Word parse_tree__source_file_map__Chars0_7,
#line 152 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__Result_8);

#line 183 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__closure_arg,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_1,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_2,
#line 183 "source_file_map.m"
  MR_Box * parse_tree__source_file_map__wrapper_arg_3,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_4,
#line 183 "source_file_map.m"
  MR_Box * parse_tree__source_file_map__wrapper_arg_5);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 238 "parse_tree.source_file_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 113 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
#line 113 "source_file_map.m"
  MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_0_17,
#line 113 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__STATE_VARIABLE_Map_18)
#line 113 "source_file_map.m"
{
#line 116 "source_file_map.m"
  while (MR_TRUE)
#line 116 "source_file_map.m"
    {
#line 116 "source_file_map.m"
      /* tailcall optimized into a loop */
#line 116 "source_file_map.m"
      {
#line 116 "source_file_map.m"
        MR_bool parse_tree__source_file_map__succeeded;
#line 116 "source_file_map.m"
        MR_Word parse_tree__source_file_map__ModuleCharsResult_9;

#line 117 "source_file_map.m"
        {
#line 117 "source_file_map.m"
          parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__source_file_map__ModuleCharsResult_9);
        }
#line 141 "source_file_map.m"
        if ((parse_tree__source_file_map__ModuleCharsResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "source_file_map.m"
          *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
#line 141 "source_file_map.m"
        else
#line 141 "source_file_map.m"
          if (((MR_tag((MR_Word) parse_tree__source_file_map__ModuleCharsResult_9)) == (MR_mktag((MR_Integer) 2))))
#line 144 "source_file_map.m"
            {
#line 144 "source_file_map.m"
              MR_String parse_tree__source_file_map__V_30_30;
#line 144 "source_file_map.m"
              MR_Word parse_tree__source_file_map__Error_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__source_file_map__ModuleCharsResult_9, (MR_Integer) 0)));

#line 145 "source_file_map.m"
              {
#line 145 "source_file_map.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 146 "source_file_map.m"
              {
#line 146 "source_file_map.m"
                mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error in Mercury.modules file: ");
              }
#line 148 "source_file_map.m"
              {
#line 148 "source_file_map.m"
                parse_tree__source_file_map__V_30_30 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_54);
              }
#line 148 "source_file_map.m"
              {
#line 148 "source_file_map.m"
                mercury__io__write_string_3_p_0(parse_tree__source_file_map__V_30_30);
              }
#line 149 "source_file_map.m"
              {
#line 149 "source_file_map.m"
                mercury__io__nl_2_p_0();
              }
#line 149 "source_file_map.m"
              *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
#line 144 "source_file_map.m"
            }
#line 141 "source_file_map.m"
          else
#line 119 "source_file_map.m"
            {
#line 119 "source_file_map.m"
              MR_Word parse_tree__source_file_map__RevModuleChars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__ModuleCharsResult_9, (MR_Integer) 0)));
#line 119 "source_file_map.m"
              MR_String parse_tree__source_file_map__ModuleStr_11;
#line 119 "source_file_map.m"
              MR_Word parse_tree__source_file_map__ModuleName_12;
#line 119 "source_file_map.m"
              MR_Word parse_tree__source_file_map__FileNameCharsResult_13;

#line 120 "source_file_map.m"
              {
#line 120 "source_file_map.m"
                mercury__string__from_rev_char_list_2_p_0(parse_tree__source_file_map__RevModuleChars_10, &parse_tree__source_file_map__ModuleStr_11);
              }
#line 121 "source_file_map.m"
              {
#line 121 "source_file_map.m"
                parse_tree__source_file_map__ModuleName_12 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__source_file_map__ModuleStr_11);
              }
#line 122 "source_file_map.m"
              {
#line 122 "source_file_map.m"
                parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__source_file_map__FileNameCharsResult_13);
              }
#line 128 "source_file_map.m"
              if ((parse_tree__source_file_map__FileNameCharsResult_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "source_file_map.m"
                {
#line 130 "source_file_map.m"
                  {
#line 130 "source_file_map.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 131 "source_file_map.m"
                  {
#line 131 "source_file_map.m"
                    mercury__io__write_string_3_p_0((MR_String) "mercury_compile: unexpected end of file in Mercury.modules file.\n");
                  }
#line 131 "source_file_map.m"
                  *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
#line 129 "source_file_map.m"
                }
#line 128 "source_file_map.m"
              else
#line 128 "source_file_map.m"
                if (((MR_tag((MR_Word) parse_tree__source_file_map__FileNameCharsResult_13)) == (MR_mktag((MR_Integer) 2))))
#line 134 "source_file_map.m"
                  {
#line 134 "source_file_map.m"
                    MR_Word parse_tree__source_file_map__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__source_file_map__FileNameCharsResult_13, (MR_Integer) 0)));
#line 134 "source_file_map.m"
                    MR_String parse_tree__source_file_map__V_42_42;

#line 135 "source_file_map.m"
                    {
#line 135 "source_file_map.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 136 "source_file_map.m"
                    {
#line 136 "source_file_map.m"
                      mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error in Mercury.modules file: ");
                    }
#line 138 "source_file_map.m"
                    {
#line 138 "source_file_map.m"
                      parse_tree__source_file_map__V_42_42 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_16);
                    }
#line 138 "source_file_map.m"
                    {
#line 138 "source_file_map.m"
                      mercury__io__write_string_3_p_0(parse_tree__source_file_map__V_42_42);
                    }
#line 139 "source_file_map.m"
                    {
#line 139 "source_file_map.m"
                      mercury__io__nl_2_p_0();
                    }
#line 139 "source_file_map.m"
                    *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
#line 134 "source_file_map.m"
                  }
#line 128 "source_file_map.m"
                else
#line 124 "source_file_map.m"
                  {
#line 124 "source_file_map.m"
                    MR_Word parse_tree__source_file_map__FileNameChars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__FileNameCharsResult_13, (MR_Integer) 0)));
#line 124 "source_file_map.m"
                    MR_String parse_tree__source_file_map__FileName_15;
#line 124 "source_file_map.m"
                    MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_51_51;

#line 125 "source_file_map.m"
                    {
#line 125 "source_file_map.m"
                      mercury__string__from_rev_char_list_2_p_0(parse_tree__source_file_map__FileNameChars_14, &parse_tree__source_file_map__FileName_15);
                    }
#line 126 "source_file_map.m"
                    {
#line 126 "source_file_map.m"
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__source_file_map__ModuleName_12)), ((MR_Box) (parse_tree__source_file_map__FileName_15)), parse_tree__source_file_map__STATE_VARIABLE_Map_0_17, &parse_tree__source_file_map__STATE_VARIABLE_Map_51_51);
                    }
#line 127 "source_file_map.m"
                    /* direct tailcall eliminated */
#line 127 "source_file_map.m"
                    {
#line 127 "source_file_map.m"
                      MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_0__tmp_copy_17 = parse_tree__source_file_map__STATE_VARIABLE_Map_51_51;

#line 127 "source_file_map.m"
                      parse_tree__source_file_map__STATE_VARIABLE_Map_0_17 = parse_tree__source_file_map__STATE_VARIABLE_Map_0__tmp_copy_17;
#line 127 "source_file_map.m"
                    }
#line 127 "source_file_map.m"
                    continue;
#line 124 "source_file_map.m"
                  }
#line 119 "source_file_map.m"
            }
#line 116 "source_file_map.m"
      }
#line 116 "source_file_map.m"
      break;
#line 116 "source_file_map.m"
    }
#line 113 "source_file_map.m"
}

#line 195 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__Globals_8,
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__MapStream_9,
#line 195 "source_file_map.m"
  MR_String parse_tree__source_file_map__FileName_10,
#line 195 "source_file_map.m"
  MR_Word parse_tree__source_file_map__SeenModules0_11,
#line 195 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__SeenModules_12)
#line 195 "source_file_map.m"
{
#line 201 "source_file_map.m"
  {
#line 201 "source_file_map.m"
    MR_bool parse_tree__source_file_map__succeeded;
#line 201 "source_file_map.m"
    MR_Word parse_tree__source_file_map__MaybeModuleName_14;

#line 202 "source_file_map.m"
    {
#line 202 "source_file_map.m"
      parse_tree__prog_io_find__find_module_name_5_p_0(parse_tree__source_file_map__Globals_8, parse_tree__source_file_map__FileName_10, &parse_tree__source_file_map__MaybeModuleName_14);
    }
#line 243 "source_file_map.m"
    if ((parse_tree__source_file_map__MaybeModuleName_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "source_file_map.m"
      *parse_tree__source_file_map__SeenModules_12 = parse_tree__source_file_map__SeenModules0_11;
#line 243 "source_file_map.m"
    else
#line 204 "source_file_map.m"
      {
#line 204 "source_file_map.m"
        MR_Word parse_tree__source_file_map__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeModuleName_14, (MR_Integer) 0)));
#line 204 "source_file_map.m"
        MR_String parse_tree__source_file_map__PartialFileName_18;
#line 204 "source_file_map.m"
        MR_Word parse_tree__source_file_map__DefaultModuleName_19;
#line 204 "source_file_map.m"
        MR_String parse_tree__source_file_map__V_40_40;
#line 218 "source_file_map.m"
        MR_String parse_tree__source_file_map__PrevFileName_16;
#line 206 "source_file_map.m"
        MR_Box parse_tree__source_file_map__conv0_PrevFileName_16;
#line 223 "source_file_map.m"
        MR_String parse_tree__source_file_map__PartialFileName0_17;
#line 231 "source_file_map.m"
        MR_String parse_tree__source_file_map__V_41_41;
#line 231 "source_file_map.m"
        MR_String parse_tree__source_file_map__V_53_53;

#line 206 "source_file_map.m"
        {
#line 206 "source_file_map.m"
          parse_tree__source_file_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SeenModules0_11, ((MR_Box) (parse_tree__source_file_map__ModuleName_15)), &parse_tree__source_file_map__conv0_PrevFileName_16);
        }
#line 206 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 206 "source_file_map.m"
          {
#line 206 "source_file_map.m"
            parse_tree__source_file_map__PrevFileName_16 = ((MR_String) parse_tree__source_file_map__conv0_PrevFileName_16);
#line 206 "source_file_map.m"
            parse_tree__source_file_map__succeeded = MR_TRUE;
#line 206 "source_file_map.m"
          }
#line 206 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 206 "source_file_map.m"
          {
#line 207 "source_file_map.m"
            parse_tree__source_file_map__succeeded = (strcmp(parse_tree__source_file_map__PrevFileName_16, parse_tree__source_file_map__FileName_10) == 0);
#line 207 "source_file_map.m"
            parse_tree__source_file_map__succeeded = !(parse_tree__source_file_map__succeeded);
#line 206 "source_file_map.m"
          }
#line 218 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 209 "source_file_map.m"
          {
#line 209 "source_file_map.m"
            MR_String parse_tree__source_file_map__V_27_27;

#line 209 "source_file_map.m"
            {
#line 209 "source_file_map.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury_compile: module \140");
            }
#line 210 "source_file_map.m"
            {
#line 210 "source_file_map.m"
              parse_tree__source_file_map__V_27_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_15);
            }
#line 210 "source_file_map.m"
            {
#line 210 "source_file_map.m"
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__V_27_27);
            }
#line 211 "source_file_map.m"
            {
#line 211 "source_file_map.m"
              mercury__io__write_string_3_p_0((MR_String) "\' defined in multiple files: ");
            }
#line 212 "source_file_map.m"
            {
#line 212 "source_file_map.m"
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__PrevFileName_16);
            }
#line 213 "source_file_map.m"
            {
#line 213 "source_file_map.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 214 "source_file_map.m"
            {
#line 214 "source_file_map.m"
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__FileName_10);
            }
#line 215 "source_file_map.m"
            {
#line 215 "source_file_map.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 216 "source_file_map.m"
            {
#line 216 "source_file_map.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 217 "source_file_map.m"
            *parse_tree__source_file_map__SeenModules_12 = parse_tree__source_file_map__SeenModules0_11;
#line 209 "source_file_map.m"
          }
#line 218 "source_file_map.m"
        else
#line 219 "source_file_map.m"
          {
#line 219 "source_file_map.m"
            {
#line 219 "source_file_map.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__source_file_map__ModuleName_15)), ((MR_Box) (parse_tree__source_file_map__FileName_10)), parse_tree__source_file_map__SeenModules0_11, parse_tree__source_file_map__SeenModules_12);
            }
#line 219 "source_file_map.m"
          }
#line 221 "source_file_map.m"
        {
#line 221 "source_file_map.m"
          parse_tree__source_file_map__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__source_file_map__FileName_10, (MR_String) ".m", &parse_tree__source_file_map__PartialFileName0_17);
        }
#line 223 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 222 "source_file_map.m"
          parse_tree__source_file_map__PartialFileName_18 = parse_tree__source_file_map__PartialFileName0_17;
#line 223 "source_file_map.m"
        else
#line 224 "source_file_map.m"
          parse_tree__source_file_map__PartialFileName_18 = parse_tree__source_file_map__FileName_10;
#line 226 "source_file_map.m"
        {
#line 226 "source_file_map.m"
          parse_tree__source_file_map__V_40_40 = mercury__dir__det_basename_1_f_0(parse_tree__source_file_map__PartialFileName_18);
        }
#line 226 "source_file_map.m"
        {
#line 226 "source_file_map.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__source_file_map__V_40_40, &parse_tree__source_file_map__DefaultModuleName_19);
        }
#line 231 "source_file_map.m"
        {
#line 231 "source_file_map.m"
          parse_tree__source_file_map__V_41_41 = mercury__dir__dirname_1_f_0(parse_tree__source_file_map__PartialFileName_18);
        }
#line 231 "source_file_map.m"
        {
#line 231 "source_file_map.m"
          parse_tree__source_file_map__V_53_53 = mercury__dir__this_directory_0_f_0();
        }
#line 231 "source_file_map.m"
        parse_tree__source_file_map__succeeded = (strcmp(parse_tree__source_file_map__V_41_41, parse_tree__source_file_map__V_53_53) == 0);
#line 231 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 232 "source_file_map.m"
          {
#line 232 "source_file_map.m"
            parse_tree__source_file_map__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__source_file_map__ModuleName_15, parse_tree__source_file_map__DefaultModuleName_19);
          }
#line 235 "source_file_map.m"
        if (parse_tree__source_file_map__succeeded)
#line 232 "source_file_map.m"
          {
#line 232 "source_file_map.m"
          }
#line 235 "source_file_map.m"
        else
#line 236 "source_file_map.m"
          {
#line 236 "source_file_map.m"
            MR_Word parse_tree__source_file_map__OldStream_20;
#line 241 "source_file_map.m"
            MR_Word parse_tree__source_file_map__V_21_21;

#line 236 "source_file_map.m"
            {
#line 236 "source_file_map.m"
              mercury__io__set_output_stream_4_p_0(parse_tree__source_file_map__MapStream_9, &parse_tree__source_file_map__OldStream_20);
            }
#line 237 "source_file_map.m"
            {
#line 237 "source_file_map.m"
              parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__source_file_map__ModuleName_15);
            }
#line 238 "source_file_map.m"
            {
#line 238 "source_file_map.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 239 "source_file_map.m"
            {
#line 239 "source_file_map.m"
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__FileName_10);
            }
#line 240 "source_file_map.m"
            {
#line 240 "source_file_map.m"
              mercury__io__nl_2_p_0();
            }
#line 241 "source_file_map.m"
            {
#line 241 "source_file_map.m"
              mercury__io__set_output_stream_4_p_0(parse_tree__source_file_map__OldStream_20, &parse_tree__source_file_map__V_21_21);
            }
#line 236 "source_file_map.m"
          }
#line 204 "source_file_map.m"
      }
#line 201 "source_file_map.m"
  }
#line 195 "source_file_map.m"
}

#line 152 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
#line 152 "source_file_map.m"
  MR_Char parse_tree__source_file_map__EndChar_6,
#line 152 "source_file_map.m"
  MR_Word parse_tree__source_file_map__Chars0_7,
#line 152 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__Result_8)
#line 152 "source_file_map.m"
{
#line 155 "source_file_map.m"
  while (MR_TRUE)
#line 155 "source_file_map.m"
    {
#line 155 "source_file_map.m"
      /* tailcall optimized into a loop */
#line 155 "source_file_map.m"
      {
#line 155 "source_file_map.m"
        MR_bool parse_tree__source_file_map__succeeded;
#line 155 "source_file_map.m"
        MR_Word parse_tree__source_file_map__CharRes_10;

#line 156 "source_file_map.m"
        {
#line 156 "source_file_map.m"
          mercury__io__read_char_3_p_0(&parse_tree__source_file_map__CharRes_10);
        }
#line 164 "source_file_map.m"
        if ((parse_tree__source_file_map__CharRes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "source_file_map.m"
          if ((parse_tree__source_file_map__Chars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "source_file_map.m"
            *parse_tree__source_file_map__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "source_file_map.m"
          else
#line 171 "source_file_map.m"
            {
#line 171 "source_file_map.m"
              MR_Word base;
#line 171 "source_file_map.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 171 "source_file_map.m"
              *parse_tree__source_file_map__Result_8 = base;
#line 171 "source_file_map.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
#line 171 "source_file_map.m"
            }
#line 164 "source_file_map.m"
        else
#line 164 "source_file_map.m"
          if (((MR_tag((MR_Word) parse_tree__source_file_map__CharRes_10)) == (MR_mktag((MR_Integer) 2))))
#line 175 "source_file_map.m"
            *parse_tree__source_file_map__Result_8 = (MR_Word) parse_tree__source_file_map__CharRes_10;
#line 164 "source_file_map.m"
          else
#line 158 "source_file_map.m"
            {
#line 158 "source_file_map.m"
              MR_Char parse_tree__source_file_map__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__CharRes_10, (MR_Integer) 0)));

#line 159 "source_file_map.m"
              parse_tree__source_file_map__succeeded = (parse_tree__source_file_map__Char_11 == parse_tree__source_file_map__EndChar_6);
#line 161 "source_file_map.m"
              if (parse_tree__source_file_map__succeeded)
#line 160 "source_file_map.m"
                {
#line 160 "source_file_map.m"
                  MR_Word base;
#line 160 "source_file_map.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 160 "source_file_map.m"
                  *parse_tree__source_file_map__Result_8 = base;
#line 160 "source_file_map.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
#line 160 "source_file_map.m"
                }
#line 161 "source_file_map.m"
              else
#line 162 "source_file_map.m"
                {
#line 162 "source_file_map.m"
                  MR_Word parse_tree__source_file_map__V_18_18;

#line 162 "source_file_map.m"
                  {
#line 162 "source_file_map.m"
                    parse_tree__source_file_map__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "source_file_map.m"
                    MR_hl_field(MR_mktag(1), parse_tree__source_file_map__V_18_18, 0) = ((MR_Box) (MR_Word) (parse_tree__source_file_map__Char_11));
#line 162 "source_file_map.m"
                    MR_hl_field(MR_mktag(1), parse_tree__source_file_map__V_18_18, 1) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
#line 162 "source_file_map.m"
                  }
#line 162 "source_file_map.m"
                  /* direct tailcall eliminated */
#line 162 "source_file_map.m"
                  {
#line 162 "source_file_map.m"
                    MR_Word parse_tree__source_file_map__Chars0__tmp_copy_7 = parse_tree__source_file_map__V_18_18;

#line 162 "source_file_map.m"
                    parse_tree__source_file_map__Chars0_7 = parse_tree__source_file_map__Chars0__tmp_copy_7;
#line 162 "source_file_map.m"
                  }
#line 162 "source_file_map.m"
                  continue;
#line 162 "source_file_map.m"
                }
#line 158 "source_file_map.m"
            }
#line 155 "source_file_map.m"
      }
#line 155 "source_file_map.m"
      break;
#line 155 "source_file_map.m"
    }
#line 152 "source_file_map.m"
}

#line 183 "source_file_map.m"
static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__closure_arg,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_1,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_2,
#line 183 "source_file_map.m"
  MR_Box * parse_tree__source_file_map__wrapper_arg_3,
#line 183 "source_file_map.m"
  MR_Box parse_tree__source_file_map__wrapper_arg_4,
#line 183 "source_file_map.m"
  MR_Box * parse_tree__source_file_map__wrapper_arg_5)
#line 183 "source_file_map.m"
{
#line 183 "source_file_map.m"
  {
#line 183 "source_file_map.m"
    MR_Box parse_tree__source_file_map__closure = parse_tree__source_file_map__closure_arg;
#line 183 "source_file_map.m"
    MR_Word parse_tree__source_file_map__conv0_SeenModules_12;

#line 183 "source_file_map.m"
    {
#line 183 "source_file_map.m"
      parse_tree__source_file_map__write_source_file_map_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__closure, (MR_Integer) 4))), ((MR_String) parse_tree__source_file_map__wrapper_arg_1), ((MR_Word) parse_tree__source_file_map__wrapper_arg_2), &parse_tree__source_file_map__conv0_SeenModules_12);
    }
#line 183 "source_file_map.m"
    *parse_tree__source_file_map__wrapper_arg_3 = ((MR_Box) (parse_tree__source_file_map__conv0_SeenModules_12));
#line 183 "source_file_map.m"
  }
#line 183 "source_file_map.m"
}

#line 48 "source_file_map.m"
void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0(
#line 48 "source_file_map.m"
  MR_Word parse_tree__source_file_map__Globals_5,
#line 48 "source_file_map.m"
  MR_Word parse_tree__source_file_map__FileNames_6)
#line 48 "source_file_map.m"
{
#line 178 "source_file_map.m"
  {
#line 178 "source_file_map.m"
    MR_bool parse_tree__source_file_map__succeeded;
#line 178 "source_file_map.m"
    MR_Word parse_tree__source_file_map__OpenRes_9;

#line 180 "source_file_map.m"
    {
#line 180 "source_file_map.m"
      mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_9);
    }
#line 186 "source_file_map.m"
    if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_9)) == (MR_mktag((MR_Integer) 1))))
#line 187 "source_file_map.m"
      {
#line 187 "source_file_map.m"
        MR_Word parse_tree__source_file_map__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__OpenRes_9, (MR_Integer) 0)));
#line 187 "source_file_map.m"
        MR_String parse_tree__source_file_map__V_23_23;

#line 188 "source_file_map.m"
        {
#line 188 "source_file_map.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 189 "source_file_map.m"
        {
#line 189 "source_file_map.m"
          mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error opening \140");
        }
#line 190 "source_file_map.m"
        {
#line 190 "source_file_map.m"
          mercury__io__write_string_3_p_0((MR_String) "Mercury.modules");
        }
#line 191 "source_file_map.m"
        {
#line 191 "source_file_map.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
        }
#line 192 "source_file_map.m"
        {
#line 192 "source_file_map.m"
          parse_tree__source_file_map__V_23_23 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_12);
        }
#line 192 "source_file_map.m"
        {
#line 192 "source_file_map.m"
          mercury__io__write_string_3_p_0(parse_tree__source_file_map__V_23_23);
#line 192 "source_file_map.m"
          return;
        }
#line 187 "source_file_map.m"
      }
#line 186 "source_file_map.m"
    else
#line 182 "source_file_map.m"
      {
#line 182 "source_file_map.m"
        MR_Word parse_tree__source_file_map__TypeCtorInfo_35_35;
#line 182 "source_file_map.m"
        MR_Word parse_tree__source_file_map__Stream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_9, (MR_Integer) 0)));
#line 182 "source_file_map.m"
        MR_Word parse_tree__source_file_map__V_25_25;
#line 182 "source_file_map.m"
        MR_Word parse_tree__source_file_map__V_26_26;
#line 183 "source_file_map.m"
        MR_Word parse_tree__source_file_map__V_11_11;
#line 183 "source_file_map.m"
        MR_Box parse_tree__source_file_map__conv2_V_11_11;
#line 183 "source_file_map.m"
        MR_Box parse_tree__source_file_map__conv1_STATE_VARIABLE_IO_27_27;

#line 183 "source_file_map.m"
        {
#line 183 "source_file_map.m"
          parse_tree__source_file_map__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 183 "source_file_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__V_25_25, 0) = ((MR_Box) (&parse_tree__source_file_map_scalar_common_2[0]));
#line 183 "source_file_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__V_25_25, 1) = ((MR_Box) (parse_tree__source_file_map__write_source_file_map_4_p_0_1));
#line 183 "source_file_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 183 "source_file_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__V_25_25, 3) = ((MR_Box) (parse_tree__source_file_map__Globals_5));
#line 183 "source_file_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__V_25_25, 4) = ((MR_Box) (parse_tree__source_file_map__Stream_10));
#line 183 "source_file_map.m"
        }
#line 949 "parse_tree.source_file_map.c"
        parse_tree__source_file_map__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 184 "source_file_map.m"
        {
#line 184 "source_file_map.m"
          parse_tree__source_file_map__V_26_26 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__source_file_map__TypeCtorInfo_35_35);
        }
#line 183 "source_file_map.m"
        {
#line 183 "source_file_map.m"
          mercury__list__foldl2_6_p_2(parse_tree__source_file_map__TypeCtorInfo_35_35, (MR_Word) &parse_tree__source_file_map_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__source_file_map__V_25_25, parse_tree__source_file_map__FileNames_6, ((MR_Box) (parse_tree__source_file_map__V_26_26)), &parse_tree__source_file_map__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__source_file_map__conv1_STATE_VARIABLE_IO_27_27);
        }
#line 183 "source_file_map.m"
        parse_tree__source_file_map__V_11_11 = ((MR_Word) parse_tree__source_file_map__conv2_V_11_11);
#line 185 "source_file_map.m"
        {
#line 185 "source_file_map.m"
          mercury__io__close_output_3_p_0(parse_tree__source_file_map__Stream_10);
#line 185 "source_file_map.m"
          return;
        }
#line 182 "source_file_map.m"
      }
#line 178 "source_file_map.m"
  }
#line 48 "source_file_map.m"
}

#line 44 "source_file_map.m"
MR_String MR_CALL 
parse_tree__source_file_map__default_source_file_1_f_0(
#line 44 "source_file_map.m"
  MR_Word parse_tree__source_file_map__ModuleName_3)
#line 44 "source_file_map.m"
{
#line 76 "source_file_map.m"
  {
#line 76 "source_file_map.m"
    MR_bool parse_tree__source_file_map__succeeded;
#line 76 "source_file_map.m"
    MR_String parse_tree__source_file_map__HeadVar__2_2;
#line 76 "source_file_map.m"
    MR_String parse_tree__source_file_map__V_4_4;

#line 76 "source_file_map.m"
    {
#line 76 "source_file_map.m"
      parse_tree__source_file_map__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_3);
    }
#line 76 "source_file_map.m"
    {
#line 76 "source_file_map.m"
      return parse_tree__source_file_map__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__source_file_map__V_4_4, (MR_String) ".m");
    }
#line 76 "source_file_map.m"
    return parse_tree__source_file_map__HeadVar__2_2;
#line 76 "source_file_map.m"
  }
#line 44 "source_file_map.m"
}

#line 40 "source_file_map.m"
void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
#line 40 "source_file_map.m"
  MR_Word * parse_tree__source_file_map__HaveMap_4)
#line 40 "source_file_map.m"
{
#line 78 "source_file_map.m"
  {
#line 78 "source_file_map.m"
    MR_bool parse_tree__source_file_map__succeeded;
#line 78 "source_file_map.m"
    MR_Word parse_tree__source_file_map__SourceFileMap_6;
#line 78 "source_file_map.m"
    MR_Word parse_tree__source_file_map__MaybeSourceFileMap0_16;

#line 92 "source_file_map.m"
    {
#line 92 "source_file_map.m"
      libs__globals__io_get_maybe_source_file_map_3_p_0(&parse_tree__source_file_map__MaybeSourceFileMap0_16);
    }
#line 96 "source_file_map.m"
    if ((parse_tree__source_file_map__MaybeSourceFileMap0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "source_file_map.m"
      {
#line 97 "source_file_map.m"
        MR_Word parse_tree__source_file_map__OpenRes_18;
#line 97 "source_file_map.m"
        MR_Word parse_tree__source_file_map__V_32_32;

#line 98 "source_file_map.m"
        {
#line 98 "source_file_map.m"
          mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_18);
        }
#line 105 "source_file_map.m"
        if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_18)) == (MR_mktag((MR_Integer) 1))))
#line 106 "source_file_map.m"
          {
#line 108 "source_file_map.m"
            {
#line 108 "source_file_map.m"
              parse_tree__source_file_map__SourceFileMap_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 106 "source_file_map.m"
          }
#line 105 "source_file_map.m"
        else
#line 100 "source_file_map.m"
          {
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__Stream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_18, (MR_Integer) 0)));
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__OldStream_20;
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__V_28_28;
#line 103 "source_file_map.m"
            MR_Word parse_tree__source_file_map__V_21_21;

#line 101 "source_file_map.m"
            {
#line 101 "source_file_map.m"
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__Stream_19, &parse_tree__source_file_map__OldStream_20);
            }
#line 102 "source_file_map.m"
            {
#line 102 "source_file_map.m"
              parse_tree__source_file_map__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 102 "source_file_map.m"
            {
#line 102 "source_file_map.m"
              parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(parse_tree__source_file_map__V_28_28, &parse_tree__source_file_map__SourceFileMap_6);
            }
#line 103 "source_file_map.m"
            {
#line 103 "source_file_map.m"
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__OldStream_20, &parse_tree__source_file_map__V_21_21);
            }
#line 104 "source_file_map.m"
            {
#line 104 "source_file_map.m"
              mercury__io__close_input_3_p_0(parse_tree__source_file_map__Stream_19);
            }
#line 100 "source_file_map.m"
          }
#line 110 "source_file_map.m"
        {
#line 110 "source_file_map.m"
          parse_tree__source_file_map__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 110 "source_file_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__source_file_map__V_32_32, 0) = ((MR_Box) (parse_tree__source_file_map__SourceFileMap_6));
#line 110 "source_file_map.m"
        }
#line 110 "source_file_map.m"
        {
#line 110 "source_file_map.m"
          libs__globals__io_set_maybe_source_file_map_3_p_0(parse_tree__source_file_map__V_32_32);
        }
#line 97 "source_file_map.m"
      }
#line 96 "source_file_map.m"
    else
#line 94 "source_file_map.m"
      parse_tree__source_file_map__SourceFileMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeSourceFileMap0_16, (MR_Integer) 0)));
#line 80 "source_file_map.m"
    {
#line 80 "source_file_map.m"
      parse_tree__source_file_map__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SourceFileMap_6);
    }
#line 82 "source_file_map.m"
    if (parse_tree__source_file_map__succeeded)
#line 81 "source_file_map.m"
      *parse_tree__source_file_map__HaveMap_4 = (MR_Integer) 0;
#line 82 "source_file_map.m"
    else
#line 83 "source_file_map.m"
      *parse_tree__source_file_map__HaveMap_4 = (MR_Integer) 1;
#line 78 "source_file_map.m"
  }
#line 40 "source_file_map.m"
}

#line 35 "source_file_map.m"
void MR_CALL 
parse_tree__source_file_map__lookup_module_source_file_4_p_0(
#line 35 "source_file_map.m"
  MR_Word parse_tree__source_file_map__ModuleName_5,
#line 35 "source_file_map.m"
  MR_String * parse_tree__source_file_map__FileName_6)
#line 35 "source_file_map.m"
{
#line 68 "source_file_map.m"
  {
#line 68 "source_file_map.m"
    MR_bool parse_tree__source_file_map__succeeded;
#line 68 "source_file_map.m"
    MR_Word parse_tree__source_file_map__SourceFileMap_8;
#line 68 "source_file_map.m"
    MR_Word parse_tree__source_file_map__MaybeSourceFileMap0_19;
#line 72 "source_file_map.m"
    MR_String parse_tree__source_file_map__FileName0_9;
#line 70 "source_file_map.m"
    MR_Box parse_tree__source_file_map__conv0_FileName0_9;

#line 92 "source_file_map.m"
    {
#line 92 "source_file_map.m"
      libs__globals__io_get_maybe_source_file_map_3_p_0(&parse_tree__source_file_map__MaybeSourceFileMap0_19);
    }
#line 96 "source_file_map.m"
    if ((parse_tree__source_file_map__MaybeSourceFileMap0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "source_file_map.m"
      {
#line 97 "source_file_map.m"
        MR_Word parse_tree__source_file_map__OpenRes_21;
#line 97 "source_file_map.m"
        MR_Word parse_tree__source_file_map__V_35_35;

#line 98 "source_file_map.m"
        {
#line 98 "source_file_map.m"
          mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_21);
        }
#line 105 "source_file_map.m"
        if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_21)) == (MR_mktag((MR_Integer) 1))))
#line 106 "source_file_map.m"
          {
#line 108 "source_file_map.m"
            {
#line 108 "source_file_map.m"
              parse_tree__source_file_map__SourceFileMap_8 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 106 "source_file_map.m"
          }
#line 105 "source_file_map.m"
        else
#line 100 "source_file_map.m"
          {
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__Stream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_21, (MR_Integer) 0)));
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__OldStream_23;
#line 100 "source_file_map.m"
            MR_Word parse_tree__source_file_map__V_31_31;
#line 103 "source_file_map.m"
            MR_Word parse_tree__source_file_map__V_24_24;

#line 101 "source_file_map.m"
            {
#line 101 "source_file_map.m"
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__Stream_22, &parse_tree__source_file_map__OldStream_23);
            }
#line 102 "source_file_map.m"
            {
#line 102 "source_file_map.m"
              parse_tree__source_file_map__V_31_31 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 102 "source_file_map.m"
            {
#line 102 "source_file_map.m"
              parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(parse_tree__source_file_map__V_31_31, &parse_tree__source_file_map__SourceFileMap_8);
            }
#line 103 "source_file_map.m"
            {
#line 103 "source_file_map.m"
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__OldStream_23, &parse_tree__source_file_map__V_24_24);
            }
#line 104 "source_file_map.m"
            {
#line 104 "source_file_map.m"
              mercury__io__close_input_3_p_0(parse_tree__source_file_map__Stream_22);
            }
#line 100 "source_file_map.m"
          }
#line 110 "source_file_map.m"
        {
#line 110 "source_file_map.m"
          parse_tree__source_file_map__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 110 "source_file_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__source_file_map__V_35_35, 0) = ((MR_Box) (parse_tree__source_file_map__SourceFileMap_8));
#line 110 "source_file_map.m"
        }
#line 110 "source_file_map.m"
        {
#line 110 "source_file_map.m"
          libs__globals__io_set_maybe_source_file_map_3_p_0(parse_tree__source_file_map__V_35_35);
        }
#line 97 "source_file_map.m"
      }
#line 96 "source_file_map.m"
    else
#line 94 "source_file_map.m"
      parse_tree__source_file_map__SourceFileMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeSourceFileMap0_19, (MR_Integer) 0)));
#line 70 "source_file_map.m"
    {
#line 70 "source_file_map.m"
      parse_tree__source_file_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SourceFileMap_8, ((MR_Box) (parse_tree__source_file_map__ModuleName_5)), &parse_tree__source_file_map__conv0_FileName0_9);
    }
#line 70 "source_file_map.m"
    if (parse_tree__source_file_map__succeeded)
#line 70 "source_file_map.m"
      {
#line 70 "source_file_map.m"
        parse_tree__source_file_map__FileName0_9 = ((MR_String) parse_tree__source_file_map__conv0_FileName0_9);
#line 70 "source_file_map.m"
        parse_tree__source_file_map__succeeded = MR_TRUE;
#line 70 "source_file_map.m"
      }
#line 72 "source_file_map.m"
    if (parse_tree__source_file_map__succeeded)
#line 71 "source_file_map.m"
      *parse_tree__source_file_map__FileName_6 = parse_tree__source_file_map__FileName0_9;
#line 72 "source_file_map.m"
    else
#line 76 "source_file_map.m"
      {
#line 76 "source_file_map.m"
        MR_String parse_tree__source_file_map__V_42_42;

#line 76 "source_file_map.m"
        {
#line 76 "source_file_map.m"
          parse_tree__source_file_map__V_42_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_5);
        }
#line 76 "source_file_map.m"
        {
#line 76 "source_file_map.m"
          *parse_tree__source_file_map__FileName_6 = mercury__string__f_43_43_2_f_0(parse_tree__source_file_map__V_42_42, (MR_String) ".m");
        }
#line 76 "source_file_map.m"
      }
#line 68 "source_file_map.m"
  }
#line 35 "source_file_map.m"
}

void mercury__parse_tree__source_file_map__init(void)
{
}

void mercury__parse_tree__source_file_map__init_type_tables(void)
{
}

void mercury__parse_tree__source_file_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.source_file_map. */
