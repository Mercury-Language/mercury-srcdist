/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2018-02-20
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


// :- module parse_tree.deps_map.
// :- implementation.

/*
INIT mercury__parse_tree__deps_map__init
ENDINIT
*/

#include "parse_tree.deps_map.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "multi_map.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3];

static void MR_CALL 
parse_tree__deps_map__add_module_name_with_contexts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9);

static void MR_CALL 
parse_tree__deps_map__add_module_name_and_context_4_p_0(
  MR_Word Context_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Modules_0_15,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_16,
  MR_Word * STATE_VARIABLE_DepsMap_17);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0(
  MR_Word Globals_11,
  MR_Word Module_12,
  MR_Word ExpectationContexts_13,
  MR_Word STATE_VARIABLE_Modules_0_29,
  MR_Word * STATE_VARIABLE_Modules_30,
  MR_Word Search_15,
  MR_Word STATE_VARIABLE_DepsMap_0_31,
  MR_Word * STATE_VARIABLE_DepsMap_32);

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExpectationContexts_12,
  MR_Word Search_13,
  MR_Word * Deps_14,
  MR_Word STATE_VARIABLE_DepsMap_0_19,
  MR_Word * STATE_VARIABLE_DepsMap_20);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ExpectationContexts_10,
  MR_Word Search_11,
  MR_Word * ModuleAndImportsList_12);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][11];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_6[2][6];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_7[1][7];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__deps_map__read_dependencies_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_6[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_6[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_6[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_6[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0
  }
};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
};

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 = {
  (MR_String) "deps",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps",
  {     parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____have_processed_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____have_processed_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "have_processed",
  {     parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
  (MR_String) "toplevel",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
  (MR_String) "nested_submodule",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
  (MR_String) "separate_submodule",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0
};

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____submodule_kind_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____submodule_kind_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "submodule_kind",
  {     parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0
};

void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__deps_map_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        parse_tree__module_imports____Compare____module_and_imports_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map__add_module_name_with_contexts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word NewContexts_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word OldContexts_7;
    MR_Box conv0_OldContexts_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], STATE_VARIABLE_Modules_0_8, ((MR_Box) (ModuleName_4)), &conv0_OldContexts_7);
    if (succeeded)
    {
      OldContexts_7 = ((MR_Word) conv0_OldContexts_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_10;

      Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, NewContexts_5, OldContexts_7);
      mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (ModuleName_4)), ((MR_Box) (Var_10)), STATE_VARIABLE_Modules_0_8, STATE_VARIABLE_Modules_9);
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (ModuleName_4)), ((MR_Box) (NewContexts_5)), STATE_VARIABLE_Modules_0_8, STATE_VARIABLE_Modules_9);
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__add_module_name_and_context_4_p_0(
  MR_Word Context_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10)
{
  {
    MR_bool succeeded;
    MR_Word OldContexts_8;
    MR_Box conv0_OldContexts_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], STATE_VARIABLE_Modules_0_9, ((MR_Box) (ModuleName_6)), &conv0_OldContexts_8);
    if (succeeded)
    {
      OldContexts_8 = ((MR_Word) conv0_OldContexts_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (OldContexts_8));
      }
      mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (ModuleName_6)), ((MR_Box) (Var_11)), STATE_VARIABLE_Modules_0_9, STATE_VARIABLE_Modules_10);
    }
    else
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (ModuleName_6)), ((MR_Box) (Var_13)), STATE_VARIABLE_Modules_0_9, STATE_VARIABLE_Modules_10);
    }
  }
}

void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word ModuleImports_4,
  MR_Word STATE_VARIABLE_DepsMap_0_8,
  MR_Word * STATE_VARIABLE_DepsMap_9)
{
  {
    MR_Word ModuleName_6;
    MR_Word Deps_7;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleImports_4, &ModuleName_6);
    {
      Deps_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Deps_7, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Deps_7, 1) = ((MR_Box) (ModuleImports_4));
    }
    mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (ModuleName_6)), ((MR_Box) (Deps_7)), STATE_VARIABLE_DepsMap_0_8, STATE_VARIABLE_DepsMap_9);
  }
}

void MR_CALL 
parse_tree__deps_map__generate_deps_map_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_13,
  MR_Word * STATE_VARIABLE_DepsMap_14)
{
  {
    MR_Word Var_17;

    Var_17 = mercury__map__singleton_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (ModuleName_9)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    parse_tree__deps_map__generate_deps_map_loop_7_p_0(Globals_8, Var_17, Search_10, STATE_VARIABLE_DepsMap_0_13, STATE_VARIABLE_DepsMap_14);
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Modules_0_15,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_16,
  MR_Word * STATE_VARIABLE_DepsMap_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Module_13;
    MR_Word ExpectationContexts_14;
    MR_Word STATE_VARIABLE_Modules_20_20;
    MR_Box conv1_Module_13;
    MR_Box conv0_ExpectationContexts_14;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__map__remove_smallest_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], &conv1_Module_13, &conv0_ExpectationContexts_14, STATE_VARIABLE_Modules_0_15, &STATE_VARIABLE_Modules_20_20);
    if (succeeded)
    {
      Module_13 = ((MR_Word) conv1_Module_13);
      ExpectationContexts_14 = ((MR_Word) conv0_ExpectationContexts_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Modules_21_21;
      MR_Word STATE_VARIABLE_DepsMap_22_22;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_15;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_16;

      parse_tree__deps_map__generate_deps_map_step_10_p_0(Globals_8, Module_13, ExpectationContexts_14, STATE_VARIABLE_Modules_20_20, &STATE_VARIABLE_Modules_21_21, Search_10, STATE_VARIABLE_DepsMap_0_16, &STATE_VARIABLE_DepsMap_22_22);
      // direct tailcall eliminated
      next_value_of_STATE_VARIABLE_Modules_0_15 = STATE_VARIABLE_Modules_21_21;
      next_value_of_STATE_VARIABLE_DepsMap_0_16 = STATE_VARIABLE_DepsMap_22_22;
      STATE_VARIABLE_Modules_0_15 = next_value_of_STATE_VARIABLE_Modules_0_15;
      STATE_VARIABLE_DepsMap_0_16 = next_value_of_STATE_VARIABLE_DepsMap_0_16;
      continue;
    }
    else
      *STATE_VARIABLE_DepsMap_17 = STATE_VARIABLE_DepsMap_0_16;
    break;
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_10;

    parse_tree__deps_map__add_module_name_and_context_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Modules_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_10));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_10_p_0(
  MR_Word Globals_11,
  MR_Word Module_12,
  MR_Word ExpectationContexts_13,
  MR_Word STATE_VARIABLE_Modules_0_29,
  MR_Word * STATE_VARIABLE_Modules_30,
  MR_Word Search_15,
  MR_Word STATE_VARIABLE_DepsMap_0_31,
  MR_Word * STATE_VARIABLE_DepsMap_32)
{
  {
    MR_Word Deps0_18;
    MR_Word Done0_19;
    MR_Word ModuleImports_20;
    MR_Word STATE_VARIABLE_DepsMap_35_35;

    parse_tree__deps_map__lookup_dependencies_9_p_0(Globals_11, Module_12, ExpectationContexts_13, Search_15, &Deps0_18, STATE_VARIABLE_DepsMap_0_31, &STATE_VARIABLE_DepsMap_35_35);
    Done0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deps0_18, (MR_Integer) 0)));
    ModuleImports_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deps0_18, (MR_Integer) 1)));
    switch (Done0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Modules_30 = STATE_VARIABLE_Modules_0_29;
          *STATE_VARIABLE_DepsMap_32 = STATE_VARIABLE_DepsMap_35_35;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_208_208;
          MR_Word TypeInfo_213_213;
          MR_Word TypeCtorInfo_217_217;
          MR_Word TypeInfo_221_221;
          MR_Word Deps_21;
          MR_Word ForeignImportedModules_22;
          MR_Word ModuleNameContext_23;
          MR_Word ParentModuleNames_24;
          MR_Word ForeignImportedModuleNames_25;
          MR_Word IntDepsModuleNamesContexts_26;
          MR_Word ImpDepsModuleNamesContexts_27;
          MR_Word ChildrenModuleNamesContexts_28;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_Modules_40_40;
          MR_Word STATE_VARIABLE_Modules_42_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word STATE_VARIABLE_Modules_47_47;
          MR_Word STATE_VARIABLE_Modules_49_49;
          MR_String Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_String Var_77;
          MR_Box conv1_STATE_VARIABLE_Modules_40_40;
          MR_Box conv2_STATE_VARIABLE_Modules_42_42;
          MR_String Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Var_152;
          MR_Word Var_153;
          MR_Word Var_154;
          MR_String Var_155;
          MR_String Var_156;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_String Var_181;
          MR_String Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_194;
          MR_Word Var_195;
          MR_Word Var_196;
          MR_Word Var_197;
          MR_Word Var_198;
          MR_Word Var_199;
          MR_Word Var_200;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_205;
          MR_Word Var_206;
          MR_String Var_207;
          MR_Box conv4_STATE_VARIABLE_Modules_47_47;
          MR_Box conv6_STATE_VARIABLE_Modules_49_49;
          MR_Box conv8_STATE_VARIABLE_Modules_30;

          {
            Deps_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Deps_21, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Deps_21, 1) = ((MR_Box) (ModuleImports_20));
          }
          TypeCtorInfo_208_208 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          mercury__map__det_update_4_p_0(TypeCtorInfo_208_208, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (Module_12)), ((MR_Box) (Deps_21)), STATE_VARIABLE_DepsMap_35_35, STATE_VARIABLE_DepsMap_32);
          Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 0)));
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 1)));
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 2)));
          ModuleNameContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 3)));
          ParentModuleNames_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 4)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 5)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 6)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 7)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 8)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 9)));
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 10)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 11)));
          ForeignImportedModules_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 12)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 13)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 14)));
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 15)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 16)));
          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 17)));
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 18)));
          Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 19)));
          Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 20)));
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 21)));
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 22)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 23)));
          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 24)));
          Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 25)));
          Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 26)));
          ForeignImportedModuleNames_25 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(ForeignImportedModules_22);
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleNameContext_23));
          }
          TypeInfo_213_213 = (MR_Word) &parse_tree__deps_map_scalar_common_2[0];
          mercury__set__foldl_4_p_0(TypeCtorInfo_208_208, TypeInfo_213_213, Var_39, ParentModuleNames_24, ((MR_Box) (STATE_VARIABLE_Modules_0_29)), &conv1_STATE_VARIABLE_Modules_40_40);
          STATE_VARIABLE_Modules_40_40 = ((MR_Word) conv1_STATE_VARIABLE_Modules_40_40);
          mercury__set__foldl_4_p_0(TypeCtorInfo_208_208, TypeInfo_213_213, Var_39, ForeignImportedModuleNames_25, ((MR_Box) (STATE_VARIABLE_Modules_40_40)), &conv2_STATE_VARIABLE_Modules_42_42);
          STATE_VARIABLE_Modules_42_42 = ((MR_Word) conv2_STATE_VARIABLE_Modules_42_42);
          Var_130 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 0)));
          Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 1)));
          Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 2)));
          Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 3)));
          Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 4)));
          Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 5)));
          Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 6)));
          Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 7)));
          Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 8)));
          Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 9)));
          Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 10)));
          Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 11)));
          Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 12)));
          Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 13)));
          Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 14)));
          Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 15)));
          Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 16)));
          Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 17)));
          Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 18)));
          Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 19)));
          Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 20)));
          Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 21)));
          Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 22)));
          Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 23)));
          Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 24)));
          Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 25)));
          Var_155 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 26)));
          TypeCtorInfo_217_217 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
          mercury__multi_map__to_assoc_list_2_p_0(TypeCtorInfo_208_208, TypeCtorInfo_217_217, Var_43, &IntDepsModuleNamesContexts_26);
          Var_156 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 0)));
          Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 1)));
          Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 2)));
          Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 3)));
          Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 4)));
          Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 5)));
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 6)));
          Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 7)));
          Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 8)));
          Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 9)));
          Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 10)));
          Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 11)));
          Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 12)));
          Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 13)));
          Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 14)));
          Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 15)));
          Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 16)));
          Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 17)));
          Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 18)));
          Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 19)));
          Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 20)));
          Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 21)));
          Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 22)));
          Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 23)));
          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 24)));
          Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 25)));
          Var_181 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 26)));
          mercury__multi_map__to_assoc_list_2_p_0(TypeCtorInfo_208_208, TypeCtorInfo_217_217, Var_44, &ImpDepsModuleNamesContexts_27);
          Var_182 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 0)));
          Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 1)));
          Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 2)));
          Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 3)));
          Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 4)));
          Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 5)));
          Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 6)));
          Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 7)));
          Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 8)));
          Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 9)));
          Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 10)));
          Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 11)));
          Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 12)));
          Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 13)));
          Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 14)));
          Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 15)));
          Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 16)));
          Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 17)));
          Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 18)));
          Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 19)));
          Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 20)));
          Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 21)));
          Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 22)));
          Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 23)));
          Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 24)));
          Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 25)));
          Var_207 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_20, (MR_Integer) 26)));
          mercury__multi_map__to_assoc_list_2_p_0(TypeCtorInfo_208_208, TypeCtorInfo_217_217, Var_45, &ChildrenModuleNamesContexts_28);
          TypeInfo_221_221 = (MR_Word) &parse_tree__deps_map_scalar_common_2[1];
          mercury__list__foldl_4_p_0(TypeInfo_221_221, TypeInfo_213_213, (MR_Word) &parse_tree__deps_map_scalar_common_2[5], IntDepsModuleNamesContexts_26, ((MR_Box) (STATE_VARIABLE_Modules_42_42)), &conv4_STATE_VARIABLE_Modules_47_47);
          STATE_VARIABLE_Modules_47_47 = ((MR_Word) conv4_STATE_VARIABLE_Modules_47_47);
          mercury__list__foldl_4_p_0(TypeInfo_221_221, TypeInfo_213_213, (MR_Word) &parse_tree__deps_map_scalar_common_2[6], ImpDepsModuleNamesContexts_27, ((MR_Box) (STATE_VARIABLE_Modules_47_47)), &conv6_STATE_VARIABLE_Modules_49_49);
          STATE_VARIABLE_Modules_49_49 = ((MR_Word) conv6_STATE_VARIABLE_Modules_49_49);
          mercury__list__foldl_4_p_0(TypeInfo_221_221, TypeInfo_213_213, (MR_Word) &parse_tree__deps_map_scalar_common_2[7], ChildrenModuleNamesContexts_28, ((MR_Box) (STATE_VARIABLE_Modules_49_49)), &conv8_STATE_VARIABLE_Modules_30);
          *STATE_VARIABLE_Modules_30 = ((MR_Word) conv8_STATE_VARIABLE_Modules_30);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DepsMap_9;

    parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_DepsMap_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsMap_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExpectationContexts_12,
  MR_Word Search_13,
  MR_Word * Deps_14,
  MR_Word STATE_VARIABLE_DepsMap_0_19,
  MR_Word * STATE_VARIABLE_DepsMap_20)
{
  {
    MR_bool succeeded;
    MR_Word DepsPrime_17;
    MR_Box conv0_DepsPrime_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, STATE_VARIABLE_DepsMap_0_19, ((MR_Box) (ModuleName_11)), &conv0_DepsPrime_17);
    if (succeeded)
    {
      DepsPrime_17 = ((MR_Word) conv0_DepsPrime_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Deps_14 = DepsPrime_17;
      *STATE_VARIABLE_DepsMap_20 = STATE_VARIABLE_DepsMap_0_19;
    }
    else
    {
      MR_Word ModuleImportsList_18;
      MR_Box conv2_STATE_VARIABLE_DepsMap_20;
      MR_Box conv3_Deps_14;

      parse_tree__deps_map__read_dependencies_7_p_0(Globals_10, ModuleName_11, ExpectationContexts_12, Search_13, &ModuleImportsList_18);
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &parse_tree__deps_map_scalar_common_2[2], (MR_Word) &parse_tree__deps_map_scalar_common_2[4], ModuleImportsList_18, ((MR_Box) (STATE_VARIABLE_DepsMap_0_19)), &conv2_STATE_VARIABLE_DepsMap_20);
      *STATE_VARIABLE_DepsMap_20 = ((MR_Word) conv2_STATE_VARIABLE_DepsMap_20);
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, *STATE_VARIABLE_DepsMap_20, ((MR_Box) (ModuleName_11)), &conv3_Deps_14);
      *Deps_14 = ((MR_Word) conv3_Deps_14);
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__8_8;

    parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__8_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__deps_map__read_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ExpectationContexts_10,
  MR_Word Search_11,
  MR_Word * ModuleAndImportsList_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_72_72;
    MR_Word TypeCtorInfo_73_73;
    MR_String FileName0_14;
    MR_Word ParseTreeSrc_16;
    MR_Word SrcSpecs_17;
    MR_Word Errors_18;
    MR_Word ModuleComponentCord0_21;
    MR_String FileName_23;
    MR_Word RawCompUnits_39;
    MR_Word RawCompUnitModuleNames_43;
    MR_Word RawCompUnitModuleNamesSet_44;
    MR_Word Var_49 = (MR_Word) &parse_tree__deps_map_scalar_common_3[0];
    MR_Word Var_67;
    MR_Word Var_15;
    MR_Word _ModuleNameSrc0_19;
    MR_Word _ModuleNameContext0_20;
    MR_Word TypeCtorInfo_70_70;
    MR_Word FatalErrors_22;
    MR_Word Var_52;

    parse_tree__read_modules__read_module_src_14_p_0(Globals_8, (MR_String) "Getting dependencies for module", (MR_Integer) 0, Search_11, ModuleName_9, ExpectationContexts_10, &FileName0_14, Var_49, &Var_15, &ParseTreeSrc_16, &SrcSpecs_17, &Errors_18);
    _ModuleNameSrc0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_16, (MR_Integer) 0)));
    _ModuleNameContext0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_16, (MR_Integer) 1)));
    ModuleComponentCord0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_16, (MR_Integer) 2)));
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, ModuleComponentCord0_21);
    if (succeeded)
    {
      Var_52 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      TypeCtorInfo_70_70 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
      mercury__set__intersect_3_p_0(TypeCtorInfo_70_70, Errors_18, Var_52, &FatalErrors_22);
      succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_70_70, FatalErrors_22);
    }
    if (succeeded)
    {
      MR_Word ParseTreeInt_25;
      MR_Word ModuleContext_30;
      MR_Word IntIncl_32;
      MR_Word ImpIncls_33;
      MR_Word IntAvails_34;
      MR_Word ImpAvails_35;
      MR_Word IntItems_36;
      MR_Word ImpItems_37;
      MR_Word RawItemBlocks_38;
      MR_Word Var_61;
      MR_Word Var_24;
      MR_Word _IntSpecs_26;
      MR_Word _Errors_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word _MaybeVersionNumbers_31;

      parse_tree__read_modules__read_module_int_14_p_0(Globals_8, (MR_String) "Getting dependencies for module interface", (MR_Integer) 0, Search_11, ModuleName_9, (MR_Integer) 3, &FileName_23, Var_49, &Var_24, &ParseTreeInt_25, &_IntSpecs_26, &_Errors_27);
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 0)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 1)));
      ModuleContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 2)));
      _MaybeVersionNumbers_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 3)));
      IntIncl_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 4)));
      ImpIncls_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 5)));
      IntAvails_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 6)));
      ImpAvails_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 7)));
      IntItems_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 8)));
      ImpItems_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_25, (MR_Integer) 9)));
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, ModuleContext_30, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncl_32, ImpIncls_33, IntAvails_34, ImpAvails_35, IntItems_36, ImpItems_37, &RawItemBlocks_38);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ModuleContext_30));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (RawItemBlocks_38));
      }
      {
        RawCompUnits_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RawCompUnits_39, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), RawCompUnits_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word Specs_40;
      MR_Integer _NumWarnings_41;
      MR_Integer _NumErrors_42;

      FileName_23 = FileName0_14;
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_16, &RawCompUnits_39, SrcSpecs_17, &Specs_40);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_40, Globals_8, (MR_Integer) 0, &_NumWarnings_41, (MR_Integer) 0, &_NumErrors_42);
    }
    TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    RawCompUnitModuleNames_43 = mercury__list__map_2_f_0(TypeCtorInfo_72_72, TypeCtorInfo_73_73, (MR_Word) &parse_tree__deps_map_scalar_common_2[3], RawCompUnits_39);
    RawCompUnitModuleNamesSet_44 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_73_73, RawCompUnitModuleNames_43);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__deps_map__read_dependencies_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (FileName_23));
      MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (RawCompUnitModuleNamesSet_44));
      MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_67, 8) = ((MR_Box) (Errors_18));
    }
    mercury__list__map_3_p_0(TypeCtorInfo_72_72, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, Var_67, RawCompUnits_39, ModuleAndImportsList_12);
  }
}

MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
  MR_Word ModuleName_4,
  MR_Word DepsMap_5)
{
  {
    MR_bool succeeded;
    MR_Word Kind_6;
    MR_Word Ancestors_7;
    MR_Word Parent_8;
    MR_Box conv0_Parent_8;

    Ancestors_7 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_4);
    succeeded = mercury__list__last_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Ancestors_7, &conv0_Parent_8);
    if (succeeded)
    {
      Parent_8 = ((MR_Word) conv0_Parent_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word TypeCtorInfo_71_71 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
      MR_Word ModuleImports_10;
      MR_Word ParentImports_12;
      MR_String ModuleFileName_13;
      MR_String ParentFileName_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Box conv1_Var_15;
      MR_Word Var_9;
      MR_Box conv2_Var_16;
      MR_Word Var_11;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_String Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_String Var_68;

      mercury__map__lookup_3_p_0(TypeCtorInfo_70_70, TypeCtorInfo_71_71, DepsMap_5, ((MR_Box) (ModuleName_4)), &conv1_Var_15);
      Var_15 = ((MR_Word) conv1_Var_15);
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
      ModuleImports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
      mercury__map__lookup_3_p_0(TypeCtorInfo_70_70, TypeCtorInfo_71_71, DepsMap_5, ((MR_Box) (Parent_8)), &conv2_Var_16);
      Var_16 = ((MR_Word) conv2_Var_16);
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
      ParentImports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));
      ModuleFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 2)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 3)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 4)));
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 5)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 6)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 7)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 8)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 9)));
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 10)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 11)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 12)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 13)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 14)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 15)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 16)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 17)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 18)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 19)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 20)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 21)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 22)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 23)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 24)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 25)));
      Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_10, (MR_Integer) 26)));
      ParentFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 0)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 1)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 2)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 3)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 4)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 5)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 6)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 7)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 8)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 9)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 10)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 11)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 12)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 13)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 14)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 15)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 16)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 17)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 18)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 19)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 20)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 21)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 22)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 23)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 24)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 25)));
      Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentImports_12, (MR_Integer) 26)));
      succeeded = (strcmp(ModuleFileName_13, ParentFileName_14) == 0);
      if (succeeded)
        Kind_6 = (MR_Integer) 1;
      else
        Kind_6 = (MR_Integer) 2;
    }
    else
      Kind_6 = (MR_Integer) 0;
    return Kind_6;
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__deps_map____Compare____deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__deps_map____Compare____deps_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__deps_map____Compare____have_processed_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__deps_map____Compare____submodule_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__deps_map__init(void)
{
}

void mercury__parse_tree__deps_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0);
}

void mercury__parse_tree__deps_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__deps_map__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.deps_map.
