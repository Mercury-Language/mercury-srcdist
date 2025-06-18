/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2025-06-18
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


// :- module parse_tree.write_deps_file.
// :- implementation.

/*
INIT mercury__parse_tree__write_deps_file__init
ENDINIT
*/

#include "parse_tree.write_deps_file.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word DepGraphs_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6);

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10);

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_dv_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word Baggage_12);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 9U) },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_hlds_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word BurdenedAugCompUnit_10,
  MR_Word AllDeps_11,
  MR_Word MaybeInclTransOptRule_12)
{
  MR_Word Cache0_14;
  MR_Word StdDeps_15;
  MR_Word DFileDeps_16;
  MR_String FileNameD_17;
  MR_String FileContentsStrD_18;
  MR_Word _Cache_19;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_14);
  StdDeps_15 = parse_tree__generate_dep_d_files__construct_std_deps_hlds_2_f_0(Globals_9, BurdenedAugCompUnit_10);
  {
    DFileDeps_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DFileDeps_16, 0) = ((MR_Box) (StdDeps_15));
    MR_hl_field(0, DFileDeps_16, 1) = ((MR_Box) (AllDeps_11));
    MR_hl_field(0, DFileDeps_16, 2) = ((MR_Box) (MaybeInclTransOptRule_12));
  }
  parse_tree__generate_dep_d_files__generate_d_mmakefile_contents_9_p_0(Globals_9, BurdenedAugCompUnit_10, DFileDeps_16, &FileNameD_17, &FileContentsStrD_18, Cache0_14, &_Cache_19);
  parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_8, Globals_9, FileNameD_17, FileContentsStrD_18);
}

void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word FileOrModule_10,
  MR_Word * DepsMap_11,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_Word ModuleName_14;
  MR_Word STATE_VARIABLE_Specs_1_24;
  MR_Word ModuleDep_33;
  MR_Box conv0_ModuleDep_33;

  parse_tree__deps_map__generate_deps_map_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 1, FileOrModule_10, &ModuleName_14, DepsMap_11, &STATE_VARIABLE_Specs_1_24);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *DepsMap_11, ((MR_Box) (ModuleName_14)), &conv0_ModuleDep_33);
  if (succeeded)
  {
    ModuleDep_33 = ((MR_Word) (conv0_ModuleDep_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeBurdenedModule_15;
    MR_Word BurdenedModule_35 = ((MR_Word) ((MR_hl_field(0, ModuleDep_33, 1))));
    MR_Word Baggage_36 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_35, 0))));
    MR_Word Errors_38 = ((MR_Word) ((MR_hl_field(0, Baggage_36, 7))));
    MR_Word FatalErrors_39 = ((MR_Word) ((MR_hl_field(0, Errors_38, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Errors_38, 1))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_39);
    if (succeeded)
      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String UnexpectedMsg_41;
        MR_String Var_47;
        MR_String Var_71;

        Var_47 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), ((MR_Box) (FatalErrors_39)));
        Var_71 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) "\n");
        UnexpectedMsg_41 = mercury__string__f_43_43_2_f_0((MR_String) "FatalErrorSpecs = [], with FatalErrors = ", Var_71);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.do_we_have_a_valid_module_dep\'/3", UnexpectedMsg_41);
          return;
        }
      }
      else
        {
          MaybeBurdenedModule_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBurdenedModule_15, 0) = ((MR_Box) (Var_58));
        }
    else
      {
        MaybeBurdenedModule_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBurdenedModule_15, 0) = ((MR_Box) (BurdenedModule_35));
      }
    if (((MR_tag((MR_Word) MaybeBurdenedModule_15)) == (MR_Integer) 0))
    {
      MR_Word FatalErrorSpecs_16 = ((MR_Word) ((MR_hl_field(0, MaybeBurdenedModule_15, 0))));

      *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs_16, STATE_VARIABLE_Specs_1_24);
    }
    else
    {
      MR_Word BurdenedModule_17 = ((MR_Word) ((MR_hl_field(1, MaybeBurdenedModule_15, 0))));
      MR_Word DepGraphs_18;
      MR_Word Var_29;
      MR_Word Cache0_73;
      MR_Word _BurdenedModules_19;
      MR_Word _Cache_74;

      parse_tree__generate_dep_d_files__compute_deps_for_d_files_gendep_10_p_0(ProgressStream_8, Globals_9, ModuleName_14, *DepsMap_11, &DepGraphs_18, &_BurdenedModules_19, STATE_VARIABLE_Specs_1_24, STATE_VARIABLE_Specs_20);
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (BurdenedModule_17));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_73);
      parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(ProgressStream_8, Globals_9, Var_29, DepGraphs_18, Cache0_73, &_Cache_74);
    }
  }
  else
  {
    MR_Word FatalErrorSpecs_78 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), 0))));

    *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs_78, STATE_VARIABLE_Specs_1_24);
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_file_gendep_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word FileOrModule_10,
  MR_Word * DepsMap_11,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Word ModuleName_14;
  MR_Word STATE_VARIABLE_Specs_1_26;
  MR_Word ModuleDep_33;
  MR_Box conv0_ModuleDep_33;

  parse_tree__deps_map__generate_deps_map_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 0, FileOrModule_10, &ModuleName_14, DepsMap_11, &STATE_VARIABLE_Specs_1_26);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *DepsMap_11, ((MR_Box) (ModuleName_14)), &conv0_ModuleDep_33);
  if (succeeded)
  {
    ModuleDep_33 = ((MR_Word) (conv0_ModuleDep_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeBurdenedModule_15;
    MR_Word BurdenedModule_35 = ((MR_Word) ((MR_hl_field(0, ModuleDep_33, 1))));
    MR_Word Baggage_36 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_35, 0))));
    MR_Word Errors_38 = ((MR_Word) ((MR_hl_field(0, Baggage_36, 7))));
    MR_Word FatalErrors_39 = ((MR_Word) ((MR_hl_field(0, Errors_38, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Errors_38, 1))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_39);
    if (succeeded)
      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String UnexpectedMsg_41;
        MR_String Var_47;
        MR_String Var_71;

        Var_47 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), ((MR_Box) (FatalErrors_39)));
        Var_71 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) "\n");
        UnexpectedMsg_41 = mercury__string__f_43_43_2_f_0((MR_String) "FatalErrorSpecs = [], with FatalErrors = ", Var_71);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.do_we_have_a_valid_module_dep\'/3", UnexpectedMsg_41);
          return;
        }
      }
      else
        {
          MaybeBurdenedModule_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBurdenedModule_15, 0) = ((MR_Box) (Var_58));
        }
    else
      {
        MaybeBurdenedModule_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBurdenedModule_15, 0) = ((MR_Box) (BurdenedModule_35));
      }
    if (((MR_tag((MR_Word) MaybeBurdenedModule_15)) == (MR_Integer) 0))
    {
      MR_Word FatalErrorSpecs_16 = ((MR_Word) ((MR_hl_field(0, MaybeBurdenedModule_15, 0))));

      *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs_16, STATE_VARIABLE_Specs_1_26);
    }
    else
    {
      MR_Word BurdenedModule_17 = ((MR_Word) ((MR_hl_field(1, MaybeBurdenedModule_15, 0))));
      MR_Word Baggage_18 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_17, 0))));
      MR_Word DepGraphs_20;
      MR_Word BurdenedModules_21;
      MR_Word Cache0_73;
      MR_Word _Cache_74;

      parse_tree__write_deps_file__generate_and_write_dep_dv_files_7_p_0(ProgressStream_8, Globals_9, ModuleName_14, *DepsMap_11, Baggage_18);
      parse_tree__generate_dep_d_files__compute_deps_for_d_files_gendep_10_p_0(ProgressStream_8, Globals_9, ModuleName_14, *DepsMap_11, &DepGraphs_20, &BurdenedModules_21, STATE_VARIABLE_Specs_1_26, STATE_VARIABLE_Specs_22);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_73);
      parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(ProgressStream_8, Globals_9, BurdenedModules_21, DepGraphs_20, Cache0_73, &_Cache_74);
    }
  }
  else
  {
    MR_Word FatalErrorSpecs_78 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), 0))));

    *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs_78, STATE_VARIABLE_Specs_1_26);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word DepGraphs_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cache_6 = STATE_VARIABLE_Cache_0_5;
    else
    {
      MR_Word BurdenedModule_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BurdenedModules_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Cache_1_29;
      MR_Word Baggage_31 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_20, 0))));
      MR_Word ParseTreeModuleSrc_32 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_20, 1))));
      MR_Word ModuleErrors_33 = ((MR_Word) ((MR_hl_field(0, Baggage_31, 7))));
      MR_Word FatalErrors_34 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_33, 0))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_5;

      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_34);
      if (succeeded)
      {
        MR_Word AugCompUnit_35;
        MR_Word BurdenedAugCompUnit_36;
        MR_Word DFileDeps_37;
        MR_String FileNameD_38;
        MR_String FileContentsStrD_39;

        parse_tree__prog_parse_tree__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_32, &AugCompUnit_35);
        {
          BurdenedAugCompUnit_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BurdenedAugCompUnit_36, 0) = ((MR_Box) (Baggage_31));
          MR_hl_field(0, BurdenedAugCompUnit_36, 1) = ((MR_Box) (AugCompUnit_35));
        }
        DFileDeps_37 = parse_tree__generate_dep_d_files__construct_d_file_deps_gendep_3_f_0(Globals_2, DepGraphs_4, ParseTreeModuleSrc_32);
        parse_tree__generate_dep_d_files__generate_d_mmakefile_contents_9_p_0(Globals_2, BurdenedAugCompUnit_36, DFileDeps_37, &FileNameD_38, &FileContentsStrD_39, STATE_VARIABLE_Cache_0_5, &STATE_VARIABLE_Cache_1_29);
        parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_1, Globals_2, FileNameD_38, FileContentsStrD_39);
      }
      else
        STATE_VARIABLE_Cache_1_29 = STATE_VARIABLE_Cache_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BurdenedModules_21;
      next_value_of_STATE_VARIABLE_Cache_0_5 = STATE_VARIABLE_Cache_1_29;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Cache_0_5 = next_value_of_STATE_VARIABLE_Cache_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10)
{
  MR_Word TmpFileNameDResult_12;
  MR_String Var_30;

  Var_30 = mercury__dir__dirname_1_f_0(FileNameD_9);
  mercury__io__file__make_temp_file_6_p_0(Var_30, (MR_String) "tmp_d", (MR_String) "", &TmpFileNameDResult_12);
  if (((MR_tag((MR_Word) TmpFileNameDResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, TmpFileNameDResult_12, 0))));
    MR_String Message_14;
    MR_String Var_35;

    Var_35 = mercury__io__error_message_1_f_0(Error_13);
    Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_35);
    libs__file_util__report_error_4_p_0(ProgressStream_7, Message_14);
  }
  else
  {
    MR_String TmpFileNameD_15 = ((MR_String) ((MR_hl_field(0, TmpFileNameDResult_12, 0))));
    MR_Word Verbose_16;
    MR_Word Result_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 84, &Verbose_16);
    switch (Verbose_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "% Writing auto-dependency file \140");
          mercury__io__write_string_4_p_0(ProgressStream_7, FileNameD_9);
          mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'...");
          mercury__io__flush_output_3_p_0(ProgressStream_7);
        }
        break;
    }
    mercury__io__open_output_4_p_0(TmpFileNameD_15, &Result_17);
    if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(1, Result_17, 0))));
      MR_String IOErrorMessage_19;
      MR_String Message_86;
      MR_String Var_106;
      MR_String Var_107;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_19);
      Var_107 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_106);
      Message_86 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_107);
      libs__file_util__report_error_4_p_0(ProgressStream_7, Message_86);
    }
    else
    {
      MR_Word DepStream_20 = ((MR_Word) ((MR_hl_field(0, Result_17, 0))));
      MR_Word FirstRenameResult_21;

      mercury__io__write_string_4_p_0(DepStream_20, FileContentsStrD_10);
      mercury__io__close_output_3_p_0(DepStream_20);
      mercury__io__file__rename_file_5_p_0(TmpFileNameD_15, FileNameD_9, &FirstRenameResult_21);
      if ((FirstRenameResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " done.\n");
      else
      {
        MR_Word RemoveResult_23;

        mercury__io__file__remove_file_4_p_0(FileNameD_9, &RemoveResult_23);
        if ((RemoveResult_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SecondRenameResult_26;

          mercury__io__file__rename_file_5_p_0(TmpFileNameD_15, FileNameD_9, &SecondRenameResult_26);
          if ((SecondRenameResult_26 == (MR_Word) ((MR_Unsigned) 0U)))
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " done.\n");
          else
          {
            MR_Word Error5_27 = ((MR_Word) ((MR_hl_field(1, SecondRenameResult_26, 0))));
            MR_String Message_88;
            MR_String ErrorMsg_89;
            MR_String Var_95;
            MR_String Var_96;
            MR_String Var_98;
            MR_String Var_99;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
            mercury__io__error_message_2_p_0(Error5_27, &ErrorMsg_89);
            Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_89);
            Var_96 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_95);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_96);
            Var_99 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_98);
            Message_88 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_99);
            libs__file_util__report_error_4_p_0(ProgressStream_7, Message_88);
          }
        }
        else
        {
          MR_Word Error4_24 = ((MR_Word) ((MR_hl_field(1, RemoveResult_23, 0))));
          MR_String ErrorMsg_25;
          MR_String Message_87;
          MR_String Var_102;
          MR_String Var_103;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
          mercury__io__error_message_2_p_0(Error4_24, &ErrorMsg_25);
          Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_25);
          Var_103 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_102);
          Message_87 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_103);
          libs__file_util__report_error_4_p_0(ProgressStream_7, Message_87);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_dv_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word Baggage_12)
{
  MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(0, Baggage_12, 0))));
  MR_Word MmakeFileDv_15;
  MR_Word MmakeFileDep_16;
  MR_String MmakeFileStrDv_17;
  MR_String MmakeFileStrDep_18;
  MR_String FileNameDv_19;
  MR_String FileNameDep_21;
  MR_Word Target_25;
  MR_String _FileNameDvProposed_20;
  MR_String _FileNameDepProposed_22;
  MR_Word _SucceededDv_23;
  MR_Word _SucceededDep_24;

  parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0(Globals_9, SourceFileName_14, ModuleName_10, DepsMap_11, &MmakeFileDv_15);
  parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0(Globals_9, SourceFileName_14, ModuleName_10, DepsMap_11, &MmakeFileDep_16);
  MmakeFileStrDv_17 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDv_15);
  MmakeFileStrDep_18 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDep_16);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_and_write_dep_dv_files\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_3[1])), ModuleName_10, &FileNameDv_19, &_FileNameDvProposed_20);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_and_write_dep_dv_files\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_3[2])), ModuleName_10, &FileNameDep_21, &_FileNameDepProposed_22);
  libs__file_util__write_string_to_file_8_p_0(ProgressStream_8, Globals_9, (MR_String) "Writing auto-dependency file", FileNameDv_19, MmakeFileStrDv_17, &_SucceededDv_23);
  libs__file_util__write_string_to_file_8_p_0(ProgressStream_8, Globals_9, (MR_String) "Writing auto-dependency file", FileNameDep_21, MmakeFileStrDep_18, &_SucceededDep_24);
  libs__globals__get_target_2_p_0(Globals_9, &Target_25);
  switch (Target_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word _Succeeded_26;

        parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_8, Globals_9, ModuleName_10, &_Succeeded_26);
      }
      break;
  }
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
}

void mercury__parse_tree__write_deps_file__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_deps_file__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_deps_file.
