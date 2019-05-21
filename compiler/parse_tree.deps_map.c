/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2017-09-13
** configured for x86_64-pc-linux-gnu.
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
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Modules_0_14,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_15,
  MR_Word * STATE_VARIABLE_DepsMap_16);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word STATE_VARIABLE_Modules_0_21,
  MR_Word * STATE_VARIABLE_Modules_22,
  MR_Word Search_13,
  MR_Word STATE_VARIABLE_DepsMap_0_23,
  MR_Word * STATE_VARIABLE_DepsMap_24);

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
  MR_Word Search_12,
  MR_Word * Done_13,
  MR_Word * ModuleImports_14,
  MR_Word STATE_VARIABLE_DepsMap_0_20,
  MR_Word * STATE_VARIABLE_DepsMap_21);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Search_9,
  MR_Word * ModuleAndImportsList_10);

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


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][11];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][6];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_3[0])),
    ((MR_Box) (parse_tree__deps_map__read_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][11] = {
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

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word ModuleImports_4,
  MR_Word STATE_VARIABLE_DepsMap_0_7,
  MR_Word * STATE_VARIABLE_DepsMap_8)
{
  {
    MR_Word ModuleName_6;
    MR_Word Var_9;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleImports_4, &ModuleName_6);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (ModuleImports_4));
    }
    mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (ModuleName_6)), ((MR_Box) (Var_9)), STATE_VARIABLE_DepsMap_0_7, STATE_VARIABLE_DepsMap_8);
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

    Var_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_9)));
    parse_tree__deps_map__generate_deps_map_loop_7_p_0(Globals_8, Var_17, Search_10, STATE_VARIABLE_DepsMap_0_13, STATE_VARIABLE_DepsMap_14);
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Modules_0_14,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_15,
  MR_Word * STATE_VARIABLE_DepsMap_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Module_13;
    MR_Word STATE_VARIABLE_Modules_19_19;
    MR_Box conv0_Module_13;

    // setup for tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_Module_13, STATE_VARIABLE_Modules_0_14, &STATE_VARIABLE_Modules_19_19);
    if (succeeded)
    {
      Module_13 = ((MR_Word) conv0_Module_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Modules_20_20;
      MR_Word STATE_VARIABLE_DepsMap_21_21;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_14;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_15;

      parse_tree__deps_map__generate_deps_map_step_9_p_0(Globals_8, Module_13, STATE_VARIABLE_Modules_19_19, &STATE_VARIABLE_Modules_20_20, Search_10, STATE_VARIABLE_DepsMap_0_15, &STATE_VARIABLE_DepsMap_21_21);
      // direct tailcall eliminated
      next_value_of_STATE_VARIABLE_Modules_0_14 = STATE_VARIABLE_Modules_20_20;
      next_value_of_STATE_VARIABLE_DepsMap_0_15 = STATE_VARIABLE_DepsMap_21_21;
      STATE_VARIABLE_Modules_0_14 = next_value_of_STATE_VARIABLE_Modules_0_14;
      STATE_VARIABLE_DepsMap_0_15 = next_value_of_STATE_VARIABLE_DepsMap_0_15;
      continue;
    }
    else
      *STATE_VARIABLE_DepsMap_16 = STATE_VARIABLE_DepsMap_0_15;
    break;
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word STATE_VARIABLE_Modules_0_21,
  MR_Word * STATE_VARIABLE_Modules_22,
  MR_Word Search_13,
  MR_Word STATE_VARIABLE_DepsMap_0_23,
  MR_Word * STATE_VARIABLE_DepsMap_24)
{
  {
    MR_Word Done_16;
    MR_Word ModuleImports_17;
    MR_Word STATE_VARIABLE_DepsMap_27_27;

    parse_tree__deps_map__lookup_dependencies_9_p_0(Globals_10, Module_11, Search_13, &Done_16, &ModuleImports_17, STATE_VARIABLE_DepsMap_0_23, &STATE_VARIABLE_DepsMap_27_27);
    switch (Done_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Modules_22 = STATE_VARIABLE_Modules_0_21;
          *STATE_VARIABLE_DepsMap_24 = STATE_VARIABLE_DepsMap_27_27;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_173_173;
          MR_Word ForeignImportedModules_18;
          MR_Word ForeignImportedModuleNames_19;
          MR_Word ModulesToAdd_20;
          MR_Word Var_29;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_40;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_String Var_43;
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
          MR_String Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_String Var_94;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ModuleImports_17));
          }
          TypeCtorInfo_173_173 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          mercury__map__set_4_p_0(TypeCtorInfo_173_173, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (Module_11)), ((MR_Box) (Var_29)), STATE_VARIABLE_DepsMap_27_27, STATE_VARIABLE_DepsMap_24);
          Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 0)));
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 1)));
          Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 2)));
          Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 3)));
          Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 4)));
          Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 5)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 6)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 7)));
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 8)));
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 9)));
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 10)));
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 11)));
          ForeignImportedModules_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 12)));
          Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 13)));
          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 14)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 15)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 16)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 17)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 18)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 19)));
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 20)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 21)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 22)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 23)));
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 24)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 25)));
          Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 26)));
          ForeignImportedModuleNames_19 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(ForeignImportedModules_18);
          Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 0)));
          Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 1)));
          Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 2)));
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 3)));
          Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 4)));
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 5)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 6)));
          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 7)));
          Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 8)));
          Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 9)));
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 10)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 11)));
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 12)));
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 13)));
          Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 14)));
          Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 15)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 16)));
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 17)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 18)));
          Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 19)));
          Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 20)));
          Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 21)));
          Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 22)));
          Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 23)));
          Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 24)));
          Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 25)));
          Var_94 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 26)));
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ForeignImportedModuleNames_19));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
          }
          ModulesToAdd_20 = mercury__set__union_list_1_f_0(TypeCtorInfo_173_173, Var_32);
          mercury__set__union_3_p_0(TypeCtorInfo_173_173, ModulesToAdd_20, STATE_VARIABLE_Modules_0_21, STATE_VARIABLE_Modules_22);
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
    MR_Word conv1_STATE_VARIABLE_DepsMap_8;

    parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_DepsMap_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsMap_8));
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word Search_12,
  MR_Word * Done_13,
  MR_Word * ModuleImports_14,
  MR_Word STATE_VARIABLE_DepsMap_0_20,
  MR_Word * STATE_VARIABLE_DepsMap_21)
{
  {
    MR_bool succeeded;
    MR_Word DonePrime_17;
    MR_Word ModuleImportsPrime_18;
    MR_Word Var_24;
    MR_Box conv0_Var_24;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, STATE_VARIABLE_DepsMap_0_20, ((MR_Box) (ModuleName_11)), &conv0_Var_24);
    if (succeeded)
    {
      Var_24 = ((MR_Word) conv0_Var_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      DonePrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));
      ModuleImportsPrime_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Done_13 = DonePrime_17;
      *ModuleImports_14 = ModuleImportsPrime_18;
      *STATE_VARIABLE_DepsMap_21 = STATE_VARIABLE_DepsMap_0_20;
    }
    else
    {
      MR_Word ModuleImportsList_19;
      MR_Word Var_28;
      MR_Box conv2_STATE_VARIABLE_DepsMap_21;
      MR_Box conv3_Var_28;

      parse_tree__deps_map__read_dependencies_6_p_0(Globals_10, ModuleName_11, Search_12, &ModuleImportsList_19);
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], (MR_Word) &parse_tree__deps_map_scalar_common_1[2], ModuleImportsList_19, ((MR_Box) (STATE_VARIABLE_DepsMap_0_20)), &conv2_STATE_VARIABLE_DepsMap_21);
      *STATE_VARIABLE_DepsMap_21 = ((MR_Word) conv2_STATE_VARIABLE_DepsMap_21);
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, *STATE_VARIABLE_DepsMap_21, ((MR_Box) (ModuleName_11)), &conv3_Var_28);
      Var_28 = ((MR_Word) conv3_Var_28);
      *Done_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0)));
      *ModuleImports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1)));
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
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
parse_tree__deps_map__read_dependencies_6_p_0_1(
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
parse_tree__deps_map__read_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Search_9,
  MR_Word * ModuleAndImportsList_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_70_70;
    MR_Word TypeCtorInfo_71_71;
    MR_String FileName0_12;
    MR_Word ParseTreeSrc_14;
    MR_Word SrcSpecs_15;
    MR_Word Errors_16;
    MR_Word ModuleComponentCord0_19;
    MR_String FileName_21;
    MR_Word RawCompUnits_37;
    MR_Word RawCompUnitModuleNames_41;
    MR_Word RawCompUnitModuleNamesSet_42;
    MR_Word Var_47 = (MR_Word) &parse_tree__deps_map_scalar_common_2[0];
    MR_Word Var_65;
    MR_Word Var_13;
    MR_Word _ModuleNameSrc0_17;
    MR_Word _ModuleNameContext0_18;
    MR_Word TypeCtorInfo_68_68;
    MR_Word FatalErrors_20;
    MR_Word Var_50;

    parse_tree__read_modules__read_module_src_13_p_0(Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 0, Search_9, ModuleName_8, &FileName0_12, Var_47, &Var_13, &ParseTreeSrc_14, &SrcSpecs_15, &Errors_16);
    _ModuleNameSrc0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_14, (MR_Integer) 0)));
    _ModuleNameContext0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_14, (MR_Integer) 1)));
    ModuleComponentCord0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeSrc_14, (MR_Integer) 2)));
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, ModuleComponentCord0_19);
    if (succeeded)
    {
      Var_50 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      TypeCtorInfo_68_68 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
      mercury__set__intersect_3_p_0(TypeCtorInfo_68_68, Errors_16, Var_50, &FatalErrors_20);
      succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_68_68, FatalErrors_20);
    }
    if (succeeded)
    {
      MR_Word ParseTreeInt_23;
      MR_Word ModuleContext_28;
      MR_Word IntIncl_30;
      MR_Word ImpIncls_31;
      MR_Word IntAvails_32;
      MR_Word ImpAvails_33;
      MR_Word IntItems_34;
      MR_Word ImpItems_35;
      MR_Word RawItemBlocks_36;
      MR_Word Var_59;
      MR_Word Var_22;
      MR_Word _IntSpecs_24;
      MR_Word _Errors_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word _MaybeVersionNumbers_29;

      parse_tree__read_modules__read_module_int_14_p_0(Globals_7, (MR_String) "Getting dependencies for module interface", (MR_Integer) 0, Search_9, ModuleName_8, (MR_Integer) 3, &FileName_21, Var_47, &Var_22, &ParseTreeInt_23, &_IntSpecs_24, &_Errors_25);
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 0)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 1)));
      ModuleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 2)));
      _MaybeVersionNumbers_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 3)));
      IntIncl_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 4)));
      ImpIncls_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 5)));
      IntAvails_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 6)));
      ImpAvails_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 7)));
      IntItems_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 8)));
      ImpItems_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeInt_23, (MR_Integer) 9)));
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, ModuleContext_28, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncl_30, ImpIncls_31, IntAvails_32, ImpAvails_33, IntItems_34, ImpItems_35, &RawItemBlocks_36);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ModuleContext_28));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (RawItemBlocks_36));
      }
      {
        RawCompUnits_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RawCompUnits_37, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), RawCompUnits_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word Specs_38;
      MR_Integer _NumWarnings_39;
      MR_Integer _NumErrors_40;

      FileName_21 = FileName0_12;
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_14, &RawCompUnits_37, SrcSpecs_15, &Specs_38);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_38, Globals_7, (MR_Integer) 0, &_NumWarnings_39, (MR_Integer) 0, &_NumErrors_40);
    }
    TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    TypeCtorInfo_71_71 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    RawCompUnitModuleNames_41 = mercury__list__map_2_f_0(TypeCtorInfo_70_70, TypeCtorInfo_71_71, (MR_Word) &parse_tree__deps_map_scalar_common_1[1], RawCompUnits_37);
    RawCompUnitModuleNamesSet_42 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_71_71, RawCompUnitModuleNames_41);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__deps_map__read_dependencies_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (FileName_21));
      MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_65, 6) = ((MR_Box) (RawCompUnitModuleNamesSet_42));
      MR_hl_field(MR_mktag(0), Var_65, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_65, 8) = ((MR_Box) (Errors_16));
    }
    mercury__list__map_3_p_0(TypeCtorInfo_70_70, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, Var_65, RawCompUnits_37, ModuleAndImportsList_10);
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
