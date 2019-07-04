/*
** Automatically generated from `hlds_cons.m'
** by the Mercury compiler,
** version rotd-2019-07-04
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


// :- module hlds.hlds_cons.
// :- implementation.

/*
INIT mercury__hlds__hlds_cons__init
ENDINIT
*/

#include "hlds.hlds_cons.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "hlds.status.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_cons__list__pti_list_1__plain_hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_cons__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_cons____vpti_pred_2__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_cons__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_EnumFunctorDesc hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__enum_value_ordered_field_access_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__enum_name_ordered_field_access_type_0[2];

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_field_access_type_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_constructor_arg_0;

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_cons_defn_0_0[7];

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_cons_defn_0_0[7];

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_cons_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_cons_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_cons_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_cons_defn_0[1];

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_cons_defn_0[1];

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_ctor_field_defn_0_0[5];

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_ctor_field_defn_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_ctor_field_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_ctor_field_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_ctor_field_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_ctor_field_defn_0[1];

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_ctor_field_defn_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_inner_cons_entry_0_0[3];

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_inner_cons_entry_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_inner_cons_entry_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_inner_cons_entry_0_0[1];

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_inner_cons_entry_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_inner_cons_entry_0[1];

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_inner_cons_entry_0[1];

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_entry_3_p_0(
  MR_Word Replace_4,
  MR_Word STATE_VARIABLE_Entry_0_8,
  MR_Word * STATE_VARIABLE_Entry_9);

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0(
  MR_Word Replace_4,
  MR_Word STATE_VARIABLE_InnerConsTable_0_6,
  MR_Word * STATE_VARIABLE_InnerConsTable_7);

static void MR_CALL 
hlds__hlds_cons__project_inner_cons_entry_2_p_0(
  MR_Word Entry_3,
  MR_Word * Pair_4);

static void MR_CALL 
hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0(
  MR_Word InnerConsTable_4,
  MR_Word STATE_VARIABLE_AllConsDefns_0_7,
  MR_Word * STATE_VARIABLE_AllConsDefns_8);

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_cons_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons__return_cons_arities_inner_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Word STATE_VARIABLE_Arities_0_3,
  MR_Word * STATE_VARIABLE_Arities_4);

static void MR_CALL 
hlds__hlds_cons__return_cons_arities_inner_cons_ids_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Word STATE_VARIABLE_Arities_0_3,
  MR_Word * STATE_VARIABLE_Arities_4);

static void MR_CALL 
hlds__hlds_cons__get_all_cons_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons__search_inner_cons_ids_type_ctor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word * ConsDefn_9);

static void MR_CALL 
hlds__hlds_cons__search_inner_other_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_cons__search_inner_main_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ConsDefn_7);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____cons_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____cons_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____ctor_field_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____ctor_field_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____field_access_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____field_access_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_cons_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____hlds_cons_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_cons_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_2[6][3];

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_3[3][6];

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__hlds_cons_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_cons_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_cons_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_cons_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_cons__get_all_cons_defns_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_cons_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_cons__list__pti_list_1__plain_hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)),
    ((MR_Box) (&hlds__hlds_cons__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_cons__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_cons____vpti_pred_2__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_cons__list__pti_list_1__plain_hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)),
    ((MR_Box) (&hlds__hlds_cons__list__pti_list_1__plain_hlds__hlds_cons__type_ctor_info_inner_cons_entry_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_cons____vpti_pred_2__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0))
  },
};

static /* final */ const MR_Box hlds__hlds_cons_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)),
    ((MR_Box) (&hlds__hlds_cons__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_cons__list__pti_list_1__plain_hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_cons__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_cons__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_cons____vpti_pred_2__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_cons__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_cons____Unify____cons_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____cons_table_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "cons_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_cons__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_ctor_field_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_cons____Unify____ctor_field_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____ctor_field_table_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "ctor_field_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_cons__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_0 = {
  (MR_String) "get",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_1 = {
  (MR_String) "set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__enum_value_ordered_field_access_type_0[2] = {
  &hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_0,
  &hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__enum_name_ordered_field_access_type_0[2] = {
  &hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_0,
  &hlds__hlds_cons__hlds__hlds_cons__enum_functor_desc_field_access_type_0_1
};

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_field_access_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_cons____Unify____field_access_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____field_access_type_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "field_access_type",
  {     hlds__hlds_cons__hlds__hlds_cons__enum_name_ordered_field_access_type_0 },
  {     hlds__hlds_cons__hlds__hlds_cons__enum_value_ordered_field_access_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_cons__hlds__hlds_cons__functor_number_map_field_access_type_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_cons__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_constructor_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_cons_defn_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_constructor_arg_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_cons_defn_0_0[7] = {
  (MR_String) "cons_type_ctor",
  (MR_String) "cons_type_tvarset",
  (MR_String) "cons_type_params",
  (MR_String) "cons_type_kinds",
  (MR_String) "cons_maybe_exist",
  (MR_String) "cons_args",
  (MR_String) "cons_context"
};

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_cons_defn_0_0 = {
  (MR_String) "hlds_cons_defn",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_cons_defn_0_0,
  hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_cons_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_cons_defn_0_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_cons_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_cons_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_cons_defn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_cons_defn_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_cons_defn_0_0
};

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_cons_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_cons____Unify____hlds_cons_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____hlds_cons_defn_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "hlds_cons_defn",
  {     hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_cons_defn_0 },
  {     hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_cons_defn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_cons_defn_0
};

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_ctor_field_defn_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_ctor_field_defn_0_0[5] = {
  (MR_String) "field_context",
  (MR_String) "field_status",
  (MR_String) "field_type_ctor",
  (MR_String) "field_cons_id",
  (MR_String) "field_arg_num"
};

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_ctor_field_defn_0_0 = {
  (MR_String) "hlds_ctor_field_defn",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_cons__hlds__hlds_cons__field_types_hlds_ctor_field_defn_0_0,
  hlds__hlds_cons__hlds__hlds_cons__field_names_hlds_ctor_field_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_ctor_field_defn_0_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_ctor_field_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_ctor_field_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_hlds_ctor_field_defn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_ctor_field_defn_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_hlds_ctor_field_defn_0_0
};

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_ctor_field_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "hlds_ctor_field_defn",
  {     hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_hlds_ctor_field_defn_0 },
  {     hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_hlds_ctor_field_defn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_cons__hlds__hlds_cons__functor_number_map_hlds_ctor_field_defn_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_cons__hlds__hlds_cons__field_types_inner_cons_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)
};

static const MR_ConstString hlds__hlds_cons__hlds__hlds_cons__field_names_inner_cons_entry_0_0[3] = {
  (MR_String) "ice_fully_qual_cons_id",
  (MR_String) "ice_other_cons_ids",
  (MR_String) "ice_cons_defn"
};

static const MR_DuFunctorDesc hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_inner_cons_entry_0_0 = {
  (MR_String) "inner_cons_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_cons__hlds__hlds_cons__field_types_inner_cons_entry_0_0,
  hlds__hlds_cons__hlds__hlds_cons__field_names_inner_cons_entry_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_inner_cons_entry_0_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_inner_cons_entry_0_0
};

static const MR_DuPtagLayout hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_inner_cons_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_cons__hlds__hlds_cons__du_stag_ordered_inner_cons_entry_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_inner_cons_entry_0[1] = {
  &hlds__hlds_cons__hlds__hlds_cons__du_functor_desc_inner_cons_entry_0_0
};

static const MR_Integer hlds__hlds_cons__hlds__hlds_cons__functor_number_map_inner_cons_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_cons____Unify____inner_cons_entry_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____inner_cons_entry_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "inner_cons_entry",
  {     hlds__hlds_cons__hlds__hlds_cons__du_name_ordered_inner_cons_entry_0 },
  {     hlds__hlds_cons__hlds__hlds_cons__du_ptag_ordered_inner_cons_entry_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_cons__hlds__hlds_cons__functor_number_map_inner_cons_entry_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_cons____Unify____inner_cons_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_cons____Compare____inner_cons_table_0_0_10001)),
  (MR_String) "hlds.hlds_cons",
  (MR_String) "inner_cons_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_cons__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_cons____Compare____hlds_cons_defn_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = hlds__hlds_cons____Unify____hlds_cons_defn_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__status____Compare____type_status_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            parse_tree__prog_data____Compare____cons_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__status____Unify____type_status_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____hlds_cons_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              parse_tree__prog_data____Compare____maybe_cons_exist_constraints_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[6]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_cons_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&hlds__hlds_cons_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                  succeeded = mercury__term____Unify____context_0_0(ArgX7_15, ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____field_access_type_0_0(
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
hlds__hlds_cons____Unify____field_access_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____ctor_field_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_cons____Unify____ctor_field_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_cons____Compare____cons_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_cons____Unify____cons_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_entry_3_p_0(
  MR_Word Replace_4,
  MR_Word STATE_VARIABLE_Entry_0_8,
  MR_Word * STATE_VARIABLE_Entry_9)
{
  {
    MR_Word ConsDefn0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Entry_0_8, (MR_Integer) 2))));
    MR_Word ConsDefn_7;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Replace_4, (MR_Integer) 1))));
    MR_Box conv1_ConsDefn_7;
    MR_Word Var_13;
    MR_Word Var_14;

    func_0(((MR_Box) (Replace_4)), ((MR_Box) (ConsDefn0_6)), &conv1_ConsDefn_7);
    ConsDefn_7 = ((MR_Word) (conv1_ConsDefn_7));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Entry_0_8, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Entry_0_8, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Entry_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsDefn_7));
    }
  }
}

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Entry_9;

    hlds__hlds_cons__replace_cons_defns_in_inner_cons_entry_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Entry_9);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Entry_9));
  }
}

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0(
  MR_Word Replace_4,
  MR_Word STATE_VARIABLE_InnerConsTable_0_6,
  MR_Word * STATE_VARIABLE_InnerConsTable_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__hlds_cons_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Replace_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0), (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0), Var_8, STATE_VARIABLE_InnerConsTable_0_6, STATE_VARIABLE_InnerConsTable_7);
  }
}

static void MR_CALL 
hlds__hlds_cons__project_inner_cons_entry_2_p_0(
  MR_Word Entry_3,
  MR_Word * Pair_4)
{
  {
    MR_Word MainConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_3, (MR_Integer) 0))));
    MR_Word ConsDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_3, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Pair_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsDefn_7));
    }
  }
}

static void MR_CALL 
hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Pair_4;

    hlds__hlds_cons__project_inner_cons_entry_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Pair_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Pair_4));
  }
}

static void MR_CALL 
hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0(
  MR_Word InnerConsTable_4,
  MR_Word STATE_VARIABLE_AllConsDefns_0_7,
  MR_Word * STATE_VARIABLE_AllConsDefns_8)
{
  {
    MR_Word InnerConsList_6;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0), (MR_Word) (&hlds__hlds_cons_scalar_common_2[0]), (MR_Word) (&hlds__hlds_cons_scalar_common_2[5]), InnerConsTable_4, &InnerConsList_6);
    *STATE_VARIABLE_AllConsDefns_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_cons_scalar_common_2[0]), InnerConsList_6, STATE_VARIABLE_AllConsDefns_0_7);
  }
}

void MR_CALL 
hlds__hlds_cons__cons_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ConsTable_0_4,
  MR_Word * STATE_VARIABLE_ConsTable_5)
{
  {
    mercury__map__optimize_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), STATE_VARIABLE_ConsTable_0_4, STATE_VARIABLE_ConsTable_5);
  }
}

static void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_cons_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InnerConsTable_7;

    hlds__hlds_cons__replace_cons_defns_in_inner_cons_table_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_InnerConsTable_7);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_InnerConsTable_7));
  }
}

void MR_CALL 
hlds__hlds_cons__replace_cons_defns_in_cons_table_3_p_0(
  MR_Word Replace_4,
  MR_Word STATE_VARIABLE_ConsTable_0_6,
  MR_Word * STATE_VARIABLE_ConsTable_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__hlds_cons_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__hlds_cons__replace_cons_defns_in_cons_table_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Replace_4));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, STATE_VARIABLE_ConsTable_0_6, STATE_VARIABLE_ConsTable_7);
  }
}

void MR_CALL 
hlds__hlds_cons__return_cons_arities_3_p_0(
  MR_Word ConsTable_4,
  MR_Word SymName_5,
  MR_Word * Arities_6)
{
  {
    MR_bool succeeded;
    MR_String Name_7;
    MR_Word InnerConsTable_8;
    MR_Box conv0_InnerConsTable_8;

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), ConsTable_4, ((MR_Box) (Name_7)), &conv0_InnerConsTable_8);
    if (succeeded)
    {
      InnerConsTable_8 = ((MR_Word) (conv0_InnerConsTable_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Arities0_9;

      hlds__hlds_cons__return_cons_arities_inner_4_p_0(InnerConsTable_8, SymName_5, (MR_Word) ((MR_Unsigned) 0U), &Arities0_9);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Arities0_9, Arities_6);
    }
    else
      *Arities_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
hlds__hlds_cons__return_cons_arities_inner_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Word STATE_VARIABLE_Arities_0_3,
  MR_Word * STATE_VARIABLE_Arities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Arities_4 = STATE_VARIABLE_Arities_0_3;
    else
    {
      MR_Word Entry_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entries_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Arities_18_18;
      MR_Word ConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_9, (MR_Integer) 0))));
      MR_Word ConsIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Arities_18_37;
      MR_Word ThisSymName_32;
      MR_Integer ThisArity_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Arities_0_3;

      succeeded = ((((MR_tag((MR_Word) ConsId_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ThisSymName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));
        ThisArity_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 2))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisSymName_32, SymName_2);
        if (succeeded)
          {
            STATE_VARIABLE_Arities_18_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Arities_18_37, 0) = ((MR_Box) (ThisArity_33));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Arities_18_37, 1) = ((MR_Box) (STATE_VARIABLE_Arities_0_3));
          }
        else
          STATE_VARIABLE_Arities_18_37 = STATE_VARIABLE_Arities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_cons.return_cons_arities_inner_cons_ids\'/4", (MR_String) "ConsId is not cons");
          return;
        }
      }
      hlds__hlds_cons__return_cons_arities_inner_cons_ids_4_p_0(ConsIds_29, SymName_2, STATE_VARIABLE_Arities_18_37, &STATE_VARIABLE_Arities_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entries_10;
      next_value_of_STATE_VARIABLE_Arities_0_3 = STATE_VARIABLE_Arities_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Arities_0_3 = next_value_of_STATE_VARIABLE_Arities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_cons__return_cons_arities_inner_cons_ids_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Word STATE_VARIABLE_Arities_0_3,
  MR_Word * STATE_VARIABLE_Arities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Arities_4 = STATE_VARIABLE_Arities_0_3;
    else
    {
      MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsIds_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Arities_18_18;
      MR_Word ThisSymName_13;
      MR_Integer ThisArity_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Arities_0_3;

      succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ThisSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
        ThisArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 2))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisSymName_13, SymName_2);
        if (succeeded)
          {
            STATE_VARIABLE_Arities_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Arities_18_18, 0) = ((MR_Box) (ThisArity_14));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Arities_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Arities_0_3));
          }
        else
          STATE_VARIABLE_Arities_18_18 = STATE_VARIABLE_Arities_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_cons.return_cons_arities_inner_cons_ids\'/4", (MR_String) "ConsId is not cons");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsIds_10;
      next_value_of_STATE_VARIABLE_Arities_0_3 = STATE_VARIABLE_Arities_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Arities_0_3 = next_value_of_STATE_VARIABLE_Arities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_cons__get_all_cons_defns_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AllConsDefns_8;

    hlds__hlds_cons__accumulate_all_inner_cons_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AllConsDefns_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AllConsDefns_8));
  }
}

void MR_CALL 
hlds__hlds_cons__get_all_cons_defns_2_p_0(
  MR_Word ConsTable_3,
  MR_Word * AllConsDefns_4)
{
  {
    MR_Box conv1_AllConsDefns_4;

    mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), (MR_Word) (&hlds__hlds_cons_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_2[4]), ConsTable_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_AllConsDefns_4);
    *AllConsDefns_4 = ((MR_Word) (conv1_AllConsDefns_4));
  }
}

void MR_CALL 
hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(
  MR_Word ConsTable_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * ConsDefn_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ConsDefnPrime_9;
    MR_Word TypeCtorInfo_14_21;
    MR_Word TypeInfo_15_22;
    MR_Word SymName_16;
    MR_String Name_19;
    MR_Word InnerConsTable_20;
    MR_Box conv0_InnerConsTable_20;

    if (succeeded)
    {
      SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
      Name_19 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      TypeCtorInfo_14_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_15_22 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_14_21, TypeInfo_15_22, ConsTable_5, ((MR_Box) (Name_19)), &conv0_InnerConsTable_20);
      if (succeeded)
      {
        InnerConsTable_20 = ((MR_Word) (conv0_InnerConsTable_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = hlds__hlds_cons__search_inner_cons_ids_type_ctor_4_p_0(InnerConsTable_20, TypeCtor_6, ConsId_7, &ConsDefnPrime_9);
    }
    if (succeeded)
      *ConsDefn_8 = ConsDefnPrime_9;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_cons.lookup_cons_table_of_type_ctor\'/4", (MR_String) "lookup failed");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(
  MR_Word ConsTable_5,
  MR_Word TypeCtor_6,
  MR_Word ConsId_7,
  MR_Word * ConsDefn_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word SymName_9;
    MR_String Name_12;
    MR_Word InnerConsTable_13;
    MR_Box conv0_InnerConsTable_13;

    if (succeeded)
    {
      SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
      Name_12 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_15_15 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_14_14, TypeInfo_15_15, ConsTable_5, ((MR_Box) (Name_12)), &conv0_InnerConsTable_13);
      if (succeeded)
      {
        InnerConsTable_13 = ((MR_Word) (conv0_InnerConsTable_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = hlds__hlds_cons__search_inner_cons_ids_type_ctor_4_p_0(InnerConsTable_13, TypeCtor_6, ConsId_7, ConsDefn_8);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons__search_inner_cons_ids_type_ctor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word * ConsDefn_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Entry_5;
    MR_Word Entries_6;
    MR_Word EntryConsDefn_10;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Entry_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Entries_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      EntryConsDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 2))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryConsDefn_10, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_25);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_8, Var_29);
        if (!(succeeded))
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_8)), Var_28);
        }
      }
      if (succeeded)
      {
        *ConsDefn_9 = EntryConsDefn_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Entries_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__hlds_cons__search_cons_table_3_p_0(
  MR_Word ConsTable_4,
  MR_Word ConsId_5,
  MR_Word * ConsDefns_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word SymName_7;
    MR_String Name_10;
    MR_Word InnerConsTable_11;
    MR_Box conv0_InnerConsTable_11;
    MR_Word MainConsDefn_12;

    if (succeeded)
    {
      SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1))));
      Name_10 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
      TypeCtorInfo_16_16 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_17_17 = (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_16_16, TypeInfo_17_17, ConsTable_4, ((MR_Box) (Name_10)), &conv0_InnerConsTable_11);
      if (succeeded)
      {
        InnerConsTable_11 = ((MR_Word) (conv0_InnerConsTable_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = hlds__hlds_cons__search_inner_main_cons_ids_3_p_0(InnerConsTable_11, ConsId_5, &MainConsDefn_12);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsDefns_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainConsDefn_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          hlds__hlds_cons__search_inner_other_cons_ids_3_p_0(InnerConsTable_11, ConsId_5, ConsDefns_6);
          succeeded = (*ConsDefns_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons__search_inner_other_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Entry_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entries_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsDefns_10_10;
      MR_Word Var_11;

      hlds__hlds_cons__search_inner_other_cons_ids_3_p_0(Entries_6, HeadVar__2_2, &STATE_VARIABLE_ConsDefns_10_10);
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 1))));
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (HeadVar__2_2)), Var_11);
      if (succeeded)
      {
        MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 2))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ConsDefns_10_10));
        }
      }
      else
        *HeadVar__3_3 = STATE_VARIABLE_ConsDefns_10_10;
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons__search_inner_main_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_6,
  MR_Word * ConsDefn_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Entry_4;
    MR_Word Entries_5;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Entry_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Entries_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_4, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_6, Var_12);
      if (succeeded)
      {
        *ConsDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_4, (MR_Integer) 2))));
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Entries_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__hlds_cons__insert_into_cons_table_5_p_0(
  MR_Word MainConsId_6,
  MR_Word OtherConsIds_7,
  MR_Word ConsDefn_8,
  MR_Word STATE_VARIABLE_ConsTable_0_17,
  MR_Word * STATE_VARIABLE_ConsTable_18)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) MainConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MainConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word MainSymName_10;

    if (succeeded)
    {
      MainSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MainConsId_6, (MR_Integer) 1))));
      {
        MR_String MainName_13;
        MR_Word Entry_14;
        MR_Word InnerConsEntries0_15;
        MR_Box conv0_InnerConsEntries0_15;

        MainName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(MainSymName_10);
        {
          Entry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_14, 0) = ((MR_Box) (MainConsId_6));
          MR_hl_field(MR_mktag(0), Entry_14, 1) = ((MR_Box) (OtherConsIds_7));
          MR_hl_field(MR_mktag(0), Entry_14, 2) = ((MR_Box) (ConsDefn_8));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), STATE_VARIABLE_ConsTable_0_17, ((MR_Box) (MainName_13)), &conv0_InnerConsEntries0_15);
        if (succeeded)
        {
          InnerConsEntries0_15 = ((MR_Word) (conv0_InnerConsEntries0_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word InnerConsEntries_16;

          {
            InnerConsEntries_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), InnerConsEntries_16, 0) = ((MR_Box) (Entry_14));
            MR_hl_field(MR_mktag(1), InnerConsEntries_16, 1) = ((MR_Box) (InnerConsEntries0_15));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), ((MR_Box) (MainName_13)), ((MR_Box) (InnerConsEntries_16)), STATE_VARIABLE_ConsTable_0_17, STATE_VARIABLE_ConsTable_18);
        }
        else
        {
          MR_Word InnerConsEntries_24;

          {
            InnerConsEntries_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), InnerConsEntries_24, 0) = ((MR_Box) (Entry_14));
            MR_hl_field(MR_mktag(1), InnerConsEntries_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]), ((MR_Box) (MainName_13)), ((MR_Box) (InnerConsEntries_24)), STATE_VARIABLE_ConsTable_0_17, STATE_VARIABLE_ConsTable_18);
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_cons.insert_into_cons_table\'/5", (MR_String) "MainConsId is not cons");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_cons__init_cons_table_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_cons_scalar_common_1[0]));
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____cons_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____cons_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____cons_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____cons_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____ctor_field_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____ctor_field_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____ctor_field_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____ctor_field_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____field_access_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____field_access_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____field_access_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____field_access_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_cons_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____hlds_cons_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____hlds_cons_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____hlds_cons_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____inner_cons_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____inner_cons_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_cons____Unify____inner_cons_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_cons____Unify____inner_cons_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_cons____Compare____inner_cons_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_cons____Compare____inner_cons_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_cons__init(void)
{
}

void mercury__hlds__hlds_cons__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_ctor_field_table_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0);
	MR_register_type_ctor_info(&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_table_0);
}

void mercury__hlds__hlds_cons__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_cons__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_cons.
