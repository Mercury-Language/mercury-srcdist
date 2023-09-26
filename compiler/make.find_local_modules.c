/*
** Automatically generated from `make.find_local_modules.m'
** by the Mercury compiler,
** version rotd-2023-09-26
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 make__find_local_modules__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__find_local_modules__tree234__ti_tree234_2make__deps_cache__type_ctor_info_transitive_dependencies_root_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__2_2_p_0(
  MR_Word LambdaHeadVar__1_90,
  MR_Word * LambdaHeadVar__2_91);

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__1_2_p_0(
  MR_Word LambdaHeadVar__1_55,
  MR_Word * LambdaHeadVar__2_56);

static MR_bool MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__168__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word MDI_ModuleName_30);

static void MR_CALL 
make__find_local_modules__acc_module_index_trans_deps_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word DependenciesType_3,
  MR_Word ProcessModulesWhere_4,
  MR_Word Globals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word STATE_VARIABLE_Deps_0_9,
  MR_Word * STATE_VARIABLE_Deps_10,
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
  MR_Word DependenciesType_16,
  MR_Word ProcessModulesWhere_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word * Succeeded_20,
  MR_Word Modules0_21,
  MR_Word * Modules_22,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static MR_bool MR_CALL 
make__find_local_modules____Unify____cached_transitive_dependencies_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__find_local_modules____Compare____cached_transitive_dependencies_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__find_local_modules_scalar_common_1[2][2];

static /* final */ const MR_Box make__find_local_modules_scalar_common_2[3][3];

static /* final */ const MR_Box make__find_local_modules_scalar_common_3[2][5];




static /* final */ const MR_Box make__find_local_modules_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
};

static /* final */ const MR_Box make__find_local_modules_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0)),
    ((MR_Box) (&make__find_local_modules_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_3[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__find_local_modules_scalar_common_3[1])),
    ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__find_local_modules_scalar_common_3[2][5] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_TypeInfo_Struct1 make__find_local_modules__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__find_local_modules__tree234__ti_tree234_2make__deps_cache__type_ctor_info_transitive_dependencies_root_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0),
    (MR_TypeInfo) (&make__find_local_modules__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__find_local_modules__make__find_local_modules__type_ctor_info_cached_transitive_dependencies_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__find_local_modules____Unify____cached_transitive_dependencies_0_0_10001)),
  ((MR_Box) (make__find_local_modules____Compare____cached_transitive_dependencies_0_0_10001)),
  (MR_String) "make.find_local_modules",
  (MR_String) "cached_transitive_dependencies",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__find_local_modules__tree234__ti_tree234_2make__deps_cache__type_ctor_info_transitive_dependencies_root_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__2_2_p_0(
  MR_Word LambdaHeadVar__1_90,
  MR_Word * LambdaHeadVar__2_91)
{
  *LambdaHeadVar__2_91 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_90, (MR_Integer) 1))));
}

static void MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__1_2_p_0(
  MR_Word LambdaHeadVar__1_55,
  MR_Word * LambdaHeadVar__2_56)
{
  *LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, (MR_Integer) 1))));
}

static MR_bool MR_CALL 
make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__168__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word MDI_ModuleName_30)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_22, MDI_ModuleName_30);
  return succeeded;
}

void MR_CALL 
make__find_local_modules____Compare____cached_transitive_dependencies_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__find_local_modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__find_local_modules____Unify____cached_transitive_dependencies_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__find_local_modules_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__find_local_modules__find_reachable_local_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word * Succeeded_13,
  MR_Word * Modules_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word ModuleIndex_17;
  MR_Word Modules0_18;
  MR_Word STATE_VARIABLE_Info_23_23;

  make__deps_set__module_name_to_index_4_p_0(ModuleName_12, &ModuleIndex_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
  make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_10, Globals_11, (MR_Integer) 2, (MR_Integer) 0, ModuleIndex_17, Succeeded_13, &Modules0_18, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
  make__deps_set__module_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_20, Modules0_18, Modules_14);
}

void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word DependenciesType_14,
  MR_Word ProcessModulesWhere_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * Modules_18,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word DepsRoot_21;
  MR_Word CachedTransDeps0_22;
  MR_Word Result0_23;
  MR_Box conv0_Result0_23;

  {
    DepsRoot_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DepsRoot_21, 0) = ((MR_Box) (ModuleIndex_16));
    MR_hl_field(0, DepsRoot_21, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_14) << 1)) | (MR_Unsigned) (ProcessModulesWhere_15)));
  }
  CachedTransDeps0_22 = make__make_info__make_info_get_cached_transitive_dependencies_1_f_0(STATE_VARIABLE_Info_0_28);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__find_local_modules_scalar_common_1[0]), CachedTransDeps0_22, ((MR_Box) (DepsRoot_21)), &conv0_Result0_23);
  if (succeeded)
  {
    Result0_23 = ((MR_Word) (conv0_Result0_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_23, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_18 = ((MR_Word) ((MR_hl_field(0, Result0_23, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    MR_Word KeepGoing_24;
    MR_Word Result_25;
    MR_Word CachedTransDeps1_26;
    MR_Word CachedTransDeps_27;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_33_33;

    KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_28);
    Var_32 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(ProgressStream_12, KeepGoing_24, DependenciesType_14, ProcessModulesWhere_15, Globals_13, ModuleIndex_16, Succeeded_17, Var_32, Modules_18, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_33_33);
    {
      Result_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_25, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
      MR_hl_field(0, Result_25, 1) = ((MR_Box) (*Modules_18));
    }
    CachedTransDeps1_26 = make__make_info__make_info_get_cached_transitive_dependencies_1_f_0(STATE_VARIABLE_Info_33_33);
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__find_local_modules_scalar_common_1[0]), ((MR_Box) (DepsRoot_21)), ((MR_Box) (Result_25)), CachedTransDeps1_26, &CachedTransDeps_27);
    make__make_info__make_info_set_cached_transitive_dependencies_3_p_0(CachedTransDeps_27, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_29);
  }
}

static void MR_CALL 
make__find_local_modules__acc_module_index_trans_deps_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word DependenciesType_3,
  MR_Word ProcessModulesWhere_4,
  MR_Word Globals_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word STATE_VARIABLE_Deps_0_9,
  MR_Word * STATE_VARIABLE_Deps_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      *STATE_VARIABLE_Deps_10 = STATE_VARIABLE_Deps_0_9;
      *STATE_VARIABLE_Succeeded_8 = STATE_VARIABLE_Succeeded_0_7;
    }
    else
    {
      MR_Word HeadModuleIndex_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word TailModuleIndexes_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word HeadSucceeded_43;
      MR_Word STATE_VARIABLE_Deps_52_52;
      MR_Word STATE_VARIABLE_Info_53_53;

      make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(ProgressStream_1, KeepGoing_2, DependenciesType_3, ProcessModulesWhere_4, Globals_5, HeadModuleIndex_37, &HeadSucceeded_43, STATE_VARIABLE_Deps_0_9, &STATE_VARIABLE_Deps_52_52, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_53_53);
      succeeded = (HeadSucceeded_43 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_2 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_55_55;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_9;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_11;

        STATE_VARIABLE_Succeeded_55_55 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_7, HeadSucceeded_43);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__6_6 = TailModuleIndexes_38;
        next_value_of_STATE_VARIABLE_Succeeded_0_7 = STATE_VARIABLE_Succeeded_55_55;
        next_value_of_STATE_VARIABLE_Deps_0_9 = STATE_VARIABLE_Deps_52_52;
        next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_53_53;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_Succeeded_0_7 = next_value_of_STATE_VARIABLE_Succeeded_0_7;
        STATE_VARIABLE_Deps_0_9 = next_value_of_STATE_VARIABLE_Deps_0_9;
        STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_8 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_53_53;
        *STATE_VARIABLE_Deps_10 = STATE_VARIABLE_Deps_52_52;
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
  MR_Word conv2_LambdaHeadVar__2_91;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_91);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_91));
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_56;

  make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__184__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_56);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_56));
}

static MR_bool MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__find_local_modules__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__168__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word KeepGoing_15,
  MR_Word DependenciesType_16,
  MR_Word ProcessModulesWhere_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word * Succeeded_20,
  MR_Word Modules0_21,
  MR_Word * Modules_22,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;

  succeeded = make__deps_set__deps_set_member_2_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[1]), ((MR_Box) (ModuleIndex_19)), Modules0_21);
  if (succeeded)
  {
    *Succeeded_20 = (MR_Integer) 1;
    *Modules_22 = Modules0_21;
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
  }
  else
  {
    MR_Word Result0_26;
    MR_Word DepsRoot_25;
    MR_Word Var_36;
    MR_Box conv0_Result0_26;

    {
      DepsRoot_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DepsRoot_25, 0) = ((MR_Box) (ModuleIndex_19));
      MR_hl_field(0, DepsRoot_25, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_16) << 1)) | (MR_Unsigned) (ProcessModulesWhere_17)));
    }
    Var_36 = make__make_info__make_info_get_cached_transitive_dependencies_1_f_0(STATE_VARIABLE_Info_0_32);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__find_local_modules_scalar_common_1[0]), Var_36, ((MR_Box) (DepsRoot_25)), &conv0_Result0_26);
    if (succeeded)
    {
      Result0_26 = ((MR_Word) (conv0_Result0_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Modules1_27;

      *Succeeded_20 = ((MR_Unsigned) ((MR_hl_field(0, Result0_26, (MR_Integer) 0))) & (MR_Integer) 1);
      Modules1_27 = ((MR_Word) ((MR_hl_field(0, Result0_26, (MR_Integer) 1))));
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Modules0_21, Modules1_27, Modules_22);
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
    }
    else
    {
      MR_Word ModuleName_28;
      MR_Word MaybeModuleDepInfo_29;
      MR_Word STATE_VARIABLE_Info_37_37;

      make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_32, ModuleIndex_19, &ModuleName_28);
      make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_14, Globals_18, ModuleName_28, &MaybeModuleDepInfo_29, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
      if ((MaybeModuleDepInfo_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Succeeded_20 = (MR_Integer) 0;
        *Modules_22 = Modules0_21;
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_37_37;
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
              MR_String Var_43;

              Var_43 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_31, Var_43) == 0);
            }
            break;
        }
        if (succeeded)
        {
          MR_Word FIMSpecs_44;
          MR_Word MDI_ModuleName_45;
          MR_Word IntDeps_46;
          MR_Word ImportsToCheck_47;
          MR_Word IncludesToCheck_48;
          MR_Word ImportsToCheckSet_52;
          MR_Word IncludesToCheckSet_53;
          MR_Word Modules1_54;
          MR_Word OldImportingModule_55;
          MR_Word SucceededImports_56;
          MR_Word Modules2_57;
          MR_Word SucceededIncludes_58;
          MR_Word Var_59;
          MR_Word Var_68;
          MR_Word STATE_VARIABLE_Info_63_69;
          MR_Word Var_70;
          MR_Word STATE_VARIABLE_Info_65_71;
          MR_Word Var_72;
          MR_Word STATE_VARIABLE_Info_67_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word STATE_VARIABLE_Info_71_77;
          MR_Word Var_79;
          MR_Word STATE_VARIABLE_Info_74_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word STATE_VARIABLE_Info_78_84;

          parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_30, &FIMSpecs_44);
          parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_30, &MDI_ModuleName_45);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__find_local_modules_scalar_common_3[0]));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__find_local_modules__find_transitive_module_dependencies_uncached_13_p_0_1));
            MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_59, 3) = ((MR_Box) (ModuleName_28));
            MR_hl_field(0, Var_59, 4) = ((MR_Box) (MDI_ModuleName_45));
          }
          mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140make.find_local_modules.do_find_transitive_module_dependencies_uncached\'/15", (MR_String) "ModuleName != MDI_ModuleName");
          parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_30, &IntDeps_46);
          switch (DependenciesType_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word Ancestors_49;
                MR_Word ImpDeps_50;
                MR_Word ForeignDeps_51;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_65;
                MR_Word Var_66;

                Ancestors_49 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_28);
                parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_30, &ImpDeps_50);
                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_2[1]), FIMSpecs_44, &ForeignDeps_51);
                {
                  Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_66, 0) = ((MR_Box) (ForeignDeps_51));
                  MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_65, 0) = ((MR_Box) (ImpDeps_50));
                  MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
                }
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (IntDeps_46));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (Ancestors_49));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
                }
                ImportsToCheck_47 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_63);
                parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_30, &IncludesToCheck_48);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Ancestors_90;
                MR_Word ImpDeps_91;
                MR_Word ForeignDeps_92;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Word Var_97;

                Ancestors_90 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_28);
                parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_30, &ImpDeps_91);
                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__find_local_modules_scalar_common_2[2]), FIMSpecs_44, &ForeignDeps_92);
                {
                  Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_97, 0) = ((MR_Box) (ForeignDeps_92));
                  MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (ImpDeps_91));
                  MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_95, 0) = ((MR_Box) (IntDeps_46));
                  MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (Ancestors_90));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
                }
                ImportsToCheck_47 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
                IncludesToCheck_48 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
            case (MR_Integer) 0:
              {
                ImportsToCheck_47 = IntDeps_46;
                IncludesToCheck_48 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
          }
          Var_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportsToCheck_47);
          make__deps_set__module_names_to_index_set_4_p_0(Var_68, &ImportsToCheckSet_52, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_63_69);
          Var_70 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IncludesToCheck_48);
          make__deps_set__module_names_to_index_set_4_p_0(Var_70, &IncludesToCheckSet_53, STATE_VARIABLE_Info_63_69, &STATE_VARIABLE_Info_65_71);
          make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__find_local_modules_scalar_common_1[1]), ((MR_Box) (ModuleIndex_19)), Modules0_21, &Modules1_54);
          OldImportingModule_55 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_65_71);
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_74, 0) = ((MR_Box) (ModuleName_28));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_74));
          }
          make__make_info__make_info_set_importing_module_3_p_0(Var_72, STATE_VARIABLE_Info_65_71, &STATE_VARIABLE_Info_67_73);
          Var_75 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[1]), ImportsToCheckSet_52);
          make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_14, KeepGoing_15, DependenciesType_16, ProcessModulesWhere_17, Globals_18, Var_75, (MR_Integer) 1, &SucceededImports_56, Modules1_54, &Modules2_57, STATE_VARIABLE_Info_67_73, &STATE_VARIABLE_Info_71_77);
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (ModuleName_28));
          }
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_81));
          }
          make__make_info__make_info_set_importing_module_3_p_0(Var_79, STATE_VARIABLE_Info_71_77, &STATE_VARIABLE_Info_74_80);
          Var_82 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__find_local_modules_scalar_common_1[1]), IncludesToCheckSet_53);
          make__find_local_modules__acc_module_index_trans_deps_14_p_0(ProgressStream_14, KeepGoing_15, DependenciesType_16, ProcessModulesWhere_17, Globals_18, Var_82, (MR_Integer) 1, &SucceededIncludes_58, Modules2_57, Modules_22, STATE_VARIABLE_Info_74_80, &STATE_VARIABLE_Info_78_84);
          make__make_info__make_info_set_importing_module_3_p_0(OldImportingModule_55, STATE_VARIABLE_Info_78_84, STATE_VARIABLE_Info_33);
          *Succeeded_20 = libs__maybe_util__and_2_f_0(SucceededImports_56, SucceededIncludes_58);
        }
        else
        {
          *Succeeded_20 = (MR_Integer) 1;
          *Modules_22 = Modules0_21;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_37_37;
        }
      }
    }
  }
}

MR_Word MR_CALL 
make__find_local_modules__init_cached_transitive_dependencies_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__find_local_modules_scalar_common_1[0]));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
make__find_local_modules____Unify____cached_transitive_dependencies_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__find_local_modules____Unify____cached_transitive_dependencies_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__find_local_modules____Compare____cached_transitive_dependencies_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__find_local_modules____Compare____cached_transitive_dependencies_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__find_local_modules__init(void)
{
}

void mercury__make__find_local_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__find_local_modules__make__find_local_modules__type_ctor_info_cached_transitive_dependencies_0);
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
