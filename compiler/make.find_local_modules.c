/*
** Automatically generated from `make.find_local_modules.m'
** by the Mercury compiler,
** version rotd-2025-01-13
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


// :- module make.find_local_modules.
// :- implementation.

/*
INIT mercury__make__find_local_modules__init
ENDINIT
*/

#include "make.find_local_modules.mih"


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
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__2_2_p_0(
  MR_Word LambdaHeadVar__1_134,
  MR_Word * LambdaHeadVar__2_135);

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__1_2_p_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63);

static MR_bool MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__158__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word MDI_ModuleName_30);

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
make__find_local_modules__acc_module_index_trans_deps_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word KeepGoing_3,
  MR_Word WhichDeps_4,
  MR_Word ProcessModulesWhere_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word KeepGoing_15,
  MR_Word WhichDeps_16,
  MR_Word ProcessModulesWhere_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word * Succeeded_20,
  MR_Word ModuleIndexSet0_21,
  MR_Word * ModuleIndexSet_22,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);


static /* final */ const MR_Box make__find_local_modules_scalar_common_1[1][2];

static /* final */ const MR_Box make__find_local_modules_scalar_common_2[2][5];

static /* final */ const MR_Box make__find_local_modules_scalar_common_3[4][3];




static /* final */ const MR_Box make__find_local_modules_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
};

static /* final */ const MR_Box make__find_local_modules_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__find_local_modules_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_2[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_2[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_2[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_2[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__2_2_p_0(
  MR_Word LambdaHeadVar__1_134,
  MR_Word * LambdaHeadVar__2_135)
{
  *LambdaHeadVar__2_135 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_134, (MR_Integer) 1))));
}

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__1_2_p_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63)
{
  *LambdaHeadVar__2_63 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_62, (MR_Integer) 1))));
}

static MR_bool MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__158__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word MDI_ModuleName_30)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_22, MDI_ModuleName_30);
  return succeeded;
}

void MR_CALL 
make__find_local_modules__find_reachable_local_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word * Succeeded_13,
  MR_Word * ModuleNameSet_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word ModuleIndex_17;
  MR_Word ModuleIndexSet_18;
  MR_Word STATE_VARIABLE_Info_23_23;

  make__deps_set__module_name_to_index_4_p_0(ModuleName_12, &ModuleIndex_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
  make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_10, Globals_11, (MR_Integer) 2, (MR_Integer) 0, ModuleIndex_17, Succeeded_13, &ModuleIndexSet_18, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
  make__deps_set__module_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_20, ModuleIndexSet_18, ModuleNameSet_14);
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_135;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_135);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_135));
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_63;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_63);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_63));
}

static MR_bool MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__158__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word WhichDeps_14,
  MR_Word ProcessModulesWhere_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ModuleIndexSet_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word Key_21;
  MR_Word Result0_22;

  {
    Key_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Key_21, 0) = ((MR_Box) (ModuleIndex_16));
    MR_hl_field(0, Key_21, 1) = (MR_Box) (((((MR_Unsigned) (WhichDeps_14) << 1)) | (MR_Unsigned) (ProcessModulesWhere_15)));
  }
  succeeded = make__deps_cache__search_trans_deps_cache_3_p_0(STATE_VARIABLE_Info_0_25, Key_21, &Result0_22);
  if (succeeded)
  {
    *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_22, (MR_Integer) 0))) & (MR_Integer) 1);
    *ModuleIndexSet_18 = ((MR_Word) ((MR_hl_field(0, Result0_22, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word KeepGoing_23;
    MR_Word Result_24;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_30_30;

    KeepGoing_23 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_25);
    Var_29 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    succeeded = make__deps_set__deps_set_member_2_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), Var_29);
    if (succeeded)
    {
      *Succeeded_17 = (MR_Integer) 1;
      *ModuleIndexSet_18 = Var_29;
      STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_25;
    }
    else
    {
      MR_Word Result0_33;

      succeeded = make__deps_cache__search_trans_deps_cache_3_p_0(STATE_VARIABLE_Info_0_25, Key_21, &Result0_33);
      if (succeeded)
      {
        MR_Word ModuleIndexSet1_34;

        *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_33, (MR_Integer) 0))) & (MR_Integer) 1);
        ModuleIndexSet1_34 = ((MR_Word) ((MR_hl_field(0, Result0_33, (MR_Integer) 1))));
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Var_29, ModuleIndexSet1_34, ModuleIndexSet_18);
        STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_25;
      }
      else
      {
        MR_Word ModuleName_35;
        MR_Word MaybeModuleDepInfo_36;
        MR_Word STATE_VARIABLE_Info_36_39;

        make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_16, &ModuleName_35);
        make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_12, Globals_13, ModuleName_35, &MaybeModuleDepInfo_36, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_36_39);
        if ((MaybeModuleDepInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Succeeded_17 = (MR_Integer) 0;
          *ModuleIndexSet_18 = Var_29;
          STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_36_39;
        }
        else
        {
          MR_Word ModuleDepInfo_37 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_36, (MR_Integer) 0))));
          MR_String ModuleDir_38;

          parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_37, &ModuleDir_38);
          switch (ProcessModulesWhere_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              {
                MR_String Var_43;

                Var_43 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_38, Var_43) == 0);
              }
              break;
          }
          if (succeeded)
          {
            MR_Word FIMSpecs_44;
            MR_Word MDI_ModuleName_45;
            MR_Word IntImportedModuleNames_46;
            MR_Word ToCheckImportedModuleNames_47;
            MR_Word ToCheckIncludedModuleNames_48;
            MR_Word ImportedModuleIndexSet_52;
            MR_Word IncludedModuleIndexSet_53;
            MR_Word ToAccImportedModuleIndexes_54;
            MR_Word ToAccIncludedModuleIndexes_55;
            MR_Word ModuleIndexSet1_56;
            MR_Word OldImportingModule_57;
            MR_Word SucceededImports_58;
            MR_Word ModuleIndexSet2_59;
            MR_Word SucceededIncludes_60;
            MR_Word Var_61;
            MR_Word Var_70;
            MR_Word STATE_VARIABLE_Info_92_71;
            MR_Word Var_72;
            MR_Word STATE_VARIABLE_Info_94_73;
            MR_Word Var_74;
            MR_Word STATE_VARIABLE_Info_96_75;
            MR_Word Var_76;
            MR_Word STATE_VARIABLE_Info_99_78;
            MR_Word Var_80;
            MR_Word STATE_VARIABLE_Info_102_81;
            MR_Word Var_82;
            MR_Word STATE_VARIABLE_Info_105_84;

            parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_37, &FIMSpecs_44);
            parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_37, &MDI_ModuleName_45);
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__find_local_modules_scalar_common_2[0]));
              MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_11_p_0_1));
              MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_61, 3) = ((MR_Box) (ModuleName_35));
              MR_hl_field(0, Var_61, 4) = ((MR_Box) (MDI_ModuleName_45));
            }
            mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140make.find_local_modules.do_find_transitive_module_dependencies_uncached\'/15", (MR_String) "ModuleName != MDI_ModuleName");
            parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_37, &IntImportedModuleNames_46);
            switch (WhichDeps_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word AncestorModuleNames_49;
                  MR_Word ImpImportedModuleNames_50;
                  MR_Word ForeignImportedModuleNames_51;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;

                  AncestorModuleNames_49 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_35);
                  parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_37, &ImpImportedModuleNames_50);
                  mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_3[2]), FIMSpecs_44, &ForeignImportedModuleNames_51);
                  {
                    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_68, 0) = ((MR_Box) (ForeignImportedModuleNames_51));
                    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (ImpImportedModuleNames_50));
                    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
                  }
                  {
                    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_66, 0) = ((MR_Box) (IntImportedModuleNames_46));
                    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_65, 0) = ((MR_Box) (AncestorModuleNames_49));
                    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
                  }
                  ToCheckImportedModuleNames_47 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_65);
                  parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_37, &ToCheckIncludedModuleNames_48);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AncestorModuleNames_90;
                  MR_Word ImpImportedModuleNames_91;
                  MR_Word ForeignImportedModuleNames_92;
                  MR_Word Var_94;
                  MR_Word Var_95;
                  MR_Word Var_96;
                  MR_Word Var_97;

                  AncestorModuleNames_90 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_35);
                  parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_37, &ImpImportedModuleNames_91);
                  mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_3[3]), FIMSpecs_44, &ForeignImportedModuleNames_92);
                  {
                    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_97, 0) = ((MR_Box) (ForeignImportedModuleNames_92));
                    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_96, 0) = ((MR_Box) (ImpImportedModuleNames_91));
                    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
                  }
                  {
                    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_95, 0) = ((MR_Box) (IntImportedModuleNames_46));
                    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
                  }
                  {
                    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_94, 0) = ((MR_Box) (AncestorModuleNames_90));
                    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
                  }
                  ToCheckImportedModuleNames_47 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
                  ToCheckIncludedModuleNames_48 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
                }
                break;
              case (MR_Integer) 0:
                {
                  ToCheckImportedModuleNames_47 = IntImportedModuleNames_46;
                  ToCheckIncludedModuleNames_48 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
                }
                break;
            }
            Var_70 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ToCheckImportedModuleNames_47);
            make__deps_set__module_names_to_index_set_4_p_0(Var_70, &ImportedModuleIndexSet_52, STATE_VARIABLE_Info_36_39, &STATE_VARIABLE_Info_92_71);
            Var_72 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ToCheckIncludedModuleNames_48);
            make__deps_set__module_names_to_index_set_4_p_0(Var_72, &IncludedModuleIndexSet_53, STATE_VARIABLE_Info_92_71, &STATE_VARIABLE_Info_94_73);
            ToAccImportedModuleIndexes_54 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ImportedModuleIndexSet_52);
            ToAccIncludedModuleIndexes_55 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), IncludedModuleIndexSet_53);
            make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), Var_29, &ModuleIndexSet1_56);
            OldImportingModule_57 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_94_73);
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_76, 0) = ((MR_Box) (ModuleName_35));
            }
            {
              Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_76));
            }
            make__make_info__make_info_set_importing_module_3_p_0(Var_74, STATE_VARIABLE_Info_94_73, &STATE_VARIABLE_Info_96_75);
            make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_12, Globals_13, KeepGoing_23, WhichDeps_14, ProcessModulesWhere_15, ToAccImportedModuleIndexes_54, (MR_Integer) 1, &SucceededImports_58, ModuleIndexSet1_56, &ModuleIndexSet2_59, STATE_VARIABLE_Info_96_75, &STATE_VARIABLE_Info_99_78);
            {
              Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_82, 0) = ((MR_Box) (ModuleName_35));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_82));
            }
            make__make_info__make_info_set_importing_module_3_p_0(Var_80, STATE_VARIABLE_Info_99_78, &STATE_VARIABLE_Info_102_81);
            make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_12, Globals_13, KeepGoing_23, WhichDeps_14, ProcessModulesWhere_15, ToAccIncludedModuleIndexes_55, (MR_Integer) 1, &SucceededIncludes_60, ModuleIndexSet2_59, ModuleIndexSet_18, STATE_VARIABLE_Info_102_81, &STATE_VARIABLE_Info_105_84);
            make__make_info__make_info_set_importing_module_3_p_0(OldImportingModule_57, STATE_VARIABLE_Info_105_84, &STATE_VARIABLE_Info_30_30);
            *Succeeded_17 = libs__maybe_util__and_2_f_0(SucceededImports_58, SucceededIncludes_60);
          }
          else
          {
            *Succeeded_17 = (MR_Integer) 1;
            *ModuleIndexSet_18 = Var_29;
            STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_36_39;
          }
        }
      }
    }
    {
      Result_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_24, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
      MR_hl_field(0, Result_24, 1) = ((MR_Box) (*ModuleIndexSet_18));
    }
    make__deps_cache__add_to_trans_deps_cache_4_p_0(Key_21, Result_24, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_26);
  }
}

static void MR_CALL 
make__find_local_modules__acc_module_index_trans_deps_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word KeepGoing_3,
  MR_Word WhichDeps_4,
  MR_Word ProcessModulesWhere_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      *HeadVar__10_10 = HeadVar__9_9;
      *STATE_VARIABLE_Succeeded_8 = STATE_VARIABLE_Succeeded_0_7;
    }
    else
    {
      MR_Word HeadModuleIndex_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word TailModuleIndexes_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word HeadSucceeded_43;
      MR_Word StopOrContinue_44;
      MR_Word STATE_VARIABLE_ModuleIndexSet_53_53;
      MR_Word STATE_VARIABLE_Info_54_54;
      MR_Word STATE_VARIABLE_Succeeded_56_56;

      make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(ProgressStream_1, KeepGoing_3, WhichDeps_4, ProcessModulesWhere_5, Globals_2, HeadModuleIndex_37, &HeadSucceeded_43, HeadVar__9_9, &STATE_VARIABLE_ModuleIndexSet_53_53, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_54_54);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_3, HeadSucceeded_43, &StopOrContinue_44, STATE_VARIABLE_Succeeded_0_7, &STATE_VARIABLE_Succeeded_56_56);
      switch (StopOrContinue_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__6_6 = TailModuleIndexes_38;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_7 = STATE_VARIABLE_Succeeded_56_56;
            MR_Word next_value_of_HeadVar__9_9 = STATE_VARIABLE_ModuleIndexSet_53_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_54_54;

            // direct tailcall eliminated
            ;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            STATE_VARIABLE_Succeeded_0_7 = next_value_of_STATE_VARIABLE_Succeeded_0_7;
            HeadVar__9_9 = next_value_of_HeadVar__9_9;
            STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_8 = STATE_VARIABLE_Succeeded_56_56;
            *HeadVar__10_10 = STATE_VARIABLE_ModuleIndexSet_53_53;
            *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_54_54;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_135;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_135);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_135));
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_63;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__174__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_63);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_63));
}

static MR_bool MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__158__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word KeepGoing_15,
  MR_Word WhichDeps_16,
  MR_Word ProcessModulesWhere_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word * Succeeded_20,
  MR_Word ModuleIndexSet0_21,
  MR_Word * ModuleIndexSet_22,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;

  succeeded = make__deps_set__deps_set_member_2_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ((MR_Box) (ModuleIndex_19)), ModuleIndexSet0_21);
  if (succeeded)
  {
    *Succeeded_20 = (MR_Integer) 1;
    *ModuleIndexSet_22 = ModuleIndexSet0_21;
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
  }
  else
  {
    MR_Word Result0_26;
    MR_Word Key_25;

    {
      Key_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Key_25, 0) = ((MR_Box) (ModuleIndex_19));
      MR_hl_field(0, Key_25, 1) = (MR_Box) (((((MR_Unsigned) (WhichDeps_16) << 1)) | (MR_Unsigned) (ProcessModulesWhere_17)));
    }
    succeeded = make__deps_cache__search_trans_deps_cache_3_p_0(STATE_VARIABLE_Info_0_32, Key_25, &Result0_26);
    if (succeeded)
    {
      MR_Word ModuleIndexSet1_27;

      *Succeeded_20 = ((MR_Unsigned) ((MR_hl_field(0, Result0_26, (MR_Integer) 0))) & (MR_Integer) 1);
      ModuleIndexSet1_27 = ((MR_Word) ((MR_hl_field(0, Result0_26, (MR_Integer) 1))));
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ModuleIndexSet0_21, ModuleIndexSet1_27, ModuleIndexSet_22);
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
    }
    else
    {
      MR_Word ModuleName_28;
      MR_Word MaybeModuleDepInfo_29;
      MR_Word STATE_VARIABLE_Info_36_36;

      make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_32, ModuleIndex_19, &ModuleName_28);
      make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_14, Globals_18, ModuleName_28, &MaybeModuleDepInfo_29, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_36_36);
      if ((MaybeModuleDepInfo_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Succeeded_20 = (MR_Integer) 0;
        *ModuleIndexSet_22 = ModuleIndexSet0_21;
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
      }
      else
      {
        MR_Word ModuleDepInfo_30 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_29, (MR_Integer) 0))));
        MR_String ModuleDir_31;

        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_30, &ModuleDir_31);
        switch (ProcessModulesWhere_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_40;

              Var_40 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_31, Var_40) == 0);
            }
            break;
        }
        if (succeeded)
        {
          MR_Word FIMSpecs_41;
          MR_Word MDI_ModuleName_42;
          MR_Word IntImportedModuleNames_43;
          MR_Word ToCheckImportedModuleNames_44;
          MR_Word ToCheckIncludedModuleNames_45;
          MR_Word ImportedModuleIndexSet_49;
          MR_Word IncludedModuleIndexSet_50;
          MR_Word ToAccImportedModuleIndexes_51;
          MR_Word ToAccIncludedModuleIndexes_52;
          MR_Word ModuleIndexSet1_53;
          MR_Word OldImportingModule_54;
          MR_Word SucceededImports_55;
          MR_Word ModuleIndexSet2_56;
          MR_Word SucceededIncludes_57;
          MR_Word Var_58;
          MR_Word Var_67;
          MR_Word STATE_VARIABLE_Info_92_68;
          MR_Word Var_69;
          MR_Word STATE_VARIABLE_Info_94_70;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_Info_96_72;
          MR_Word Var_73;
          MR_Word STATE_VARIABLE_Info_99_75;
          MR_Word Var_77;
          MR_Word STATE_VARIABLE_Info_102_78;
          MR_Word Var_79;
          MR_Word STATE_VARIABLE_Info_105_81;

          parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_30, &FIMSpecs_41);
          parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_30, &MDI_ModuleName_42);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__find_local_modules_scalar_common_2[0]));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_1));
            MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_58, 3) = ((MR_Box) (ModuleName_28));
            MR_hl_field(0, Var_58, 4) = ((MR_Box) (MDI_ModuleName_42));
          }
          mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140make.find_local_modules.do_find_transitive_module_dependencies_uncached\'/15", (MR_String) "ModuleName != MDI_ModuleName");
          parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_30, &IntImportedModuleNames_43);
          switch (WhichDeps_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word AncestorModuleNames_46;
                MR_Word ImpImportedModuleNames_47;
                MR_Word ForeignImportedModuleNames_48;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_65;

                AncestorModuleNames_46 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_28);
                parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_30, &ImpImportedModuleNames_47);
                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_3[0]), FIMSpecs_41, &ForeignImportedModuleNames_48);
                {
                  Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_65, 0) = ((MR_Box) (ForeignImportedModuleNames_48));
                  MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (ImpImportedModuleNames_47));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (IntImportedModuleNames_43));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (AncestorModuleNames_46));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
                }
                ToCheckImportedModuleNames_44 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_62);
                parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_30, &ToCheckIncludedModuleNames_45);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AncestorModuleNames_87;
                MR_Word ImpImportedModuleNames_88;
                MR_Word ForeignImportedModuleNames_89;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;

                AncestorModuleNames_87 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_28);
                parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_30, &ImpImportedModuleNames_88);
                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_3[1]), FIMSpecs_41, &ForeignImportedModuleNames_89);
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (ForeignImportedModuleNames_89));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (ImpImportedModuleNames_88));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (IntImportedModuleNames_43));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
                }
                {
                  Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_91, 0) = ((MR_Box) (AncestorModuleNames_87));
                  MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
                }
                ToCheckImportedModuleNames_44 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_91);
                ToCheckIncludedModuleNames_45 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
            case (MR_Integer) 0:
              {
                ToCheckImportedModuleNames_44 = IntImportedModuleNames_43;
                ToCheckIncludedModuleNames_45 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
          }
          Var_67 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ToCheckImportedModuleNames_44);
          make__deps_set__module_names_to_index_set_4_p_0(Var_67, &ImportedModuleIndexSet_49, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_92_68);
          Var_69 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ToCheckIncludedModuleNames_45);
          make__deps_set__module_names_to_index_set_4_p_0(Var_69, &IncludedModuleIndexSet_50, STATE_VARIABLE_Info_92_68, &STATE_VARIABLE_Info_94_70);
          ToAccImportedModuleIndexes_51 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ImportedModuleIndexSet_49);
          ToAccIncludedModuleIndexes_52 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), IncludedModuleIndexSet_50);
          make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[0]), ((MR_Box) (ModuleIndex_19)), ModuleIndexSet0_21, &ModuleIndexSet1_53);
          OldImportingModule_54 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_94_70);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (ModuleName_28));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_73));
          }
          make__make_info__make_info_set_importing_module_3_p_0(Var_71, STATE_VARIABLE_Info_94_70, &STATE_VARIABLE_Info_96_72);
          make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_14, Globals_18, KeepGoing_15, WhichDeps_16, ProcessModulesWhere_17, ToAccImportedModuleIndexes_51, (MR_Integer) 1, &SucceededImports_55, ModuleIndexSet1_53, &ModuleIndexSet2_56, STATE_VARIABLE_Info_96_72, &STATE_VARIABLE_Info_99_75);
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (ModuleName_28));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_79));
          }
          make__make_info__make_info_set_importing_module_3_p_0(Var_77, STATE_VARIABLE_Info_99_75, &STATE_VARIABLE_Info_102_78);
          make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_14, Globals_18, KeepGoing_15, WhichDeps_16, ProcessModulesWhere_17, ToAccIncludedModuleIndexes_52, (MR_Integer) 1, &SucceededIncludes_57, ModuleIndexSet2_56, ModuleIndexSet_22, STATE_VARIABLE_Info_102_78, &STATE_VARIABLE_Info_105_81);
          make__make_info__make_info_set_importing_module_3_p_0(OldImportingModule_54, STATE_VARIABLE_Info_105_81, STATE_VARIABLE_Info_33);
          *Succeeded_20 = libs__maybe_util__and_2_f_0(SucceededImports_55, SucceededIncludes_57);
        }
        else
        {
          *Succeeded_20 = (MR_Integer) 1;
          *ModuleIndexSet_22 = ModuleIndexSet0_21;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_36_36;
        }
      }
    }
  }
}

void mercury__make__find_local_modules__init(void)
{
}

void mercury__make__find_local_modules__init_type_tables(void)
{
}

void mercury__make__find_local_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__find_local_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.find_local_modules.
