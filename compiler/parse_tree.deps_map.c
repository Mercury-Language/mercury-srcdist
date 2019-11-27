/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2019-11-27
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

static const MR_DuArgLocn parse_tree__deps_map__parse_tree__deps_map__field_locns_deps_0_0[2];

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
parse_tree__deps_map__generate_deps_map_loop_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Modules_0_15,
  MR_Word Search_10,
  MR_Word STATE_VARIABLE_DepsMap_0_16,
  MR_Word * STATE_VARIABLE_DepsMap_17);

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

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][7];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[7][3] = {
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
    ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_loop_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_loop_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_4[1])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_loop_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps",
  {     parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____have_processed_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____have_processed_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "have_processed",
  {     parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____submodule_kind_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____submodule_kind_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "submodule_kind",
  {     parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0 },
  {     parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0
};

void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
        parse_tree__module_imports____Compare____module_and_imports_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
    MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NewContexts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OldContexts_7;
    MR_Box conv0_OldContexts_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), STATE_VARIABLE_Modules_0_8, ((MR_Box) (ModuleName_4)), &conv0_OldContexts_7);
    if (succeeded)
    {
      OldContexts_7 = ((MR_Word) (conv0_OldContexts_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_10;

      Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), NewContexts_5, OldContexts_7);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_4)), ((MR_Box) (Var_10)), STATE_VARIABLE_Modules_0_8, STATE_VARIABLE_Modules_9);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_4)), ((MR_Box) (NewContexts_5)), STATE_VARIABLE_Modules_0_8, STATE_VARIABLE_Modules_9);
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
      Deps_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Deps_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Deps_7, 1) = ((MR_Box) (ModuleImports_4));
    }
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (Deps_7)), STATE_VARIABLE_DepsMap_0_8, STATE_VARIABLE_DepsMap_9);
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

    Var_17 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_Unsigned) 0U)));
    parse_tree__deps_map__generate_deps_map_loop_7_p_0(Globals_8, Var_17, Search_10, STATE_VARIABLE_DepsMap_0_13, STATE_VARIABLE_DepsMap_14);
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Modules_9;

    parse_tree__deps_map__add_module_name_with_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Modules_9);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Modules_9));
  }
}

static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Modules_10;

    parse_tree__deps_map__add_module_name_and_context_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_10));
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
    ;
    succeeded = mercury__map__remove_smallest_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_1[0]), &conv1_Module_13, &conv0_ExpectationContexts_14, STATE_VARIABLE_Modules_0_15, &STATE_VARIABLE_Modules_20_20);
    if (succeeded)
    {
      Module_13 = ((MR_Word) (conv1_Module_13));
      ExpectationContexts_14 = ((MR_Word) (conv0_ExpectationContexts_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Modules_21_21;
      MR_Word STATE_VARIABLE_DepsMap_22_22;
      MR_Word Deps0_41;
      MR_Word Done0_42;
      MR_Word ModuleImports_43;
      MR_Word STATE_VARIABLE_DepsMap_38_55;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_15;
      MR_Word next_value_of_STATE_VARIABLE_DepsMap_0_16;

      parse_tree__deps_map__lookup_dependencies_9_p_0(Globals_8, Module_13, ExpectationContexts_14, Search_10, &Deps0_41, STATE_VARIABLE_DepsMap_0_16, &STATE_VARIABLE_DepsMap_38_55);
      Done0_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Deps0_41, (MR_Integer) 0))) & (MR_Integer) 1);
      ModuleImports_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deps0_41, (MR_Integer) 1))));
      switch (Done0_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Modules_21_21 = STATE_VARIABLE_Modules_20_20;
            STATE_VARIABLE_DepsMap_22_22 = STATE_VARIABLE_DepsMap_38_55;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Deps_44;
            MR_Word ForeignImportedModules_45;
            MR_Word ModuleNameContext_46;
            MR_Word AncestorModuleNames_47;
            MR_Word ForeignImportedModuleNames_48;
            MR_Word IntDepsMap_49;
            MR_Word ImpDepsMap_50;
            MR_Word PublicChildren_51;
            MR_Word IntDepsModuleNamesContexts_52;
            MR_Word ImpDepsModuleNamesContexts_53;
            MR_Word ChildrenModuleNamesContexts_54;
            MR_Word Var_59;
            MR_Word STATE_VARIABLE_Modules_43_60;
            MR_Word STATE_VARIABLE_Modules_45_62;
            MR_Word STATE_VARIABLE_Modules_47_64;
            MR_Word STATE_VARIABLE_Modules_49_66;
            MR_Box conv3_STATE_VARIABLE_Modules_43_60;
            MR_Box conv4_STATE_VARIABLE_Modules_45_62;
            MR_Box conv6_STATE_VARIABLE_Modules_47_64;
            MR_Box conv8_STATE_VARIABLE_Modules_49_66;
            MR_Box conv10_STATE_VARIABLE_Modules_21_21;

            {
              Deps_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Deps_44, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Deps_44, 1) = ((MR_Box) (ModuleImports_43));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), ((MR_Box) (Module_13)), ((MR_Box) (Deps_44)), STATE_VARIABLE_DepsMap_38_55, &STATE_VARIABLE_DepsMap_22_22);
            parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(ModuleImports_43, &ForeignImportedModules_45);
            parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(ModuleImports_43, &ModuleNameContext_46);
            parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleImports_43, &AncestorModuleNames_47);
            ForeignImportedModuleNames_48 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(ForeignImportedModules_45);
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__deps_map__generate_deps_map_loop_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ModuleNameContext_46));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_59, AncestorModuleNames_47, ((MR_Box) (STATE_VARIABLE_Modules_20_20)), &conv3_STATE_VARIABLE_Modules_43_60);
            STATE_VARIABLE_Modules_43_60 = ((MR_Word) (conv3_STATE_VARIABLE_Modules_43_60));
            mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), Var_59, ForeignImportedModuleNames_48, ((MR_Box) (STATE_VARIABLE_Modules_43_60)), &conv4_STATE_VARIABLE_Modules_45_62);
            STATE_VARIABLE_Modules_45_62 = ((MR_Word) (conv4_STATE_VARIABLE_Modules_45_62));
            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(ModuleImports_43, &IntDepsMap_49);
            parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(ModuleImports_43, &ImpDepsMap_50);
            parse_tree__module_imports__module_and_imports_get_public_children_map_2_p_0(ModuleImports_43, &PublicChildren_51);
            mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_49, &IntDepsModuleNamesContexts_52);
            mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_50, &ImpDepsModuleNamesContexts_53);
            mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), PublicChildren_51, &ChildrenModuleNamesContexts_54);
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[4]), IntDepsModuleNamesContexts_52, ((MR_Box) (STATE_VARIABLE_Modules_45_62)), &conv6_STATE_VARIABLE_Modules_47_64);
            STATE_VARIABLE_Modules_47_64 = ((MR_Word) (conv6_STATE_VARIABLE_Modules_47_64));
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[5]), ImpDepsModuleNamesContexts_53, ((MR_Box) (STATE_VARIABLE_Modules_47_64)), &conv8_STATE_VARIABLE_Modules_49_66);
            STATE_VARIABLE_Modules_49_66 = ((MR_Word) (conv8_STATE_VARIABLE_Modules_49_66));
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__deps_map_scalar_common_2[1]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[0]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[6]), ChildrenModuleNamesContexts_54, ((MR_Box) (STATE_VARIABLE_Modules_49_66)), &conv10_STATE_VARIABLE_Modules_21_21);
            STATE_VARIABLE_Modules_21_21 = ((MR_Word) (conv10_STATE_VARIABLE_Modules_21_21));
          }
          break;
      }
      // direct tailcall eliminated
      ;
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
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DepsMap_9;

    parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepsMap_9);
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

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), STATE_VARIABLE_DepsMap_0_19, ((MR_Box) (ModuleName_11)), &conv0_DepsPrime_17);
    if (succeeded)
    {
      DepsPrime_17 = ((MR_Word) (conv0_DepsPrime_17));
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
      MR_String SourceFileName_43;
      MR_Word ParseTreeSrc_45;
      MR_Word SrcSpecs_46;
      MR_Word SrcReadModuleErrors_47;
      MR_Word ModuleComponentCord0_50;
      MR_Word Var_44;
      MR_Word TypeCtorInfo_48_75;
      MR_Word FatalErrors_51;
      MR_Word Var_65;
      MR_Box conv2_STATE_VARIABLE_DepsMap_20;
      MR_Box conv3_Deps_14;

      parse_tree__read_modules__read_module_src_14_p_0(Globals_10, (MR_String) "Getting dependencies for module", (MR_Integer) 0, Search_13, ModuleName_11, ExpectationContexts_12, &SourceFileName_43, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &Var_44, &ParseTreeSrc_45, &SrcSpecs_46, &SrcReadModuleErrors_47);
      ModuleComponentCord0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc_45, (MR_Integer) 2))));
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentCord0_50);
      if (succeeded)
      {
        Var_65 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        TypeCtorInfo_48_75 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
        mercury__set__intersect_3_p_0(TypeCtorInfo_48_75, SrcReadModuleErrors_47, Var_65, &FatalErrors_51);
        succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_48_75, FatalErrors_51);
      }
      if (succeeded)
      {
        MR_String IntFileName_52;
        MR_Word ParseTreeInt_54;
        MR_Word ModuleAndImports_57;
        MR_Word Var_53;
        MR_Word _IntSpecs_55;
        MR_Word _IntReadModuleErrors_56;

        parse_tree__read_modules__read_module_int_14_p_0(Globals_10, (MR_String) "Getting dependencies for module interface", (MR_Integer) 0, Search_13, ModuleName_11, (MR_Integer) 1, &IntFileName_52, (MR_Word) (&parse_tree__deps_map_scalar_common_3[0]), &Var_53, &ParseTreeInt_54, &_IntSpecs_55, &_IntReadModuleErrors_56);
        parse_tree__module_imports__parse_tree_int_to_module_and_imports_5_p_0(Globals_10, IntFileName_52, ParseTreeInt_54, SrcReadModuleErrors_47, &ModuleAndImports_57);
        {
          ModuleImportsList_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ModuleImportsList_18, 0) = ((MR_Box) (ModuleAndImports_57));
          MR_hl_field(MR_mktag(1), ModuleImportsList_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Specs_58;
        MR_Word _RawCompUnits_59;

        parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0(Globals_10, SourceFileName_43, ParseTreeSrc_45, SrcReadModuleErrors_47, SrcSpecs_46, &Specs_58, &_RawCompUnits_59, &ModuleImportsList_18);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_58, Globals_10);
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&parse_tree__deps_map_scalar_common_2[2]), (MR_Word) (&parse_tree__deps_map_scalar_common_2[3]), ModuleImportsList_18, ((MR_Box) (STATE_VARIABLE_DepsMap_0_19)), &conv2_STATE_VARIABLE_DepsMap_20);
      *STATE_VARIABLE_DepsMap_20 = ((MR_Word) (conv2_STATE_VARIABLE_DepsMap_20));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), *STATE_VARIABLE_DepsMap_20, ((MR_Box) (ModuleName_11)), &conv3_Deps_14);
      *Deps_14 = ((MR_Word) (conv3_Deps_14));
    }
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
    succeeded = mercury__list__last_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_7, &conv0_Parent_8);
    if (succeeded)
    {
      Parent_8 = ((MR_Word) (conv0_Parent_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleImports_10;
      MR_Word ParentImports_12;
      MR_String ModuleFileName_13;
      MR_String ParentFileName_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Box conv1_Var_15;
      MR_Box conv2_Var_16;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (ModuleName_4)), &conv1_Var_15);
      Var_15 = ((MR_Word) (conv1_Var_15));
      ModuleImports_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_5, ((MR_Box) (Parent_8)), &conv2_Var_16);
      Var_16 = ((MR_Word) (conv2_Var_16));
      ParentImports_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleImports_10, &ModuleFileName_13);
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ParentImports_12, &ParentFileName_14);
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

    succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__deps_map____Compare____deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__deps_map____Compare____deps_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__deps_map____Compare____have_processed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__deps_map____Compare____submodule_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
