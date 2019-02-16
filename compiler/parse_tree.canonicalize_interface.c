/*
** Automatically generated from `canonicalize_interface.m'
** by the Mercury compiler,
** version rotd-2019-02-16
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


// :- module parse_tree.canonicalize_interface.
// :- implementation.

/*
INIT mercury__parse_tree__canonicalize_interface__init
ENDINIT
*/

#include "parse_tree.canonicalize_interface.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0;

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1;

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_value_ordered_are_arities_pfs_known_0[2];

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_name_ordered_are_arities_pfs_known_0[2];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_are_arities_pfs_known_0[2];

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_0_0[2];

static const MR_DuArgLocn parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_arity_pf_0_0[2];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0[1];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0;

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_items_0_0[2];

static const MR_ConstString parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_arity_pf_items_0_0[2];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0[1];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_import_or_use_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0;

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_related_items_0_0[3];

static const MR_ConstString parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_pred_related_items_0_0[3];

static const MR_DuArgLocn parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_pred_related_items_0_0[3];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_related_items_0_0[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_related_items_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_related_items_0[1];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_related_items_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0;

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____avail_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____avail_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_items_3_p_0(
  MR_Word ArityPfItems_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_8,
  MR_Word * STATE_VARIABLE_ItemsCord_9);

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_items_3_p_0(
  MR_Word PredRelated_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_9,
  MR_Word * STATE_VARIABLE_ItemsCord_10);

static void MR_CALL 
parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(
  MR_Word SymNameItemsCord_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_6,
  MR_Word * STATE_VARIABLE_ItemsCord_7);

static void MR_CALL 
parse_tree__canonicalize_interface__append_avail_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportOrUse_6,
  MR_Word STATE_VARIABLE_AvailsCord_0_11,
  MR_Word * STATE_VARIABLE_AvailsCord_12);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0(
  MR_Word Items_3,
  MR_Word * OrderedItems_4);

static void MR_CALL 
parse_tree__canonicalize_interface__classify_items_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeDefnMap_3,
  MR_Word STATE_VARIABLE_InstDefnMap_0_4,
  MR_Word * STATE_VARIABLE_InstDefnMap_5,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_6,
  MR_Word * STATE_VARIABLE_ModeDefnMap_7,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_8,
  MR_Word * STATE_VARIABLE_PredRelatedMap_9,
  MR_Word STATE_VARIABLE_SortableItems_0_10,
  MR_Word * STATE_VARIABLE_SortableItems_11,
  MR_Word STATE_VARIABLE_NonReorderableItemsCord_0_12,
  MR_Word * STATE_VARIABLE_NonReorderableItemsCord_13);

static void MR_CALL 
parse_tree__canonicalize_interface__add_to_sym_name_items_map_4_p_0(
  MR_Word SymNameAndArity_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_SymNameItemsMap_0_10,
  MR_Word * STATE_VARIABLE_SymNameItemsMap_11);

static void MR_CALL 
parse_tree__canonicalize_interface__build_avail_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AvailMap_0_2,
  MR_Word * STATE_VARIABLE_AvailMap_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____avail_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____avail_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_2[15][3];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_3[3][6];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_4[1][7];




static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_items_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_items_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_items_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_items_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[2])),
    ((MR_Box) (parse_tree__canonicalize_interface__append_pred_related_items_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0 = {
  (MR_String) "some_arities_pfs_are_unknown",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1 = {
  (MR_String) "all_arities_pfs_are_known",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_value_ordered_are_arities_pfs_known_0[2] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0,
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_name_ordered_are_arities_pfs_known_0[2] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1,
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0
};

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_are_arities_pfs_known_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_are_arities_pfs_known_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "are_arities_pfs_known",
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_name_ordered_are_arities_pfs_known_0 },
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_value_ordered_are_arities_pfs_known_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_are_arities_pfs_known_0
};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_arity_pf_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0 = {
  (MR_String) "arity_pf",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_0_0,
  NULL,
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_arity_pf_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0
};

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0
};

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____arity_pf_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____arity_pf_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "arity_pf",
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0 },
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_items_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0)
};

static const MR_ConstString parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_arity_pf_items_0_0[2] = {
  (MR_String) "apfi_pred_decl_items",
  (MR_String) "apfi_mode_decl_items"
};

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0 = {
  (MR_String) "arity_pf_items",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_items_0_0,
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_arity_pf_items_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0
};

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0
};

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "arity_pf_items",
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0 },
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_import_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_avail_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____avail_map_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____avail_map_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "avail_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_import_or_use_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0),
    (MR_TypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_related_items_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_are_arities_pfs_known_0),
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0),
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0)
};

static const MR_ConstString parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_pred_related_items_0_0[3] = {
  (MR_String) "prs_arities_pfs_known",
  (MR_String) "prs_all_items",
  (MR_String) "prs_arity_pf_items"
};

static const MR_DuArgLocn parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_pred_related_items_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0 = {
  (MR_String) "pred_related_items",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_related_items_0_0,
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_pred_related_items_0_0,
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_pred_related_items_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_related_items_0_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0
};

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_related_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_related_items_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_related_items_0[1] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0
};

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_related_items_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____pred_related_items_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____pred_related_items_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "pred_related_items",
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_related_items_0 },
  {     parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_related_items_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_related_items_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "pred_related_items_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_TypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_sym_name_items_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "sym_name_items_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____avail_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____avail_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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
      {
        MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_13 < Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_13 > Var_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0(
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

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_items_3_p_0(
  MR_Word ArityPfItems_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_8,
  MR_Word * STATE_VARIABLE_ItemsCord_9)
{
  {
    MR_Word PredDeclItems_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems_4, (MR_Integer) 0))));
    MR_Word ModeDeclItems_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems_4, (MR_Integer) 1))));
    MR_Word Var_11;

    Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), PredDeclItems_6, ModeDeclItems_7);
    *STATE_VARIABLE_ItemsCord_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_8, Var_11);
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ItemsCord_9;

    parse_tree__canonicalize_interface__append_arity_pf_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ItemsCord_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ItemsCord_9));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_items_3_p_0(
  MR_Word PredRelated_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_9,
  MR_Word * STATE_VARIABLE_ItemsCord_10)
{
  {
    MR_Word Known_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredRelated_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word AllItems_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated_4, (MR_Integer) 1))));
    MR_Word ArityPfMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated_4, (MR_Integer) 2))));

    switch (Known_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box conv1_STATE_VARIABLE_ItemsCord_10;

          mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[14]), ArityPfMap_8, ((MR_Box) (STATE_VARIABLE_ItemsCord_0_9)), &conv1_STATE_VARIABLE_ItemsCord_10);
          *STATE_VARIABLE_ItemsCord_10 = ((MR_Word) (conv1_STATE_VARIABLE_ItemsCord_10));
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ItemsCord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_9, AllItems_7);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(
  MR_Word SymNameItemsCord_4,
  MR_Word STATE_VARIABLE_ItemsCord_0_6,
  MR_Word * STATE_VARIABLE_ItemsCord_7)
{
  {
    *STATE_VARIABLE_ItemsCord_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemsCord_0_6, SymNameItemsCord_4);
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_avail_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportOrUse_6,
  MR_Word STATE_VARIABLE_AvailsCord_0_11,
  MR_Word * STATE_VARIABLE_AvailsCord_12)
{
  {
    MR_Word Context_8;
    MR_Word Avail_10;

    Context_8 = mercury__term__context_init_0_f_0();
    switch (ImportOrUse_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_14;

          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (ModuleName_5));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) -1));
          }
          Avail_10 = (MR_Word) ((MR_Word) (Var_14));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13;

          {
            Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (ModuleName_5));
            MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) -1));
          }
          Avail_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_13)));
        }
        break;
    }
    *STATE_VARIABLE_AvailsCord_12 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), STATE_VARIABLE_AvailsCord_0_11, ((MR_Box) (Avail_10)));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ItemsCord_10;

    parse_tree__canonicalize_interface__append_pred_related_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ItemsCord_10);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ItemsCord_10));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AvailsCord_12;

    parse_tree__canonicalize_interface__append_avail_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AvailsCord_12);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AvailsCord_12));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AvailsCord_12;

    parse_tree__canonicalize_interface__append_avail_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_AvailsCord_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_AvailsCord_12));
  }
}

void MR_CALL 
parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0(
  MR_Word ParseTreeInt0_3,
  MR_Word * ParseTreeInt_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 0))));
    MR_Word IntFileKind_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleNameContext_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 2))));
    MR_Word MaybeVersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 3))));
    MR_Word IntIncls0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 4))));
    MR_Word ImpIncls0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 5))));
    MR_Word IntAvails0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 6))));
    MR_Word ImpAvails0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 7))));
    MR_Word IntItems0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 8))));
    MR_Word ImpItems0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_3, (MR_Integer) 9))));
    MR_Word IntIncls_15;
    MR_Word ImpIncls_16;
    MR_Word IntAvails_17;
    MR_Word ImpAvails_18;
    MR_Word IntItems_19;
    MR_Word ImpItems_20;
    MR_Word AvailMap_24;
    MR_Word SortedAvailCord_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word AvailMap_39;
    MR_Word SortedAvailCord_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word TypeDefnMap_54;
    MR_Word InstDefnMap_55;
    MR_Word ModeDefnMap_56;
    MR_Word PredRelatedMap_57;
    MR_Word SortableItems_58;
    MR_Word NonReorderableItemsCord_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_OrderedItemsCord_18_67;
    MR_Word STATE_VARIABLE_OrderedItemsCord_20_69;
    MR_Word STATE_VARIABLE_OrderedItemsCord_22_71;
    MR_Word STATE_VARIABLE_OrderedItemsCord_24_73;
    MR_Word STATE_VARIABLE_OrderedItemsCord_26_75;
    MR_Word STATE_VARIABLE_OrderedItemsCord_27_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_OrderedItemsCord_30_79;
    MR_Box conv1_SortedAvailCord_25;
    MR_Box conv3_SortedAvailCord_40;
    MR_Box conv5_STATE_VARIABLE_OrderedItemsCord_20_69;
    MR_Box conv7_STATE_VARIABLE_OrderedItemsCord_22_71;
    MR_Box conv9_STATE_VARIABLE_OrderedItemsCord_24_73;
    MR_Box conv11_STATE_VARIABLE_OrderedItemsCord_26_75;

    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntIncls0_9, &IntIncls_15);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ImpIncls0_10, &ImpIncls_16);
    Var_26 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0));
    parse_tree__canonicalize_interface__build_avail_map_3_p_0(IntAvails0_11, Var_26, &AvailMap_24);
    Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[8]), AvailMap_24, ((MR_Box) (Var_28)), &conv1_SortedAvailCord_25);
    SortedAvailCord_25 = ((MR_Word) (conv1_SortedAvailCord_25));
    IntAvails_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), SortedAvailCord_25);
    Var_41 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0));
    parse_tree__canonicalize_interface__build_avail_map_3_p_0(ImpAvails0_12, Var_41, &AvailMap_39);
    Var_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[9]), AvailMap_39, ((MR_Box) (Var_43)), &conv3_SortedAvailCord_40);
    SortedAvailCord_40 = ((MR_Word) (conv3_SortedAvailCord_40));
    ImpAvails_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), SortedAvailCord_40);
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_62 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_63 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_64 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0));
    Var_65 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_66 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__canonicalize_interface__classify_items_13_p_0(IntItems0_13, Var_61, &TypeDefnMap_54, Var_62, &InstDefnMap_55, Var_63, &ModeDefnMap_56, Var_64, &PredRelatedMap_57, Var_65, &SortableItems_58, Var_66, &NonReorderableItemsCord_59);
    STATE_VARIABLE_OrderedItemsCord_18_67 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[10]), TypeDefnMap_54, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_18_67)), &conv5_STATE_VARIABLE_OrderedItemsCord_20_69);
    STATE_VARIABLE_OrderedItemsCord_20_69 = ((MR_Word) (conv5_STATE_VARIABLE_OrderedItemsCord_20_69));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[11]), InstDefnMap_55, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_20_69)), &conv7_STATE_VARIABLE_OrderedItemsCord_22_71);
    STATE_VARIABLE_OrderedItemsCord_22_71 = ((MR_Word) (conv7_STATE_VARIABLE_OrderedItemsCord_22_71));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[12]), ModeDefnMap_56, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_22_71)), &conv9_STATE_VARIABLE_OrderedItemsCord_24_73);
    STATE_VARIABLE_OrderedItemsCord_24_73 = ((MR_Word) (conv9_STATE_VARIABLE_OrderedItemsCord_24_73));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[13]), PredRelatedMap_57, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_24_73)), &conv11_STATE_VARIABLE_OrderedItemsCord_26_75);
    STATE_VARIABLE_OrderedItemsCord_26_75 = ((MR_Word) (conv11_STATE_VARIABLE_OrderedItemsCord_26_75));
    Var_78 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), SortableItems_58);
    Var_77 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_78);
    STATE_VARIABLE_OrderedItemsCord_27_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_26_75, Var_77);
    STATE_VARIABLE_OrderedItemsCord_30_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_27_76, NonReorderableItemsCord_59);
    IntItems_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_30_79);
    parse_tree__canonicalize_interface__order_items_2_p_0(ImpItems0_14, &ImpItems_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleNameContext_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeVersionNumbers_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntIncls_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImpIncls_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntAvails_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpAvails_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntItems_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpItems_20));
    }
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ItemsCord_10;

    parse_tree__canonicalize_interface__append_pred_related_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ItemsCord_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ItemsCord_10));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ItemsCord_7;

    parse_tree__canonicalize_interface__append_sym_name_map_items_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ItemsCord_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ItemsCord_7));
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_items_2_p_0(
  MR_Word Items_3,
  MR_Word * OrderedItems_4)
{
  {
    MR_Word TypeDefnMap_5;
    MR_Word InstDefnMap_6;
    MR_Word ModeDefnMap_7;
    MR_Word PredRelatedMap_8;
    MR_Word SortableItems_9;
    MR_Word NonReorderableItemsCord_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_OrderedItemsCord_18_18;
    MR_Word STATE_VARIABLE_OrderedItemsCord_20_20;
    MR_Word STATE_VARIABLE_OrderedItemsCord_22_22;
    MR_Word STATE_VARIABLE_OrderedItemsCord_24_24;
    MR_Word STATE_VARIABLE_OrderedItemsCord_26_26;
    MR_Word STATE_VARIABLE_OrderedItemsCord_27_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_OrderedItemsCord_30_30;
    MR_Box conv1_STATE_VARIABLE_OrderedItemsCord_20_20;
    MR_Box conv3_STATE_VARIABLE_OrderedItemsCord_22_22;
    MR_Box conv5_STATE_VARIABLE_OrderedItemsCord_24_24;
    MR_Box conv7_STATE_VARIABLE_OrderedItemsCord_26_26;

    Var_12 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_14 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]));
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0));
    Var_16 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_17 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__canonicalize_interface__classify_items_13_p_0(Items_3, Var_12, &TypeDefnMap_5, Var_13, &InstDefnMap_6, Var_14, &ModeDefnMap_7, Var_15, &PredRelatedMap_8, Var_16, &SortableItems_9, Var_17, &NonReorderableItemsCord_10);
    STATE_VARIABLE_OrderedItemsCord_18_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[4]), TypeDefnMap_5, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_18_18)), &conv1_STATE_VARIABLE_OrderedItemsCord_20_20);
    STATE_VARIABLE_OrderedItemsCord_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_OrderedItemsCord_20_20));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[5]), InstDefnMap_6, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_20_20)), &conv3_STATE_VARIABLE_OrderedItemsCord_22_22);
    STATE_VARIABLE_OrderedItemsCord_22_22 = ((MR_Word) (conv3_STATE_VARIABLE_OrderedItemsCord_22_22));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[6]), ModeDefnMap_7, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_22_22)), &conv5_STATE_VARIABLE_OrderedItemsCord_24_24);
    STATE_VARIABLE_OrderedItemsCord_24_24 = ((MR_Word) (conv5_STATE_VARIABLE_OrderedItemsCord_24_24));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[7]), PredRelatedMap_8, ((MR_Box) (STATE_VARIABLE_OrderedItemsCord_24_24)), &conv7_STATE_VARIABLE_OrderedItemsCord_26_26);
    STATE_VARIABLE_OrderedItemsCord_26_26 = ((MR_Word) (conv7_STATE_VARIABLE_OrderedItemsCord_26_26));
    Var_29 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), SortableItems_9);
    Var_28 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_29);
    STATE_VARIABLE_OrderedItemsCord_27_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_26_26, Var_28);
    STATE_VARIABLE_OrderedItemsCord_30_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_27_27, NonReorderableItemsCord_10);
    *OrderedItems_4 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_OrderedItemsCord_30_30);
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__classify_items_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeDefnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeDefnMap_3,
  MR_Word STATE_VARIABLE_InstDefnMap_0_4,
  MR_Word * STATE_VARIABLE_InstDefnMap_5,
  MR_Word STATE_VARIABLE_ModeDefnMap_0_6,
  MR_Word * STATE_VARIABLE_ModeDefnMap_7,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_8,
  MR_Word * STATE_VARIABLE_PredRelatedMap_9,
  MR_Word STATE_VARIABLE_SortableItems_0_10,
  MR_Word * STATE_VARIABLE_SortableItems_11,
  MR_Word STATE_VARIABLE_NonReorderableItemsCord_0_12,
  MR_Word * STATE_VARIABLE_NonReorderableItemsCord_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonReorderableItemsCord_13 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
      *STATE_VARIABLE_SortableItems_11 = STATE_VARIABLE_SortableItems_0_10;
      *STATE_VARIABLE_PredRelatedMap_9 = STATE_VARIABLE_PredRelatedMap_0_8;
      *STATE_VARIABLE_ModeDefnMap_7 = STATE_VARIABLE_ModeDefnMap_0_6;
      *STATE_VARIABLE_InstDefnMap_5 = STATE_VARIABLE_InstDefnMap_0_4;
      *STATE_VARIABLE_TypeDefnMap_3 = STATE_VARIABLE_TypeDefnMap_0_2;
    }
    else
    {
      MR_Word Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_NonReorderableItemsCord_157_157;
      MR_Word STATE_VARIABLE_SortableItems_158_158;
      MR_Word STATE_VARIABLE_PredRelatedMap_163_163;
      MR_Word STATE_VARIABLE_ModeDefnMap_167_167;
      MR_Word STATE_VARIABLE_InstDefnMap_168_168;
      MR_Word STATE_VARIABLE_TypeDefnMap_169_169;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeDefnMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstDefnMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ModeDefnMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_PredRelatedMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_SortableItems_0_10;
      MR_Word next_value_of_STATE_VARIABLE_NonReorderableItemsCord_0_12;

      switch (MR_tag((MR_Word) Item_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_NonReorderableItemsCord_157_157 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NonReorderableItemsCord_0_12, ((MR_Box) (Item_32)));
            STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
            STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
            STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
            STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
            STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_40 = (MR_Word) (MR_body((MR_Word) (Item_32), (MR_Integer) 1));
            MR_Word SymName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_40, (MR_Integer) 0))));
            MR_Word Params_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_40, (MR_Integer) 1))));
            MR_Integer Arity_47;
            MR_Word SymNameAndArity_48;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[2]), Params_42, &Arity_47);
            {
              SymNameAndArity_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SymNameAndArity_48, 0) = ((MR_Box) (SymName_41));
              MR_hl_field(MR_mktag(0), SymNameAndArity_48, 1) = ((MR_Box) (Arity_47));
            }
            parse_tree__canonicalize_interface__add_to_sym_name_items_map_4_p_0(SymNameAndArity_48, Item_32, STATE_VARIABLE_TypeDefnMap_0_2, &STATE_VARIABLE_TypeDefnMap_169_169);
            STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
            STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
            STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
            STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
            STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstDefnInfo_49 = (MR_Word) (MR_body((MR_Word) (Item_32), (MR_Integer) 2));
            MR_Word SymName_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_49, (MR_Integer) 0))));
            MR_Word Params_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_49, (MR_Integer) 1))));
            MR_Integer Arity_178;
            MR_Word SymNameAndArity_179;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[3]), Params_177, &Arity_178);
            {
              SymNameAndArity_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SymNameAndArity_179, 0) = ((MR_Box) (SymName_176));
              MR_hl_field(MR_mktag(0), SymNameAndArity_179, 1) = ((MR_Box) (Arity_178));
            }
            parse_tree__canonicalize_interface__add_to_sym_name_items_map_4_p_0(SymNameAndArity_179, Item_32, STATE_VARIABLE_InstDefnMap_0_4, &STATE_VARIABLE_InstDefnMap_168_168);
            STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
            STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
            STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
            STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
            STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeDefnInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word SymName_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_55, (MR_Integer) 0))));
                MR_Word Params_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_55, (MR_Integer) 1))));
                MR_Integer Arity_182;
                MR_Word SymNameAndArity_183;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[3]), Params_181, &Arity_182);
                {
                  SymNameAndArity_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SymNameAndArity_183, 0) = ((MR_Box) (SymName_180));
                  MR_hl_field(MR_mktag(0), SymNameAndArity_183, 1) = ((MR_Box) (Arity_182));
                }
                parse_tree__canonicalize_interface__add_to_sym_name_items_map_4_p_0(SymNameAndArity_183, Item_32, STATE_VARIABLE_ModeDefnMap_0_6, &STATE_VARIABLE_ModeDefnMap_167_167);
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
                STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
                STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemPredDeclInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word PorF_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_60, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Args_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_60, (MR_Integer) 2))));
                MR_Word MaybeWithType_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_60, (MR_Integer) 3))));
                MR_Word MaybeWithInst_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_60, (MR_Integer) 4))));
                MR_Word SymName_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDeclInfo_60, (MR_Integer) 0))));

                succeeded = (MaybeWithType_63 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = (MaybeWithInst_64 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MR_Word ArityPf_74;
                  MR_Integer Arity_194;
                  MR_Word PredRelated0_75;
                  MR_Box conv3_PredRelated0_75;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_62, &Arity_194);
                  {
                    ArityPf_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ArityPf_74, 0) = ((MR_Box) (Arity_194));
                    MR_hl_field(MR_mktag(0), ArityPf_74, 1) = (MR_Box) ((MR_Unsigned) (PorF_61));
                  }
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_8, ((MR_Box) (SymName_214)), &conv3_PredRelated0_75);
                  if (succeeded)
                  {
                    PredRelated0_75 = ((MR_Word) (conv3_PredRelated0_75));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word Known_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredRelated0_75, (MR_Integer) 0))) & (MR_Integer) 1);
                    MR_Word AllItems0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_75, (MR_Integer) 1))));
                    MR_Word ArityPfMap0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_75, (MR_Integer) 2))));
                    MR_Word AllItems_79;
                    MR_Word ArityPfMap_85;
                    MR_Word PredRelated_86;
                    MR_Word ArityPfItems0_80;
                    MR_Box conv4_ArityPfItems0_80;

                    AllItems_79 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), AllItems0_77, ((MR_Box) (Item_32)));
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ArityPfMap0_78, ((MR_Box) (ArityPf_74)), &conv4_ArityPfItems0_80);
                    if (succeeded)
                    {
                      ArityPfItems0_80 = ((MR_Word) (conv4_ArityPfItems0_80));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Word PredItems0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems0_80, (MR_Integer) 0))));
                      MR_Word ModeItems_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems0_80, (MR_Integer) 1))));
                      MR_Word PredItems_83;
                      MR_Word ArityPfItems_84;

                      PredItems_83 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), PredItems0_81, ((MR_Box) (Item_32)));
                      {
                        ArityPfItems_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArityPfItems_84, 0) = ((MR_Box) (PredItems_83));
                        MR_hl_field(MR_mktag(0), ArityPfItems_84, 1) = ((MR_Box) (ModeItems_82));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_74)), ((MR_Box) (ArityPfItems_84)), ArityPfMap0_78, &ArityPfMap_85);
                    }
                    else
                    {
                      MR_Word ModeItems_184;
                      MR_Word PredItems_185;
                      MR_Word ArityPfItems_186;

                      PredItems_185 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                      ModeItems_184 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                      {
                        ArityPfItems_186 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArityPfItems_186, 0) = ((MR_Box) (PredItems_185));
                        MR_hl_field(MR_mktag(0), ArityPfItems_186, 1) = ((MR_Box) (ModeItems_184));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_74)), ((MR_Box) (ArityPfItems_186)), ArityPfMap0_78, &ArityPfMap_85);
                    }
                    {
                      PredRelated_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_86, 0) = (MR_Box) ((MR_Unsigned) (Known_76));
                      MR_hl_field(MR_mktag(0), PredRelated_86, 1) = ((MR_Box) (AllItems_79));
                      MR_hl_field(MR_mktag(0), PredRelated_86, 2) = ((MR_Box) (ArityPfMap_85));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_214)), ((MR_Box) (PredRelated_86)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                  else
                  {
                    MR_Word AllItems_188;
                    MR_Word ModeItems_189;
                    MR_Word PredItems_190;
                    MR_Word ArityPfItems_191;
                    MR_Word ArityPfMap_192;
                    MR_Word PredRelated_193;

                    AllItems_188 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    PredItems_190 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    ModeItems_189 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    {
                      ArityPfItems_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArityPfItems_191, 0) = ((MR_Box) (PredItems_190));
                      MR_hl_field(MR_mktag(0), ArityPfItems_191, 1) = ((MR_Box) (ModeItems_189));
                    }
                    ArityPfMap_192 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_74)), ((MR_Box) (ArityPfItems_191)));
                    {
                      PredRelated_193 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_193, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), PredRelated_193, 1) = ((MR_Box) (AllItems_188));
                      MR_hl_field(MR_mktag(0), PredRelated_193, 2) = ((MR_Box) (ArityPfMap_192));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_214)), ((MR_Box) (PredRelated_193)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                }
                else
                {
                  MR_Word PredRelated0_202;
                  MR_Box conv5_PredRelated0_202;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_8, ((MR_Box) (SymName_214)), &conv5_PredRelated0_202);
                  if (succeeded)
                  {
                    PredRelated0_202 = ((MR_Word) (conv5_PredRelated0_202));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word AllItems0_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_202, (MR_Integer) 1))));
                    MR_Word AllItems_196;
                    MR_Word ArityPfMap_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_202, (MR_Integer) 2))));
                    MR_Word PredRelated_198;

                    AllItems_196 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), AllItems0_195, ((MR_Box) (Item_32)));
                    {
                      PredRelated_198 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_198, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), PredRelated_198, 1) = ((MR_Box) (AllItems_196));
                      MR_hl_field(MR_mktag(0), PredRelated_198, 2) = ((MR_Box) (ArityPfMap_197));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_214)), ((MR_Box) (PredRelated_198)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                  else
                  {
                    MR_Word AllItems_199;
                    MR_Word ArityPfMap_200;
                    MR_Word PredRelated_201;

                    AllItems_199 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    mercury__map__init_1_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), &ArityPfMap_200);
                    {
                      PredRelated_201 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_201, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), PredRelated_201, 1) = ((MR_Box) (AllItems_199));
                      MR_hl_field(MR_mktag(0), PredRelated_201, 2) = ((MR_Box) (ArityPfMap_200));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_214)), ((MR_Box) (PredRelated_201)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                }
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
                STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
                STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemModeDeclInfo_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word MaybePorF_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDeclInfo_88, (MR_Integer) 1))));
                MR_Word SymName_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDeclInfo_88, (MR_Integer) 0))));
                MR_Word Args_307 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDeclInfo_88, (MR_Integer) 2))));
                MR_Word MaybeWithInst_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDeclInfo_88, (MR_Integer) 3))));
                MR_Word PorF_290;

                succeeded = (MaybeWithInst_308 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (MaybePorF_89 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    PorF_290 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePorF_89, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Integer Arity_254;
                  MR_Word ArityPf_255;
                  MR_Word PredRelated0_243;
                  MR_Box conv0_PredRelated0_243;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Args_307, &Arity_254);
                  {
                    ArityPf_255 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ArityPf_255, 0) = ((MR_Box) (Arity_254));
                    MR_hl_field(MR_mktag(0), ArityPf_255, 1) = (MR_Box) ((MR_Unsigned) (PorF_290));
                  }
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_8, ((MR_Box) (SymName_304)), &conv0_PredRelated0_243);
                  if (succeeded)
                  {
                    PredRelated0_243 = ((MR_Word) (conv0_PredRelated0_243));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word Known_226 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredRelated0_243, (MR_Integer) 0))) & (MR_Integer) 1);
                    MR_Word AllItems0_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_243, (MR_Integer) 1))));
                    MR_Word ArityPfMap0_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_243, (MR_Integer) 2))));
                    MR_Word AllItems_229;
                    MR_Word ArityPfMap_234;
                    MR_Word PredRelated_235;
                    MR_Word ArityPfItems0_222;
                    MR_Box conv1_ArityPfItems0_222;

                    AllItems_229 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), AllItems0_227, ((MR_Box) (Item_32)));
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ArityPfMap0_228, ((MR_Box) (ArityPf_255)), &conv1_ArityPfItems0_222);
                    if (succeeded)
                    {
                      ArityPfItems0_222 = ((MR_Word) (conv1_ArityPfItems0_222));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Word ModeItems0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems0_222, (MR_Integer) 1))));
                      MR_Word ModeItems_216;
                      MR_Word PredItems_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArityPfItems0_222, (MR_Integer) 0))));
                      MR_Word ArityPfItems_218;

                      ModeItems_216 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ModeItems0_94, ((MR_Box) (Item_32)));
                      {
                        ArityPfItems_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArityPfItems_218, 0) = ((MR_Box) (PredItems_217));
                        MR_hl_field(MR_mktag(0), ArityPfItems_218, 1) = ((MR_Box) (ModeItems_216));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_255)), ((MR_Box) (ArityPfItems_218)), ArityPfMap0_228, &ArityPfMap_234);
                    }
                    else
                    {
                      MR_Word ModeItems_219;
                      MR_Word PredItems_220;
                      MR_Word ArityPfItems_221;

                      PredItems_220 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                      ModeItems_219 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                      {
                        ArityPfItems_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArityPfItems_221, 0) = ((MR_Box) (PredItems_220));
                        MR_hl_field(MR_mktag(0), ArityPfItems_221, 1) = ((MR_Box) (ModeItems_219));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_255)), ((MR_Box) (ArityPfItems_221)), ArityPfMap0_228, &ArityPfMap_234);
                    }
                    {
                      PredRelated_235 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_235, 0) = (MR_Box) ((MR_Unsigned) (Known_226));
                      MR_hl_field(MR_mktag(0), PredRelated_235, 1) = ((MR_Box) (AllItems_229));
                      MR_hl_field(MR_mktag(0), PredRelated_235, 2) = ((MR_Box) (ArityPfMap_234));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_304)), ((MR_Box) (PredRelated_235)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                  else
                  {
                    MR_Word AllItems_237;
                    MR_Word ModeItems_238;
                    MR_Word PredItems_239;
                    MR_Word ArityPfItems_240;
                    MR_Word ArityPfMap_241;
                    MR_Word PredRelated_242;

                    AllItems_237 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    PredItems_239 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
                    ModeItems_238 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    {
                      ArityPfItems_240 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArityPfItems_240, 0) = ((MR_Box) (PredItems_239));
                      MR_hl_field(MR_mktag(0), ArityPfItems_240, 1) = ((MR_Box) (ModeItems_238));
                    }
                    ArityPfMap_241 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_255)), ((MR_Box) (ArityPfItems_240)));
                    {
                      PredRelated_242 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_242, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), PredRelated_242, 1) = ((MR_Box) (AllItems_237));
                      MR_hl_field(MR_mktag(0), PredRelated_242, 2) = ((MR_Box) (ArityPfMap_241));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_304)), ((MR_Box) (PredRelated_242)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                }
                else
                {
                  MR_Word PredRelated0_276;
                  MR_Box conv2_PredRelated0_276;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_8, ((MR_Box) (SymName_304)), &conv2_PredRelated0_276);
                  if (succeeded)
                  {
                    PredRelated0_276 = ((MR_Word) (conv2_PredRelated0_276));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word AllItems0_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_276, (MR_Integer) 1))));
                    MR_Word AllItems_269;
                    MR_Word ArityPfMap_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredRelated0_276, (MR_Integer) 2))));
                    MR_Word PredRelated_271;

                    AllItems_269 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), AllItems0_268, ((MR_Box) (Item_32)));
                    {
                      PredRelated_271 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_271, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), PredRelated_271, 1) = ((MR_Box) (AllItems_269));
                      MR_hl_field(MR_mktag(0), PredRelated_271, 2) = ((MR_Box) (ArityPfMap_270));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_304)), ((MR_Box) (PredRelated_271)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                  else
                  {
                    MR_Word AllItems_273;
                    MR_Word ArityPfMap_274;
                    MR_Word PredRelated_275;

                    AllItems_273 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)));
                    mercury__map__init_1_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), &ArityPfMap_274);
                    {
                      PredRelated_275 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredRelated_275, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), PredRelated_275, 1) = ((MR_Box) (AllItems_273));
                      MR_hl_field(MR_mktag(0), PredRelated_275, 2) = ((MR_Box) (ArityPfMap_274));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_304)), ((MR_Box) (PredRelated_275)), STATE_VARIABLE_PredRelatedMap_0_8, &STATE_VARIABLE_PredRelatedMap_163_163);
                  }
                }
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
                STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
                STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragmaInfo_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_32, (MR_Integer) 1))));
                MR_Word Pragma_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_95, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) Pragma_96)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_NonReorderableItemsCord_157_157 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NonReorderableItemsCord_0_12, ((MR_Box) (Item_32)));
                      STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_SortableItems_0_10, &STATE_VARIABLE_SortableItems_158_158);
                      STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
                    }
                    break;
                }
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
                STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
              }
              break;
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_32)), STATE_VARIABLE_SortableItems_0_10, &STATE_VARIABLE_SortableItems_158_158);
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
                STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
                STATE_VARIABLE_NonReorderableItemsCord_157_157 = STATE_VARIABLE_NonReorderableItemsCord_0_12;
              }
              break;
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_NonReorderableItemsCord_157_157 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NonReorderableItemsCord_0_12, ((MR_Box) (Item_32)));
                STATE_VARIABLE_TypeDefnMap_169_169 = STATE_VARIABLE_TypeDefnMap_0_2;
                STATE_VARIABLE_InstDefnMap_168_168 = STATE_VARIABLE_InstDefnMap_0_4;
                STATE_VARIABLE_ModeDefnMap_167_167 = STATE_VARIABLE_ModeDefnMap_0_6;
                STATE_VARIABLE_PredRelatedMap_163_163 = STATE_VARIABLE_PredRelatedMap_0_8;
                STATE_VARIABLE_SortableItems_158_158 = STATE_VARIABLE_SortableItems_0_10;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_33;
      next_value_of_STATE_VARIABLE_TypeDefnMap_0_2 = STATE_VARIABLE_TypeDefnMap_169_169;
      next_value_of_STATE_VARIABLE_InstDefnMap_0_4 = STATE_VARIABLE_InstDefnMap_168_168;
      next_value_of_STATE_VARIABLE_ModeDefnMap_0_6 = STATE_VARIABLE_ModeDefnMap_167_167;
      next_value_of_STATE_VARIABLE_PredRelatedMap_0_8 = STATE_VARIABLE_PredRelatedMap_163_163;
      next_value_of_STATE_VARIABLE_SortableItems_0_10 = STATE_VARIABLE_SortableItems_158_158;
      next_value_of_STATE_VARIABLE_NonReorderableItemsCord_0_12 = STATE_VARIABLE_NonReorderableItemsCord_157_157;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeDefnMap_0_2 = next_value_of_STATE_VARIABLE_TypeDefnMap_0_2;
      STATE_VARIABLE_InstDefnMap_0_4 = next_value_of_STATE_VARIABLE_InstDefnMap_0_4;
      STATE_VARIABLE_ModeDefnMap_0_6 = next_value_of_STATE_VARIABLE_ModeDefnMap_0_6;
      STATE_VARIABLE_PredRelatedMap_0_8 = next_value_of_STATE_VARIABLE_PredRelatedMap_0_8;
      STATE_VARIABLE_SortableItems_0_10 = next_value_of_STATE_VARIABLE_SortableItems_0_10;
      STATE_VARIABLE_NonReorderableItemsCord_0_12 = next_value_of_STATE_VARIABLE_NonReorderableItemsCord_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__add_to_sym_name_items_map_4_p_0(
  MR_Word SymNameAndArity_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_SymNameItemsMap_0_10,
  MR_Word * STATE_VARIABLE_SymNameItemsMap_11)
{
  {
    MR_bool succeeded;
    MR_Word OldItems_8;
    MR_Box conv0_OldItems_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), STATE_VARIABLE_SymNameItemsMap_0_10, ((MR_Box) (SymNameAndArity_5)), &conv0_OldItems_8);
    if (succeeded)
    {
      OldItems_8 = ((MR_Word) (conv0_OldItems_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NewItems_9;

      NewItems_9 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldItems_8, ((MR_Box) (Item_6)));
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), ((MR_Box) (SymNameAndArity_5)), ((MR_Box) (NewItems_9)), STATE_VARIABLE_SymNameItemsMap_0_10, STATE_VARIABLE_SymNameItemsMap_11);
    }
    else
    {
      MR_Word NewItems_14;

      NewItems_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ((MR_Box) (Item_6)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), ((MR_Box) (SymNameAndArity_5)), ((MR_Box) (NewItems_14)), STATE_VARIABLE_SymNameItemsMap_0_10, STATE_VARIABLE_SymNameItemsMap_11);
    }
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__build_avail_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AvailMap_0_2,
  MR_Word * STATE_VARIABLE_AvailMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AvailMap_3 = STATE_VARIABLE_AvailMap_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10;
      MR_Word CurKind_13;
      MR_Word STATE_VARIABLE_AvailMap_19_19;
      MR_Word OldKind_14;
      MR_Box conv0_OldKind_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailMap_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_18 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        CurKind_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_17 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        CurKind_13 = (MR_Integer) 1;
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0), STATE_VARIABLE_AvailMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OldKind_14);
      if (succeeded)
      {
        OldKind_14 = ((MR_Word) (conv0_OldKind_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (OldKind_14 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (CurKind_13 == (MR_Integer) 0);
        if (succeeded)
        {
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (CurKind_13)), STATE_VARIABLE_AvailMap_0_2, &STATE_VARIABLE_AvailMap_19_19);
        }
        else
          STATE_VARIABLE_AvailMap_19_19 = STATE_VARIABLE_AvailMap_0_2;
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0), ((MR_Box) (ModuleName_10)), ((MR_Box) (CurKind_13)), STATE_VARIABLE_AvailMap_0_2, &STATE_VARIABLE_AvailMap_19_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_AvailMap_0_2 = STATE_VARIABLE_AvailMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AvailMap_0_2 = next_value_of_STATE_VARIABLE_AvailMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____arity_pf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____arity_pf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____avail_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____avail_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____avail_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____avail_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____pred_related_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____pred_related_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__canonicalize_interface__init(void)
{
}

void mercury__parse_tree__canonicalize_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_are_arities_pfs_known_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_avail_map_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_map_0);
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_sym_name_items_map_0);
}

void mercury__parse_tree__canonicalize_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__canonicalize_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.canonicalize_interface.
