/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2022-04-03
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[2];

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3];

static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3];

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__deps_map__add_fim_module_with_context_4_p_0(
  MR_Word FIMSpec_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Modules_0_10,
  MR_Word * STATE_VARIABLE_Modules_11);

static void MR_CALL 
parse_tree__deps_map__add_avail_module_with_context_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeImplicit_6,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__deps_map__add_module_name_and_context_4_p_0(
  MR_Word Context_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10);

static void MR_CALL 
parse_tree__deps_map__add_public_include_module_with_context_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_Modules_0_12,
  MR_Word * STATE_VARIABLE_Modules_13);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word STATE_VARIABLE_Modules_0_18,
  MR_Word STATE_VARIABLE_DepsMap_0_19,
  MR_Word * STATE_VARIABLE_DepsMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word Module_15,
  MR_Word ExpectationContexts_16,
  MR_Word STATE_VARIABLE_Modules_0_33,
  MR_Word * STATE_VARIABLE_Modules_34,
  MR_Word STATE_VARIABLE_DepsMap_0_35,
  MR_Word * STATE_VARIABLE_DepsMap_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependencies_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependencies_11_p_0(
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ExpectationContexts_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_DepsMap_0_22,
  MR_Word * STATE_VARIABLE_DepsMap_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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
parse_tree__deps_map____Unify____expectation_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001(
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

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[4][7];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_or_find_dependencies_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[2])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[3])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_12_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_module_0)
};

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 = {
  (MR_String) "deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0,
  NULL,
  parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps",
  { parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0 },
  { parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____expectation_contexts_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____expectation_contexts_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "expectation_contexts",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "expectation_contexts_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____have_processed_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____have_processed_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "have_processed",
  { parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0 },
  { parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_have_processed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0,

};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
  (MR_String) "toplevel",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
  (MR_String) "nested_submodule",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
  (MR_String) "separate_submodule",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____submodule_kind_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____submodule_kind_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "submodule_kind",
  { parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0 },
  { parse_tree__deps_map__parse_tree__deps_map__enum_ordinal_ordered_submodule_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0,

};

void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__module_imports____Compare____burdened_module_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__module_imports____Unify____burdened_module_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map__add_fim_module_with_context_4_p_0(
  MR_Word FIMSpec_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Modules_0_10,
  MR_Word * STATE_VARIABLE_Modules_11)
{
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_5, (MR_Integer) 1))));

  parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_6, ModuleName_9, STATE_VARIABLE_Modules_0_10, STATE_VARIABLE_Modules_11);
}

static void MR_CALL 
parse_tree__deps_map__add_avail_module_with_context_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeImplicit_6,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  if (((MR_tag((MR_Word) MaybeImplicit_6)) == (MR_Integer) 0))
  {
    MR_Word SectionImportUse_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeImplicit_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) SectionImportUse_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionImportUse_8, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_32, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SectionImportUse_8, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_33, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SectionImportUse_8, (MR_Integer) 0))));

          parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_25, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportUse_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_8, (MR_Integer) 1))));

              parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_31, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_8, (MR_Integer) 1))));
              MR_Word ImpContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_8, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Modules_13_28;

              parse_tree__deps_map__add_module_name_and_context_4_p_0(IntContext_26, ModuleName_5, STATE_VARIABLE_Modules_0_11, &STATE_VARIABLE_Modules_13_28);
              parse_tree__deps_map__add_module_name_and_context_4_p_0(ImpContext_27, ModuleName_5, STATE_VARIABLE_Modules_13_28, STATE_VARIABLE_Modules_12);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word MaybeSectionImportUse_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicit_6, (MR_Integer) 1))));

    if ((MaybeSectionImportUse_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_14;

      Var_14 = mercury__term__dummy_context_init_0_f_0();
      parse_tree__deps_map__add_module_name_and_context_4_p_0(Var_14, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
    }
    else
    {
      MR_Word SectionImportUse_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSectionImportUse_10, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportUse_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionImportUse_17, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_46, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SectionImportUse_17, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_47, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SectionImportUse_17, (MR_Integer) 0))));

            parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_39, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportUse_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_17, (MR_Integer) 1))));

                parse_tree__deps_map__add_module_name_and_context_4_p_0(Context_45, ModuleName_5, STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_17, (MR_Integer) 1))));
                MR_Word ImpContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SectionImportUse_17, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Modules_13_42;

                parse_tree__deps_map__add_module_name_and_context_4_p_0(IntContext_40, ModuleName_5, STATE_VARIABLE_Modules_0_11, &STATE_VARIABLE_Modules_13_42);
                parse_tree__deps_map__add_module_name_and_context_4_p_0(ImpContext_41, ModuleName_5, STATE_VARIABLE_Modules_13_42, STATE_VARIABLE_Modules_12);
              }
              break;
          }
          break;
      }
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
  MR_bool succeeded;
  MR_Word OldContexts_8;
  MR_Box conv0_OldContexts_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), STATE_VARIABLE_Modules_0_9, ((MR_Box) (ModuleName_6)), &conv0_OldContexts_8);
  if (succeeded)
  {
    OldContexts_8 = ((MR_Word) (conv0_OldContexts_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (OldContexts_8));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_6)), ((MR_Box) (Var_11)), STATE_VARIABLE_Modules_0_9, STATE_VARIABLE_Modules_10);
  }
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_6)), ((MR_Box) (Var_13)), STATE_VARIABLE_Modules_0_9, STATE_VARIABLE_Modules_10);
  }
}

static void MR_CALL 
parse_tree__deps_map__add_public_include_module_with_context_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_Modules_0_12,
  MR_Word * STATE_VARIABLE_Modules_13)
{
  MR_bool succeeded;
  MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InclInfo_6, (MR_Integer) 1))));

  switch (Section_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Modules_13 = STATE_VARIABLE_Modules_0_12;
      break;
    case (MR_Integer) 0:
      {
        MR_Word OldContexts_10;
        MR_Box conv0_OldContexts_10;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), STATE_VARIABLE_Modules_0_12, ((MR_Box) (ModuleName_5)), &conv0_OldContexts_10);
        if (succeeded)
        {
          OldContexts_10 = ((MR_Word) (conv0_OldContexts_10));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Contexts_11;

          {
            Contexts_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Contexts_11, 0) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(1), Contexts_11, 1) = ((MR_Box) (OldContexts_10));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_5)), ((MR_Box) (Contexts_11)), STATE_VARIABLE_Modules_0_12, STATE_VARIABLE_Modules_13);
        }
        else
        {
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_15)), STATE_VARIABLE_Modules_0_12, STATE_VARIABLE_Modules_13);
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_DepsMap_0_9,
  MR_Word * STATE_VARIABLE_DepsMap_10)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_4, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 0))));
  MR_Word Deps_8;

  {
    Deps_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Deps_8, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Deps_8, 1) = ((MR_Box) (BurdenedModule_4));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Deps_8)), STATE_VARIABLE_DepsMap_0_9, STATE_VARIABLE_DepsMap_10);
}

void MR_CALL 
parse_tree__deps_map__generate_deps_map_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_DepsMap_0_16,
  MR_Word * STATE_VARIABLE_DepsMap_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word Var_22;

  Var_22 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_12)), ((MR_Box) ((MR_Unsigned) 0U)));
  parse_tree__deps_map__generate_deps_map_loop_9_p_0(Globals_10, Search_11, Var_22, STATE_VARIABLE_DepsMap_0_16, STATE_VARIABLE_DepsMap_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word STATE_VARIABLE_Modules_0_18,
  MR_Word STATE_VARIABLE_DepsMap_0_19,
  MR_Word * STATE_VARIABLE_DepsMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Module_16;
    MR_Word ExpectationContexts_17;
    MR_Word STATE_VARIABLE_Modules_25_25;
    MR_Box conv1_Module_16;
    MR_Box conv0_ExpectationContexts_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__remove_smallest_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), &conv1_Module_16, &conv0_ExpectationContexts_17, STATE_VARIABLE_Modules_0_18, &STATE_VARIABLE_Modules_25_25);
    if (succeeded)
    {
      Module_16 = ((MR_Word) (conv1_Module_16));
      ExpectationContexts_17 = ((MR_Word) (conv0_ExpectationContexts_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Modules_26_26;
      MR_Word STATE_VARIABLE_DepsMap_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_18;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_19;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_21;

      parse_tree__deps_map__generate_deps_map_step_12_p_0(Globals_10, Search_11, Module_16, ExpectationContexts_17, STATE_VARIABLE_Modules_25_25, &STATE_VARIABLE_Modules_26_26, STATE_VARIABLE_DepsMap_0_19, &STATE_VARIABLE_DepsMap_27_27, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Modules_0_18 = STATE_VARIABLE_Modules_26_26;
      next_value_of_STATE_VARIABLE_DepsMap_0_19 = STATE_VARIABLE_DepsMap_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_21 = STATE_VARIABLE_Specs_28_28;
      STATE_VARIABLE_Modules_0_18 = next_value_of_STATE_VARIABLE_Modules_0_18;
      STATE_VARIABLE_DepsMap_0_19 = next_value_of_STATE_VARIABLE_DepsMap_0_19;
      STATE_VARIABLE_Specs_0_21 = next_value_of_STATE_VARIABLE_Specs_0_21;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      *STATE_VARIABLE_DepsMap_20 = STATE_VARIABLE_DepsMap_0_19;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Modules_12;

  parse_tree__deps_map__add_avail_module_with_context_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Modules_12);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_Modules_12));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Modules_13;

  parse_tree__deps_map__add_public_include_module_with_context_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Modules_13);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Modules_13));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Modules_11;

  parse_tree__deps_map__add_fim_module_with_context_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Modules_11);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Modules_11));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Modules_11;

  parse_tree__deps_map__add_fim_module_with_context_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Modules_11);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_11));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_10;

  parse_tree__deps_map__add_module_name_and_context_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_10));
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word Module_15,
  MR_Word ExpectationContexts_16,
  MR_Word STATE_VARIABLE_Modules_0_33,
  MR_Word * STATE_VARIABLE_Modules_34,
  MR_Word STATE_VARIABLE_DepsMap_0_35,
  MR_Word * STATE_VARIABLE_DepsMap_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_Word Deps0_21;
  MR_Word Done0_22;
  MR_Word BurdenedModule_23;
  MR_Word STATE_VARIABLE_DepsMap_41_41;

  parse_tree__deps_map__lookup_or_find_dependencies_11_p_0(Globals_13, Search_14, Module_15, ExpectationContexts_16, &Deps0_21, STATE_VARIABLE_DepsMap_0_35, &STATE_VARIABLE_DepsMap_41_41, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
  Done0_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Deps0_21, (MR_Integer) 0))) & (MR_Integer) 1);
  BurdenedModule_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deps0_21, (MR_Integer) 1))));
  switch (Done0_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Modules_34 = STATE_VARIABLE_Modules_0_33;
        *STATE_VARIABLE_DepsMap_36 = STATE_VARIABLE_DepsMap_41_41;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Deps_24;
        MR_Word ParseTreeModuleSrc_25;
        MR_Word ModuleName_26;
        MR_Word AncestorModuleNames_27;
        MR_Word ModuleNameContext_28;
        MR_Word IntFIMs_29;
        MR_Word ImpFIMs_30;
        MR_Word InclMap_31;
        MR_Word ImportUseMap_32;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_Modules_47_47;
        MR_Word STATE_VARIABLE_Modules_49_49;
        MR_Word STATE_VARIABLE_Modules_51_51;
        MR_Word STATE_VARIABLE_Modules_53_53;
        MR_Box conv1_STATE_VARIABLE_Modules_47_47;
        MR_Box conv3_STATE_VARIABLE_Modules_49_49;
        MR_Box conv5_STATE_VARIABLE_Modules_51_51;
        MR_Box conv7_STATE_VARIABLE_Modules_53_53;
        MR_Box conv9_STATE_VARIABLE_Modules_34;

        {
          Deps_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Deps_24, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Deps_24, 1) = ((MR_Box) (BurdenedModule_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (Module_15)), ((MR_Box) (Deps_24)), STATE_VARIABLE_DepsMap_41_41, STATE_VARIABLE_DepsMap_36);
        ParseTreeModuleSrc_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_23, (MR_Integer) 1))));
        ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 0))));
        AncestorModuleNames_27 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_26);
        ModuleNameContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 1))));
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleNameContext_28));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_46, AncestorModuleNames_27, ((MR_Box) (STATE_VARIABLE_Modules_0_33)), &conv1_STATE_VARIABLE_Modules_47_47);
        STATE_VARIABLE_Modules_47_47 = ((MR_Word) (conv1_STATE_VARIABLE_Modules_47_47));
        IntFIMs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 10))));
        ImpFIMs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 11))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[3]), IntFIMs_29, ((MR_Box) (STATE_VARIABLE_Modules_47_47)), &conv3_STATE_VARIABLE_Modules_49_49);
        STATE_VARIABLE_Modules_49_49 = ((MR_Word) (conv3_STATE_VARIABLE_Modules_49_49));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[4]), ImpFIMs_30, ((MR_Box) (STATE_VARIABLE_Modules_49_49)), &conv5_STATE_VARIABLE_Modules_51_51);
        STATE_VARIABLE_Modules_51_51 = ((MR_Word) (conv5_STATE_VARIABLE_Modules_51_51));
        InclMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 4))));
        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[5]), InclMap_31, ((MR_Box) (STATE_VARIABLE_Modules_51_51)), &conv7_STATE_VARIABLE_Modules_53_53);
        STATE_VARIABLE_Modules_53_53 = ((MR_Word) (conv7_STATE_VARIABLE_Modules_53_53));
        ImportUseMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_25, (MR_Integer) 9))));
        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[6]), ImportUseMap_32, ((MR_Box) (STATE_VARIABLE_Modules_53_53)), &conv9_STATE_VARIABLE_Modules_34);
        *STATE_VARIABLE_Modules_34 = ((MR_Word) (conv9_STATE_VARIABLE_Modules_34));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependencies_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepsMap_10;

  parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepsMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsMap_10));
}

static void MR_CALL 
parse_tree__deps_map__lookup_or_find_dependencies_11_p_0(
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ExpectationContexts_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_DepsMap_0_22,
  MR_Word * STATE_VARIABLE_DepsMap_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word DepsPrime_20;
  MR_Box conv0_DepsPrime_20;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), STATE_VARIABLE_DepsMap_0_22, ((MR_Box) (ModuleName_14)), &conv0_DepsPrime_20);
  if (succeeded)
  {
    DepsPrime_20 = ((MR_Word) (conv0_DepsPrime_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Deps_16 = DepsPrime_20;
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    *STATE_VARIABLE_DepsMap_23 = STATE_VARIABLE_DepsMap_0_22;
  }
  else
  {
    MR_Word BurdenedModuleList_21;
    MR_Word Specs_50;
    MR_String SourceFileName_52;
    MR_Word ParseTreeSrc_54;
    MR_Word SrcSpecs_55;
    MR_Word SrcReadModuleErrors_56;
    MR_Word Var_57;
    MR_Word Var_53;
    MR_Box conv2_STATE_VARIABLE_DepsMap_23;
    MR_Box conv3_Deps_16;

    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (ModuleName_14));
    }
    parse_tree__read_modules__read_module_src_14_p_0(Globals_12, Var_57, (MR_Integer) 0, Search_13, ModuleName_14, ExpectationContexts_15, &SourceFileName_52, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &Var_53, &ParseTreeSrc_54, &SrcSpecs_55, &SrcReadModuleErrors_56);
    parse_tree__module_imports__parse_tree_src_to_burdened_module_list_7_p_0(Globals_12, SourceFileName_52, ParseTreeSrc_54, SrcReadModuleErrors_56, SrcSpecs_55, &Specs_50, &BurdenedModuleList_21);
    *STATE_VARIABLE_Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_50, STATE_VARIABLE_Specs_0_24);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), BurdenedModuleList_21, ((MR_Box) (STATE_VARIABLE_DepsMap_0_22)), &conv2_STATE_VARIABLE_DepsMap_23);
    *STATE_VARIABLE_DepsMap_23 = ((MR_Word) (conv2_STATE_VARIABLE_DepsMap_23));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *STATE_VARIABLE_DepsMap_23, ((MR_Box) (ModuleName_14)), &conv3_Deps_16);
    *Deps_16 = ((MR_Word) (conv3_Deps_16));
  }
}

MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
  MR_Word ModuleName_4,
  MR_Word DepsMap_5)
{
  MR_bool succeeded;
  MR_Word Kind_6;

  if (((MR_tag((MR_Word) ModuleName_4)) == (MR_Integer) 1))
  {
    MR_Word Parent_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_4, (MR_Integer) 0))));
    MR_Word BurdenedModule_10;
    MR_Word ParentBurdenedModule_12;
    MR_Word ModuleBaggage_13;
    MR_Word ParentBaggage_14;
    MR_String ModuleFileName_15;
    MR_String ParentFileName_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv0_Var_18;
    MR_Box conv1_Var_19;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (ModuleName_4)), &conv0_Var_18);
    Var_18 = ((MR_Word) (conv0_Var_18));
    BurdenedModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (Parent_7)), &conv1_Var_19);
    Var_19 = ((MR_Word) (conv1_Var_19));
    ParentBurdenedModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
    ModuleBaggage_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_10, (MR_Integer) 0))));
    ParentBaggage_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentBurdenedModule_12, (MR_Integer) 0))));
    ModuleFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleBaggage_13, (MR_Integer) 0))));
    ParentFileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ParentBaggage_14, (MR_Integer) 0))));
    succeeded = (strcmp(ModuleFileName_15, ParentFileName_16) == 0);
    if (succeeded)
      Kind_6 = (MR_Integer) 1;
    else
      Kind_6 = (MR_Integer) 2;
  }
  else
    Kind_6 = (MR_Integer) 0;
  return Kind_6;
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____deps_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____expectation_contexts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____expectation_contexts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____expectation_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____expectation_contexts_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____expectation_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____expectation_contexts_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____have_processed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__deps_map____Compare____submodule_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_expectation_contexts_map_0);
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
