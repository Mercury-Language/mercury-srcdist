/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2026-08-16
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
#include "backend_libs.mih"
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
#include "backend_libs.create_launchers.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word DepGraphs_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6);

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word DepGraphs_11,
  MR_Word BurdenedModule_12,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23);

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10);

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_dv_files_gendep_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word DepsMap_10,
  MR_Word ModuleName_11,
  MR_Word Baggage_12);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[4][1];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
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
  MR_Word AvailModuleSets_11,
  MR_Word MaybeInclTransOptRule_12)
{
  MR_Word Cache0_14;
  MR_Word DFileDeps_15;
  MR_Word Baggage_16;
  MR_Word AugCompUnit_17;
  MR_Word ParseTreeModuleSrc_18;
  MR_String FileNameD_19;
  MR_String FileContentsStrD_20;
  MR_Word ModuleName_33;
  MR_Word IntermodDeps_36;
  MR_Word MmakeFileD_37;
  MR_Word STATE_VARIABLE_Cache_1_41;
  MR_String _FileNameDProposed_35;
  MR_Word _Cache_21;

  Cache0_14 = parse_tree__make_module_file_names__init_module_file_name_cache_0_f_0();
  parse_tree__d_file_deps__construct_d_file_deps_hlds_5_p_0(Globals_9, BurdenedAugCompUnit_10, AvailModuleSets_11, MaybeInclTransOptRule_12, &DFileDeps_15);
  Baggage_16 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_10, 0))));
  AugCompUnit_17 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_10, 1))));
  ParseTreeModuleSrc_18 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_17, 0))));
  ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_18, 0))));
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_mmakefile_contents\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[2])), ModuleName_33, &FileNameD_19, &_FileNameDProposed_35);
  parse_tree__d_file_deps__construct_intermod_deps_8_p_0(Globals_9, ParseTreeModuleSrc_18, DFileDeps_15, &IntermodDeps_36, Cache0_14, &STATE_VARIABLE_Cache_1_41);
  parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0(Globals_9, Baggage_16, ParseTreeModuleSrc_18, DFileDeps_15, IntermodDeps_36, &MmakeFileD_37, STATE_VARIABLE_Cache_1_41, &_Cache_21);
  FileContentsStrD_20 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileD_37);
  parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_8, Globals_9, FileNameD_19, FileContentsStrD_20);
}

void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word FileOrModule_11,
  MR_Word * DepsMap_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_24,
  MR_Word * STATE_VARIABLE_WarnSpecs_25)
{
  MR_bool succeeded;
  MR_Word ModuleName_16;
  MR_Word STATE_VARIABLE_ErrSpecs_1_29;
  MR_Word STATE_VARIABLE_WarnSpecs_1_30;
  MR_Word ModuleDep_42;
  MR_Box conv0_ModuleDep_42;

  parse_tree__deps_map__generate_deps_map_10_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, FileOrModule_11, &ModuleName_16, DepsMap_12, &STATE_VARIABLE_ErrSpecs_1_29, &STATE_VARIABLE_WarnSpecs_1_30);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *DepsMap_12, ((MR_Box) (ModuleName_16)), &conv0_ModuleDep_42);
  if (succeeded)
  {
    ModuleDep_42 = ((MR_Word) (conv0_ModuleDep_42));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeBurdenedModule_17;
    MR_Word BurdenedModule_44 = ((MR_Word) ((MR_hl_field(0, ModuleDep_42, 1))));
    MR_Word Baggage_45 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_44, 0))));
    MR_Word Errors_47 = ((MR_Word) ((MR_hl_field(0, Baggage_45, 7))));
    MR_Word FatalErrors_48 = ((MR_Word) ((MR_hl_field(0, Errors_47, 0))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Errors_47, 1))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_48);
    if (succeeded)
      if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String UnexpectedMsg_50;
        MR_String Var_56;
        MR_String Var_80;

        Var_56 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), ((MR_Box) (FatalErrors_48)));
        Var_80 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "\n");
        UnexpectedMsg_50 = mercury__string__f_43_43_2_f_0((MR_String) "FatalErrorSpecs = [], with FatalErrors = ", Var_80);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.do_we_have_a_valid_module_dep\'/3", UnexpectedMsg_50);
          return;
        }
      }
      else
        {
          MaybeBurdenedModule_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBurdenedModule_17, 0) = ((MR_Box) (Var_67));
        }
    else
      {
        MaybeBurdenedModule_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBurdenedModule_17, 0) = ((MR_Box) (BurdenedModule_44));
      }
    if (((MR_tag((MR_Word) MaybeBurdenedModule_17)) == (MR_Integer) 0))
    {
      MR_Word FatalErrorSpecs_18 = ((MR_Word) ((MR_hl_field(0, MaybeBurdenedModule_17, 0))));

      *STATE_VARIABLE_ErrSpecs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), FatalErrorSpecs_18, STATE_VARIABLE_ErrSpecs_1_29);
      *STATE_VARIABLE_WarnSpecs_25 = STATE_VARIABLE_WarnSpecs_1_30;
    }
    else
    {
      MR_Word DepGraphs_20;
      MR_Word CdgErrSpecs_22;
      MR_Word CdgWarnSpecs_23;
      MR_Word Cache0_82;
      MR_Word BurdenedModule_94 = ((MR_Word) ((MR_hl_field(1, MaybeBurdenedModule_17, 0))));
      MR_Word _BurdenedModules_21;
      MR_Word _Cache_83;

      parse_tree__d_file_deps__compute_dep_graphs_gendep_10_p_0(ProgressStream_9, Globals_10, ModuleName_16, *DepsMap_12, &DepGraphs_20, &_BurdenedModules_21, &CdgErrSpecs_22, &CdgWarnSpecs_23);
      *STATE_VARIABLE_ErrSpecs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CdgErrSpecs_22, STATE_VARIABLE_ErrSpecs_1_29);
      *STATE_VARIABLE_WarnSpecs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CdgWarnSpecs_23, STATE_VARIABLE_WarnSpecs_1_30);
      Cache0_82 = parse_tree__make_module_file_names__init_module_file_name_cache_0_f_0();
      parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_8_p_0(ProgressStream_9, Globals_10, DepGraphs_20, BurdenedModule_94, Cache0_82, &_Cache_83);
    }
  }
  else
  {
    MR_Word FatalErrorSpecs_121 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), 0))));

    *STATE_VARIABLE_ErrSpecs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), FatalErrorSpecs_121, STATE_VARIABLE_ErrSpecs_1_29);
    *STATE_VARIABLE_WarnSpecs_25 = STATE_VARIABLE_WarnSpecs_1_30;
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_file_gendep_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word FileOrModule_11,
  MR_Word * DepsMap_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_26,
  MR_Word * STATE_VARIABLE_WarnSpecs_27)
{
  MR_bool succeeded;
  MR_Word ModuleName_16;
  MR_Word STATE_VARIABLE_ErrSpecs_1_31;
  MR_Word STATE_VARIABLE_WarnSpecs_1_32;
  MR_Word ModuleDep_40;
  MR_Box conv0_ModuleDep_40;

  parse_tree__deps_map__generate_deps_map_10_p_0(ProgressStream_9, Globals_10, (MR_Integer) 0, FileOrModule_11, &ModuleName_16, DepsMap_12, &STATE_VARIABLE_ErrSpecs_1_31, &STATE_VARIABLE_WarnSpecs_1_32);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *DepsMap_12, ((MR_Box) (ModuleName_16)), &conv0_ModuleDep_40);
  if (succeeded)
  {
    ModuleDep_40 = ((MR_Word) (conv0_ModuleDep_40));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeBurdenedModule_17;
    MR_Word BurdenedModule_42 = ((MR_Word) ((MR_hl_field(0, ModuleDep_40, 1))));
    MR_Word Baggage_43 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_42, 0))));
    MR_Word Errors_45 = ((MR_Word) ((MR_hl_field(0, Baggage_43, 7))));
    MR_Word FatalErrors_46 = ((MR_Word) ((MR_hl_field(0, Errors_45, 0))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Errors_45, 1))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_46);
    if (succeeded)
      if ((Var_65 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String UnexpectedMsg_48;
        MR_String Var_54;
        MR_String Var_78;

        Var_54 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), ((MR_Box) (FatalErrors_46)));
        Var_78 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) "\n");
        UnexpectedMsg_48 = mercury__string__f_43_43_2_f_0((MR_String) "FatalErrorSpecs = [], with FatalErrors = ", Var_78);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.do_we_have_a_valid_module_dep\'/3", UnexpectedMsg_48);
          return;
        }
      }
      else
        {
          MaybeBurdenedModule_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeBurdenedModule_17, 0) = ((MR_Box) (Var_65));
        }
    else
      {
        MaybeBurdenedModule_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBurdenedModule_17, 0) = ((MR_Box) (BurdenedModule_42));
      }
    if (((MR_tag((MR_Word) MaybeBurdenedModule_17)) == (MR_Integer) 0))
    {
      MR_Word FatalErrorSpecs_18 = ((MR_Word) ((MR_hl_field(0, MaybeBurdenedModule_17, 0))));

      *STATE_VARIABLE_ErrSpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), FatalErrorSpecs_18, STATE_VARIABLE_ErrSpecs_1_31);
      *STATE_VARIABLE_WarnSpecs_27 = STATE_VARIABLE_WarnSpecs_1_32;
    }
    else
    {
      MR_Word BurdenedModule_19 = ((MR_Word) ((MR_hl_field(1, MaybeBurdenedModule_17, 0))));
      MR_Word Baggage_20 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_19, 0))));
      MR_Word DepGraphs_22;
      MR_Word BurdenedModules_23;
      MR_Word CdgErrSpecs_24;
      MR_Word CdgWarnSpecs_25;
      MR_Word Cache0_80;
      MR_Word _Cache_81;

      parse_tree__write_deps_file__generate_and_write_dep_dv_files_gendep_7_p_0(ProgressStream_9, Globals_10, *DepsMap_12, ModuleName_16, Baggage_20);
      parse_tree__d_file_deps__compute_dep_graphs_gendep_10_p_0(ProgressStream_9, Globals_10, ModuleName_16, *DepsMap_12, &DepGraphs_22, &BurdenedModules_23, &CdgErrSpecs_24, &CdgWarnSpecs_25);
      *STATE_VARIABLE_ErrSpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CdgErrSpecs_24, STATE_VARIABLE_ErrSpecs_1_31);
      *STATE_VARIABLE_WarnSpecs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), CdgWarnSpecs_25, STATE_VARIABLE_WarnSpecs_1_32);
      Cache0_80 = parse_tree__make_module_file_names__init_module_file_name_cache_0_f_0();
      parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(ProgressStream_9, Globals_10, DepGraphs_22, BurdenedModules_23, Cache0_80, &_Cache_81);
    }
  }
  else
  {
    MR_Word FatalErrorSpecs_83 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), 0))));

    *STATE_VARIABLE_ErrSpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), FatalErrorSpecs_83, STATE_VARIABLE_ErrSpecs_1_31);
    *STATE_VARIABLE_WarnSpecs_27 = STATE_VARIABLE_WarnSpecs_1_32;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_loop_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word DepGraphs_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cache_6 = STATE_VARIABLE_Cache_0_5;
    else
    {
      MR_Word BurdenedModule_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word BurdenedModules_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_Cache_1_29;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_5;

      parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_8_p_0(ProgressStream_1, Globals_2, DepGraphs_3, BurdenedModule_21, STATE_VARIABLE_Cache_0_5, &STATE_VARIABLE_Cache_1_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = BurdenedModules_22;
      next_value_of_STATE_VARIABLE_Cache_0_5 = STATE_VARIABLE_Cache_1_29;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Cache_0_5 = next_value_of_STATE_VARIABLE_Cache_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_d_file_gendep_depgraphs_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word DepGraphs_11,
  MR_Word BurdenedModule_12,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23)
{
  MR_bool succeeded;
  MR_Word Baggage_15 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_12, 0))));
  MR_Word ParseTreeModuleSrc_16 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_12, 1))));
  MR_Word ModuleErrors_17 = ((MR_Word) ((MR_hl_field(0, Baggage_15, 7))));
  MR_Word FatalErrors_18 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_17, 0))));

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_18);
  if (succeeded)
  {
    MR_Word DFileDeps_19;
    MR_String FileNameD_20;
    MR_String FileContentsStrD_21;
    MR_Word ModuleName_40;
    MR_Word IntermodDeps_43;
    MR_Word MmakeFileD_44;
    MR_Word STATE_VARIABLE_Cache_1_48;
    MR_String _FileNameDProposed_42;

    parse_tree__d_file_deps__construct_d_file_deps_gendep_5_p_0(Globals_10, DepGraphs_11, Baggage_15, ParseTreeModuleSrc_16, &DFileDeps_19);
    ModuleName_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, 0))));
    parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_mmakefile_contents\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[2])), ModuleName_40, &FileNameD_20, &_FileNameDProposed_42);
    parse_tree__d_file_deps__construct_intermod_deps_8_p_0(Globals_10, ParseTreeModuleSrc_16, DFileDeps_19, &IntermodDeps_43, STATE_VARIABLE_Cache_0_22, &STATE_VARIABLE_Cache_1_48);
    parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0(Globals_10, Baggage_15, ParseTreeModuleSrc_16, DFileDeps_19, IntermodDeps_43, &MmakeFileD_44, STATE_VARIABLE_Cache_1_48, STATE_VARIABLE_Cache_23);
    FileContentsStrD_21 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileD_44);
    parse_tree__write_deps_file__write_out_d_file_6_p_0(ProgressStream_9, Globals_10, FileNameD_20, FileContentsStrD_21);
  }
  else
    *STATE_VARIABLE_Cache_23 = STATE_VARIABLE_Cache_0_22;
}

static void MR_CALL 
parse_tree__write_deps_file__write_out_d_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String FileNameD_9,
  MR_String FileContentsStrD_10)
{
  MR_Word TmpFileNameDResult_12;
  MR_String Var_31;

  Var_31 = mercury__dir__dirname_1_f_0(FileNameD_9);
  mercury__io__file__make_temp_file_6_p_0(Var_31, (MR_String) "tmp_d", (MR_String) "", &TmpFileNameDResult_12);
  if (((MR_tag((MR_Word) TmpFileNameDResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, TmpFileNameDResult_12, 0))));
    MR_String Message_14;
    MR_String Var_36;

    Var_36 = mercury__io__error_message_1_f_0(Error_13);
    Message_14 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_36);
    libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_7, Message_14);
  }
  else
  {
    MR_String TmpFileNameD_15 = ((MR_String) ((MR_hl_field(0, TmpFileNameDResult_12, 0))));
    MR_Word Verbose_16;
    MR_Word Result_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 131, &Verbose_16);
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
      MR_String Message_87;
      MR_String Var_106;
      MR_String Var_107;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_19);
      Var_107 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_106);
      Message_87 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_107);
      libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_7, Message_87);
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
            MR_Word RenameError_27 = ((MR_Word) ((MR_hl_field(1, SecondRenameResult_26, 0))));
            MR_String RenameErrorMsg_28;
            MR_String Message_89;
            MR_String Var_95;
            MR_String Var_96;
            MR_String Var_98;
            MR_String Var_99;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
            mercury__io__error_message_2_p_0(RenameError_27, &RenameErrorMsg_28);
            Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", RenameErrorMsg_28);
            Var_96 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_95);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_96);
            Var_99 = mercury__string__f_43_43_2_f_0(TmpFileNameD_15, Var_98);
            Message_89 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_99);
            libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_7, Message_89);
          }
        }
        else
        {
          MR_Word RemoveError_24 = ((MR_Word) ((MR_hl_field(1, RemoveResult_23, 0))));
          MR_String RemoveErrorMsg_25;
          MR_String Message_88;
          MR_String Var_102;
          MR_String Var_103;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_16, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_16);
          mercury__io__error_message_2_p_0(RemoveError_24, &RemoveErrorMsg_25);
          Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", RemoveErrorMsg_25);
          Var_103 = mercury__string__f_43_43_2_f_0(FileNameD_9, Var_102);
          Message_88 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_103);
          libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_7, Message_88);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_and_write_dep_dv_files_gendep_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word DepsMap_10,
  MR_Word ModuleName_11,
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

  parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0(Globals_9, SourceFileName_14, ModuleName_11, DepsMap_10, &MmakeFileDv_15);
  parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0(Globals_9, SourceFileName_14, ModuleName_11, DepsMap_10, &MmakeFileDep_16);
  MmakeFileStrDv_17 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDv_15);
  MmakeFileStrDep_18 = libs__mmakefiles__mmakefile_to_string_1_f_0(MmakeFileDep_16);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_and_write_dep_dv_files_gendep\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[0])), ModuleName_11, &FileNameDv_19, &_FileNameDvProposed_20);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_and_write_dep_dv_files_gendep\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[1])), ModuleName_11, &FileNameDep_21, &_FileNameDepProposed_22);
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

        backend_libs__create_launchers__create_java_shell_script_6_p_0(ProgressStream_8, Globals_9, ModuleName_11, &_Succeeded_26);
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
