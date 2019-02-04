/*
** Automatically generated from `read_modules.m'
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


/* :- module parse_tree.read_modules. */
/* :- implementation. */

/*
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#include "parse_tree.read_modules.mih"


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
#include "dir.mih"
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
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1];

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4,
  MR_Box parse_tree__read_modules__wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word parse_tree__read_modules__Globals_8,
  MR_Word parse_tree__read_modules__VeryVerbose_9,
  MR_Word parse_tree__read_modules__Errors_10,
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__read_modules__read_module_end_14_p_0(
  MR_Word parse_tree__read_modules__Globals_15,
  MR_Word parse_tree__read_modules__IgnoreErrors_16,
  MR_Word parse_tree__read_modules__VeryVerbose_17,
  MR_Word parse_tree__read_modules__MaybeFileNameAndStream_18,
  MR_String parse_tree__read_modules__FileName0_19,
  MR_String * parse_tree__read_modules__FileName_20,
  MR_Word parse_tree__read_modules__MaybeTimestampRes_21,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_22,
  MR_Word parse_tree__read_modules__IsEmpty_23,
  MR_Word parse_tree__read_modules__ModuleSpecs_24,
  MR_Word * parse_tree__read_modules__Specs_25,
  MR_Word parse_tree__read_modules__Errors_26);


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[3][3];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[7]))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_read_module",
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0 = {
  (MR_String) "have_read_module_key",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_key_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_key_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_key",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_2_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_2_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_int",
  (MR_String) "hrmm_opt"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0 = {
  (MR_String) "have_read_module_maps",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_maps",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_opt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_src_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_ignore_errors",
  {     parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0
};

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_int_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_int_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
  MR_Box parse_tree__read_modules__wrapper_arg_4,
  MR_Box parse_tree__read_modules__wrapper_arg_5)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_4), ((MR_Word) parse_tree__read_modules__wrapper_arg_5));
    }
    *parse_tree__read_modules__wrapper_arg_3 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_maps_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
  MR_Box parse_tree__read_modules__wrapper_arg_2,
  MR_Box parse_tree__read_modules__wrapper_arg_3)
{
  {
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

    {
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
    MR_Integer parse_tree__read_modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__Cast_HeadVar1_4, parse_tree__read_modules__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
  MR_Word parse_tree__read_modules__HeadVar__2_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

    {
      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

    {
      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_12 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
    MR_Integer parse_tree__read_modules__CastY_13 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_12 == parse_tree__read_modules__CastY_13);
    if (parse_tree__read_modules__succeeded)
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__read_modules__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__read_modules__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__read_modules__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__read_modules__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__read_modules__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], &parse_tree__read_modules__Var_10, ((MR_Box) (parse_tree__read_modules__Var_4)), ((MR_Box) (parse_tree__read_modules__Var_7)));
        }
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_10 == (MR_Integer) 0);
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
        if (parse_tree__read_modules__succeeded)
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_10;
        else
          {
            MR_Word parse_tree__read_modules__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], &parse_tree__read_modules__Var_11, ((MR_Box) (parse_tree__read_modules__Var_5)), ((MR_Box) (parse_tree__read_modules__Var_8)));
            }
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_11 == (MR_Integer) 0);
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
            if (parse_tree__read_modules__succeeded)
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Var_6)), ((MR_Box) (parse_tree__read_modules__Var_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__read_modules__TypeInfo_12_12;
        MR_Word parse_tree__read_modules__TypeInfo_13_13;
        MR_Word parse_tree__read_modules__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__read_modules__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__read_modules__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__read_modules__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));

        {
          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__Var_3)), ((MR_Box) (parse_tree__read_modules__Var_6)));
        }
        if (parse_tree__read_modules__succeeded)
          {
            parse_tree__read_modules__TypeInfo_12_12 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
            {
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_12_12, ((MR_Box) (parse_tree__read_modules__Var_4)), ((MR_Box) (parse_tree__read_modules__Var_7)));
            }
            if (parse_tree__read_modules__succeeded)
              {
                parse_tree__read_modules__TypeInfo_13_13 = (MR_Word) &parse_tree__read_modules_scalar_common_2[2];
                {
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_13_13, ((MR_Box) (parse_tree__read_modules__Var_5)), ((MR_Box) (parse_tree__read_modules__Var_8)));
                }
              }
          }
      }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_6,
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_7,
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__TypeInfo_9_9;
    MR_Word parse_tree__read_modules__TypeInfo_11_11;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

    {
      parse_tree__read_modules__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_6));
    }
    {
      parse_tree__read_modules__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_7));
    }
    {
      mercury__tree234____Compare____tree234_2_0(parse_tree__read_modules__TypeInfo_9_9, parse_tree__read_modules__TypeInfo_11_11, parse_tree__read_modules__HeadVar__1_1, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_4, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_5,
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_6,
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__TypeInfo_8_8;
    MR_Word parse_tree__read_modules__TypeInfo_10_10;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

    {
      parse_tree__read_modules__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_5));
    }
    {
      parse_tree__read_modules__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_6));
    }
    {
      parse_tree__read_modules__succeeded = mercury__tree234____Unify____tree234_2_0(parse_tree__read_modules__TypeInfo_8_8, parse_tree__read_modules__TypeInfo_10_10, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_3, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_4);
    }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_11,
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
    if (parse_tree__read_modules__succeeded)
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__read_modules__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box parse_tree__read_modules__Var_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));
        MR_Word parse_tree__read_modules__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box parse_tree__read_modules__Var_7 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1));
        MR_Word parse_tree__read_modules__Var_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__read_modules__Var_8, parse_tree__read_modules__Var_4, parse_tree__read_modules__Var_6);
        }
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_8 == (MR_Integer) 0);
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
        if (parse_tree__read_modules__succeeded)
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_8;
        else
          {
            mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_FK_11, parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__Var_5, parse_tree__read_modules__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_9,
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_7 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
    MR_Integer parse_tree__read_modules__CastY_8 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_7 == parse_tree__read_modules__CastY_8);
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__read_modules__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box parse_tree__read_modules__Var_4 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1));
        MR_Word parse_tree__read_modules__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box parse_tree__read_modules__Var_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));

        {
          parse_tree__read_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__read_modules__Var_3, parse_tree__read_modules__Var_5);
        }
        if (parse_tree__read_modules__succeeded)
          {
            parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_FK_9, parse_tree__read_modules__Var_4, parse_tree__read_modules__Var_6);
          }
      }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0(
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0(
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

    {
      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_20,
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2,
  MR_Word parse_tree__read_modules__HeadVar__3_3)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_18 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
    MR_Integer parse_tree__read_modules__CastY_19 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_18 == parse_tree__read_modules__CastY_19);
    if (parse_tree__read_modules__succeeded)
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__read_modules__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box parse_tree__read_modules__Var_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
        MR_Word parse_tree__read_modules__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__read_modules__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));
        MR_String parse_tree__read_modules__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
        MR_Box parse_tree__read_modules__Var_11 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2));
        MR_Word parse_tree__read_modules__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__read_modules__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word parse_tree__read_modules__Var_14;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__read_modules__Var_14, parse_tree__read_modules__Var_4, parse_tree__read_modules__Var_9);
        }
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_14 == (MR_Integer) 0);
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
        if (parse_tree__read_modules__succeeded)
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_14;
        else
          {
            MR_Word parse_tree__read_modules__Var_15;

            {
              parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__read_modules__Var_15, parse_tree__read_modules__Var_5, parse_tree__read_modules__Var_10);
            }
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_15 == (MR_Integer) 0);
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
            if (parse_tree__read_modules__succeeded)
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_15;
            else
              {
                MR_Word parse_tree__read_modules__Var_16;

                {
                  mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_PT_20, &parse_tree__read_modules__Var_16, parse_tree__read_modules__Var_6, parse_tree__read_modules__Var_11);
                }
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_16 == (MR_Integer) 0);
                parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
                if (parse_tree__read_modules__succeeded)
                  *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_16;
                else
                  {
                    MR_Word parse_tree__read_modules__Var_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[4], &parse_tree__read_modules__Var_17, ((MR_Box) (parse_tree__read_modules__Var_7)), ((MR_Box) (parse_tree__read_modules__Var_12)));
                    }
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__Var_17 == (MR_Integer) 0);
                    parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
                    if (parse_tree__read_modules__succeeded)
                      *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__Var_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[5], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Var_8)), ((MR_Box) (parse_tree__read_modules__Var_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_15,
  MR_Word parse_tree__read_modules__HeadVar__1_1,
  MR_Word parse_tree__read_modules__HeadVar__2_2)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Integer parse_tree__read_modules__CastX_13 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
    MR_Integer parse_tree__read_modules__CastY_14 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_13 == parse_tree__read_modules__CastY_14);
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__read_modules__TypeInfo_17_17;
        MR_Word parse_tree__read_modules__TypeInfo_18_18;
        MR_String parse_tree__read_modules__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box parse_tree__read_modules__Var_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2));
        MR_Word parse_tree__read_modules__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__read_modules__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 4)));
        MR_String parse_tree__read_modules__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box parse_tree__read_modules__Var_10 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
        MR_Word parse_tree__read_modules__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__read_modules__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));

        parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__Var_3, parse_tree__read_modules__Var_8) == 0);
        if (parse_tree__read_modules__succeeded)
          {
            {
              parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__Var_4, parse_tree__read_modules__Var_9);
            }
            if (parse_tree__read_modules__succeeded)
              {
                {
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_PT_15, parse_tree__read_modules__Var_5, parse_tree__read_modules__Var_10);
                }
                if (parse_tree__read_modules__succeeded)
                  {
                    parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_1[4];
                    {
                      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__Var_6)), ((MR_Box) (parse_tree__read_modules__Var_11)));
                    }
                    if (parse_tree__read_modules__succeeded)
                      {
                        parse_tree__read_modules__TypeInfo_18_18 = (MR_Word) &parse_tree__read_modules_scalar_common_1[5];
                        {
                          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_18_18, ((MR_Box) (parse_tree__read_modules__Var_7)), ((MR_Box) (parse_tree__read_modules__Var_12)));
                        }
                      }
                  }
              }
          }
      }
    return parse_tree__read_modules__succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word parse_tree__read_modules__Globals_8,
  MR_Word parse_tree__read_modules__VeryVerbose_9,
  MR_Word parse_tree__read_modules__Errors_10,
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    {
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_10);
    }
    if (parse_tree__read_modules__succeeded)
      {
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "successful parse.\n");
        }
        *parse_tree__read_modules__STATE_VARIABLE_Specs_15 = parse_tree__read_modules__STATE_VARIABLE_Specs_0_14;
      }
    else
      {
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_30;
        MR_Word parse_tree__read_modules__FatalErrors_13;
        MR_Word parse_tree__read_modules__Var_20;

        {
          parse_tree__read_modules__Var_20 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        }
        parse_tree__read_modules__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
        {
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__Errors_10, parse_tree__read_modules__Var_20, &parse_tree__read_modules__FatalErrors_13);
        }
        {
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__FatalErrors_13);
        }
        if (parse_tree__read_modules__succeeded)
          {
            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "parse error(s).\n");
            }
          }
        else
          {
            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "fatal error(s).\n");
            }
          }
        {
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_9, parse_tree__read_modules__Globals_8, parse_tree__read_modules__STATE_VARIABLE_Specs_0_14, parse_tree__read_modules__STATE_VARIABLE_Specs_15);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_14_p_0(
  MR_Word parse_tree__read_modules__Globals_15,
  MR_Word parse_tree__read_modules__IgnoreErrors_16,
  MR_Word parse_tree__read_modules__VeryVerbose_17,
  MR_Word parse_tree__read_modules__MaybeFileNameAndStream_18,
  MR_String parse_tree__read_modules__FileName0_19,
  MR_String * parse_tree__read_modules__FileName_20,
  MR_Word parse_tree__read_modules__MaybeTimestampRes_21,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_22,
  MR_Word parse_tree__read_modules__IsEmpty_23,
  MR_Word parse_tree__read_modules__ModuleSpecs_24,
  MR_Word * parse_tree__read_modules__Specs_25,
  MR_Word parse_tree__read_modules__Errors_26)
{
  {
    MR_bool parse_tree__read_modules__succeeded;

    if (((MR_tag((MR_Word) parse_tree__read_modules__MaybeFileNameAndStream_18)) == (MR_mktag((MR_Integer) 1))))
      *parse_tree__read_modules__FileName_20 = parse_tree__read_modules__FileName0_19;
    else
      {
        MR_Word parse_tree__read_modules__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__MaybeFileNameAndStream_18, (MR_Integer) 0)));
        MR_Word parse_tree__read_modules__Var_28;

        *parse_tree__read_modules__FileName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__Var_32, (MR_Integer) 0)));
        parse_tree__read_modules__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__Var_32, (MR_Integer) 1)));
      }
    if ((parse_tree__read_modules__MaybeTimestampRes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__read_modules__MaybeTimestamp_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__read_modules__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_21, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__read_modules__Var_55)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__read_modules__IOError_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__Var_55, (MR_Integer) 0)));
            MR_Word parse_tree__read_modules__SmartRecompilation_50;

            *parse_tree__read_modules__MaybeTimestamp_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 126, &parse_tree__read_modules__SmartRecompilation_50);
            }
            switch (parse_tree__read_modules__SmartRecompilation_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__read_modules__Warn_62;

                  {
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
                  {
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
                  {
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 29, &parse_tree__read_modules__Warn_62);
                  }
                  switch (parse_tree__read_modules__Warn_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String parse_tree__read_modules__Msg_63;
                        MR_Word parse_tree__read_modules__HaltAtWarn_64;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
                        {
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName0_19);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
                        {
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_49, &parse_tree__read_modules__Msg_63);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
                        {
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_63);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
                        {
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 3, &parse_tree__read_modules__HaltAtWarn_64);
                        }
                        switch (parse_tree__read_modules__HaltAtWarn_64) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word parse_tree__read_modules__Timestamp_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__Var_55, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__read_modules__MaybeTimestamp_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_48));
            }
          }
      }
    switch (parse_tree__read_modules__IgnoreErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__VeryVerbose_17, parse_tree__read_modules__Errors_26, parse_tree__read_modules__ModuleSpecs_24, parse_tree__read_modules__Specs_25);
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__read_modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_26, ((MR_Box) ((MR_Integer) 0)));
          }
          if (parse_tree__read_modules__succeeded)
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IsEmpty_23 == (MR_Integer) 1);
          if (parse_tree__read_modules__succeeded)
            {
              {
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_17, (MR_String) "not found.\n");
              }
              *parse_tree__read_modules__Specs_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              {
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_17, (MR_String) "done.\n");
              }
              *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__ModuleSpecs_24;
            }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int_9_p_0(
  MR_Word parse_tree__read_modules__HaveReadModuleMap_10,
  MR_Word parse_tree__read_modules__ModuleName_11,
  MR_Word parse_tree__read_modules__IntFileKind_12,
  MR_Word parse_tree__read_modules__ReturnTimestamp_13,
  MR_String * parse_tree__read_modules__FileName_14,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_15,
  MR_Word * parse_tree__read_modules__ParseTreeInt_16,
  MR_Word * parse_tree__read_modules__Specs_17,
  MR_Word * parse_tree__read_modules__Errors_18)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Key_19;
    MR_Word parse_tree__read_modules__HaveReadModule_20;
    MR_Word parse_tree__read_modules__ModuleTimestamp_21;
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_20;

    {
      parse_tree__read_modules__Key_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 1) = ((MR_Box) (parse_tree__read_modules__IntFileKind_12));
    }
    {
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[2], (MR_Word) &parse_tree__read_modules_scalar_common_1[3], parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__Key_19)), &parse_tree__read_modules__conv0_HaveReadModule_20);
    }
    if (parse_tree__read_modules__succeeded)
      {
        parse_tree__read_modules__HaveReadModule_20 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_20);
        parse_tree__read_modules__succeeded = MR_TRUE;
      }
    if (parse_tree__read_modules__succeeded)
      {
        *parse_tree__read_modules__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 0)));
        parse_tree__read_modules__ModuleTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 1)));
        *parse_tree__read_modules__ParseTreeInt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 2)));
        *parse_tree__read_modules__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 3)));
        *parse_tree__read_modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 4)));
        switch (parse_tree__read_modules__ReturnTimestamp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__read_modules__Timestamp_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 1)));
              MR_Word parse_tree__read_modules__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 0)));
              MR_Word parse_tree__read_modules__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__read_modules__MaybeTimestamp_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_23));
              }
            }
            break;
          case (MR_Integer) 1:
            *parse_tree__read_modules__MaybeTimestamp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        parse_tree__read_modules__succeeded = MR_TRUE;
      }
    return parse_tree__read_modules__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_8_p_0(
  MR_Word parse_tree__read_modules__HaveReadModuleMap_9,
  MR_Word parse_tree__read_modules__ModuleName_10,
  MR_Word parse_tree__read_modules__ReturnTimestamp_11,
  MR_String * parse_tree__read_modules__FileName_12,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_13,
  MR_Word * parse_tree__read_modules__ParseTreeSrc_14,
  MR_Word * parse_tree__read_modules__Specs_15,
  MR_Word * parse_tree__read_modules__Errors_16)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__Key_17;
    MR_Word parse_tree__read_modules__HaveReadModule_18;
    MR_Word parse_tree__read_modules__ModuleTimestamp_19;
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_18;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      parse_tree__read_modules__Key_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_10));
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 1) = NULL;
    }
    {
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HaveReadModuleMap_9, ((MR_Box) (parse_tree__read_modules__Key_17)), &parse_tree__read_modules__conv0_HaveReadModule_18);
    }
    if (parse_tree__read_modules__succeeded)
      {
        parse_tree__read_modules__HaveReadModule_18 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_18);
        parse_tree__read_modules__succeeded = MR_TRUE;
      }
    if (parse_tree__read_modules__succeeded)
      {
        *parse_tree__read_modules__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 0)));
        parse_tree__read_modules__ModuleTimestamp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 1)));
        *parse_tree__read_modules__ParseTreeSrc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 2)));
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 3)));
        *parse_tree__read_modules__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 4)));
        switch (parse_tree__read_modules__ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__read_modules__Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 1)));
              MR_Word parse_tree__read_modules__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 0)));
              MR_Word parse_tree__read_modules__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__read_modules__MaybeTimestamp_13 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_21));
              }
            }
            break;
          case (MR_Integer) 1:
            *parse_tree__read_modules__MaybeTimestamp_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        parse_tree__read_modules__succeeded = MR_TRUE;
      }
    return parse_tree__read_modules__succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int_14_p_0(
  MR_Word parse_tree__read_modules__Globals_15,
  MR_Word parse_tree__read_modules__HaveReadModuleMap_16,
  MR_String parse_tree__read_modules__Descr_17,
  MR_Word parse_tree__read_modules__Search_18,
  MR_Word parse_tree__read_modules__ModuleName_19,
  MR_Word parse_tree__read_modules__IntFileKind_20,
  MR_String * parse_tree__read_modules__FileName_21,
  MR_Word parse_tree__read_modules__ReturnTimestamp_22,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
  MR_Word * parse_tree__read_modules__ParseTreeInt_24,
  MR_Word * parse_tree__read_modules__Specs_25,
  MR_Word * parse_tree__read_modules__Errors_26)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_String parse_tree__read_modules__FileNamePrime_28;
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_29;
    MR_Word parse_tree__read_modules__ParseTreeIntPrime_30;
    MR_Word parse_tree__read_modules__SpecsPrime_31;
    MR_Word parse_tree__read_modules__ErrorsPrime_32;

    {
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__ReturnTimestamp_22, &parse_tree__read_modules__FileNamePrime_28, &parse_tree__read_modules__MaybeTimestampPrime_29, &parse_tree__read_modules__ParseTreeIntPrime_30, &parse_tree__read_modules__SpecsPrime_31, &parse_tree__read_modules__ErrorsPrime_32);
    }
    if (parse_tree__read_modules__succeeded)
      {
        *parse_tree__read_modules__FileName_21 = parse_tree__read_modules__FileNamePrime_28;
        *parse_tree__read_modules__MaybeTimestamp_23 = parse_tree__read_modules__MaybeTimestampPrime_29;
        *parse_tree__read_modules__ParseTreeInt_24 = parse_tree__read_modules__ParseTreeIntPrime_30;
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__SpecsPrime_31;
        *parse_tree__read_modules__Errors_26 = parse_tree__read_modules__ErrorsPrime_32;
      }
    else
      {
        MR_Word parse_tree__read_modules__Var_36;

        {
          parse_tree__read_modules__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__Var_36, 0) = ((MR_Box) (parse_tree__read_modules__ReturnTimestamp_22));
        }
        {
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__Descr_17, (MR_Integer) 1, parse_tree__read_modules__Search_18, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__Var_36, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__ParseTreeInt_24, parse_tree__read_modules__Specs_25, parse_tree__read_modules__Errors_26);
        }
      }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0(
  MR_Word parse_tree__read_modules__Globals_12,
  MR_String parse_tree__read_modules__FileName_13,
  MR_String parse_tree__read_modules__Descr_14,
  MR_Word parse_tree__read_modules__Search_15,
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_16,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_17,
  MR_Word * parse_tree__read_modules__ParseTreeSrc_18,
  MR_Word * parse_tree__read_modules__Specs_19,
  MR_Word * parse_tree__read_modules__Errors_20)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_Word parse_tree__read_modules__VeryVerbose_22;
    MR_String parse_tree__read_modules__FullFileName_23;
    MR_String parse_tree__read_modules__BaseFileName_25;
    MR_Word parse_tree__read_modules__DefaultModuleName_26;
    MR_Word parse_tree__read_modules__SearchDirs_27;
    MR_Word parse_tree__read_modules__MaybeFileNameAndStream_28;
    MR_Word parse_tree__read_modules__MaybeTimestampRes_29;
    MR_Word parse_tree__read_modules__Specs0_30;
    MR_String parse_tree__read_modules__BaseFileNamePrime_24;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 57, &parse_tree__read_modules__VeryVerbose_22);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "% ");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Descr_14);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) " \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__FileName_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "\'... ");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_22);
    }
    {
      parse_tree__read_modules__FullFileName_23 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName_13, (MR_String) ".m");
    }
    {
      parse_tree__read_modules__succeeded = mercury__dir__basename_2_p_0(parse_tree__read_modules__FileName_13, &parse_tree__read_modules__BaseFileNamePrime_24);
    }
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__BaseFileName_25 = parse_tree__read_modules__BaseFileNamePrime_24;
    else
      parse_tree__read_modules__BaseFileName_25 = (MR_String) "";
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__read_modules__BaseFileName_25, &parse_tree__read_modules__DefaultModuleName_26);
    }
    switch (parse_tree__read_modules__Search_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String parse_tree__read_modules__Var_44;

          {
            parse_tree__read_modules__Var_44 = mercury__dir__this_directory_0_f_0();
          }
          {
            parse_tree__read_modules__SearchDirs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 0) = ((MR_Box) (parse_tree__read_modules__Var_44));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 649, &parse_tree__read_modules__SearchDirs_27);
          }
        }
        break;
    }
    {
      libs__file_util__search_for_file_and_stream_5_p_0(parse_tree__read_modules__SearchDirs_27, parse_tree__read_modules__FullFileName_23, &parse_tree__read_modules__MaybeFileNameAndStream_28);
    }
    {
      parse_tree__parse_module__actually_read_module_src_10_p_0(parse_tree__read_modules__Globals_12, parse_tree__read_modules__DefaultModuleName_26, parse_tree__read_modules__MaybeFileNameAndStream_28, parse_tree__read_modules__ReadModuleAndTimestamps_16, &parse_tree__read_modules__MaybeTimestampRes_29, parse_tree__read_modules__ParseTreeSrc_18, &parse_tree__read_modules__Specs0_30, parse_tree__read_modules__Errors_20);
    }
    if ((parse_tree__read_modules__MaybeTimestampRes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__read_modules__MaybeTimestamp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__read_modules__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_29, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__read_modules__Var_65)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__read_modules__IOError_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__Var_65, (MR_Integer) 0)));
            MR_Word parse_tree__read_modules__SmartRecompilation_60;

            *parse_tree__read_modules__MaybeTimestamp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 126, &parse_tree__read_modules__SmartRecompilation_60);
            }
            switch (parse_tree__read_modules__SmartRecompilation_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__read_modules__Warn_72;

                  {
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
                  {
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
                  {
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 29, &parse_tree__read_modules__Warn_72);
                  }
                  switch (parse_tree__read_modules__Warn_72) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String parse_tree__read_modules__Msg_73;
                        MR_Word parse_tree__read_modules__HaltAtWarn_74;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
                        {
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FullFileName_23);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
                        {
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_59, &parse_tree__read_modules__Msg_73);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
                        {
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_73);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
                        {
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 3, &parse_tree__read_modules__HaltAtWarn_74);
                        }
                        switch (parse_tree__read_modules__HaltAtWarn_74) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word parse_tree__read_modules__Timestamp_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__Var_65, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__read_modules__MaybeTimestamp_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_58));
            }
          }
      }
    {
      parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_12, parse_tree__read_modules__VeryVerbose_22, *parse_tree__read_modules__Errors_20, parse_tree__read_modules__Specs0_30, parse_tree__read_modules__Specs_19);
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0(
  MR_Word parse_tree__read_modules__Globals_15,
  MR_String parse_tree__read_modules__Descr_16,
  MR_Word parse_tree__read_modules__IgnoreErrors_17,
  MR_Word parse_tree__read_modules__Search_18,
  MR_Word parse_tree__read_modules__ModuleName_19,
  MR_Word parse_tree__read_modules__IntFileKind_20,
  MR_String * parse_tree__read_modules__FileName_21,
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_22,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
  MR_Word * parse_tree__read_modules__ParseTreeInt_24,
  MR_Word * parse_tree__read_modules__Specs_25,
  MR_Word * parse_tree__read_modules__Errors_26)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_String parse_tree__read_modules__FileName0_28;
    MR_Word parse_tree__read_modules__VeryVerbose_29;
    MR_Word parse_tree__read_modules___InterfaceSearchDirs_30;
    MR_Word parse_tree__read_modules__SearchDirs_31;
    MR_Word parse_tree__read_modules__MaybeFileNameAndStream_32;
    MR_Word parse_tree__read_modules__MaybeTimestampRes_33;
    MR_Word parse_tree__read_modules__ModuleSpecs_34;
    MR_Word parse_tree__read_modules__IntIncls_39;
    MR_Word parse_tree__read_modules__ImpIncls_40;
    MR_Word parse_tree__read_modules__IntAvails_41;
    MR_Word parse_tree__read_modules__ImpAvails_42;
    MR_Word parse_tree__read_modules__IntItems_43;
    MR_Word parse_tree__read_modules__ImplItems_44;
    MR_Word parse_tree__read_modules__IsEmpty_45;
    MR_Word parse_tree__read_modules__Var_48;
    MR_String parse_tree__read_modules__Extension_65;
    MR_String parse_tree__read_modules__Msg_66;
    MR_String parse_tree__read_modules__Var_72;
    MR_String parse_tree__read_modules__Var_73;
    MR_String parse_tree__read_modules__Var_75;
    MR_Word parse_tree__read_modules___ActualModuleName_35;
    MR_Word parse_tree__read_modules___IntFileKind_36;
    MR_Word parse_tree__read_modules___ActualModuleNameContext_37;
    MR_Word parse_tree__read_modules___MaybeVersionNumbers_38;

    {
      parse_tree__read_modules__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__Var_48, 0) = ((MR_Box) (parse_tree__read_modules__IntFileKind_20));
    }
    {
      parse_tree__read_modules__Extension_65 = parse_tree__file_kind__file_kind_to_extension_1_f_0(parse_tree__read_modules__Var_48);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 57, &parse_tree__read_modules__VeryVerbose_29);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 649, &parse_tree__read_modules___InterfaceSearchDirs_30);
    }
    switch (parse_tree__read_modules__Search_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String parse_tree__read_modules__Var_80;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_65, (MR_Integer) 1, &parse_tree__read_modules__FileName0_28);
          }
          {
            parse_tree__read_modules__Var_80 = mercury__dir__this_directory_0_f_0();
          }
          {
            parse_tree__read_modules__SearchDirs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 0) = ((MR_Box) (parse_tree__read_modules__Var_80));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_65, &parse_tree__read_modules__FileName0_28);
          }
          parse_tree__read_modules__SearchDirs_31 = parse_tree__read_modules___InterfaceSearchDirs_30;
        }
        break;
    }
    {
      parse_tree__read_modules__Var_75 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_28, (MR_String) "\'... ");
    }
    {
      parse_tree__read_modules__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__Var_75);
    }
    {
      parse_tree__read_modules__Var_72 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_16, parse_tree__read_modules__Var_73);
    }
    {
      parse_tree__read_modules__Msg_66 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__Var_72);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__Msg_66);
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_29);
    }
    {
      libs__file_util__search_for_file_and_stream_5_p_0(parse_tree__read_modules__SearchDirs_31, parse_tree__read_modules__FileName0_28, &parse_tree__read_modules__MaybeFileNameAndStream_32);
    }
    {
      parse_tree__parse_module__actually_read_module_int_11_p_0(parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__MaybeFileNameAndStream_32, parse_tree__read_modules__ReadModuleAndTimestamps_22, &parse_tree__read_modules__MaybeTimestampRes_33, parse_tree__read_modules__ParseTreeInt_24, &parse_tree__read_modules__ModuleSpecs_34, parse_tree__read_modules__Errors_26);
    }
    parse_tree__read_modules___ActualModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 0)));
    parse_tree__read_modules___IntFileKind_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 1)));
    parse_tree__read_modules___ActualModuleNameContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 2)));
    parse_tree__read_modules___MaybeVersionNumbers_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 3)));
    parse_tree__read_modules__IntIncls_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 4)));
    parse_tree__read_modules__ImpIncls_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 5)));
    parse_tree__read_modules__IntAvails_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 6)));
    parse_tree__read_modules__ImpAvails_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 7)));
    parse_tree__read_modules__IntItems_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 8)));
    parse_tree__read_modules__ImplItems_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 9)));
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntIncls_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__read_modules__succeeded)
      {
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImpIncls_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__read_modules__succeeded)
          {
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntAvails_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__read_modules__succeeded)
              {
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntItems_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__read_modules__succeeded)
                  {
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImpAvails_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__read_modules__succeeded)
                      parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImplItems_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
      }
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__IsEmpty_45 = (MR_Integer) 1;
    else
      parse_tree__read_modules__IsEmpty_45 = (MR_Integer) 0;
    {
      parse_tree__read_modules__read_module_end_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__IgnoreErrors_17, parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__MaybeFileNameAndStream_32, parse_tree__read_modules__FileName0_28, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestampRes_33, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__IsEmpty_45, parse_tree__read_modules__ModuleSpecs_34, parse_tree__read_modules__Specs_25, *parse_tree__read_modules__Errors_26);
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0(
  MR_Word parse_tree__read_modules__Globals_14,
  MR_String parse_tree__read_modules__Descr_15,
  MR_Word parse_tree__read_modules__IgnoreErrors_16,
  MR_Word parse_tree__read_modules__Search_17,
  MR_Word parse_tree__read_modules__ModuleName_18,
  MR_String * parse_tree__read_modules__FileName_19,
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_20,
  MR_Word * parse_tree__read_modules__MaybeTimestamp_21,
  MR_Word * parse_tree__read_modules__ParseTreeSrc_22,
  MR_Word * parse_tree__read_modules__Specs_23,
  MR_Word * parse_tree__read_modules__Errors_24)
{
  {
    MR_bool parse_tree__read_modules__succeeded;
    MR_String parse_tree__read_modules__FileName0_26;
    MR_Word parse_tree__read_modules__VeryVerbose_27;
    MR_Word parse_tree__read_modules__InterfaceSearchDirs_28;
    MR_Word parse_tree__read_modules__SearchDirs_29;
    MR_Word parse_tree__read_modules__MaybeFileNameAndStream_30;
    MR_Word parse_tree__read_modules__MaybeTimestampRes_31;
    MR_Word parse_tree__read_modules__ParseTreeSrc0_32;
    MR_Word parse_tree__read_modules__ModuleSpecs_33;
    MR_Word parse_tree__read_modules__ActualModuleNameContext_35;
    MR_Word parse_tree__read_modules__ComponentsCord_36;
    MR_Word parse_tree__read_modules__IsEmpty_37;
    MR_String parse_tree__read_modules__Extension_58;
    MR_String parse_tree__read_modules__Msg_59;
    MR_String parse_tree__read_modules__Var_65;
    MR_String parse_tree__read_modules__Var_66;
    MR_String parse_tree__read_modules__Var_68;
    MR_Word parse_tree__read_modules___ActualModuleName_34;

    {
      parse_tree__read_modules__Extension_58 = parse_tree__file_kind__file_kind_to_extension_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 57, &parse_tree__read_modules__VeryVerbose_27);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 649, &parse_tree__read_modules__InterfaceSearchDirs_28);
    }
    switch (parse_tree__read_modules__Search_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String parse_tree__read_modules__Var_73;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_58, (MR_Integer) 1, &parse_tree__read_modules__FileName0_26);
          }
          {
            parse_tree__read_modules__Var_73 = mercury__dir__this_directory_0_f_0();
          }
          {
            parse_tree__read_modules__SearchDirs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 0) = ((MR_Box) (parse_tree__read_modules__Var_73));
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_58, &parse_tree__read_modules__FileName0_26);
          }
          parse_tree__read_modules__SearchDirs_29 = parse_tree__read_modules__InterfaceSearchDirs_28;
        }
        break;
    }
    {
      parse_tree__read_modules__Var_68 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_26, (MR_String) "\'... ");
    }
    {
      parse_tree__read_modules__Var_66 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__Var_68);
    }
    {
      parse_tree__read_modules__Var_65 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_15, parse_tree__read_modules__Var_66);
    }
    {
      parse_tree__read_modules__Msg_59 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__Var_65);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__Msg_59);
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_27);
    }
    {
      parse_tree__find_module__search_for_module_source_and_stream_7_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__SearchDirs_29, parse_tree__read_modules__InterfaceSearchDirs_28, parse_tree__read_modules__ModuleName_18, &parse_tree__read_modules__MaybeFileNameAndStream_30);
    }
    {
      parse_tree__parse_module__actually_read_module_src_10_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__MaybeFileNameAndStream_30, parse_tree__read_modules__ReadModuleAndTimestamps_20, &parse_tree__read_modules__MaybeTimestampRes_31, &parse_tree__read_modules__ParseTreeSrc0_32, &parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Errors_24);
    }
    parse_tree__read_modules___ActualModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ParseTreeSrc0_32, (MR_Integer) 0)));
    parse_tree__read_modules__ActualModuleNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ParseTreeSrc0_32, (MR_Integer) 1)));
    parse_tree__read_modules__ComponentsCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ParseTreeSrc0_32, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__read_modules__ParseTreeSrc_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__read_modules__ActualModuleNameContext_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__read_modules__ComponentsCord_36));
    }
    {
      parse_tree__read_modules__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__read_modules__ComponentsCord_36);
    }
    if (parse_tree__read_modules__succeeded)
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 1;
    else
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 0;
    {
      parse_tree__read_modules__read_module_end_14_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__IgnoreErrors_16, parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__MaybeFileNameAndStream_30, parse_tree__read_modules__FileName0_26, parse_tree__read_modules__FileName_19, parse_tree__read_modules__MaybeTimestampRes_31, parse_tree__read_modules__MaybeTimestamp_21, parse_tree__read_modules__IsEmpty_37, parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Specs_23, *parse_tree__read_modules__Errors_24);
    }
  }
}

void mercury__parse_tree__read_modules__init(void)
{
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
}

void mercury__parse_tree__read_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__read_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.read_modules. */
