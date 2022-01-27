/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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


/* :- module parse_tree.deps_map. */
/* :- implementation. */

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




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

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

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box * parse_tree__deps_map__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_1(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1);

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0(
  MR_Word parse_tree__deps_map__Globals_7,
  MR_Word parse_tree__deps_map__ModuleName_8,
  MR_Word parse_tree__deps_map__Search_9,
  MR_Word * parse_tree__deps_map__ModuleAndImportsList_10);

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box * parse_tree__deps_map__wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
  MR_Word parse_tree__deps_map__Globals_10,
  MR_Word parse_tree__deps_map__ModuleName_11,
  MR_Word parse_tree__deps_map__Search_12,
  MR_Word * parse_tree__deps_map__Done_13,
  MR_Word * parse_tree__deps_map__ModuleImports_14,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
  MR_Word parse_tree__deps_map__Globals_10,
  MR_Word parse_tree__deps_map__Module_11,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_21,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_22,
  MR_Word parse_tree__deps_map__Search_13,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_24);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word parse_tree__deps_map__Globals_8,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
  MR_Word parse_tree__deps_map__Search_10,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_16);


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][6];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][11];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_2[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__deps_map__read_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][6] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

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

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
};

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 = {
  (MR_String) "deps",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;

    {
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
    return parse_tree__deps_map__succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3)
{
  {
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

    {
      parse_tree__deps_map____Compare____deps_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;

    {
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
    return parse_tree__deps_map__succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3)
{
  {
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

    {
      parse_tree__deps_map____Compare____deps_map_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;

    {
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
    return parse_tree__deps_map__succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3)
{
  {
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

    {
      parse_tree__deps_map____Compare____have_processed_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;

    {
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
    return parse_tree__deps_map__succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box parse_tree__deps_map__wrapper_arg_3)
{
  {
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

    {
      parse_tree__deps_map____Compare____submodule_kind_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2,
  MR_Word parse_tree__deps_map__HeadVar__3_3)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0(
  MR_Word parse_tree__deps_map__HeadVar__2_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

    return parse_tree__deps_map__succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2,
  MR_Word parse_tree__deps_map__HeadVar__3_3)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
  MR_Word parse_tree__deps_map__HeadVar__2_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

    return parse_tree__deps_map__succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2,
  MR_Word parse_tree__deps_map__HeadVar__3_3)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__Cast_HeadVar1_4 = parse_tree__deps_map__HeadVar__2_2;
    MR_Word parse_tree__deps_map__Cast_HeadVar2_5 = parse_tree__deps_map__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], parse_tree__deps_map__HeadVar__1_1, ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
  MR_Word parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__Cast_HeadVar1_3 = parse_tree__deps_map__HeadVar__1_1;
    MR_Word parse_tree__deps_map__Cast_HeadVar2_4 = parse_tree__deps_map__HeadVar__2_2;

    {
      parse_tree__deps_map__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_4)));
    }
    return parse_tree__deps_map__succeeded;
  }
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2,
  MR_Word parse_tree__deps_map__HeadVar__3_3)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Integer parse_tree__deps_map__CastX_9 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
    MR_Integer parse_tree__deps_map__CastY_10 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_9 == parse_tree__deps_map__CastY_10);
    if (parse_tree__deps_map__succeeded)
      *parse_tree__deps_map__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__deps_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__deps_map__V_8_8;
        MR_Integer parse_tree__deps_map__V_13_13 = (MR_Integer) parse_tree__deps_map__V_4_4;
        MR_Integer parse_tree__deps_map__V_14_14 = (MR_Integer) parse_tree__deps_map__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__deps_map__V_8_8, parse_tree__deps_map__V_13_13, parse_tree__deps_map__V_14_14);
        }
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_8_8 == (MR_Integer) 0);
        parse_tree__deps_map__succeeded = !(parse_tree__deps_map__succeeded);
        if (parse_tree__deps_map__succeeded)
          *parse_tree__deps_map__HeadVar__1_1 = parse_tree__deps_map__V_8_8;
        else
          {
            parse_tree__module_imports____Compare____module_and_imports_0_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__V_5_5, parse_tree__deps_map__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
  MR_Word parse_tree__deps_map__HeadVar__1_1,
  MR_Word parse_tree__deps_map__HeadVar__2_2)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Integer parse_tree__deps_map__CastX_7 = (MR_Integer) parse_tree__deps_map__HeadVar__1_1;
    MR_Integer parse_tree__deps_map__CastY_8 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;

    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_7 == parse_tree__deps_map__CastY_8);
    if (parse_tree__deps_map__succeeded)
      parse_tree__deps_map__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__deps_map__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));

        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_3_3 == parse_tree__deps_map__V_5_5);
        if (parse_tree__deps_map__succeeded)
          {
            parse_tree__deps_map__succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(parse_tree__deps_map__V_4_4, parse_tree__deps_map__V_6_6);
          }
      }
    return parse_tree__deps_map__succeeded;
  }
}

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box * parse_tree__deps_map__wrapper_arg_2)
{
  {
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
    MR_Word parse_tree__deps_map__conv1_HeadVar__8_8;

    {
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__deps_map__wrapper_arg_1), &parse_tree__deps_map__conv1_HeadVar__8_8);
    }
    *parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_1(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1)
{
  {
    MR_Box parse_tree__deps_map__wrapper_arg_2;
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
    MR_Word parse_tree__deps_map__conv0_HeadVar__2_2;

    {
      parse_tree__deps_map__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1));
    }
    parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__2_2));
    return parse_tree__deps_map__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0(
  MR_Word parse_tree__deps_map__Globals_7,
  MR_Word parse_tree__deps_map__ModuleName_8,
  MR_Word parse_tree__deps_map__Search_9,
  MR_Word * parse_tree__deps_map__ModuleAndImportsList_10)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__TypeCtorInfo_74_74;
    MR_Word parse_tree__deps_map__TypeCtorInfo_75_75;
    MR_String parse_tree__deps_map__FileName0_12;
    MR_Word parse_tree__deps_map__ParseTreeSrc0_14;
    MR_Word parse_tree__deps_map__SrcSpecs_15;
    MR_Word parse_tree__deps_map__Errors_16;
    MR_Word parse_tree__deps_map__ModuleNameSrc0_17;
    MR_Word parse_tree__deps_map__ModuleComponentCord0_19;
    MR_String parse_tree__deps_map__FileName_21;
    MR_Word parse_tree__deps_map__RawCompUnits_37;
    MR_Word parse_tree__deps_map__RawCompUnitModuleNames_42;
    MR_Word parse_tree__deps_map__RawCompUnitModuleNamesSet_43;
    MR_Word parse_tree__deps_map__V_48_48 = (MR_Word) &parse_tree__deps_map_scalar_common_3[0];
    MR_Word parse_tree__deps_map__V_66_66;
    MR_Word parse_tree__deps_map__V_13_13;
    MR_Word parse_tree__deps_map___ModuleNameContext0_18;
    MR_Word parse_tree__deps_map__TypeCtorInfo_72_72;
    MR_Word parse_tree__deps_map__FatalErrors_20;
    MR_Word parse_tree__deps_map__V_51_51;

    {
      parse_tree__read_modules__read_module_src_13_p_0(parse_tree__deps_map__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 0, parse_tree__deps_map__Search_9, parse_tree__deps_map__ModuleName_8, &parse_tree__deps_map__FileName0_12, parse_tree__deps_map__V_48_48, &parse_tree__deps_map__V_13_13, &parse_tree__deps_map__ParseTreeSrc0_14, &parse_tree__deps_map__SrcSpecs_15, &parse_tree__deps_map__Errors_16);
    }
    parse_tree__deps_map__ModuleNameSrc0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 0)));
    parse_tree__deps_map___ModuleNameContext0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 1)));
    parse_tree__deps_map__ModuleComponentCord0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 2)));
    {
      parse_tree__deps_map__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__deps_map__ModuleComponentCord0_19);
    }
    if (parse_tree__deps_map__succeeded)
      {
        {
          parse_tree__deps_map__V_51_51 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        }
        parse_tree__deps_map__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
        {
          mercury__set__intersect_3_p_0(parse_tree__deps_map__TypeCtorInfo_72_72, parse_tree__deps_map__Errors_16, parse_tree__deps_map__V_51_51, &parse_tree__deps_map__FatalErrors_20);
        }
        {
          parse_tree__deps_map__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__deps_map__TypeCtorInfo_72_72, parse_tree__deps_map__FatalErrors_20);
        }
      }
    if (parse_tree__deps_map__succeeded)
      {
        MR_Word parse_tree__deps_map__ParseTreeInt_23;
        MR_Word parse_tree__deps_map__ModuleContext_28;
        MR_Word parse_tree__deps_map__IntIncl_30;
        MR_Word parse_tree__deps_map__ImpIncls_31;
        MR_Word parse_tree__deps_map__IntAvails_32;
        MR_Word parse_tree__deps_map__ImpAvails_33;
        MR_Word parse_tree__deps_map__IntItems_34;
        MR_Word parse_tree__deps_map__ImpItems_35;
        MR_Word parse_tree__deps_map__RawItemBlocks_36;
        MR_Word parse_tree__deps_map__V_60_60;
        MR_Word parse_tree__deps_map__V_22_22;
        MR_Word parse_tree__deps_map___IntSpecs_24;
        MR_Word parse_tree__deps_map___Errors_25;
        MR_Word parse_tree__deps_map__V_26_26;
        MR_Word parse_tree__deps_map__V_27_27;
        MR_Word parse_tree__deps_map___MaybeVersionNumbers_29;

        {
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__deps_map__Globals_7, (MR_String) "Getting dependencies for module interface", (MR_Integer) 0, parse_tree__deps_map__Search_9, parse_tree__deps_map__ModuleName_8, (MR_Integer) 3, &parse_tree__deps_map__FileName_21, parse_tree__deps_map__V_48_48, &parse_tree__deps_map__V_22_22, &parse_tree__deps_map__ParseTreeInt_23, &parse_tree__deps_map___IntSpecs_24, &parse_tree__deps_map___Errors_25);
        }
        parse_tree__deps_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 0)));
        parse_tree__deps_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 1)));
        parse_tree__deps_map__ModuleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 2)));
        parse_tree__deps_map___MaybeVersionNumbers_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 3)));
        parse_tree__deps_map__IntIncl_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 4)));
        parse_tree__deps_map__ImpIncls_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 5)));
        parse_tree__deps_map__IntAvails_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 6)));
        parse_tree__deps_map__ImpAvails_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 7)));
        parse_tree__deps_map__IntItems_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 8)));
        parse_tree__deps_map__ImpItems_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 9)));
        {
          parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__deps_map__ModuleContext_28, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), parse_tree__deps_map__IntIncl_30, parse_tree__deps_map__ImpIncls_31, parse_tree__deps_map__IntAvails_32, parse_tree__deps_map__ImpAvails_33, parse_tree__deps_map__IntItems_34, parse_tree__deps_map__ImpItems_35, &parse_tree__deps_map__RawItemBlocks_36);
        }
        {
          parse_tree__deps_map__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 0) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 1) = ((MR_Box) (parse_tree__deps_map__ModuleContext_28));
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 2) = ((MR_Box) (parse_tree__deps_map__RawItemBlocks_36));
        }
        {
          parse_tree__deps_map__RawCompUnits_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__RawCompUnits_37, 0) = ((MR_Box) (parse_tree__deps_map__V_60_60));
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__RawCompUnits_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word parse_tree__deps_map__ParseTreeSrc_38;
        MR_Word parse_tree__deps_map__Specs_39;
        MR_Integer parse_tree__deps_map___NumWarnings_40;
        MR_Integer parse_tree__deps_map___NumErrors_41;

        parse_tree__deps_map__FileName_21 = parse_tree__deps_map__FileName0_12;
        {
          parse_tree__deps_map__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__deps_map__ModuleName_8, parse_tree__deps_map__ModuleNameSrc0_17);
        }
        if (parse_tree__deps_map__succeeded)
          parse_tree__deps_map__ParseTreeSrc_38 = parse_tree__deps_map__ParseTreeSrc0_14;
        else
          {
            MR_Word parse_tree__deps_map__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 1)));
            MR_Word parse_tree__deps_map__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 2)));
            MR_Word parse_tree__deps_map__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 0)));

            {
              parse_tree__deps_map__ParseTreeSrc_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 0) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 1) = ((MR_Box) (parse_tree__deps_map__V_69_69));
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 2) = ((MR_Box) (parse_tree__deps_map__V_70_70));
            }
          }
        {
          parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__deps_map__ParseTreeSrc_38, &parse_tree__deps_map__RawCompUnits_37, parse_tree__deps_map__SrcSpecs_15, &parse_tree__deps_map__Specs_39);
        }
        {
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__deps_map__Specs_39, parse_tree__deps_map__Globals_7, (MR_Integer) 0, &parse_tree__deps_map___NumWarnings_40, (MR_Integer) 0, &parse_tree__deps_map___NumErrors_41);
        }
      }
    parse_tree__deps_map__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    parse_tree__deps_map__TypeCtorInfo_75_75 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      parse_tree__deps_map__RawCompUnitModuleNames_42 = mercury__list__map_2_f_0(parse_tree__deps_map__TypeCtorInfo_74_74, parse_tree__deps_map__TypeCtorInfo_75_75, (MR_Word) &parse_tree__deps_map_scalar_common_1[2], parse_tree__deps_map__RawCompUnits_37);
    }
    {
      parse_tree__deps_map__RawCompUnitModuleNamesSet_43 = mercury__set__list_to_set_1_f_0(parse_tree__deps_map__TypeCtorInfo_75_75, parse_tree__deps_map__RawCompUnitModuleNames_42);
    }
    {
      parse_tree__deps_map__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 1) = ((MR_Box) (parse_tree__deps_map__read_dependencies_6_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 3) = ((MR_Box) (parse_tree__deps_map__Globals_7));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 4) = ((MR_Box) (parse_tree__deps_map__FileName_21));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 5) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 6) = ((MR_Box) (parse_tree__deps_map__RawCompUnitModuleNamesSet_43));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 8) = ((MR_Box) (parse_tree__deps_map__Errors_16));
    }
    {
      mercury__list__map_3_p_0(parse_tree__deps_map__TypeCtorInfo_74_74, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, parse_tree__deps_map__V_66_66, parse_tree__deps_map__RawCompUnits_37, parse_tree__deps_map__ModuleAndImportsList_10);
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
  MR_Box parse_tree__deps_map__closure_arg,
  MR_Box parse_tree__deps_map__wrapper_arg_1,
  MR_Box parse_tree__deps_map__wrapper_arg_2,
  MR_Box * parse_tree__deps_map__wrapper_arg_3)
{
  {
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
    MR_Word parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8;

    {
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2), &parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8);
    }
    *parse_tree__deps_map__wrapper_arg_3 = ((MR_Box) (parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8));
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
  MR_Word parse_tree__deps_map__Globals_10,
  MR_Word parse_tree__deps_map__ModuleName_11,
  MR_Word parse_tree__deps_map__Search_12,
  MR_Word * parse_tree__deps_map__Done_13,
  MR_Word * parse_tree__deps_map__ModuleImports_14,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__DonePrime_17;
    MR_Word parse_tree__deps_map__ModuleImportsPrime_18;
    MR_Word parse_tree__deps_map__V_24_24;
    MR_Box parse_tree__deps_map__conv0_V_24_24;

    {
      parse_tree__deps_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20, ((MR_Box) (parse_tree__deps_map__ModuleName_11)), &parse_tree__deps_map__conv0_V_24_24);
    }
    if (parse_tree__deps_map__succeeded)
      {
        parse_tree__deps_map__V_24_24 = ((MR_Word) parse_tree__deps_map__conv0_V_24_24);
        parse_tree__deps_map__succeeded = MR_TRUE;
      }
    if (parse_tree__deps_map__succeeded)
      {
        parse_tree__deps_map__DonePrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 0)));
        parse_tree__deps_map__ModuleImportsPrime_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 1)));
        parse_tree__deps_map__succeeded = MR_TRUE;
      }
    if (parse_tree__deps_map__succeeded)
      {
        *parse_tree__deps_map__Done_13 = parse_tree__deps_map__DonePrime_17;
        *parse_tree__deps_map__ModuleImports_14 = parse_tree__deps_map__ModuleImportsPrime_18;
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20;
      }
    else
      {
        MR_Word parse_tree__deps_map__ModuleImportsList_19;
        MR_Word parse_tree__deps_map__V_28_28;
        MR_Box parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21;
        MR_Box parse_tree__deps_map__conv3_V_28_28;

        {
          parse_tree__deps_map__read_dependencies_6_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__ModuleName_11, parse_tree__deps_map__Search_12, &parse_tree__deps_map__ModuleImportsList_19);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], (MR_Word) &parse_tree__deps_map_scalar_common_1[1], parse_tree__deps_map__ModuleImportsList_19, ((MR_Box) (parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20)), &parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21);
        }
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = ((MR_Word) parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21);
        {
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21, ((MR_Box) (parse_tree__deps_map__ModuleName_11)), &parse_tree__deps_map__conv3_V_28_28);
        }
        parse_tree__deps_map__V_28_28 = ((MR_Word) parse_tree__deps_map__conv3_V_28_28);
        *parse_tree__deps_map__Done_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 0)));
        *parse_tree__deps_map__ModuleImports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 1)));
      }
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
  MR_Word parse_tree__deps_map__Globals_10,
  MR_Word parse_tree__deps_map__Module_11,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_21,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_22,
  MR_Word parse_tree__deps_map__Search_13,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_24)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__Done_16;
    MR_Word parse_tree__deps_map__ModuleImports_17;
    MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27;

    {
      parse_tree__deps_map__lookup_dependencies_9_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__Module_11, parse_tree__deps_map__Search_13, &parse_tree__deps_map__Done_16, &parse_tree__deps_map__ModuleImports_17, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27);
    }
    switch (parse_tree__deps_map__Done_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *parse_tree__deps_map__STATE_VARIABLE_Modules_22 = parse_tree__deps_map__STATE_VARIABLE_Modules_0_21;
          *parse_tree__deps_map__STATE_VARIABLE_DepsMap_24 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__deps_map__TypeCtorInfo_173_173;
          MR_Word parse_tree__deps_map__ForeignImportedModules_18;
          MR_Word parse_tree__deps_map__ForeignImportedModuleNames_19;
          MR_Word parse_tree__deps_map__ModulesToAdd_20;
          MR_Word parse_tree__deps_map__V_29_29;
          MR_Word parse_tree__deps_map__V_32_32;
          MR_Word parse_tree__deps_map__V_33_33;
          MR_Word parse_tree__deps_map__V_34_34;
          MR_Word parse_tree__deps_map__V_36_36;
          MR_Word parse_tree__deps_map__V_38_38;
          MR_Word parse_tree__deps_map__V_40_40;
          MR_Word parse_tree__deps_map__V_73_73;
          MR_Word parse_tree__deps_map__V_74_74;
          MR_Word parse_tree__deps_map__V_77_77;
          MR_String parse_tree__deps_map__V_43_43;
          MR_Word parse_tree__deps_map__V_44_44;
          MR_Word parse_tree__deps_map__V_45_45;
          MR_Word parse_tree__deps_map__V_46_46;
          MR_Word parse_tree__deps_map__V_47_47;
          MR_Word parse_tree__deps_map__V_48_48;
          MR_Word parse_tree__deps_map__V_49_49;
          MR_Word parse_tree__deps_map__V_50_50;
          MR_Word parse_tree__deps_map__V_51_51;
          MR_Word parse_tree__deps_map__V_52_52;
          MR_Word parse_tree__deps_map__V_53_53;
          MR_Word parse_tree__deps_map__V_54_54;
          MR_Word parse_tree__deps_map__V_55_55;
          MR_Word parse_tree__deps_map__V_56_56;
          MR_Word parse_tree__deps_map__V_57_57;
          MR_Word parse_tree__deps_map__V_58_58;
          MR_Word parse_tree__deps_map__V_59_59;
          MR_Word parse_tree__deps_map__V_60_60;
          MR_Word parse_tree__deps_map__V_61_61;
          MR_Word parse_tree__deps_map__V_62_62;
          MR_Word parse_tree__deps_map__V_63_63;
          MR_Word parse_tree__deps_map__V_64_64;
          MR_Word parse_tree__deps_map__V_65_65;
          MR_Word parse_tree__deps_map__V_66_66;
          MR_Word parse_tree__deps_map__V_67_67;
          MR_String parse_tree__deps_map__V_68_68;
          MR_String parse_tree__deps_map__V_69_69;
          MR_Word parse_tree__deps_map__V_70_70;
          MR_Word parse_tree__deps_map__V_71_71;
          MR_Word parse_tree__deps_map__V_72_72;
          MR_Word parse_tree__deps_map__V_75_75;
          MR_Word parse_tree__deps_map__V_76_76;
          MR_Word parse_tree__deps_map__V_78_78;
          MR_Word parse_tree__deps_map__V_79_79;
          MR_Word parse_tree__deps_map__V_80_80;
          MR_Word parse_tree__deps_map__V_81_81;
          MR_Word parse_tree__deps_map__V_82_82;
          MR_Word parse_tree__deps_map__V_83_83;
          MR_Word parse_tree__deps_map__V_84_84;
          MR_Word parse_tree__deps_map__V_85_85;
          MR_Word parse_tree__deps_map__V_86_86;
          MR_Word parse_tree__deps_map__V_87_87;
          MR_Word parse_tree__deps_map__V_88_88;
          MR_Word parse_tree__deps_map__V_89_89;
          MR_Word parse_tree__deps_map__V_90_90;
          MR_Word parse_tree__deps_map__V_91_91;
          MR_Word parse_tree__deps_map__V_92_92;
          MR_Word parse_tree__deps_map__V_93_93;
          MR_String parse_tree__deps_map__V_94_94;

          {
            parse_tree__deps_map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_29_29, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_29_29, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_17));
          }
          parse_tree__deps_map__TypeCtorInfo_173_173 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          {
            mercury__map__set_4_p_0(parse_tree__deps_map__TypeCtorInfo_173_173, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__Module_11)), ((MR_Box) (parse_tree__deps_map__V_29_29)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27, parse_tree__deps_map__STATE_VARIABLE_DepsMap_24);
          }
          parse_tree__deps_map__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
          parse_tree__deps_map__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
          parse_tree__deps_map__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
          parse_tree__deps_map__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
          parse_tree__deps_map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
          parse_tree__deps_map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
          parse_tree__deps_map__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
          parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
          parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
          parse_tree__deps_map__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
          parse_tree__deps_map__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
          parse_tree__deps_map__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
          parse_tree__deps_map__ForeignImportedModules_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
          parse_tree__deps_map__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
          parse_tree__deps_map__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
          parse_tree__deps_map__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
          parse_tree__deps_map__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
          parse_tree__deps_map__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
          parse_tree__deps_map__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
          parse_tree__deps_map__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
          parse_tree__deps_map__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 20)));
          parse_tree__deps_map__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 21)));
          parse_tree__deps_map__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 22)));
          parse_tree__deps_map__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 23)));
          parse_tree__deps_map__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 24)));
          parse_tree__deps_map__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 25)));
          parse_tree__deps_map__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 26)));
          {
            parse_tree__deps_map__ForeignImportedModuleNames_19 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(parse_tree__deps_map__ForeignImportedModules_18);
          }
          parse_tree__deps_map__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
          parse_tree__deps_map__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
          parse_tree__deps_map__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
          parse_tree__deps_map__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
          parse_tree__deps_map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
          parse_tree__deps_map__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
          parse_tree__deps_map__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
          parse_tree__deps_map__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
          parse_tree__deps_map__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
          parse_tree__deps_map__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
          parse_tree__deps_map__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
          parse_tree__deps_map__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
          parse_tree__deps_map__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
          parse_tree__deps_map__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
          parse_tree__deps_map__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
          parse_tree__deps_map__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
          parse_tree__deps_map__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
          parse_tree__deps_map__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
          parse_tree__deps_map__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
          parse_tree__deps_map__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
          parse_tree__deps_map__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 20)));
          parse_tree__deps_map__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 21)));
          parse_tree__deps_map__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 22)));
          parse_tree__deps_map__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 23)));
          parse_tree__deps_map__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 24)));
          parse_tree__deps_map__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 25)));
          parse_tree__deps_map__V_94_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 26)));
          {
            parse_tree__deps_map__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_40_40, 0) = ((MR_Box) (parse_tree__deps_map__ForeignImportedModuleNames_19));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__deps_map__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_38_38, 0) = ((MR_Box) (parse_tree__deps_map__V_77_77));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_38_38, 1) = ((MR_Box) (parse_tree__deps_map__V_40_40));
          }
          {
            parse_tree__deps_map__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_36_36, 0) = ((MR_Box) (parse_tree__deps_map__V_74_74));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_36_36, 1) = ((MR_Box) (parse_tree__deps_map__V_38_38));
          }
          {
            parse_tree__deps_map__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_34_34, 0) = ((MR_Box) (parse_tree__deps_map__V_73_73));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_34_34, 1) = ((MR_Box) (parse_tree__deps_map__V_36_36));
          }
          {
            parse_tree__deps_map__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_32_32, 0) = ((MR_Box) (parse_tree__deps_map__V_33_33));
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_32_32, 1) = ((MR_Box) (parse_tree__deps_map__V_34_34));
          }
          {
            parse_tree__deps_map__ModulesToAdd_20 = mercury__set__union_list_1_f_0(parse_tree__deps_map__TypeCtorInfo_173_173, parse_tree__deps_map__V_32_32);
          }
          {
            mercury__set__union_3_p_0(parse_tree__deps_map__TypeCtorInfo_173_173, parse_tree__deps_map__ModulesToAdd_20, parse_tree__deps_map__STATE_VARIABLE_Modules_0_21, parse_tree__deps_map__STATE_VARIABLE_Modules_22);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word parse_tree__deps_map__Globals_8,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
  MR_Word parse_tree__deps_map__Search_10,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__deps_map__succeeded;
        MR_Word parse_tree__deps_map__Module_13;
        MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_19_19;
        MR_Box parse_tree__deps_map__conv0_Module_13;

        {
          parse_tree__deps_map__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__deps_map__conv0_Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_0_14, &parse_tree__deps_map__STATE_VARIABLE_Modules_19_19);
        }
        if (parse_tree__deps_map__succeeded)
          {
            parse_tree__deps_map__Module_13 = ((MR_Word) parse_tree__deps_map__conv0_Module_13);
            parse_tree__deps_map__succeeded = MR_TRUE;
          }
        if (parse_tree__deps_map__succeeded)
          {
            MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
            MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

            {
              parse_tree__deps_map__generate_deps_map_step_9_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_19_19, &parse_tree__deps_map__STATE_VARIABLE_Modules_20_20, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
              MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

              parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15;
              parse_tree__deps_map__STATE_VARIABLE_Modules_0_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14;
            }
            continue;
          }
        else
          *parse_tree__deps_map__STATE_VARIABLE_DepsMap_16 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15;
      }
      break;
    }
}

void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word parse_tree__deps_map__ModuleImports_4,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_8)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__ModuleName_6;
    MR_Word parse_tree__deps_map__V_9_9;

    {
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__deps_map__ModuleImports_4, &parse_tree__deps_map__ModuleName_6);
    }
    {
      parse_tree__deps_map__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_4));
    }
    {
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__ModuleName_6)), ((MR_Box) (parse_tree__deps_map__V_9_9)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7, parse_tree__deps_map__STATE_VARIABLE_DepsMap_8);
    }
  }
}

void MR_CALL 
parse_tree__deps_map__generate_deps_map_7_p_0(
  MR_Word parse_tree__deps_map__Globals_8,
  MR_Word parse_tree__deps_map__ModuleName_9,
  MR_Word parse_tree__deps_map__Search_10,
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13,
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_14)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__V_17_17;

    {
      parse_tree__deps_map__V_17_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__deps_map__ModuleName_9)));
    }
    {
      parse_tree__deps_map__generate_deps_map_loop_7_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__V_17_17, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13, parse_tree__deps_map__STATE_VARIABLE_DepsMap_14);
    }
  }
}

MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
  MR_Word parse_tree__deps_map__ModuleName_4,
  MR_Word parse_tree__deps_map__DepsMap_5)
{
  {
    MR_bool parse_tree__deps_map__succeeded;
    MR_Word parse_tree__deps_map__Kind_6;
    MR_Word parse_tree__deps_map__Ancestors_7;
    MR_Word parse_tree__deps_map__Parent_8;
    MR_Box parse_tree__deps_map__conv0_Parent_8;

    {
      parse_tree__deps_map__Ancestors_7 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__deps_map__ModuleName_4);
    }
    {
      parse_tree__deps_map__succeeded = mercury__list__last_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__deps_map__Ancestors_7, &parse_tree__deps_map__conv0_Parent_8);
    }
    if (parse_tree__deps_map__succeeded)
      {
        parse_tree__deps_map__Parent_8 = ((MR_Word) parse_tree__deps_map__conv0_Parent_8);
        parse_tree__deps_map__succeeded = MR_TRUE;
      }
    if (parse_tree__deps_map__succeeded)
      {
        MR_Word parse_tree__deps_map__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__deps_map__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
        MR_Word parse_tree__deps_map__ModuleImports_10;
        MR_Word parse_tree__deps_map__ParentImports_12;
        MR_String parse_tree__deps_map__ModuleFileName_13;
        MR_String parse_tree__deps_map__ParentFileName_14;
        MR_Word parse_tree__deps_map__V_15_15;
        MR_Word parse_tree__deps_map__V_16_16;
        MR_Box parse_tree__deps_map__conv1_V_15_15;
        MR_Word parse_tree__deps_map__V_9_9;
        MR_Box parse_tree__deps_map__conv2_V_16_16;
        MR_Word parse_tree__deps_map__V_11_11;
        MR_Word parse_tree__deps_map__V_17_17;
        MR_Word parse_tree__deps_map__V_18_18;
        MR_Word parse_tree__deps_map__V_19_19;
        MR_Word parse_tree__deps_map__V_20_20;
        MR_Word parse_tree__deps_map__V_21_21;
        MR_Word parse_tree__deps_map__V_22_22;
        MR_Word parse_tree__deps_map__V_23_23;
        MR_Word parse_tree__deps_map__V_24_24;
        MR_Word parse_tree__deps_map__V_25_25;
        MR_Word parse_tree__deps_map__V_26_26;
        MR_Word parse_tree__deps_map__V_27_27;
        MR_Word parse_tree__deps_map__V_28_28;
        MR_Word parse_tree__deps_map__V_29_29;
        MR_Word parse_tree__deps_map__V_30_30;
        MR_Word parse_tree__deps_map__V_31_31;
        MR_Word parse_tree__deps_map__V_32_32;
        MR_Word parse_tree__deps_map__V_33_33;
        MR_Word parse_tree__deps_map__V_34_34;
        MR_Word parse_tree__deps_map__V_35_35;
        MR_Word parse_tree__deps_map__V_36_36;
        MR_Word parse_tree__deps_map__V_37_37;
        MR_Word parse_tree__deps_map__V_38_38;
        MR_Word parse_tree__deps_map__V_39_39;
        MR_Word parse_tree__deps_map__V_40_40;
        MR_Word parse_tree__deps_map__V_41_41;
        MR_String parse_tree__deps_map__V_42_42;
        MR_Word parse_tree__deps_map__V_43_43;
        MR_Word parse_tree__deps_map__V_44_44;
        MR_Word parse_tree__deps_map__V_45_45;
        MR_Word parse_tree__deps_map__V_46_46;
        MR_Word parse_tree__deps_map__V_47_47;
        MR_Word parse_tree__deps_map__V_48_48;
        MR_Word parse_tree__deps_map__V_49_49;
        MR_Word parse_tree__deps_map__V_50_50;
        MR_Word parse_tree__deps_map__V_51_51;
        MR_Word parse_tree__deps_map__V_52_52;
        MR_Word parse_tree__deps_map__V_53_53;
        MR_Word parse_tree__deps_map__V_54_54;
        MR_Word parse_tree__deps_map__V_55_55;
        MR_Word parse_tree__deps_map__V_56_56;
        MR_Word parse_tree__deps_map__V_57_57;
        MR_Word parse_tree__deps_map__V_58_58;
        MR_Word parse_tree__deps_map__V_59_59;
        MR_Word parse_tree__deps_map__V_60_60;
        MR_Word parse_tree__deps_map__V_61_61;
        MR_Word parse_tree__deps_map__V_62_62;
        MR_Word parse_tree__deps_map__V_63_63;
        MR_Word parse_tree__deps_map__V_64_64;
        MR_Word parse_tree__deps_map__V_65_65;
        MR_Word parse_tree__deps_map__V_66_66;
        MR_Word parse_tree__deps_map__V_67_67;
        MR_String parse_tree__deps_map__V_68_68;

        {
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_70_70, parse_tree__deps_map__TypeCtorInfo_71_71, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__ModuleName_4)), &parse_tree__deps_map__conv1_V_15_15);
        }
        parse_tree__deps_map__V_15_15 = ((MR_Word) parse_tree__deps_map__conv1_V_15_15);
        parse_tree__deps_map__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 0)));
        parse_tree__deps_map__ModuleImports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 1)));
        {
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_70_70, parse_tree__deps_map__TypeCtorInfo_71_71, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__Parent_8)), &parse_tree__deps_map__conv2_V_16_16);
        }
        parse_tree__deps_map__V_16_16 = ((MR_Word) parse_tree__deps_map__conv2_V_16_16);
        parse_tree__deps_map__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 0)));
        parse_tree__deps_map__ParentImports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 1)));
        parse_tree__deps_map__ModuleFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 0)));
        parse_tree__deps_map__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 1)));
        parse_tree__deps_map__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 2)));
        parse_tree__deps_map__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 3)));
        parse_tree__deps_map__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 4)));
        parse_tree__deps_map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 5)));
        parse_tree__deps_map__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 6)));
        parse_tree__deps_map__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 7)));
        parse_tree__deps_map__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 8)));
        parse_tree__deps_map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 9)));
        parse_tree__deps_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 10)));
        parse_tree__deps_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 11)));
        parse_tree__deps_map__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 12)));
        parse_tree__deps_map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 13)));
        parse_tree__deps_map__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 14)));
        parse_tree__deps_map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 15)));
        parse_tree__deps_map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 16)));
        parse_tree__deps_map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 17)));
        parse_tree__deps_map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 18)));
        parse_tree__deps_map__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 19)));
        parse_tree__deps_map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 20)));
        parse_tree__deps_map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 21)));
        parse_tree__deps_map__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 22)));
        parse_tree__deps_map__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 23)));
        parse_tree__deps_map__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 24)));
        parse_tree__deps_map__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 25)));
        parse_tree__deps_map__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 26)));
        parse_tree__deps_map__ParentFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 0)));
        parse_tree__deps_map__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 1)));
        parse_tree__deps_map__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 2)));
        parse_tree__deps_map__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 3)));
        parse_tree__deps_map__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 4)));
        parse_tree__deps_map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 5)));
        parse_tree__deps_map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 6)));
        parse_tree__deps_map__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 7)));
        parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 8)));
        parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 9)));
        parse_tree__deps_map__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 10)));
        parse_tree__deps_map__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 11)));
        parse_tree__deps_map__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 12)));
        parse_tree__deps_map__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 13)));
        parse_tree__deps_map__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 14)));
        parse_tree__deps_map__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 15)));
        parse_tree__deps_map__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 16)));
        parse_tree__deps_map__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 17)));
        parse_tree__deps_map__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 18)));
        parse_tree__deps_map__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 19)));
        parse_tree__deps_map__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 20)));
        parse_tree__deps_map__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 21)));
        parse_tree__deps_map__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 22)));
        parse_tree__deps_map__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 23)));
        parse_tree__deps_map__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 24)));
        parse_tree__deps_map__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 25)));
        parse_tree__deps_map__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 26)));
        parse_tree__deps_map__succeeded = (strcmp(parse_tree__deps_map__ModuleFileName_13, parse_tree__deps_map__ParentFileName_14) == 0);
        if (parse_tree__deps_map__succeeded)
          parse_tree__deps_map__Kind_6 = (MR_Integer) 1;
        else
          parse_tree__deps_map__Kind_6 = (MR_Integer) 2;
      }
    else
      parse_tree__deps_map__Kind_6 = (MR_Integer) 0;
    return parse_tree__deps_map__Kind_6;
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

/* :- end_module parse_tree.deps_map. */
