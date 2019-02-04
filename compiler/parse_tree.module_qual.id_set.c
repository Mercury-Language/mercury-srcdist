/*
** Automatically generated from `module_qual.id_set.m'
** by the Mercury compiler,
** version rotd-2018-09-29
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


// :- module parse_tree.module_qual.id_set.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__id_set__init
ENDINIT
*/

#include "parse_tree.module_qual.id_set.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "require.mih"
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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0[4];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0[4];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0[4];

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2];

static const MR_ConstString parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1];

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0[1];

static const MR_NotagFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0;

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1[1];

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0[2];

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word InInt_11,
  MR_Word SymName_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_24,
  MR_Word * STATE_VARIABLE_Matches_25,
  MR_Word STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * STATE_VARIABLE_IntMismatches_27,
  MR_Word STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * STATE_VARIABLE_QualMismatches_29);

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(
  MR_Word InInt_11,
  MR_Word FullyModuleQualified_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_21,
  MR_Word * STATE_VARIABLE_Matches_22,
  MR_Word STATE_VARIABLE_IntMismatches_0_23,
  MR_Word * STATE_VARIABLE_IntMismatches_24,
  MR_Word STATE_VARIABLE_QualMismatches_0_25,
  MR_Word * STATE_VARIABLE_QualMismatches_26);

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(
  MR_Word IdSet_4,
  MR_Word SymName_5,
  MR_Word * PossibleArities_6);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * STATE_VARIABLE_PossibleArities_4);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[1][13];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][8];


/* sealed */ struct parse_tree__module_qual__id_set__vector_common_type_4_0_s {
  const MR_Word parse_tree__module_qual__id_set__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_4_0_s parse_tree__module_qual__id_set_vector_common_4[4];



static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};


static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_4_0_s parse_tree__module_qual__id_set_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "class_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0 = {
  (MR_String) "type_id",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1 = {
  (MR_String) "mode_id",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2 = {
  (MR_String) "inst_id",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3 = {
  (MR_String) "class_id",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_3,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_id_type_0_0
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_type",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_id_type_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_value_ordered_id_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_id_type_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "inst_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mode_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0)
};

static const MR_ConstString parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0[2] = {
  (MR_String) "mp_in_int",
  (MR_String) "mp_in_imp"
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 = {
  (MR_String) "module_permissions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_permissions",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 = {
  (MR_String) "mq_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mq_id",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 = {
  (MR_String) "may_use_in_imp",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "perm_in_imp",
  {     &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 },
  {     &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0 = {
  (MR_String) "may_not_use_in_int",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1 = {
  (MR_String) "may_use_in_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1,
  NULL,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1
};

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "perm_in_int",
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0 },
  {     parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "permissions_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "type_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
      MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_9, Var_10);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Word Var_13 = (MR_Word) (ArgX2_6);
        MR_Word Var_14 = (MR_Word) (ArgY2_7);
        MR_Integer Var_15 = (MR_Integer) (Var_13);
        MR_Integer Var_16 = (MR_Integer) (Var_14);

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_15, Var_16);
      }
    }
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_12 = (MR_Integer) (Var_11);
        MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_12, Var_13);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer CastX_11;
      MR_Integer CastY_12;

      succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        CastX_11 = (MR_Integer) (ArgX2_5);
        CastY_12 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_11 == CastY_12);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word ArgX1_9 = (MR_Word) (ArgX2_5);
          MR_Word ArgY1_10 = (MR_Word) (ArgY2_6);

          succeeded = (ArgX1_9 == ArgY1_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word InInt_11,
  MR_Word SymName_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_24,
  MR_Word * STATE_VARIABLE_Matches_25,
  MR_Word STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * STATE_VARIABLE_IntMismatches_27,
  MR_Word STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * STATE_VARIABLE_QualMismatches_29)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
    {
      MR_Word QualModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualModuleName_20, ModuleName_13);
      if (succeeded)
      {
        MR_Word FullyModuleQualified_37;
        MR_Word PermInInt_55;
        MR_Word PermInImp_56;

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(QualModuleName_20, ModuleName_13);
        if (succeeded)
          FullyModuleQualified_37 = (MR_Integer) 1;
        else
          FullyModuleQualified_37 = (MR_Integer) 0;
        PermInInt_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_14, (MR_Integer) 0))));
        PermInImp_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_14, (MR_Integer) 1))));
        switch (InInt_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word NeedQual_63 = (MR_Word) (PermInImp_56);

              succeeded = (FullyModuleQualified_37 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (NeedQual_63 == (MR_Integer) 1);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Matches_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                }
                *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_QualMismatches_29 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                }
                *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              }
              *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
            }
            break;
          case (MR_Integer) 1:
            if ((PermInInt_55 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_IntMismatches_27 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IntMismatches_0_26));
              }
              *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
            }
            else
            {
              MR_Word NeedQual_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PermInInt_55, (MR_Integer) 0))) & (MR_Integer) 1);

              succeeded = (FullyModuleQualified_37 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = (NeedQual_57 == (MR_Integer) 1);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Matches_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                }
                *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_QualMismatches_29 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                }
                *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              }
              *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
            }
            break;
        }
      }
      else
      {
        MR_Word ModuleNameComponents_22;
        MR_Word QualModuleNameComponents_23;

        ModuleNameComponents_22 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleName_13);
        QualModuleNameComponents_23 = mdbcomp__sym_name__sym_name_to_list_1_f_0(QualModuleName_20);
        succeeded = mercury__list__sublist_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), QualModuleNameComponents_23, ModuleNameComponents_22);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_QualMismatches_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
          }
        else
          *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
        *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
        *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
      }
    }
    else
    {
      parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(InInt_11, (MR_Integer) 0, ModuleName_13, Permissions_14, STATE_VARIABLE_Matches_0_24, STATE_VARIABLE_Matches_25, STATE_VARIABLE_IntMismatches_0_26, STATE_VARIABLE_IntMismatches_27, STATE_VARIABLE_QualMismatches_0_28, STATE_VARIABLE_QualMismatches_29);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(
  MR_Word InInt_11,
  MR_Word FullyModuleQualified_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_21,
  MR_Word * STATE_VARIABLE_Matches_22,
  MR_Word STATE_VARIABLE_IntMismatches_0_23,
  MR_Word * STATE_VARIABLE_IntMismatches_24,
  MR_Word STATE_VARIABLE_QualMismatches_0_25,
  MR_Word * STATE_VARIABLE_QualMismatches_26)
{
  {
    MR_bool succeeded;
    MR_Word PermInInt_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_14, (MR_Integer) 0))));
    MR_Word PermInImp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_14, (MR_Integer) 1))));

    switch (InInt_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NeedQual_32 = (MR_Word) (PermInImp_19);

          succeeded = (FullyModuleQualified_12 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (NeedQual_32 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Matches_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_21));
            }
            *STATE_VARIABLE_QualMismatches_26 = STATE_VARIABLE_QualMismatches_0_25;
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_QualMismatches_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_25));
            }
            *STATE_VARIABLE_Matches_22 = STATE_VARIABLE_Matches_0_21;
          }
          *STATE_VARIABLE_IntMismatches_24 = STATE_VARIABLE_IntMismatches_0_23;
        }
        break;
      case (MR_Integer) 1:
        if ((PermInInt_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_IntMismatches_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IntMismatches_0_23));
          }
          *STATE_VARIABLE_Matches_22 = STATE_VARIABLE_Matches_0_21;
          *STATE_VARIABLE_QualMismatches_26 = STATE_VARIABLE_QualMismatches_0_25;
        }
        else
        {
          MR_Word NeedQual_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PermInInt_18, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (FullyModuleQualified_12 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (NeedQual_20 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Matches_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_21));
            }
            *STATE_VARIABLE_QualMismatches_26 = STATE_VARIABLE_QualMismatches_0_25;
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_QualMismatches_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_25));
            }
            *STATE_VARIABLE_Matches_22 = STATE_VARIABLE_Matches_0_21;
          }
          *STATE_VARIABLE_IntMismatches_24 = STATE_VARIABLE_IntMismatches_0_23;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(
  MR_Word InInt_5,
  MR_Word ParentModule_6,
  MR_Word ChildModule_7,
  MR_Word ModuleIdSet_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeCtorInfo_23_23;
    MR_String DirectSubModuleName_9;
    MR_Word SubMap_11;
    MR_Word PermissionsMap_12;
    MR_Word ParentModulePermissions_13;
    MR_Word PermInInt_14;
    MR_Word PermInImp_15;
    MR_Box conv0_SubMap_11;
    MR_Box conv1_PermissionsMap_12;
    MR_Box conv2_ParentModulePermissions_13;

    DirectSubModuleName_9 = parse_tree__module_qual__id_set__get_first_module_name_1_f_0(ChildModule_7);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ModuleIdSet_8, ((MR_Box) (DirectSubModuleName_9)), &conv0_SubMap_11);
    if (succeeded)
    {
      SubMap_11 = ((MR_Word) (conv0_SubMap_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_21_21 = (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_21_21, SubMap_11, (MR_Integer) 0, &conv1_PermissionsMap_12);
      if (succeeded)
      {
        PermissionsMap_12 = ((MR_Word) (conv1_PermissionsMap_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_22_22, TypeCtorInfo_23_23, PermissionsMap_12, ((MR_Box) (ParentModule_6)), &conv2_ParentModulePermissions_13);
        if (succeeded)
        {
          ParentModulePermissions_13 = ((MR_Word) (conv2_ParentModulePermissions_13));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          PermInInt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentModulePermissions_13, (MR_Integer) 0))));
          PermInImp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentModulePermissions_13, (MR_Integer) 1))));
          switch (InInt_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_16 = (MR_Word) (PermInImp_15);

                succeeded = (Var_16 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_17;

                succeeded = ((MR_tag((MR_Word) PermInInt_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PermInInt_14, (MR_Integer) 0))) & (MR_Integer) 1);
                  succeeded = (Var_17 == (MR_Integer) 1);
                }
              }
              break;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_String HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Parent_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1 = Parent_4;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    else
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__5_5;

    recompilation__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Matches_25;
    MR_Word conv3_STATE_VARIABLE_IntMismatches_27;
    MR_Word conv2_STATE_VARIABLE_QualMismatches_29;

    parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Matches_25, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntMismatches_27, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_QualMismatches_29);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Matches_25));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntMismatches_27));
    *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_QualMismatches_29));
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0(
  MR_Word InInt_11,
  MR_Word ErrorContext_12,
  MR_Word IdSet_13,
  MR_Word IdType_14,
  MR_Word Id0_15,
  MR_Word * SymName_16,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id0_15, (MR_Integer) 0))));
    MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id0_15, (MR_Integer) 1))));
    MR_String BaseName_21;
    MR_Word Matches_22;
    MR_Word IntMismatches_23;
    MR_Word QualMismatches_24;
    MR_Word PermissionsMap_67;
    MR_Word TypeInfo_22_71;
    MR_Word SubMap_66;
    MR_Box conv0_SubMap_66;
    MR_Box conv1_PermissionsMap_67;

    BaseName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_19);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_13, ((MR_Box) (BaseName_21)), &conv0_SubMap_66);
    if (succeeded)
    {
      SubMap_66 = ((MR_Word) (conv0_SubMap_66));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_22_71 = (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_71, SubMap_66, Arity_20, &conv1_PermissionsMap_67);
      if (succeeded)
      {
        PermissionsMap_67 = ((MR_Word) (conv1_PermissionsMap_67));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_78;
      MR_Box conv7_Matches_22;
      MR_Box conv6_IntMismatches_23;
      MR_Box conv5_QualMismatches_24;

      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (InInt_11));
        MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (SymName0_19));
      }
      mercury__map__foldr3_8_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), Var_78, PermissionsMap_67, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_Matches_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_IntMismatches_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_QualMismatches_24);
      Matches_22 = ((MR_Word) (conv7_Matches_22));
      IntMismatches_23 = ((MR_Word) (conv6_IntMismatches_23));
      QualMismatches_24 = ((MR_Word) (conv5_QualMismatches_24));
    }
    else
    {
      Matches_22 = (MR_Word) ((MR_Unsigned) 0U);
      IntMismatches_23 = (MR_Word) ((MR_Unsigned) 0U);
      QualMismatches_24 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((Matches_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ReportErrors_26;

      parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(STATE_VARIABLE_Info_0_39, &ReportErrors_26);
      switch (ReportErrors_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
            *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ThisModuleName_27;
            MR_Word PossibleArities_28;

            parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(IdType_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
            parse_tree__module_qual__mq_info_get_this_module_2_p_0(*STATE_VARIABLE_Info_40, &ThisModuleName_27);
            parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(IdSet_13, SymName0_19, &PossibleArities_28);
            parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0(*STATE_VARIABLE_Info_40, ErrorContext_12, Id0_15, IdType_14, ThisModuleName_27, IntMismatches_23, QualMismatches_24, PossibleArities_28, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
          }
          break;
      }
      *SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id0_15, (MR_Integer) 0))));
    }
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Matches_22, (MR_Integer) 1))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Matches_22, (MR_Integer) 0))));
      MR_Word MaybeUniqModuleName_107;
      MR_Word STATE_VARIABLE_Info_47_109;

      if ((Var_56 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeUniqModuleName_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeUniqModuleName_107, 0) = ((MR_Box) (Var_57));
        }
        STATE_VARIABLE_Info_47_109 = STATE_VARIABLE_Info_0_39;
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      }
      else
      {
        MR_Word ReportErrors_52;

        MaybeUniqModuleName_107 = (MR_Word) ((MR_Unsigned) 0U);
        parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(STATE_VARIABLE_Info_0_39, &ReportErrors_52);
        switch (ReportErrors_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_Info_47_109 = STATE_VARIABLE_Info_0_39;
              *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NonUsableModuleNames_33;

              parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(IdType_14, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_47_109);
              NonUsableModuleNames_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches_23, QualMismatches_24);
              parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(ErrorContext_12, Id0_15, IdType_14, Matches_22, NonUsableModuleNames_33, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
            }
            break;
        }
      }
      if ((MaybeUniqModuleName_107 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id0_15, (MR_Integer) 0))));
        *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_47_109;
      }
      else
      {
        MR_Word UniqModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUniqModuleName_107, (MR_Integer) 0))));
        MR_Word ItemType_36;
        MR_Word ItemName0_37;
        MR_Word ItemName_38;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word Var_50;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SymName_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UniqModuleName_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BaseName_21));
        }
        parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_11, UniqModuleName_35, STATE_VARIABLE_Info_47_109, &STATE_VARIABLE_Info_49_49);
        ItemType_36 = ((&parse_tree__module_qual__id_set_vector_common_4[0 + IdType_14]))->parse_tree__module_qual__id_set__vector_common_type_4_0__vct_4_f_0;
        {
          ItemName0_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemName0_37, 0) = ((MR_Box) (SymName0_19));
          MR_hl_field(MR_mktag(0), ItemName0_37, 1) = ((MR_Box) (Arity_20));
        }
        {
          ItemName_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemName_38, 0) = ((MR_Box) (*SymName_16));
          MR_hl_field(MR_mktag(0), ItemName_38, 1) = ((MR_Box) (Arity_20));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_10_p_0_2));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ItemType_36));
          MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (ItemName0_37));
          MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (ItemName_38));
        }
        parse_tree__module_qual__update_recompilation_info_3_p_0(Var_50, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_40);
      }
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(
  MR_Word IdSet_4,
  MR_Word SymName_5,
  MR_Word * PossibleArities_6)
{
  {
    MR_bool succeeded;
    MR_String UnqualName_7;
    MR_Word SubMap_8;
    MR_Box conv0_SubMap_8;

    UnqualName_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_4, ((MR_Box) (UnqualName_7)), &conv0_SubMap_8);
    if (succeeded)
    {
      SubMap_8 = ((MR_Word) (conv0_SubMap_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SubMapPairs_9;
      MR_Word Var_10;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), SubMap_8, &SubMapPairs_9);
      Var_10 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      parse_tree__module_qual__id_set__find_matching_arities_4_p_0(SymName_5, SubMapPairs_9, Var_10, PossibleArities_6);
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleArities_6);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Matches_25;
    MR_Word conv1_STATE_VARIABLE_IntMismatches_27;
    MR_Word conv0_STATE_VARIABLE_QualMismatches_29;

    parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Matches_25, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_IntMismatches_27, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_QualMismatches_29);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Matches_25));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_IntMismatches_27));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_QualMismatches_29));
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * STATE_VARIABLE_PossibleArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PossibleArities_4 = STATE_VARIABLE_PossibleArities_0_3;
    else
    {
      MR_Word Pair_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Pairs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Pair_10, (MR_Integer) 0))));
      MR_Word PermissionsMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_10, (MR_Integer) 1))));
      MR_Word Matches_15;
      MR_Word IntMismatches_16;
      MR_Word QualMismatches_17;
      MR_Word STATE_VARIABLE_PossibleArities_27_27;
      MR_Word Var_36;
      MR_Box conv5_Matches_15;
      MR_Box conv4_IntMismatches_16;
      MR_Box conv3_QualMismatches_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PossibleArities_0_3;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__map__foldr3_8_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), Var_36, PermissionsMap_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Matches_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_IntMismatches_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_QualMismatches_17);
      Matches_15 = ((MR_Word) (conv5_Matches_15));
      IntMismatches_16 = ((MR_Word) (conv4_IntMismatches_16));
      QualMismatches_17 = ((MR_Word) (conv3_QualMismatches_17));
      succeeded = ((MR_tag((MR_Word) Matches_15)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = ((MR_tag((MR_Word) IntMismatches_16)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) QualMismatches_17)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_13)), STATE_VARIABLE_PossibleArities_0_3, &STATE_VARIABLE_PossibleArities_27_27);
      }
      else
        STATE_VARIABLE_PossibleArities_27_27 = STATE_VARIABLE_PossibleArities_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Pairs_11;
      next_value_of_STATE_VARIABLE_PossibleArities_0_3 = STATE_VARIABLE_PossibleArities_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PossibleArities_0_3 = next_value_of_STATE_VARIABLE_PossibleArities_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__id_set_insert_4_p_0(
  MR_Word Permissions_5,
  MR_Word MQId_6,
  MR_Word STATE_VARIABLE_IdSet_0_19,
  MR_Word * STATE_VARIABLE_IdSet_20)
{
  {
    MR_bool succeeded;
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MQId_6, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MQId_6, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 0))));
      MR_String BaseName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_8, (MR_Integer) 1))));
      MR_Word FreshPermissionsMap_13;
      MR_Word FreshSubMap_14;
      MR_Word STATE_VARIABLE_IdSet_21_21;

      FreshPermissionsMap_13 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_5)));
      FreshSubMap_14 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), ((MR_Box) (Arity_9)), ((MR_Box) (FreshPermissionsMap_13)));
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (FreshSubMap_14)), STATE_VARIABLE_IdSet_0_19, &STATE_VARIABLE_IdSet_21_21);
      if (succeeded)
        *STATE_VARIABLE_IdSet_20 = STATE_VARIABLE_IdSet_21_21;
      else
      {
        MR_Word SubMap0_15;
        MR_Box conv0_SubMap0_15;
        MR_Word PermissionsMap0_16;
        MR_Box conv1_PermissionsMap0_16;

        mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), STATE_VARIABLE_IdSet_0_19, ((MR_Box) (BaseName_12)), &conv0_SubMap0_15);
        SubMap0_15 = ((MR_Word) (conv0_SubMap0_15));
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), SubMap0_15, Arity_9, &conv1_PermissionsMap0_16);
        if (succeeded)
        {
          PermissionsMap0_16 = ((MR_Word) (conv1_PermissionsMap0_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word PermissionsMap_17;
          MR_Word SubMap_18;
          MR_Word OldPermissions_41;
          MR_Box conv2_OldPermissions_41;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), PermissionsMap0_16, ((MR_Box) (ModuleName_11)), &conv2_OldPermissions_41);
          if (succeeded)
          {
            OldPermissions_41 = ((MR_Word) (conv2_OldPermissions_41));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word OldPermInt_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldPermissions_41, (MR_Integer) 0))));
            MR_Word OldPermImp_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldPermissions_41, (MR_Integer) 1))));
            MR_Word NewPermInt_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_5, (MR_Integer) 0))));
            MR_Word NewPermImp_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Permissions_5, (MR_Integer) 1))));
            MR_Word PermInt_46;
            MR_Word OldImpNeedQual_50;
            MR_Word NewImpNeedQual_51;
            MR_Word ImpNeedQual_52;
            MR_Word PermImp_53;
            MR_Integer CastX_71;
            MR_Integer CastY_72;

            if ((OldPermInt_42 == (MR_Word) ((MR_Unsigned) 0U)))
              PermInt_46 = NewPermInt_44;
            else
            {
              MR_Word OldIntNeedQual_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OldPermInt_42, (MR_Integer) 0))) & (MR_Integer) 1);

              if ((NewPermInt_44 == (MR_Word) ((MR_Unsigned) 0U)))
                PermInt_46 = OldPermInt_42;
              else
              {
                MR_Word NewIntNeedQual_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), NewPermInt_44, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word IntNeedQual_49;

                succeeded = (OldIntNeedQual_47 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (NewIntNeedQual_48 == (MR_Integer) 0);
                if (succeeded)
                  IntNeedQual_49 = (MR_Integer) 0;
                else
                  IntNeedQual_49 = (MR_Integer) 1;
                {
                  PermInt_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), PermInt_46, 0) = (MR_Box) ((MR_Unsigned) (IntNeedQual_49));
                }
              }
            }
            OldImpNeedQual_50 = (MR_Word) (OldPermImp_43);
            NewImpNeedQual_51 = (MR_Word) (NewPermImp_45);
            succeeded = (OldImpNeedQual_50 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (NewImpNeedQual_51 == (MR_Integer) 0);
            if (succeeded)
              ImpNeedQual_52 = (MR_Integer) 0;
            else
              ImpNeedQual_52 = (MR_Integer) 1;
            PermImp_53 = (MR_Word) (ImpNeedQual_52);
            succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(PermInt_46, OldPermInt_42);
            if (succeeded)
            {
              CastX_71 = (MR_Integer) (PermImp_53);
              CastY_72 = (MR_Integer) (OldPermImp_43);
              succeeded = (CastX_71 == CastY_72);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word ArgX1_69 = (MR_Word) (PermImp_53);
                MR_Word ArgY1_70 = (MR_Word) (OldPermImp_43);

                succeeded = (ArgX1_69 == ArgY1_70);
              }
            }
            if (succeeded)
              PermissionsMap_17 = PermissionsMap0_16;
            else
            {
              MR_Word Permissions_54;

              {
                Permissions_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Permissions_54, 0) = ((MR_Box) (PermInt_46));
                MR_hl_field(MR_mktag(0), Permissions_54, 1) = ((MR_Box) (PermImp_53));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_54)), PermissionsMap0_16, &PermissionsMap_17);
            }
          }
          else
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_5)), PermissionsMap0_16, &PermissionsMap_17);
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), Arity_9, ((MR_Box) (PermissionsMap_17)), SubMap0_15, &SubMap_18);
          mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (SubMap_18)), STATE_VARIABLE_IdSet_0_19, STATE_VARIABLE_IdSet_20);
        }
        else
        {
          MR_Word SubMap_27;

          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), Arity_9, ((MR_Box) (FreshPermissionsMap_13)), SubMap0_15, &SubMap_27);
          mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (SubMap_27)), STATE_VARIABLE_IdSet_0_19, STATE_VARIABLE_IdSet_20);
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.id_set", (MR_String) "predicate \140parse_tree.module_qual.id_set.id_set_insert\'/4", (MR_String) "unqualified id");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__id_set_init_1_p_0(
  MR_Word * IdSet_2)
{
  {
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_2);
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____class_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____class_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____id_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____id_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____module_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____module_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____module_permissions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____module_permissions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____mq_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____permissions_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____permissions_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__id_set____Unify____type_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__id_set____Compare____type_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__module_qual__id_set__init(void)
{
}

void mercury__parse_tree__module_qual__id_set__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_type_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0);
}

void mercury__parse_tree__module_qual__id_set__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__id_set__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.id_set.
