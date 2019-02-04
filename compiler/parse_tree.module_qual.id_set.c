/*
** Automatically generated from `module_qual.id_set.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module parse_tree.module_qual.id_set. */
/* :- implementation. */

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

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0[2];

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_6,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_7,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_8);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_4);

static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(
  MR_Word parse_tree__module_qual__id_set__IdSet_4,
  MR_Word parse_tree__module_qual__id_set__SymName_5,
  MR_Word * parse_tree__module_qual__id_set__PossibleArities_6);

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_11,
  MR_Word parse_tree__module_qual__id_set__FullyModuleQualified_12,
  MR_Word parse_tree__module_qual__id_set__ModuleName_13,
  MR_Word parse_tree__module_qual__id_set__Permissions_14,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_23,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_24,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26);

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_11,
  MR_Word parse_tree__module_qual__id_set__SymName_12,
  MR_Word parse_tree__module_qual__id_set__ModuleName_13,
  MR_Word parse_tree__module_qual__id_set__Permissions_14,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_2(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_6,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_7,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_8);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "class_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "inst_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mode_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0
};

static const MR_ConstString parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0[2] = {
  (MR_String) "mp_in_int",
  (MR_String) "mp_in_imp"
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 = {
  (MR_String) "module_permissions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 = {
  (MR_String) "mq_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0
};

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1 = {
  (MR_String) "may_use_in_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "permissions_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "type_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____class_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____class_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____id_type_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____id_type_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____module_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____module_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____module_permissions_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____module_permissions_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____permissions_map_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____permissions_map_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____type_id_set_0_0(((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__id_set__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__id_set____Compare____type_id_set_0_0(&parse_tree__module_qual__id_set__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3));
    }
    *parse_tree__module_qual__id_set__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__id_set__CastY_9 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_8 == parse_tree__module_qual__id_set__CastY_9);
    if (parse_tree__module_qual__id_set__succeeded)
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__module_qual__id_set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__module_qual__id_set__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word parse_tree__module_qual__id_set__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__module_qual__id_set__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__module_qual__id_set__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__module_qual__id_set__Var_12 = (MR_Integer) parse_tree__module_qual__id_set__Var_11;
            MR_Integer parse_tree__module_qual__id_set__Var_13 = (MR_Integer) parse_tree__module_qual__id_set__ArgY1_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Var_12, parse_tree__module_qual__id_set__Var_13);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__id_set__CastY_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_7 == parse_tree__module_qual__id_set__CastY_8);
    if (parse_tree__module_qual__id_set__succeeded)
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
    else
    if ((parse_tree__module_qual__id_set__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__module_qual__id_set__CastX_3 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
        MR_Integer parse_tree__module_qual__id_set__CastY_4 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastY_4 == parse_tree__module_qual__id_set__CastX_3);
      }
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgY1_6;

        parse_tree__module_qual__id_set__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__id_set__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__module_qual__id_set__succeeded)
          {
            parse_tree__module_qual__id_set__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__ArgX1_5 == parse_tree__module_qual__id_set__ArgY1_6);
          }
      }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_6 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__id_set__CastY_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_6 == parse_tree__module_qual__id_set__CastY_7);
    if (parse_tree__module_qual__id_set__succeeded)
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_4 = (MR_Word) parse_tree__module_qual__id_set__HeadVar__2_2;
        MR_Word parse_tree__module_qual__id_set__ArgY1_5 = (MR_Word) parse_tree__module_qual__id_set__HeadVar__3_3;
        MR_Integer parse_tree__module_qual__id_set__Var_9 = (MR_Integer) parse_tree__module_qual__id_set__ArgX1_4;
        MR_Integer parse_tree__module_qual__id_set__Var_10 = (MR_Integer) parse_tree__module_qual__id_set__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Var_9, parse_tree__module_qual__id_set__Var_10);
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_5 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__id_set__CastY_6 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_5 == parse_tree__module_qual__id_set__CastY_6);
    if (parse_tree__module_qual__id_set__succeeded)
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_3 = (MR_Word) parse_tree__module_qual__id_set__HeadVar__1_1;
        MR_Word parse_tree__module_qual__id_set__ArgY1_4 = (MR_Word) parse_tree__module_qual__id_set__HeadVar__2_2;

        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__ArgX1_3 == parse_tree__module_qual__id_set__ArgY1_4);
      }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_9 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__id_set__CastY_10 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_9 == parse_tree__module_qual__id_set__CastY_10);
    if (parse_tree__module_qual__id_set__succeeded)
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__module_qual__id_set__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__module_qual__id_set__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__Var_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__id_set__Var_8, parse_tree__module_qual__id_set__ArgX1_4, parse_tree__module_qual__id_set__ArgY1_5);
        }
        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__Var_8 == (MR_Integer) 0);
        parse_tree__module_qual__id_set__succeeded = !(parse_tree__module_qual__id_set__succeeded);
        if (parse_tree__module_qual__id_set__succeeded)
          *parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__ArgX2_6, parse_tree__module_qual__id_set__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__id_set__CastY_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_7 == parse_tree__module_qual__id_set__CastY_8);
    if (parse_tree__module_qual__id_set__succeeded)
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__module_qual__id_set__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__module_qual__id_set__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__module_qual__id_set__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__id_set__ArgX1_3, parse_tree__module_qual__id_set__ArgY1_4);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__ArgX2_5 == parse_tree__module_qual__id_set__ArgY2_6);
      }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_9 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__id_set__CastY_10 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_9 == parse_tree__module_qual__id_set__CastY_10);
    if (parse_tree__module_qual__id_set__succeeded)
      *parse_tree__module_qual__id_set__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__Var_8;

        {
          parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&parse_tree__module_qual__id_set__Var_8, parse_tree__module_qual__id_set__ArgX1_4, parse_tree__module_qual__id_set__ArgY1_5);
        }
        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__Var_8 == (MR_Integer) 0);
        parse_tree__module_qual__id_set__succeeded = !(parse_tree__module_qual__id_set__succeeded);
        if (parse_tree__module_qual__id_set__succeeded)
          *parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__Var_8;
        else
          {
            MR_Word parse_tree__module_qual__id_set__Var_13 = (MR_Word) parse_tree__module_qual__id_set__ArgX2_6;
            MR_Word parse_tree__module_qual__id_set__Var_14 = (MR_Word) parse_tree__module_qual__id_set__ArgY2_7;
            MR_Integer parse_tree__module_qual__id_set__Var_15 = (MR_Integer) parse_tree__module_qual__id_set__Var_13;
            MR_Integer parse_tree__module_qual__id_set__Var_16 = (MR_Integer) parse_tree__module_qual__id_set__Var_14;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Var_15, parse_tree__module_qual__id_set__Var_16);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__CastX_7 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__id_set__CastY_8 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;

    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_7 == parse_tree__module_qual__id_set__CastY_8);
    if (parse_tree__module_qual__id_set__succeeded)
      parse_tree__module_qual__id_set__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__module_qual__id_set__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__module_qual__id_set__CastX_11;
        MR_Integer parse_tree__module_qual__id_set__CastY_12;

        {
          parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(parse_tree__module_qual__id_set__ArgX1_3, parse_tree__module_qual__id_set__ArgY1_4);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          {
            parse_tree__module_qual__id_set__CastX_11 = (MR_Integer) parse_tree__module_qual__id_set__ArgX2_5;
            parse_tree__module_qual__id_set__CastY_12 = (MR_Integer) parse_tree__module_qual__id_set__ArgY2_6;
            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_11 == parse_tree__module_qual__id_set__CastY_12);
            if (parse_tree__module_qual__id_set__succeeded)
              parse_tree__module_qual__id_set__succeeded = MR_TRUE;
            else
              {
                MR_Word parse_tree__module_qual__id_set__ArgX1_9 = (MR_Word) parse_tree__module_qual__id_set__ArgX2_5;
                MR_Word parse_tree__module_qual__id_set__ArgY1_10 = (MR_Word) parse_tree__module_qual__id_set__ArgY2_6;

                parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__ArgX1_9 == parse_tree__module_qual__id_set__ArgY1_10);
              }
          }
      }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_type_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar1_4 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__id_set__Cast_HeadVar2_5 = (MR_Integer) parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__id_set__HeadVar__1_1, parse_tree__module_qual__id_set__Cast_HeadVar1_4, parse_tree__module_qual__id_set__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_type_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__HeadVar__2_1 == parse_tree__module_qual__id_set__HeadVar__2_2);

    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0(
  MR_Word * parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_4 = parse_tree__module_qual__id_set__HeadVar__2_2;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_5 = parse_tree__module_qual__id_set__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], parse_tree__module_qual__id_set__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar1_3 = parse_tree__module_qual__id_set__HeadVar__1_1;
    MR_Word parse_tree__module_qual__id_set__Cast_HeadVar2_4 = parse_tree__module_qual__id_set__HeadVar__2_2;

    {
      parse_tree__module_qual__id_set__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[2], ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_qual__id_set__Cast_HeadVar2_4)));
    }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__id_set__succeeded;
        MR_String parse_tree__module_qual__id_set__HeadVar__2_2;

        if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_qual__id_set__Parent_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
            MR_String parse_tree__module_qual__id_set__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 1)));

            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__id_set__next_value_of_HeadVar__1_1 = parse_tree__module_qual__id_set__Parent_4;

              parse_tree__module_qual__id_set__HeadVar__1_1 = parse_tree__module_qual__id_set__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        else
          parse_tree__module_qual__id_set__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__HeadVar__1_1, (MR_Integer) 0)));
        return parse_tree__module_qual__id_set__HeadVar__2_2;
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_6,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_7,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_8)
{
  {
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
    MR_Word parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_Matches_25;
    MR_Word parse_tree__module_qual__id_set__conv1_STATE_VARIABLE_IntMismatches_27;
    MR_Word parse_tree__module_qual__id_set__conv0_STATE_VARIABLE_QualMismatches_29;

    {
      parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3), &parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_Matches_25, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_5), &parse_tree__module_qual__id_set__conv1_STATE_VARIABLE_IntMismatches_27, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_7), &parse_tree__module_qual__id_set__conv0_STATE_VARIABLE_QualMismatches_29);
    }
    *parse_tree__module_qual__id_set__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_Matches_25));
    *parse_tree__module_qual__id_set__wrapper_arg_6 = ((MR_Box) (parse_tree__module_qual__id_set__conv1_STATE_VARIABLE_IntMismatches_27));
    *parse_tree__module_qual__id_set__wrapper_arg_8 = ((MR_Box) (parse_tree__module_qual__id_set__conv0_STATE_VARIABLE_QualMismatches_29));
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word parse_tree__module_qual__id_set__HeadVar__1_1,
  MR_Word parse_tree__module_qual__id_set__HeadVar__2_2,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__id_set__succeeded;

        if ((parse_tree__module_qual__id_set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_4 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3;
        else
          {
            MR_Word parse_tree__module_qual__id_set__TypeInfo_27_50;
            MR_Word parse_tree__module_qual__id_set__Pair_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__id_set__Pairs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer parse_tree__module_qual__id_set__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_10, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__id_set__PermissionsMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Pair_10, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__id_set__Matches_15;
            MR_Word parse_tree__module_qual__id_set__IntMismatches_16;
            MR_Word parse_tree__module_qual__id_set__QualMismatches_17;
            MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_27_27;
            MR_Word parse_tree__module_qual__id_set__Var_36;
            MR_Box parse_tree__module_qual__id_set__conv5_Matches_15;
            MR_Box parse_tree__module_qual__id_set__conv4_IntMismatches_16;
            MR_Box parse_tree__module_qual__id_set__conv3_QualMismatches_17;

            {
              parse_tree__module_qual__id_set__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_36, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_36, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_36, 3) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_36, 4) = ((MR_Box) (parse_tree__module_qual__id_set__HeadVar__1_1));
            }
            parse_tree__module_qual__id_set__TypeInfo_27_50 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_2[0];
            {
              mercury__map__foldr3_8_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, parse_tree__module_qual__id_set__TypeInfo_27_50, parse_tree__module_qual__id_set__TypeInfo_27_50, parse_tree__module_qual__id_set__TypeInfo_27_50, parse_tree__module_qual__id_set__Var_36, parse_tree__module_qual__id_set__PermissionsMap_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv5_Matches_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv4_IntMismatches_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv3_QualMismatches_17);
            }
            parse_tree__module_qual__id_set__Matches_15 = ((MR_Word) parse_tree__module_qual__id_set__conv5_Matches_15);
            parse_tree__module_qual__id_set__IntMismatches_16 = ((MR_Word) parse_tree__module_qual__id_set__conv4_IntMismatches_16);
            parse_tree__module_qual__id_set__QualMismatches_17 = ((MR_Word) parse_tree__module_qual__id_set__conv3_QualMismatches_17);
            {
              MR_Word parse_tree__module_qual__id_set__Var_18;
              MR_Word parse_tree__module_qual__id_set__Var_19;

              parse_tree__module_qual__id_set__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__id_set__Matches_15)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__module_qual__id_set__succeeded)
                {
                  parse_tree__module_qual__id_set__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__Matches_15, (MR_Integer) 0)));
                  parse_tree__module_qual__id_set__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__Matches_15, (MR_Integer) 1)));
                }
            }
            if (!(parse_tree__module_qual__id_set__succeeded))
              {
                {
                  MR_Word parse_tree__module_qual__id_set__Var_20;
                  MR_Word parse_tree__module_qual__id_set__Var_21;

                  parse_tree__module_qual__id_set__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__id_set__IntMismatches_16)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__module_qual__id_set__succeeded)
                    {
                      parse_tree__module_qual__id_set__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__IntMismatches_16, (MR_Integer) 0)));
                      parse_tree__module_qual__id_set__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__IntMismatches_16, (MR_Integer) 1)));
                    }
                }
                if (!(parse_tree__module_qual__id_set__succeeded))
                  {
                    MR_Word parse_tree__module_qual__id_set__Var_22;
                    MR_Word parse_tree__module_qual__id_set__Var_23;

                    parse_tree__module_qual__id_set__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__id_set__QualMismatches_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__module_qual__id_set__succeeded)
                      {
                        parse_tree__module_qual__id_set__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__QualMismatches_17, (MR_Integer) 0)));
                        parse_tree__module_qual__id_set__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__QualMismatches_17, (MR_Integer) 1)));
                      }
                  }
              }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                {
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (parse_tree__module_qual__id_set__Arity_13)), parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3, &parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_27_27);
                }
              }
            else
              parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_27_27 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__module_qual__id_set__next_value_of_HeadVar__2_2 = parse_tree__module_qual__id_set__Pairs_11;
              MR_Word parse_tree__module_qual__id_set__next_value_of_STATE_VARIABLE_PossibleArities_0_3 = parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_27_27;

              parse_tree__module_qual__id_set__STATE_VARIABLE_PossibleArities_0_3 = parse_tree__module_qual__id_set__next_value_of_STATE_VARIABLE_PossibleArities_0_3;
              parse_tree__module_qual__id_set__HeadVar__2_2 = parse_tree__module_qual__id_set__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(
  MR_Word parse_tree__module_qual__id_set__IdSet_4,
  MR_Word parse_tree__module_qual__id_set__SymName_5,
  MR_Word * parse_tree__module_qual__id_set__PossibleArities_6)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_String parse_tree__module_qual__id_set__UnqualName_7;
    MR_Word parse_tree__module_qual__id_set__SubMap_8;
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_8;

    {
      parse_tree__module_qual__id_set__UnqualName_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName_5);
    }
    {
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_4, ((MR_Box) (parse_tree__module_qual__id_set__UnqualName_7)), &parse_tree__module_qual__id_set__conv0_SubMap_8);
    }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        parse_tree__module_qual__id_set__SubMap_8 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_8);
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
      }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word parse_tree__module_qual__id_set__SubMapPairs_9;
        MR_Word parse_tree__module_qual__id_set__Var_10;

        {
          mercury__map__to_assoc_list_2_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_13_13, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0], parse_tree__module_qual__id_set__SubMap_8, &parse_tree__module_qual__id_set__SubMapPairs_9);
        }
        {
          parse_tree__module_qual__id_set__Var_10 = mercury__set__init_0_f_0(parse_tree__module_qual__id_set__TypeCtorInfo_13_13);
        }
        {
          parse_tree__module_qual__id_set__find_matching_arities_4_p_0(parse_tree__module_qual__id_set__SymName_5, parse_tree__module_qual__id_set__SubMapPairs_9, parse_tree__module_qual__id_set__Var_10, parse_tree__module_qual__id_set__PossibleArities_6);
        }
      }
    else
      {
        {
          mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__module_qual__id_set__PossibleArities_6);
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_11,
  MR_Word parse_tree__module_qual__id_set__FullyModuleQualified_12,
  MR_Word parse_tree__module_qual__id_set__ModuleName_13,
  MR_Word parse_tree__module_qual__id_set__Permissions_14,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_23,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_24,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__PermInInt_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_14, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__id_set__PermInImp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_14, (MR_Integer) 1)));

    switch (parse_tree__module_qual__id_set__InInt_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_qual__id_set__NeedQual_32 = (MR_Word) parse_tree__module_qual__id_set__PermInImp_19;

          parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__FullyModuleQualified_12 == (MR_Integer) 1);
          if (!(parse_tree__module_qual__id_set__succeeded))
            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NeedQual_32 == (MR_Integer) 1);
          if (parse_tree__module_qual__id_set__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21));
              }
              *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25;
            }
          else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25));
              }
              *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21;
            }
          *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_24 = parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_23;
        }
        break;
      case (MR_Integer) 1:
        if ((parse_tree__module_qual__id_set__PermInInt_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_23));
            }
            *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21;
            *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25;
          }
        else
          {
            MR_Word parse_tree__module_qual__id_set__NeedQual_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__PermInInt_18, (MR_Integer) 0)));

            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__FullyModuleQualified_12 == (MR_Integer) 1);
            if (!(parse_tree__module_qual__id_set__succeeded))
              parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NeedQual_20 == (MR_Integer) 1);
            if (parse_tree__module_qual__id_set__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21));
                }
                *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_26 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_25));
                }
                *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_22 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_21;
              }
            *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_24 = parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_23;
          }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_11,
  MR_Word parse_tree__module_qual__id_set__SymName_12,
  MR_Word parse_tree__module_qual__id_set__ModuleName_13,
  MR_Word parse_tree__module_qual__id_set__Permissions_14,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__SymName_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_qual__id_set__QualModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_12, (MR_Integer) 0)));
        MR_String parse_tree__module_qual__id_set__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_12, (MR_Integer) 1)));

        {
          parse_tree__module_qual__id_set__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__id_set__QualModuleName_20, parse_tree__module_qual__id_set__ModuleName_13);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          {
            MR_Word parse_tree__module_qual__id_set__FullyModuleQualified_37;
            MR_Word parse_tree__module_qual__id_set__PermInInt_55;
            MR_Word parse_tree__module_qual__id_set__PermInImp_56;

            {
              parse_tree__module_qual__id_set__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__id_set__QualModuleName_20, parse_tree__module_qual__id_set__ModuleName_13);
            }
            if (parse_tree__module_qual__id_set__succeeded)
              parse_tree__module_qual__id_set__FullyModuleQualified_37 = (MR_Integer) 1;
            else
              parse_tree__module_qual__id_set__FullyModuleQualified_37 = (MR_Integer) 0;
            parse_tree__module_qual__id_set__PermInInt_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_14, (MR_Integer) 0)));
            parse_tree__module_qual__id_set__PermInImp_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_14, (MR_Integer) 1)));
            switch (parse_tree__module_qual__id_set__InInt_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__module_qual__id_set__NeedQual_63 = (MR_Word) parse_tree__module_qual__id_set__PermInImp_56;

                  parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__FullyModuleQualified_37 == (MR_Integer) 1);
                  if (!(parse_tree__module_qual__id_set__succeeded))
                    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NeedQual_63 == (MR_Integer) 1);
                  if (parse_tree__module_qual__id_set__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24));
                      }
                      *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28;
                    }
                  else
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28));
                      }
                      *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24;
                    }
                  *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27 = parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26;
                }
                break;
              case (MR_Integer) 1:
                if ((parse_tree__module_qual__id_set__PermInInt_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26));
                    }
                    *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24;
                    *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28;
                  }
                else
                  {
                    MR_Word parse_tree__module_qual__id_set__NeedQual_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__PermInInt_55, (MR_Integer) 0)));

                    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__FullyModuleQualified_37 == (MR_Integer) 1);
                    if (!(parse_tree__module_qual__id_set__succeeded))
                      parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NeedQual_57 == (MR_Integer) 1);
                    if (parse_tree__module_qual__id_set__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24));
                        }
                        *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28;
                      }
                    else
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28));
                        }
                        *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24;
                      }
                    *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27 = parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26;
                  }
                break;
            }
          }
        else
          {
            MR_Word parse_tree__module_qual__id_set__ModuleNameComponents_22;
            MR_Word parse_tree__module_qual__id_set__QualModuleNameComponents_23;

            {
              parse_tree__module_qual__id_set__ModuleNameComponents_22 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__module_qual__id_set__ModuleName_13);
            }
            {
              parse_tree__module_qual__id_set__QualModuleNameComponents_23 = mdbcomp__sym_name__sym_name_to_list_1_f_0(parse_tree__module_qual__id_set__QualModuleName_20);
            }
            {
              parse_tree__module_qual__id_set__succeeded = mercury__list__sublist_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__module_qual__id_set__QualModuleNameComponents_23, parse_tree__module_qual__id_set__ModuleNameComponents_22);
            }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28));
              }
            else
              *parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29 = parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28;
            *parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27 = parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26;
            *parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25 = parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24;
          }
      }
    else
      {
        {
          parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_int_10_p_0(parse_tree__module_qual__id_set__InInt_11, (MR_Integer) 0, parse_tree__module_qual__id_set__ModuleName_13, parse_tree__module_qual__id_set__Permissions_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_0_24, parse_tree__module_qual__id_set__STATE_VARIABLE_Matches_25, parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_0_26, parse_tree__module_qual__id_set__STATE_VARIABLE_IntMismatches_27, parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_0_28, parse_tree__module_qual__id_set__STATE_VARIABLE_QualMismatches_29);
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_5,
  MR_Word parse_tree__module_qual__id_set__ParentModule_6,
  MR_Word parse_tree__module_qual__id_set__ChildModule_7,
  MR_Word parse_tree__module_qual__id_set__ModuleIdSet_8)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__TypeInfo_21_21;
    MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_22_22;
    MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_23_23;
    MR_String parse_tree__module_qual__id_set__DirectSubModuleName_9;
    MR_Word parse_tree__module_qual__id_set__SubMap_11;
    MR_Word parse_tree__module_qual__id_set__PermissionsMap_12;
    MR_Word parse_tree__module_qual__id_set__ParentModulePermissions_13;
    MR_Word parse_tree__module_qual__id_set__PermInInt_14;
    MR_Word parse_tree__module_qual__id_set__PermInImp_15;
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_11;
    MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap_12;
    MR_Box parse_tree__module_qual__id_set__conv2_ParentModulePermissions_13;

    {
      parse_tree__module_qual__id_set__DirectSubModuleName_9 = parse_tree__module_qual__id_set__get_first_module_name_1_f_0(parse_tree__module_qual__id_set__ChildModule_7);
    }
    {
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__ModuleIdSet_8, ((MR_Box) (parse_tree__module_qual__id_set__DirectSubModuleName_9)), &parse_tree__module_qual__id_set__conv0_SubMap_11);
    }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        parse_tree__module_qual__id_set__SubMap_11 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_11);
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
      }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        parse_tree__module_qual__id_set__TypeInfo_21_21 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
        {
          parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_21_21, parse_tree__module_qual__id_set__SubMap_11, (MR_Integer) 0, &parse_tree__module_qual__id_set__conv1_PermissionsMap_12);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          {
            parse_tree__module_qual__id_set__PermissionsMap_12 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap_12);
            parse_tree__module_qual__id_set__succeeded = MR_TRUE;
          }
        if (parse_tree__module_qual__id_set__succeeded)
          {
            parse_tree__module_qual__id_set__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            parse_tree__module_qual__id_set__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;
            {
              parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_22_22, parse_tree__module_qual__id_set__TypeCtorInfo_23_23, parse_tree__module_qual__id_set__PermissionsMap_12, ((MR_Box) (parse_tree__module_qual__id_set__ParentModule_6)), &parse_tree__module_qual__id_set__conv2_ParentModulePermissions_13);
            }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                parse_tree__module_qual__id_set__ParentModulePermissions_13 = ((MR_Word) parse_tree__module_qual__id_set__conv2_ParentModulePermissions_13);
                parse_tree__module_qual__id_set__succeeded = MR_TRUE;
              }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                parse_tree__module_qual__id_set__PermInInt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ParentModulePermissions_13, (MR_Integer) 0)));
                parse_tree__module_qual__id_set__PermInImp_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ParentModulePermissions_13, (MR_Integer) 1)));
                switch (parse_tree__module_qual__id_set__InInt_5) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__module_qual__id_set__Var_16 = (MR_Word) parse_tree__module_qual__id_set__PermInImp_15;

                      parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__Var_16 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__module_qual__id_set__Var_17;

                      parse_tree__module_qual__id_set__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__id_set__PermInInt_14)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__module_qual__id_set__succeeded)
                        {
                          parse_tree__module_qual__id_set__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__PermInInt_14, (MR_Integer) 0)));
                          parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__Var_17 == (MR_Integer) 1);
                        }
                    }
                    break;
                }
              }
          }
      }
    return parse_tree__module_qual__id_set__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_2(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
    MR_Word parse_tree__module_qual__id_set__conv8_HeadVar__5_5;

    {
      recompilation__record_used_item_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), &parse_tree__module_qual__id_set__conv8_HeadVar__5_5);
    }
    *parse_tree__module_qual__id_set__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__id_set__conv8_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0_1(
  MR_Box parse_tree__module_qual__id_set__closure_arg,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_1,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_2,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_4,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_6,
  MR_Box parse_tree__module_qual__id_set__wrapper_arg_7,
  MR_Box * parse_tree__module_qual__id_set__wrapper_arg_8)
{
  {
    MR_Box parse_tree__module_qual__id_set__closure = parse_tree__module_qual__id_set__closure_arg;
    MR_Word parse_tree__module_qual__id_set__conv4_STATE_VARIABLE_Matches_25;
    MR_Word parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_IntMismatches_27;
    MR_Word parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_QualMismatches_29;

    {
      parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_3), &parse_tree__module_qual__id_set__conv4_STATE_VARIABLE_Matches_25, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_5), &parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_IntMismatches_27, ((MR_Word) parse_tree__module_qual__id_set__wrapper_arg_7), &parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_QualMismatches_29);
    }
    *parse_tree__module_qual__id_set__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__id_set__conv4_STATE_VARIABLE_Matches_25));
    *parse_tree__module_qual__id_set__wrapper_arg_6 = ((MR_Box) (parse_tree__module_qual__id_set__conv3_STATE_VARIABLE_IntMismatches_27));
    *parse_tree__module_qual__id_set__wrapper_arg_8 = ((MR_Box) (parse_tree__module_qual__id_set__conv2_STATE_VARIABLE_QualMismatches_29));
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_10_p_0(
  MR_Word parse_tree__module_qual__id_set__InInt_11,
  MR_Word parse_tree__module_qual__id_set__ErrorContext_12,
  MR_Word parse_tree__module_qual__id_set__IdSet_13,
  MR_Word parse_tree__module_qual__id_set__IdType_14,
  MR_Word parse_tree__module_qual__id_set__Id0_15,
  MR_Word * parse_tree__module_qual__id_set__SymName_16,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__SymName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__id_set__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 1)));
    MR_String parse_tree__module_qual__id_set__BaseName_21;
    MR_Word parse_tree__module_qual__id_set__Matches_22;
    MR_Word parse_tree__module_qual__id_set__IntMismatches_23;
    MR_Word parse_tree__module_qual__id_set__QualMismatches_24;
    MR_Word parse_tree__module_qual__id_set__PermissionsMap_67;
    MR_Word parse_tree__module_qual__id_set__TypeInfo_22_71;
    MR_Word parse_tree__module_qual__id_set__SubMap_66;
    MR_Box parse_tree__module_qual__id_set__conv0_SubMap_66;
    MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap_67;

    {
      parse_tree__module_qual__id_set__BaseName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__id_set__SymName0_19);
    }
    {
      parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_13, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_21)), &parse_tree__module_qual__id_set__conv0_SubMap_66);
    }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        parse_tree__module_qual__id_set__SubMap_66 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap_66);
        parse_tree__module_qual__id_set__succeeded = MR_TRUE;
      }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        parse_tree__module_qual__id_set__TypeInfo_22_71 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
        {
          parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_22_71, parse_tree__module_qual__id_set__SubMap_66, parse_tree__module_qual__id_set__Arity_20, &parse_tree__module_qual__id_set__conv1_PermissionsMap_67);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          {
            parse_tree__module_qual__id_set__PermissionsMap_67 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap_67);
            parse_tree__module_qual__id_set__succeeded = MR_TRUE;
          }
      }
    if (parse_tree__module_qual__id_set__succeeded)
      {
        MR_Word parse_tree__module_qual__id_set__TypeInfo_27_92;
        MR_Word parse_tree__module_qual__id_set__Var_78;
        MR_Box parse_tree__module_qual__id_set__conv7_Matches_22;
        MR_Box parse_tree__module_qual__id_set__conv6_IntMismatches_23;
        MR_Box parse_tree__module_qual__id_set__conv5_QualMismatches_24;

        {
          parse_tree__module_qual__id_set__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_78, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_78, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_10_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_78, 3) = ((MR_Box) (parse_tree__module_qual__id_set__InInt_11));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_78, 4) = ((MR_Box) (parse_tree__module_qual__id_set__SymName0_19));
        }
        parse_tree__module_qual__id_set__TypeInfo_27_92 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_2[0];
        {
          mercury__map__foldr3_8_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, parse_tree__module_qual__id_set__TypeInfo_27_92, parse_tree__module_qual__id_set__TypeInfo_27_92, parse_tree__module_qual__id_set__TypeInfo_27_92, parse_tree__module_qual__id_set__Var_78, parse_tree__module_qual__id_set__PermissionsMap_67, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv7_Matches_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv6_IntMismatches_23, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__module_qual__id_set__conv5_QualMismatches_24);
        }
        parse_tree__module_qual__id_set__Matches_22 = ((MR_Word) parse_tree__module_qual__id_set__conv7_Matches_22);
        parse_tree__module_qual__id_set__IntMismatches_23 = ((MR_Word) parse_tree__module_qual__id_set__conv6_IntMismatches_23);
        parse_tree__module_qual__id_set__QualMismatches_24 = ((MR_Word) parse_tree__module_qual__id_set__conv5_QualMismatches_24);
      }
    else
      {
        parse_tree__module_qual__id_set__Matches_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__module_qual__id_set__IntMismatches_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__module_qual__id_set__QualMismatches_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    if ((parse_tree__module_qual__id_set__Matches_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__module_qual__id_set__ReportErrors_26;
        MR_Integer parse_tree__module_qual__id_set__Var_34;

        {
          parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__id_set__ReportErrors_26);
        }
        switch (parse_tree__module_qual__id_set__ReportErrors_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39;
              *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__id_set__ThisModuleName_27;
              MR_Word parse_tree__module_qual__id_set__PossibleArities_28;

              {
                parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40);
              }
              {
                parse_tree__module_qual__mq_info_get_this_module_2_p_0(*parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40, &parse_tree__module_qual__id_set__ThisModuleName_27);
              }
              {
                parse_tree__module_qual__id_set__id_set_search_sym_3_p_0(parse_tree__module_qual__id_set__IdSet_13, parse_tree__module_qual__id_set__SymName0_19, &parse_tree__module_qual__id_set__PossibleArities_28);
              }
              {
                parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0(*parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40, parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__ThisModuleName_27, parse_tree__module_qual__id_set__IntMismatches_23, parse_tree__module_qual__id_set__QualMismatches_24, parse_tree__module_qual__id_set__PossibleArities_28, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42);
              }
            }
            break;
        }
        *parse_tree__module_qual__id_set__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 0)));
        parse_tree__module_qual__id_set__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 1)));
      }
    else
      {
        MR_Word parse_tree__module_qual__id_set__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__Matches_22, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__Matches_22, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__id_set__MaybeUniqModuleName_107;
        MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109;

        if ((parse_tree__module_qual__id_set__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              parse_tree__module_qual__id_set__MaybeUniqModuleName_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__MaybeUniqModuleName_107, 0) = ((MR_Box) (parse_tree__module_qual__id_set__Var_57));
            }
            parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39;
            *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41;
          }
        else
          {
            MR_Word parse_tree__module_qual__id_set__ReportErrors_52;

            parse_tree__module_qual__id_set__MaybeUniqModuleName_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              parse_tree__module_qual__mq_info_get_should_report_errors_2_p_0(parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__id_set__ReportErrors_52);
            }
            switch (parse_tree__module_qual__id_set__ReportErrors_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39;
                  *parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__module_qual__id_set__NonUsableModuleNames_33;

                  {
                    parse_tree__module_qual__mq_info_record_undef_mq_id_3_p_0(parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109);
                  }
                  {
                    parse_tree__module_qual__id_set__NonUsableModuleNames_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__module_qual__id_set__IntMismatches_23, parse_tree__module_qual__id_set__QualMismatches_24);
                  }
                  {
                    parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(parse_tree__module_qual__id_set__ErrorContext_12, parse_tree__module_qual__id_set__Id0_15, parse_tree__module_qual__id_set__IdType_14, parse_tree__module_qual__id_set__Matches_22, parse_tree__module_qual__id_set__NonUsableModuleNames_33, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_0_41, parse_tree__module_qual__id_set__STATE_VARIABLE_Specs_42);
                  }
                }
                break;
            }
          }
        if ((parse_tree__module_qual__id_set__MaybeUniqModuleName_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer parse_tree__module_qual__id_set__Var_104;

            *parse_tree__module_qual__id_set__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 0)));
            parse_tree__module_qual__id_set__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Id0_15, (MR_Integer) 1)));
            *parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40 = parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109;
          }
        else
          {
            MR_Word parse_tree__module_qual__id_set__UniqModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__MaybeUniqModuleName_107, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__id_set__ItemType_36;
            MR_Word parse_tree__module_qual__id_set__ItemName0_37;
            MR_Word parse_tree__module_qual__id_set__ItemName_38;
            MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_Info_49_49;
            MR_Word parse_tree__module_qual__id_set__Var_50;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__module_qual__id_set__SymName_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__id_set__UniqModuleName_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__id_set__BaseName_21));
            }
            {
              parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__id_set__InInt_11, parse_tree__module_qual__id_set__UniqModuleName_35, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_47_109, &parse_tree__module_qual__id_set__STATE_VARIABLE_Info_49_49);
            }
            parse_tree__module_qual__id_set__ItemType_36 = ((&parse_tree__module_qual__id_set_vector_common_4[0 + parse_tree__module_qual__id_set__IdType_14]))->parse_tree__module_qual__id_set__vector_common_type_4_0__vct_4_f_0;
            {
              parse_tree__module_qual__id_set__ItemName0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName0_37, 0) = ((MR_Box) (parse_tree__module_qual__id_set__SymName0_19));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName0_37, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Arity_20));
            }
            {
              parse_tree__module_qual__id_set__ItemName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName_38, 0) = ((MR_Box) (*parse_tree__module_qual__id_set__SymName_16));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__ItemName_38, 1) = ((MR_Box) (parse_tree__module_qual__id_set__Arity_20));
            }
            {
              parse_tree__module_qual__id_set__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_10_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 3) = ((MR_Box) (parse_tree__module_qual__id_set__ItemType_36));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 4) = ((MR_Box) (parse_tree__module_qual__id_set__ItemName0_37));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Var_50, 5) = ((MR_Box) (parse_tree__module_qual__id_set__ItemName_38));
            }
            {
              parse_tree__module_qual__update_recompilation_info_3_p_0(parse_tree__module_qual__id_set__Var_50, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_49_49, parse_tree__module_qual__id_set__STATE_VARIABLE_Info_40);
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__id_set_insert_4_p_0(
  MR_Word parse_tree__module_qual__id_set__Permissions_5,
  MR_Word parse_tree__module_qual__id_set__MQId_6,
  MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19,
  MR_Word * parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;
    MR_Word parse_tree__module_qual__id_set__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__MQId_6, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__id_set__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__MQId_6, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) parse_tree__module_qual__id_set__SymName_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_qual__id_set__TypeInfo_31_31;
        MR_Word parse_tree__module_qual__id_set__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_8, (MR_Integer) 0)));
        MR_String parse_tree__module_qual__id_set__BaseName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__SymName_8, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__id_set__FreshPermissionsMap_13;
        MR_Word parse_tree__module_qual__id_set__FreshSubMap_14;
        MR_Word parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21;

        {
          parse_tree__module_qual__id_set__FreshPermissionsMap_13 = mercury__map__singleton_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_5)));
        }
        parse_tree__module_qual__id_set__TypeInfo_31_31 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[0];
        {
          parse_tree__module_qual__id_set__FreshSubMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__module_qual__id_set__TypeInfo_31_31, ((MR_Box) (parse_tree__module_qual__id_set__Arity_9)), ((MR_Box) (parse_tree__module_qual__id_set__FreshPermissionsMap_13)));
        }
        {
          parse_tree__module_qual__id_set__succeeded = mercury__map__insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__FreshSubMap_14)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, &parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21);
        }
        if (parse_tree__module_qual__id_set__succeeded)
          *parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20 = parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_21_21;
        else
          {
            MR_Word parse_tree__module_qual__id_set__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word parse_tree__module_qual__id_set__TypeInfo_35_35 = (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1];
            MR_Word parse_tree__module_qual__id_set__SubMap0_15;
            MR_Box parse_tree__module_qual__id_set__conv0_SubMap0_15;
            MR_Word parse_tree__module_qual__id_set__PermissionsMap0_16;
            MR_Box parse_tree__module_qual__id_set__conv1_PermissionsMap0_16;

            {
              mercury__map__lookup_3_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), &parse_tree__module_qual__id_set__conv0_SubMap0_15);
            }
            parse_tree__module_qual__id_set__SubMap0_15 = ((MR_Word) parse_tree__module_qual__id_set__conv0_SubMap0_15);
            {
              parse_tree__module_qual__id_set__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__SubMap0_15, parse_tree__module_qual__id_set__Arity_9, &parse_tree__module_qual__id_set__conv1_PermissionsMap0_16);
            }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                parse_tree__module_qual__id_set__PermissionsMap0_16 = ((MR_Word) parse_tree__module_qual__id_set__conv1_PermissionsMap0_16);
                parse_tree__module_qual__id_set__succeeded = MR_TRUE;
              }
            if (parse_tree__module_qual__id_set__succeeded)
              {
                MR_Word parse_tree__module_qual__id_set__PermissionsMap_17;
                MR_Word parse_tree__module_qual__id_set__SubMap_18;
                MR_Word parse_tree__module_qual__id_set__OldPermissions_41;
                MR_Box parse_tree__module_qual__id_set__conv2_OldPermissions_41;

                {
                  parse_tree__module_qual__id_set__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, parse_tree__module_qual__id_set__PermissionsMap0_16, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), &parse_tree__module_qual__id_set__conv2_OldPermissions_41);
                }
                if (parse_tree__module_qual__id_set__succeeded)
                  {
                    parse_tree__module_qual__id_set__OldPermissions_41 = ((MR_Word) parse_tree__module_qual__id_set__conv2_OldPermissions_41);
                    parse_tree__module_qual__id_set__succeeded = MR_TRUE;
                  }
                if (parse_tree__module_qual__id_set__succeeded)
                  {
                    MR_Word parse_tree__module_qual__id_set__OldPermInt_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__OldPermissions_41, (MR_Integer) 0)));
                    MR_Word parse_tree__module_qual__id_set__OldPermImp_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__OldPermissions_41, (MR_Integer) 1)));
                    MR_Word parse_tree__module_qual__id_set__NewPermInt_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_5, (MR_Integer) 0)));
                    MR_Word parse_tree__module_qual__id_set__NewPermImp_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_5, (MR_Integer) 1)));
                    MR_Word parse_tree__module_qual__id_set__PermInt_46;
                    MR_Word parse_tree__module_qual__id_set__OldImpNeedQual_50;
                    MR_Word parse_tree__module_qual__id_set__NewImpNeedQual_51;
                    MR_Word parse_tree__module_qual__id_set__ImpNeedQual_52;
                    MR_Word parse_tree__module_qual__id_set__PermImp_53;
                    MR_Integer parse_tree__module_qual__id_set__CastX_71;
                    MR_Integer parse_tree__module_qual__id_set__CastY_72;

                    if ((parse_tree__module_qual__id_set__OldPermInt_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      parse_tree__module_qual__id_set__PermInt_46 = parse_tree__module_qual__id_set__NewPermInt_44;
                    else
                      {
                        MR_Word parse_tree__module_qual__id_set__OldIntNeedQual_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__OldPermInt_42, (MR_Integer) 0)));

                        if ((parse_tree__module_qual__id_set__NewPermInt_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          parse_tree__module_qual__id_set__PermInt_46 = parse_tree__module_qual__id_set__OldPermInt_42;
                        else
                          {
                            MR_Word parse_tree__module_qual__id_set__NewIntNeedQual_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__NewPermInt_44, (MR_Integer) 0)));
                            MR_Word parse_tree__module_qual__id_set__IntNeedQual_49;

                            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__OldIntNeedQual_47 == (MR_Integer) 0);
                            if (parse_tree__module_qual__id_set__succeeded)
                              parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NewIntNeedQual_48 == (MR_Integer) 0);
                            if (parse_tree__module_qual__id_set__succeeded)
                              parse_tree__module_qual__id_set__IntNeedQual_49 = (MR_Integer) 0;
                            else
                              parse_tree__module_qual__id_set__IntNeedQual_49 = (MR_Integer) 1;
                            {
                              parse_tree__module_qual__id_set__PermInt_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__module_qual__id_set__PermInt_46, 0) = ((MR_Box) (parse_tree__module_qual__id_set__IntNeedQual_49));
                            }
                          }
                      }
                    parse_tree__module_qual__id_set__OldImpNeedQual_50 = (MR_Word) parse_tree__module_qual__id_set__OldPermImp_43;
                    parse_tree__module_qual__id_set__NewImpNeedQual_51 = (MR_Word) parse_tree__module_qual__id_set__NewPermImp_45;
                    parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__OldImpNeedQual_50 == (MR_Integer) 0);
                    if (parse_tree__module_qual__id_set__succeeded)
                      parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__NewImpNeedQual_51 == (MR_Integer) 0);
                    if (parse_tree__module_qual__id_set__succeeded)
                      parse_tree__module_qual__id_set__ImpNeedQual_52 = (MR_Integer) 0;
                    else
                      parse_tree__module_qual__id_set__ImpNeedQual_52 = (MR_Integer) 1;
                    parse_tree__module_qual__id_set__PermImp_53 = (MR_Word) parse_tree__module_qual__id_set__ImpNeedQual_52;
                    {
                      parse_tree__module_qual__id_set__succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(parse_tree__module_qual__id_set__PermInt_46, parse_tree__module_qual__id_set__OldPermInt_42);
                    }
                    if (parse_tree__module_qual__id_set__succeeded)
                      {
                        parse_tree__module_qual__id_set__CastX_71 = (MR_Integer) parse_tree__module_qual__id_set__PermImp_53;
                        parse_tree__module_qual__id_set__CastY_72 = (MR_Integer) parse_tree__module_qual__id_set__OldPermImp_43;
                        parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__CastX_71 == parse_tree__module_qual__id_set__CastY_72);
                        if (parse_tree__module_qual__id_set__succeeded)
                          parse_tree__module_qual__id_set__succeeded = MR_TRUE;
                        else
                          {
                            MR_Word parse_tree__module_qual__id_set__ArgX1_69 = (MR_Word) parse_tree__module_qual__id_set__PermImp_53;
                            MR_Word parse_tree__module_qual__id_set__ArgY1_70 = (MR_Word) parse_tree__module_qual__id_set__OldPermImp_43;

                            parse_tree__module_qual__id_set__succeeded = (parse_tree__module_qual__id_set__ArgX1_69 == parse_tree__module_qual__id_set__ArgY1_70);
                          }
                      }
                    if (parse_tree__module_qual__id_set__succeeded)
                      parse_tree__module_qual__id_set__PermissionsMap_17 = parse_tree__module_qual__id_set__PermissionsMap0_16;
                    else
                      {
                        MR_Word parse_tree__module_qual__id_set__Permissions_54;

                        {
                          parse_tree__module_qual__id_set__Permissions_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_54, 0) = ((MR_Box) (parse_tree__module_qual__id_set__PermInt_46));
                          MR_hl_field(MR_mktag(0), parse_tree__module_qual__id_set__Permissions_54, 1) = ((MR_Box) (parse_tree__module_qual__id_set__PermImp_53));
                        }
                        {
                          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_54)), parse_tree__module_qual__id_set__PermissionsMap0_16, &parse_tree__module_qual__id_set__PermissionsMap_17);
                        }
                      }
                  }
                else
                  {
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0, ((MR_Box) (parse_tree__module_qual__id_set__ModuleName_11)), ((MR_Box) (parse_tree__module_qual__id_set__Permissions_5)), parse_tree__module_qual__id_set__PermissionsMap0_16, &parse_tree__module_qual__id_set__PermissionsMap_17);
                    }
                  }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__Arity_9, ((MR_Box) (parse_tree__module_qual__id_set__PermissionsMap_17)), parse_tree__module_qual__id_set__SubMap0_15, &parse_tree__module_qual__id_set__SubMap_18);
                }
                {
                  mercury__map__det_update_4_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__SubMap_18)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20);
                }
              }
            else
              {
                MR_Word parse_tree__module_qual__id_set__SubMap_27;

                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__module_qual__id_set__TypeInfo_31_31, parse_tree__module_qual__id_set__Arity_9, ((MR_Box) (parse_tree__module_qual__id_set__FreshPermissionsMap_13)), parse_tree__module_qual__id_set__SubMap0_15, &parse_tree__module_qual__id_set__SubMap_27);
                }
                {
                  mercury__map__det_update_4_p_0(parse_tree__module_qual__id_set__TypeCtorInfo_34_34, parse_tree__module_qual__id_set__TypeInfo_35_35, ((MR_Box) (parse_tree__module_qual__id_set__BaseName_12)), ((MR_Box) (parse_tree__module_qual__id_set__SubMap_27)), parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_0_19, parse_tree__module_qual__id_set__STATE_VARIABLE_IdSet_20);
                }
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

void MR_CALL 
parse_tree__module_qual__id_set__id_set_init_1_p_0(
  MR_Word * parse_tree__module_qual__id_set__IdSet_2)
{
  {
    MR_bool parse_tree__module_qual__id_set__succeeded;

    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__module_qual__id_set_scalar_common_1[1], parse_tree__module_qual__id_set__IdSet_2);
    }
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

/* :- end_module parse_tree.module_qual.id_set. */
