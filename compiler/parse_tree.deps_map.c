/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version DEV
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 105 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 108 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 111 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 114 "parse_tree.deps_map.c"
static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

#line 117 "parse_tree.deps_map.c"
static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

#line 120 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

#line 123 "parse_tree.deps_map.c"
static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

#line 126 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

#line 129 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

#line 132 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

#line 135 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

#line 138 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

#line 141 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2];

#line 144 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

#line 147 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

#line 150 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0;

#line 153 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1;

#line 156 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2;

#line 159 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3];

#line 162 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3];

#line 165 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3];

#line 168 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
#line 171 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 173 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 176 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
#line 179 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 181 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 183 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 186 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
#line 189 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 191 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 194 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
#line 197 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 199 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 201 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 204 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
#line 207 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 209 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 212 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
#line 215 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 217 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 219 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 222 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
#line 225 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 227 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 230 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
#line 233 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 235 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 237 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 250 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
#line 250 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 250 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 250 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_2);

#line 247 "deps_map.m"
static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_1(
#line 247 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 247 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1);

#line 202 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0(
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_7,
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_8,
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_9,
#line 202 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleAndImportsList_10);

#line 188 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 188 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_3);

#line 175 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_11,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_12,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__Done_13,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleImports_14,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21);

#line 138 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_21,
#line 138 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_22,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_13,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23,
#line 138 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_24);

#line 123 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
#line 123 "deps_map.m"
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
    ((MR_Box) (&parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 423 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 432 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 440 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 448 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 456 "parse_tree.deps_map.c"
static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
};

#line 462 "parse_tree.deps_map.c"
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
  NULL
};

#line 477 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

#line 482 "parse_tree.deps_map.c"
static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0
  }
};

#line 491 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

#line 496 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1] = {
  (MR_Integer) 0
};

#line 501 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 518 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 527 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 544 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  (MR_Integer) 0
};

#line 550 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  (MR_Integer) 1
};

#line 556 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1
};

#line 562 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0
};

#line 568 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 574 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 591 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
  (MR_String) "toplevel",
  (MR_Integer) 0
};

#line 597 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
  (MR_String) "nested_submodule",
  (MR_Integer) 1
};

#line 603 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
  (MR_String) "separate_submodule",
  (MR_Integer) 2
};

#line 609 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2
};

#line 616 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0
};

#line 623 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 630 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 647 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
#line 650 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 652 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 654 "parse_tree.deps_map.c"
{
#line 656 "parse_tree.deps_map.c"
  {
#line 658 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 661 "parse_tree.deps_map.c"
    {
#line 663 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 666 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 668 "parse_tree.deps_map.c"
  }
#line 670 "parse_tree.deps_map.c"
}

#line 673 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
#line 676 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 678 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 680 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 682 "parse_tree.deps_map.c"
{
#line 684 "parse_tree.deps_map.c"
  {
#line 686 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 689 "parse_tree.deps_map.c"
    {
#line 691 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____deps_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 694 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 696 "parse_tree.deps_map.c"
  }
#line 698 "parse_tree.deps_map.c"
}

#line 701 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
#line 704 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 706 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 708 "parse_tree.deps_map.c"
{
#line 710 "parse_tree.deps_map.c"
  {
#line 712 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 715 "parse_tree.deps_map.c"
    {
#line 717 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 720 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 722 "parse_tree.deps_map.c"
  }
#line 724 "parse_tree.deps_map.c"
}

#line 727 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
#line 730 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 732 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 734 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 736 "parse_tree.deps_map.c"
{
#line 738 "parse_tree.deps_map.c"
  {
#line 740 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 743 "parse_tree.deps_map.c"
    {
#line 745 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____deps_map_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 748 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 750 "parse_tree.deps_map.c"
  }
#line 752 "parse_tree.deps_map.c"
}

#line 755 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
#line 758 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 760 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 762 "parse_tree.deps_map.c"
{
#line 764 "parse_tree.deps_map.c"
  {
#line 766 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 769 "parse_tree.deps_map.c"
    {
#line 771 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 774 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 776 "parse_tree.deps_map.c"
  }
#line 778 "parse_tree.deps_map.c"
}

#line 781 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
#line 784 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 786 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 788 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 790 "parse_tree.deps_map.c"
{
#line 792 "parse_tree.deps_map.c"
  {
#line 794 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 797 "parse_tree.deps_map.c"
    {
#line 799 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____have_processed_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 802 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 804 "parse_tree.deps_map.c"
  }
#line 806 "parse_tree.deps_map.c"
}

#line 809 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
#line 812 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 814 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 816 "parse_tree.deps_map.c"
{
#line 818 "parse_tree.deps_map.c"
  {
#line 820 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 823 "parse_tree.deps_map.c"
    {
#line 825 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 828 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 830 "parse_tree.deps_map.c"
  }
#line 832 "parse_tree.deps_map.c"
}

#line 835 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
#line 838 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 840 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 842 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 844 "parse_tree.deps_map.c"
{
#line 846 "parse_tree.deps_map.c"
  {
#line 848 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 851 "parse_tree.deps_map.c"
    {
#line 853 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____submodule_kind_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 856 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 858 "parse_tree.deps_map.c"
  }
#line 860 "parse_tree.deps_map.c"
}

#line 43 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
#line 43 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 43 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 43 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 43 "deps_map.m"
{
#line 43 "deps_map.m"
  {
#line 43 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 43 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 43 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 43 "deps_map.m"
    {
#line 43 "deps_map.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
    }
#line 43 "deps_map.m"
  }
#line 43 "deps_map.m"
}

#line 43 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0(
#line 43 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_1,
#line 43 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 43 "deps_map.m"
{
#line 902 "parse_tree.deps_map.c"
  {
#line 904 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

#line 907 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 909 "parse_tree.deps_map.c"
  }
#line 43 "deps_map.m"
}

#line 32 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
#line 32 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 32 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 32 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 32 "deps_map.m"
{
#line 32 "deps_map.m"
  {
#line 32 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 32 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 32 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 32 "deps_map.m"
    {
#line 32 "deps_map.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
    }
#line 32 "deps_map.m"
  }
#line 32 "deps_map.m"
}

#line 32 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
#line 32 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_1,
#line 32 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 32 "deps_map.m"
{
#line 953 "parse_tree.deps_map.c"
  {
#line 955 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

#line 958 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 960 "parse_tree.deps_map.c"
  }
#line 32 "deps_map.m"
}

#line 36 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
#line 36 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 36 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 36 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 36 "deps_map.m"
{
#line 36 "deps_map.m"
  {
#line 36 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 36 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar1_4 = parse_tree__deps_map__HeadVar__2_2;
#line 36 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar2_5 = parse_tree__deps_map__HeadVar__3_3;

#line 36 "deps_map.m"
    {
#line 36 "deps_map.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], parse_tree__deps_map__HeadVar__1_1, ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_5)));
    }
#line 36 "deps_map.m"
  }
#line 36 "deps_map.m"
}

#line 36 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
#line 36 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_1,
#line 36 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 36 "deps_map.m"
{
#line 36 "deps_map.m"
  {
#line 36 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 36 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar1_3 = parse_tree__deps_map__HeadVar__1_1;
#line 36 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar2_4 = parse_tree__deps_map__HeadVar__2_2;

#line 36 "deps_map.m"
    {
#line 36 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_4)));
    }
#line 36 "deps_map.m"
    return parse_tree__deps_map__succeeded;
#line 36 "deps_map.m"
  }
#line 36 "deps_map.m"
}

#line 37 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
#line 37 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 37 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 37 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 37 "deps_map.m"
{
#line 37 "deps_map.m"
  {
#line 37 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 37 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastX_9 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 37 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastY_10 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 37 "deps_map.m"
    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_9 == parse_tree__deps_map__CastY_10);
#line 37 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 1049 "parse_tree.deps_map.c"
      *parse_tree__deps_map__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "deps_map.m"
    else
#line 37 "deps_map.m"
      {
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_8_8;
#line 37 "deps_map.m"
        MR_Integer parse_tree__deps_map__V_13_13 = (MR_Integer) parse_tree__deps_map__V_4_4;
#line 37 "deps_map.m"
        MR_Integer parse_tree__deps_map__V_14_14 = (MR_Integer) parse_tree__deps_map__V_6_6;

#line 37 "deps_map.m"
        {
#line 37 "deps_map.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__deps_map__V_8_8, parse_tree__deps_map__V_13_13, parse_tree__deps_map__V_14_14);
        }
#line 1075 "parse_tree.deps_map.c"
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_8_8 == (MR_Integer) 0);
#line 37 "deps_map.m"
        parse_tree__deps_map__succeeded = !(parse_tree__deps_map__succeeded);
#line 37 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 37 "deps_map.m"
          *parse_tree__deps_map__HeadVar__1_1 = parse_tree__deps_map__V_8_8;
#line 37 "deps_map.m"
        else
#line 37 "deps_map.m"
          {
#line 37 "deps_map.m"
            parse_tree__module_imports____Compare____module_and_imports_0_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__V_5_5, parse_tree__deps_map__V_7_7);
          }
#line 37 "deps_map.m"
      }
#line 37 "deps_map.m"
  }
#line 37 "deps_map.m"
}

#line 37 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
#line 37 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_1,
#line 37 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 37 "deps_map.m"
{
#line 37 "deps_map.m"
  {
#line 37 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 37 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastX_7 = (MR_Integer) parse_tree__deps_map__HeadVar__1_1;
#line 37 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastY_8 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;

#line 37 "deps_map.m"
    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_7 == parse_tree__deps_map__CastY_8);
#line 37 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 37 "deps_map.m"
      parse_tree__deps_map__succeeded = MR_TRUE;
#line 37 "deps_map.m"
    else
#line 37 "deps_map.m"
      {
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "deps_map.m"
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));

#line 1134 "parse_tree.deps_map.c"
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_3_3 == parse_tree__deps_map__V_5_5);
#line 37 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 1138 "parse_tree.deps_map.c"
          {
#line 1140 "parse_tree.deps_map.c"
            parse_tree__deps_map__succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(parse_tree__deps_map__V_4_4, parse_tree__deps_map__V_6_6);
          }
#line 37 "deps_map.m"
      }
#line 37 "deps_map.m"
    return parse_tree__deps_map__succeeded;
#line 37 "deps_map.m"
  }
#line 37 "deps_map.m"
}

#line 250 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_2(
#line 250 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 250 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 250 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_2)
#line 250 "deps_map.m"
{
#line 250 "deps_map.m"
  {
#line 250 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 250 "deps_map.m"
    MR_Word parse_tree__deps_map__conv1_HeadVar__8_8;

#line 250 "deps_map.m"
    {
#line 250 "deps_map.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__deps_map__wrapper_arg_1), &parse_tree__deps_map__conv1_HeadVar__8_8);
    }
#line 250 "deps_map.m"
    *parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv1_HeadVar__8_8));
#line 250 "deps_map.m"
  }
#line 250 "deps_map.m"
}

#line 247 "deps_map.m"
static MR_Box MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0_1(
#line 247 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 247 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1)
#line 247 "deps_map.m"
{
#line 247 "deps_map.m"
  {
#line 247 "deps_map.m"
    MR_Box parse_tree__deps_map__wrapper_arg_2;
#line 247 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 247 "deps_map.m"
    MR_Word parse_tree__deps_map__conv0_HeadVar__2_2;

#line 247 "deps_map.m"
    {
#line 247 "deps_map.m"
      parse_tree__deps_map__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1));
    }
#line 247 "deps_map.m"
    parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__2_2));
#line 247 "deps_map.m"
    return parse_tree__deps_map__wrapper_arg_2;
#line 247 "deps_map.m"
  }
#line 247 "deps_map.m"
}

#line 202 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__read_dependencies_6_p_0(
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_7,
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_8,
#line 202 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_9,
#line 202 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleAndImportsList_10)
#line 202 "deps_map.m"
{
#line 205 "deps_map.m"
  {
#line 205 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__TypeCtorInfo_74_74;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__TypeCtorInfo_75_75;
#line 205 "deps_map.m"
    MR_String parse_tree__deps_map__FileName0_12;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__ParseTreeSrc0_14;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__SrcSpecs_15;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__Errors_16;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleNameSrc0_17;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleComponentCord0_19;
#line 205 "deps_map.m"
    MR_String parse_tree__deps_map__FileName_21;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__RawCompUnits_37;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__RawCompUnitModuleNames_42;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__RawCompUnitModuleNamesSet_43;
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__V_48_48 = (MR_Word) &parse_tree__deps_map_scalar_common_3[0];
#line 205 "deps_map.m"
    MR_Word parse_tree__deps_map__V_66_66;
#line 208 "deps_map.m"
    MR_Word parse_tree__deps_map__V_13_13;
#line 212 "deps_map.m"
    MR_Word parse_tree__deps_map___ModuleNameContext0_18;
#line 215 "deps_map.m"
    MR_Word parse_tree__deps_map__TypeCtorInfo_72_72;
#line 215 "deps_map.m"
    MR_Word parse_tree__deps_map__FatalErrors_20;
#line 215 "deps_map.m"
    MR_Word parse_tree__deps_map__V_51_51;

#line 208 "deps_map.m"
    {
#line 208 "deps_map.m"
      parse_tree__read_modules__read_module_src_13_p_0(parse_tree__deps_map__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 0, parse_tree__deps_map__Search_9, parse_tree__deps_map__ModuleName_8, &parse_tree__deps_map__FileName0_12, parse_tree__deps_map__V_48_48, &parse_tree__deps_map__V_13_13, &parse_tree__deps_map__ParseTreeSrc0_14, &parse_tree__deps_map__SrcSpecs_15, &parse_tree__deps_map__Errors_16);
    }
#line 212 "deps_map.m"
    parse_tree__deps_map__ModuleNameSrc0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 0)));
#line 212 "deps_map.m"
    parse_tree__deps_map___ModuleNameContext0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 1)));
#line 212 "deps_map.m"
    parse_tree__deps_map__ModuleComponentCord0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 2)));
#line 215 "deps_map.m"
    {
#line 215 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__deps_map__ModuleComponentCord0_19);
    }
#line 215 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 215 "deps_map.m"
      {
#line 216 "deps_map.m"
        {
#line 216 "deps_map.m"
          parse_tree__deps_map__V_51_51 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1295 "parse_tree.deps_map.c"
        parse_tree__deps_map__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 216 "deps_map.m"
        {
#line 216 "deps_map.m"
          mercury__set__intersect_3_p_0(parse_tree__deps_map__TypeCtorInfo_72_72, parse_tree__deps_map__Errors_16, parse_tree__deps_map__V_51_51, &parse_tree__deps_map__FatalErrors_20);
        }
#line 217 "deps_map.m"
        {
#line 217 "deps_map.m"
          parse_tree__deps_map__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__deps_map__TypeCtorInfo_72_72, parse_tree__deps_map__FatalErrors_20);
        }
#line 215 "deps_map.m"
      }
#line 231 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 222 "deps_map.m"
      {
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__ParseTreeInt_23;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__ModuleContext_28;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__IntIncl_30;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__ImpIncls_31;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__IntAvails_32;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__ImpAvails_33;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__IntItems_34;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__ImpItems_35;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__RawItemBlocks_36;
#line 222 "deps_map.m"
        MR_Word parse_tree__deps_map__V_60_60;
#line 219 "deps_map.m"
        MR_Word parse_tree__deps_map__V_22_22;
#line 219 "deps_map.m"
        MR_Word parse_tree__deps_map___IntSpecs_24;
#line 219 "deps_map.m"
        MR_Word parse_tree__deps_map___Errors_25;
#line 223 "deps_map.m"
        MR_Word parse_tree__deps_map__V_26_26;
#line 223 "deps_map.m"
        MR_Word parse_tree__deps_map__V_27_27;
#line 223 "deps_map.m"
        MR_Word parse_tree__deps_map___MaybeVersionNumbers_29;

#line 219 "deps_map.m"
        {
#line 219 "deps_map.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__deps_map__Globals_7, (MR_String) "Getting dependencies for module interface", (MR_Integer) 0, parse_tree__deps_map__Search_9, parse_tree__deps_map__ModuleName_8, (MR_Integer) 3, &parse_tree__deps_map__FileName_21, parse_tree__deps_map__V_48_48, &parse_tree__deps_map__V_22_22, &parse_tree__deps_map__ParseTreeInt_23, &parse_tree__deps_map___IntSpecs_24, &parse_tree__deps_map___Errors_25);
        }
#line 223 "deps_map.m"
        parse_tree__deps_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 0)));
#line 223 "deps_map.m"
        parse_tree__deps_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 1)));
#line 223 "deps_map.m"
        parse_tree__deps_map__ModuleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 2)));
#line 223 "deps_map.m"
        parse_tree__deps_map___MaybeVersionNumbers_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 3)));
#line 223 "deps_map.m"
        parse_tree__deps_map__IntIncl_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 4)));
#line 223 "deps_map.m"
        parse_tree__deps_map__ImpIncls_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 5)));
#line 223 "deps_map.m"
        parse_tree__deps_map__IntAvails_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 6)));
#line 223 "deps_map.m"
        parse_tree__deps_map__ImpAvails_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 7)));
#line 223 "deps_map.m"
        parse_tree__deps_map__IntItems_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 8)));
#line 223 "deps_map.m"
        parse_tree__deps_map__ImpItems_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeInt_23, (MR_Integer) 9)));
#line 226 "deps_map.m"
        {
#line 226 "deps_map.m"
          parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__deps_map__ModuleContext_28, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), parse_tree__deps_map__IntIncl_30, parse_tree__deps_map__ImpIncls_31, parse_tree__deps_map__IntAvails_32, parse_tree__deps_map__ImpAvails_33, parse_tree__deps_map__IntItems_34, parse_tree__deps_map__ImpItems_35, &parse_tree__deps_map__RawItemBlocks_36);
        }
#line 230 "deps_map.m"
        {
#line 230 "deps_map.m"
          parse_tree__deps_map__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 230 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 0) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
#line 230 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 1) = ((MR_Box) (parse_tree__deps_map__ModuleContext_28));
#line 230 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_60_60, 2) = ((MR_Box) (parse_tree__deps_map__RawItemBlocks_36));
#line 230 "deps_map.m"
        }
#line 230 "deps_map.m"
        {
#line 230 "deps_map.m"
          parse_tree__deps_map__RawCompUnits_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__RawCompUnits_37, 0) = ((MR_Box) (parse_tree__deps_map__V_60_60));
#line 230 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__RawCompUnits_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "deps_map.m"
        }
#line 222 "deps_map.m"
      }
#line 231 "deps_map.m"
    else
#line 232 "deps_map.m"
      {
#line 232 "deps_map.m"
        MR_Word parse_tree__deps_map__ParseTreeSrc_38;
#line 232 "deps_map.m"
        MR_Word parse_tree__deps_map__Specs_39;
#line 244 "deps_map.m"
        MR_Integer parse_tree__deps_map___NumWarnings_40;
#line 244 "deps_map.m"
        MR_Integer parse_tree__deps_map___NumErrors_41;

#line 232 "deps_map.m"
        parse_tree__deps_map__FileName_21 = parse_tree__deps_map__FileName0_12;
#line 233 "deps_map.m"
        {
#line 233 "deps_map.m"
          parse_tree__deps_map__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__deps_map__ModuleName_8, parse_tree__deps_map__ModuleNameSrc0_17);
        }
#line 235 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 234 "deps_map.m"
          parse_tree__deps_map__ParseTreeSrc_38 = parse_tree__deps_map__ParseTreeSrc0_14;
#line 235 "deps_map.m"
        else
#line 240 "deps_map.m"
          {
#line 240 "deps_map.m"
            MR_Word parse_tree__deps_map__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 1)));
#line 240 "deps_map.m"
            MR_Word parse_tree__deps_map__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 2)));
#line 240 "deps_map.m"
            MR_Word parse_tree__deps_map__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc0_14, (MR_Integer) 0)));

#line 240 "deps_map.m"
            {
#line 240 "deps_map.m"
              parse_tree__deps_map__ParseTreeSrc_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 240 "deps_map.m"
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 0) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
#line 240 "deps_map.m"
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 1) = ((MR_Box) (parse_tree__deps_map__V_69_69));
#line 240 "deps_map.m"
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParseTreeSrc_38, 2) = ((MR_Box) (parse_tree__deps_map__V_70_70));
#line 240 "deps_map.m"
            }
#line 240 "deps_map.m"
          }
#line 242 "deps_map.m"
        {
#line 242 "deps_map.m"
          parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__deps_map__ParseTreeSrc_38, &parse_tree__deps_map__RawCompUnits_37, parse_tree__deps_map__SrcSpecs_15, &parse_tree__deps_map__Specs_39);
        }
#line 244 "deps_map.m"
        {
#line 244 "deps_map.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__deps_map__Specs_39, parse_tree__deps_map__Globals_7, (MR_Integer) 0, &parse_tree__deps_map___NumWarnings_40, (MR_Integer) 0, &parse_tree__deps_map___NumErrors_41);
        }
#line 232 "deps_map.m"
      }
#line 1461 "parse_tree.deps_map.c"
    parse_tree__deps_map__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 1463 "parse_tree.deps_map.c"
    parse_tree__deps_map__TypeCtorInfo_75_75 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 247 "deps_map.m"
    {
#line 247 "deps_map.m"
      parse_tree__deps_map__RawCompUnitModuleNames_42 = mercury__list__map_2_f_0(parse_tree__deps_map__TypeCtorInfo_74_74, parse_tree__deps_map__TypeCtorInfo_75_75, (MR_Word) &parse_tree__deps_map_scalar_common_1[2], parse_tree__deps_map__RawCompUnits_37);
    }
#line 248 "deps_map.m"
    {
#line 248 "deps_map.m"
      parse_tree__deps_map__RawCompUnitModuleNamesSet_43 = mercury__set__list_to_set_1_f_0(parse_tree__deps_map__TypeCtorInfo_75_75, parse_tree__deps_map__RawCompUnitModuleNames_42);
    }
#line 250 "deps_map.m"
    {
#line 250 "deps_map.m"
      parse_tree__deps_map__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0]));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 1) = ((MR_Box) (parse_tree__deps_map__read_dependencies_6_p_0_2));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 3) = ((MR_Box) (parse_tree__deps_map__Globals_7));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 4) = ((MR_Box) (parse_tree__deps_map__FileName_21));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 5) = ((MR_Box) (parse_tree__deps_map__ModuleName_8));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 6) = ((MR_Box) (parse_tree__deps_map__RawCompUnitModuleNamesSet_43));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 8) = ((MR_Box) (parse_tree__deps_map__Errors_16));
#line 250 "deps_map.m"
    }
#line 249 "deps_map.m"
    {
#line 249 "deps_map.m"
      mercury__list__map_3_p_0(parse_tree__deps_map__TypeCtorInfo_74_74, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, parse_tree__deps_map__V_66_66, parse_tree__deps_map__RawCompUnits_37, parse_tree__deps_map__ModuleAndImportsList_10);
    }
#line 205 "deps_map.m"
  }
#line 202 "deps_map.m"
}

#line 188 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 188 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_3)
#line 188 "deps_map.m"
{
#line 188 "deps_map.m"
  {
#line 188 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 188 "deps_map.m"
    MR_Word parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8;

#line 188 "deps_map.m"
    {
#line 188 "deps_map.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2), &parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8);
    }
#line 188 "deps_map.m"
    *parse_tree__deps_map__wrapper_arg_3 = ((MR_Box) (parse_tree__deps_map__conv1_STATE_VARIABLE_DepsMap_8));
#line 188 "deps_map.m"
  }
#line 188 "deps_map.m"
}

#line 175 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_11,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_12,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__Done_13,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleImports_14,
#line 175 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
#line 175 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21)
#line 175 "deps_map.m"
{
#line 186 "deps_map.m"
  {
#line 186 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 186 "deps_map.m"
    MR_Word parse_tree__deps_map__DonePrime_17;
#line 186 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleImportsPrime_18;
#line 182 "deps_map.m"
    MR_Word parse_tree__deps_map__V_24_24;
#line 182 "deps_map.m"
    MR_Box parse_tree__deps_map__conv0_V_24_24;

#line 182 "deps_map.m"
    {
#line 182 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20, ((MR_Box) (parse_tree__deps_map__ModuleName_11)), &parse_tree__deps_map__conv0_V_24_24);
    }
#line 182 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 182 "deps_map.m"
      {
#line 182 "deps_map.m"
        parse_tree__deps_map__V_24_24 = ((MR_Word) parse_tree__deps_map__conv0_V_24_24);
#line 182 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 182 "deps_map.m"
      }
#line 182 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 182 "deps_map.m"
      {
#line 182 "deps_map.m"
        parse_tree__deps_map__DonePrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 0)));
#line 182 "deps_map.m"
        parse_tree__deps_map__ModuleImportsPrime_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 1)));
#line 182 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 182 "deps_map.m"
      }
#line 186 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 184 "deps_map.m"
      {
#line 184 "deps_map.m"
        *parse_tree__deps_map__Done_13 = parse_tree__deps_map__DonePrime_17;
#line 185 "deps_map.m"
        *parse_tree__deps_map__ModuleImports_14 = parse_tree__deps_map__ModuleImportsPrime_18;
#line 184 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20;
#line 184 "deps_map.m"
      }
#line 186 "deps_map.m"
    else
#line 187 "deps_map.m"
      {
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__ModuleImportsList_19;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__V_28_28;
#line 188 "deps_map.m"
        MR_Box parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21;
#line 189 "deps_map.m"
        MR_Box parse_tree__deps_map__conv3_V_28_28;

#line 187 "deps_map.m"
        {
#line 187 "deps_map.m"
          parse_tree__deps_map__read_dependencies_6_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__ModuleName_11, parse_tree__deps_map__Search_12, &parse_tree__deps_map__ModuleImportsList_19);
        }
#line 188 "deps_map.m"
        {
#line 188 "deps_map.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], (MR_Word) &parse_tree__deps_map_scalar_common_1[1], parse_tree__deps_map__ModuleImportsList_19, ((MR_Box) (parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20)), &parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21);
        }
#line 188 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = ((MR_Word) parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_21);
#line 189 "deps_map.m"
        {
#line 189 "deps_map.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21, ((MR_Box) (parse_tree__deps_map__ModuleName_11)), &parse_tree__deps_map__conv3_V_28_28);
        }
#line 189 "deps_map.m"
        parse_tree__deps_map__V_28_28 = ((MR_Word) parse_tree__deps_map__conv3_V_28_28);
#line 189 "deps_map.m"
        *parse_tree__deps_map__Done_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 0)));
#line 189 "deps_map.m"
        *parse_tree__deps_map__ModuleImports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 1)));
#line 187 "deps_map.m"
      }
#line 186 "deps_map.m"
  }
#line 175 "deps_map.m"
}

#line 138 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_21,
#line 138 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_22,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_13,
#line 138 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23,
#line 138 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_24)
#line 138 "deps_map.m"
{
#line 142 "deps_map.m"
  {
#line 142 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 142 "deps_map.m"
    MR_Word parse_tree__deps_map__Done_16;
#line 142 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleImports_17;
#line 142 "deps_map.m"
    MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27;

#line 145 "deps_map.m"
    {
#line 145 "deps_map.m"
      parse_tree__deps_map__lookup_dependencies_9_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__Module_11, parse_tree__deps_map__Search_13, &parse_tree__deps_map__Done_16, &parse_tree__deps_map__ModuleImports_17, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_23, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27);
    }
#line 167 "deps_map.m"
#line 167 "deps_map.m"
    switch (parse_tree__deps_map__Done_16) {
#line 167 "deps_map.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 167 "deps_map.m"
      case (MR_Integer) 1:
#line 168 "deps_map.m"
        {
#line 168 "deps_map.m"
          *parse_tree__deps_map__STATE_VARIABLE_Modules_22 = parse_tree__deps_map__STATE_VARIABLE_Modules_0_21;
#line 168 "deps_map.m"
          *parse_tree__deps_map__STATE_VARIABLE_DepsMap_24 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27;
#line 168 "deps_map.m"
        }
#line 167 "deps_map.m"
        break;
#line 167 "deps_map.m"
      case (MR_Integer) 0:
#line 152 "deps_map.m"
        {
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__TypeCtorInfo_173_173;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__ForeignImportedModules_18;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__ForeignImportedModuleNames_19;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__ModulesToAdd_20;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_29_29;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_32_32;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_33_33;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_34_34;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_36_36;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_38_38;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_40_40;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_73_73;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_74_74;
#line 152 "deps_map.m"
          MR_Word parse_tree__deps_map__V_77_77;
#line 154 "deps_map.m"
          MR_String parse_tree__deps_map__V_43_43;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_44_44;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_45_45;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_46_46;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_47_47;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_48_48;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_49_49;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_50_50;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_51_51;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_52_52;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_53_53;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_54_54;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_55_55;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_56_56;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_57_57;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_58_58;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_59_59;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_60_60;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_61_61;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_62_62;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_63_63;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_64_64;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_65_65;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_66_66;
#line 154 "deps_map.m"
          MR_Word parse_tree__deps_map__V_67_67;
#line 154 "deps_map.m"
          MR_String parse_tree__deps_map__V_68_68;
#line 158 "deps_map.m"
          MR_String parse_tree__deps_map__V_69_69;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_70_70;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_71_71;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_72_72;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_75_75;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_76_76;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_78_78;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_79_79;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_80_80;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_81_81;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_82_82;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_83_83;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_84_84;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_85_85;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_86_86;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_87_87;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_88_88;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_89_89;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_90_90;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_91_91;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_92_92;
#line 158 "deps_map.m"
          MR_Word parse_tree__deps_map__V_93_93;
#line 158 "deps_map.m"
          MR_String parse_tree__deps_map__V_94_94;

#line 153 "deps_map.m"
          {
#line 153 "deps_map.m"
            parse_tree__deps_map__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 153 "deps_map.m"
            MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_29_29, 0) = ((MR_Box) ((MR_Integer) 1));
#line 153 "deps_map.m"
            MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_29_29, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_17));
#line 153 "deps_map.m"
          }
#line 1848 "parse_tree.deps_map.c"
          parse_tree__deps_map__TypeCtorInfo_173_173 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 153 "deps_map.m"
          {
#line 153 "deps_map.m"
            mercury__map__set_4_p_0(parse_tree__deps_map__TypeCtorInfo_173_173, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__Module_11)), ((MR_Box) (parse_tree__deps_map__V_29_29)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_27_27, parse_tree__deps_map__STATE_VARIABLE_DepsMap_24);
          }
#line 154 "deps_map.m"
          parse_tree__deps_map__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
#line 154 "deps_map.m"
          parse_tree__deps_map__ForeignImportedModules_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 20)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 21)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 22)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 23)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 24)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 25)));
#line 154 "deps_map.m"
          parse_tree__deps_map__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 26)));
#line 155 "deps_map.m"
          {
#line 155 "deps_map.m"
            parse_tree__deps_map__ForeignImportedModuleNames_19 = parse_tree__prog_data__get_all_foreign_import_modules_1_f_0(parse_tree__deps_map__ForeignImportedModules_18);
          }
#line 158 "deps_map.m"
          parse_tree__deps_map__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 20)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 21)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 22)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 23)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 24)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 25)));
#line 158 "deps_map.m"
          parse_tree__deps_map__V_94_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 26)));
#line 162 "deps_map.m"
          {
#line 162 "deps_map.m"
            parse_tree__deps_map__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_40_40, 0) = ((MR_Box) (parse_tree__deps_map__ForeignImportedModuleNames_19));
#line 162 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "deps_map.m"
          }
#line 161 "deps_map.m"
          {
#line 161 "deps_map.m"
            parse_tree__deps_map__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_38_38, 0) = ((MR_Box) (parse_tree__deps_map__V_77_77));
#line 161 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_38_38, 1) = ((MR_Box) (parse_tree__deps_map__V_40_40));
#line 161 "deps_map.m"
          }
#line 160 "deps_map.m"
          {
#line 160 "deps_map.m"
            parse_tree__deps_map__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_36_36, 0) = ((MR_Box) (parse_tree__deps_map__V_74_74));
#line 160 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_36_36, 1) = ((MR_Box) (parse_tree__deps_map__V_38_38));
#line 160 "deps_map.m"
          }
#line 159 "deps_map.m"
          {
#line 159 "deps_map.m"
            parse_tree__deps_map__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_34_34, 0) = ((MR_Box) (parse_tree__deps_map__V_73_73));
#line 159 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_34_34, 1) = ((MR_Box) (parse_tree__deps_map__V_36_36));
#line 159 "deps_map.m"
          }
#line 158 "deps_map.m"
          {
#line 158 "deps_map.m"
            parse_tree__deps_map__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_32_32, 0) = ((MR_Box) (parse_tree__deps_map__V_33_33));
#line 158 "deps_map.m"
            MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_32_32, 1) = ((MR_Box) (parse_tree__deps_map__V_34_34));
#line 158 "deps_map.m"
          }
#line 157 "deps_map.m"
          {
#line 157 "deps_map.m"
            parse_tree__deps_map__ModulesToAdd_20 = mercury__set__union_list_1_f_0(parse_tree__deps_map__TypeCtorInfo_173_173, parse_tree__deps_map__V_32_32);
          }
#line 166 "deps_map.m"
          {
#line 166 "deps_map.m"
            mercury__set__union_3_p_0(parse_tree__deps_map__TypeCtorInfo_173_173, parse_tree__deps_map__ModulesToAdd_20, parse_tree__deps_map__STATE_VARIABLE_Modules_0_21, parse_tree__deps_map__STATE_VARIABLE_Modules_22);
          }
#line 152 "deps_map.m"
        }
#line 167 "deps_map.m"
        break;
#line 167 "deps_map.m"
    }
#line 142 "deps_map.m"
  }
#line 138 "deps_map.m"
}

#line 123 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 123 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
#line 123 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_16)
#line 123 "deps_map.m"
{
#line 132 "deps_map.m"
  while (MR_TRUE)
#line 132 "deps_map.m"
    {
#line 132 "deps_map.m"
      /* tailcall optimized into a loop */
#line 132 "deps_map.m"
      {
#line 132 "deps_map.m"
        MR_bool parse_tree__deps_map__succeeded;
#line 132 "deps_map.m"
        MR_Word parse_tree__deps_map__Module_13;
#line 132 "deps_map.m"
        MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_19_19;
#line 128 "deps_map.m"
        MR_Box parse_tree__deps_map__conv0_Module_13;

#line 128 "deps_map.m"
        {
#line 128 "deps_map.m"
          parse_tree__deps_map__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__deps_map__conv0_Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_0_14, &parse_tree__deps_map__STATE_VARIABLE_Modules_19_19);
        }
#line 128 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 128 "deps_map.m"
          {
#line 128 "deps_map.m"
            parse_tree__deps_map__Module_13 = ((MR_Word) parse_tree__deps_map__conv0_Module_13);
#line 128 "deps_map.m"
            parse_tree__deps_map__succeeded = MR_TRUE;
#line 128 "deps_map.m"
          }
#line 132 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 130 "deps_map.m"
          {
#line 130 "deps_map.m"
            MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
#line 130 "deps_map.m"
            MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

#line 129 "deps_map.m"
            {
#line 129 "deps_map.m"
              parse_tree__deps_map__generate_deps_map_step_9_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_19_19, &parse_tree__deps_map__STATE_VARIABLE_Modules_20_20, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21);
            }
#line 131 "deps_map.m"
            /* direct tailcall eliminated */
#line 131 "deps_map.m"
            {
#line 131 "deps_map.m"
              MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
#line 131 "deps_map.m"
              MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

#line 131 "deps_map.m"
              parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15;
#line 131 "deps_map.m"
              parse_tree__deps_map__STATE_VARIABLE_Modules_0_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14;
#line 131 "deps_map.m"
            }
#line 131 "deps_map.m"
            continue;
#line 130 "deps_map.m"
          }
#line 132 "deps_map.m"
        else
#line 135 "deps_map.m"
          *parse_tree__deps_map__STATE_VARIABLE_DepsMap_16 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15;
#line 132 "deps_map.m"
      }
#line 132 "deps_map.m"
      break;
#line 132 "deps_map.m"
    }
#line 123 "deps_map.m"
}

#line 79 "deps_map.m"
void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
#line 79 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleImports_4,
#line 79 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7,
#line 79 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_8)
#line 79 "deps_map.m"
{
#line 192 "deps_map.m"
  {
#line 192 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 192 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleName_6;
#line 192 "deps_map.m"
    MR_Word parse_tree__deps_map__V_9_9;

#line 193 "deps_map.m"
    {
#line 193 "deps_map.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__deps_map__ModuleImports_4, &parse_tree__deps_map__ModuleName_6);
    }
#line 194 "deps_map.m"
    {
#line 194 "deps_map.m"
      parse_tree__deps_map__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 194 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_4));
#line 194 "deps_map.m"
    }
#line 194 "deps_map.m"
    {
#line 194 "deps_map.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__ModuleName_6)), ((MR_Box) (parse_tree__deps_map__V_9_9)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7, parse_tree__deps_map__STATE_VARIABLE_DepsMap_8);
    }
#line 192 "deps_map.m"
  }
#line 79 "deps_map.m"
}

#line 55 "deps_map.m"
void MR_CALL 
parse_tree__deps_map__generate_deps_map_7_p_0(
#line 55 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 55 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_9,
#line 55 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 55 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13,
#line 55 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_14)
#line 55 "deps_map.m"
{
#line 119 "deps_map.m"
  {
#line 119 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 119 "deps_map.m"
    MR_Word parse_tree__deps_map__V_17_17;

#line 120 "deps_map.m"
    {
#line 120 "deps_map.m"
      parse_tree__deps_map__V_17_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__deps_map__ModuleName_9)));
    }
#line 120 "deps_map.m"
    {
#line 120 "deps_map.m"
      parse_tree__deps_map__generate_deps_map_loop_7_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__V_17_17, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13, parse_tree__deps_map__STATE_VARIABLE_DepsMap_14);
    }
#line 119 "deps_map.m"
  }
#line 55 "deps_map.m"
}

#line 51 "deps_map.m"
MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
#line 51 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_4,
#line 51 "deps_map.m"
  MR_Word parse_tree__deps_map__DepsMap_5)
#line 51 "deps_map.m"
{
#line 101 "deps_map.m"
  {
#line 101 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 101 "deps_map.m"
    MR_Word parse_tree__deps_map__Kind_6;
#line 101 "deps_map.m"
    MR_Word parse_tree__deps_map__Ancestors_7;
#line 113 "deps_map.m"
    MR_Word parse_tree__deps_map__Parent_8;
#line 103 "deps_map.m"
    MR_Box parse_tree__deps_map__conv0_Parent_8;

#line 102 "deps_map.m"
    {
#line 102 "deps_map.m"
      parse_tree__deps_map__Ancestors_7 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__deps_map__ModuleName_4);
    }
#line 103 "deps_map.m"
    {
#line 103 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__list__last_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__deps_map__Ancestors_7, &parse_tree__deps_map__conv0_Parent_8);
    }
#line 103 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 103 "deps_map.m"
      {
#line 103 "deps_map.m"
        parse_tree__deps_map__Parent_8 = ((MR_Word) parse_tree__deps_map__conv0_Parent_8);
#line 103 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 103 "deps_map.m"
      }
#line 113 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 104 "deps_map.m"
      {
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__ModuleImports_10;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__ParentImports_12;
#line 104 "deps_map.m"
        MR_String parse_tree__deps_map__ModuleFileName_13;
#line 104 "deps_map.m"
        MR_String parse_tree__deps_map__ParentFileName_14;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_15_15;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_16_16;
#line 104 "deps_map.m"
        MR_Box parse_tree__deps_map__conv1_V_15_15;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_9_9;
#line 105 "deps_map.m"
        MR_Box parse_tree__deps_map__conv2_V_16_16;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_11_11;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_17_17;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_18_18;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_19_19;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_20_20;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_21_21;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_22_22;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_23_23;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_24_24;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_25_25;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_26_26;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_27_27;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_28_28;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_29_29;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_30_30;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_31_31;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_32_32;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_33_33;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_34_34;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_35_35;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_36_36;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_37_37;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_38_38;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_39_39;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_40_40;
#line 106 "deps_map.m"
        MR_Word parse_tree__deps_map__V_41_41;
#line 106 "deps_map.m"
        MR_String parse_tree__deps_map__V_42_42;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_43_43;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_44_44;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_45_45;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_46_46;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_47_47;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_48_48;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_49_49;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_50_50;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_51_51;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_52_52;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_53_53;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_54_54;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_55_55;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_56_56;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_57_57;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_58_58;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_59_59;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_60_60;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_61_61;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_62_62;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_63_63;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_64_64;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_65_65;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_66_66;
#line 107 "deps_map.m"
        MR_Word parse_tree__deps_map__V_67_67;
#line 107 "deps_map.m"
        MR_String parse_tree__deps_map__V_68_68;

#line 104 "deps_map.m"
        {
#line 104 "deps_map.m"
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_70_70, parse_tree__deps_map__TypeCtorInfo_71_71, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__ModuleName_4)), &parse_tree__deps_map__conv1_V_15_15);
        }
#line 104 "deps_map.m"
        parse_tree__deps_map__V_15_15 = ((MR_Word) parse_tree__deps_map__conv1_V_15_15);
#line 104 "deps_map.m"
        parse_tree__deps_map__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 0)));
#line 104 "deps_map.m"
        parse_tree__deps_map__ModuleImports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 1)));
#line 105 "deps_map.m"
        {
#line 105 "deps_map.m"
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_70_70, parse_tree__deps_map__TypeCtorInfo_71_71, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__Parent_8)), &parse_tree__deps_map__conv2_V_16_16);
        }
#line 105 "deps_map.m"
        parse_tree__deps_map__V_16_16 = ((MR_Word) parse_tree__deps_map__conv2_V_16_16);
#line 105 "deps_map.m"
        parse_tree__deps_map__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 0)));
#line 105 "deps_map.m"
        parse_tree__deps_map__ParentImports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 1)));
#line 106 "deps_map.m"
        parse_tree__deps_map__ModuleFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 0)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 1)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 2)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 3)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 4)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 5)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 6)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 7)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 8)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 9)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 10)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 11)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 12)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 13)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 14)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 15)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 16)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 17)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 18)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 19)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 20)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 21)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 22)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 23)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 24)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 25)));
#line 106 "deps_map.m"
        parse_tree__deps_map__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 26)));
#line 107 "deps_map.m"
        parse_tree__deps_map__ParentFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 0)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 1)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 2)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 3)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 4)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 5)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 6)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 7)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 8)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 9)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 10)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 11)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 12)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 13)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 14)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 15)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 16)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 17)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 18)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 19)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 20)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 21)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 22)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 23)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 24)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 25)));
#line 107 "deps_map.m"
        parse_tree__deps_map__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 26)));
#line 108 "deps_map.m"
        parse_tree__deps_map__succeeded = (strcmp(parse_tree__deps_map__ModuleFileName_13, parse_tree__deps_map__ParentFileName_14) == 0);
#line 110 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 109 "deps_map.m"
          parse_tree__deps_map__Kind_6 = (MR_Integer) 1;
#line 110 "deps_map.m"
        else
#line 111 "deps_map.m"
          parse_tree__deps_map__Kind_6 = (MR_Integer) 2;
#line 104 "deps_map.m"
      }
#line 113 "deps_map.m"
    else
#line 114 "deps_map.m"
      parse_tree__deps_map__Kind_6 = (MR_Integer) 0;
#line 101 "deps_map.m"
    return parse_tree__deps_map__Kind_6;
#line 101 "deps_map.m"
  }
#line 51 "deps_map.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.deps_map. */
